#!/usr/bin/env python3
"""Satu perintah asm->C untuk fomt (tanpa ROM, idempoten, foreground).

Pakai:  python3 decomp/run.py [N] [modul ...] [--loop] [--wait S] [--retry] [--until HH:MM]
  N = jumlah fungsi per batch (default 20). Ctrl-C kapan saja, jalankan lagi
  untuk lanjut. Semua progres tersimpan di decomp/state/progress.json.
  --loop mengulangi batch sampai antrean pending/drafted habis; tetap
  foreground (tiap fungsi + ringkasan batch dicetak langsung), berhenti
  dengan Ctrl-C / deadline / antrean kosong.

Alur per fungsi: scan -> draft (m2c) -> judge (agbcc -O2 vs byte asm) ->
promote (stage ke decomp/promoted/). Hasil matched/promoted tidak pernah
ditimpa oleh jalan berikutnya.
"""
from __future__ import annotations
import contextlib, fcntl, json, os, re, signal, socket, subprocess, sys, time
from collections import Counter
from pathlib import Path

try:  # log tetap mengalir walau stdout diarahkan ke file/pipe (bukan TTY)
    sys.stdout.reconfigure(line_buffering=True)
except Exception:
    pass

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
GIT_LOCK = ROOT / "decomp" / "state" / "git.lock"  # serialisasi commit/push antar-agent
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


def claim_many(names: list[str], limit: int, agent: str | None = None) -> list[str]:
    """Klaim sampai `limit` fungsi dalam SATU tulis state.

    Klaim satu-per-satu menulis ulang progress.json (~800 KB) tiap fungsi;
    untuk batch besar itu puluhan detik tanpa output dan mengunci agent lain.
    """
    agent = agent or AGENT

    def m(st):
        out: list[str] = []
        for name in names:
            if len(out) >= limit:
                break
            e = st.get(name)
            if e is None or e["status"] in ("matched", "promoted"):
                continue
            now = time.time()
            if _live(e, now) and e["claimed_by"] != agent:
                continue
            e["claimed_by"], e["claimed_at"] = agent, now
            out.append(name)
        return out

    return update(m)


def release_all(agent: str | None = None) -> int:
    """Lepas semua klaim milik agent ini (dipakai saat berhenti).

    Tanpa ini, Ctrl-C meninggalkan sisa klaim batch yang memblokir agent lain
    sampai FOMT_CLAIM_TTL habis.
    """
    agent = agent or AGENT

    def m(st):
        n = 0
        for e in st.values():
            if e.get("claimed_by") == agent:
                e.pop("claimed_by", None)
                e.pop("claimed_at", None)
                n += 1
        return n

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


def trailing_data_len(module: str, name: str) -> int:
    """Panjang data non-word (.byte/.2byte/.short) yg menempel di ekor blok
    asm dan labelnya TIDAK dirujuk dari dalam blok (bukan literal pool).

    Kasus: func_08005A3C — 12 byte `.byte` milik data lain menempel setelah
    pool `.4byte` milik fungsi; ref mencakupnya (batas = simbol berikut)
    tapi kandidat C tidak pernah bisa menghasilkannya. Tanpa pengecualian
    ini fungsi tsb len-mismatch permanen. .byte yg labelnya dirujuk
    dianggap pool legit (jangan potong)."""
    lines = func_block(module, name).splitlines()
    refs: set[str] = set()
    for ln in lines:
        s = ln.split("@")[0]
        refs.update(re.findall(r"\.L[0-9A-Fa-f]+", s))
    n = 0
    for ln in reversed(lines):
        s = ln.split("@")[0].strip()
        m = re.match(r"^(\.\w+:)?\s*\.(byte|2byte|short)\b(.*)", s)
        if m:
            lab, _, args = m.groups()
            if lab and lab.strip(":") in refs:
                break  # pool legit milik fungsi: berhenti
            cnt = len([a for a in args.split(",") if a.strip()])
            n += cnt * (2 if "short" in (m.group(2) or "") or "2byte" in (m.group(2) or "") else 1)
            continue
        if s == "" or s.startswith(".align") or re.match(r"^\.\w+:$", s):
            continue
        break
    return n


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
    td = trailing_data_len(module, name)
    if td and len(rb) > td and len(a) == len(rb) - td:
        rb = rb[:-td]  # data asing menempel: bandingkan tanpa data itu
    if pl and len(rb) > pl and len(a) == len(rb) - pl:
        rb = rb[:-pl]
    elif pl and len(rb) > pl and len(a) < len(rb) - pl:
        rb = rb[:len(a)]  # kandidat lebih pendek: bandingkan awalan saja
    b = _mask_for_compare(ref, rb)
    if len(a) != len(b):
        tag = _score_tag(cand, ref, rb)
        return f"len {len(a)} vs ref {len(b)}{tag}"
    for i, (x, y) in enumerate(zip(a, b)):
        if x != y:
            tag = _score_tag(cand, ref, rb)
            return f"byte +{i:#x}: {x:#x} vs ref {y:#x}{tag}"
    cr = [(r.offset, r.type, r.symbol) for r in cand.relocs]
    rr = [(r.offset, r.type, r.symbol) for r in ref.relocs]
    if cr != rr:
        tag = _score_tag(cand, ref, rb)
        return f"reloc {cr} vs ref {rr}{tag}"
    return ""


def _score_tag(cand, ref, rb: bytes) -> str:
    """Adopsi scoring.diff (decompdecomp): klasifikasi selisih
    r=regalloc s=stack i=operand + lokasi instruksi pertama yg beda.

    Hanya anotasi (tidak mengubah keputusan MATCH); gagal diam-diam -> ''.
    scoring upstream hanya kenal ARM-mode: jalankan capstone Thumb manual.
    """
    try:
        sys.path.insert(0, str(DECOMP_SRC))
        sys.path.insert(0, str(PYDEPS))
        from decompnet import scoring as _sc
        import capstone as _cs
        md = _cs.Cs(_cs.CS_ARCH_ARM, _cs.CS_MODE_THUMB)
        md.detail = True
        md.skipdata = True

        def _dis(code, relocs):
            masked = bytearray(code)
            for r in relocs:
                if r.type == 10:  # R_ARM_THM_CALL: kedua paruh bl
                    for j in range(4):
                        m = (0xFF, 0x07, 0x07, 0xFF)[j]
                        if r.offset + j < len(masked):
                            masked[r.offset + j] &= 0xFF ^ m
                elif r.type == 2:  # R_ARM_ABS32: word literal pool
                    for j in range(4):
                        if r.offset + j < len(masked):
                            masked[r.offset + j] = 0
            out = []
            for ins in md.disasm(bytes(masked), 0):
                rel = next((r for r in relocs if ins.address <= r.offset < ins.address + ins.size), None)
                ops = ins.op_str
                if rel is not None:
                    tgt = f"<{rel.symbol}>"
                    nums = list(re.finditer(r"-?0x[0-9a-f]+|\b\d+\b", ops))
                    ops = ops[:nums[-1].start()] + tgt + ops[nums[-1].end():] if nums else f"{ops} {tgt}".strip()
                out.append(_sc.Insn(ins.address, ins.mnemonic, ops, f"{ins.mnemonic} {ops}".strip()))
            return out

        t_ins, c_ins = _dis(bytes(rb), ref.relocs), _dis(bytes(_mask_for_compare(cand, cand.code)), cand.relocs)
        rows = []
        sm = __import__("difflib").SequenceMatcher(a=[i.mnemonic for i in t_ins],
                                                     b=[i.mnemonic for i in c_ins], autojunk=False)
        counts: dict[str, int] = {}
        first = None
        for op, a0, a1, b0, b1 in sm.get_opcodes():
            if op == "equal":
                for x, y in zip(t_ins[a0:a1], c_ins[b0:b1]):
                    pen, mark = _sc._classify(x, y)
                    if mark != " ":
                        counts[mark] = counts.get(mark, 0) + 1
                        if first is None:
                            first = (mark, x.text, y.text)
                continue
            for k in range(max(a1 - a0, b1 - b0)):
                x = t_ins[a0 + k] if a0 + k < a1 else None
                y = c_ins[b0 + k] if b0 + k < b1 else None
                m = "|" if (x and y) else ("<" if x else ">")
                counts[m] = counts.get(m, 0) + 1
                if first is None:
                    first = (m, x.text if x else "", y.text if y else "")
        if not counts:
            return ""
        summary = ",".join(f"{n}{_sc.MARKERS.get(m, m)}" for m, n in sorted(counts.items()))
        if first is not None:
            m, t, c = first
            return f" [{summary} @{m} {t[:38]} | {c[:38]}]"
        return f" [{summary}]"
    except Exception:
        return ""


