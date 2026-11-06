#!/usr/bin/env python3
"""Paket kerja satu fungsi (gaya decompdecomp brief): status + note + draf + asm fungsi itu + saudara.

Pakai:  python3 tools/scripts/brief.py <func> [--siblings N]

Satu command menggantikan 3-4 baca manual (state, draf, asm modul, log).
Output dibatasi (~60 baris): asm tanpa ekor pool `.byte`, draf penuh
(draf kecil), saudara = nama + ref_len saja.
"""
import glob
import json
import os
import re
import subprocess
import sys

sys.path.insert(0, ".")

MAX_ASM_LINES = 45


def judge_budget(ref_len):
    """Budget judge skala ukuran (adopsi decompdecomp STALL_BUDGET):
    ref_len ≤32 → 3; ≤64 → 4; ≤128 → 6; ≤256 → 8; di atas → 10.
    Tanpa perbaikan note antar-judge = parkir + regen."""
    rl = ref_len or 0
    return next((b for under, b in ((32, 3), (64, 4), (128, 6), (256, 8)) if rl <= under), 10)


def load_state():
    st = {}
    for p in glob.glob("decomp/state/modules/*.json"):
        st.update(json.load(open(p)))
    return st


def in_src(name):
    for f in glob.glob("src/**/*.cc", recursive=True):
        try:
            with open(f, errors="ignore") as fh:
                for line in fh:
                    if "DECOMP-MATCHED " + name in line:
                        return True
        except OSError:
            pass
    return False


def asm_block(module, name):
    t = open(f"asm/{module}").read()
    i = t.find(f"thumb_func_start {name}\n")
    if i < 0:
        return None
    j = t.find("thumb_func_start ", i + 10)
    blk = t[i:j if j > 0 else len(t)].rstrip().splitlines()
    code = [l for l in blk if ".byte" not in l and ".4byte" not in l]
    tail = len(blk) - len(code)
    if len(code) > MAX_ASM_LINES:
        code = code[:MAX_ASM_LINES] + [f"    [... {len(code) - MAX_ASM_LINES} baris dipotong]"]
    if tail:
        code.append(f"    [... {tail} baris pool/data dipotong]")
    return "\n".join(code)


def main() -> int:
    if len(sys.argv) < 2:
        print("pakai: brief.py <func> [--siblings N]", file=sys.stderr)
        return 2
    name = sys.argv[1]
    sib_n = 5
    if "--siblings" in sys.argv:
        try:
            sib_n = int(sys.argv[sys.argv.index("--siblings") + 1])
        except (IndexError, ValueError):
            pass
    st = load_state()
    e = st.get(name)
    if not e:
        print(f"{name}: tidak ada di state")
        return 1
    mod = e.get("module", "?")
    print(f"### {name}  [{mod}] status={e.get('status')} ref_len={e.get('ref_len')} in_src={in_src(name)} budget={judge_budget(e.get('ref_len'))} judge")
    note = (e.get("note") or "").replace("\n", " | ")[:220]
    if note:
        print(f"note: {note}")
    d = f"decomp/drafts/{name}.c"
    if os.path.exists(d):
        lines = open(d).read().rstrip().splitlines()
        print(f"--- draf ({len(lines)} baris) ---")
        print("\n".join(lines[:40]))
        if len(lines) > 40:
            print(f"[... {len(lines) - 40} baris dipotong]")
    else:
        print("--- draf: tidak ada ---")
    blk = asm_block(mod, name)
    print("--- asm ref (pool dipotong) ---")
    print(blk if blk else "(blok asm tak ketemu)")
    # saudara se-bentuk: signature DIFF/note mirip di modul sama
    if sib_n > 0:
        sig = re.sub(r"[0-9a-fA-F]{4,}", "#", (e.get("note") or "")[:60])
        sibs = []
        for n2, e2 in st.items():
            if n2 == name or not isinstance(e2, dict):
                continue
            if e2.get("module") != mod or e2.get("status") != e.get("status"):
                continue
            if in_src(n2):
                continue
            n2note = re.sub(r"[0-9a-fA-F]{4,}", "#", (e2.get("note") or "")[:60])
            if sig and n2note == sig:
                sibs.append((n2, e2.get("ref_len")))
        if sibs:
            print(f"--- saudara (note sama, maks {sib_n}) ---")
            for n2, rl in sibs[:sib_n]:
                print(f"  {n2} ref={rl}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
