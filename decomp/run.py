#!/usr/bin/env python3
"""Satu perintah asm->C untuk fomt (tanpa ROM, idempoten).

Pakai:  python3 decomp/run.py [N] [modul ...]
  N = jumlah fungsi per jalan (default 20). Ctrl-C kapan saja, jalankan lagi
  untuk lanjut. Semua progres tersimpan di decomp/state/progress.json.

Alur per fungsi: scan -> draft (m2c) -> judge (agbcc -O2 vs byte asm) ->
promote (stage ke decomp/promoted/). Hasil matched/promoted tidak pernah
ditimpa oleh jalan berikutnya.
"""
from __future__ import annotations
import contextlib, fcntl, json, os, re, socket, subprocess, sys, time
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / "tools"
ASM = ROOT / "asm"
STATE = ROOT / "decomp" / "state" / "progress.json"
DRAFTS = ROOT / "decomp" / "drafts"
PROMOTED = ROOT / "decomp" / "promoted"
LOGD = ROOT / "decomp" / "logs"

# Semua tool di-vendor di tools/ supaya repo tidak bergantung pada folder lain.
# Env var di bawah tersedia sebagai override bila ingin memakai toolchain luar.
PYDEPS = TOOLS / "python"
DECOMP_SRC = Path(os.environ.get("FOMT_DECOMPNET", TOOLS / "decompnet"))
for _p in (PYDEPS, DECOMP_SRC):
    if _p.is_dir() and str(_p) not in sys.path:
        sys.path.insert(0, str(_p))

AGBCC = Path(os.environ.get("FOMT_AGBCC", TOOLS / "agbcc/bin/agbcc"))
AGINC = Path(os.environ.get("FOMT_AGBCC_INCLUDE", TOOLS / "agbcc/include"))
AS = Path(os.environ.get("FOMT_AS", TOOLS / "arm-gnu/bin/arm-none-eabi-as"))
CPP = Path(os.environ.get("FOMT_CPP", TOOLS / "arm-gnu/bin/arm-none-eabi-cpp"))
M2C = Path(os.environ.get("FOMT_M2C", TOOLS / "m2c/m2c.py"))

# --- koordinasi antar-agent (multi-agent) -----------------------------------
# Dua agent (mis. OpenCode dan VSCode) boleh jalan bersamaan: tiap fungsi
# diklaim dulu di progress.json, jadi tidak ada fungsi yang digarap dua kali.
# Semua baca-ubah-tulis state dilakukan di bawah flock antar-proses; kerja
# panjang (m2c/agbcc) dilakukan DI LUAR lock supaya tetap paralel.
LOCKF = ROOT / "decomp" / "state" / "progress.lock"
CLAIM_TTL = int(os.environ.get("FOMT_CLAIM_TTL", "1800"))  # detik; klaim basi diambil alih
AGENT = (os.environ.get("FOMT_AGENT") or os.environ.get("DECOMP_AGENT_NAME")
         or f"{socket.gethostname()}:{os.getpid()}")[:40]
SAFE_AGENT = re.sub(r"[^A-Za-z0-9_.-]", "_", AGENT)[:40] or "agent"

MARK = re.compile(r'^\s*(thumb_func_start|arm_func_start|non_word_aligned_thumb_func_start)\s+(\S+)', re.M)
LBL = re.compile(r'^\s*(\S+):\s*@\s*(0x[0-9A-Fa-f]+)')
COMMON = ('#include <stdint.h>\ntypedef uint8_t u8;\ntypedef uint16_t u16;\ntypedef uint32_t u32;\n'
          'typedef int8_t s8;\ntypedef int16_t s16;\ntypedef int32_t s32;\n')
SKIP_MODULES = {"code_lib_syscall.s", "code_iwram.s", "vtables.s"}
# Fungsi svc satu instruksi (2-4 byte): C selalu kalah pendek vs agbcc -O2,
# dan objek ref tidak diekstrak utuh oleh match. Lewati permanen.
SKIP_FUNCS = {"ArcTan2", "CpuFastSet", "CpuSet", "IntrWait", "SoftReset", "Sqrt"}


def load() -> dict:
    return json.loads(STATE.read_text()) if STATE.exists() else {}


