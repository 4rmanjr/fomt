#!/usr/bin/env python3
"""width_mismatch.py - bandingkan lebar akses asm vs tipe field draf.

Untuk setiap fungsi `failed` (default: |len-ref| <= 4), tool ini membaca
struktur di draf, menghitung offset+lebar tiap field, lalu membandingkannya
dengan lebar akses memori di asm untuk offset tersebut:

    ldrb/strb -> 1 byte, ldrh/strh -> 2 byte, ldr/str -> 4 byte

Field yang lebarnya beda = kandidat utama diff "operand"/"extra" (mis.
`arg0->unk3E = 0` pada field s32 menghasilkan `str` padahal ref `strb`).

Usage:
  python3 tools/scripts/width_mismatch.py                 # ringkas, delta<=4
  python3 tools/scripts/width_mismatch.py --func func_X
  python3 tools/scripts/width_mismatch.py --module game_state.s --max-delta 8
  python3 tools/scripts/width_mismatch.py --json
"""
import argparse
import json
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"
DRAFTS = ROOT / "decomp" / "drafts"
ASM = ROOT / "asm"

TYPE_W = {"u8": 1, "s8": 1, "char": 1, "u16": 2, "s16": 2, "short": 2,
          "u32": 4, "s32": 4, "i32": 4, "int": 4, "void": 4}

ACCESS = re.compile(
    r"\b(ldrb|ldrh|ldr|strb|strh|str|ldrsb|ldrsh)\s+\w+,\s*\[(\w+)"
    r"(?:,\s*#(0x[0-9a-fA-F]+|\d+))?\]")


def load_state():
    m = {}
    for p in STATE.glob("*.json"):
        for n, v in json.load(open(p)).items():
            m[n] = v
    return m


def asm_body(func, module):
    path = ASM / module
    if not path.exists():
        return ""
    t = path.read_text()
    i = t.find(f"thumb_func_start {func}\n")
    if i < 0:
        return ""
    return t[i:].split("thumb_func_start")[1]


def asm_widths(body):
    w = {}
    for op, _reg, off in ACCESS.findall(body):
        o = int(off, 0) if off else 0
        width = {"ldrb": 1, "strb": 1, "ldrsb": 1,
                 "ldrh": 2, "strh": 2, "ldrsh": 2}.get(op, 4)
        if o not in w or width < w[o]:
            w[o] = width
    return w


def struct_layout(text, name):
    m = re.search(r"typedef struct " + re.escape(name) + r"\s*\{.*?\}\s*"
                  + re.escape(name) + r"\s*;", text, re.S)
    if not m:
        return None
    cur = 0
    fields = {}
    for line in m.group(0).splitlines()[1:]:
        line = line.strip().rstrip(";")
        if not line or line.startswith("}") or line.startswith("//"):
            continue
        mm = re.match(r"(?:struct\s+(\w+)|(\w+))((?:\s*\*)*)\s*(\w+)(?:\[(\w+)\])?$", line)
        if not mm:
            continue
        tn = mm.group(1) or mm.group(2)
        stars = mm.group(3) or ""
        nm = mm.group(4)
        arr = mm.group(5)
        if stars:
            size = 4
        elif arr:
            size = TYPE_W.get(tn, 4) * int(arr, 0)
        else:
            size = TYPE_W.get(tn, 4)
        if nm.startswith("_pad"):
            cur += size
        else:
            fields[nm] = (cur, size)
            cur += size
    return fields


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--func", help="satu fungsi saja")
    ap.add_argument("--module", help="filter modul .s")
    ap.add_argument("--max-delta", type=int, default=4,
                    help="abaikan fungsi dengan |len-ref| di atas ini (default 4)")
    ap.add_argument("--limit", type=int, default=20)
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()

    st = load_state()
    rows = []
    for fn, v in st.items():
        if v.get("status") != "failed":
            continue
        if a.func and fn != a.func:
            continue
        if a.module and v.get("module") != a.module:
            continue
        note = v.get("note", "")
        m = re.search(r"len (\d+) vs ref (\d+)", note)
        if m and not a.func and abs(int(m.group(1)) - int(m.group(2))) > a.max_delta:
            continue
        dp = DRAFTS / f"{fn}.c"
        if not dp.exists():
            continue
        text = dp.read_text()
        aw = asm_widths(asm_body(fn, v.get("module", "")))
        for tname in re.findall(r"typedef struct (\w+) \{", text):
            lay = struct_layout(text, tname)
            if not lay:
                continue
            for fname, (off, size) in sorted(lay.items(), key=lambda kv: kv[1][0]):
                mm = re.fullmatch(r"unk([0-9A-Fa-f]+)", fname)
                if not mm:
                    continue
                name_off = int(mm.group(1), 16)
                asm_w = aw.get(name_off) or aw.get(off)
                if asm_w is None or size == asm_w:
                    continue
                rows.append({"func": fn, "module": v.get("module"), "struct": tname,
                             "field": fname, "field_off": off, "name_off": name_off,
                             "draft_w": size, "asm_w": asm_w,
                             "ref_len": v.get("ref_len", 0)})
    rows.sort(key=lambda r: (r.get("ref_len", 0), r["func"], r["name_off"]))
    if a.json:
        print(json.dumps(rows, indent=1))
        return
    print(f"mismatch lebar akses: {len(rows)} field di {len({r['func'] for r in rows})} fungsi")
    for r in rows[:a.limit]:
        print(f"  ref={r.get('ref_len', 0):4d} {r['module']}/{r['func']}: "
              f"{r['struct']}.{r['field']} off=0x{r['field_off']:X} "
              f"draf={r['draft_w']}B asm={r['asm_w']}B")


if __name__ == "__main__":
    main()
