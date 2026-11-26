#!/usr/bin/env python3
"""gfx_rules.py — hasilkan `gfx_rules.mk` dari metadata aset (pola graphics_file_rules).

Pret/pokeemerald menulis aturan konversi graphics di `graphics_file_rules.mk`;
modelnya diadopsi di sini, tetapi daftarnya **dihasilkan** dari metadata
`assets/gfx/**/*.json` supaya menambah aset tidak perlu menyunting Makefile:
cukup letakkan PNG/palet + JSON, jalankan tool ini.

Yang dihasilkan:

- variabel `ASSET_BINS` berisi `build/assets/<symbol>.bin` untuk setiap aset
  berstatus `rom-exact`;
- satu aturan per aset: target bergantung pada JSON, PNG, palet (bila ada), dan
  berkas encoder, lalu memanggil `encoder encode --json ... --out ...`.

Aset yang belum `rom-exact` sengaja tidak masuk aturan: `.incbin`-nya tetap
menunjuk ROM, jadi build tidak bisa memakai byte yang belum lolos gate.

  python3 tools/assets/gfx_rules.py            # tulis gfx_rules.mk
  python3 tools/assets/gfx_rules.py --check    # exit 1 bila basi
"""
import argparse
import importlib.util
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = Path(__file__).resolve().parent
OUT = REPO / "gfx_rules.mk"


def _asset_manifest():
    spec = importlib.util.spec_from_file_location(
        "asset_manifest", TOOLS / "asset_manifest.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def collect(asset_dirs=None):
    """-> daftar dict {symbol, json, deps, tool} untuk aset rom-exact."""
    manifest = _asset_manifest()
    rows = []
    for directory in (asset_dirs or manifest.ASSET_DIRS):
        for path in sorted(Path(directory).glob("*.json")):
            meta = json.loads(path.read_text())
            if not meta.get("rom") or not meta.get("symbol"):
                continue
            if meta.get("status") != "rom-exact":
                continue
            encoder = meta.get("encoder", {}).get("tool")
            if encoder not in manifest.ENCODERS.values():
                raise SystemExit(f"{path}: encoder {encoder!r} tidak terdaftar")
            source_dir = path.parent
            deps = [path]
            for key in ("png", "pal"):
                ref = meta["source"].get(key)
                if ref:
                    deps.append(source_dir / ref)
            for stream in meta.get("streams") or ():
                if stream.get("bin"):
                    deps.append(REPO / stream["bin"])
            deps.append(TOOLS / encoder)
            rows.append({
                "symbol": meta["symbol"],
                "json": path.relative_to(REPO).as_posix(),
                "deps": [p.relative_to(REPO).as_posix() for p in deps],
                "tool": encoder,
            })
    seen = set()
    for row in rows:
        if row["symbol"] in seen:
            raise SystemExit(f"{row['symbol']}: dua aset memakai symbol sama")
        seen.add(row["symbol"])
    return rows


def render(rows):
    out = ["# Dihasilkan `tools/assets/gfx_rules.py` — jangan disunting tangan.",
           "# Menambah aset: taruh PNG/palet + JSON di assets/gfx/**, jalankan",
           "# tool ini. Hanya aset `rom-exact` yang punya aturan build.",
           "",
           "ASSET_BINS := \\"]
    bins = [f"$(BUILD_DIR)/assets/{row['symbol']}.bin" for row in rows]
    out.append(" \\\n".join(f"  {b}" for b in bins))
    out.append("")
    for row in rows:
        target = f"$(BUILD_DIR)/assets/{row['symbol']}.bin"
        out.append(f"{target}: \\")
        deps = [f"    {dep}" for dep in row["deps"]]
        # baris dependensi terakhir tanpa `\\`, kalau tidak recipe ikut
        # tersambung ke daftar prasyarat.
        out.append(" \\\n".join(deps))
        out.append(f"\t@echo \"ASSET $@\"")
        out.append(f"\t@python3 tools/assets/{row['tool']} encode "
                   f"--json {row['json']} --out $@")
        out.append("")
    return "\n".join(out).rstrip("\n") + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila gfx_rules.mk basi")
    args = ap.parse_args(argv)
    text = render(collect())
    if args.check:
        if not OUT.exists() or OUT.read_text() != text:
            print(f"BASI: {OUT.name} — jalankan python3 tools/assets/gfx_rules.py",
                  file=sys.stderr)
            return 1
        return 0
    OUT.write_text(text)
    count = text.count("ASSET_BINS") and text.count(".bin: \\")
    print(f"{OUT.name}: {count} aset rom-exact punya aturan build")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