SANITIZE_VERSION = 4  # naikkan tiap _sanitize_m2c berubah perilaku

# Penanda isi draf yg belum pernah lewat sanitasi kini: bila salah satu ada,
# draf dianggap mentah walau sanitize_v sudah kini (kasus: draf ditulis oleh
# jalan lama yg menandai versi baru tanpa menjalankan sanitasi).
#
# 'M2C_ERROR' TIDAK termasuk: itu kegagalan struktur kontrol m2c yg butuh
# tulis manual — regenerasi otomatis tidak akan memperbaikinya, dan draf yg
# sudah diperbaiki manual tidak boleh ditimpa. 'sp +' (Unpack) juga manual.
RAW_MARKERS = ("extern ?", "extern s32 .L", "? *", "? temp", "? arg")


def _looks_sanitized(text: str) -> bool:
    """True bila draf tampaknya SUDAH lewat sanitasi kini.

    Heuristik isi (bukan versi): tidak ada pola mentah dan tidak ada akses
    '->unk' yatim (tanpa GenObj). Draf C polos TANPA struct (mis. fungsi
    aritmetika murni) juga bersih — tidak ada yang perlu disanitasi.
    Draf manual tulisan manusia (struct sendiri, typedef sendiri) juga lolos
    di sini — memang tidak boleh disentuh regenerasi. Perlindungan ganda:
    resanitize_stale juga melewati draf yg mtime-nya lebih baru dari
    judged_mtime (aturan edit manual yg sama dgn _queueable)."""
    if any(m in text for m in RAW_MARKERS):
        return False
    if "->unk" in text and "GenObj" not in text:
        return False
    return True


def _raw_on_disk(p: Path) -> bool:
    """True bila draf di disk masih mentah (belum lewat sanitasi kini)."""
    try:
        return not _looks_sanitized(p.read_text())
    except OSError:
        return False


def resanitize_stale() -> int:
    """Tulis ulang draf failed yg dibuat sanitasi lama agar memakai sanitasi
    kini, TANPA menyentuh draf yg pernah diedit manual.

    Draf manual = mtime lebih baru dari judged_mtime (aturan yg sama dgn
    _queueable). Draf m2c murni (mtime <= judged_mtime) di-regenerate dari
    m2c mentah + sanitasi kini; yg hasilnya beda dianggap 'berubah' sehingga
    ikut antre judge ulang otomatis. Return: jumlah draf yg ditulis ulang.
    Selain versi lama, draf yg ISINYA masih mentah (RAW_MARKERS) ikut ditulis
    ulang walau sanitize_v sudah kini — menutup celah draf lama yg ditandai
    versi baru tanpa pernah disanitasi."""
    st = load()
    print(f"[{AGENT}] resanitasi: memindai draf lama (sanitasi v{SANITIZE_VERSION})...")
    n = done = 0
    checked_now: list[str] = []  # regen identik: fixpoint, jangan cek lagi
    stale = [k for k in sorted(st)
             if st[k]["status"] == "failed" and (st[k].get("sanitize_v", 0) < SANITIZE_VERSION
                 or (st[k].get("sanitize_checked_v", 0) < SANITIZE_VERSION
                     and _raw_on_disk(DRAFTS / f"{k}.c")))]
    total = len(stale)
    for k in stale:
        v = st[k]
        done += 1
        if done % 50 == 0 or done == total:
            print(f"[{AGENT}] resanitasi {done}/{total} (ditulis ulang: {n})...")
        p = DRAFTS / f"{k}.c"
        if not p.exists():
            continue
        try:
            if p.stat().st_mtime > v.get("judged_mtime", 0):
                continue  # edit manual: jangan sentuh, biar ikut antre biasa
        except OSError:
            continue
        try:
            blk = func_block(v["module"], k)
        except KeyError:
            continue
        asm_m2c = re.sub(r"^\s*(?:non_word_aligned_)?thumb_func_start\s+(\w+)", r"glabel \1", blk, flags=re.M)
        asm_m2c = re.sub(r"^\s*arm_func_start\s+(\w+)", r"glabel \1", asm_m2c, flags=re.M)
        asm_m2c = re.sub(r"\bld(s[hb])\b", r"ldr\1", asm_m2c)
        asm_m2c = re.sub(r"\s//\s", " @ ", asm_m2c)
        import tempfile
        with tempfile.NamedTemporaryFile("w", suffix=".s", delete=False) as f:
            f.write(f".syntax unified\n.thumb\n.text\n{asm_m2c}")
            tp = f.name
        try:
            r = subprocess.run([sys.executable, str(M2C), "-t", "gba", "-f", k, tp],
                               capture_output=True, text=True, timeout=60)
        finally:
            Path(tp).unlink(missing_ok=True)
        if r.returncode or not r.stdout.strip():
            continue
        new = _sanitize_m2c(r.stdout, k)
        old = p.read_text()
        if new.rstrip() != old.rstrip():
            p.write_text(new if new.endswith("\n") else new + "\n")
            n += 1
        else:
            # fixpoint: regen identik, sanitizer kini tak bisa memperbaiki
            # draf ini (butuh tulis manual). Tandai agar tidak di-regen ulang
            # tiap jalan; dibuka lagi saat SANITIZE_VERSION naik.
            checked_now.append(k)

    def _mark(s):
        for k, v in s.items():
            if v["status"] == "failed" and v.get("sanitize_v", 0) < SANITIZE_VERSION:
                v["sanitize_v"] = SANITIZE_VERSION
        for k in checked_now:
            if k in s and s[k]["status"] == "failed":
                s[k]["sanitize_checked_v"] = SANITIZE_VERSION

    update(_mark)
    return n


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
    text = _sanitize_m2c(r.stdout, name)
    out.parent.mkdir(parents=True, exist_ok=True)
    if not out.exists():  # jangan timpa draf yang muncul dari agent lain
        out.write_text(text if text.endswith("\n") else text + "\n")
    touch(name, status="drafted")
    return True


