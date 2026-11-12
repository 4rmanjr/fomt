#!/usr/bin/env python3
"""Deteksi fungsi yang BENAR-BENAR sudah pindah ke `src/`.

Sumber kebenaran: marker `// DECOMP-MATCHED <func>` yang disisipkan
`decomp/migrate.py` saat blok masuk ke `src/<stem>.cc`.

Status state `promoted` saja tidak cukup untuk mengukur kemajuan ROM: promote
ke `decomp/promoted/<stem>.cc` memakai status yang sama walau tidak satu byte
pun pindah dari `.s` (mis. modul tail-only yang masih punya penerus). Karena
itu `fomt status` dan `plan_stats.py` memecah angka `berhasil` menjadi
**src** (sudah di `src/`, byte ROM berubah) dan **promote-only** (baru
staging).
"""
from __future__ import annotations

import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parents[1]
SRC = ROOT / "src"
_MARKER = re.compile(r"//\s*DECOMP-MATCHED\s+(func_[0-9A-Fa-f]+)\b")


def migrated_names(src_dir: pathlib.Path | None = None) -> set[str]:
    """Nama fungsi yang punya marker `DECOMP-MATCHED` di `src/` (semua varian)."""
    names: set[str] = set()
    base = src_dir or SRC
    if not base.is_dir():
        return names
    for path in sorted(base.glob("*.c*")):
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        names.update(_MARKER.findall(text))
    return names


if __name__ == "__main__":
    found = migrated_names()
    print(f"fungsi bermarker di src/: {len(found)}")