def save(s: dict) -> None:
    STATE.parent.mkdir(parents=True, exist_ok=True)
    tmp = STATE.with_suffix(".tmp")
    tmp.write_text(json.dumps(s, indent=1, sort_keys=True))
    tmp.replace(STATE)


@contextlib.contextmanager
def locked():
    """Kunci eksklusif antar-proses untuk progress.json (flock)."""
    LOCKF.parent.mkdir(parents=True, exist_ok=True)
    with LOCKF.open("a+") as fh:
        fcntl.flock(fh, fcntl.LOCK_EX)
        try:
            yield
        finally:
            fcntl.flock(fh, fcntl.LOCK_UN)


def update(fn):
    """Baca state -> ubah lewat fn(st) -> simpan, semuanya di bawah lock.
    Selalu baca ulang di dalam lock supaya tulisan agent lain tidak tertimpa."""
    with locked():
        st = load()
        out = fn(st)
        save(st)
        return out


def _live(e: dict, now: float) -> bool:
    """Klaim agent lain masih berlaku (belum lewat CLAIM_TTL)?"""
    return bool(e.get("claimed_by")) and now - e.get("claimed_at", 0) < CLAIM_TTL


def claim(name: str, agent: str | None = None) -> bool:
    """Ambil klaim satu fungsi. False bila agent lain masih memegangnya."""
    agent = agent or AGENT

    def m(st):
        e = st.get(name)
        if e is None or e["status"] in ("matched", "promoted"):
            return False
        now = time.time()
        if _live(e, now) and e["claimed_by"] != agent:
            return False
        e["claimed_by"], e["claimed_at"] = agent, now
        return True

    return update(m)


def touch(name: str, **kw) -> bool:
    """Ubah field satu fungsi tanpa melepas klaim (status antara)."""
    def m(st):
        e = st.get(name)
        if e is None:
            return False
        e.update(kw)
        return True

    return update(m)


def release(name: str) -> None:
    """Lepas klaim tanpa mengubah status (dipakai setelah draft/judge selesai)."""
    def m(st):
        e = st.get(name)
        if e is not None and e.get("claimed_by") == AGENT:
            e.pop("claimed_by", None)
            e.pop("claimed_at", None)

    update(m)


def ref_sizes(module: str) -> dict[str, int]:
    """Ukuran aktual tiap fungsi dari objek rakitan utuh (macro .size absen di
    file-file lama, jadi batas fungsi = offset simbol berikut dalam section)."""
    from elftools.elf.elffile import ELFFile as _EF
    from io import BytesIO as _BIO
    pf = ASM / module
    txt = pf.read_text(errors="replace")
    pre = ""
    if '.INCLUDE "asm/macro.inc"' in txt:
        # macro.inc memakai .MACRO kapital + .SYNTAX UNIFIED (case-insensitive);
        # as ARM peka huruf besar: pakai file asli apa adanya.
        pre = (ROOT / "asm/macro.inc").read_text(errors="replace")
        txt = "\n".join(l for l in txt.splitlines() if not l.strip().startswith(".INCLUDE")) + "\n"
    import tempfile
    with tempfile.NamedTemporaryFile("w", suffix=".s", delete=False) as tf:
        tf.write(pre + "\n.text\n" + txt)
        tp = tf.name
    with tempfile.NamedTemporaryFile(suffix=".o", delete=False) as of:
        op = of.name
    try:
        r = subprocess.run([str(AS), "-mcpu=arm7tdmi", "-I", str(ROOT), "-I", str(ROOT / "include"),
                            "-o", op, tp], capture_output=True, text=True)
        if r.returncode:
            return {}
        sys.path.insert(0, str(DECOMP_SRC))
        from decompnet.elfobj import _function_symbols as _fs
        d = _fs(_EF(_BIO(Path(op).read_bytes())))
        return {k: v[2] for k, v in d.items()}
    except Exception:
        return {}
    finally:
        Path(tp).unlink(missing_ok=True)
        Path(op).unlink(missing_ok=True)


