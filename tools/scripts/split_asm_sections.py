#!/usr/bin/env python3
"""Pecah satu file asm/*.s menjadi section per fungsi/chunk data.

Tujuan: memungkinkan migrasi fungsi yang BUKAN ekor. Dengan section per
fungsi, linker script bisa menyelipkan `src/<mod>.o(.text...)` tepat di
posisi fungsi asm yang dicabut tanpa menggeser alamat fungsi lain.

Nama section memakai alamat agar urutan leksikografis = urutan alamat:

    .text.<stem>.<addr8>       fungsi / grup chunk
    .text.<stem>.<funcaddr>.zz data tanpa label alamat

Linker script modul cukup:

    *(SORT_BY_NAME(.text.<stem>.*))
    src/<stem>.o(.text);

Fungsi yang sudah dimigrasi (src memuat `section(".text.<stem>.<addr8>")`)
TIDAK di-emit lagi dari asm; src yang menyediakan section bernama sama.

Chunk yang saling merujuk lewat instruksi PC-relative (mis. `ldr rX, .L...`
ke literal pool di chunk lain) DIGABUNG menjadi satu section — relokasi
lintas-section untuk simbol Thumb tidak bisa direpresentasikan. Fungsi di
grup gabungan tidak boleh dimigrasi sendirian; pakai `--migratable` untuk
mendapat daftar yang aman.

File tanpa fungsi, tanpa src/<stem>.cc, yang sudah punya `.section`
sendiri (code_linkonce), atau yang src-nya berada SEBELUM asm di lds
(hardware, code_actor_0809BFE8) dikembalikan apa adanya.

Padding antar-chunk dipertahankan sebagai `.balign 2, 0` di AKHIR chunk
sebelumnya — bukan di awal chunk berikut — supaya pemisah section tidak
ikut-ikutan meng-align awal section berikut (linker sudah meng-align awal
section ke 4 karena macro `.ALIGN 2, 0` di dalam section; fill-nya 0xFF
vs 0x00 asli tidak masalah karena tertimpa full oleh padding eksplisit).
Fungsi non-word-aligned tidak membangkitkan padding sehingga `.balign`
di akhir chunk induknya aman (chunk induk selalu ber-akhir 4-byte atau
diikuti `.align` dari fungsi non-word berikutnya yang di-strip).

Pemakaian:
    python3 tools/scripts/split_asm_sections.py asm/foo.s [out.s]
    python3 tools/scripts/split_asm_sections.py --lds asm/foo.s
    python3 tools/scripts/split_asm_sections.py --migratable asm/foo.s
"""

import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
START_RE = re.compile(
    r"^\s*((?:thumb|arm)_func_start|non_word_aligned_thumb_func_start)\s+(\w+)"
)
SECTION_RE = re.compile(r"^\s*\.section\b")
LABEL_RE = re.compile(r"^([.\w][\w.]*):")
DATA_RE = re.compile(
    r"^(?:([.\w][\w.]*):\s*)?\.(byte|2byte|short|4byte|word|long|hword|"
    r"ascii|asciz|string|incbin|space|fill|skip)\b"
)
DIRECTIVE_RE = re.compile(
    r"^\.(global|globl|type|size|balign|section|text|data|rodata|"
    r"thumb|arm|syntax|include|macro|endm|if|endif|else|comm|set)\b"
)
PAD_DIRECTIVE_RE = re.compile(r"^\.(align)\s+2,\s*0\s*$")
ADDR_LABEL_RE = re.compile(r"^\.L([0-9A-Fa-f]{8})$")
ADDR_COMMENT_RE = re.compile(r"@\s*0x([0-9A-Fa-f]+)")
FUNC_NAME_ADDR_RE = re.compile(r"func_([0-9A-Fa-f]{8})$")
SRC_SECTION_RE = re.compile(r'section\s*\(\s*"([^"]+)"\s*\)')
_HIGH_REG_RE = re.compile(r"\b(r8|r9|r10|r11|r12|sl|sb|sp|pc|lr)\b")
_THUMB32_RE = re.compile(r"^\s*(bl\s|b\.w\s|blx\s)\b")


def _instr_len(ln: str) -> int:
    """Panjang instruksi Thumb (2 atau 4).

    Hanya `bl` (dan variasinya) yang 32-bit di codebase ini: `add sp`
    dan `mov` high-reg yang terlihat seperti Thumb-2 ternyata dirakit
    agbcc/as sebagai 16-bit (terbukti: estimasi paritas meleset bila
    dihitung 4). Bentuk `b` kondisional selalu 16-bit di sini (jarak
    dekat; bila jauh assembler akan upgrade — tidak terjadi di modul
    yang lolos rakitan).
    """
    s = _strip(ln)
    if _THUMB32_RE.match(s):
        return 4
    return 2


