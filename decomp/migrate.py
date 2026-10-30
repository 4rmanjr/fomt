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
from split_asm_sections import migratable as split_migratable  # noqa: F401
# ^ diimpor sbg referensi kanonis aturan migratable (dipakai --migratable);
#   migratable_set() di bawah menyalin aturan tsb di atas cache _analyze_stem
#   agar tak parse ganda bersama asm_section_of().


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


def asm_section_of(stem, func, addr):
    """Nama section asm utk fungsi, atau None bila grup gabungan/tak-split."""
    for chs in _analyze_stem(stem):
        funcs = [c for c in chs if c["kind"] == "func"]
        if len(funcs) == 1 and funcs[0]["name"] == func:
            return chs[0]["secname"]
    return None


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
    r"^\s*i32 memcpy\(\s*i32\s*\*?\s*,\s*i32\s*\*?\s*,\s*i32\s*\)\s*;"
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
    r"^\s*(i32|u32|u16|u8|s32|s16|s8|void)\s*(\*?)\s*(\w+)\s*\(([^;{}]*)\)\s*;"
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
    r"\b(?:u8|s8|u16|s16|u32|s32|i8|i16|i32|void|char|int)\s*\*+")


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


_FUNC_DEF_RE = re.compile(r"^\w.*\(.*\)\s*(\{|$)")


def apply_section_attr(body, secname):
    """Sisipkan __attribute__((section(...))) tepat sebelum definisi fungsi.

    Letak: baris pertama yg tampak spt definisi (mulai dgn kata, ada `(`,
    diakhiri `{` atau header multi-baris). extern/struct sisa di atasnya
    tak tersentuh. Fallback: prepend di awal body bila tak ketemu."""
    lines = body.splitlines(keepends=True)
    for i, ln in enumerate(lines):
        if _FUNC_DEF_RE.match(ln):
            lines.insert(i, f'__attribute__((section("{secname}")))\n')
            return "".join(lines)
    return f'__attribute__((section("{secname}")))\n' + body


def wrap_block(marker_line, body, secname=None):
    """Bungkus blok C: extern "C" + atribut section opsional."""
    if secname is not None:
        body = apply_section_attr(body, secname)
    return marker_line + 'extern "C" {\n' + body.rstrip() + "\n}\n"


def insert_ordered(src_text, marker_line, body, addr, state_addrs,
                   secname=None):
    """Sisipkan blok (dibungkus extern C) dgn urutan alamat menaik."""
    wrapped = wrap_block(marker_line, body, secname)
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


# --- Legacy tail-only: tak terpakai lagi sejak section-replace. ---
# asm/*.s TIDAK disentuh migrate (splitter build otomatis meng-omit section
# asm yang namanya sudah ada di src). Fungsi di bawah dipertahankan agar
# riwayat git utuh; jangan dipakai di alur baru.
_ASM_START_RE_UNUSED = re.compile(
    r"^\s*((thumb|arm)_func_start|non_word_aligned_thumb_func_start)\s+(\w+)",
    re.IGNORECASE,
)
# Konten setelah fungsi TERAKHIR yang harus dipertahankan (data tanpa
# marker, tabel, dsb): berhenti sebelum baris-baris ini, jangan ditelan.
_LAST_KEEP_RE_UNUSED = re.compile(
    r"^\s*(\.byte\b|\.ascii\b|\.asciz\b|\.incbin\b|\.space\b|\.comm\b|"
    r"\.global\b|\.type\b|\.size\b|\.section\b|\.(text|data|rodata)\b)"
)


def _shared_local_labels_UNUSED(asm_text, func):
    """(TAK TERPAKAI — warisan tail-only.) Label `.Lxxx` yang didefinisikan
    di blok func TAPI dipakai di luar blok itu."""
    lines = asm_text.splitlines()
    start = end = None
    for i, ln in enumerate(lines):
        m = _ASM_START_RE_UNUSED.match(ln)
        if m and m.group(3) == func:
            start = i
            break
    if start is None:
        return set()
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if _ASM_START_RE_UNUSED.match(lines[i]):
            end = i
            break
    defined = set(re.findall(r"(?m)^\s*(\.L[\w.]+):", "\n".join(lines[start:end])))
    outside = "\n".join(lines[:start] + lines[end:])
    used_outside = set(re.findall(r"\.L[\w.]+", outside))
    return defined & used_outside


def remove_asm_func_UNUSED(asm_text, func, keep_aliases=None):
    """(TAK TERPAKAI — warisan tail-only.) Hapus blok fungsi dari asm.

    Section-replace tak mencabut apa pun dari asm; hanya dibiarkan di sini
    sebagai dokumentasi perilaku lama."""
    lines = asm_text.splitlines(keepends=True)
    start = end = None
    for i, ln in enumerate(lines):
        m = _ASM_START_RE_UNUSED.match(ln)
        if m and m.group(3) == func:
            start = i
            break
    if start is None:
        return None, None
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if _ASM_START_RE_UNUSED.match(lines[i]):
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
            if (_ASM_START_RE_UNUSED.match(lines[i])
                    or _LAST_KEEP_RE_UNUSED.match(lines[i])):
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
    need_string_h = need_memcpy or need_memcmp

    split = is_split_module(stem)
    secname = asm_section_of(stem, func, addr) if split else None
    if split and func not in migratable_set(stem):
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"{func} grup gabungan/tak-split "
                "(lihat split_asm_sections.py --migratable), dilewati"}
    if split and secname is None:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"{func} grup gabungan/tak-split "
                "(lihat split_asm_sections.py --migratable), dilewati"}

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
                     for m in [_ASM_START_RE_UNUSED.match(ln)] if m]
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
        shared = _shared_local_labels_UNUSED(asm_text, func)
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
        new_asm, asm_tail = remove_asm_func_UNUSED(
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
        body, src_nostruct = _unify_extern_ptrs(body, src_nostruct)
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
        new_src = insert_ordered(src_text, marker_line, body, addr,
                                 state_addrs, secname=secname)
    else:
        head = '#include "prelude.h"\n'
        if need_string_h:
            head += "#include <string.h> // memcpy\n"
        new_src = head + "\n" + wrap_block(marker_line, body, secname)

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
