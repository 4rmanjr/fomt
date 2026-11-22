#!/usr/bin/env python3
"""wall_registry.py - rekap fungsi "parkir" dari note shard.

Fungsi yang diparkir menyimpan alasannya di `note` shard
(`decomp/state/modules/<stem>.json`). Tool ini mengumpulkannya supaya tidak
ada fungsi yang dicoba ulang tanpa ide baru. Lihat
`docs/RENCANA-TRANSLASI.md` Fase 0.

Dua kelas keluaran: `aktif` (wall yang masih bisa dikejar dengan ide baru)
dan `PERMANEN` (note menyatakan parkirnya permanen: ekor data asing, grup
gabungan, fragmen epilog bersama). Yang permanen dipisah supaya tidak terlihat
setara dengan target yang masih hidup.

Kelas `permanen` hanya diambil dari **bukti di note** (frasa `SKIP permanen`,
`SKIP-permanen`, `SKIP-migrasi permanen`, atau sinonim `tidak bisa dimigrasi`).
Note yang cuma *menyebut* gejala permanen (`data asing`, `grup gabungan`,
`epilog bersama`) **tidak** dipindah kelas — note seperti itu hanya ditandai
`tanda` dan dilaporkan sebagai peringatan "bertanda permanen" supaya tidak ada
parkir permanen yang lolos tanpa frasa baku. Peringatan tambahan muncul bila
`--kind permanen` kosong padahal `migrate_audit.py` masih melaporkan blok SKIP
permanen.

Usage:
  python3 tools/scripts/wall_registry.py
  python3 tools/scripts/wall_registry.py --module code_0803EE94
  python3 tools/scripts/wall_registry.py --grep regalloc --full
  python3 tools/scripts/wall_registry.py --kind permanen
  python3 tools/scripts/wall_registry.py --json
"""
import argparse
import json
import pathlib
import re
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"

PARKIR = re.compile(r"parkir", re.I)
ATTEMPT = re.compile(r"(\d)\s*/\s*5|(\d+)\s+percobaan|cap\s*5", re.I)
BRACKET = re.compile(r"\[([^\]]*parkir[^\]]*)\]", re.I | re.S)
PREFIX = re.compile(r"^(?:parkir(?:\s+sesi)?\s*[:\-]?\s*)+", re.I)
ATT_PREFIX = re.compile(r"^\d\s*/\s*5\s*[:\-]?\s*")
# Bukti permanen (boleh mengubah kelas). "SKIP-migrasi permanen: ..." adalah
# bentuk yang dipakai note migrasi, dan tidak tertangkap pola lama.
PERMANEN = re.compile(r"skip[\s\-]*(?:migrasi[\s\-]+)?permanen", re.I)
PERMANEN_SINONIM = re.compile(
    r"(?:tidak|tak|tdk)\s+(?:bisa|dapat)\s+dimigrasi"
    r"|tidak\s+mungkin\s+dimigrasi", re.I)
# Gejala permanen: TIDAK boleh mengubah kelas, hanya memicu peringatan.
PERMANEN_LEMAH = re.compile(
    r"ekor data asing|data asing|grup gabungan|tak-split|epilog\s+bersama", re.I)


def reason(note: str) -> str:
    """Ambil segmen terakhir yang menyebut parkir; fallback: catatan penuh."""
    hits = BRACKET.findall(note)
    text = hits[-1] if hits else note
    text = re.sub(r"\s+", " ", text).strip()
    return ATT_PREFIX.sub("", PREFIX.sub("", text)).strip()


def kind_of(note: str) -> str:
    """Kelas permanen hanya bila note menyatakannya (bukan sekadar gejala)."""
    if PERMANEN.search(note) or PERMANEN_SINONIM.search(note):
        return "permanen"
    return "aktif"


def gejala(note: str) -> str:
    """Frasa gejala permanen di note (kosong bila tidak ada)."""
    m = PERMANEN_LEMAH.search(note)
    return m.group(0).lower() if m else ""


def audit_skip_permanen():
    """Jumlah blok SKIP permanen menurut `migrate_audit.py` (best-effort)."""
    try:
        run = subprocess.run(
            [sys.executable, str(ROOT / "tools" / "scripts" / "migrate_audit.py"),
             "--json"], capture_output=True, text=True, timeout=180)
        counts = (json.loads(run.stdout).get("counts") or {})
    except (OSError, ValueError, subprocess.SubprocessError):
        return None
    return sum(n for k, n in counts.items() if "permanen" in k.lower())