def _group_len_mod4(chs) -> int | None:
    """Estimasi (panjang grup) mod 4 via simulasi offset, atau None bila
    ada direktif yang tak bisa disimulasikan (.incbin/.space/.fill)."""
    off = 0
    for ch in chs:
        for ln in ch["lines"]:
            s = _strip(ln)
            if not s:
                continue
            if ".incbin" in s or re.match(r"^\.(space|fill|skip)\b", s):
                return None
            if re.match(r"^\.align\s+2,\s*0\s*$", s) or (
                START_RE.match(ln) and "non_word_aligned" not in ln
            ):
                off += (4 - off % 4) % 4
                continue
            if START_RE.match(ln):
                continue
            md = DATA_RE.match(s)
            if md:
                kind = md.group(2)
                n = len(re.findall(r"0x[0-9A-Fa-f]+|\d+", s))
                if kind in ("byte",):
                    off += n
                elif kind in ("2byte", "short", "hword"):
                    off += 2 * n
                elif kind in ("4byte", "word", "long"):
                    off += 4 * n
                else:
                    return None
                continue
            ml = LABEL_RE.match(s)
            if ml:
                rest = s[ml.end():].strip()
                if not rest:
                    continue
            if DIRECTIVE_RE.match(s):
                continue
            if re.match(r"^[.\w]", s) and ":" in s.split()[0]:
                rest = s.split(":", 1)[1].strip()
                if not rest:
                    continue
                s = rest
            off += _instr_len(s if s else ln)
    return off % 4


def _strip(ln: str) -> str:
    return ln.split("@")[0].strip()


def _refs(lines) -> set:
    """Nama yang DIRUJUK (definisi label di baris itu sendiri tidak dihitung)."""
    out = set()
    for ln in lines:
        s = ln.split("@")[0]
        s = re.sub(r"^\s*[.\w][\w.]*:\s*", "", s)
        out.update(re.findall(r"[.\w]*\.L[\w.]+|\b[A-Za-z_]\w*\b", s))
    return out


def _pc_refs(lines) -> set:
    """Label yang dirujuk lewat instruksi (PC-relative), bukan data."""
    out = set()
    for ln in lines:
        s = ln.split("@")[0]
        s = re.sub(r"^\s*[.\w][\w.]*:\s*", "", s).strip()
        if not s or DIRECTIVE_RE.match(s) or DATA_RE.match(s):
            continue
        out.update(re.findall(r"[.\w]*\.L[\w.]+", s))
    return out


def src_section_names() -> set:
    names = set()
    for p in (REPO / "src").glob("*.cc"):
        try:
            names.update(SRC_SECTION_RE.findall(p.read_text(errors="replace")))
        except OSError:
            pass
    return names


def _src_before_asm(stem: str) -> bool:
    """True bila lds menaruh src/<stem>.o(.text) SEBELUM asm/<stem>.o(.text)."""
    try:
        lines = (REPO / "fomt.lds").read_text(errors="replace").splitlines()
    except OSError:
        return False
    asm = f"asm/{stem}.o(.text);"
    src = f"src/{stem}.o(.text);"
    ai = next((i for i, ln in enumerate(lines) if ln.strip() == asm), None)
    si = next((i for i, ln in enumerate(lines) if ln.strip() == src), None)
    return ai is not None and si is not None and si < ai


def _func_addr(body):
    for ln in body[:4]:
        m = ADDR_COMMENT_RE.search(ln)
        if m:
            return int(m.group(1), 16)
    m = START_RE.match(body[0]) if body else None
    if m:
        ma = FUNC_NAME_ADDR_RE.match(m.group(2))
        if ma:
            return int(ma.group(1), 16)
    return None


