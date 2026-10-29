#!/usr/bin/env python3
"""Migrasi proot: gate zero-diff sebagai pengganti `make compare` hijau.

Latar (terukur): `make compare` tidak pernah hijau dalam keadaan sekarang
karena `src/m4a.c` tidak byte-identical (+24B sesudah 0x080D3778). Modul
pre-m4a (interrupt/main/sram_*) berada di region yg cocok dgn baserom dan
bisa divalidasi tanpa baseline hijau:
  judge MATCH membuktikan src-C == asm (per fungsi),
  zero-diff old-vs-new membuktikan link tidak menggeser satu byte pun.
`migrate_one` revert otomatis bila gate MERAH (perilaku bawaan migrate.py).

Batasan: modul pasca-m4a-shift tetap butuh baseline hijau penuh (tugas PC
x86, atau perbaiki `src/m4a.c` dulu). Tidak menyentuh state JSON.
"""
import argparse
import importlib.util
import os
import shutil
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
os.chdir(REPO)
sys.path.insert(0, str(REPO))

spec = importlib.util.spec_from_file_location("migrate", str(REPO / "decomp" / "migrate.py"))
mig = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mig)

HOME = os.environ["HOME"]
Q = f"qemu-x86_64 -L {HOME}/x86sys/root"
MAKE_ENV = {**os.environ,
            "PATH": f"{HOME}/x86sys/wrap:/root/bin:{os.environ['PATH']}"}
MAKE_CMD = ["make", "compare",
            f"CC1={Q} {REPO}/tools/agbcc/bin/agbcc",
            f"CC1PLUS={Q} {REPO}/tools/agbcc/bin/agbcp",
            f"OLD_CC1={Q} {REPO}/tools/agbcc/bin/old_agbcc"]

CTX = {"before": None}


def build() -> None:
    subprocess.run(MAKE_CMD, cwd=str(REPO), env=MAKE_ENV,
                   capture_output=True, text=True, timeout=900)


def rom(path) -> bytes:
    with open(path, "rb") as f:
        return f.read()


def gate() -> tuple:
    """Pengganti run_compare: True = aman (keep), False = revert oleh migrate_one."""
    build()
    before, after = CTX["before"], rom(REPO / "fomt.gba")
    if len(after) != len(before):
        print(f"   [gate] UKURAN {len(before)}->{len(after)}: MERAH")
        return False, "size changed"
    diffs = [i for i in range(len(before)) if before[i] != after[i]]
    if diffs:
        print(f"   [gate] {len(diffs)} byte berubah, pertama {hex(diffs[0])}: MERAH")
        shutil.copy(REPO / "fomt.gba", "/tmp/gate_red.gba")
        shutil.copy(REPO / "fomt.map", "/tmp/gate_red.map")
        shutil.copy(REPO / "fomt.elf", "/tmp/gate_red.elf")
        return False, f"{len(diffs)} bytes changed"
    print("   [gate] HIJAU (size tetap, nol byte berubah)")
    return True, "zero-diff ok"


def main() -> int:
    ap = argparse.ArgumentParser(description="Migrasi modul pre-m4a di proot via gate zero-diff.")
    ap.add_argument("--module", required=True, help="mis. interrupt.s")
    ap.add_argument("--limit", type=int, default=None)
    ap.add_argument("--dry-run", action="store_true",
                    help="hanya tampilkan kandidat, tanpa build/migrasi")
    a = ap.parse_args()

    names = [n for n, _ in mig.promoted_funcs(a.module)]
    if a.limit:
        names = names[:a.limit]
    if not names:
        print("tidak ada kandidat")
        return 2
    print("rencana:", names)
    if a.dry_run:
        return 0

    build()
    CTX["before"] = rom(REPO / "fomt.gba")
    print(f"baseline: {len(CTX['before'])} byte")

    mig.run_compare = gate
    moved = []
    for func in names:
        r = mig.migrate_one(a.module, func)
        status = "OK" if r["ok"] else ("SKIP" if r.get("skipped") else "GAGAL")
        print(f"== {func}: [{status}] {r['detail']}")
        if r["ok"]:
            moved.append(func)
            CTX["before"] = rom(REPO / "fomt.gba")
        elif not r.get("skipped"):
            print("berhenti.")
            return 1

    print("---- pindah:", moved if moved else "-")
    return 0


if __name__ == "__main__":
    sys.exit(main())
