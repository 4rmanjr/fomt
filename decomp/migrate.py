#!/usr/bin/env python3
"""Migrasi 1 fungsi MATCH dari asm/*.s ke src/*.cc via section-replace.

Alur per fungsi:
  1. Ambil blok `// DECOMP-MATCHED <nama>` dari decomp/promoted/<stem>.cc
     (hanya bila status fungsi di decomp/state/modules/<stem>.json == promoted).
  2. Syarat pindah: `func in migratable_set(stem)` (grup 1-fungsi menurut
     tools/scripts/split_asm_sections.py). BUKAN tail-only, BUKAN addr%4 —
     section-replace tak menggeser alamat fungsi lain.
  3. Sisipkan (urut alamat menaik) ke src/<stem>.cc, dibungkus
     `extern "C" { ... }` + `__attribute__((section("<secname>")))` tepat
     sebelum definisi fungsi. Splitter build (split_asm_sections.split)
     otomatis meng-omit section asm bernama sama, dan blok SORT_BY_NAME di
     fomt.lds menaruh section src tepat di posisi section asm yang dicabut.
  4. File asm/*.s TIDAK disentuh sama sekali. fomt.lds tak berubah per fungsi
     (blok SORT_BY_NAME + entri src sudah ada).
  5. `make compare`: HIJAU -> lanjut; MERAH -> revert (snapshot file) + STOP.

Tidak pernah commit (working tree saja, kecuali autopush via main()).
Tidak menyentuh state JSON / draf.
"""

import argparse
import fcntl
import functools
import json
import os
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent  # decomp/ -> repo root
PILOT_MODULES = ["more_items.s", "sram_proxy_1.s"]

MARKER = "// DECOMP-MATCHED "
MIGRATED_FN_RE = re.compile(r"// DECOMP-MATCHED (func_\w+)")

_TOOLS_SCRIPTS = str(REPO / "tools" / "scripts")
if _TOOLS_SCRIPTS not in sys.path:
    sys.path.insert(0, _TOOLS_SCRIPTS)
from split_asm_sections import analyze as split_analyze


@functools.lru_cache(maxsize=None)
def _analyze_stem(stem):
    """Grup section splitter utk satu modul (cache per proses).

    asm/*.s tak pernah ditulis migrate (hanya dibaca di sini), jadi cache
    valid selama proses berjalan. Selalu dgn migrated=set(): struktur
    intrinsik (solo vs gabungan), bukan status migrasi sesaat."""
    try:
        text = (REPO / "asm" / f"{stem}.s").read_text(errors="replace")
    except OSError:
        return ()
    _pre, groups = split_analyze(text, stem, migrated=set())
    return groups


def asm_section_of(stem, func):
    """Nama section asm utk fungsi, atau None bila grup gabungan/tak-split.

    SELALU section chunk FUNGSI (bukan chs[0]): utk grup [data, func]
    (aturan data-join splitter) chs[0] adalah section DATA-ekor milik
    grup berikut — memakai itu sbg section src bikin simbol ganda
    (src + asm sama-sama menaruh section itu) -> multiple definition."""
    for chs in _analyze_stem(stem):
        funcs = [c for c in chs if c["kind"] == "func"]
        if len(funcs) == 1 and funcs[0]["name"] == func:
            return funcs[0]["secname"]
    return None


def group_data_chunks(stem, func):
    """Chunk data se-grup dgn fungsi (aturan data-join splitter).

    -> [(secname, addr8, addr_int, lines)] (urut alamat menaik, data dulu
    karena addr data < addr fungsi pemilik-grup); [] bila grup solo-fungsi
    murni. addr8/addr_int None bila secname tanpa alamat (`<funcsec>.zz`).

    Urutan alamat: grup dibentuk data-join splitter dari chunk data ekor
    + chunk fungsi berikut; alamat data selalu di bawah fungsi grupnya.
    Diurutkan menaik agar insert via insert_ordered menaruh data sebelum
    fungsi. Bila MULTI chunk data (belum pernah terlihat: 0 kasus di
    6 modul Task 3) semuanya dikembalikan — pemanggil meng-emit semuanya;
    linker SORT_BY_NAME menempatkannya sesuai nama section."""
    for chs in _analyze_stem(stem):
        funcs = [c for c in chs if c["kind"] == "func"]
        if len(funcs) == 1 and funcs[0]["name"] == func:
            out = []
            for c in chs:
                if c["kind"] != "data":
                    continue
                m = re.search(r"\.([0-9A-Fa-f]{8})(?:\.zz)?$", c["secname"])
                a8 = m.group(1).upper() if m else None
                out.append((c["secname"], a8,
                            int(a8, 16) if a8 else None, c["lines"]))
            out.sort(key=lambda t: (t[2] is None, t[2] or 0))
            return out
    return []


_DATA_DIRECTIVE_RE = re.compile(
    r"^(?:[.\w][\w.]*:\s*)?\.(byte|2byte|short|hword|4byte|word|long)"
    r"\b(.*)$")
_DATA_NUM_RE = re.compile(r"^[+-]?(?:0[xX][0-9a-fA-F]+|\d+)[uUlL]*$")
_DATA_WIDTH = {"byte": 1, "2byte": 2, "short": 2, "hword": 2,
               "4byte": 4, "word": 4, "long": 4}


def parse_data_bytes(lines):
    """Nilai byte data-chunk, atau None bila ada entri simbolik/asing.

    Hanya direktif numerik murni. Label telanjang (.Lxxxxxxxx:) diabaikan
    (di-strip — data-join hanya utk data tak-dirujuk, terverifikasi tak
    ada rujukan keluar). Direktif lain (termasuk .align/.ascii/simbolik
    .4byte label) -> None = grup non-migratable sementara (SKIP)."""
    out = []
    for ln in lines:
        s = ln.split("@")[0].strip()
        if not s:
            continue
        if re.match(r"^[.\w][\w.]*:$", s):
            continue  # label telanjang: di-strip
        m = _DATA_DIRECTIVE_RE.match(s)
        if not m:
            return None
        width = _DATA_WIDTH[m.group(1)]
        for p in m.group(2).split(","):
            p = p.strip()
            if not p:
                continue
            if not _DATA_NUM_RE.match(p):
                return None  # simbolik (label/extern) -> SKIP
            v = int(re.sub(r"[uUlL]+$", "", p), 0) & ((1 << (8 * width)) - 1)
            out.extend((v >> (8 * k)) & 0xFF for k in range(width))
    return out


def data_block_text(stem, dsec, addr8, bytevals):
    """Deklarasi C byte-identik utk satu data-chunk (tanpa wrapper extern).

    `extern const` (linkage luar, C): agbcc tak-drop simbol tak-terpakai;
    section "a" (readonly) ditempatkan lds SORT_BY_NAME tepat di posisi
    section asm yg dicabut.

    TERVERIFIKASI (uji 2026-10-31, game_state.08010F14): file uji berisi
    1 data_block + 1 fungsi dikompilasi agbcp -O2 lalu dirakit; readelf -S
    menunjukkan `.text.game_state.08010F14` PROGBITS AX (bukan .rodata.*)
    dgn simbol OBJECT GLOBAL 8B. Jadi compare HIJAU tanpa trik tambahan.

    Simbol dibungkus marker DECOMP-MATCHED sendiri (`... .data.<addr8>`)
    agar dikenali sbg unit yg sudah pindah (tak di-emit ganda).

    Nama simbol unik ROM (stem+addr); label asm tak-dipertahankan (data
    tak-dirujuk modul — splitter hanya join data tak-bermarker). Bila
    di masa depan ada label DIRUJUK, splitter menggabungkannya ke grup
    fungsi pemakainya dan parse_data_bytes me-SKIP-nya (simbolik)."""
    init = ", ".join(f"0x{b:02X}" for b in bytevals)
    tag = f"// DECOMP-MATCHED gData_{stem}_{addr8}.data.{addr8}\n"
    return (
        tag +
        f"// data tak-dirujuk di 0x{addr8} (label di-strip; tak dirujuk modul)"
        f" — byte-identik dgn asm\n"
        f"extern const u8 gData_{stem}_{addr8}"
        f"[{len(bytevals)}]"
        f' __attribute__((section("{dsec}"))) = {{{init}}};\n'
    )


def migratable_set(stem):
    """Nama fungsi yang boleh pindah sendirian.

    Aturan identik dgn split_asm_sections.migratable (grup tepat 1 chunk
    fungsi); dihitung dari cache _analyze_stem agar tak parse ganda
    bersama asm_section_of."""
    out = set()
    for chs in _analyze_stem(stem):
        funcs = [c["name"] for c in chs if c["kind"] == "func"]
        if len(funcs) == 1:
            out.update(funcs)
    return out


def is_split_module(stem):
    """True bila build memecah asm modul per-section (section-replace berlaku).

    False utk modul src-sebelum-asm (hardware/actor: splitter nonaktif, asm
    utuh .text) dan modul tak-split (linkonce/scene/pilot: tanpa grup)."""
    if not _analyze_stem(stem):
        return False
    try:
        lds_text = (REPO / "fomt.lds").read_text(errors="replace")
    except OSError:
        return False
    return _lds_layout(lds_text, stem) != "before"


def load_state(stem):
    p = REPO / "decomp" / "state" / "modules" / f"{stem}.json"
    with open(p) as f:
        return json.load(f)


def promoted_funcs(module, ascending=None):
    """(nama, addr) fungsi berstatus promoted.

    Modul split (section-replace): alamat menaik — pindah urutan apa pun
    aman karena section-replace tak menggeser fungsi lain. Modul non-split
    (tail-only lama: hardware/actor/scene/pilot): alamat menurun
    (tail-first) seperti semula. ascending=None -> otomatis per modul."""
    stem = module[: -len(".s")]
    if ascending is None:
        ascending = is_split_module(stem)
    state = load_state(stem)
    out = [
        (name, info["addr"])
        for name, info in state.items()
        if info.get("module") == module and info.get("status") == "promoted"
    ]
    out.sort(key=lambda t: t[1], reverse=not ascending)
    return out


def extract_block(promoted_path, func):
    lines = promoted_path.read_text().splitlines(keepends=True)
    start = None
    for i, ln in enumerate(lines):
        if ln.strip() == f"{MARKER}{func}":
            # baris marker persis: "// DECOMP-MATCHED <func>" + info bebas
            start = i
            break
        if ln.startswith(f"{MARKER}{func} ") or ln.startswith(f"{MARKER}{func}("):
            start = i
            break
    if start is None:
        # fallback: marker diawali prefix tsb
        for i, ln in enumerate(lines):
            if ln.startswith(MARKER + func):
                start = i
                break
    if start is None:
        return None
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if lines[i].startswith(MARKER):
            end = i
            break
    block = "".join(lines[start:end]).rstrip() + "\n"
    return block