def scan(modules: list[str] | None = None) -> dict:
    files = [ASM / m for m in modules] if modules else sorted(ASM.glob("*.s"))
    sizes: dict[str, dict[str, int]] = {}
    scanned: dict[str, dict] = {}
    for f in files:
        if f.name in SKIP_MODULES or not f.exists():
            continue
        if f.name not in sizes:
            sizes[f.name] = ref_sizes(f.name)
        for i, m in enumerate(ms := list(MARK.finditer(text := f.read_text(errors="replace")))):
            name = m.group(2)
            blk = text[m.start():ms[i + 1].start() if i + 1 < len(ms) else len(text)]
            addr = next((int(lm.group(2), 16) for t in blk.splitlines()[1:5]
                         if (lm := LBL.match(t))), None)
            if addr is None and (mm := re.match(r"func_([0-9A-Fa-f]{8})$", name)):
                addr = int(mm.group(1), 16)
            meta = {"module": f.name, "addr": addr,
                    "thumb": "thumb" in m.group(1).lower() or "arm_func_start" not in m.group(1).lower(),
                    "size": len(blk)}
            if name in sizes[f.name]:
                meta["ref_len"] = sizes[f.name][name]
            scanned[name] = meta

    def m(st):
        for name, meta in scanned.items():
            st[name] = meta | {"status": "pending"} if name not in st else st[name] | meta

    update(m)
    return load()


def func_block(module: str, name: str) -> str:
    text = (ASM / module).read_text(errors="replace")
    ms = list(MARK.finditer(text))
    for i, m in enumerate(ms):
        if m.group(2) == name:
            return text[m.start():ms[i + 1].start() if i + 1 < len(ms) else len(text)]
    raise KeyError(name)


def depad(code: bytes) -> bytes:
    """Buang padding alignment di ekor: '00 00' dan nop 'c0 46'.
    Jangan makan 'bx lr' (70 47) / 'bx r1' (08 47): itu instruksi, bukan pad.
    'bx r0' mentah = byte '00 47'. Sebagai EKOR, '00 47' AMBIGU: instruksi
    return vs pad 2-byte. Aturan: makan '00 47' di ekor HANYA bila byte
    sebelumnya adalah 'bx lr' (70 47) — pola 'bx lr + pad' khas ref.o rakitan
    ('...70 47 00 47'). 'pop {r0}; bx r0' (bc 01 00 47) dipertahankan."""
    while code.endswith((b"\0\0", b"\xc0\x46")):
        code = code[:-2]
    if code.endswith(b"\x70\x47\x00\x47"):
        code = code[:-2]
    return code


def pool_len(module: str, name: str, ref_len: int) -> int:
    """Panjang literal pool milik fungsi: word-word .4byte di ekor blok asm."""
    lines = func_block(module, name).splitlines()
    n = 0
    for ln in reversed(lines):
        s = ln.split("@")[0].strip()
        if re.match(r"^(\.\w+:)?\s*\.(4byte|word|long)\b", s):
            n += 1
        elif s == "" or s.startswith(".align"):
            continue
        else:
            break
    return n * 4


def _mask_for_compare(f, code: bytes) -> bytes:
    """Mask reloc fields dengan aturan yang SAMA untuk kandidat dan ref.
    R_ARM_THM_CALL (type 10) dimask byte-wise; tipe lain pakai mask decompnet."""
    from decompnet.elfobj import mask_relocs
    buf = bytearray(mask_relocs(code, [r for r in f.relocs if r.type != 10],
                                f.arch, f.big_endian))
    for r in f.relocs:
        if r.type == 10:
            for j, m in enumerate((0xFF, 0x07, 0x07, 0xFF)):
                if r.offset + j < len(buf):
                    buf[r.offset + j] &= 0xFF ^ m
    return bytes(buf)


