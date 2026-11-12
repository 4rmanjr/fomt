#!/usr/bin/env python3
"""plan_stats.py - tabel sisa pekerjaan per modul (fungsi + byte).

Sumber: `decomp/state/modules/*.json` (satu shard per modul asm) + marker
`DECOMP-MATCHED` di `src/` (lihat `decomp/srcmarkers.py`).
Dipakai untuk memilih target sesi: prioritas berdasarkan byte bila tujuannya
"modul selesai", berdasarkan jumlah fungsi bila tujuannya menambah
kepercayaan pola. Lihat `docs/RENCANA-TRANSLASI.md` Fase 0.

Kolom `match` adalah state matched+promoted (angka yang sama dengan `fomt
status`), lalu dipecah:

- `src`         : blok sudah ada di `src/` (byte ROM benar-benar berubah).
- `promo`       : promote-only, blok baru di `decomp/promoted/` (mis. modul
                  tail-only yang masih punya penerus di `.s`).
- `%byte-src`   : persentase byte modul yang sudah pindah ke `src/`, bukan
                  persentase yang "sudah MATCH".

Usage:
  python3 tools/scripts/plan_stats.py
  python3 tools/scripts/plan_stats.py --sort count
  python3 tools/scripts/plan_stats.py --module code_0803EE94
  python3 tools/scripts/plan_stats.py --json
"""
import argparse
import json
import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"
sys.path.insert(0, str(ROOT / "decomp"))
from srcmarkers import migrated_names  # noqa: E402

MATCH = {"matched", "promoted"}
BUCKETS = ((64, "<=64"), (128, "65-128"), (256, "129-256"),
           (512, "257-512"), (1 << 30, ">512"))


def bucket(n: int) -> str:
    for limit, label in BUCKETS:
        if n <= limit:
            return label
    return ">512"


def module_rows():
    in_src = migrated_names()
    rows = []
    for path in sorted(STATE.glob("*.json")):
        try:
            shard = json.loads(path.read_text())
        except (OSError, ValueError):
            continue
        funcs = {k: v for k, v in shard.items()
                 if isinstance(v, dict) and v.get("status")}
        if not funcs:
            continue
        failed = [v for v in funcs.values() if v.get("status") == "failed"]
        done = {k: v for k, v in funcs.items() if v.get("status") in MATCH}
        src = {k: v for k, v in done.items() if k in in_src}
        promo = {k: v for k, v in done.items() if k not in in_src}
        other = len(funcs) - len(failed) - len(done)
        rows.append({
            "module": path.stem,
            "failed": len(failed),
            "matched": len(done),
            "src": len(src),
            "promo": len(promo),
            "other": other,
            "total": len(funcs),
            "bytes_failed": sum(v.get("ref_len") or 0 for v in failed),
            "bytes_matched": sum(v.get("ref_len") or 0 for v in done.values()),
            "bytes_src": sum(v.get("ref_len") or 0 for v in src.values()),
            "bytes_promo": sum(v.get("ref_len") or 0 for v in promo.values()),
        })
    return rows


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--module", help="hanya modul ini (nama stem)")
    ap.add_argument("--sort", choices=("bytes", "count", "name"), default="bytes")
    ap.add_argument("--limit", type=int, default=0, help="batasi baris (0 = semua)")
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()

    rows = module_rows()
    if args.module:
        rows = [r for r in rows if r["module"] == args.module]
    if args.sort == "bytes":
        rows.sort(key=lambda r: (-r["bytes_failed"], r["module"]))
    elif args.sort == "count":
        rows.sort(key=lambda r: (-r["failed"], r["module"]))
    else:
        rows.sort(key=lambda r: r["module"])
    shown = rows[:args.limit] if args.limit else rows

    totals = {
        "modules": len(rows),
        "total": sum(r["total"] for r in rows),
        "failed": sum(r["failed"] for r in rows),
        "matched": sum(r["matched"] for r in rows),
        "src": sum(r["src"] for r in rows),
        "promo": sum(r["promo"] for r in rows),
        "other": sum(r["other"] for r in rows),
        "bytes_failed": sum(r["bytes_failed"] for r in rows),
        "bytes_matched": sum(r["bytes_matched"] for r in rows),
        "bytes_src": sum(r["bytes_src"] for r in rows),
        "bytes_promo": sum(r["bytes_promo"] for r in rows),
    }

    buckets = {label: 0 for _, label in BUCKETS}
    for path in STATE.glob("*.json"):
        if args.module and path.stem != args.module:
            continue
        try:
            shard = json.loads(path.read_text())
        except (OSError, ValueError):
            continue
        for v in shard.values():
            if isinstance(v, dict) and v.get("status") == "failed":
                buckets[bucket(v.get("ref_len") or 0)] += 1

    if args.json:
        print(json.dumps({"modules": shown, "totals": totals,
                          "failed_size_buckets": buckets}, indent=1))
        return 0

    head = (f"{'modul':34s} {'failed':>7s} {'match':>6s} {'src':>5s} {'promo':>6s} "
            f"{'other':>6s} {'byte-failed':>12s} {'byte-src':>9s} "
            f"{'byte-promo':>10s} {'%byte-src':>9s}")

    def line(r, label=None):
        total = r["bytes_failed"] + r["bytes_matched"]
        pct = 100.0 * r["bytes_src"] / total if total else 0.0
        return (f"{label or r['module']:34s} {r['failed']:7d} {r['matched']:6d} "
                f"{r['src']:5d} {r['promo']:6d} {r['other']:6d} "
                f"{r['bytes_failed']:12d} {r['bytes_src']:9d} "
                f"{r['bytes_promo']:10d} {pct:8.1f}%")

    print(head)
    for r in shown:
        print(line(r))
    print(line(totals, "TOTAL"))
    dist = "  ".join(f"{label}: {n}" for label, n in buckets.items())
    print(f"\nukuran fungsi failed -> {dist}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