def _sanitize_m2c(text: str, name: str = "") -> str:
    """Bersihkan draf mentah m2c agar peluang kompilasi naik, tanpa mengubah
    makna kode: '?' -> 's32' (tipe maupun pointer), 'extern ? x;' -> deklarasi,
    lanjutkan ke GenObj bila masih ada akses '->unk'."""
    text = re.sub(r"^\s*\?\s+(\w+)", r"s32 \1", text, flags=re.M)  # '? name(' di awal baris
    text = re.sub(r"\(\?\s", "(s32 ", text)
    text = re.sub(r", \?([,)])", r", s32\1", text)
    text = re.sub(r"\(\? \*\)", "(s32 *)", text)
    text = re.sub(r"\?\s*\*", "s32 *", text)  # '? *temp', '?*p', sisa tipe-? pointer
    text = re.sub(r"(?m)^(\s*)\?\s+(\w+)\s*;", r"\1s32 \2;", text)  # '? foo;' sisa
    text = re.sub(r"\bextern \?\s*(\w+)\s*;", r"extern s32 \1;", text)
    text = re.sub(r"\bNULL\b", "0", text)  # NULL tanpa <stddef.h>
    text = _label_addrs(text, name)
    text = _deref_bytes(text)
    return _generic_structs(text)


def _label_addrs(text: str, name: str = "") -> str:
    """Ganti label literal-pool `.LXXXXXXXX` (nilai yg di-inline m2c sebagai
    nama variabel) dengan nilai heksanya dari blok asm fungsi, agar kompilasi.

    m2c menulis mis. `*(arg0 + .L08001134)` dgn `extern s32 .L08001134;` —
    keduanya tidak valid C. Nilai sebenarnya ada di blok asm (`ldr r1,
    .L08001134 @ =0x00006C64` + baris `.L08001134: .4byte ...`); ambil dari
    sana. Bila tidak ketemu (label lompatan yg bocor ke ekspresi), ganti 0
    agar kompilasi — judge yg menentukan MATCH."""
    labels = set(re.findall(r"\.L[0-9A-Fa-f]{6,8}", text))
    if not labels:
        return text
    vals: dict[str, str] = {}
    if name:
        try:
            modtext = (ASM / load()[name]["module"]).read_text(errors="replace")
            for lb in labels:
                m = re.search(rf"^[ \t]*{re.escape(lb)}:[ \t]*\.(?:4byte|word|long)[ \t]+(\S+)",
                              modtext, re.M)
                if m:
                    v = m.group(1).split("@")[0].strip().rstrip(",")
                    vals[lb] = v if re.match(r"^(0x[0-9A-Fa-f]+|\d+)$", v) else "0"
                else:
                    vals[lb] = "0"
        except (KeyError, FileNotFoundError):
            vals = {lb: "0" for lb in labels}
    else:
        vals = {lb: "0" for lb in labels}
    for lb in labels:
        v = vals.get(lb, "0")
        text = re.sub(rf"extern\s+s32\s*{re.escape(lb)}\s*;", f"s32 {lb[1:]};", text)
        # hanya label bernilai numerik yg di-inline; label simbol (lompatan/
        # string .L...) dibiarkan agar tidak merusak ekspresi
        if re.match(r"^(0x[0-9A-Fa-f]+|\d+)$", v):
            text = text.replace(lb, v)
    # sisa label yg jadi variabel (tak dipakai di ekspresi) -> hapus deklarasinya
    text = re.sub(r"(?m)^s32 L[0-9A-Fa-f]{6,8};\n", "", text)
    return text


def _deref_bytes(text: str) -> str:
    """Bungkus dereference aritmetika byte `*(p + N) = v` dgn cast `(u8 *)`
    agar kompilasi: tanpa cast, `*(GenObj * + int)` tidak valid C.

    Pola yg disentuh HANYA `*(... + ...)` / `*ptr` mentah hasil m2c; akses
    `v->unkXX` (sudah ditangani GenObj) tidak diubah."""
    def _fix(m: re.Match) -> str:
        inner = m.group(1)
        if "->" in inner:
            return m.group(0)
        # sisipkan cast pada basis pointer pertama
        m2 = re.match(r"\s*([A-Za-z_]\w*)\s*\+", inner)
        if m2:
            inner = inner.replace(m2.group(1), f"(u8 *){m2.group(1)}", 1)
        elif re.match(r"\s*[A-Za-z_]\w*\s*$", inner):
            inner = f"(u8 *){inner.strip()}"
        return f"*({inner})"
    return re.sub(r"\*\(([^;()]+(?:\([^;()]*\)[^;()]*)*)\)", _fix, text)