def diff_note(cand, ref, module: str, name: str, ref_len: int) -> str:
    """Selisih pertama u/ log: beda panjang, offset byte, atau daftar reloc.
    ref_len = panjang aktual fungsi ref (batas simbol berikut); literal pool
    milik fungsi berikutnya (yg menempel di ekor blok asm tanpa batas .size)
    dikecualikan. Bila kandidat cocok dgn ref yg DIPERPANJANG ke batas
    berikut (kasus label non-fungsi menempel spt func_080D0EBC), pakai yg
    diperpanjang."""
    from decompnet.elfobj import _function_symbols as _gg
    from elftools.elf.elffile import ELFFile as _EE
    from io import BytesIO as _BB
    _raw = getattr(ref, "_raw_data", None)
    a = depad(_mask_for_compare(cand, cand.code))
    rb = depad(ref.code[:ref_len])
    if _raw is not None and len(a) > len(rb):
        try:
            _dd = _gg(_EE(_BB(_raw)))
            _sx, _so, _ss = _dd[name]
            _so &= ~1
            _sc = _EE(_BB(_raw)).get_section(_sx).data()
            _starts = sorted((o & ~1) for (sx, o, s) in _dd.values() if sx == _sx)
            _nxt2 = next((o for o in _starts if o > _so), None)
            _end2 = _nxt2 if _nxt2 is not None else len(_sc)
            _ext = depad(_sc[_so:_end2])
            if len(_ext) >= len(a) and _ext[:len(a)] == a:
                rb = _ext
        except Exception:
            pass
    pl = pool_len(module, name, ref_len)
    if pl and len(rb) > pl and len(a) == len(rb) - pl:
        rb = rb[:-pl]
    elif pl and len(rb) > pl and len(a) < len(rb) - pl:
        rb = rb[:len(a)]  # kandidat lebih pendek: bandingkan awalan saja
    b = _mask_for_compare(ref, rb)
    if len(a) != len(b):
        return f"len {len(a)} vs ref {len(b)}"
    for i, (x, y) in enumerate(zip(a, b)):
        if x != y:
            return f"byte +{i:#x}: {x:#x} vs ref {y:#x}"
    cr = [(r.offset, r.type, r.symbol) for r in cand.relocs]
    rr = [(r.offset, r.type, r.symbol) for r in ref.relocs]
    return "" if cr == rr else f"reloc {cr} vs ref {rr}"


def draft(name: str) -> bool:
    st = load()
    if st[name]["status"] in ("matched", "promoted"):
        return True
    out = DRAFTS / f"{name}.c"
    if out.exists():
        # draf manual/m2c sudah ada (mis. dari jalan lama): jangan timpa,
        # langsung anggap drafted agar di-judge ulang.
        touch(name, status="drafted")
        return True
    blk = func_block(st[name]["module"], name)
    asm_m2c = re.sub(r"^\s*(?:non_word_aligned_)?thumb_func_start\s+(\w+)", r"glabel \1", blk, flags=re.M)
    asm_m2c = re.sub(r"^\s*arm_func_start\s+(\w+)", r"glabel \1", asm_m2c, flags=re.M)
    asm_m2c = re.sub(r"\bld(s[hb])\b", r"ldr\1", asm_m2c)
    asm_m2c = re.sub(r"\s//\s", " @ ", asm_m2c)  # komentar '//' (anotasi manual) bukan komentar asm
    import tempfile
    with tempfile.NamedTemporaryFile("w", suffix=".s", delete=False) as f:
        f.write(f".syntax unified\n.thumb\n.text\n{asm_m2c}")
        p = f.name
    r = subprocess.run([sys.executable, str(M2C), "-t", "gba", "-f", name, p],
                       capture_output=True, text=True, timeout=60)
    Path(p).unlink(missing_ok=True)
    if r.returncode or not r.stdout.strip():
        touch(name, status="failed", note="m2c gagal; tulis manual")
        return False
    text = re.sub(r"^\s*\?\s+(\w+)", r"s32 \1", r.stdout, flags=re.M)  # '? name(' di awal baris
    text = re.sub(r"\(\?\s", "(s32 ", text)
    text = re.sub(r", \?([,)])", r", s32\1", text)
    text = re.sub(r"\(\? \*\)", "(s32 *)", text)
    text = re.sub(r"\bNULL\b", "0", text)  # NULL tanpa <stddef.h>
    out.parent.mkdir(parents=True, exist_ok=True)
    if not out.exists():  # jangan timpa draf yang muncul dari agent lain
        out.write_text(text if text.endswith("\n") else text + "\n")
    touch(name, status="drafted")
    return True