def _trailing_data_start(chunk, refs):
    """Indeks awal suffix data tak-bermarker di ekor chunk, atau None.

    Suffix = deretan direktif data (label opsional) yang labelnya tidak
    dirujuk dari mana pun. Literal pool/jump table yang labelnya dirujuk
    TIDAK dipotong.

    `.align` SELALU menghentikan scan (break): `.align` di antara kode dan
    data adalah batas milik macro blok berikut (data setelahnya milik
    blok berikut/modul, bukan ekor kode ini); `.align` di ekor murni
    adalah padding internal kode ini (tetap di sini, benar di posisi
    section asal maupun baru). Tanpa ini, data seperti 11F8 (yang
    dibatasi `.align` dari kode rand) ikut terpotong dan pindah section,
    menambah byte hantu saat `.ALIGN` macro dihitung ulang.
    """
    i = len(chunk) - 1
    start = None
    while i >= 0:
        s = _strip(chunk[i])
        if not s:
            i -= 1
            continue
        if re.match(r"^\.align\b", s):
            start = None
            break
        md = DATA_RE.match(s)
        if md:
            lab = md.group(1)
            if lab and lab in refs:
                break
            start = i
            i -= 1
            continue
        ml = LABEL_RE.match(s)
        if ml and not START_RE.match(chunk[i]):
            lab = ml.group(1)
            if lab in refs:
                break
            start = i
            i -= 1
            continue
        break
    return start


def _data_suffix_addr(lines):
    for ln in lines:
        m = LABEL_RE.match(_strip(ln))
        if m:
            ma = ADDR_LABEL_RE.match(m.group(1))
            if ma:
                return int(ma.group(1), 16)
    return None


def _defined_labels(lines):
    out = set()
    for ln in lines:
        m = re.match(r"^\s*([.\w][\w.]*):", ln)
        if m:
            out.add(m.group(1))
    return out


class _UF:
    def __init__(self, n):
        self.p = list(range(n))

    def find(self, x):
        while self.p[x] != x:
            self.p[x] = self.p[self.p[x]]
            x = self.p[x]
        return x

    def union_range(self, a, b):
        if a > b:
            a, b = b, a
        r = self.find(a)
        for i in range(a + 1, b + 1):
            ri = self.find(i)
            if ri != r:
                self.p[ri] = r


def analyze(text: str, stem: str, migrated=None):
    """-> (preamble, groups) dengan groups = list(list(chunk)).

    chunk = dict(kind,name,secname,lines,migrated,labels).
    Chunk yang terhubung rujukan PC-relative digabung dalam satu group
    (satu section). Group migratable bila hanya berisi satu chunk fungsi.
    """
    lines = text.splitlines(keepends=True)
    starts = [i for i, ln in enumerate(lines) if START_RE.match(ln)]
    if not starts:
        return text, []
    if any(SECTION_RE.match(ln) for ln in lines):
        return text, []
    if migrated is None:
        migrated = src_section_names()
    refs = _refs(lines)
    preamble = "".join(lines[: starts[0]])
    chunks = []
    for idx, i in enumerate(starts):
        name = START_RE.match(lines[i]).group(2)
        end = starts[idx + 1] if idx + 1 < len(starts) else len(lines)
        body = lines[i:end]
        addr = _func_addr(body)
        if addr is not None:
            secname = f".text.{stem}.{addr:08X}"
        else:
            secname = f".text.{stem}.func_{name}"
        ds = _trailing_data_start(body, refs)
        func_body = body if ds is None else body[:ds]
        chunks.append({
            "kind": "func", "name": name, "secname": secname,
            "lines": func_body,
            "migrated": secname in migrated,
            "labels": _defined_labels(func_body),
        })
        if ds is not None:
            data = body[ds:]
            daddr = _data_suffix_addr(data)
            if daddr is not None:
                dsec = f".text.{stem}.{daddr:08X}"
            else:
                dsec = f"{secname}.zz"
            chunks.append({
                "kind": "data", "name": "data", "secname": dsec,
                "lines": data, "migrated": False,
                "labels": _defined_labels(data),
            })

    label_chunk = {}
    for ci, ch in enumerate(chunks):
        for lab in ch["labels"]:
            label_chunk.setdefault(lab, ci)
    uf = _UF(len(chunks))
    for ci, ch in enumerate(chunks):
        for lab in _pc_refs(ch["lines"]):
            cj = label_chunk.get(lab)
            if cj is not None and cj != ci:
                uf.union_range(ci, cj)
    # Data tak-bermarker di ekor fungsi (jump table / blob) selalu digabung
    # dengan chunk FUNGSI BERIKUTNYA (bukan dgn fungsi pemiliknya): di ROM
    # asli data itu terletak di antara akhir kode pemilik dan `.ALIGN`
    # macro fungsi berikut, dan `.ALIGN` itu dihitung dari posisi data
    # (padding 0 byte bila data berakhir 2-mod-4). Bila data digabung
    # dengan pemiliknya, `.ALIGN` fungsi berikut pindah ke section baru
    # (mulai kelipatan 4) dan menambah 2 byte 0x00 hantu.
    # Pengecualian: data di ekor fungsi TERAKHIR modul (tak ada berikut).
    for ci, ch in enumerate(chunks):
        if ch["kind"] == "data" and ci > 0 and ci + 1 < len(chunks):
            if chunks[ci - 1]["kind"] == "func" and chunks[ci + 1]["kind"] == "func":
                uf.union_range(ci, ci + 1)
    # Aturan padding: section yang mengandung `.ALIGN` (Al=4) dan kontennya
    # berakhir 2-mod-4 mendapat +2 byte padding assembler di akhir
    # (terkonfirmasi: 65B14 0x90a->0x90c, 1204 0xa->0xc). Di ROM asli
    # (satu section gabungan) padding itu milik `.ALIGN` macro fungsi
    # berikutnya dan dihitung dari posisi gabungan; bila section dipisah,
    # padding muncul di tengah ROM dan menggeser semua alamat (+2 per
    # insiden; 6 insiden = +12 byte, terkonfirmasi di 0x6d8ca berupa fill
    # linker 0xFF saat section berikut Al=4 di-align-UP).
    # Solusi: gabungkan grup yang kontennya berakhir 2-mod-4 dengan grup
    # BERIKUTNYA (tak ada batas section di titik rawan). Rantai: ulangi
    # sampai grup berakhir 0-mod-4 atau modul habis. Estimasi panjang via
    # simulasi offset (_group_len_mod4); None (tak tersimulasi) = gabung
    # konservatif. Fungsi nwa tidak membangkitkan `.ALIGN` sehingga
    # aturannya sama (konten berakhir 2-mod-4 -> gabung berikut).
    groups = {}
    for ci in range(len(chunks)):
        groups.setdefault(uf.find(ci), []).append(ci)
    ordered = [[chunks[i] for i in groups[r]]
               for r in sorted(groups, key=lambda r: groups[r][0])]
    merged = [ordered[0]]
    for chs in ordered[1:]:
        prev = merged[-1]
        lm = _group_len_mod4(prev)
        if lm is None or lm % 4 == 2:
            prev.extend(chs)
        else:
            merged.append(chs)
    ordered = merged
    return preamble, ordered


