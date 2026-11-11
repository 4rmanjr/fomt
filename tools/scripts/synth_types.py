#!/usr/bin/env python3
"""synth_types.py - heuristic typedef synthesis from asm offsets.

Minimal v1: for a failed draft whose note mentions
"request for member ... not a structure or union", extract memory-access
offsets from the function's asm, build a padded struct typedef, and
optionally patch the draft's `extern void *gUnk_*` decls to point at it.

Usage:
  python3 tools/scripts/synth_types.py --func func_080073E0
  python3 tools/scripts/synth_types.py --module hardware.s --limit 5 --apply
  python3 tools/scripts/synth_types.py --module hardware.s --limit 5 --dry-run

Writes patched drafts in place (with .synth.bak backup) only with --apply.

LIMITATIONS (v1, measured 2026-11-10 on code_0803EE94: 0/5 hit rate):
  1. Pointer-arithmetic scaling: typing `extern void *gUnk_*` as struct*
     turns `gUnk + N` into scaled pointer arithmetic, changing byte offsets.
     Fix needs rewrite of arithmetic sites to `(u8 *)gUnk + N`.
  2. Pointer fields: width is inferred from gaps, not from usage; fields used
     as pointers (cast/dereference) stay integer-typed -> type mismatches.
  3. Struct-name conflicts: drafts that already define `GenObj`/`Obj` keep
     that typedef while synth adds `GenObj_<suffix>`, leaving mismatches
     at function signatures using the old type.
  4. Only `gUnk_*` globals are patched; function args typed as structs are
     untouched, so their field accesses still fail if widths differ.
v2 should address (1)-(4) before scaling beyond pilot.

MEASURED 2026-11-11 (v2, pointer fields + byte arithmetic + typedef rename):
0/10 MATCH — pilot 5 terkecil `code_0803EE94` (func_08045638, func_0804EF20,
func_0804EFAC, func_0804F060, func_0804F0E0) + 5 pertama `code_809E804`
(func_0809FE74, func_080A03B8, func_080A0B18, func_080A17A0, func_080A1890).
Artinya v2 belum menggeser angka v1 (0/5). Hasil judge setelah patch masih
DIFF, dan error yang tersisa menunjukkan sintesis struct ARGUMEN bukan
penghalang utamanya:

  a. lokal stack bertipe skalar lalu diakses ber-field: `s32 sp0;` +
     `sp0.unk1 = ...` -> "request for member ... not a structure".
     Butuh dekomposisi stack-local jadi struct/union, bukan typedef baru;
  b. temporer hasil pointer-aritmetika tetap `void *temp_rX`, jadi
     `temp_rX->unkY` gagal walau arg0 sudah bertipe struct benar;
  c. offset field yang tidak muncul sebagai akses memori di asm (mis. 0xC)
     tidak dipindai, sehingga `arg0->unkC` tetap "no member";
  d. sisa kasus (`saved_reg_r10` undeclared, invalid lvalue in unary '&',
     pointer/integer) bukan pekerjaan tool ini.

Saran urutan v3: (b) lalu (a) — keduanya menyumbang mayoritas error yang
tersisa pada pilot di atas — sebelum menyentuh (c)/(d).

MEASURED 2026-11-11 (v3, typed locals: temporer pointer + lokal stack):
0/10 MATCH, tetapi compile-error 8/10 -> 3/10 pada pilot yang sama. Tujuh
draf kini lolos kompilasi dan berhenti di tahap DIFF byte
(func_08045638, func_0804EF20, func_0804EFAC, func_0804F0E0, func_080A03B8,
func_080A17A0, func_080A1890); terdekat func_080A03B8 len 98 vs ref 100.

Yang dikerjakan v3:
  - `void *temp_rN;` yang dipakai `temp_rN->field` -> `GenObj_<suffix> *`,
    plus cast eksplisit di tiap assignment (RHS-nya integer/offset);
  - lokal stack bertipe skalar yang diakses `name.unkN` -> struct lokal
    `STK_<name>_<suffix>`; lebar field dari cast assignment, fallback u32;
    lokal yang juga punya assignment nilai utuh (`sp4 = 4;`) tetap skalar
    dan akses field-nya jadi lvalue ber-offset byte
    (`*(u16 *)((u8 *)&sp4 + 0x2)`);
  - `(expr) + ptr` pada pointer struct -> `(GenObj_x *)((u8 *)ptr + (expr))`
    (tanpa ini pointer arithmetic ter-scale sizeof(struct));
  - typedef forward dihapus: agbcc menolak typedef berulang
    (`redefinition of GenObj_<suffix>` di baris definisi).

Sisa compile-error pada pilot: `saved_reg_r10 undeclared` (variabel m2c yang
tidak pernah dideklarasikan) dan `invalid lvalue in unary '&'` — keduanya
bukan pekerjaan typing struct. Untuk mengejar MATCH, langkah berikutnya
adalah diff byte per fungsi (bukan memperluas heuristik typing).
"""
import argparse
import json
import re
import pathlib