def judge(name: str) -> bool:
    sys.path.insert(0, str(DECOMP_SRC))
    from decompnet.elfobj import extract_function
    st = load()
    if st[name]["status"] == "promoted":
        return True
    e = st[name]
    if not (DRAFTS / f"{name}.c").exists():
        touch(name, status="failed", note="no draft (m2c gagal; tulis manual)", judged_mtime=0)
        return False
    body = (DRAFTS / f"{name}.c").read_text()
    used = set(re.findall(r"\b(func_[0-9A-Fa-f]{8}|gUnk_[0-9A-Fa-f]{8}|mem\w+|rand|malloc|free)\b", body))
    pre = body.split("{")[0]  # hanya cek deklarasi sebelum badan fungsi
    decls = "".join(f"s32 {s}(void);\n" if s.startswith("func_") else f"extern s32 {s};\n"
                    for s in sorted(used) if s != name and s not in pre)
    work = LOGD / f"judge_{name}" / SAFE_AGENT  # per-agent: dua agent tidak saling timpa file
    work.mkdir(parents=True, exist_ok=True)
    (work / "common.h").write_text(COMMON)
    (work / "func.c").write_text(f'#include "common.h"\n{decls}{body}\n')
    steps = [
        [str(CPP), "-nostdinc", "-undef", f"-I{AGINC}", f"-I{work}", str(work / "func.c"),
         "-o", str(work / "func.i")],
        [str(AGBCC), "-mthumb-interwork", "-O2", "-fhex-asm", str(work / "func.i"),
         "-o", str(work / "func.s")],
        [str(AS), "-mcpu=arm7tdmi", "-o", str(work / "func.o"), str(work / "func.s")],
        [str(AS), "-mcpu=arm7tdmi", "-I", str(ROOT), "-I", str(ROOT / "include"),
         "-o", str(work / "ref.o"), str(ASM / e["module"])],
    ]
    try:
        for cmd in steps:
            r = subprocess.run(cmd, capture_output=True, text=True)
            assert r.returncode == 0, (r.stdout + r.stderr)[-2000:]
        # extract_function upstream off-by-one utk STT_FUNC Thumb: st_value
        # ganjil (bit0=1 penanda Thumb) dipakai mentah sbg offset section,
        # sehingga byte pertama fungsi hilang. Ambil ulang dgn offset genap.
        # CATATAN: reloc upstream dihitung dari code yg terpotong (offset-1
        # dari posisi benar); kembalikan +1. Tapi untuk objek STT_FUNC (agbcc
        # .size, mis. func.o kandidat) offset reloc upstream SUDAH benar —
        # jangan digeser bila code mentah tidak terpotong (byte pertama sama).
        from decompnet.elfobj import FunctionObj as _FO, Reloc as _RL
        from decompnet.elfobj import _function_symbols as _g
        from elftools.elf.elffile import ELFFile as _E
        from io import BytesIO as _B
        def _x(data: bytes, nm: str) -> _FO | None:
            f = extract_function(data, nm)
            if f is None:
                return None
            _dd = _g(_E(_B(data)))
            if nm in _dd and _dd[nm][1] & 1 and (f.arch or "").lower().startswith("arm"):
                _sx, _so, _ss = _dd[nm]
                _sc = _E(_B(data)).get_section(_sx).data()
                _so &= ~1
                _true = _sc[_so:_so + _ss]
                # f.code mulai satu byte setelah _true (st_value ganjil). Cek
                # terhadap section utuh: fungsi terakhir bisa terpotong 1 byte.
                _shifted = bool(f.code) and f.code == _sc[_so + 1:_so + 1 + len(f.code)]
                f = _FO(name=f.name, arch=f.arch, big_endian=f.big_endian,
                        code=_true,
                        relocs=[_RL(r.offset + (1 if _shifted else 0), r.type, r.symbol, r.addend)
                                for r in f.relocs])
            return f
        cand = _x((work / "func.o").read_bytes(), name)
        assert cand is not None, "no function symbol"
        _ref_data = (work / "ref.o").read_bytes()
        ref = _x(_ref_data, name)
        assert ref is not None, "no ref symbol"
        ref._raw_data = _ref_data  # FunctionObj dataclass (non-frozen) -> boleh tambah atribut
        from decompnet.elfobj import _function_symbols as _fs
        from elftools.elf.elffile import ELFFile as _EF
        from io import BytesIO as _BIO
        _elf = _EF(_BIO((work / "ref.o").read_bytes()))
        _d = _fs(_elf)
        _sec_idx, _off, _sz = _d[name]
        _off &= ~1  # bit0 st_value = penanda Thumb, bukan alamat
        _sec = _elf.get_section(_sec_idx).data()
        # ref.o dirakit per-modul utuh oleh judge (bukan per-blok), jadi .size
        # macro absen; batas fungsi = offset simbol berikut dalam section.
        _starts = sorted((o & ~1) for (sx, o, s) in _d.values() if sx == _sec_idx)
        _nxt = next((o for o in _starts if o > _off), None)
        if _nxt is not None:
            ref_len = _nxt - _off
        else:
            ref_len = len(_sec) - _off
        ok = not (note := diff_note(cand, ref, e["module"], name, ref_len))
    except AssertionError as err:
        ok, note = False, str(err)[-300:]
    p = DRAFTS / f"{name}.c"
    touch(name, status="matched" if ok else "failed", note=note,
          judged_mtime=p.stat().st_mtime if p.exists() else 0)
    return ok



