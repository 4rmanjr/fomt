#!/usr/bin/env python3
"""audit_sync.py — sinkronkan status decomp dengan kenyataan di src/.

Masalah: status failed di state/*.json kadang basi — fungsinya sudah
pindah ke src/ lewat jalur lain (migrasi manual, blok lama, varian
_v/_c/_migrated). Akibatnya sesi baru membuang waktu memperbaiki draf
duplikat (kasus C00C, EA98, D0644, B454, DECC).

Pakai: python3 decomp/audit_sync.py [--fix]
  Tanpa --fix: hanya laporkan (tidak ubah apa pun).
  Dengan --fix: tandai status failed-yang-sudah-di-src menjadi
  "migrated" di state/*.json (atomik per file, compare pemicu tetap jalan).

Aturan:
- Sumber kebenaran = grep `func_0x...` di src/ semua varian
  (<stem>{,_c,_v,_migrated}.{cc,c}) + ada/tidaknya di asm/ stem tsb.
- TIDAK menghapus draf/promoted/log — hanya status.
- Selaluakhiri dengan `make compare` bila --fix dipakai (diluar skrip ini).
"""
import json
import glob
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
ASM = ROOT / "asm"
STATE_DIR = ROOT / "decomp" / "state" / "modules"

FUNC_RE = re.compile(r"\bfunc_[0-9A-Fa-f]{4,8}\b")


def collect_src_funcs():
    """func -> [files] HANYA bila src memuat DEFINISInya.

    Syarat: marker `DECOMP-MATCHED <func>` (yang dipasang migrate.py
    pada setiap blok pindahan). Referensi saja (extern/call-site)
    TIDAK dihitung — contoh func_0803BCF8 hanya extern di src,
    definisinya belum pindah dan tetap butuh dikerjakan.
    """
    found = {}
    for p in sorted(SRC.glob("code_*")):
        if p.suffix not in (".cc", ".c"):
            continue
        try:
            text = p.read_text()
        except OSError:
            continue
        for m in set(FUNC_RE.findall(text)):
            if f"DECOMP-MATCHED {m}" in text:
                found.setdefault(m, []).append(p.name)
    return found


def collect_asm_funcs():
    present = set()
    for p in sorted(ASM.glob("*.s")):
        try:
            text = p.read_text()
        except OSError:
            continue
        for m in re.finditer(
            r"(?:thumb_func_start|arm_func_start|"
            r"non_word_aligned_thumb_func_start)\s+"
            r"(func_[0-9A-Fa-f]+)\b", text):
            present.add(m.group(1))
    return present


def main():
    fix = "--fix" in sys.argv[1:]
    src_funcs = collect_src_funcs()
    asm_funcs = collect_asm_funcs()
    stale = []  # (module, func, status_lama, files)
    touched = 0
    for f in sorted(STATE_DIR.glob("*.json")):
        try:
            d = json.loads(f.read_text())
        except (OSError, ValueError) as e:
            print(f"SKIP {f.name}: {e}")
            continue
        changed = False
        for func, info in d.items():
            if not isinstance(info, dict):
                continue
            st = info.get("status")
            if st != "failed":
                continue
            if func in src_funcs and func not in asm_funcs:
                stale.append((f.stem, func, st, src_funcs[func]))
                if fix:
                    info["status"] = "migrated"
                    info["note"] = (
                        (info.get("note") or "")
                        + " [audit_sync: sudah di src, asm hilang]"
                    ).strip()
                    changed = True
            elif func in src_funcs:
                stale.append((f.stem, func, st, src_funcs[func]))
                if fix:
                    info["status"] = "migrated"
                    info["note"] = (
                        (info.get("note") or "")
                        + " [audit_sync: duplikat di src]"
                    ).strip()
                    changed = True
        if changed:
            tmp = f.with_suffix(".json.tmp")
            tmp.write_text(json.dumps(d, indent=1) + "\n")
            tmp.replace(f)
            touched += 1
    if not stale:
        print("audit_sync: bersih — tak ada failed-yang-sudah-di-src.")
    else:
        print(f"audit_sync: {len(stale)} failed basi:")
        for stem, func, st, files in stale[:30]:
            print(f"  {stem} :: {func} [{st}] -> {','.join(files)}")
        if len(stale) > 30:
            print(f"  ... +{len(stale) - 30} lagi")
    if fix:
        print(f"audit_sync: {touched} state ditulis ulang (--fix).")
        print("WAJIB: jalankan `make compare` setelah ini.")
    else:
        print("audit_sync: mode lapor (pakai --fix untuk menandai).")


if __name__ == "__main__":
    main()
