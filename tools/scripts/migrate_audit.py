#!/usr/bin/env python3
"""migrate_audit.py — klasifikasi semua fungsi `promoted`: bisa migrasi atau SKIP.

Menjawab pertanyaan "MATCH mana yang bisa pindah ke src?" tanpa menulis apa
pun: menjalankan gate migrate dalam mode dry-run untuk setiap blok promoted,
lalu meringkas alasan SKIP.

  python3 tools/scripts/migrate_audit.py [--json] [--max N] [--module m.s]

Dry-run TIDAK menulis src/promoted/asm dan tidak menjalankan compare.
"""
import argparse
import json
import os
import sys
from collections import Counter
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "decomp"))
import migrate  # noqa: E402


def reason(r):
    d = r.get("detail") or ""
    if "sudah ada di" in d:
        return "sudah di src"
    if "grup gabungan" in d:
        return "grup gabungan (SKIP permanen)"
    if "data asing" in d:
        return "data asing ekor (SKIP permanen)"
    if "bukan fungsi terakhir" in d:
        return "tail-only (penerus belum pindah)"
    if "layout lds" in d:
        return "layout lds"
    if "tanda tangan" in d:
        return "beda tanda tangan"
    if "tidak ditemukan" in d:
        return "tidak ditemukan (asm/promoted)"
    if r.get("ok"):
        return "BISA MIGRASI"
    return d[:80] or "lain"


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--max", type=int, default=0,
                    help="batasi baris per kategori di output teks")
    ap.add_argument("--module", action="append", default=None,
                    help="batasi ke modul .s tertentu (boleh diulang)")
    args = ap.parse_args(argv)

    mods = args.module
    if not mods:
        mods = sorted(os.path.basename(p) for p in (REPO / "asm").glob("*.s"))

    rows = []
    last = None
    for mod in mods:
        try:
            fns = [n for n, _ in migrate.promoted_funcs(mod)]
        except Exception:                         # noqa: BLE001 - modul tanpa shard
            continue
        stem = mod[:-2] if mod.endswith(".s") else mod
        if stem != last:
            migrate._analyze_stem.cache_clear()
            last = stem
        for name in fns:
            try:
                r = migrate.migrate_one(mod, name, dry_run=True)
                st = "OK" if r["ok"] else ("SKIP" if r.get("skipped") else "GAGAL")
            except Exception as e:                # noqa: BLE001
                r, st = {"detail": repr(e)}, "EXC"
            rows.append({"module": mod, "func": name, "status": st,
                         "reason": reason(r), "detail": r.get("detail", "")})

    counts = Counter(r["reason"] for r in rows)
    if args.json:
        print(json.dumps({"total": len(rows), "counts": counts,
                          "rows": rows}, indent=1))
        return 0

    print(f"=== migrate_audit: {len(rows)} blok promoted ===")
    for k, v in counts.most_common():
        print(f"{v:6d}  {k}")
    ok = [r for r in rows if r["reason"] == "BISA MIGRASI"]
    print(f"\nBISA MIGRASI ({len(ok)}):")
    lim = args.max or len(ok)
    for r in ok[:lim]:
        print(f"  {r['func']} ({r['module']})")
    if len(ok) > lim:
        print(f"  ... {len(ok) - lim} lagi")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