def _generic_structs(text: str) -> str:
    """Sambung draf m2c yg memakai `arg->unkXX` padahal arg bertipe pointer
    generik: bangun SATU struct GenObj per fungsi dengan member tepat pada
    offset yg dipakai (padding di antaranya), lalu ubah argumen generik
    menjadi pointer ke struct itu.

    Semua offset digabung dalam satu struct; tipe member mengikuti pemakaian
    TERKUAT di seluruh fungsi:
    - offset yg menampung alamat vtable (`= &vtable_...`) -> `void *`
    - offset yg di-deref dua tingkat utk NILAI (`v->unkX->field`) -> `void *`
    - offset yg jadi base method-call (`v->unkX->m(...)`) atau menampung
      alamat objek lain (`= w->unkY`, `= w + N`) -> `struct GenObj *`
    - sisanya `s32`
    Variabel lokal/argumen generik yg dipakai 'v->unk' ikut menjadi GenObj *;
    variabel bertipe jelas (mis. `s8 *`) tidak diubah.

    Hanya draf m2c mentah (belum ada 'struct') yg disentuh; fungsi yg sudah
    MATCH/promoted tidak pernah dilewati sini (draft() mengembalikan awal).
    """
    if "struct" in text or "->unk" not in text:
        return text
    # Pisahkan draf per baris: deklarasi (extern/prototype tanpa badan)
    # dipertahankan; fungsi pertama yg mengandung '->unk' dibungkus GenObj.
    lines = text.splitlines(keepends=True)
    fstart = fend = None
    for i, ln in enumerate(lines):
        if "{" in ln and "(" in ln.split("{")[0] and ";" not in ln.split("{")[0]:
            if fstart is None:
                fstart = i
            fend = i
            break
    if fstart is None or fend is None:
        return text
    head, siglines, rest = "".join(lines[:fstart]), "".join(lines[fstart:fend + 1]), "".join(lines[fend + 1:])
    sig = siglines
    # offset heksadesimal yg dipakai tiap variabel: var->unkHHH dan var.unkHHH
    uses: dict[str, set[int]] = {}
    for var, off in re.findall(r"(\w+)(?:->|\.)unk([0-9A-Fa-f]+)", text):
        try:
            uses.setdefault(var, set()).add(int(off, 16))
        except ValueError:
            continue
    if not uses:
        return text
    # argumen generik saja yg diubah tipenya (hindari mengubah variabel dgn
    # tipe jelas spt vtable yg sudah benar); argumen yg TIDAK PERNAH dipakai
    # 'v->unk' dibiarkan agar signature tidak berubah sia-sia
    gen = set(re.findall(r"(?:^|[,\(])\s*(?:void|s32|u32|s8|s16|u8|u16)\s*(\*?)\s*(\w+)\s*(?=[,\)])", sig))
    genvars = ({v for _, v in gen} | {v for v in uses if re.search(
        rf"\b(?:void|s32|u32)\s*\*?\s*{re.escape(v)}\s*[,\)]", sig)}) & set(uses)
    # variabel lokal generik yg menampung 'X->unkY', aritmetika pointer, atau
    # kembalian call generik (void */s32) lalu dipakai 'v->unk' juga menengah
    for dst, src in re.findall(r"(\w+)\s*=\s*(\w+)->unk[0-9A-Fa-f]+", text):
        if src in uses and re.search(rf"(?m)^\s*(?:void|s32|u32)\s*\*?\s*{re.escape(dst)}\s*;", rest):
            genvars.add(dst)
    for dst in set(uses) - genvars:
        if re.search(rf"(?m)^\s*(?:void|s32|u32)\s*\*?\s*{re.escape(dst)}\s*;", rest):
            genvars.add(dst)
    if not genvars:
        return text
    # rantai: var yg nilainya diambil dari ->unk atau aritmetika pointer
    # var lain (`X + N`) = pointer-menengah
    childof: dict[str, str] = {}
    for dst, src in re.findall(r"(\w+)\s*=\s*(\w+)->unk[0-9A-Fa-f]+", text):
        if dst in uses or dst in genvars:
            childof[dst] = src
    for dst, src in re.findall(r"(\w+)\s*=\s*(\w+)\s*\+\s*(?:0x[0-9A-Fa-f]+|\d+)", text):
        if dst in uses and src in uses:
            childof.setdefault(dst, src)
    depth: dict[str, int] = {}
    def _depth(v: str, seen: set[str] | None = None) -> int:
        if v in depth:
            return depth[v]
        seen = seen or set()
        if v in seen:  # siklus: putus dgn void*
            return 99
        depth[v] = 1 + _depth(childof[v], seen | {v}) if v in childof else 0
        return depth[v]
    for v in list(uses) + list(genvars):
        _depth(v)
    # akses method-call / rantai per OFFSET: offset yg jadi base call dua
    # tingkat 'v->unkA->unkB(...)' atau function-pointer 'v->unkH(...)' harus
    # bertipe GenObj* (dgn cast di call-site), bukan void*.
    # Klasifikasi per VARIABEL+offset (bukan global per offset): offset yg
    # sama bisa dipakai sbg s32 di satu variabel dan GenObj* di variabel lain
    # (padding membuat offset aman dipakai bersama).
    varoff_op: dict[tuple[str, int], set[str]] = {}
    for m in re.finditer(r"(\w+)->unk([0-9A-Fa-f]+)(.*)$", text, re.M):
        try:
            o = int(m.group(2), 16)
        except ValueError:
            continue
        tail = m.group(3).lstrip()
        if tail.startswith("->"):
            op = "callbase" if re.match(r"->\s*\w+\s*\(", tail) else "deref"
        elif tail.startswith("=") and "&vtable" in tail:
            op = "vtable"
        else:
            op = "value"
        varoff_op.setdefault((m.group(1), o), set()).add(op)
    for m in re.finditer(r"(\w+)->unk([0-9A-Fa-f]+)\s*\(", text):
        try:
            varoff_op.setdefault((m.group(1), int(m.group(2), 16)), set()).add("method")
        except ValueError:
            continue
    # offset rantai 'w->unkA->unkB': B dicatat dari variabel perantaranya
    chain_offs: dict[str, set[int]] = {}
    for m in re.finditer(r"(\w+)->unk([0-9A-Fa-f]+)\s*->\s*unk([0-9A-Fa-f]+)", text):
        try:
            chain_offs.setdefault(m.group(1), set()).add(int(m.group(3), 16))
        except ValueError:
            continue
    members: dict[str, dict[int, str]] = {}
    for v, offs in sorted(uses.items()):
        if v not in genvars and v not in childof:
            continue  # tipe jelas (mis. vtable): biarkan, judge akan bicara
        if _depth(v) >= 2:
            continue  # rantai dalam: offsetnya sudah tercakup via induknya
        members[v] = {o: f"unk{o:X}" for o in sorted(offs)}
    # rantai: variabel perantara menyumbang offset rantai ke struct bersama
    for v, offs in chain_offs.items():
        if v in members:
            for o in sorted(offs):
                members[v].setdefault(o, f"unk{o:X}")
    alloffs = sorted({o for mem in members.values() for o in mem})
    if not alloffs:
        return text
    # tipe member: GenObj* bila variabelnya pointer-menengah (childof:
    # nilainya alamat objek lain); void* bila dipakai 'v->unkX = &vtable' /
    # deref NILAI dua tingkat; s32 bila hanya value/store biasa.
    # Callbase/method dua tingkat ('t->unkA->unkB(...)') TIDAK memaksa GenObj*:
    # call-site di-cast eksplisit, jadi unkA boleh void*/s32 sesuai utamanya.
    ptr_offs: set[int] = set()
    for v in members:
        if v in childof:
            ptr_offs.update(members[v])
    void_offs: set[int] = set()
    for (v, o), ops in varoff_op.items():
        if v in members and ("vtable" in ops or "deref" in ops):
            void_offs.add(o)
    void_offs -= ptr_offs
    # method-target dua tingkat 't->unkA->unkB(' (pola draf ASLI, sebelum
    # call-site di-cast): '->unkB' pada void*/s32 TIDAK kompilasi, jadi unkA
    # yg jadi target method harus GenObj* (vtable murni yg tak dipakai lain
    # tetap void*).
    for m in re.finditer(r"(\w+)->unk([0-9A-Fa-f]+)->unk[0-9A-Fa-f]+\s*\(", rest):
        try:
            o = int(m.group(2), 16)
        except ValueError:
            continue
        ptr_offs.add(o)
        void_offs.discard(o)
    midvars = {v for v in members if v in childof}
    struct = "typedef struct GenObj {\n"
    pos = 0
    for o in alloffs:
        if o > pos:
            struct += f"    u8 _pad{pos:X}[{o - pos}];\n"
            pos = o
        if o in ptr_offs:
            struct += f"    struct GenObj *unk{o:X};\n"
        elif o in void_offs:
            struct += f"    void *unk{o:X};\n"
        else:
            struct += f"    s32 unk{o:X};\n"
        pos = o + 4
    struct += "} GenObj;\n"
    # variabel pointer-menengah (lokal): ubah deklarasi generik 'X;' jadi 'GenObj *X;'
    # (GenObj* dikonversi implisit ke void*/s32* di call-site, jadi aman).
    # Syarat: X dipakai 'X->unk' DAN (punya induk rantai ATAU ditugasi dari
    # objek lain 'X = <obj>' / kembalian call 'X = func_(...)' — alias
    # sederhana, mis. 'sp4 = temp_r4', 't = func_08008940(arg0)').
    for v in list(members):
        if v in childof or re.search(rf"\b{re.escape(v)}\s*=\s*\w+->unk", rest) \
                or re.search(rf"\b{re.escape(v)}\s*=\s*\w+\s*;", rest) \
                or re.search(rf"\b{re.escape(v)}\s*=\s*\w+\s*\([^;]*\)\s*;", rest) \
                or re.search(rf"\b{re.escape(v)}\s*=\s*\*\w+", rest):
            rest = re.sub(rf"(?m)^(\s*)(?:void|s32|u32)\s*\*?\s*{re.escape(v)}\s*;",
                          rf"\1GenObj *{v};", rest, count=1)
    # call-site method dua tingkat 't->unkA->unkB(args)' DULU (sebelum cast
    # voidkept): function pointer 'unkB' bertipe s32 di struct, panggil via
    # cast eksplisit agar kompilasi; judge yg menentukan MATCH
    rest = re.sub(r"(\w+)->unk([0-9A-Fa-f]+)->unk([0-9A-Fa-f]+)\s*\(",
                  r"((void (*)(void *,...))(\1->unk\2->unk\3))(", rest)
    # akses by-value 'v.unkHH' (m2c untuk 'str rX, [sp,#N]' skalar): v di
    # stack bertipe s32/u32 biasa, BUKAN struct. 'v.unkHH = C' -> 'v = C' bila
    # HH==0 (offset nol = variabel itu sendiri); offset lain dibiarkan apa
    # adanya (tetap DIFF, butuh manual).
    def _byval(m: re.Match) -> str:
        v, off = m.group(1), int(m.group(2), 16)
        decl = re.search(rf"(?m)^\s*(s32|u32|void|s8|s16|u8|u16)\s*\*?\s*{re.escape(v)}\s*;", rest)
        if off == 0 and decl and "*" not in decl.group(0):
            return v
        return m.group(0)
    rest = re.sub(r"(\w+)\.unk([0-9A-Fa-f]+)", _byval, rest)
    # struct-by-value murni: var dipakai '.unk' di >=2 offset berbeda, tak
    # pernah 'v->'/telanjang-scalar (hanya '&v' + '.unk...'). Mis. 'sp0' yg
    # diisi via func(&sp0,...) lalu dibaca sp0.unk1/2/3.
    dotuses: dict[str, set[int]] = {}
    for var, off in re.findall(r"(\w+)\.unk([0-9A-Fa-f]+)", rest):
        try:
            dotuses.setdefault(var, set()).add(int(off, 16))
        except ValueError:
            continue
    for v, offs in dotuses.items():
        if len(offs) < 2:
            continue
        if re.search(rf"\b{re.escape(v)}\s*->", rest):
            continue
        bare = [m for m in re.finditer(rf"\b{re.escape(v)}\b(?!\s*\.\s*unk)", rest)]
        ok_struct = True
        for m in bare:
            pre_ = rest[max(0, m.start() - 20):m.start()]
            post = rest[m.end():m.end() + 20]
            if re.search(r"(s32|u32|void|GenObj|s8|s16|u8|u16)\s*\*?\s*$", pre_) and re.match(r"\s*;", post):
                continue  # deklarasinya sendiri
            if re.match(r"\s*[),;]", post) or re.search(r"[(&,=]\s*$", pre_):
                continue  # '&v' / argumen / assign-tujuan: kompatibel struct
            ok_struct = False
            break
        if ok_struct:
            rest = re.sub(rf"(?m)^(\s*)(?:s32|u32)\s+{re.escape(v)}\s*;",
                          rf"\1GenObj {v};", rest, count=1)
    # 2) u8/u16/s8/s16 member: offset yg hanya dipakai via akses byte
    # ('*(u8*)(p+N)' dari _deref_bytes ATAU 'arg->unkHH' dgn H ganjil +
    # nilai <256) -> member u8 agar 'ldrb' bukan 'ldr'. Terapkan hanya bila
    # offset tsb DIPAKAI sbg byte di draf (pola cast (u8*)... + N).
    # aritmetika pointer 'X + N' pada GenObj*: bungkus dgn cast byte
    # ('GenObj*' + N mengali N dgn sizeof; aslinya aritmetika byte)
    if re.search(r"GenObj\s*\*\s*\w+\s*;", rest) and re.search(r"\w+\s*\+\s*(?:0x[0-9A-Fa-f]+|\d+)", rest):
        for v in sorted(members):
            rest = re.sub(rf"\b{re.escape(v)}\s*\+\s*(0x[0-9A-Fa-f]+|\d+)",
                          rf"(GenObj *)((u8 *){v} + \1)", rest)
    # paksa argumen generik menjadi GenObj *
    def _sigfix(mo: re.Match) -> str:
        t, star, v = mo.group(1), mo.group(2), mo.group(3)
        if v in genvars:
            return f"GenObj *{v}"
        return mo.group(0)
    sig = re.sub(r"\b(void|s32|u32|s8|s16|u8|u16)\s*(\*?)\s*(\w+)",
                 _sigfix, sig, count=len(genvars) + 8)
    return head + struct + sig + rest