ROOT = pathlib.Path(__file__).resolve().parents[2]
ASM = ROOT / "asm"
DRAFTS = ROOT / "decomp" / "drafts"
STATE = ROOT / "decomp" / "state" / "modules"

WIDTH = {"ldrb": "u8", "strb": "u8", "ldrh": "u16", "strh": "u16"}


def load_state():
    m = {}
    for p in STATE.glob("*.json"):
        d = json.load(open(p))
        for n, v in d.items():
            m[n] = v
    return m


def module_of(func, state):
    v = state.get(func, {})
    return v.get("module")


def asm_body(func, module):
    text = (ASM / module).read_text()
    # find from thumb_func_start func to next thumb_func_start or EOF
    m = re.search(r"thumb_func_start " + re.escape(func) + r"\n" + re.escape(func) + r": @ 0x[0-9A-Fa-f]+\n(.*?)(?=\n\tthumb_func_start |\Z)", text, re.S)
    if not m:
        return ""
    return m.group(1)


def extract_offsets(body):
    # returns dict offset -> width token
    acc = {}
    for line in body.splitlines():
        line = line.strip()
        # ldr/str with optional immediate
        m = re.search(r"\b(ldrb|ldrh|ldr|strb|strh|str)\s+\w+,\s*\[r\d+(?:,\s*#(0x[0-9a-fA-F]+|\d+))?\]", line)
        if not m:
            continue
        op = m.group(1)
        off_str = m.group(2)
        if off_str is None:
            off = 0
        else:
            off = int(off_str, 0)
        w = WIDTH.get(op, "u32")
        # keep narrowest width per offset
        if off in acc:
            # prefer smaller width
            rank = {"u8": 0, "u16": 1, "u32": 2}
            if rank[w] < rank[acc[off]]:
                acc[off] = w
        else:
            acc[off] = w
    return acc


def extract_fields_from_draft(text):
    """Extract byte offsets from m2c-style field names (`->unkXX` / `.unkXX`)."""
    offs = set()
    for m in re.finditer(r"(?:->|\.)(unk)([0-9A-Fa-f]+)", text):
        try:
            offs.add(int(m.group(2), 16))
        except ValueError:
            pass
    return offs


def detect_pointer_fields(draft_text, offsets):
    """Heuristic: field is pointer if dereferenced or cast to pointer in draft."""
    ptrs = set()
    for off in offsets:
        hx = format(off, "x")
        hx_up = format(off, "X")
        for hxv in (hx, hx_up):
            # dereference of field: unkXX->
            if re.search(r"unk" + hxv + r"\s*->", draft_text):
                ptrs.add(off)
            # cast to pointer containing unkXX
            if re.search(r"\(\s*(?:void|\w+)\s*\*\s*\)[^;]*unk" + hxv + r"\b", draft_text):
                ptrs.add(off)
            # assignment to pointer-typed local: = (..) unkXX ; (void*) already covered
    return ptrs


def infer_widths(offsets):
    """Infer field width from gap to next offset (power-of-2 capped at 4)."""
    so = sorted(offsets)
    res = {}
    for i, off in enumerate(so):
        if i + 1 < len(so):
            gap = so[i + 1] - off
        else:
            gap = 4
        if gap >= 4:
            w = "u32"
        elif gap == 2:
            w = "u16"
        else:
            w = "u8"
        # alignment: if off not divisible, downgrade
        if off % 2 != 0:
            w = "u8"
        elif off % 4 != 0 and w == "u32":
            w = "u16" if (off % 4 == 2) else "u8"
        res[off] = w
    return res


