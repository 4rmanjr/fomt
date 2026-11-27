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
# Penanda di src bahwa byte sebuah section ASM sudah ikut di dalam blok fungsi
# (mis. blok naked yg memuat ekor data 22B). Splitter harus meng-omit section
# itu dari asm; kalau tidak, byte-nya dobel. Dipakai migrate._absorbed_data_chunks.
SRC_ABSORB_RE = re.compile(r"DECOMP-ABSORB\s+(\.[\w.]+)")
_SPACE_FILL_RE = re.compile(r"^\.(space|fill|skip)\b")
_ALIGN2_RE = re.compile(r"^\.align\s+2,\s*0\s*$")
_ALIGN_RE = re.compile(r"^\.align\b")
_DATA_LABEL_STRIP_RE = re.compile(r"^\s*[.\w][\w.]*:\s*")
_REF_WORD_RE = re.compile(r"[.\w]*\.L[\w.]+|\b[A-Za-z_]\w*\b")
_PC_LABEL_RE = re.compile(r"[.\w]*\.L[\w.]+")
_NUM_RE = re.compile(r"0x[0-9A-Fa-f]+|\d+")
_LABEL_DEF_RE = re.compile(r"^\s*([.\w][\w.]*):")
_DOTWORD_COLON_RE = re.compile(r"^[.\w]")
_HIGH_REG_RE = re.compile(r"\b(r8|r9|r10|r11|r12|sl|sb|sp|pc|lr)\b")
HIGH_REG_RE = _HIGH_REG_RE  # alias publik (dipakai calon optimasi caller)
_THUMB32_RE = re.compile(r"^\s*(bl\s|b\.w\s|blx\s)\b")
# Direktif data yang bisa memuat NAMA simbol (mis. `.4byte func_080D116A`).
# Rujukan simbolik seperti ini SAMA bermasalahnya dgn rujukan PC-relative:
# format objek a.out tak bisa menyatakan relokasi lintas-section untuk
# simbol Thumb (`cannot represent THUMB_OFFSET relocation`), jadi chunk
# pemilik nama itu tak boleh dicabut terpisah dari chunk yang merujuknya.
_DATA_REF_RE = re.compile(
    r"^\s*(?:[.\w][\w.]*:\s*)?\.(?:byte|2byte|short|hword|4byte|word|long)"
    r"\b(.*)$"
)
_PURE_NUM_RE = re.compile(r"^[+-]?(?:0[xX][0-9a-fA-F]+|\d+)[uUlL]*$")


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
    ada direktif yang tak bisa disimulasikan (.incbin/.space/.fill).

    CATATAN: TIDAK bisa di-memoize per-chunk dgn penjumlahan mod-4:
    komponen align-up `(4 - off%4)%4` bergantung posisi absolut dalam
    grup, jadi hasil grup != jumlah hasil chunk. Simulasi ulang penuh
    per panggilan (benar, walau O(n) per grup)."""
    off = 0
    for ch in chs:
        for ln in ch["lines"]:
            s = _strip(ln)
            if not s:
                continue
            if ".incbin" in s or _SPACE_FILL_RE.match(s):
                return None
            if _ALIGN2_RE.match(s) or (
                START_RE.match(ln) and "non_word_aligned" not in ln
            ):
                off += (4 - off % 4) % 4
                continue
            if START_RE.match(ln):
                continue
            md = DATA_RE.match(s)
            if md:
                kind = md.group(2)
                n = len(_NUM_RE.findall(s))
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
            if _DOTWORD_COLON_RE.match(s) and ":" in s.split()[0]:
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
        s = _DATA_LABEL_STRIP_RE.sub("", ln.split("@")[0])
        out.update(_REF_WORD_RE.findall(s))
    return out


def _pc_refs(lines) -> set:
    """Label yang dirujuk lewat instruksi (PC-relative), bukan data."""
    out = set()
    for ln in lines:
        s = _DATA_LABEL_STRIP_RE.sub("", ln.split("@")[0]).strip()
        if not s or DIRECTIVE_RE.match(s) or DATA_RE.match(s):
            continue
        out.update(_PC_LABEL_RE.findall(s))
    return out


def _sym_refs(lines) -> set:
    """Nama simbol yang dirujuk dari DIREKTIF DATA (`.4byte func_x`, dst).

    Angka murni (`0x080D116B`) bukan rujukan: nilainya sudah final dan
    tak butuh relokasi, jadi boleh dipakai sebagai jalan keluar saat
    pool harus tetap di section asal (lihat POLA-DIFF §136).
    """
    out = set()
    for ln in lines:
        s = ln.split("@")[0].strip()
        m = _DATA_REF_RE.match(s)
        if not m:
            continue
        for part in m.group(1).split(","):
            p = part.strip()
            if not p or _PURE_NUM_RE.match(p):
                continue
            out.update(_REF_WORD_RE.findall(p))
    return out


def _chunk_refs(lines) -> set:
    """Semua nama yang dirujuk chunk: instruksi PC-relative + data simbolik."""
    return _pc_refs(lines) | _sym_refs(lines)


_GLOBAL_RE = re.compile(r"^\s*\.globl?\s+([A-Za-z_]\w*)")
_LDR_LABEL_RE = re.compile(r"\bldr\s+r\d+\s*,\s*([.\w][\w.]*)")
_ADD_PC_LABEL_RE = re.compile(r"\badd\s+r\d+\s*,\s*pc\s*,\s*([.\w][\w.]*)")


def _pool_refs(lines) -> set:
    """Label yang dibaca lewat LOAD PC-relative (`ldr rX, .Lpool`).

    Ini rujukan yang benar-benar tak bisa lintas-section: assembler harus
    menghitung offset literal-pool terhadap PC, dan format objek a.out tak
    punya relokasi untuk itu (`cannot represent THUMB_OFFSET relocation`).
    Cabang (`b`/`bl`) TIDAK termasuk: relokasi cabang didukung linker, jadi
    boleh lintas-section.
    """
    out = set()
    for ln in lines:
        s = _DATA_LABEL_STRIP_RE.sub("", ln.split("@")[0])
        for rx in (_LDR_LABEL_RE, _ADD_PC_LABEL_RE):
            out.update(rx.findall(s))
    return out


def _hard_refs(lines) -> set:
    """Rujukan yang MENGIKAT chunk ke section yang sama.

    Isinya: (1) load literal-pool (`ldr rX, .Lpool`), (2) rujukan simbolik
    di direktif data (`.4byte func_x`), dan (3) SEMUA rujukan ke label
    lokal `.L*` — termasuk cabang `b .Lfoo`.

    (3) penting dan sempat terlewat: label `.L*` bukan simbol ELF, jadi
    linker tak bisa merelokasi cabang ke `.L` milik section lain
    (`undefined reference to '.L080D118C'` saat func_080D1186 dicoba
    pindah). Cabang ke simbol GLOBAL (`bl func_x`) tetap boleh lintas
    section karena punya relokasi cabang.
    """
    hard = _pool_refs(lines) | _sym_refs(lines)
    hard.update(r for r in _pc_refs(lines) if r.startswith(".L"))
    return hard


def _refs_and_pc(lines) -> tuple[set, set]:
    """Gabungan _refs + _pc_refs dalam 1 pass (hemat ~2x split/strip/regex).

    Dipakai analyze(): modul besar = 1.1M baris-dipindai per panggilan;
    1 pass = separuh pemindaian. Hasil identik dgn memanggil keduanya.
    (Saat ini dipakai _pc saja per chunk; _refs global tetap 1 pass.)"""
    refs, pcrefs = set(), set()
    for ln in lines:
        s = _DATA_LABEL_STRIP_RE.sub("", ln.split("@")[0])
        refs.update(_REF_WORD_RE.findall(s))
        t = s.strip()
        if not t or DIRECTIVE_RE.match(t) or DATA_RE.match(t):
            continue
        pcrefs.update(_PC_LABEL_RE.findall(t))
    return refs, pcrefs


_SRC_NAMES_CACHE: tuple[float, set] | None = None  # (mtime-src-terbaru, names)


def src_section_names() -> set:
    """Section yg sudah disediakan src/*.cc|*.c. Di-cache per mtime direktori.

    Dipanggil tiap file .s saat build (Makefile: tiap target .o memicu
    split 1 file). Tanpa cache: tiap panggilan = glob + baca ~100 file
    src (~0.1-0.3 dtk) x 20+ modul = detik sia-sia per build. Cache
    di-invalidasi bila ada file src yg mtime-nya berubah.
    """
    global _SRC_NAMES_CACHE
    try:
        files = list((REPO / "src").glob("*.cc")) + list((REPO / "src").glob("*.c"))
        newest = max((p.stat().st_mtime for p in files), default=0.0)
    except OSError:
        return set()
    if _SRC_NAMES_CACHE is not None and _SRC_NAMES_CACHE[0] >= newest:
        return _SRC_NAMES_CACHE[1]
    names = set()
    for p in files:
        try:
            text = p.read_text(errors="replace")
        except OSError:
            continue
        names.update(SRC_SECTION_RE.findall(text))
        names.update(SRC_ABSORB_RE.findall(text))
    _SRC_NAMES_CACHE = (newest, names)
    return names


def _has_name_wildcard(stem: str) -> bool:
    """True bila lds memuat `*(SORT_BY_NAME(.text.<stem>.*))`.

    Wildcard itu menempatkan section bernama URUT NAMA, bukan urut blok
    lds — jadi posisi entri src terhadap asm tak lagi menentukan, dan
    modul boleh di-split walau src tulisan-tangan berada di depan asm.
    """
    try:
        lines = (REPO / "fomt.lds").read_text(errors="replace").splitlines()
    except OSError:
        return False
    pat = f"*(SORT_BY_NAME(.text.{stem}.*))"
    pref = f"*(SORT_BY_NAME(.text.{stem}.b"
    for ln in lines:
        t = ln.strip().replace(" ", "")
        if t == pat:
            return True
        if t.startswith(pref) and t.endswith(".*))"):
            return True
    return False


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

    PENGECUALIAN TERBUKTI (code_809E804.func_0809EEA4, 2026-11-01): satu
    `.align` + segelintir baris data YATIM (label tak dirujuk modul)
    tepat di ujung chunk, DAN chunk fungsi pemiliknya BERAKHIR di situ
    (data adalah hal terakhir sebelum thumb_func_start berikut — bukan
    `.align` pemisah antar dua blok kode). Itu ekor literal pemiliknya
    (di ROM asli menempel setelah kode, sebelum section fungsi berikut)
    — BUKAN milik blok berikut: fungsi berikut selalu diawali macro
    thumb_func_start + label globalnya sendiri, tak pernah memakai data
    ini. Tanpa pengecualian, suffix yatim ini tetap di chunk fungsi;
    saat fungsi dimigrated, splitter meng-omit SELURUH section
    (kode + suffix) dari asm sementara data_plan migrate (hanya melihat
    chunk data TERPISAH) tak membawanya ke src -> 12 byte hilang dari
    ROM (terkonfirmasi: .text ROM -0xC, pool .L0809EEC4 lenyap dari peta).
    Syarat ketat pengecualian: (1) maksimal 2 baris setelah `.align`
    terakhir dan label-labelnya yatim (tak ada di refs); (2) `.align`
    itu adalah `.align` TERAKHIR chunk dan setelahnya hanya
    data/label/blank sampai ujung chunk; (3) tepat setelah `.align`
    ada baris KOSONG (jeda antar-fungsi asli) — tanpa jeda (`.align`
    langsung diikuti data/label, mis. grup 2/3) DITOLAK: itu
    padding/alignment internal kode pemiliknya (kasus 11F8 di atas).
    Pola `.align` + blank + thumb_func_start (pemisah blok kosong,
    tanpa data — mis. grup 2/3 code_809E804) juga DITOLAK: data milik
    jalur fallthrough blok SEBELUMNYA.
    """
    # Kandidat pengecualian: `.align` TERAKHIR chunk + <=2 baris
    # data/label yatim MENEMPEL `.align` (tanpa blank di antaranya),
    # DITUTUP baris KOSONG sebelum ujung chunk (jeda antar-fungsi;
    # setelah blank hanya blank sampai ujung — thumb_func_start
    # berikut ada di chunk BERIKUTNYA, bukan di sini).
    # Bukti bentuk (TERBUKTI 2026-11-01):
    # - func_0809EEA4 (LOLOS): `.align`/`.L0809EEC4:`/`.byte`//blank
    #   = paket literal pemilik; blank memisahkan dari fungsi berikut.
    # - grup 2/3 code_809E804 (DITOLAK): `.align` langsung diikuti
    #   data yatim TANPA blank penutup = padding/alignment internal
    #   pemilik (kasus 11F8 di docstring utama).
    # - pola `.align` + blank + thumb_func_start (pemisah blok kosong)
    #   DITOLAK: setelah `.align` tak ada data (data milik jalur
    #   fallthrough blok SEBELUMNYA).
    # Hitung dulu, pakai hanya bila scan utama berhenti tepat di
    # `.align` itu (bukan di kode/label-rujuk).
    tail_ok = None  # indeks awal kandidat, atau None
    j = len(chunk) - 1
    while j >= 0 and not _strip(chunk[j]):
        j -= 1
    # cari `.align` terakhir yg setelahnya hanya data/label yatim+blank
    k = j
    n = 0
    ok = True
    ai = None
    while k >= 0:
        s = _strip(chunk[k])
        if not s:
            k -= 1
            continue
        if _ALIGN_RE.match(s):
            # harus `.align` TERAKHIR: tak boleh ada `.align` lain
            # antara ai dan ujung (k==posisi ini; pastikan tak ada
            # `.align` di (k, j])
            if any(_ALIGN_RE.match(_strip(chunk[q]))
                   for q in range(k + 1, j + 1)):
                ok = False
            else:
                ai = k
            break
        md = DATA_RE.match(s)
        ml = (LABEL_RE.match(s)
              if not START_RE.match(chunk[k]) else None)
        lab = None
        if md:
            lab = md.group(1)
        elif ml:
            lab = ml.group(1)
        else:
            ok = False
            break
        if lab and lab in refs:
            ok = False
            break
        n += 1
        if n > 2:
            ok = False
            break
        k -= 1
    if ok and ai is not None:
        # kandidat valid: data menempel `.align`, DITUTUP >=1 baris
        # KOSONG sebelum ujung chunk (setelah data hanya blank).
        # Tanpa blank penutup = padding internal -> tolak.
        # tail_ok = indeks `.align` (bukan ai+1!): pemotongan di
        # `.align` agar `.align` ikut pindah ke chunk data — di section
        # baru, `.align` dihitung dari awal section (offset 0, sudah
        # align) = 0 byte hantu; bila `.align` TERTINGGAL di chunk
        # fungsi, ia dihitung dari ujung kode (offset 2-mod-4) dan
        # menambah 2 byte hantu (kasus func_0809EEA4: -0xC +0x2).
        # j = indeks baris non-blank terakhir; blank = j+1..len-1.
        # Sah bila t (ujung data) <= j < len-1 (ada blank penutup).
        t = ai + 1
        while t <= j and _strip(chunk[t]):
            t += 1
        tail_ok = ai if t > ai + 1 and j < len(chunk) - 1 else None
    i = len(chunk) - 1
    start = None
    stopped_at_align = False
    while i >= 0:
        s = _strip(chunk[i])
        if not s:
            i -= 1
            continue
        if _ALIGN_RE.match(s):
            if tail_ok is not None and i == ai:
                start = tail_ok
            else:
                start = None
            stopped_at_align = True
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
        m = _LABEL_DEF_RE.match(ln)
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

    File yang SUDAH berisi `.section` sendiri (mis. `code_linkonce.s`, 4 blok
    yang di lds diselingi `*(.gnu.linkonce.t.*)` template C++) diproses
    per blok: tiap blok dianalisis terpisah dan secname-nya diberi prefiks
    `b<k>.` sehingga lds bisa menaruh satu wildcard SORT_BY_NAME per blok
    tepat di posisi blok semula (urutan antar-blok + template tetap).
    """
    if migrated is None:
        migrated = src_section_names()
    lines = text.splitlines(keepends=True)
    secidx = [i for i, ln in enumerate(lines) if SECTION_RE.match(ln)]
    if not secidx:
        return _analyze_body(lines, stem, migrated)
    preamble = "".join(lines[: secidx[0]])
    groups = []
    for k, si in enumerate(secidx):
        end = secidx[k + 1] if k + 1 < len(secidx) else len(lines)
        _pre, g = _analyze_body(lines[si + 1: end], stem, migrated,
                                prefix=f"b{k}.")
        groups.extend(g)
    return preamble, groups


def _analyze_body(lines, stem: str, migrated, prefix: str = ""):
    """Bagian analyze() utk SATU blok section (tanpa baris `.section`)."""
    starts = [i for i, ln in enumerate(lines) if START_RE.match(ln)]
    if not starts:
        return "", []
    refs = _refs(lines)
    preamble = "".join(lines[: starts[0]])
    chunks = []
    for idx, i in enumerate(starts):
        name = START_RE.match(lines[i]).group(2)
        end = starts[idx + 1] if idx + 1 < len(starts) else len(lines)
        body = lines[i:end]
        addr = _func_addr(body)
        if addr is not None:
            secname = f".text.{stem}.{prefix}{addr:08X}"
        else:
            secname = f".text.{stem}.{prefix}func_{name}"
        ds = _trailing_data_start(body, refs)
        func_body = body if ds is None else body[:ds]
        chunks.append({
            "kind": "func", "name": name, "secname": secname,
            "lines": func_body,
            "migrated": secname in migrated,
            "labels": _defined_labels(func_body),
            "refs": _chunk_refs(func_body),
            "hard_refs": _hard_refs(func_body),
        })
        if ds is not None:
            data = body[ds:]
            daddr = _data_suffix_addr(data)
            if daddr is not None:
                dsec = f".text.{stem}.{prefix}{daddr:08X}"
            else:
                dsec = f"{secname}.zz"
            chunks.append({
                "kind": "data", "name": "data", "secname": dsec,
                "lines": data, "migrated": dsec in migrated,
                "labels": _defined_labels(data),
                "refs": _chunk_refs(data),
                "hard_refs": _hard_refs(data),
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


class SplitError(RuntimeError):
    """Section tak boleh dicabut: labelnya masih dirujuk section lain.

    Rujukan PC-relative (`ldr rX, .Lpool`) dan rujukan simbolik di direktif
    data (`.4byte func_x`) sama-sama tak bisa direlokasi lintas-section oleh
    format objek a.out (`cannot represent THUMB_OFFSET relocation` /
    `invalid offset, value too big`). Jadi bila sebuah chunk hilang dari
    asm (pindah ke src) sementara chunk lain masih merujuk labelnya, build
    akan MERAH dengan pesan assembler yang membingungkan. Lebih baik gagal
    di sini dengan pesan yang menyebut label + pemiliknya.
    """


def _ref_components(chs, idxs):
    """Komponen chunk (indeks chs) yang saling merujuk — satu section.

    Dua chunk yang saling merujuk lewat PC-relative WAJIB berada di section
    yang sama; memisahkannya membuat `ldr rX, .Lpool` jadi relokasi
    lintas-section yang tak bisa dirakit. Indeks dikembalikan urut menaik,
    komponen diurutkan menurut indeks pertamanya (= urutan alamat).
    """
    parent = {i: i for i in idxs}

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    def union(a, b):
        ra, rb = find(a), find(b)
        if ra != rb:
            parent[max(ra, rb)] = min(ra, rb)

    owners = {}
    for ci in idxs:
        for lab in chs[ci]["labels"]:
            owners.setdefault(lab, ci)
    for ci in idxs:
        for ref in chs[ci].get("refs", ()):
            cj = owners.get(ref)
            if cj is not None and cj != ci:
                union(ci, cj)
    comps = {}
    for ci in idxs:
        comps.setdefault(find(ci), []).append(ci)
    return [comps[r] for r in sorted(comps)]


def _partial_group_runs(chs, dropped_idx):
    """-> list list-indeks RUN chunk sisa; raise SplitError bila tak aman.

    Aturan: chunk sisa harus tetap satu section per RUN kontigu (supaya
    `.align` di perbatasan chunk dievaluasi dari offset yang sama), dan
    dua run tak boleh saling merujuk (kalau merujuk, chunk yang dicabut
    mengikat keduanya -> tak boleh dipisah).
    """
    keep = [i for i in range(len(chs))
            if i not in dropped_idx
            and not (chs[i]["kind"] == "data" and not chs[i]["lines"])]
    if not keep:
        return []
    runs, cur = [], [keep[0]]
    for i in keep[1:]:
        if i == cur[-1] + 1:
            cur.append(i)
        else:
            runs.append(cur)
            cur = [i]
    runs.append(cur)
    if len(runs) > 1:
        run_of = {ci: ri for ri, run in enumerate(runs) for ci in run}
        owners = {}
        for ci in keep:
            for lab in chs[ci]["labels"]:
                owners.setdefault(lab, ci)
        for ri, run in enumerate(runs):
            for ci in run:
                for ref in chs[ci].get("hard_refs") or ():
                    cj = owners.get(ref)
                    if cj is not None and run_of.get(cj, ri) != ri:
                        raise SplitError(
                            f"chunk yang dicabut memisahkan "
                            f"{chs[ci]['secname']} dari {chs[cj]['secname']} "
                            f"yang merujuk {ref}; pindahkan sekaligus")
    return runs


def _plan_sections(groups):
    """-> (plan, dropped) : plan=[(secname,[chunk])], dropped=[chunk]."""
    plan, dropped = [], []
    for chs in groups:
        funcs = [c for c in chs if c["kind"] == "func"]
        migratable = len(funcs) == 1
        if migratable and funcs[0]["migrated"]:
            # Seluruh grup disediakan src (fungsi + data-ekornya).
            dropped.extend(chs)
            continue
        if not migratable and any(c.get("migrated") for c in chs):
            # Grup gabungan yang sebagian pindah. Chunk sisa HARUS tetap
            # satu section: dulu tiap chunk dapat section sendiri, sehingga
            # (a) pool terpisah dari `ldr` pemakainya -> THUMB_OFFSET, dan
            # (b) direktif `.align 2, 0` di perbatasan chunk dievaluasi ulang
            # dari offset 0 section baru -> padding hilang/bergeser (ROM
            # meleset beberapa byte). Satu section = byte-identik dgn ROM.
            dropped.extend(c for c in chs if c.get("migrated"))
            dropped_idx = {i for i, c in enumerate(chs) if c.get("migrated")}
            for run in _partial_group_runs(chs, dropped_idx):
                plan.append((chs[run[0]]["secname"],
                             [chs[i] for i in run]))
            continue
        plan.append((chs[0]["secname"], chs))
    return plan, dropped


def _check_no_cut_reference(plan, dropped):
    """Gagal keras bila chunk yang tetap di asm merujuk label yang dicabut."""
    if not dropped:
        return
    owner = {}
    for ch in dropped:
        for lab in ch["labels"]:
            owner.setdefault(lab, ch)
    if not owner:
        return
    for secname, comp in plan:
        for ch in comp:
            hit = sorted((ch.get("hard_refs") or set()) & set(owner))
            if not hit:
                continue
            raise SplitError(
                f"section {secname} masih merujuk "
                f"{', '.join(hit)} yang dicabut dari asm "
                f"(pemilik: {owner[hit[0]]['secname']}); "
                "pindahkan bersama atau pertahankan di section asal"
            )


def split(text: str, stem: str, migrated=None) -> str:
    if not (REPO / "src" / f"{stem}.cc").exists():
        return text
    # src-sebelum-asm hanya memblokir BILA urutan ditentukan blok lds;
    # dengan wildcard SORT_BY_NAME urutan ditentukan nama section, jadi
    # section-replace tetap sah (kelas: code_actor_0809BFE8).
    if _src_before_asm(stem) and not _has_name_wildcard(stem):
        return text
    preamble, groups = analyze(text, stem, migrated)
    if not groups:
        return text
    plan, dropped = _plan_sections(groups)
    _check_no_cut_reference(plan, dropped)
    out = [preamble]
    for secname, comp in plan:
        out.append(f'    .section "{secname}", "ax", %progbits\n')
        for ch in comp:
            out.extend(ch["lines"])
    return "".join(out)


def migration_blockers_map(text: str, stem: str) -> dict:
    """-> {nama fungsi: [(label, pemilik, alasan), ...]}.

    Kosong = fungsi boleh pindah sendirian. Aturannya: section fungsi tak
    boleh terpisah dari section yang memuat tujuan rujukan kerasnya
    (`ldr rX, .Lpool`, `.4byte func_x`), dan section yang masih menjadi
    tujuan rujukan keras section LAIN tak boleh dicabut.

    Padanan dua arah ini yang dulu hilang: splitter hanya menggabungkan
    chunk lewat rujukan PC-relative, lalu saat salah satu chunk pindah ia
    memecah tiap chunk sisa jadi section sendiri — pool jadi terpisah dari
    `ldr` pemakainya, dan assembler gagal dgn `THUMB_OFFSET`.
    """
    _pre, groups = analyze(text, stem, migrated=set())
    owner = {}          # label -> (gi, chunk)
    referrers = {}      # label -> [(gi, chunk, "pool"|"simbolik")]
    for gi, chs in enumerate(groups):
        for ch in chs:
            for lab in ch["labels"]:
                owner.setdefault(lab, (gi, ch))
    for gi, chs in enumerate(groups):
        for ch in chs:
            for lab in _pool_refs(ch["lines"]):
                referrers.setdefault(lab, []).append((gi, ch, "pool"))
            for lab in _sym_refs(ch["lines"]):
                referrers.setdefault(lab, []).append((gi, ch, "simbolik"))
            for lab in _pc_refs(ch["lines"]):
                if lab.startswith(".L"):
                    referrers.setdefault(lab, []).append((gi, ch, "cabang .L"))
    out = {}
    for gi, chs in enumerate(groups):
        funcs = [c for c in chs if c["kind"] == "func"]
        data = [c for c in chs if c["kind"] == "data"]
        for ch in funcs:
            bad = []
            if len(funcs) > 1:
                # (0) dicabut sendirian dari grup gabungan: sisa harus tetap
                # run kontigu yang tak saling merujuk (aturan _plan_sections).
                try:
                    _partial_group_runs(chs, {chs.index(ch)})
                except SplitError as exc:
                    bad.append(("", ch["secname"], str(exc)))
            # (1) rujukan keras fungsi ke label di luar chunk-nya sendiri.
            for lab in sorted(_hard_refs(ch["lines"]) - ch["labels"]):
                who = owner.get(lab)
                if who is None:
                    continue  # simbol eksternal (bukan milik modul)
                g2, c2 = who
                if len(funcs) == 1 and c2["kind"] == "data":
                    continue  # data-ekor ikut pindah via data_plan
                bad.append((lab, c2["secname"], "dirujuk fungsi ini"))
            # (2) chunk mengekspor simbol GLOBAL lain (`.global __divsi3`
            # di tengah chunk func_080D0EBC): memindahkannya menghapus
            # simbol itu dari link -> pemakai lintas-objek (mis.
            # code_linkonce.o) jatuh ke libgcc lalu `discarded section`.
            for sym in sorted(l for l in ch["labels"]
                              if not l.startswith(".L") and l != ch["name"]):
                bad.append((sym, ch["secname"], "diekspor chunk ini"))
            # (3) rujukan keras chunk LAIN ke label fungsi ini: section-nya
            # masih jadi tujuan, jadi tak boleh dicabut.
            for lab in sorted(ch["labels"]):
                for g2, c2, kind in referrers.get(lab, ()):
                    if c2 is ch:
                        continue
                    bad.append((lab, c2["secname"], f"merujuk ({kind})"))
            if bad:
                out[ch["name"]] = bad
    return out


def migratable(text: str, stem: str) -> list:
    blockers = migration_blockers_map(text, stem)
    out = []
    for chs in analyze(text, stem, migrated=set())[1]:
        for ch in chs:
            if ch["kind"] == "func" and ch["name"] not in blockers:
                out.append(ch["name"])
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