def split(text: str, stem: str, migrated=None) -> str:
    if not (REPO / "src" / f"{stem}.cc").exists():
        return text
    if _src_before_asm(stem):
        return text
    preamble, groups = analyze(text, stem, migrated)
    if not groups:
        return text
    out = [preamble]
    for gi, chs in enumerate(groups):
        funcs = [c for c in chs if c["kind"] == "func"]
        migratable = len(funcs) == 1
        if migratable and funcs[0]["migrated"]:
            continue
        out.append(f'    .section "{chs[0]["secname"]}", "ax", %progbits\n')
        lines = []
        for ch in chs:
            lines.extend(ch["lines"])
        out.extend(lines)
    return "".join(out)


def migratable(text: str, stem: str) -> list:
    _pre, groups = analyze(text, stem, migrated=set())
    out = []
    for chs in groups:
        funcs = [c for c in chs if c["kind"] == "func"]
        if len(funcs) == 1:
            out.append(funcs[0]["name"])
    return out


def lds_entries(text: str, stem: str):
    """Baris linker script untuk modul (SORT_BY_NAME + ekor src)."""
    preamble, groups = analyze(text, stem, migrated=set())
    if not groups:
        return None
    indent = "        "
    out = [f'{indent}*(SORT_BY_NAME(.text.{stem}.*))']
    if (REPO / "src" / f"{stem}.cc").exists():
        out.append(f'{indent}src/{stem}.o(.text);')
    return "\n".join(out) + "\n"


def main(argv):
    if len(argv) < 2:
        print(__doc__, file=sys.stderr)
        return 2
    mode = "split"
    args = argv[1:]
    for flag in ("--lds", "--migratable"):
        if args and args[0] == flag:
            mode = flag[2:]
            args = args[1:]
            break
    if not args:
        print(__doc__, file=sys.stderr)
        return 2
    src = Path(args[0])
    stem = src.stem
    text = src.read_text(errors="replace")
    if mode == "lds":
        entries = lds_entries(text, stem)
        if entries is None:
            return 1
        sys.stdout.write(entries)
        return 0
    if mode == "migratable":
        for name in migratable(text, stem):
            print(name)
        return 0
    dst = Path(args[1]) if len(args) > 1 else None
    result = split(text, stem)
    if dst is None:
        sys.stdout.write(result)
    else:
        dst.write_text(result)
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