def build_struct(offsets, suffix, ptrs):
    # Tanpa typedef forward: agbcc menolak typedef berulang (`redefinition of
    # GenObj_<suffix>` @ baris definisi). Field pointer memakai `struct
    # GenObj_<suffix> *`, jadi tag struct saja sudah cukup.
    lines = ["typedef struct GenObj_" + suffix + " {"]
    cur = 0
    for off in sorted(offsets):
        if off in ptrs:
            w = "ptr"
        else:
            w = offsets[off]
        size = {"u8": 1, "u16": 2, "u32": 4, "ptr": 4}[w]
        if off > cur:
            pad = off - cur
            lines.append("    u8 _pad%d[%d];" % (cur, pad))
            cur = off
        if off < cur:
            continue
        if w == "ptr":
            lines.append("    struct GenObj_%s *unk%X; /*0x%X*/" % (suffix, off, off))
        else:
            lines.append("    %s unk%X; /*0x%X*/" % (w, off, off))
        cur = off + size
    lines.append("} GenObj_" + suffix + ";")
    return "\n".join(lines) + "\n"


def synth_one(func, state):
    mod = module_of(func, state)
    if not mod:
        return None
    body = asm_body(func, mod)
    if not body:
        return None
    offsets = extract_offsets(body)
    # merge with field names already present in the draft (m2c unkXX)
    draft_path = DRAFTS / (func + ".c")
    draft_text = draft_path.read_text() if draft_path.exists() else ""
    if draft_text:
        for off in extract_fields_from_draft(draft_text):
            if off not in offsets:
                offsets[off] = None
    # drop None -> infer
    if any(v is None for v in offsets.values()):
        missing = [k for k, v in offsets.items() if v is None]
        inferred = infer_widths(set(offsets.keys()))
        for k in missing:
            offsets[k] = inferred.get(k, "u32")
    if not offsets:
        return None
    suffix = func[-4:]  # last 4 hex-ish
    # sanitize suffix to identifier-safe
    suffix = re.sub(r"[^A-Za-z0-9_]", "_", suffix)
    ptrs = detect_pointer_fields(draft_text, set(offsets.keys())) if draft_text else set()
    # pointer field overrides width
    for off in ptrs:
        offsets[off] = "ptr"
    struct = build_struct(offsets, suffix, ptrs)
    return mod, offsets, struct, suffix, ptrs


# --- v3: pengetikan lokal (temporer pointer-aritmetika + stack struct) ---

# lokal yang di-dereference sebagai struct (m2c sering meninggalkan `void *`)
PTR_LOCAL_DECL = re.compile(r"^(\s*)void \*(\w+);\s*$", re.M)
# lokal stack yang diakses ber-field (`sp0.unk1`)
STACK_LOCAL_DECL = re.compile(
    r"^(\s*)(?:s32|u32|s16|u16|s8|u8)\s+(\w+);\s*$", re.M)

FIELD_CAST_WIDTH = {
    "u8": "u8",
    "s8": "s8",
    "u16": "u16",
    "s16": "s16",
}


def retype_ptr_locals(body, suffix, stats):
    """`void *temp_rN;` yang dipakai `temp_rN->field` -> `GenObj_<suffix> *`.

    Setiap assignment ke lokal itu diberi cast eksplisit: RHS-nya hasil
    pointer-aritmetika dari field `s32`/`u32`, jadi tanpa cast assignment
    integer->pointer ditolak C++. Cast tidak menghasilkan instruksi.
    """
    deref = set(re.findall(r"\b(\w+)\s*->", body))

    def repl(m):
        indent, name = m.group(1), m.group(2)
        if name not in deref:
            return m.group(0)
        stats["ptr_locals"].append(name)
        return f"{indent}GenObj_{suffix} *{name};"

    body = PTR_LOCAL_DECL.sub(repl, body)
    # cast eksplisit di setiap assignment ke lokal yang sudah diretype
    cast = f"(GenObj_{suffix} *)"
    for name in stats["ptr_locals"]:
        body = re.sub(
            rf"^(\s*){re.escape(name)} = (?!{re.escape(cast)})([^;\n]+);\s*$",
            lambda mm, n=name: f"{mm.group(1)}{n} = {cast}({mm.group(2)});",
            body, flags=re.M)
    return body