# Typedef harness judge (decomp/run.py COMMON) -> header repo (include/types.h).
# s32 dkk tidak ada di repo (src memakai i32); tanpa ini .cc gagal kompilasi.
# Hanya tipe signed judge; u8/u16/u32 sudah sama di kedua sisi.
JUDGE_TYPEMAP = (("s32", "i32"), ("s16", "i16"), ("s8", "i8"))


def translate_types(body):
    for old, new in JUDGE_TYPEMAP:
        body = re.sub(rf"\b{old}\b", new, body)
    return body


FAKE_MEMCPY_RE = re.compile(
    r"^\s*(?:i32|s32|void)\s+memcpy\(\s*(?:i32|s32|void|u8|u32|char)"
    r"\s*\*?\s*,\s*(?:i32|s32|void|u8|u32|char)\s*\*?\s*,\s*"
    r"(?:i32|s32|u32|unsigned\s+int|int|size_t)\s*\)\s*;"
    r"\s*(?:/\*.*?\*/)?\s*$\n",
    re.M)
MEMCPY_CALL_RE = re.compile(r"\bmemcpy\(([^,()]+),([^,()]+),([^()]+)\)")


def adapt_memcpy(body):
    """Hapus prototipe memcpy palsu ala-judge; pakai <string.h> + cast
    pointer agar sah C++ tanpa mengubah codegen (cast itu no-op)."""
    body, n = FAKE_MEMCPY_RE.subn("", body)
    if not n:
        return body, False
    body = MEMCPY_CALL_RE.sub(
        lambda m: f"memcpy((void *)({m.group(1).strip()}), "
        f"(const void *)({m.group(2).strip()}), {m.group(3).strip()})",
        body,
    )
    return body, True


FAKE_MEMCMP_RE = re.compile(
    r"^\s*(?:i32|s32|int)\s+memcmp\s*\([^;]*\)\s*;"
    r"\s*(?:/\*.*?\*/)?\s*$\n",
    re.M)


def adapt_memcmp(body):
    """Hapus prototipe memcmp palsu ala-judge; <string.h> sudah cukup karena
    semua pointer argumen otomatis konversi ke `const void *` (no-op)."""
    body, n = FAKE_MEMCMP_RE.subn("", body)
    return body, bool(n)


# Prototipe libc palsu ala-judge (judge C/agbcc tanpa builtin check):
# `i32 strcpy(i32, i32 *);`, `u32 strlen(i32);` dsb + `/* extern */`.
# Di src (C++ dgn -Werror) deklarasi ini konflik dgn builtin gcc
# (`conflicts with built-in declaration ... strlen`) -> hapus, pakai
# <string.h> + cast no-op di call-site (reinterpretasi, codegen identik).
_LIBC_FAKE_RE = re.compile(
    r"^\s*(?:i32|s32|u32|int|void|u8\s*\*|char\s*\*|size_t)\s+"
    r"(strcpy|strncpy|strcat|strncat|strcmp|strncmp|strlen|strchr|strrchr|"
    r"memset|memmove)\s*\([^;]*\)\s*;"
    r"\s*(?:/\*.*?\*/)?\s*$\n",
    re.M)
_LIBC_CALL_RE = {
    "strlen": (re.compile(r"\bstrlen\(([^,()]+)\)"),
               lambda m: f"strlen((const char *)({m.group(1).strip()}))"),
    "strcpy": (re.compile(r"\bstrcpy\(([^,()]+),([^,()]+)\)"),
               lambda m: f"strcpy((char *)({m.group(1).strip()}), "
               f"(const char *)({m.group(2).strip()}))"),
    "strncpy": (re.compile(r"\bstrncpy\(([^,()]+),([^,()]+),([^()]+)\)"),
               lambda m: f"strncpy((char *)({m.group(1).strip()}), "
               f"(const char *)({m.group(2).strip()}), "
               f"{m.group(3).strip()})"),
    "strcat": (re.compile(r"\bstrcat\(([^,()]+),([^,()]+)\)"),
               lambda m: f"strcat((char *)({m.group(1).strip()}), "
               f"(const char *)({m.group(2).strip()}))"),
    "strcmp": (re.compile(r"\bstrcmp\(([^,()]+),([^,()]+)\)"),
               lambda m: f"strcmp((const char *)({m.group(1).strip()}), "
               f"(const char *)({m.group(2).strip()}))"),
    "strncmp": (re.compile(r"\bstrncmp\(([^,()]+),([^,()]+),([^()]+)\)"),
                lambda m: f"strncmp((const char *)({m.group(1).strip()}), "
                f"(const char *)({m.group(2).strip()}), "
                f"{m.group(3).strip()})"),
    "memset": (re.compile(r"\bmemset\(([^,()]+),([^,()]+),([^()]+)\)"),
               lambda m: f"memset((void *)({m.group(1).strip()}), "
               f"{m.group(2).strip()}, {m.group(3).strip()})"),
    "memmove": (re.compile(r"\bmemmove\(([^,()]+),([^,()]+),([^()]+)\)"),
                lambda m: f"memmove((void *)({m.group(1).strip()}), "
                f"(const void *)({m.group(2).strip()}), "
                f"{m.group(3).strip()})"),
}


def _wrap_libc_args(clean, fname, casts):
    """Bungkus argumen call libc dgn cast (kurung-seimbang, 1+ level).

    casts = list format per posisi: None = biarkan, atau callable
    str->str. Argumen lebih/kurang dari casts -> biarkan apa adanya."""
    out = []
    pos = 0
    for fn, args, start in _find_calls(clean):
        if fn != fname:
            continue
        parts = _split_top_commas(args)
        if len(parts) != len(casts):
            continue
        new_parts = [c(p.strip()) if c else p.strip()
                     for p, c in zip(parts, casts)]
        if new_parts == [p.strip() for p in parts]:
            continue
        out.append((start, fn, args, new_parts))
    # terapkan dari belakang agar offset tak bergeser
    for start, fn, args, new_parts in reversed(out):
        end = start + len(fn) + 1 + len(args) + 1
        clean = (clean[:start] + fn + "(" + ", ".join(new_parts)
                 + clean[end - 1:])
    return clean


def adapt_libc_string(body):
    """Hapus prototipe libc palsu ala-judge; <string.h> + cast no-op.

    Return (body, need_string_h). Cast pointer (T *)x adalah no-op codegen
    (reinterpretasi register), jadi byte-identik terjaga; tanpa cast,
    -Werror meledakkan konversi int->pointer di call-site."""
    new_body, n = _LIBC_FAKE_RE.subn("", body)
    if not n:
        return body, False
    char_p = lambda p: f"(char *)({p})"
    cchar_p = lambda p: f"(const char *)({p})"
    void_p = lambda p: f"(void *)({p})"
    cvoid_p = lambda p: f"(const void *)({p})"
    specs = {
        "strlen": [cchar_p],
        "strcpy": [char_p, cchar_p],
        "strncpy": [char_p, cchar_p, None],
        "strcat": [char_p, cchar_p],
        "strcmp": [cchar_p, cchar_p],
        "strncmp": [cchar_p, cchar_p, None],
        "memset": [void_p, None, None],
        "memmove": [void_p, cvoid_p, None],
    }
    for name, casts in specs.items():
        new_body = _wrap_libc_args(new_body, name, casts)
    # fallback regex utk argumen sederhana tanpa kurung (lebih cepat,
    # mencakup pola yg terlewat _find_calls bila ada)
    for name, (rx, fmt) in _LIBC_CALL_RE.items():
        new_body = rx.sub(fmt, new_body)
    return new_body, True


def struct_name(blk):
    m = re.search(r"struct\s+(\w+)", blk)
    if m:
        return m.group(1)
    m = re.search(r"\}\s*(\w+)\s*;", blk)  # typedef anonim: typedef struct {...} X;
    return m.group(1) if m else ""


_PRIMITIVE_TYPES = set(
    "u8 s8 u16 s16 u32 s32 i32 u64 s64 i64 int char short long signed "
    "unsigned void float double _Bool size_t".split())


def _defined_names(blk):
    """Nama tipe yang didefinisikan satu unit hoist."""
    names = set()
    mf = re.match(r"\s*typedef\s+struct\s+(\w+)\s+(\w+)\s*;", blk)
    if mf:
        return {mf.group(1), mf.group(2)}
    m = re.match(r"\s*(?:typedef\s+)?struct\s+(\w+)", blk)
    if m:
        names.add(m.group(1))
    m = re.search(r"\}\s*(\w+)\s*;", blk)
    if m and blk.lstrip().startswith("typedef"):
        names.add(m.group(1))
    return names - _PRIMITIVE_TYPES


def _topo_order(blocks):
    """Urutkan unit hoist agar dependensi tipe selalu didefinisikan dulu
    (stabil; siklus -> pertahankan urutan semula)."""
    keys = list(range(len(blocks)))
    defs = [_defined_names(b) for b in blocks]
    by_name = {}
    for k, ds in zip(keys, defs):
        for n in ds:
            by_name.setdefault(n, k)
    all_names = set(by_name)
    deps = {}
    for k, b in zip(keys, blocks):
        words = set(re.findall(r"[A-Za-z_]\w*", b))
        deps[k] = {by_name[w] for w in (words & all_names) - defs[k]
                   if by_name[w] != k}
    out, done, remaining = [], set(), list(keys)
    while remaining:
        for k in list(remaining):
            if deps[k] <= done:
                out.append(k)
                done.add(k)
                remaining.remove(k)
                break
        else:
            out.append(remaining.pop(0))  # siklus: jangan macet
    return [blocks[k] for k in out]


def _is_pure_type(blk):
    """True bila blok struct hanya definisi tipe (aman di-hoist)."""
    if blk.lstrip().startswith("typedef"):
        return True
    tail = blk[blk.rfind("}") + 1:].strip()
    return tail == ";"


def take_structs(text):
    """Pisahkan definisi struct dari teks -> (teks_tanpa_struct, [blok]).

    Dipakai agar struct yang dibawa tiap blok MATCH naik ke scope file
    (satu salinan), bukan terjebak di dalam blok `extern "C"` masing-masing
    yang bikin blok berikutnya 'was not declared' / 'redefinition'.

    Menangkap juga forward-typedef (`typedef struct X X;`) dan typedef
    anonim (`typedef struct {...} X;`) agar hoist tidak kehilangan
    dependensi tipe."""

    def brace_end(start):
        depth, k = 0, start
        while k < len(text):
            if text[k] == "{":
                depth += 1
            elif text[k] == "}":
                depth -= 1
                if depth == 0:
                    return k
            k += 1
        return -1

    spans = []
    for m in STRUCT_RE.finditer(text):
        k = brace_end(m.end() - 1)
        if k == -1:
            continue
        end = text.find(";", k)
        if end == -1:
            continue
        blk = text[m.start(): end + 1]
        if not _is_pure_type(blk):
            continue  # deklarasi variabel: biarkan di tempat
        spans.append((m.start(), end + 1))
    for m in FWD_TYPEDEF_RE.finditer(text):
        if any(s <= m.start() < e for s, e in spans):
            continue
        spans.append((m.start(), m.end()))
    spans.sort()
    blocks = []
    for s, e in reversed(spans):
        blocks.append(text[s: e])
        text = text[:s] + text[e:]
    blocks.reverse()
    return re.sub(r"\n{3,}", "\n\n", text), blocks