def promote(name: str) -> Path | None:
    # seluruh cek-marker + append + set status di bawah lock: dua agent tidak
    # bisa menyisipkan blok yang sama dua kali ke promoted/<modul>.cc
    with locked():
        st = load()
        e = st[name]
        if e["status"] == "promoted":
            return Path(e["promoted_to"])
        if e["status"] != "matched":
            return None
        out = PROMOTED / f"{Path(e['module']).stem}.cc"
        marker = f"// DECOMP-MATCHED {name} (dari {e['module']}; cek manusia sebelum ke src/)\n"
        if marker not in (out.read_text(errors="replace") if out.exists() else ""):
            out.parent.mkdir(parents=True, exist_ok=True)
            with out.open("a", errors="replace") as f:
                f.write(f"\n{marker}{(DRAFTS / f'{name}.c').read_text().rstrip()}\n")
        e["status"] = "promoted"
        e["promoted_to"] = str(out.relative_to(ROOT))
        save(st)
        return out


def progress(st: dict) -> str:
    """Ringkasan progres: total, berhasil, sisa, dan sebaran status."""
    total = len(st)
    c = Counter(v["status"] for v in st.values())
    ok = c["matched"] + c["promoted"]
    pct = (ok / total * 100.0) if total else 0.0
    return (f"total {total} | berhasil {ok} ({pct:.1f}%) | sisa {total - ok}"
            f" | pending {c['pending']}, drafted {c['drafted']}, failed {c['failed']},"
            f" promoted {c['promoted']}, matched {c['matched']}")


def short_note(note: str, limit: int = 80) -> str:
    """Satu baris ringkas untuk note judge; error compiler bisa multi-baris.
    Baris terakhir biasanya ringkasan errornya (baris pertama bisa terpotong
    karena note disimpan sebagai ekor stderr)."""
    lines = [ln.strip() for ln in (note or "").splitlines() if ln.strip()]
    if not lines:
        return ""
    pick = next((ln for ln in reversed(lines) if "error" in ln.lower()), lines[-1])
    pick = re.sub(r"\s+", " ", pick)
    m = re.search(r"func\.(?:c|cc):\d+:\s*", pick)
    if m:
        pick = pick[m.start():]
    return pick if len(pick) <= limit else pick[:limit - 3] + "..."


