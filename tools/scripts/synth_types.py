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


def build_struct(offsets, suffix):
    lines = ["typedef struct GenObj_" + suffix + " {"]
    cur = 0
    for off in sorted(offsets):
        w = offsets[off]
        size = {"u8": 1, "u16": 2, "u32": 4}[w]
        if off > cur:
            pad = off - cur
            lines.append("    u8 _pad%d[%d];" % (cur, pad))
            cur = off
        if off < cur:
            continue
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
    if draft_path.exists():
        draft_text = draft_path.read_text()
        for off in extract_fields_from_draft(draft_text):
            if off not in offsets:
                offsets[off] = None
    # drop None -> infer
    if any(v is None for v in offsets.values()):
        known = {k: v for k, v in offsets.items() if v is not None}
        missing = [k for k, v in offsets.items() if v is None]
        inferred = infer_widths(set(offsets.keys()))
        for k in missing:
            offsets[k] = inferred.get(k, "u32")
    if not offsets:
        return None
    suffix = func[-4:]  # last 4 hex-ish
    # sanitize suffix to identifier-safe
    suffix = re.sub(r"[^A-Za-z0-9_]", "_", suffix)
    struct = build_struct(offsets, suffix)
    return mod, offsets, struct, suffix


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
    new = struct + "\n" + original
    # patch extern void *gUnk_* -> GenObj_suffix *
    new = re.sub(r"extern\s+void\s*\*\s*(gUnk_[A-Za-z0-9_]+)", r"extern GenObj_%s *\1" % suffix, new)
    new = re.sub(r"\bvoid\s*\*\s*(gUnk_[A-Za-z0-9_]+)\b", lambda m: "GenObj_%s *%s" % (suffix, m.group(1)), new)
    path.write_text(new)
    return True, "patched"


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
        mod, offsets, struct, suffix = res
        print("\n== %s (%s) offsets=%s" % (func, mod, sorted(offsets)))
        print(struct)
        if args.apply and not args.dry_run:
            ok, msg = patch_draft(func, struct, suffix)
            print("   apply:", msg)


if __name__ == "__main__":
    main()
