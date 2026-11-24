#!/usr/bin/env python3
"""asset_manifest.py — indeks aset source: hash, status, encoder di satu tempat.

Membaca metadata per-aset di `assets/gfx/fonts/*.json`, menjalankan encoder
yang dideklarasikan, lalu menulis `assets/manifest.json`:

```json
{"assets": [{"id", "symbol", "kind", "status", "rom", "source", "encoder"}]}
```

Sebelum menulis, setiap aset digerbang: byte + SHA-256 hasil encoder harus sama
dengan slice `baserom.gba[offset:offset+size]` dan dengan `rom.sha256` di
metadata per-aset; status wajib `rom-exact`. Aset yang gate-nya belum HIJAU
tidak boleh masuk manifest — itu menjaga `status` tetap jujur.

  python3 tools/assets/asset_manifest.py            # tulis assets/manifest.json
  python3 tools/assets/asset_manifest.py --check    # exit 1 bila manifest basi

Tidak menjalankan build dan tidak menyentuh `asm/data/*.s`.
"""
import argparse
import hashlib
import importlib.util
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
ASSETS = REPO / "assets"
FONT_DIR = ASSETS / "gfx" / "fonts"
PALETTE_DIR = ASSETS / "gfx" / "palettes"
SPRITE_DIR = ASSETS / "gfx" / "sprites"
# Direktori metadata aset yang dipindai. Berkas tanpa `rom`/`kind` dilewati,
# jadi indeks status seperti `fonts/palettes.json` tidak ikut.
ASSET_DIRS = (FONT_DIR, PALETTE_DIR, SPRITE_DIR)
MANIFEST = ASSETS / "manifest.json"
ROM = REPO / "baserom.gba"
TOOLS_DIR = Path(__file__).resolve().parent

# kind metadata per-aset -> modul encoder yang mengubah source jadi byte ROM.
ENCODERS = {
    "tiles4bpp": "tile4bpp.py",
    "font_container": "font_container.py",
    "palette": "pal2gba.py",
    "sprite": "sprite2gba.py",
}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def load_encoder(kind):
    name = ENCODERS.get(kind)
    if name is None:
        raise SystemExit(f"kind {kind!r} belum punya encoder terdaftar")
    spec = importlib.util.spec_from_file_location(
        name[:-3], TOOLS_DIR / name)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def build_entry(meta_path, rom):
    meta = json.loads(meta_path.read_text())
    kind = meta.get("kind")
    if kind not in ENCODERS:
        raise SystemExit(f"{meta_path}: kind {kind!r} belum terdaftar")
    symbol = meta.get("symbol")
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(meta["rom"]["size"])
    declared = meta["rom"]["sha256"]
    encoded = load_encoder(kind).encode_source(meta_path)
    actual = sha256(encoded)
    original = rom[offset:offset + size]
    if len(original) != size:
        raise SystemExit(
            f"{meta_path}: slice ROM {len(original)} B, metadata bilang {size} B")
    if actual != declared or encoded != original:
        raise SystemExit(
            f"{meta_path}: gate hash MERAH (encoded {actual}, "
            f"metadata {declared}, byte ROM {'sama' if encoded == original else 'beda'})")
    status = meta.get("status")
    if status != "rom-exact":
        raise SystemExit(
            f"{meta_path}: status {status!r}; hanya aset rom-exact masuk manifest")
    source_dir = meta_path.parent.relative_to(REPO)
    entry = {
        "id": meta.get("id", str(source_dir / meta_path.stem)),
        "symbol": symbol,
        "kind": kind,
        "status": status,
        "rom": {
            "offset": f"0x{offset:X}",
            "size": size,
            "sha256": declared,
        },
        "source": dict(
            {"json": str(meta_path.relative_to(REPO))},
            **{k: str(source_dir / meta["source"][k])
               for k in ("png", "pal") if meta["source"].get(k)}),
        "encoder": {
            "tool": meta["encoder"]["tool"],
            "version": meta["encoder"]["version"],
        },
    }
    if meta.get("evidence"):
        entry["evidence"] = meta["evidence"]
    return entry


def build(asset_dirs=ASSET_DIRS, rom_path=ROM):
    """-> isi manifest; SystemExit bila ada aset yang belum rom-exact."""
    rom_path = Path(rom_path)
    if not rom_path.exists():
        raise SystemExit(f"{rom_path}: ROM referensi tidak ada")
    rom = rom_path.read_bytes()
    entries = []
    for directory in asset_dirs:
        for path in sorted(Path(directory).glob("*.json")):
            meta = json.loads(path.read_text())
            # Lewati berkas indeks/status yang bukan metadata aset (tanpa
            # rom/kind), mis. `palettes.json` dari font_palettes.py.
            if "rom" not in meta or "kind" not in meta:
                continue
            entries.append(build_entry(path, rom))
    if not entries:
        raise SystemExit(f"{asset_dirs}: tidak ada metadata aset")
    return {"assets": entries}


def render(manifest):
    return json.dumps(manifest, indent=1) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila assets/manifest.json basi")
    ap.add_argument("--rom", default=str(ROM))
    args = ap.parse_args(argv)
    try:
        text = render(build(rom_path=args.rom))
    except SystemExit as e:
        print(f"MASALAH: {e}", file=sys.stderr)
        return 1
    if args.check:
        if not MANIFEST.exists():
            print(f"MASALAH: {MANIFEST.relative_to(REPO)} tidak ada",
                  file=sys.stderr)
            return 1
        if MANIFEST.read_text() != text:
            print(f"BASI: {MANIFEST.relative_to(REPO)} — jalankan "
                  "python3 tools/assets/asset_manifest.py", file=sys.stderr)
            return 1
        print(f"manifest aset sinkron ({len(json.loads(text)['assets'])} aset)")
        return 0
    MANIFEST.write_text(text)
    print(f"{MANIFEST.relative_to(REPO)}: "
          f"{len(json.loads(text)['assets'])} aset rom-exact")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