def _judge(name: str, tag: str | None = None) -> tuple[bool, str]:
    """Pipeline judge TANPA mengubah state. -> (ok, note).

    tag = subfolder log (default: nama agent). Audit `verify` memakai tag
    sendiri supaya log judge asli tidak tertimpa.
    """
    sys.path.insert(0, str(DECOMP_SRC))
    from decompnet.elfobj import extract_function
    e = load()[name]
    d = DRAFTS / f"{name}.c"
    promoted_src = None
    if (tag or "").startswith("verify_"):
        # audit: nilai BLOK PROMOTED apa adanya (bukan draf kerja yg mungkin
        # sudah disanitasi ulang) — cermin kondisi saat MATCH, bukan kini.
        p = ROOT / e.get("promoted_to", "")
        if p.exists():
            marker = f"// DECOMP-MATCHED {name} "
            text = p.read_text(errors="replace")
            i = text.find(marker)
            if i >= 0:
                j = text.find("// DECOMP-MATCHED ", i + len(marker))
                promoted_src = text[i:j if j >= 0 else len(text)].strip() + "\n"
    if not d.exists():
        return False, "no draft (m2c gagal; tulis manual)"
    body = promoted_src or d.read_text()
    used = set(re.findall(r"\b(func_[0-9A-Fa-f]{8}|vtable_unk_[0-9A-Fa-f]{8}|gUnk_[0-9A-Fa-f]{8}|mem\w+|rand|malloc|free)\b", body))
    # deklarasi = semua sebelum definisi FUNGSI (bukan sebelum '{' pertama:
    # draf/blok bisa diawali typedef struct). Tanpa ini, prototype fungsi
    # di bawah typedef diduplikasi dgn versi (void) -> conflicting types.
    # Blok promoted diawali marker '// DECOMP-MATCHED <nama> (dari ...)':
    # kurung "(dari" menjebak pencarian di bawah (-> pre terpotong tinggal
    # fragmen komentar, SEMUA deklarasi blok diduplikasi). Analisis memakai
    # teks tanpa marker; definisi = kemunculan nama yg dibuka badan '{'
    # (prototype diakhiri ';' tidak ikut).
    probe = re.sub(r"(?m)^[ \t]*// DECOMP-MATCHED .*$", "", body)
    mdef = re.search(rf"\b{re.escape(name)}\s*\([^;{{}}]*\)\s*\{{", probe)
    if mdef is None:  # fallback: kemunculan pertama seperti dulu
        mdef = re.search(rf"\b{re.escape(name)}\s*\(", probe)
    pre = probe[:mdef.start()] if mdef else probe.split("{")[0]
    pre_clean = re.sub(r"\?\s*", "", pre)  # 'extern ? vtable...' tetap terhitung dideklarasikan
    decls = "".join(f"s32 {s}(void);\n" if s.startswith("func_") else f"extern s32 {s};\n"
                    for s in sorted(used) if s != name and s not in pre and s not in pre_clean)
    work = LOGD / f"judge_{name}" / (tag or SAFE_AGENT)  # per-agent: tidak saling timpa
    work.mkdir(parents=True, exist_ok=True)
    if promoted_src:
        ctx = ""  # audit: blok promoted dinilai apa adanya (cermin saat MATCH)
    else:
        # tipe yg didefinisikan draf sendiri dikecualikan dari konteks
        # bersama (C menolak redefinisi). GenObj dikecualikan dari konteks
        # di _shared_context, jadi di sini cukup tipe bernama lain.
        own = set(re.findall(r"typedef\s+struct\s+\w*\s*\{.*?\}\s*(\w+)\s*;", body, re.S))
        ctx = _shared_context()
        if own:
            ctx = "".join(
                blk for blk in re.findall(r"typedef\s+struct\s*\{.*?\}\s*\w+\s*;",
                                          ctx, re.S)
                if not any(re.search(rf"\}}\s*{re.escape(t)}\s*;", blk) for t in own))
    (work / "common.h").write_text(COMMON + ctx)
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
                # Adopsi match_arm.link (decompdecomp): simbol tanpa .size
                # (rakitan; as menandainya STT_FUNC tapi st_size=0) diukur
                # sampai simbol berikut / akhir section, bukan dari st_value
                # ganjil (bit Thumb) seperti upstream. STT_FUNC dgn .size asli
                # (agbcc) tidak tersentuh.
                try:
                    _st = _E(_B(data)).get_section_by_name(".symtab")
                    if next(s["st_size"] for s in _st.iter_symbols()
                            if s.name == nm) == 0:
                        _starts = sorted((o & ~1) for (sx, o, s) in _dd.values()
                                         if sx == _sx)
                        _so0 = _so & ~1
                        _nxt = next((o for o in _starts if o > _so0), None)
                        _sc0 = _E(_B(data)).get_section(_sx).data()
                        _ss = (_nxt if _nxt is not None else len(_sc0)) - _so0
                except Exception:
                    pass
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
    if os.environ.get("FOMT_KEEP_ARTIFACTS", "") == "":
        for leaf in ("func.o", "func.i", "ref.o", "common.h"):
            try:
                (work / leaf).unlink()  # ramping: hanya func.c/func.s yg disimpan
            except OSError:
                pass
    return ok, note


