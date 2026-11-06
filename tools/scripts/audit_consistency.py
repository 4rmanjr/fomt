#!/usr/bin/env python3
"""audit_consistency.py — audit konsistensi state ↔ promoted ↔ src.

Read-only (tidak mengubah apa pun). Dipakai untuk audit menyeluruh /
pemeriksaan sebelum sesi:

  python3 tools/scripts/audit_consistency.py [--max N] [--fix]

Cek yang dilakukan:
  1. DUPLIKAT blok `// DECOMP-MATCHED <fn>` di setiap decomp/promoted/*.cc
     (gejala: `fomt --migratable` mem-"MATCH" fungsi yang sudah ada di src).
  2. State `promoted` TAPI bloknya tidak ada di promoted/*.cc dan fungsinya
     tidak ada di src (state basi / blok keburu di-revert).
  3. Blok promoted TAPI fungsinya belum ada di varian src mana pun
     (kandidat migrasi / tertahan SKIP).
  4. Fungsi sudah di src TAPI status state masih failed/drafted
     (state basi; lihat juga decomp/audit_sync.py).
  5. Blok promoted tanpa `}` penutup seimbang (indikasi sisip manual rusak).

Exit code: 0 = tidak ada masalah struktural (1-2 hanya informasi),
1 = ada duplikat / blok rusak / state yatim.
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
PROMOTED = REPO / "decomp" / "promoted"
SRC = REPO / "src"
MODULES = REPO / "decomp" / "state" / "modules"
MARK = re.compile(r"^// DECOMP-MATCHED (\w+)", re.M)
SRC_SUFFIX = ("", "_c", "_v", "_migrated")
SRC_EXT = ("cc", "c")


def src_text(stem):
    out = {}
    for suf in SRC_SUFFIX:
        for ext in SRC_EXT:
            p = SRC / f"{stem}{suf}.{ext}"
            if p.exists():
                out[p] = p.read_text(errors="ignore")
    return out


def main(argv):
    mx = 5
    if "--max" in argv:
        mx = int(argv[argv.index("--max") + 1])
    fix = "--fix" in argv

    problems = 0
    dup_report, orphan_state, unmigrated, stale = [], [], [], []
    broken_blocks = []

    for pf in sorted(PROMOTED.glob("*.cc")):
        stem = pf.stem
        text = pf.read_text(errors="ignore")
        names = MARK.findall(text)

        # 1. duplikat dalam satu file
        dup = [n for n, c in Counter(names).items() if c > 1]
        if dup:
            problems += 1
            dup_report.append((stem, dup))

        # 5. blok tanpa penutup (hanya hitung kasar: kurung kurawal file)
        if text.count("{") != text.count("}"):
            problems += 1
            broken_blocks.append((stem, text.count("{") - text.count("}")))

        # state modul
        mp = MODULES / f"{stem}.json"
        state = json.loads(mp.read_text()) if mp.exists() else {}
        sfiles = src_text(stem)
        in_src = set()
        for t in sfiles.values():
            in_src |= set(MARK.findall(t))

        for n in names:
            st = (state.get(n) or {}).get("status")
            if n not in in_src:
                unmigrated.append((stem, n, st))

        # 2. state promoted tapi blok hilang dan tak ada di src
        for n, v in state.items():
            if not isinstance(v, dict) or v.get("status") != "promoted":
                continue
            if n not in names and n not in in_src:
                orphan_state.append((stem, n))

        # 4. sudah di src tapi state masih failed/drafted
        for n in in_src:
            st = (state.get(n) or {}).get("status")
            if st in ("failed", "drafted", "pending"):
                stale.append((stem, n, st))

    def show(title, rows, fmt=lambda r: r):
        print(f"\n## {title}: {len(rows)}")
        for r in rows[:mx]:
            print("   ", fmt(r))
        if len(rows) > mx:
            print(f"    ... {len(rows) - mx} lagi (pakai --max N)")

    print("=== AUDIT state ↔ promoted ↔ src ===")
    show("DUPLIKAT blok promoted (MASALAH)", dup_report,
         lambda r: f"{r[0]}: {len(r[1])} dobel -> {r[1][:4]}")
    show("Blok kurung tidak seimbang (MASALAH)", broken_blocks,
         lambda r: f"{r[0]}: selisih {r[1]:+d} kurung")
    show("State promoted tapi blok & src hilang (MASALAH)", orphan_state)
    show("Blok promoted belum di src (info)", unmigrated)
    show("Sudah di src tapi state failed/drafted (info)", stale)

    total_blocks = sum(len(MARK.findall(p.read_text(errors="ignore")))
                       for p in PROMOTED.glob("*.cc"))
    total_src = 0
    for p in SRC.iterdir():
        if p.suffix in (".cc", ".c") and not p.name.startswith("rt"):
            total_src += len(MARK.findall(p.read_text(errors="ignore")))
    print(f"\nTotal blok promoted: {total_blocks} | marker di src/: {total_src}")

    if fix:
        # Hanya kelas "status basi": fungsi PUNYA marker DECOMP-MATCHED di src
        # (= benar-benar dipindah migrate) tapi state-nya failed/drafted.
        # Status dijadikan "promoted" (status kelas satu; run.py tak mengenal
        # "migrated", jadi memakai "migrated" akan menghilangkan fungsi dari
        # statistik & verify). Tidak menyentuh draf/promoted/note.
        changed = 0
        per = {}
        for stem, n, _st in stale:
            per.setdefault(stem, []).append(n)
        for stem, names in per.items():
            mp = MODULES / f"{stem}.json"
            st = json.loads(mp.read_text())
            for n in names:
                st[n]["status"] = "promoted"
                changed += 1
            mp.write_text(json.dumps(st, indent=1))
        print(f"[fix] {changed} status basi -> promoted di {len(per)} shard")

    print("MASALAH struktural:", problems)
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))