STRUCT_RE = re.compile(r"(typedef\s+)?struct\s+(?:\w+\s*)?\{", re.M)
FWD_TYPEDEF_RE = re.compile(r"^[ \t]*typedef\s+struct\s+\w+\s+\w+\s*;[ \t]*$",
                             re.M)
EXTERN_RE = re.compile(
    # Tipe return umum ([\w:]+): cakup struct/typedef/enum pointee selain
    # primitif (mis. GenObj *, S_3E *). Bintang multi-level (\**): cakup
    # s32 **__builtin_new. Guard keyword: tanpa daftar tipe hardcoded,
    # statement `return f(x);` / `if (x) g();` ikut match (TYPE=return/if)
    # -> tolak kata kunci statement/deklarasi sebagai tipe. `(?=[\s\*])`
    # mencegah SATU identifier terbelah dua (call `foo(x);` -> TYPE=fo,
    # NAME=o): deklarasi asli selalu punya spasi/bintang antara tipe dan
    # nama, call tidak.
    r"^\s*(?!(?:return|if|else|while|for|do|switch|case|break|continue|goto|"
    r"sizeof|typedef|struct|enum|union|class|new|delete|using|namespace|"
    r"template|asm|__asm__|volatile|register|default|co_return|co_await|"
    r"co_yield)\b)([\w:]+)(?=[\s\*])\s*(\**)\s*(\w+)\s*\(([^;{}]*)\)\s*;"
    r"\s*(?:/\*.*?\*/)?\s*$",
    re.M)
# Pola yang sama untuk DEFINISI fungsi (`... {` bukan `... ;`).
FUNC_DEF_RE = re.compile(
    r"^\s*(?!(?:return|if|else|while|for|do|switch|case|break|continue|goto|"
    r"sizeof|typedef|struct|enum|union|class|new|delete|using|namespace|"
    r"template|asm|__asm__|volatile|register|default|co_return|co_await|"
    r"co_yield)\b)([\w:]+)(?=[\s\*])\s*(\**)\s*(\w+)\s*\(([^;{}]*)\)\s*\{"
    r"\s*(?:/\*.*?\*/)?\s*$",
    re.M)


def extern_decls(text):
    """Petakan nama -> himpunan tanda tangan deklarasi extern di teks.

    Tanda tangan mencakup tipe return: `void* f(int)` vs `i32 f(int)`
    tabrakan di C++ (kasus __builtin_new) — dulu lolos cek karena hanya
    parameter yang dibandingkan, baru meledak saat kompilasi."""
    out = {}
    for m in EXTERN_RE.finditer(text):
        if "(*" in m.group(0):
            continue
        sig = (m.group(1) + m.group(2) + " "
               + "(" + re.sub(r"\s+", " ", m.group(4).strip()) + ")")
        out.setdefault(m.group(3), set()).add(sig)
    # Definisi fungsi juga mengikat tanda tangan di scope file: deklarasi
    # `i32 f(int);` di blok baru vs definisi `void f(GenObj *, ...)` yg
    # sudah pindah -> konflik kompilasi (kasus func_0803BEFC vs 03BDE4).
    # Tangkap dgn pola yg sama + kurung kurawal pembuka.
    for m in FUNC_DEF_RE.finditer(text):
        if "(*" in m.group(0):
            continue
        sig = (m.group(1) + m.group(2) + " "
               + "(" + re.sub(r"\s+", " ", m.group(4).strip()) + ")")
        out.setdefault(m.group(3), set()).add(sig)
    return out


def _src_struct_differs(src_text, nm, blk):
    """True bila src memuat definisi tipe murni bernama nm yang isinya
    beda dari blk (tabrakan yang harus disatukan manual)."""
    for m in STRUCT_RE.finditer(src_text):
        depth, k = 0, m.end() - 1
        while k < len(src_text):
            if src_text[k] == "{":
                depth += 1
            elif src_text[k] == "}":
                depth -= 1
                if depth == 0:
                    break
            k += 1
        end = src_text.find(";", k)
        if end == -1:
            continue
        cand = src_text[m.start(): end + 1]
        if not _is_pure_type(cand):
            continue
        if struct_name(cand) == nm and cand != blk:
            return True
    return False


_PTR_TYPE_RE = re.compile(
    # Pointee umum ([\w:]+): cakup struct/typedef (GenObj *, S_3E *) agar
    # _unify_extern_ptrs tetap berfungsi. Aman dari `*` perkalian: hanya
    # dipakai pada tanda tangan deklarasi (_norm_ptr_types).
    r"\b[\w:]+\s*\*+")


def _norm_ptr_types(text):
    """Ganti semua tipe pointer dgn `void *` (dipakai untuk membandingkan
    tanda tangan yang hanya beda signedness pointee)."""
    return _PTR_TYPE_RE.sub("void *", text)


def _deconflict_new_structs(body, blocks, old_blocks, src_nostruct, func):
    """Beri nama unik pada struct baru yang tabrakan dgn tipe file/Blok lain.

    Codegen tidak berubah (nama tipe lokal), tapi blok tetap mandiri dan
    tidak memaksa penyatuan manual hanya karena layout/field berbeda."""
    renames = {}
    for i, blk in enumerate(blocks):
        nm = struct_name(blk)
        if not nm or FWD_TYPEDEF_RE.match(blk.strip()):
            continue
        others = list(old_blocks) + [b for j, b in enumerate(blocks) if j != i]
        conflict = _src_struct_differs(src_nostruct, nm, blk) or any(
            struct_name(o) == nm and o.strip() != blk.strip()
            and not FWD_TYPEDEF_RE.match(o.strip()) for o in others)
        if conflict and nm not in renames:
            renames[nm] = f"{nm}__{func}"
    for old, new in renames.items():
        body = re.sub(rf"\b{old}\b", new, body)
        blocks = [re.sub(rf"\b{old}\b", new, b) for b in blocks]
    return body, blocks


def _rewrite_decl_params(text, name, norm):
    """Normalisasi parameter deklarasi extern `name` di teks (pertahankan
    komentar ekor). Return (teks, jumlah yang diubah)."""
    def repl(m):
        if m.group(3) != name:
            return m.group(0)
        orig = m.group(0)
        a = m.start(4) - m.start(0)
        b = m.end(4) - m.start(0)
        return orig[:a] + norm(m.group(4)) + orig[b:]

    out, n = EXTERN_RE.subn(repl, text)
    return out, n


def _unify_extern_ptrs(body, src_text):
    """Satukan deklarasi extern yang hanya beda tipe pointer (mis. i32* vs
    u32*) menjadi `void *` di body DAN src. Pointer apa pun konversi implisit
    ke void*, jadi call-site tetap sah tanpa cast; codegen tidak berubah."""
    old = extern_decls(src_text)
    new = extern_decls(body)
    for nm, sigs in new.items():
        if nm not in old or sigs.issubset(old[nm]):
            continue
        old_norm = {_norm_ptr_types(s) for s in old[nm]}
        if not {_norm_ptr_types(s) for s in sigs}.issubset(old_norm):
            continue  # beda nyata (bukan cuma pointer) -> biarkan cek gagal
        body, n1 = _rewrite_decl_params(body, nm, _norm_ptr_types)
        src_text, n2 = _rewrite_decl_params(src_text, nm, _norm_ptr_types)
        if n1 and n2:
            continue
    return body, src_text


def _split_top_commas(s):
    """Pecah berdasar koma level-atas (abaikan koma dalam kurung/bracket)."""
    parts, depth, cur = [], 0, []
    for ch in s:
        if ch in "([":
            depth += 1
        elif ch in ")]" and depth:
            depth -= 1
        if ch == "," and depth == 0:
            parts.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    parts.append("".join(cur))
    return parts


def _strip_code_noise(text):
    """Samarkan string/char literal + komentar agar scan call-site tak
    false-positive pada `(` di dalamnya (panjang dipertahankan)."""
    out = []
    i, n = 0, len(text)
    while i < n:
        ch = text[i]
        if ch == "/" and i + 1 < n and text[i + 1] == "/":
            j = text.find("\n", i)
            j = n if j == -1 else j
            out.append(" " * (j - i))
            i = j
        elif ch == "/" and i + 1 < n and text[i + 1] == "*":
            j = text.find("*/", i + 2)
            j = n if j == -1 else j + 2
            out.append(" " * (j - i))
            i = j
        elif ch in "\"'":
            j = i + 1
            while j < n and text[j] != ch:
                j += 2 if text[j] == "\\" else 1
            j = min(n, j + 1)
            out.append(" " * (j - i))
            i = j
        else:
            out.append(ch)
            i += 1
    return "".join(out)


_CALLSITE_KW = set(
    "if else for while do switch return sizeof typedef struct enum union "
    "class new delete using namespace template asm __asm__ volatile "
    "register static extern const unsigned signed void int char short long "
    "float double".split())
_NUMERIC_RE = re.compile(
    r"^[+-]?(?:0[xX][0-9a-fA-F]+|\d[\d']*(?:\.\d*)?|\.\d+)[uUlLfF]*$")
_LOCAL_DECL_RE = re.compile(
    r"\s*(?!(?:extern|return|typedef|static|register|const)\b)"
    r"([\w:]+(?:\s*\*+)?)\s*(\w+)\s*(?:[=;]|$)")
_CALL_RE = re.compile(r"\b([A-Za-z_]\w*)\s*\(")


def _norm_base(base):
    base = re.sub(r"\b(const|volatile|struct|union|enum)\b", "", base)
    return re.sub(r"\s+", " ", base).strip()


def _ptr_parts(typ):
    """(base, level) utk tipe pointer; None bila bukan tipe polos
    (function pointer/kurung/array -> tak dinilai, bukan mismatch)."""
    t = (typ or "").strip()
    if not t or "(" in t or ")" in t or "[" in t:
        return None
    return _norm_base(t.replace("*", "")), t.count("*")


def _add_star(t):
    """Tambah satu level pointer, spasi bintang dinormalisasi (`T **` +
    satu -> `T***`, bukan `T ** *`)."""
    return re.sub(r"\s*\*", "*", t.strip()) + "*"


def _param_type(p):
    """Tipe satu parameter deklarasi (nama variabel dibuang)."""
    p = p.strip()
    if not p or p in ("void", "..."):
        return p
    if "(" in p or ")" in p:
        return None  # function pointer: tak dinilai
    m = re.match(r"^(.*?)\b([\w:]+)\s*(\[[^\]]*\])?$", p)
    if not m:
        return p if p.endswith("*") else None
    typ, name, arr = m.group(1).strip(), m.group(2), m.group(3)
    if not typ:
        return name  # 'i32' polos: tipe tanpa nama
    if arr:
        return (typ + " *").strip()  # array -> decay pointer
    return typ