def judge(name: str) -> bool:
    st = load()
    if st[name]["status"] == "promoted":
        return True
    ok, note = _judge(name)
    p = DRAFTS / f"{name}.c"
    touch(name, status="matched" if ok else "failed", note=note,
          judged_mtime=p.stat().st_mtime if p.exists() else 0)
    return ok


def verify_all(tag: str | None = None) -> int:
    """Audit ulang semua fungsi promoted/matched dari nol, TANPA ubah state.

    Return: jumlah fungsi yang tidak lagi MATCH (0 = semua lolos audit).
    """
    st = load()
    names = sorted(k for k, v in st.items() if v["status"] in ("promoted", "matched"))
    tag = tag or f"verify_{SAFE_AGENT}"
    if not names:
        print(f"[{AGENT}] verify: belum ada fungsi promoted/matched")
        return 0
    print(f"[{AGENT}] verify {len(names)} fungsi | log decomp/logs/judge_<nama>/{tag}/")
    bad: list[tuple[str, str]] = []
    for i, name in enumerate(names, 1):
        ok, note = _judge(name, tag=tag)
        print(f"[{AGENT}] [{i}/{len(names)}] {name}: {'MATCH' if ok else 'DIFF'}"
              f" ({short_note(note)}) | gagal {len(bad)}")
        if not ok:
            bad.append((name, note))
    # Cek juga isi promoted benar-benar sama dengan draf yang diverifikasi.
    stale = []
    for name in names:
        d = DRAFTS / f"{name}.c"
        p = ROOT / st[name].get("promoted_to", "")
        body = d.read_text() if d.exists() else ""
        if not body or not p.exists() or body.rstrip() not in p.read_text(errors="replace"):
            stale.append(name)
    good = len(names) - len(bad)
    print(f"[{AGENT}] verify selesai: {good}/{len(names)} MATCH, {len(bad)} DIFF"
          f" | promoted != draft: {len(stale)}")
    for name, note in bad:
        print(f"  - {name}: {short_note(note)}")
    for name in stale:
        print(f"  - {name}: isi promoted tidak sama dengan draft")
    return len(bad) + len(stale)



def _ctx_types(text: str) -> tuple[set[str], set[str]]:
    """(dipakai, didefinisikan): tipe konteks (Vtbl/Obj/S_*) dalam satu teks."""
    defines = set(re.findall(r"typedef\s+struct\s+\w*\s*\{.*?\}\s*(\w+)\s*;",
                             text, re.S))
    used = {m for m in re.findall(r"\b(Vtbl|Obj|S_[0-9A-Fa-f]+)\b", text)
            if m not in defines}
    return used, defines


def _expand_ctx(body: str) -> str:
    """Lengkapi draf/blok dgn definisi tipe konteks yg dipakainya.

    Tipe konteks (Vtbl/Obj/S_*) yg dipakai tapi tidak didefinisikan lokal
    disalin dari _shared_context() ke depan body — dahulu draf/blok seperti
    itu hanya kompilasi berkat common.h saat judge, tapi gagal saat verify
    (blok promoted dinilai apa adanya, tanpa konteks) atau saat konteks
    berubah. Return body yg sudah mandiri."""
    used, _ = _ctx_types(body)
    if not used:
        return body
    avail = _shared_context()
    if not avail:
        return body
    blocks: dict[str, str] = {}
    for m in re.finditer(r"typedef\s+struct\s*\{.*?\}\s*(\w+)\s*;",
                         avail, re.S):
        blocks.setdefault(m.group(1), m.group(0).strip())
    # dependensi transitif: definisi yg disalin bisa merujuk tipe ctx lain
    # (mis. Obj -> Vtbl; S_* -> Vtbl)
    need = set(used)
    queue = sorted(used)
    while queue:
        blk = blocks.get(queue.pop(), "")
        for dep in re.findall(r"\b(Vtbl|Obj|S_[0-9A-Fa-f]+)\b", blk):
            if dep not in need and dep in blocks:
                need.add(dep)
                queue.append(dep)
    # urutan dependensi: Vtbl dulu (Obj/S_* bisa merujuknya)
    order = sorted(need, key=lambda t: (t != "Vtbl", t))
    pre = "".join(blocks[t] + "\n" for t in order if t in blocks)
    return (pre + body) if pre else body


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
            text = _expand_ctx((DRAFTS / f"{name}.c").read_text())
            with out.open("a", errors="replace") as f:
                f.write(f"\n{marker}{text.rstrip()}\n")
        e["status"] = "promoted"
        e["promoted_to"] = str(out.relative_to(ROOT))
        save(st)
        return out


CTX_MAX_BYTES = 6000  # batas agar judge tetap cepat; struct lama dipangkas


