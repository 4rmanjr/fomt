#!/usr/bin/env python3
"""tail_chain.py — urutan ekor modul tail-only + status migrasi.

Modul tail-only (hardware.s, code_actor_0809BFE8.s, code_linkonce.s) hanya
boleh mencabut fungsi TERAKHIR di asm; fungsi MATCH di tengah tidak bisa
pindah sebelum penerusnya pindah. Tool ini mencetak urutan ekor, status
state, apakah sudah ada di src, dan siapa yang memblokir.

Blok yang `ref_len`-nya melompati lebih dari satu prolog fungsi
(`push {…, lr}` beruntun, khas blob `.byte` berisi dua fungsi atau lebih)
ditandai MULTI-FUNGSI dan tidak direkomendasikan sebagai NEXT — judge
terhadap blob seperti itu mustahil MATCH dari satu fungsi C.

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
ROM_BASE = 0x08000000


def load_rom():
    # Dokumen harus reproducible dari checkout bersih: `fomt.gba` adalah
    # artefak build yang tidak di-track, sedangkan `baserom.gba` adalah
    # referensi tracked yang byte-nya sama setelah gate build hijau.
    for name in ("baserom.gba", "fomt.gba"):
        rom = REPO / name
        if rom.exists():
            return rom.read_bytes()
    return None


def count_prologues(rom, addr, ref_len):
    """Hitung `push {…, lr}` (0xB5xx) di dalam rentang ref blok.

    Lebih dari satu prolog = ref_len melompati batas fungsi (blob `.byte`
    berisi beberapa fungsi). None bila data tak tersedia.
    """
    if rom is None or not isinstance(addr, int) or not isinstance(ref_len, int):
        return None
    start = addr - ROM_BASE
    if start < 0 or ref_len < 2 or start + ref_len > len(rom):
        return None
    n = 0
    for off in range(0, ref_len - 1, 2):
        half = rom[start + off] | (rom[start + off + 1] << 8)
        if (half & 0xFF00) == 0xB500:
            n += 1
    return n


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

    rom = load_rom()
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
            "addr": v.get("addr"),
            "prologues": count_prologues(rom, v.get("addr"), v.get("ref_len")),
            "multi_func": bool((count_prologues(rom, v.get("addr"),
                                                v.get("ref_len")) or 0) > 1),
        })

    tail = rows[-args.tail:] if args.tail else rows
    pending = [r for r in rows if not r["in_src"]]
    nxt = pending[-1] if pending else None
    next_ok = True
    next_reason = None
    if nxt and nxt["multi_func"]:
        next_ok = False
        next_reason = (f"blok ref_len {nxt['ref_len']}B memuat "
                       f"{nxt['prologues']} prolog fungsi (blob multi-fungsi)")

    if args.json:
        print(json.dumps({"module": mod, "asm_count": len(rows),
                          "pending_count": len(pending), "next": nxt,
                          "next_ok": next_ok, "next_reason": next_reason,
                          "blobs": [r["func"] for r in rows if r["multi_func"]],
                          "tail": tail}, indent=1))
        return 0

    print(f"=== {mod}: {len(rows)} fungsi di asm, {len(pending)} belum di src ===")
    print(f"{'idx':>4} {'fungsi':<18} {'status':<9} {'src':<4} {'ref':>5} catatan")
    for r in tail:
        note = ".byte ekor (SKIP permanen?)" if r["byte_tail"] else ""
        if r["multi_func"]:
            note = (f"MULTI-FUNGSI ({r['prologues']} prolog) — bukan target "
                    "judge; butuh simbolisasi manual")
        print(f"{r['index']:>4} {r['func']:<18} {str(r['status']):<9} "
              f"{'ya' if r['in_src'] else '-':<4} {str(r['ref_len'] or ''):>5} {note}")
    if nxt and not next_ok:
        print(f"\nBUNTU: {nxt['func']} [{nxt['status']}] — {next_reason}")
        print("  Tidak direkomendasikan sebagai NEXT: satu fungsi C tak mungkin")
        print("  menutup beberapa fungsi sekaligus. Pecah bloknya dulu di asm")
        print("  (`thumb_func_start` per fungsi; byte ROM tidak berubah).")
    elif nxt:
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