def permanen_state() -> int:
    """Jumlah note di semua shard yang menyatakan permanen (tanpa filter)."""
    total = 0
    for path in sorted(STATE.glob("*.json")):
        try:
            shard = json.loads(path.read_text())
        except (OSError, ValueError):
            continue
        for v in shard.values():
            if isinstance(v, dict) and kind_of(v.get("note") or "") == "permanen":
                total += 1
    return total


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--module", help="hanya modul ini (nama stem)")
    ap.add_argument("--grep", help="saring alasan (case-insensitive)")
    ap.add_argument("--kind", choices=("aktif", "permanen"),
                    help="hanya satu kelas: aktif (bisa dikejar) / permanen")
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
            kind = kind_of(note)
            # Parkir aktif dikenali dari kata "parkir"; parkir permanen boleh
            # tidak memakai kata itu (mis. "SKIP-migrasi permanen: ...").
            if not (PARKIR.search(note) or kind == "permanen"):
                continue
            text = reason(note)
            tanda = gejala(note)
            if args.kind and kind != args.kind:
                continue
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
                "kind": kind,
                "tanda": tanda,
                "reason": text,
            })

    # aktif dulu (yang masih bisa dikejar), permanen di bawahnya
    rows.sort(key=lambda r: (r["kind"] != "aktif", r["module"], r["func"]))
    shown = rows[:args.limit] if args.limit else rows
    aktif = [r for r in rows if r["kind"] == "aktif"]
    permanen = [r for r in rows if r["kind"] == "permanen"]
    # Aktif yang note-nya menyebut gejala permanen: jangan dipindah kelas
    # (tanpa bukti eksplisit), tapi jangan juga didiamkan.
    suspek = [r for r in aktif if r["tanda"]]

    if args.kind == "permanen" and not rows:
        print("[PERINGATAN] --kind permanen kosong"
              + (f" (filter: module={args.module!r}, grep={args.grep!r})" if (args.module or args.grep) else "")
              + ".", file=sys.stderr)
        n_state = permanen_state()
        if n_state:
            print(f"  state shard punya {n_state} note bertanda permanen — "
                  "cek filter/--grep, mungkin hanya tersaring.", file=sys.stderr)
        n_audit = audit_skip_permanen()
        if n_audit:
            print(f"  migrate_audit.py masih melaporkan {n_audit} blok SKIP permanen "
                  "(grup gabungan / data asing ekor).", file=sys.stderr)
        if not n_state and not n_audit:
            print("  tidak ada bukti permanen di state maupun audit; "
                  "periksa apakah note parkir memakai frasa lain.", file=sys.stderr)
    if suspek:
        print(f"[PERINGATAN] {len(suspek)} wall 'aktif' menyebut gejala permanen "
              "(data asing/grup gabungan/epilog bersama) tanpa frasa baku; "
              "cek note-nya sebelum dijadikan target.", file=sys.stderr)

    if args.json:
        print(json.dumps({"walls": shown, "total": len(rows),
                          "aktif": len(aktif), "permanen": len(permanen),
                          "suspek": len(suspek)},
                         indent=1))
        return 0

    def emit(group, header):
        if not group:
            return
        print(header)
        for r in group:
            text = r["reason"] if args.full or not args.width else r["reason"][:args.width]
            print(f"  {r['module']:28s} {r['func']:22s} {r['ref_len']:4d}B "
                  f"{r['attempts']:>4s}  {text}")
        print()

    emit([r for r in shown if r["kind"] == "aktif"],
         "== WALL AKTIF (masih bisa dikejar dengan ide baru) ==")
    emit([r for r in shown if r["kind"] == "permanen"],
         "== SKIP PERMANEN (note menyatakan permanen; jangan dicoba ulang) ==")
    emit([r for r in shown if r["kind"] == "aktif" and r["tanda"]],
         "== AKTIF TAPI BERTANDA PERMANEN (kelas tidak diubah; cek note dulu) ==")
    modules = len({r["module"] for r in rows})
    tail = f", bertanda permanen {len(suspek)}" if suspek else ""
    print(f"total: {len(rows)} fungsi parkir di {modules} modul "
          f"(aktif {len(aktif)}, permanen {len(permanen)}{tail})")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
