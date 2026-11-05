#!/usr/bin/env python3
"""Antrean migrasi hemat token: failed di modul migratable, belum di src.

Aturan AGENTS.md no 7 (skrip > heredoc): sekali tulis, pakai ulang.
LIMIT=<n> batasi baris (default 15).
"""
import glob
import json
import os
import subprocess
import sys

sys.path.insert(0, ".")


def main() -> int:
    try:
        from decomp.migrate import MIGRATABLE_MODULES
    except Exception:
        print("jalankan dari root repo fomt", file=sys.stderr)
        return 2
    st = {}
    for p in glob.glob("decomp/state/modules/*.json"):
        st.update(json.load(open(p)))
    srctxt = ""
    for f in glob.glob("src/**/*.cc", recursive=True):
        srctxt += open(f, errors="ignore").read()
    rows = []
    for m in MIGRATABLE_MODULES:
        if not os.path.exists(f"asm/{m}"):
            continue
        out = subprocess.run(
            ["python3", "tools/scripts/split_asm_sections.py",
             "--migratable", f"asm/{m}"],
            capture_output=True, text=True).stdout
        safe = {l.strip() for l in out.splitlines()
                if l.strip().startswith(("func_", "sub_"))}
        for n in safe:
            e = st.get(n, {})
            if e.get("status") == "failed" and \
                    ("DECOMP-MATCHED " + n) not in srctxt:
                d = f"decomp/drafts/{n}.c"
                ln = sum(1 for _ in open(d)) if os.path.exists(d) else 9999
                rows.append((ln, m, n, e.get("ref_len")))
    rows.sort()
    for ln, m, n, rl in rows[:int(os.environ.get("LIMIT", "15"))]:
        print(f"{ln:3d} {m:22s} {n:16s} ref={rl}")
    print(f"TOTAL:{len(rows)}")
    ok = sum(1 for v in st.values()
             if isinstance(v, dict) and v.get("status") in
             ("promoted", "matched"))
    tot = sum(1 for v in st.values()
              if isinstance(v, dict) and v.get("status"))
    print(f"BASELINE total {tot} berhasil {ok} ({100*ok/tot:.1f}%)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