def _param_name(p):
    """Nama satu parameter deklarasi, atau None bila tanpa nama."""
    p = p.strip()
    m = re.match(r"^(.*[\*\s])\b([\w:]+)\s*(\[[^\]]*\])?$", p)
    return m.group(2) if m else None


def _local_var_types(body):
    """nama -> tipe utk parameter definisi fungsi + variabel lokal body."""
    vars = {}
    m = re.search(r"^\s*[\w:]+\s*\**\s*\w+\s*\(([^;{}]*)\)\s*\{", body, re.M)
    if m:
        for p in _split_top_commas(m.group(1)):
            t, nm = _param_type(p), _param_name(p)
            if t and nm and nm not in _CALLSITE_KW:
                vars[nm] = t
    for ln in body.splitlines():
        m = _LOCAL_DECL_RE.match(ln)
        if (m and m.group(1) not in _CALLSITE_KW
                and m.group(2) not in _CALLSITE_KW):
            vars[m.group(2)] = m.group(1).strip()
    # Array lokal (`u8 sp0[52];`): simpan sbg `u8(*)[52]` agar &sp0/sp0
    # dikenali pointer-to-array (butuh cast ke pointer-elemen; alamat
    # sama -> no-op codegen, kasus func_08012AA4 &sp0 -> i32 *).
    for ln in body.splitlines():
        m = re.match(r"^\s*(?!(?:extern|return|typedef|static|register|"
                     r"const)\b)([\w:]+(?:\s*\*+)?)\s*(\w+)\s*"
                     r"(\[[^\]]*\])\s*(?:[=;]|$)", ln)
        if (m and m.group(1) not in _CALLSITE_KW
                and m.group(2) not in _CALLSITE_KW):
            vars[m.group(2)] = f"{m.group(1).strip()}(*){m.group(3)}"
    return vars


def _find_calls(clean):
    """Yield (fname, args_str, pos): call `fname(...)` kurung-seimbang.
    `clean` sudah disamarkan dari string/komentar."""
    for m in _CALL_RE.finditer(clean):
        i = m.end()
        depth, j = 1, i
        while j < len(clean) and depth:
            if clean[j] == "(":
                depth += 1
            elif clean[j] == ")":
                depth -= 1
            j += 1
        if depth:
            continue  # tak-seimbang: abaikan
        yield m.group(1), clean[i: j - 1], m.start()


def _arg_type(arg, vartypes):
    """Tipe argumen call; None = tak-diketahui -> selalu lolos (bukan SKIP).
    Literal numerik/NULL/string, ekspresi operator, dan call bersarang
    tak pernah dinilai."""
    a = arg.strip()
    if not a:
        return None
    if _NUMERIC_RE.match(a) or a in ("NULL", "nullptr"):
        return None
    if a.startswith('"'):
        return None
    m = re.match(r"^\(([^()]*)\)", a)
    if m:
        return _param_type(m.group(1))  # cast: tipe hasil = tipe cast
    m = re.match(r"^&([A-Za-z_]\w*)$", a)
    if m:
        t = vartypes.get(m.group(1))
        return _add_star(t) if t else None
    m = re.match(r"^(\*+)([A-Za-z_]\w*)$", a)
    if m:
        t = vartypes.get(m.group(2))
        parts = _ptr_parts(t) if t else None
        if not parts:
            return None
        base, stars = parts
        if stars <= len(m.group(1)):
            return None  # deref habis -> skalar, bukan pointer
        return base + "*" * (stars - len(m.group(1)))
    m = re.match(r"^[A-Za-z_]\w*$", a)
    if m:
        return vartypes.get(a)
    return None


def _ptr_arg_ok(arg_t, param_t):
    """True bila argumen boleh lewat. C++ hanya mengizinkan T* -> void*
    SATU level total; T** -> void** (atau lebih) butuh cast eksplisit.
    Skalar (level 0) dan tipe tak-dikenal selalu lolos (konservatif)."""
    if not arg_t or not param_t or param_t == "...":
        return True
    ap, pp = _ptr_parts(arg_t), _ptr_parts(param_t)
    if not ap or not pp:
        return True
    a_base, a_stars = ap
    p_base, p_stars = pp
    if a_stars == 0 or p_stars == 0:
        return True
    if p_base == "void" and p_stars == 1:
        return True
    return a_stars == p_stars and a_base == p_base


_DECL_TYPE_RE = re.compile(
    r"^\s*((?:(?:struct|union|enum|const|volatile|signed|unsigned|short|"
    r"long)\s+)*[\w:]+\s*\**)\s*(\w+)(\s*\[[^\]]*\])?\s*;",
    re.M)
# ^ catatan: bintang boleh menempel nama (`GenObj *p`), qualifier hanya
# dari daftar known agar `s32 unk4` tak terbaca tipe=`s32 unk`.


def _struct_field_types(struct_blocks):
    """{type: {field: type}} dari blok struct (definisi `T f;` per baris)."""
    out = {}
    for blk in struct_blocks:
        nm = struct_name(blk)
        if not nm:
            continue
        fields = {}
        for m in _DECL_TYPE_RE.finditer(blk):
            fields[m.group(2)] = m.group(1).strip()
        out[nm] = fields
    return out


def _base_type(t):
    """Nama tipe tanpa bintang/const, mis. 'GenObj *' -> 'GenObj'."""
    if not t:
        return None
    b = re.sub(r"\b(const|volatile|struct|union|enum)\b", "", t)
    b = re.sub(r"\s+", " ", b.replace("*", " ")).strip()
    return b.split()[-1] if b else None


def _rhs_ptr_type(rhs, vartypes, ftypes):
    """Tipe pointer RHS bila DIKETAHUI pointer; None bila bukan/tak-tahu.

    Menangani: var-pointer, &var, *p (deref), field-access (tipe dari
    ftypes), string literal TIDAK (biarkan). Call/ekspresi -> None."""
    s = rhs.strip()
    if not s or s.startswith('"') or "(" in s:
        return None
    if s in ("NULL", "nullptr"):
        return None
    if _NUMERIC_RE.match(s):
        return None
    m = re.match(r"^&([A-Za-z_]\w*)$", s)
    if m:
        t = vartypes.get(m.group(1))
        return _add_star(t) if t else None
    m = re.match(r"^(\*+)([A-Za-z_]\w*)$", s)
    if m:
        t = vartypes.get(m.group(2))
        parts = _ptr_parts(t) if t else None
        if not parts:
            return None
        base, stars = parts
        if stars <= len(m.group(1)):
            return None  # deref habis -> skalar, bukan pointer
        return base + "*" * (stars - len(m.group(1)))
    m = re.match(r"^([A-Za-z_]\w*)$", s)
    if m:
        t = vartypes.get(m.group(1))
        parts = _ptr_parts(t) if t else None
        return t if parts and parts[1] > 0 else None
    m = re.match(r"^([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)$", s)
    if m:
        vt = vartypes.get(m.group(1))
        if vt is None:
            return None
        bt = _base_type(vt)
        ft = ftypes.get(bt, {}).get(m.group(2))
        if ft is None:
            return None
        parts = _ptr_parts(ft)
        return ft if parts and parts[1] > 0 else None
    m = re.match(r"^([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)$", s)
    if m:
        vt = vartypes.get(m.group(1))
        if vt is None:
            return None
        bt = _base_type(vt)
        ft = ftypes.get(bt, {}).get(m.group(2))
        if ft is None:
            return None
        parts = _ptr_parts(ft)
        return ft if parts and parts[1] > 0 else None
    return None