PTR_ARITH = re.compile(r"\(([^()]+)\)\s*\+\s*(\w+)\b")


def fix_ptr_arith(body, suffix):
    """`(expr) + ptr` pada pointer struct -> aritmetika byte.

    m2c menghitung offset byte lalu menambahkannya ke pointer; kalau pointer
    sudah bertipe struct*, `+` akan di-scale sizeof(struct) dan offset jadi
    salah (andai lolos compile pun byte-nya beda). Bentuk aslinya dipulihkan
    dengan `(GenObj_x *)((u8 *)ptr + (expr))`.
    """
    names = set(re.findall(rf"GenObj_{re.escape(suffix)}\s*\*\s*(\w+)", body))
    if not names:
        return body
    cast = f"(GenObj_{suffix} *)"

    def repl(m):
        expr, name = m.group(1), m.group(2)
        if name not in names:
            return m.group(0)
        return f"{cast}((u8 *){name} + ({expr}))"

    return PTR_ARITH.sub(repl, body)


def build_stack_struct(type_name, widths):
    lines = [f"typedef struct {type_name} {{"]
    cur = 0
    for off in sorted(widths):
        w = widths[off]
        size = {"u8": 1, "s8": 1, "u16": 2, "s16": 2, "u32": 4}[w]
        if off < cur:
            continue
        if off > cur:
            lines.append("    u8 _pad%d[%d];" % (cur, off - cur))
        lines.append("    %s unk%X; /*0x%X*/" % (w, off, off))
        cur = off + size
    lines.append(f"}} {type_name};")
    return "\n".join(lines) + "\n"


ALIGN_WIDTH = {0: "u32", 2: "u16"}


def rewrite_mixed_stack_local(body, name, offs):
    """`name.unkN` pada lokal skalar -> `*(w *)((u8 *)&name + 0xN)`.

    Lebar diambil dari cast pada assignment (`(u8)`/`(u16)`) kalau ada,
    kalau tidak dari alignment offset (0->u32, 2->u16, ganjil->u8).
    """
    for off in sorted(offs):
        w = None
        for hx in (format(off, "X"), format(off, "x")):
            mm = re.search(
                rf"\b{re.escape(name)}\.unk{hx}\s*=\s*\((\w+)\)", body)
            if mm:
                w = FIELD_CAST_WIDTH.get(mm.group(1), "u32")
                break
        if w is None:
            w = ALIGN_WIDTH.get(off % 4, "u8")
        for hx in (format(off, "X"), format(off, "x")):
            body = re.sub(
                rf"\b{re.escape(name)}\.unk{hx}\b",
                f"*(%s *)((u8 *)&%s + 0x%X)" % (w, name, off),
                body)
    return body


def retype_stack_locals(body, suffix, stats):
    """Lokal stack bertipe skalar yang diakses `name.unkN` -> struct lokal.

    Hanya lokal TANPA assignment nilai utuh (`sp0 = ...`) yang diubah: yang
    punya assignment utuh butuh dekomposisi semantik (bitfield/union), jadi
    dilaporkan sebagai stack_skipped, bukan ditebak. Alamat `&name` tetap sah.
    """
    defs = []
    mixed = []

    def repl(m):
        indent, name = m.group(1), m.group(2)
        offs = {int(h, 16) for h in re.findall(
            rf"\b{re.escape(name)}\.unk([0-9A-Fa-f]+)", body)}
        if not offs:
            return m.group(0)
        if re.search(rf"^\s*{re.escape(name)} = ", body, re.M):
            # lokal campuran: nilai utuh (`sp4 = 4;`) + field (`sp4.unk2`).
            # Tipe skalarnya dipertahankan supaya assignment utuh tetap sah;
            # akses field diubah jadi lvalue ber-offset byte (di post-pass).
            mixed.append(name)
            return m.group(0)
        widths = {}
        for off in offs:
            w = None
            for hx in (format(off, "X"), format(off, "x")):
                mm = re.search(
                    rf"\b{re.escape(name)}\.unk{hx}\s*=\s*\((\w+)\)", body)
                if mm:
                    w = FIELD_CAST_WIDTH.get(mm.group(1), "u32")
                    break
            widths[off] = w or "u32"
        type_name = f"STK_{name}_{suffix}"
        defs.append(build_stack_struct(type_name, widths))
        stats["stack_locals"].append(name)
        return f"{indent}{type_name} {name};"

    body = STACK_LOCAL_DECL.sub(repl, body)
    for name in mixed:
        offs = {int(h, 16) for h in re.findall(
            rf"\b{re.escape(name)}\.unk([0-9A-Fa-f]+)", body)}
        body = rewrite_mixed_stack_local(body, name, offs)
        stats["stack_skipped"].append(name + "(byte-offset)")
    return ("\n".join(defs) + "\n" if defs else ""), body