def _shared_context() -> str:
    """Konteks bersama utk judge: struct/prototype yg TERBUKTI dari fungsi
    MATCH/promoted (padanan edit_context decompdecomp, versi file).

    Diambil dari blok GenObj/typedef di decomp/promoted/*.cc; definisi yg
    konflik (nama sama, isi beda) dibuang agar kompilasi tidak pecah.
    Draf yg mendefinisikan sendiri tipe dgn nama sama tetap menang karena
    C menolak redefinisi — judge yg menentukan. Return '' bila belum ada."""
    try:
        seen: dict[str, str] = {}
        for f in sorted(PROMOTED.glob("*.cc")):
            try:
                text = f.read_text(errors="replace")
            except OSError:
                continue
            for m in re.finditer(r"typedef\s+struct\s*\{.*?\}\s*(\w+)\s*;",
                                 text, re.S):
                key, block = m.group(1), m.group(0).strip() + "\n"
                if key in ("GenObj",):
                    continue  # anonim per-fungsi (layout beda tiap fungsi)
                if key not in seen:
                    seen[key] = block
                elif seen[key] != block:
                    seen[key] = ""  # konflik: buang, jangan racuni kompilasi
        out = "".join(b for b in seen.values() if b)
        return out[:CTX_MAX_BYTES]
    except Exception:
        return ""


def progress(st: dict) -> str:
    """Ringkasan progres: total, berhasil, sisa, dan sebaran status."""
    total = len(st)
    c = Counter(v["status"] for v in st.values())
    ok = c["matched"] + c["promoted"]
    pct = (ok / total * 100.0) if total else 0.0
    return (f"total {total} | berhasil {ok} ({pct:.1f}%) | sisa {total - ok}"
            f" | pending {c['pending']}, drafted {c['drafted']}, failed {c['failed']},"
            f" promoted {c['promoted']}, matched {c['matched']}")


def bar_text(st: dict, width: int = 28) -> str:
    """Bar progres sederhana untuk dilihat manusia."""
    total = len(st)
    ok = sum(1 for v in st.values() if v["status"] in ("promoted", "matched"))
    pct = (ok / total * 100.0) if total else 0.0
    fill = int(width * ok / total) if total else 0
    return f"[{'#' * fill}{'-' * (width - fill)}] {ok}/{total} ({pct:.1f}%)"


def _show_status(msg: str) -> None:
    """Tampilkan status 'sedang mengerjakan' di satu baris (hanya di TTY)."""
    if sys.stdout.isatty():
        sys.stdout.write("\r\033[K" + msg)
        sys.stdout.flush()


def _clear_status() -> None:
    """Hapus baris status sementara sebelum mencetak hasil permanen."""
    if sys.stdout.isatty():
        sys.stdout.write("\r\033[K")
        sys.stdout.flush()


DEADLINE_HIT = False


def _on_alarm(signum, frame):
    global DEADLINE_HIT
    DEADLINE_HIT = True
    raise KeyboardInterrupt


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


def autopush(names: str | list[str]) -> bool:
    """Commit + push hasil MATCH. Dipanggil SEKALI per batch (bukan per fungsi).

    Hanya stage file esensial: draf MATCH, blok promoted, progress.json.
    Artefak judge (ref.o/func.o/func.i/common.h) di-ignore via .gitignore
    dan TIDAK ikut commit. Log teks (func.c/func.s) tetap ikut sbg audit.
    FOMT_AUTOPUSH=0 mematikan. Gagal push tidak menggagalkan run: commit tetap
    ada di lokal dan pesan peringatan dicetak.
    """
    if isinstance(names, str):
        names = [names]
    if os.environ.get("FOMT_AUTOPUSH", "1") == "0":
        return False
    GIT_LOCK.parent.mkdir(parents=True, exist_ok=True)
    with GIT_LOCK.open("a+") as fh:
        fcntl.flock(fh, fcntl.LOCK_EX)
        try:
            def git(*args: str) -> subprocess.CompletedProcess:
                return subprocess.run(["git", "-C", str(ROOT), *args],
                                      capture_output=True, text=True)

            if git("rev-parse", "--is-inside-work-tree").returncode != 0:
                return False
            st = load()
            paths = {"decomp/state/progress.json"}
            for name in names:
                e = st.get(name)
                paths.add(f"decomp/drafts/{name}.c")
                if e and e.get("promoted_to"):
                    paths.add(e["promoted_to"])
                # log teks sbg audit (biner di-ignore, tidak ikut)
                for leaf in ("func.c", "func.s"):
                    p = LOGD / f"judge_{name}" / SAFE_AGENT / leaf
                    if p.exists():
                        paths.add(str(p.relative_to(ROOT)))
            existing = [p for p in sorted(paths) if (ROOT / p).exists()]
            if not existing:
                return False
            git("add", "--", *existing)
            if git("diff", "--cached", "--quiet").returncode == 0:
                return False
            msg = ("decomp: promote " + names[0] if len(names) == 1
                   else f"decomp: promote {len(names)} funcs ({names[0]}..{names[-1]})")
            c = git("commit", "-q", "-m", msg)
            if c.returncode != 0:
                print(f"[{AGENT}] autopush: commit gagal: {c.stderr.strip()[-200:]}")
                return False
            p = git("push", "-q")
            if p.returncode != 0:
                print(f"[{AGENT}] autopush: commit lokal OK, push gagal: "
                      f"{p.stderr.strip()[-160:]}")
                return False
            print(f"[{AGENT}] autopush: {msg}")
            return True
        finally:
            fcntl.flock(fh, fcntl.LOCK_UN)


def _queueable(k, v, retry_all: bool) -> bool:
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