def _ptr_scalar_cast_fix(body, struct_blocks=None):
    """Tambahkan cast no-op pada `PTR = SKALAR;` agar lolos C++.

    Judge (C/agbcc) mengizinkan int->pointer implisit dgn warning; C++
    menolak assignment `GenObj *p = <s32>` (kasus temp_r1 = arg0->unk4
    dgn field s32). Cast `(T *)rhs` adalah no-op codegen (reinterpretasi
    register; mov yang sama di -O2), jadi byte-identik terjaga.

    LHS didukung: var pointer lokal DAN field-access (`p->f`, `p.f`).
    Tipe field diambil dari struct_blocks (blok struct post-rename);
    field tak-dikenal diperlakukan skalar hanya bila RHS literal/known-
    skalar (bila tidak, biarkan — konservatif).

    Hanya menyentuh assignment dgn RHS skalar yang DIKETAHUI (literal
    numerik, var/field bertipe skalar). RHS pointer/call/address-of/cast/
    ekspresi tak-dikenal dibiarkan (cast di sana tak perlu; call-site
    multi-pointer ditangani _callsite_ptr_mismatch sbg SKIP)."""
    vartypes = _local_var_types(body)
    scalars = set()
    for ln in body.splitlines():
        m = _LOCAL_DECL_RE.match(ln)
        if m and "*" not in (m.group(1) or ""):
            scalars.add(m.group(2))
    # field struct bertipe skalar di body
    for m in re.finditer(
            r"^\s*(s8|u8|s16|u16|s32|u32|i8|i16|i32|int|char|short|long)"
            r"\s+(\w+)\s*;", body, re.M):
        scalars.add(m.group(2))
    ftypes = _struct_field_types(struct_blocks or [])
    out = []
    for ln in body.splitlines():
        m = re.match(r"^(\s*)([A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*)\s*=\s*(.+?);\s*$", ln)
        if not m:
            out.append(ln)
            continue
        ind, lhs, rhs = m.group(1), m.group(2).strip(), m.group(3).strip()
        vt = vartypes.get(lhs)
        if vt is None and ("->" in lhs or "." in lhs):
            parts = re.split(r"\s*(?:->|\.)\s*", lhs)
            vt = vartypes.get(parts[0])
            for fld in parts[1:]:
                bt = _base_type(vt)
                ft = ftypes.get(bt, {}).get(fld)
                if ft is None:
                    vt = None
                    break
                vt = ft
        var = lhs
        vp = _ptr_parts(vt) if vt else None
        if vp and vp[1] == 0:
            # ARAH BALIK: LHS skalar = RHS pointer -> cast (T)rhs (no-op
            # mov; C++ menolak pointer->int implisit, kasus
            # `sp4 = temp_r0->unk0` di func_0801A054).
            rt = _rhs_ptr_type(rhs, vartypes, ftypes)
            if rt:
                out.append(f"{ind}{lhs} = ({vt})({rhs});")
            else:
                out.append(ln)
            continue
        if not vp or vp[1] == 0:
            out.append(ln)
            continue  # LHS bukan pointer: bukan urusan fungsi ini
        if rhs.startswith("(") or rhs.startswith("&"):
            out.append(ln)
            continue  # cast/address-of: biarkan
        fm_call = re.match(r"^([A-Za-z_]\w*)\s*\((.*)\)\s*$", rhs, re.S)
        if fm_call and "(" not in fm_call.group(1):
            # RHS call: tentukan tipe return dari deklarasi extern body.
            rt = None
            for m in EXTERN_RE.finditer(body):
                if m.group(3) == fm_call.group(1) and "(*" not in m.group(0):
                    rt = (m.group(1) + m.group(2)).strip()
                    break
            rp = _ptr_parts(rt) if rt else None
            if rp is not None and vp is not None:
                if rp[1] == 0 and vp[1] == 0:
                    out.append(ln)
                    continue  # skalar = skalar: bukan urusan fungsi ini
                rb, rs = _norm_base(rp[0]), rp[1]
                vb, vs = _norm_base(vp[0]), vp[1]
                if rs == vs and rb == vb:
                    out.append(ln)
                    continue  # tipe sama persis: biarkan
                # Beda (void*->T*, int->T*, T*->skalar): cast no-op.
                out.append(f"{ind}{lhs} = ({vt})({rhs});")
                continue
            out.append(ln)
            continue  # return tak-dikenal: biarkan (konservatif)
        if "(" in rhs:
            out.append(ln)
            continue  # ekspresi: biarkan
        if rhs in vartypes:
            rp = _ptr_parts(vartypes[rhs])
            if rp and rp[1] > 0:
                out.append(ln)
                continue  # RHS var pointer: sudah benar, biarkan
        fm = re.match(r"^([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)$", rhs)
        if fm:
            # field-access: cast KECUALI field tsb DIKETAHUI bertipe
            # pointer (deklarasi lokal/struct body). Field tak-dikenal
            # diperlakukan skalar: cast no-op aman codegen; bila ternyata
            # pointer pun cast redundan tetap no-op & kompilasi OK.
            known_ptr = False
            for sm in re.finditer(
                    r"^\s*([\w:]+(?:\s*\*+)?)\s+(\w+)\s*;",
                    body, re.M):
                if sm.group(2) == fm.group(2) and "*" in (sm.group(1) or ""):
                    known_ptr = True
                    break
            if known_ptr:
                out.append(ln)
                continue
        elif not (_NUMERIC_RE.match(rhs) or rhs in ("NULL", "nullptr")
                  or rhs in scalars or rhs in vartypes):
            rt = _rhs_ptr_type(rhs, vartypes, ftypes)
            if rt is not None:
                # RHS pointer-diketahui (deref/&var/field): cast bila base
                # beda atau rhs void* (void*->T* tak implisit). Sama persis
                # -> biarkan (cast redundan bisa ubah codegen agbcc).
                rp = _ptr_parts(rt)
                if (rp and rp[1] > 0 and _norm_base(rp[0]) != _norm_base(vp[0])):
                    out.append(f"{ind}{var} = ({vt})({rhs});")
                    continue
            out.append(ln)
            continue  # RHS tak-dikenal: biarkan (konservatif)
        if _NUMERIC_RE.match(rhs) and int(rhs.strip().rstrip("uUlL"),
                                          0) == 0:
            out.append(ln)
            continue  # `p = 0` / `p = NULL` legal C++ (null pointer
            # constant); cast redundan dilarang (bisa ubah codegen agbcc,
            # kasus temp_r0 = (*arg0) yg MATCH tanpa cast).
        out.append(f"{ind}{var} = ({vt})({rhs});")
    if out == body.splitlines():
        return body  # tak ada perubahan: kembalikan verbatim
    fixed = "\n".join(out)
    if body.endswith("\n") and not fixed.endswith("\n"):
        fixed += "\n"
    return fixed


def _ptr_to_int_cast_fix(body):
    """Cast `(T)` pada argumen pointer ke parameter skalar (no-op codegen).

    Draf MATCH sering mendeklarasikan parameter sbg s32/i32 padahal ROM
    melewatkan alamat (judge peduli ukuran, bukan nama tipe). C++ menolak
    pointer->int implisit. Cast eksplisit adalah mov yg sama di -O2
    (reinterpretasi), jadi byte-identik terjaga.

    Hanya bila: decl diketahui (body/src), tipe argumen JELAS pointer
    (var-ptr lokal / &var / u8* expr dgn operator), tipe param JELAS
    skalar (s32/i32/u32/int... level 0). Selain itu -> biarkan (SKIP
    ditangani _callsite_ptr_mismatch untuk kasus multi-pointer)."""
    vartypes = _local_var_types(body)
    decls = {}
    for m in EXTERN_RE.finditer(body):
        if "(*" in m.group(0):
            continue
        params = [_param_type(p) for p in _split_top_commas(m.group(4))]
        decls.setdefault(m.group(3), []).append(params)

    def _expr_ptr_level(a):
        """Level pointer argumen-ekspresi, atau None bila tak-diketahui.

        Lebih berani dari _arg_type: operan var-pointer lokal (+ operator
        aritmetika) dianggap pointer; &var menaikkan satu level. Call
        bersarang / string / numerik murni -> None (biarkan)."""
        s = a.strip()
        if not s or _NUMERIC_RE.match(s) or s in ("NULL", "nullptr"):
            return None
        if s.startswith('"'):
            return None
        if re.match(r"^\(([^()]*)\)$", s):
            inner = _ptr_parts(_param_type(s[1:-1]))
            if inner:
                return inner[1]
        depth, toks, cur = 0, [], ""
        for ch in s:
            if ch == "(":
                depth += 1
                cur += ch
            elif ch == ")":
                depth -= 1
                cur += ch
            elif depth == 0 and (ch.isalnum() or ch in "_&*"):
                cur += ch
            else:
                if depth == 0 and cur.strip():
                    toks.append(cur.strip())
                cur = ""
        if cur.strip() and depth == 0:
            toks.append(cur.strip())
        if any("(" in t for t in toks):
            return None  # ada call bersarang/ekspresi: tak-dinilai
        best = None
        for t in toks:
            m = re.match(r"^&([A-Za-z_]\w*)$", t)
            if m and m.group(1) in vartypes:
                vt = vartypes[m.group(1)]
                if "[" in vt:
                    best = 1 if best is None else max(best, 1)
                    continue  # &array: alamat elemen pertama
                p = _ptr_parts(vt)
                if p:
                    lv = p[1] + 1
                    best = lv if best is None else max(best, lv)
                continue
            m = re.match(r"^(\*+)?([A-Za-z_]\w*)$", t)
            if m and m.group(2) in vartypes:
                vt = vartypes[m.group(2)]
                if "[" in vt and not m.group(1):
                    best = 1 if best is None else max(best, 1)
                    continue  # array decay -> pointer elemen
                p = _ptr_parts(vt)
                if p:
                    lv = p[1] - len(m.group(1) or "")
                    if lv > 0:
                        best = lv if best is None else max(best, lv)
        return best

    clean = _strip_code_noise(body)
    edits = []
    for fname, args, pos in _find_calls(clean):
        if fname not in decls:
            continue
        parts = _split_top_commas(args)
        for plist in decls[fname]:
            if len(plist) != len(parts):
                continue
            new_parts, changed = [], False
            for a, p in zip(parts, plist):
                at, pp = _arg_type(a.strip(), vartypes), None
                if p and p not in ("...", "void"):
                    pp = _ptr_parts(p)
                ap = _ptr_parts(at) if at else None
                if ap is None and pp is not None and pp[1] == 0:
                    # _arg_type konservatif (ekspresi operator -> None);
                    # tebak level dari operan var-pointer lokal.
                    lv = _expr_ptr_level(a.strip())
                    if lv:
                        ap = ("?", lv)
                if ap is None and pp is not None and pp[1] >= 1:
                    # Array lokal (&arr / arr-decay): alamat elemen pertama
                    # == alamat array, cast (Tparam) no-op. Base boleh beda
                    # (u8 vs i32): hanya reinterpretasi alamat (mov sama).
                    toks = re.findall(r"&?([A-Za-z_]\w*)", a.strip())
                    if any("[" in (vartypes.get(t) or "") for t in toks):
                        ap = ("?", 1)
                if (ap and pp and ap[1] > 0
                        and (pp[1] == 0 or ap[0] == "?")
                        and re.search(r"[A-Za-z_]", a)):
                    new_parts.append(f"({p})({a.strip()})")
                    changed = True
                else:
                    new_parts.append(a.strip())
            if changed:
                edits.append((pos, fname, args, new_parts))
            break  # overload pertama yg cocok: nilai itu
    for pos, fname, args, new_parts in reversed(edits):
        end = pos + len(fname) + 1 + len(args) + 1
        body = (body[:pos] + fname + "(" + ", ".join(new_parts)
                + body[end - 1:])
    return body


