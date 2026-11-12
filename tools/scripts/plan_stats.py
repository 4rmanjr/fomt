#!/usr/bin/env python3
"""plan_stats.py - tabel sisa pekerjaan per modul (fungsi + byte).

Sumber: `decomp/state/modules/*.json` (satu shard per modul asm).
Dipakai untuk memilih target sesi: prioritas berdasarkan byte bila tujuannya
"modul selesai", berdasarkan jumlah fungsi bila tujuannya menambah
kepercayaan pola. Lihat `docs/RENCANA-TRANSLASI.md` Fase 0.

Usage:
  python3 tools/scripts/plan_stats.py
  python3 tools/scripts/plan_stats.py --sort count
  python3 tools/scripts/plan_stats.py --module code_0803EE94
  python3 tools/scripts/plan_stats.py --json
"""
import argparse
import json
import pathlib

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"

MATCH = {"matched", "promoted"}
BUCKETS = ((64, "<=64"), (128, "65-128"), (256, "129-256"),
           (512, "257-512"), (1 << 30, ">512"))


def bucket(n: int) -> str:
    for limit, label in BUCKETS:
        if n <= limit:
            return label
    return ">512"


def module_rows():
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
        done = [v for v in funcs.values() if v.get("status") in MATCH]
        other = len(funcs) - len(failed) - len(done)
        rows.append({
            "module": path.stem,
            "failed": len(failed),
            "matched": len(done),
            "other": other,
            "total": len(funcs),
            "bytes_failed": sum(v.get("ref_len") or 0 for v in failed),
            "bytes_matched": sum(v.get("ref_len") or 0 for v in done),
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
        "failed": sum(r["failed"] for r in rows),
        "matched": sum(r["matched"] for r in rows),
        "other": sum(r["other"] for r in rows),
        "bytes_failed": sum(r["bytes_failed"] for r in rows),
        "bytes_matched": sum(r["bytes_matched"] for r in rows),
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

    head = (f"{'modul':34s} {'failed':>7s} {'match':>6s} {'other':>6s} "
            f"{'byte-failed':>12s} {'byte-match':>11s} {'%byte':>6s}")
    print(head)
    for r in shown:
        total = r["bytes_failed"] + r["bytes_matched"]
        pct = 100.0 * r["bytes_matched"] / total if total else 0.0
        print(f"{r['module']:34s} {r['failed']:7d} {r['matched']:6d} "
              f"{r['other']:6d} {r['bytes_failed']:12d} "
              f"{r['bytes_matched']:11d} {pct:5.1f}%")
    total_bytes = totals["bytes_failed"] + totals["bytes_matched"]
    pct = 100.0 * totals["bytes_matched"] / total_bytes if total_bytes else 0.0
    print(f"{'TOTAL':34s} {totals['failed']:7d} {totals['matched']:6d} "
          f"{totals['other']:6d} {totals['bytes_failed']:12d} "
          f"{totals['bytes_matched']:11d} {pct:5.1f}%")
    dist = "  ".join(f"{label}: {n}" for label, n in buckets.items())
    print(f"\nukuran fungsi failed -> {dist}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