def run_batch(n: int, modules: list[str] | None, retry_all: bool,
              until: str, batch_no: int | None = None) -> tuple[int, int, bool, bool]:
    """Kerjakan satu batch hingga `n` fungsi. Tetap foreground: tiap fungsi
    dan baris progres dicetak ke stdout saat dikerjakan.

    Return (match, diff, had_work, stopped): had_work False bila antrean
    kosong (tidak ada yang dikerjakan); stopped True bila Ctrl-C/deadline
    memotong batch di tengah jalan.
    """
    prefix = f"[{AGENT}]" if batch_no is None else f"[{AGENT}] batch#{batch_no}"
    # Klaim fungsi dulu (di bawah lock). Agent lain yang sudah memegang sebuah
    # fungsi tidak diganggu; klaim basi (lewat FOMT_CLAIM_TTL) boleh diambil alih.
    st = load()
    now = time.time()
    cands = [k for k, v in sorted(st.items())
             if _queueable(k, v, retry_all)
             and k not in SKIP_FUNCS
             and (not modules or v["module"] in modules)
             and not (_live(v, now) and v["claimed_by"] != AGENT)]
    todo = claim_many(cands, n) if n else []
    if todo:
        print(f"{prefix} mulai {len(todo)} fungsi"
              + (f" | stop {until}" if until else "")
              + f" | {progress(load())}")
        print(f"{prefix} {bar_text(load())}")
    elif n:
        fin = load()
        held = sum(1 for k, v in fin.items()
                   if _queueable(k, v, retry_all)
                   and _live(v, time.time()) and v["claimed_by"] != AGENT)
        if held:
            print(f"{prefix} tidak ada fungsi bebas: {held} fungsi sedang dipegang "
                  f"agent lain (klaim basi diambil alih setelah {CLAIM_TTL}s)."
                  f" | {progress(fin)}")
        else:
            print(f"{prefix} antrean habis: tidak ada pending/drafted"
                  f" (sisa failed butuh perbaikan manual di decomp/drafts/)."
                  f" | {progress(fin)}")
    else:
        print(f"{prefix} status | {progress(load())}")
        print(f"{prefix} {bar_text(load())}")
    done = {"MATCH": 0, "DIFF": 0}
    matched_names: list[str] = []
    stopped = False
    try:
        for i, name in enumerate(todo, 1):
            tag = f"[{i}/{len(todo)}]"
            matched = False
            _show_status(f"{prefix} {tag} {name}: mengerjakan...")
            if load()[name]["status"] == "pending" and not draft(name):
                done["DIFF"] += 1
                _clear_status()
                print(f"{prefix} {tag} {name}: DIFF (m2c gagal)"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            elif judge(name):
                done["MATCH"] += 1
                matched = True
                out = promote(name)
                matched_names.append(name)
                _clear_status()
                print(f"{prefix} {tag} {name}: MATCH -> {out}"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            else:
                done["DIFF"] += 1
                _clear_status()
                print(f"{prefix} {tag} {name}: DIFF ({short_note(load()[name].get('note', ''))})"
                      f" | batch {done['MATCH']}M/{done['DIFF']}D | {progress(load())}")
            release(name)
    except KeyboardInterrupt:
        _clear_status()
        stopped = True
        if DEADLINE_HIT:
            print(f"\nBerhenti: deadline {until} tercapai.")
        else:
            print("\nBerhenti. Jalankan lagi perintah yang sama untuk lanjut.")
    finally:
        # Lepas semua klaim batch ini; kalau tidak, fungsi sisa batch tetap
        # "dipegang" agent ini dan memblokir agent lain sampai TTL habis.
        release_all()
        # Satu commit+push per batch (bukan per fungsi) supaya histori tidak
        # spam dan push tidak balapan antar agent.
        if matched_names:
            autopush(matched_names)
    fin = load()
    now = time.time()
    held = sum(1 for v in fin.values() if _live(v, now) and v["claimed_by"] != AGENT)
    print(f"Selesai {prefix}: batch MATCH {done['MATCH']}, DIFF {done['DIFF']} | {progress(fin)}"
          + (f" | dipegang agent lain: {held}" if held else ""))
    print(f"{prefix} {bar_text(fin)}")
    return done["MATCH"], done["DIFF"], bool(todo), stopped


def main(argv: list[str]) -> int:
    global AGENT, SAFE_AGENT
    retry_all = False
    loop = False
    wait_s = 5.0
    until = ""
    args: list[str] = []
    it = iter(argv)
    for a in it:
        if a == "--agent":
            AGENT = ((next(it, "") or "agent").strip() or "agent")[:40]
        elif a.startswith("--agent="):
            AGENT = ((a.split("=", 1)[1]).strip() or "agent")[:40]
        elif a == "--retry":
            retry_all = True  # ulangi juga fungsi 'failed' yang drafnya tidak berubah
        elif a == "--loop":
            loop = True  # ulangi batch sampai antrean habis (tetap foreground)
        elif a.startswith("--wait"):
            try:
                if a == "--wait":
                    wait_s = max(0.0, float((next(it, "") or "5").strip() or "5"))
                elif a.startswith("--wait="):
                    wait_s = max(0.0, float(a.split("=", 1)[1].strip() or "5"))
                else:
                    raise ValueError(a)
            except (ValueError, StopIteration):
                print("format --wait harus detik, mis. --wait=5", file=sys.stderr)
                return 2
        elif a == "--until":
            until = (next(it, "") or "").strip()
        elif a.startswith("--until="):
            until = a.split("=", 1)[1].strip()
        else:
            args.append(a)
    SAFE_AGENT = re.sub(r"[^A-Za-z0-9_.-]", "_", AGENT)[:40] or "agent"
    if args and args[0] == "verify":
        return 1 if verify_all() else 0
    deadline = None
    if until:
        try:
            hh, mm = (int(x) for x in until.split(":"))
            t = time.localtime()
            deadline = time.mktime((t.tm_year, t.tm_mon, t.tm_mday, hh, mm, 0, 0, 0, -1))
        except (ValueError, TypeError):
            print("format --until harus HH:MM, mis. --until 15:58", file=sys.stderr)
            return 2
        if deadline <= time.time():
            print(f"--until {until} sudah lewat; pakai jam yang akan datang", file=sys.stderr)
            return 2
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
            if v["status"] == "failed" and "sanitize_v" not in v:
                v["sanitize_v"] = 0  # draf lama: sanitasi versi awal

    update(_baseline)
    # Regenerasi draf m2c-murni dgn sanitasi kini (tanpa sentuh edit manual),
    # supaya perbaikan sanitasi langsung ikut antre judge ulang. Dilewati
    # untuk 'status' (n=0): hanya baca progres, tanpa kerja menit.
    # Draf fixpoint ditandai sanitize_checked_v agar tidak di-regen ulang
    # tiap jalan; dibuka lagi saat SANITIZE_VERSION naik.
    try:
        n_new = resanitize_stale() if n else 0
        if n_new:
            print(f"[{AGENT}] resanitasi {n_new} draf (sanitasi v{SANITIZE_VERSION})")
    except Exception as err:
        print(f"[{AGENT}] resanitasi dilewati: {err}")
    if deadline is not None:
        signal.signal(signal.SIGALRM, _on_alarm)
        signal.setitimer(signal.ITIMER_REAL, max(0.0, deadline - time.time()))
    try:
        if not loop:
            run_batch(n, modules, retry_all, until)
            return 0
        # Mode loop: ulangi batch sampai antrean habis / Ctrl-C / deadline.
        # Tetap foreground: tiap fungsi + ringkasan batch dicetak langsung.
        # Pengaman: --retry + --loop tanpa filter modul akan mengulang failed
        # yang sama selamanya — tolak kombinasi itu.
        if retry_all and not modules:
            print("--retry + --loop tanpa filter modul akan mengulang fungsi "
                  "failed yang sama selamanya; batasi modul (mis. --loop "
                  "20 code_x.s --retry) atau perbaiki draf manual dulu.",
                  file=sys.stderr)
            return 2
        total_m = total_d = batches = 0
        while True:
            batches += 1
            m, d, had_work, stopped = run_batch(n, modules, retry_all, until, batches)
            total_m += m
            total_d += d
            if stopped:
                print(f"[{AGENT}] loop berhenti di batch#{batches}"
                      f" | total loop {total_m}M/{total_d}D | {progress(load())}")
                return 0
            if not had_work:
                print(f"[{AGENT}] loop selesai setelah {batches} batch"
                      f" | total loop {total_m}M/{total_d}D | {progress(load())}")
                print(f"[{AGENT}] {bar_text(load())}")
                return 0
            scan(modules)  # modul bisa berubah di tengah loop; pending baru ikut antre
            update(_baseline)
            print(f"[{AGENT}] loop lanjut batch#{batches + 1} dalam {wait_s:g}s"
                  f" (Ctrl-C untuk berhenti) | {progress(load())}")
            try:
                time.sleep(wait_s)
            except KeyboardInterrupt:
                print(f"\n[{AGENT}] loop dihentikan sebelum batch#{batches + 1}"
                      f" | total loop {total_m}M/{total_d}D | {progress(load())}")
                return 0
    finally:
        if deadline is not None:
            signal.setitimer(signal.ITIMER_REAL, 0)
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