def _void_ptr_arith_fix(body):
    """`void *v` -> `u8 *v` bila v dipakai arithmetic (`v + N`, `v[N]`).

    C++ melarang arithmetic pada void* (GNU C mengizinkan sbg byte-wise).
    u8* memberikan semantic byte-wise yg sama; semua assignment yg sahih
    utk void* tetap sahih utk u8* (konversi implisit), dan address
    computation bersifat compile-time -> codegen identik (byte-identik).
    Hanya var lokal yg dideklarasikan `void *` di body ini."""
    declared = set(re.findall(r"^\s*void\s*\*\s*([A-Za-z_]\w*)\s*;",
                              body, re.M))
    if not declared:
        return body
    used_arith = set()
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*(?:\+|-)\s*(?:0[xX][0-9a-fA-F]+|\d+)",
                         body):
        if m.group(1) in declared:
            used_arith.add(m.group(1))
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\[", body):
        if m.group(1) in declared:
            used_arith.add(m.group(1))
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*(\+=|-=)", body):
        if m.group(1) in declared:
            used_arith.add(m.group(1))
    for v in used_arith:
        body = re.sub(rf"^(\s*)void\s*\*\s*({re.escape(v)})\s*;",
                      rf"\1u8 *\2;", body, flags=re.M)
    return body


def _callsite_ptr_mismatch(body, src_nostruct):
    """Cek pre-compile call-site vs deklarasi extern (aturan konversi C++).

    Cek decl-vs-decl hanya bandingkan tanda tangan; mismatch call-site vs
    deklarasi DALAM satu body (multi-level pointer) lolos dan baru meledak
    saat kompilasi (kasus func_08004B94: `&sp0` bertipe `Obj ***` ke
    parameter `void ***`). Return string SKIP informatif, atau None bila
    tak ada mismatch (unknown/ambigu -> lolos, bukan SKIP)."""
    decls = {}
    for text in (body, src_nostruct):
        for m in EXTERN_RE.finditer(text):
            if "(*" in m.group(0):
                continue
            params = [_param_type(p) for p in _split_top_commas(m.group(4))]
            decls.setdefault(m.group(3), []).append(params)
    if not any("**" in (t or "") for pl in decls.values()
               for ps in pl for t in ps):
        return None  # cepat: tanpa parameter multi-pointer tak ada yg dicek
    vartypes = _local_var_types(body)
    clean = _strip_code_noise(body)
    for fname, args, pos in _find_calls(clean):
        if fname in _CALLSITE_KW or fname not in decls:
            continue
        line_start = clean.rfind("\n", 0, pos) + 1
        if re.fullmatch(r"\s*[\w:]+\s*\**\s*", clean[line_start:pos]):
            continue  # deklarasi/definisi, bukan call-site
        arglist = _split_top_commas(args)
        if len(arglist) == 1 and not arglist[0].strip():
            arglist = []
        compared, first_bad = False, None
        for sig in decls[fname]:
            if "..." in sig:
                named = [t for t in sig if t != "..."]
                if len(arglist) < len(named):
                    continue
                pairs = zip(arglist[: len(named)], named)
            elif len(arglist) != len(sig):
                continue  # () C = arg tak-spesifik: tak dinilai
            else:
                pairs = zip(arglist, sig)
            compared = True
            bad = [(a.strip(), _arg_type(a, vartypes), p)
                   for a, p in pairs
                   if not _ptr_arg_ok(_arg_type(a, vartypes), p)]
            if not bad:
                first_bad = None
                break
            if first_bad is None:
                first_bad = bad[0]
        else:
            if compared and first_bad:
                # Semua overload cocok-jumlah gagal: laporkan yg pertama.
                a, at, p = first_bad
                return (f"call-site {fname}: argumen `{a}` (`{at}`) tak "
                        f"konversi implisit ke parameter `{p}` "
                        f"(multi-pointer butuh cast/penyatuan manual)")
    return None


MANAGED_BEGIN = "// === MIGRATED TYPES (auto-managed by migrate.py) ===\n"
MANAGED_END = "// === END MIGRATED TYPES ===\n"


def _migrated_spans(src_text):
    """Rentang tiap blok DECOMP-MATCHED (tanpa tail asm) -> [(start, end)].
    Zona lain (include, hoist lama, tail asm, kode tulisan tangan) tak tersentuh."""
    marks = [m.start() for m in MIGRATED_FN_RE.finditer(src_text)]
    spans = []
    for i, s in enumerate(marks):
        if i + 1 < len(marks):
            e = marks[i + 1]
        else:
            tm = re.search(r"(?m)^(?:asm\(|// ekor tak-bermarker)",
                           src_text[s:])
            e = s + tm.start() if tm else len(src_text)
        spans.append((s, e))
    return spans


def _strip_in_spans(text, spans):
    """Hapus definisi struct murni HANYA dalam span -> (teks, [blok])."""
    out, pos, stripped = [], 0, []
    for s, e in spans:
        out.append(text[pos:s])
        seg, blks = take_structs(text[s:e])
        stripped.extend(blks)
        out.append(seg)
        pos = e
    out.append(text[pos:])
    return "".join(out), stripped


def split_marker_body(block):
    """(marker_line, body): baris pertama marker, sisanya body."""
    first, _, rest = block.partition("\n")
    return first + "\n", rest


def apply_section_attr(body, secname, func):
    """Sisipkan __attribute__((section(...))) tepat sebelum definisi fungsi.

    Letak: baris pertama yg menyebut `func` sbg definisi (nama persis,
    boleh ter-indentasi / header multi-baris). Tak false-positive pada
    `if(`/macro pemanggil. Fallback: prepend di awal body bila tak ketemu."""
    pat = re.compile(rf"^\s*[\w].*\b{re.escape(func)}\s*\(")
    lines = body.splitlines(keepends=True)
    for i, ln in enumerate(lines):
        if pat.match(ln):
            lines.insert(i, f'__attribute__((section("{secname}")))\n')
            return "".join(lines)
    return f'__attribute__((section("{secname}")))\n' + body


def wrap_block(marker_line, body, secname=None, func=None):
    """Bungkus blok C: extern "C" + atribut section opsional."""
    if secname is not None:
        body = apply_section_attr(body, secname, func)
    return marker_line + 'extern "C" {\n' + body.rstrip() + "\n}\n"


def insert_ordered(src_text, marker_line, body, addr, state_addrs,
                   secname=None, func=None):
    """Sisipkan blok (dibungkus extern C) dgn urutan alamat menaik."""
    wrapped = wrap_block(marker_line, body, secname, func)
    matches = list(MIGRATED_FN_RE.finditer(src_text))
    pos = len(src_text)
    for m in matches:
        other = state_addrs.get(m.group(1))
        if other is not None and other > addr:
            pos = m.start()
            # mundur ke awal baris + sertakan blank-line pemisah sebelumnya
            while pos > 0 and src_text[pos - 1] != "\n":
                pos -= 1
            break
    if not src_text.endswith("\n") and src_text:
        src_text += "\n"
    if src_text and not src_text.endswith("\n\n"):
        # pastikan pemisah blank line sebelum blok baru di posisi akhir
        if pos == len(src_text):
            src_text += "\n"
    new_text = src_text[:pos] + wrapped + "\n" + src_text[pos:]
    return new_text


# --- Legacy tail-only: hanya jalur legacy sejak section-replace. ---
# asm/*.s TIDAK disentuh migrate (splitter build otomatis meng-omit section
# asm yang namanya sudah ada di src). Fungsi di bawah dipertahankan agar
# riwayat git utuh; jangan dipakai di alur baru.
_ASM_START_RE_LEGACY = re.compile(
    r"^\s*((thumb|arm)_func_start|non_word_aligned_thumb_func_start)\s+(\w+)",
    re.IGNORECASE,
)
# Konten setelah fungsi TERAKHIR yang harus dipertahankan (data tanpa
# marker, tabel, dsb): berhenti sebelum baris-baris ini, jangan ditelan.
_LAST_KEEP_RE_LEGACY = re.compile(
    r"^\s*(\.byte\b|\.ascii\b|\.asciz\b|\.incbin\b|\.space\b|\.comm\b|"
    r"\.global\b|\.type\b|\.size\b|\.section\b|\.(text|data|rodata)\b)"
)


def _shared_local_labels_LEGACY(asm_text, func):
    """(Hanya jalur legacy — warisan tail-only.) Label `.Lxxx` yang didefinisikan
    di blok func TAPI dipakai di luar blok itu."""
    lines = asm_text.splitlines()
    start = end = None
    for i, ln in enumerate(lines):
        m = _ASM_START_RE_LEGACY.match(ln)
        if m and m.group(3) == func:
            start = i
            break
    if start is None:
        return set()
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if _ASM_START_RE_LEGACY.match(lines[i]):
            end = i
            break
    defined = set(re.findall(r"(?m)^\s*(\.L[\w.]+):", "\n".join(lines[start:end])))
    outside = "\n".join(lines[:start] + lines[end:])
    used_outside = set(re.findall(r"\.L[\w.]+", outside))
    return defined & used_outside


def remove_asm_func_LEGACY(asm_text, func, keep_aliases=None):
    """(Hanya jalur legacy — warisan tail-only.) Hapus blok fungsi dari asm.

    Section-replace tak mencabut apa pun dari asm; hanya dibiarkan di sini
    sebagai dokumentasi perilaku lama."""
    lines = asm_text.splitlines(keepends=True)
    start = end = None
    for i, ln in enumerate(lines):
        m = _ASM_START_RE_LEGACY.match(ln)
        if m and m.group(3) == func:
            start = i
            break
    if start is None:
        return None, None
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if _ASM_START_RE_LEGACY.match(lines[i]):
            end = i
            break
    tail = ""
    tail_start = None
    if end == len(lines):
        # Fungsi terakhir: cari akhir konten fungsi sendiri (sebelum baris
        # KEEP pertama). Semua dari sana sampai EOF ikut dicabut; tail-nya
        # dibawa ke src. Tanpa KEEP: tail kosong (perilaku lama).
        i = start + 1
        while i < len(lines):
            if (_ASM_START_RE_LEGACY.match(lines[i])
                    or _LAST_KEEP_RE_LEGACY.match(lines[i])):
                break
            i += 1
        if i < len(lines):
            # Bawa serta direktif `.align` (+ label lokal) tepat sebelum
            # konten KEEP: tanpa ini pad ala rakitan asli hilang dan ekor
            # bergeser (kasus interrupt.s: 2B). Aman karena hanya direktif
            # align/label, bukan instruksi.
            j = i
            while j - 1 > start:
                s = lines[j - 1].split("@")[0].strip()
                if re.match(r"^\.align\b", s) or re.match(r"^[\w.]+:$", s):
                    j -= 1
                elif s == "":
                    j -= 1
                else:
                    break
            tail_start = j
            tail = "".join(lines[j:])
            end = len(lines)
    # sertakan blank-line pemisah sesudah blok bila ada
    while end < len(lines) and lines[end].strip() == "":
        end += 1
    keep = set((keep_aliases or {}))
    if keep:
        ka = keep_aliases or {}
        # Strip definisi keep dari tail (src mengandalkan salinan blok
        # draf); data lain tail tetap terbawa verbatim.
        if tail:
            kept_tl = []
            for ln in tail.splitlines(keepends=True):
                m = re.match(r"^(\s*)(\.L[\w.]+):(\s*(?:@.*)?)$",
                             ln.rstrip("\n"))
                if m and m.group(2) in keep:
                    continue
                kept_tl.append(ln)
            tail = "".join(kept_tl)
        alias = ["@ label bersama: definisi pindah ke src, "
                 "alamat absolut dipertahankan utk pemakai lain\n"]
        for lab in sorted(keep):
            alias.append(f"{lab} = 0x{ka[lab]:08X}\n")
        new_text = "".join(lines[:start] + alias + lines[end:])
    else:
        new_text = "".join(lines[:start] + lines[end:])
    if not new_text.endswith("\n"):
        new_text += "\n"
    return new_text, tail


def ensure_lds(lds_text, stem, src_stem=None, allow_src_before=False):
    """Pastikan entri lds utk modul ada (no-op bila sudah ada).

    Modul MAP-split (blok SORT_BY_NAME + entri src) SUDAH benar dari awal
    migrasi section-replace; fungsi ini hanya verifikasi dan mengembalikan
    (teks, False). Modul non-split (tail-only: pilot/scene/interrupt, multi
    mis. linkonce) memakai jalur lama yang sama seperti sebelumnya.

    `src_stem` dipakai bila modul punya src tulisan-tangan yang tak boleh
    digeser (mis. hardware -> `src/hardware_migrated.cc`)."""
    src_stem = src_stem or stem
    src_entry = f"src/{src_stem}.o(.text);"
    lines = lds_text.splitlines()
    stripped = [ln.strip() for ln in lines]
    # Modul MAP-split: blok SORT_BY_NAME(.text.<stem>.*) + entri src sudah
    # ada -> no-op (section src otomatis menempati posisi section asm yg
    # dicabut; lds tak berubah per fungsi).
    if (any(f"*(SORT_BY_NAME(.text.{stem}.*))" in s.replace(" ", "")
            for s in stripped)
            and src_entry in stripped):
        return lds_text, False
    asm_entry = f"asm/{stem}.o(.text);"
    lines = lds_text.splitlines(keepends=True)
    ai = next((i for i, ln in enumerate(lines) if ln.strip() == asm_entry),
              None)
    if ai is None:
        # asm multi-section: sisipkan sesudah entri asm modul terakhir.
        idx = [i for i, ln in enumerate(lines)
               if ln.strip().startswith(f"asm/{stem}.o(")]
        if not idx:
            raise RuntimeError(f"lds: entri asm/{stem}.o(...) tidak ditemukan")
        ai = idx[-1]
    j = ai + 1
    while j < len(lines) and not lines[j].strip():
        j += 1
    if j < len(lines) and lines[j].strip() == src_entry:
        return lds_text, False
    if any(ln.strip() == src_entry for ln in lines):
        if allow_src_before:
            # src sudah tepat sebelum asm (semua asm pindah) -> tak berubah.
            k = ai - 1
            while k >= 0 and not lines[k].strip():
                k -= 1
            if k >= 0 and lines[k].strip() == src_entry:
                return lds_text, False
        raise RuntimeError(f"lds: {src_entry} tidak tepat sesudah "
                           f"asm/{stem}.o(...) (layout tulisan-tangan)")
    indent = lines[ai][: len(lines[ai]) - len(lines[ai].lstrip())]
    lines.insert(ai + 1, f"{indent}{src_entry}\n")
    return "".join(lines), True


def _lds_layout(lds_text, stem):
    """Posisi entri src modul terhadap asm: 'after' | 'before' | 'multi' | 'none'."""
    lines = lds_text.splitlines()
    exact = f"asm/{stem}.o(.text);"
    src = f"src/{stem}.o(.text);"
    ai = next((i for i, ln in enumerate(lines) if ln.strip() == exact), None)
    if ai is None:
        return "multi" if any(ln.strip().startswith(f"asm/{stem}.o(")
                              for ln in lines) else "none"
    si = next((i for i, ln in enumerate(lines) if ln.strip() == src), None)
    if si is None:
        return "after"
    lo, hi = (ai, si) if ai < si else (si, ai)
    gap_empty = all(not lines[k].strip() for k in range(lo + 1, hi))
    if si > ai and gap_empty:
        return "after"
    if si < ai and gap_empty:
        return "before"
    return "other"


def run_compare():
    p = subprocess.run(
        ["make", "compare"],
        cwd=REPO,
        capture_output=True,
        text=True,
        timeout=600,
    )
    tail = (p.stdout + p.stderr).strip().splitlines()[-5:]
    return p.returncode == 0, "\n".join(tail)


def migrate_one(module, func, dry_run=False):
    stem = module[: -len(".s")]
    state = load_state(stem)
    info = state.get(func)
    if info is None or info.get("status") != "promoted":
        return {
            "func": func,
            "module": module,
            "ok": False,
            "skipped": True,
            "detail": f"status={info.get('status') if info else 'unknown'} "
            "(bukan promoted, dilewati)",
        }
    addr = info["addr"]
    promoted_path = REPO / "decomp" / "promoted" / f"{stem}.cc"
    src_path = REPO / "src" / f"{stem}.cc"
    lds_path = REPO / "fomt.lds"

    block = extract_block(promoted_path, func)
    if block is None:
        return {"func": func, "module": module, "ok": False,
                "detail": "blok DECOMP-MATCHED tidak ditemukan di "
                f"{promoted_path}"}
    marker_line, body = split_marker_body(block)
    body = translate_types(body)
    body, need_memcpy = adapt_memcpy(body)
    body, need_memcmp = adapt_memcmp(body)
    body, need_libc = adapt_libc_string(body)
    need_string_h = need_memcpy or need_memcmp or need_libc

    split = is_split_module(stem)
    if split and func not in migratable_set(stem):
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"{func} grup gabungan/tak-split "
                "(lihat split_asm_sections.py --migratable), dilewati"}
    secname = asm_section_of(stem, func) if split else None
    # Data se-grup (aturan data-join splitter): tiap data-chunk perlu
    # di-emit ke src dgn nama section yg sama agar splitter meng-omit-nya
    # dari asm (kalau tidak, asm + src sama-sama menaruh section itu ->
    # multiple definition, kasus game_state func_08010F1C).
    data_plan = []  # [(dsec, addr8, addr_int, bytevals)]
    if split:
        for dsec, addr8, addr_int, dlines in group_data_chunks(stem, func):
            bytevals = parse_data_bytes(dlines)
            if bytevals is None:
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"{func} data {dsec} simbolik/asing "
                        "(butuh penanganan manual), dilewati"}
            if not bytevals:
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"{func} data {dsec} kosong "
                        "(butuh penanganan manual), dilewati"}
            if addr8 is None or addr_int is None:
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"{func} data {dsec} tanpa alamat "
                        "(.zz — tak ada alamat; tak bisa namai section "
                        "dgn aman, dilewati)"}
            data_plan.append((dsec, addr8, addr_int, bytevals))
        for i in range(len(data_plan)):
            for j in range(i + 1, len(data_plan)):
                if data_plan[i][0] == data_plan[j][0]:
                    return {"func": func, "module": module, "ok": False,
                            "skipped": True,
                            "detail": f"{func} dua data-chunk section sama "
                            f"({data_plan[i][0]}), butuh penanganan manual, "
                            "dilewati"}

    lds_text = lds_path.read_text()
    # Layout src-vs-asm: bila src tulisan-tangan berada SEBELUM asm
    # (hardware/actor, alur tail-only lama), migrasi ke objek terpisah
    # sesudah asm (mis. hardware -> src/hardware_migrated.cc), kecuali asm
    # tinggal satu fungsi. Modul split SELALU ke src/<stem>.cc sendiri.
    layout = _lds_layout(lds_text, stem)
    src_stem, allow_src_before = stem, False
    asm_text = new_asm = asm_tail = None
    remaining = []
    if not split:
        # Alur tail-only lama: baca asm untuk cek ekor + cabut blok.
        asm_path = REPO / "asm" / module
        asm_text = asm_path.read_text()
        remaining = [m.group(3) for ln in asm_text.splitlines()
                     for m in [_ASM_START_RE_LEGACY.match(ln)] if m]
        if layout == "before":
            if len(remaining) == 1:
                allow_src_before = True
            else:
                src_stem = f"{stem}_migrated"
        # Hanya fungsi TERAKHIR di asm yang boleh pindah: mencabut fungsi
        # yang masih punya penerus menggeser semua penerusnya.
        if func in remaining and remaining.index(func) != len(remaining) - 1:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"bukan fungsi terakhir di {module} "
                    f"({len(remaining) - remaining.index(func) - 1} penerus "
                    "belum pindah, dilewati)"}
        # Alamat tak-sejajar-4: mencabut blok terakhir membuat file berakhir
        # 2-mod-4 -> pad akhir-section menggeser layout (kasus sub_08031E0A).
        if state.get(func, {}).get("addr", 0) % 4 != 0:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"{func} di alamat tak-sejajar-4 "
                    f"({state[func]['addr']:#x}): pad akhir-section menggeser "
                    "layout saat blok terakhir dicabut, dilewati"}
        shared = _shared_local_labels_LEGACY(asm_text, func)
        aliases = {}
        for lab in sorted(shared):
            ma = re.match(r"\.L([0-9A-Fa-f]{8})$", lab)
            if not ma:
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"label {lab} dipakai fungsi lain tapi "
                        "namanya bukan alamat (butuh penanganan manual), "
                        "dilewati"}
            aliases[lab] = int(ma.group(1), 16)
        new_asm, asm_tail = remove_asm_func_LEGACY(
            asm_text, func, keep_aliases=aliases)
        if new_asm is None:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"{func} tidak ditemukan di {asm_path} "
                    "(mungkin sudah pindah sebelumnya, dilewati)"}
        asm_tail = asm_tail or ""
    src_path = REPO / "src" / f"{src_stem}.cc"
    try:
        new_lds, lds_changed = ensure_lds(
            lds_text, stem, src_stem=src_path.stem,
            allow_src_before=allow_src_before)
    except RuntimeError as e:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"layout lds {module} tak didukung migrasi "
                f"otomatis ({e}), dilewati"}

    if src_path.exists():
        src_text = src_path.read_text()
        # Hanya marker yang sah sebagai tanda "sudah pindah". Substring
        # polos (dulu: `func in src_text`) false-positive pada pemanggilan /
        # deklarasi extern fungsi lain (kasus 004F4 dipanggil 0050C).
        if re.search(rf"// DECOMP-MATCHED {re.escape(func)}\b", src_text):
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"{func} sudah ada di {src_path} (dilewati)"}
        if need_string_h and "#include <string.h>" not in src_text:
            inc = src_text.splitlines(keepends=True)
            for i, ln in enumerate(inc):
                if ln.startswith("#include"):
                    inc.insert(i + 1, "#include <string.h> // memcpy\n")
                    break
            else:
                inc.insert(0, "#include <string.h> // memcpy\n")
            src_text = "".join(inc)
        state_addrs = {n: i.get("addr", 0) for n, i in state.items()}
        # Struct: satukan SATU salinan di section terkelola sebelum marker
        # pertama. Salinan di blok-blok lama (zona migrate) di-strip agar tak
        # ganda; zona tulisan tangan/hoist lama tak tersentuh (cocok identik
        # -> pakai yang ada; beda nama sama -> SKIP manual).
        body, new_structs = take_structs(body)
        src_nostruct, old_structs = _strip_in_spans(
            src_text, _migrated_spans(src_text))
        body, new_structs = _deconflict_new_structs(
            body, new_structs, old_structs, src_nostruct, func)
        # Urutan penting: arith-fix DULU (void* yang dipakai arithmetic
        # menjadi u8*), baru scalar-cast (LHS sudah final) lalu ptr->int
        # di call-site. Bila scalar-cast dulu, RHS skalar dibungkus
        # (void*) lalu arith-fix mengubah LHS jadi u8* -> `u8* = (void*)`
        # yang justru error kompilasi (kasus func_0803BE50).
        body = _void_ptr_arith_fix(body)
        body = _ptr_scalar_cast_fix(body, new_structs)
        body = _ptr_to_int_cast_fix(body)
        # _unify_extern_ptrs DINONAKTIFKAN (2026-10-31): rewrite param
        # i32*/s32* -> void* TERBUKTI mengubah regalloc agbcc (kasus
        # func_0803C7A0: draf MATCH dgn (s32 *), hasil unify (void *) jadi
        # byte-DIFF r4<->r5). Konflik pointer ditangani SKIP konservatif
        # via cek decl-vs-decl di bawah (extern beda tanda tangan).
        # body, src_nostruct = _unify_extern_ptrs(body, src_nostruct)
        merged, struct_conflict = [], None
        for blk in old_structs + new_structs:
            nm = struct_name(blk)
            if blk in merged or blk in src_nostruct:
                continue  # salinan identik sudah ada di luar span
            if FWD_TYPEDEF_RE.match(blk.strip()):
                merged.append(blk)  # forward-decl kompatibel dgn definisi apa pun
                continue
            if (any(not FWD_TYPEDEF_RE.match(o.strip())
                    and struct_name(o) == nm and o != blk for o in merged)
                    or _src_struct_differs(src_nostruct, nm, blk)):
                struct_conflict = nm  # butuh penyatuan manual
                break
            merged.append(blk)
        if struct_conflict:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"struct {struct_conflict} beda isi antar blok "
                    "(butuh penyatuan manual), dilewati"}
        # Deklarasi extern yang sama dengan tanda tangan beda juga tabrakan
        # di scope file (braces extern "C" tidak membuat scope).
        decl_old, decl_new = extern_decls(src_nostruct), extern_decls(body)
        for nm, sigs in decl_new.items():
            if nm in decl_old and not sigs.issubset(decl_old[nm]):
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"extern {nm} beda tanda tangan "
                        f"({sorted(decl_old[nm])} vs {sorted(sigs)}), "
                        "butuh penyatuan manual, dilewati"}
        ck = _callsite_ptr_mismatch(body, src_nostruct)
        if ck:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"{ck}, dilewati"}
        if merged:
            merged = _topo_order(merged)
            sec = MANAGED_BEGIN + "\n".join(merged) + "\n" + MANAGED_END
            anchor = src_nostruct.find("// DECOMP-MATCHED")
            if anchor != -1:
                src_text = (src_nostruct[:anchor] + sec + "\n" +
                            src_nostruct[anchor:])
            else:
                # src tulisan-tangan tanpa marker: taruh sesudah blok include
                # (tipe butuh i32/u8 dari prelude), bukan di akhir file.
                hm = re.match(r"(?:#[^\n]*\n)+", src_nostruct)
                pos = hm.end() if hm else 0
                src_text = (src_nostruct[:pos] + sec + "\n" +
                            src_nostruct[pos:])
        else:
            src_text = src_nostruct
        # Blok fungsi sudah siap (body + managed types + cek konflik di
        # atas). Emit unit data SEBELUM fungsi agar urutan alamat menaik
        # terjaga (addr data < addr fungsi; insert_ordered menaruh tiap
        # unit sebelum marker fungsi dgn addr lebih besar).
        if data_plan:
            data_ids = {f"gData_{stem}_{a8}" for _, a8, _, _ in data_plan}
            if any(re.search(rf"// DECOMP-MATCHED {re.escape(d)}\b",
                             src_text) for d in data_ids):
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"{func} data {sorted(data_ids)} sudah ada "
                        f"di {src_path} (dilewati)"}
            for dsec, addr8, addr_int, bytevals in data_plan:
                dmark, dbody = split_marker_body(
                    data_block_text(stem, dsec, addr8, bytevals))
                if f"gData_{stem}_{addr8}" not in dbody:
                    return {"func": func, "module": module, "ok": False,
                            "skipped": True,
                            "detail": f"{func} data {dsec} format blok tak "
                            "terduga (butuh penanganan manual), dilewati"}
                dupe = [m for m in MIGRATED_FN_RE.finditer(src_text)
                        if m.group(1) in data_ids]
                if dupe:
                    return {"func": func, "module": module, "ok": False,
                            "skipped": True,
                            "detail": f"{func} data {sorted(data_ids)} "
                            f"sudah ada di {src_path} (dilewati)"}
                src_text = insert_ordered(src_text, dmark, dbody, addr_int,
                                          state_addrs)
            new_src = insert_ordered(src_text, marker_line, body, addr,
                                     state_addrs, secname=secname, func=func)
        else:
            new_src = insert_ordered(src_text, marker_line, body, addr,
                                     state_addrs, secname=secname, func=func)
    else:
        # Belum ada src/<stem>.cc: emit unit data dulu (urut alamat menaik)
        # lalu fungsi, masing-masing dgn wrapper extern "C" sendiri.
        head = '#include "prelude.h"\n'
        if need_string_h:
            head += "#include <string.h> // memcpy\n"
        new_src = head + "\n"
        for dsec, addr8, addr_int, bytevals in data_plan:
            new_src += data_block_text(stem, dsec, addr8, bytevals) + "\n"
        new_src += wrap_block(marker_line, body, secname, func) + "\n"

    if not split and asm_tail and asm_tail.strip():
        # Legacy tail-only: ekor tak-bermarker dibawa verbatim tepat
        # sesudah fungsi ini (basic asm scope file; tidak codegen).
        wrapped = marker_line + 'extern "C" {\n' + body.rstrip() + "\n}\n"
        asm_lines = [ln.rstrip().replace("\\", "\\\\").replace('"', '\\"')
                     for ln in asm_tail.splitlines() if ln.strip()]
        tail_src = ("// ekor tak-bermarker dari " + module +
                    " (verbatim, jangan diubah)\nasm(\n" +
                    "".join(f'"{ln}\\n"\n' for ln in asm_lines) + ");\n")
        new_src = new_src.replace(wrapped, wrapped + tail_src, 1)

    if dry_run:
        detail = (f"rencana: +{src_path.name} ~{len(new_src)}B, "
                  f"lds_changed={lds_changed}")
        if split:
            detail += f", section={secname}"
        return {"func": func, "module": module, "ok": True, "dry": True,
                "detail": detail}

    # snapshot utk revert (asm hanya di jalur legacy; split tak menyentuhnya)
    snap = {
        lds_path: lds_text,
        src_path: src_path.read_text() if src_path.exists() else None,
    }
    if not split:
        snap[asm_path] = asm_text
    try:
        src_path.write_text(new_src)
        if not split:
            asm_path.write_text(new_asm)
        if lds_text != new_lds:
            lds_path.write_text(new_lds)
    except OSError as e:
        for p, content in snap.items():
            if content is not None:
                p.write_text(content)
        return {"func": func, "module": module, "ok": False,
                "detail": f"gagal tulis: {e}"}

    green, compare_tail = run_compare()
    files = [str(src_path.relative_to(REPO))]
    if not split:
        files.append(str(asm_path.relative_to(REPO)))
    if lds_changed:
        files.append("fomt.lds")
    if green:
        return {"func": func, "module": module, "ok": True,
                "detail": compare_tail, "files": files}
    # MERAH: revert fungsi ini
    for p, content in snap.items():
        if content is None:
            if p.exists():
                p.unlink()
        else:
            p.write_text(content)
    return {"func": func, "module": module, "ok": False, "reverted": True,
            "detail": compare_tail, "files": files}