def patch_draft(func, struct, suffix):
    path = DRAFTS / (func + ".c")
    if not path.exists():
        return False, "no draft"
    original = path.read_text()
    # backup
    bak = DRAFTS / (func + ".c.synth.bak")
    if not bak.exists():
        bak.write_text(original)
    # insert struct at top
    stats = {"ptr_locals": [], "stack_locals": [], "stack_skipped": []}
    body = retype_ptr_locals(original, suffix, stats)
    stack_defs, body = retype_stack_locals(body, suffix, stats)
    # insert struct + typedef lokal stack di top
    new = struct + "\n" + stack_defs + body
    # patch extern void *gUnk_* -> GenObj_suffix *
    new = re.sub(r"extern\s+void\s*\*\s*(gUnk_[A-Za-z0-9_]+)", r"extern GenObj_%s *\1" % suffix, new)
    new = re.sub(r"\bvoid\s*\*\s*(gUnk_[A-Za-z0-9_]+)\b", lambda m: "GenObj_%s *%s" % (suffix, m.group(1)), new)
    # v2: rewrite pointer arithmetic on gUnk to byte arithmetic (avoid scaling)
    new = re.sub(r"(gUnk_[A-Za-z0-9_]+)\s*\+\s*\(", lambda m: "(u8 *) %s + (" % m.group(1), new)
    new = re.sub(r"(gUnk_[A-Za-z0-9_]+)\s*\+\s*([A-Za-z_][A-Za-z0-9_]*)\s*\*", lambda m: "(u8 *) %s + %s *" % (m.group(1), m.group(2)), new)
    # v2: drop the old GenObj/Obj typedef block (replaced by GenObj_suffix above)
    new = re.sub(r"typedef\s+struct\s+GenObj(?:_\w+)?\s*\{.*?\}\s*GenObj(?:_\w+)?\s*;", "", new, count=1, flags=re.S)
    # v2: rename remaining GenObj references to GenObj_suffix
    new = re.sub(r"\bGenObj\b", "GenObj_%s" % suffix, new)
    # v3: setelah semua pointer struct bernama sama, pulihkan aritmetika byte
    new = fix_ptr_arith(new, suffix)
    path.write_text(new)
    return True, "patched ptr=%s stack=%s skip_stack=%s" % (
        stats["ptr_locals"], stats["stack_locals"], stats["stack_skipped"])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--func", help="single function name")
    ap.add_argument("--module", help="module file name, e.g. hardware.s")
    ap.add_argument("--limit", type=int, default=10)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    state = load_state()

    targets = []
    if args.func:
        targets = [args.func]
    else:
        mod = args.module
        # collect failed funcs in that module with 'request for member' note
        for p in STATE.glob("*.json"):
            d = json.load(open(p))
            for n, v in d.items():
                if v.get("module") != mod:
                    continue
                if v.get("status") != "failed":
                    continue
                note = v.get("note", "")
                if "request for member" in note and "not a structure" in note:
                    targets.append(n)
        targets = targets[: args.limit]

    print("targets:", len(targets))
    for func in targets:
        res = synth_one(func, state)
        if not res:
            print(func, "-> skip (no offsets/mod)")
            continue
        mod, offsets, struct, suffix, ptrs = res
        print("\n== %s (%s) offsets=%s ptrs=%s" % (func, mod, sorted(offsets), sorted(ptrs)))
        print(struct)
        if args.apply and not args.dry_run:
            ok, msg = patch_draft(func, struct, suffix)
            print("   apply:", msg)


if __name__ == "__main__":
    main()