def main(argv: list[str]) -> int:
    global AGENT, SAFE_AGENT
    retry_all = False
    args: list[str] = []
    it = iter(argv)
    for a in it:
        if a == "--agent":
            AGENT = ((next(it, "") or "agent").strip() or "agent")[:40]
        elif a.startswith("--agent="):
            AGENT = ((a.split("=", 1)[1]).strip() or "agent")[:40]
        elif a == "--retry":
            retry_all = True  # ulangi juga fungsi 'failed' yang drafnya tidak berubah
        else:
            args.append(a)
    SAFE_AGENT = re.sub(r"[^A-Za-z0-9_.-]", "_", AGENT)[:40] or "agent"
    n = int(args[0]) if args and args[0].isdigit() else 20
    modules = [a for a in args if not a.isdigit()] or None
    st = scan(modules)
    # ref_len basi (diukur saat bug .size) -> hitung ulang bila hilang/tidak cocok
    # Catatan: ref_sizes memakai batas simbol berikut; utk fungsi TERAKHIR modul
    # atau yg diikuti label non-fungsi (.global tanpa thumb_func_start), ukuran
    # bisa kurang (ekor terpotong) — judge tetap memakai ekstraksi per-fungsi
    # (extract_function) sbg sumber utama, ref_len hanya pembanding.
    need = {v["module"] for v in st.values()
            if v["status"] in ("pending", "drafted", "failed")}
    fixed: dict[str, int] = {}
    for mod in need:
        try:
            fixed.update(ref_sizes(mod))
        except Exception:
            continue

    def _fix(s):
        for k, v in s.items():
            if k in fixed and fixed[k] != v.get("ref_len"):
                v["ref_len"] = fixed[k]

    update(_fix)

    def _skip(s):
        for k, v in s.items():
            if k in SKIP_FUNCS and v["status"] in ("pending", "drafted"):
                v["status"] = "failed"
                v["note"] = "skip permanen (svc satu instruksi; tulis manual jika perlu)"

    update(_skip)

    def _baseline(s):
        # entri lama (sebelum ada judged_mtime) dianggap sudah pernah di-judge:
        # baseline = mtime draf sekarang, jadi hanya suntingan SETELAH ini yang
        # memicu judge ulang. Pakai --retry untuk mengulang semua yang failed.
        for k, v in s.items():
            if "judged_mtime" not in v and v["status"] in ("failed", "matched", "promoted"):
                p = DRAFTS / f"{k}.c"
                v["judged_mtime"] = p.stat().st_mtime if p.exists() else 0

    update(_baseline)
    # Klaim fungsi dulu (di bawah lock). Agent lain yang sudah memegang sebuah
    # fungsi tidak diganggu; klaim basi (lewat FOMT_CLAIM_TTL) boleh diambil alih.
    st = load()
    now = time.time()

    def _queueable(k, v):
        """pending/drafted selalu masuk antre; failed HANYA bila drafnya berubah
        sejak judge terakhir (perbaikan manual) — kalau tidak, antre macet di
        fungsi yang gagal terus dan fungsi pending tidak pernah disentuh.
        `--retry` memaksa semua failed ikut diulang."""
        if v["status"] in ("pending", "drafted"):
            return True
        if v["status"] != "failed":
            return False
        if retry_all:
            return True
        p = DRAFTS / f"{k}.c"
        try:
            return p.exists() and p.stat().st_mtime > v.get("judged_mtime", 0)
        except OSError:
            return False

    cands = [k for k, v in sorted(st.items())
             if _queueable(k, v)
             and k not in SKIP_FUNCS
             and (not modules or v["module"] in modules)
             and not (_live(v, now) and v["claimed_by"] != AGENT)]
    todo: list[str] = []
    for k in cands:
        if len(todo) >= n:
            break
        if claim(k):
            todo.append(k)
    if todo:
        print(f"[{AGENT}] mulai {len(todo)} fungsi | {progress(load())}")
    elif n:
        print(f"[{AGENT}] tidak ada fungsi bebas: semua sudah diklaim agent lain "
              f"(klaim basi diambil alih setelah {CLAIM_TTL}s) atau sudah selesai."
              f" | {progress(load())}")
    else:
        print(f"[{AGENT}] status | {progress(load())}")
    done = {"MATCH": 0, "DIFF": 0}
    cur: str | None = None
    try:
        for i, name in enumerate(todo, 1):
            cur = name
            tag = f"[{i}/{len(todo)}]"
            if load()[name]["status"] == "pending" and not draft(name):
                done["DIFF"] += 1
                print(f"[{AGENT}] {tag} {name}: DIFF (m2c gagal)"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            elif judge(name):
                done["MATCH"] += 1
                out = promote(name)
                print(f"[{AGENT}] {tag} {name}: MATCH -> {out}"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            else:
                done["DIFF"] += 1
                print(f"[{AGENT}] {tag} {name}: DIFF ({short_note(load()[name].get('note', ''))})"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            release(name)
            cur = None
    except KeyboardInterrupt:
        if cur:
            release(cur)  # klaim dilepas; fungsi diulang pada jalan berikutnya
        print("\nBerhenti. Jalankan lagi perintah yang sama untuk lanjut.")
    fin = load()
    now = time.time()
    held = sum(1 for v in fin.values() if _live(v, now) and v["claimed_by"] != AGENT)
    print(f"Selesai [{AGENT}]: batch MATCH {done['MATCH']}, DIFF {done['DIFF']} | {progress(fin)}"
          + (f" | dipegang agent lain: {held}" if held else ""))
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