def autopush_migrate(moved):
    """Commit + push hasil migrasi (tiap fungsi sudah compare HIJAU).

    Satu commit per pemanggilan, hanya stage file milik migrasi ini
    (src saja utk split; src/asm/lds utk legacy) — bukan draf worker atau
    artefak lain. FOMT_AUTOPUSH=0 mematikan."""
    if not moved or os.environ.get("FOMT_AUTOPUSH", "1") == "0":
        return False
    lock = REPO / "decomp" / "state" / "git.lock"
    lock.parent.mkdir(parents=True, exist_ok=True)
    with lock.open("a+") as fh:
        fcntl.flock(fh, fcntl.LOCK_EX)
        try:
            def git(*args):
                return subprocess.run(["git", "-C", str(REPO), *args],
                                      capture_output=True, text=True)
            if git("rev-parse", "--is-inside-work-tree").returncode != 0:
                return False
            paths = sorted({f for r in moved for f in r.get("files", [])})
            existing = [p for p in paths if (REPO / p).exists()]
            if not existing:
                return False
            git("add", "--", *existing)
            if git("diff", "--cached", "--quiet").returncode == 0:
                return False
            names = ", ".join(r["func"] for r in moved)
            msg = (f"decomp: migrate {names} "
                   f"({len(moved)} funcs, compare hijau)")
            c = git("commit", "-q", "-m", msg)
            if c.returncode != 0:
                print(f"autopush migrasi: commit gagal: "
                      f"{c.stderr.strip()[-200:]}")
                return False
            p = git("push", "-q")
            if p.returncode != 0:
                print(f"autopush migrasi: commit lokal OK, push gagal: "
                      f"{p.stderr.strip()[-160:]}")
                return False
            print(f"autopush migrasi: {msg}")
            return True
        finally:
            fcntl.flock(fh, fcntl.LOCK_UN)


