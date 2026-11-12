#!/usr/bin/env python3
"""wall_registry.py - rekap fungsi "parkir" dari note shard.

Fungsi yang diparkir menyimpan alasannya di `note` shard
(`decomp/state/modules/<stem>.json`). Tool ini mengumpulkannya supaya tidak
ada fungsi yang dicoba ulang tanpa ide baru. Lihat
`docs/RENCANA-TRANSLASI.md` Fase 0.

Usage:
  python3 tools/scripts/wall_registry.py
  python3 tools/scripts/wall_registry.py --module code_0803EE94
  python3 tools/scripts/wall_registry.py --grep regalloc --full
  python3 tools/scripts/wall_registry.py --json
"""
import argparse
import json
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"

PARKIR = re.compile(r"parkir", re.I)
ATTEMPT = re.compile(r"(\d)\s*/\s*5|(\d+)\s+percobaan|cap\s*5", re.I)
BRACKET = re.compile(r"\[([^\]]*parkir[^\]]*)\]", re.I | re.S)
PREFIX = re.compile(r"^(?:parkir(?:\s+sesi)?\s*[:\-]?\s*)+", re.I)
ATT_PREFIX = re.compile(r"^\d\s*/\s*5\s*[:\-]?\s*")


def reason(note: str) -> str:
    """Ambil segmen terakhir yang menyebut parkir; fallback: catatan penuh."""
    hits = BRACKET.findall(note)
    text = hits[-1] if hits else note
    text = re.sub(r"\s+", " ", text).strip()
    return ATT_PREFIX.sub("", PREFIX.sub("", text)).strip()


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--module", help="hanya modul ini (nama stem)")
    ap.add_argument("--grep", help="saring alasan (case-insensitive)")
    ap.add_argument("--limit", type=int, default=0, help="batasi baris")
    ap.add_argument("--width", type=int, default=110,
                    help="potong alasan pada N karakter (0 = jangan potong)")
    ap.add_argument("--full", action="store_true", help="tampilkan alasan utuh")
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args()

    needle = args.grep.lower() if args.grep else None
    rows = []
    for path in sorted(STATE.glob("*.json")):
        if args.module and path.stem != args.module:
            continue
        try:
            shard = json.loads(path.read_text())
        except (OSError, ValueError):
            continue
        for func, v in shard.items():
            if not isinstance(v, dict):
                continue
            note = v.get("note") or ""
            if not PARKIR.search(note):
                continue
            text = reason(note)
            if needle and needle not in text.lower():
                continue
            found = []
            for m in ATTEMPT.finditer(note):
                if m.group(1):
                    found.append(int(m.group(1)))
                elif m.group(2):
                    found.append(int(m.group(2)))
                else:
                    found.append(5)
            rows.append({
                "module": path.stem,
                "func": func,
                "ref_len": v.get("ref_len") or 0,
                "attempts": f"{min(max(found), 5)}/5" if found else "",
                "reason": text,
            })

    rows.sort(key=lambda r: (r["module"], r["func"]))
    shown = rows[:args.limit] if args.limit else rows

    if args.json:
        print(json.dumps({"walls": shown, "total": len(rows)}, indent=1))
        return 0

    for r in shown:
        text = r["reason"] if args.full or not args.width else r["reason"][:args.width]
        print(f"{r['module']:30s} {r['func']:22s} {r['ref_len']:4d}B "
              f"{r['attempts']:>4s}  {text}")
    modules = len({r["module"] for r in rows})
    print(f"\ntotal: {len(rows)} fungsi parkir di {modules} modul")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
