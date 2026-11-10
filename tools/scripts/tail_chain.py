#!/usr/bin/env python3
"""tail_chain.py — urutan ekor modul tail-only + status migrasi.

Modul tail-only (hardware.s, code_actor_0809BFE8.s, code_linkonce.s) hanya
boleh mencabut fungsi TERAKHIR di asm; fungsi MATCH di tengah tidak bisa
pindah sebelum penerusnya pindah. Tool ini mencetak urutan ekor, status
state, apakah sudah ada di src, dan siapa yang memblokir.

  python3 tools/scripts/tail_chain.py --module hardware.s [--tail 12] [--json]
"""
import argparse
import json
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
MARK = re.compile(r"^// DECOMP-MATCHED (\w+)", re.M)
TAIL_RE = re.compile(r"thumb_func_start\s+(\w+)")
SRC_SUFFIX = ("", "_c", "_v", "_migrated")


def src_markers(stem):
    out = set()
    for suf in SRC_SUFFIX:
        for ext in ("cc", "c"):
            p = REPO / "src" / f"{stem}{suf}.{ext}"
            if p.exists():
                out |= set(MARK.findall(p.read_text(errors="ignore")))
    return out


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--module", required=True, help="nama file asm, mis. hardware.s")
    ap.add_argument("--tail", type=int, default=12)
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args(argv)

    mod = args.module if args.module.endswith(".s") else args.module + ".s"
    stem = mod[:-2]
    asm = REPO / "asm" / mod
    if not asm.exists():
        print(f"tidak ada {asm}", file=sys.stderr)
        return 2
    text = asm.read_text(errors="ignore")
    names = TAIL_RE.findall(text)

    shard = REPO / "decomp" / "state" / "modules" / f"{stem}.json"
    state = json.loads(shard.read_text()) if shard.exists() else {}
    in_src = src_markers(stem)

    rows = []
    for i, name in enumerate(names):
        v = state.get(name) or {}
        body = ""
        m = re.search(rf"thumb_func_start {re.escape(name)}\n(.*?)"
                      rf"(?=thumb_func_start |\Z)", text, re.S)
        if m:
            body = m.group(1)
        rows.append({
            "index": i,
            "func": name,
            "status": v.get("status"),
            "ref_len": v.get("ref_len"),
            "in_src": name in in_src,
            "byte_tail": ".byte" in body,
        })

    tail = rows[-args.tail:] if args.tail else rows
    pending = [r for r in rows if not r["in_src"]]
    nxt = pending[-1] if pending else None

    if args.json:
        print(json.dumps({"module": mod, "asm_count": len(rows),
                          "pending_count": len(pending),
                          "next": nxt, "tail": tail}, indent=1))
        return 0

    print(f"=== {mod}: {len(rows)} fungsi di asm, {len(pending)} belum di src ===")
    print(f"{'idx':>4} {'fungsi':<18} {'status':<9} {'src':<4} {'ref':>5} catatan")
    for r in tail:
        note = ".byte ekor (SKIP permanen?)" if r["byte_tail"] else ""
        print(f"{r['index']:>4} {r['func']:<18} {str(r['status']):<9} "
              f"{'ya' if r['in_src'] else '-':<4} {str(r['ref_len'] or ''):>5} {note}")
    if nxt:
        print(f"\nNEXT (ekor berikut yang bisa dicabut): {nxt['func']} "
              f"[{nxt['status']}]")
        if nxt["byte_tail"]:
            print("  PERINGATAN: blok berakhir .byte -> kemungkinan SKIP permanen.")
        elif nxt["status"] not in ("promoted", "matched"):
            print(f"  Terblokir: status {nxt['status']} (harus MATCH dulu).")
    else:
        print("\nSemua fungsi sudah di src.")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