def main():
    ap = argparse.ArgumentParser(description="Migrasi aman 1 fungsi MATCH "
                                 "asm -> src per compare.")
    ap.add_argument("--module", action="append", default=None,
                    help="modul .s (default pilot: more_items.s, "
                    "sram_proxy_1.s)")
    ap.add_argument("--func", default=None, help="satu fungsi saja")
    ap.add_argument("--limit", type=int, default=None,
                    help="maks fungsi diproses")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--no-baseline", action="store_true",
                    help="lewati cek compare baseline")
    args = ap.parse_args()

    modules = args.module or PILOT_MODULES
    plan = []
    for mod in modules:
        for name, _ in promoted_funcs(mod):
            if args.func and name != args.func:
                continue
            plan.append((mod, name))
    if args.limit is not None:
        plan = plan[: args.limit]
    if not plan:
        print("tidak ada kandidat (cek status promoted / nama fungsi).")
        return 2

    if not args.dry_run and not args.no_baseline:
        green, tail = run_compare()
        print(f"[baseline] compare {'HIJAU' if green else 'MERAH'}: {tail}")
        if not green:
            print("baseline merah — abort, tidak migrasi.")
            return 2

    moved, failed, dry = [], None, []
    for mod, name in plan:
        _analyze_stem.cache_clear()  # asm dibaca ulang per iterasi (tulisan real)
        print(f"== migrasi {name} ({mod}) ...")
        r = migrate_one(mod, name, dry_run=args.dry_run)
        status = "OK" if r["ok"] else ("SKIP" if r.get("skipped") else "GAGAL")
        print(f"   [{status}] {r['detail']}")
        if r.get("dry"):
            dry.append(r)
            continue
        if r["ok"]:
            moved.append(r)
        elif r.get("skipped"):
            continue
        else:
            failed = r
            break  # merah: revert sudah dilakukan, berhenti

    print("---- laporan ----")
    if dry:
        print("rencana (dry-run): " +
              ", ".join(f"{r['func']}({r['module']})" for r in dry))
        return 0
    print(f"pindah: {len(moved)} " +
          (", ".join(f"{r['func']}({r['module']})" for r in moved)
           if moved else "-"))
    for r in moved:
        print(f"  HIJAU {r['func']}: {r['detail']}")
        print(f"    file: {', '.join(r['files'])}")
    if moved:
        autopush_migrate(moved)
    if failed:
        print(f"  MERAH {failed['func']} ({failed['module']}): "
              f"{failed['detail']} -> direvert, berhenti.")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
