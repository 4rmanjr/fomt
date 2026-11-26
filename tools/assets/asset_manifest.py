#!/usr/bin/env python3
"""asset_manifest.py — indeks aset source: hash, status, encoder di satu tempat.

Membaca metadata per-aset di `assets/gfx/{fonts,maps,palettes,sprites,streams,tables}/*.json`,
menjalankan encoder
yang dideklarasikan, lalu menulis `assets/manifest.json`:

```json
{"assets": [{"id", "symbol", "kind", "semantics", "status", "rom",
 "source", "encoder"}]}
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
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
ASSETS = REPO / "assets"
FONT_DIR = ASSETS / "gfx" / "fonts"
PALETTE_DIR = ASSETS / "gfx" / "palettes"
SPRITE_DIR = ASSETS / "gfx" / "sprites"
TILE_DIR = ASSETS / "gfx" / "tiles"
MAP_DIR = ASSETS / "gfx" / "maps"
TABLE_DIR = ASSETS / "gfx" / "tables"
STREAM_DIR = ASSETS / "gfx" / "streams"
# Direktori metadata aset yang dipindai. Berkas tanpa `rom`/`kind` dilewati,
# jadi indeks status seperti `fonts/palettes.json` tidak ikut.
ASSET_DIRS = (FONT_DIR, MAP_DIR, PALETTE_DIR, SPRITE_DIR, TILE_DIR, TABLE_DIR,
              STREAM_DIR)
MANIFEST = ASSETS / "manifest.json"
ROM = REPO / "baserom.gba"
TOOLS_DIR = Path(__file__).resolve().parent

# kind metadata per-aset -> modul encoder yang mengubah source jadi byte ROM.
ENCODERS = {
    "tiles4bpp": "tile4bpp.py",
    "font_container": "font_container.py",
    "glyph_font": "glyph_font.py",
    "glyph_index": "glyph_index.py",
    "palette": "pal2gba.py",
    "sprite": "sprite2gba.py",
    "tilemap": "map2bin.py",
    "tilemap_bank": "tilemap_bank.py",
    "compressed_bank": "compressed_bank.py",
    "stream_bank": "stream_bank.py",
    "table": "table.py",
}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


BUILD_ASSETS = REPO / "build" / "assets"
SCRIPTS = REPO / "tools" / "scripts"
# Modul bersama yang memengaruhi output encoder (selain tool per aset).
SHARED_ENCODERS = {
    "compressed_bank.py": (TOOLS_DIR / "lz70.py", SCRIPTS / "decompress.py",
                           SCRIPTS / "asset_inventory.py"),
    "stream_bank.py": (TOOLS_DIR / "lz70.py", SCRIPTS / "decompress.py"),
    "font_container.py": (TOOLS_DIR / "tile4bpp.py",),
}


def _source_path(meta_path, rel):
    path = Path(rel)
    if path.is_absolute():
        return path
    beside = meta_path.parent / path
    return beside if beside.exists() else REPO / path


def built_bin_matches(meta_path, meta, expected):
    """True bila bin build masih baru dan byte-nya sama dengan `expected`.

    `meta` cukup punya `symbol`, `encoder.tool`, dan `source` (json/png/pal).
    Dipakai `asset_manifest.py` dan `asset_verify.py` supaya encode ulang
    container besar tidak terjadi berkali-kali dalam satu gate.
    """
    meta_path = Path(meta_path)
    tool = meta["encoder"]["tool"]
    paths = [meta_path, TOOLS_DIR / tool, *SHARED_ENCODERS.get(tool, ())]
    for key in ("png", "pal"):
        rel = meta.get("source", {}).get(key)
        if rel:
            paths.append(_source_path(meta_path, rel))
    for stream in meta.get("streams") or ():
        if stream.get("bin"):
            paths.append(_source_path(meta_path, stream["bin"]))
    newest = max((p.stat().st_mtime_ns for p in paths if p.exists()),
                 default=0)
    path = BUILD_ASSETS / f"{meta.get('symbol', '')}.bin"
    try:
        if path.stat().st_mtime_ns < newest:
            return False
        data = path.read_bytes()
    except OSError:
        return False
    return len(data) == len(expected) and data == expected


def load_encoder(kind):
    name = ENCODERS.get(kind)
    if name is None:
        raise SystemExit(f"kind {kind!r} belum punya encoder terdaftar")
    spec = importlib.util.spec_from_file_location(
        name[:-3], TOOLS_DIR / name)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


SEMANTICS = ("proven", "unidentified")


def check_semantics(ident, semantics, symbol, directory):
    """Aturan id §6: semantik, atau pengecualian eksplisit untuk placeholder.

    - `unidentified`: id wajib placeholder kanonik `<directory>/gunk_<alamat>`
      yang diturunkan dari simbol + lokasi berkas, jadi tidak bisa dikarang.
    - `proven`: id wajib nama semantik; id yang masih memuat alamat ROM ditolak.
    """
    if semantics not in SEMANTICS:
        raise SystemExit(f"field semantics wajib salah satu {SEMANTICS}, "
                         f"bukan {semantics!r}")
    suffix = symbol[len("gUnk_"):].lower() if symbol.startswith("gUnk_") else None
    derived = f"{directory}/gunk_{suffix}" if suffix else None
    has_address = re.search(r"(?:^|/)g?unk_[0-9a-f]{6,8}$", ident) is not None
    if semantics == "unidentified":
        if derived is None or ident != derived:
            raise SystemExit(
                f"semantics unidentified wajib id placeholder {derived!r} "
                f"(simbol + lokasi berkas), bukan {ident!r}")
    elif has_address or ident == derived:
        raise SystemExit(
            f"semantics proven tapi id {ident!r} masih memuat alamat ROM; "
            "ganti ke nama semantik atau tandai semantics=unidentified")
    return semantics


def build_entry(meta_path, rom):
    meta = json.loads(meta_path.read_text())
    kind = meta.get("kind")
    if kind not in ENCODERS:
        raise SystemExit(f"{meta_path}: kind {kind!r} belum terdaftar")
    symbol = meta.get("symbol")
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(meta["rom"]["size"])
    declared = meta["rom"]["sha256"]
    original = rom[offset:offset + size]
    if len(original) != size:
        raise SystemExit(
            f"{meta_path}: slice ROM {len(original)} B, metadata bilang {size} B")
    encoded = None
    if built_bin_matches(meta_path, meta, original):
        actual = sha256(original)
    else:
        encoded = load_encoder(kind).encode_source(meta_path)
        actual = sha256(encoded)
    if actual != declared or (encoded is not None and encoded != original):
        raise SystemExit(
            f"{meta_path}: gate hash MERAH (encoded {actual}, "
            f"metadata {declared}, byte ROM "
            f"{'sama' if (encoded or original) == original else 'beda'})")
    status = meta.get("status")
    if status != "rom-exact":
        raise SystemExit(
            f"{meta_path}: status {status!r}; hanya aset rom-exact masuk manifest")
    source_dir = meta_path.parent.relative_to(REPO)
    ident = meta.get("id", str(source_dir / meta_path.stem))
    directory = str(meta_path.parent.relative_to(REPO / "assets"))
    semantics = check_semantics(ident, meta.get("semantics"), symbol, directory)
    entry = {
        "id": ident,
        "symbol": symbol,
        "kind": kind,
        "semantics": semantics,
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
    if meta.get("opaque"):
        raise SystemExit(
            f"{meta_path}: 'opaque' sudah tidak dipakai; ubah ke 'padding' "
            "dengan kind+reason+evidence")
    if meta.get("padding"):
        entry["padding"] = meta["padding"]
    if meta.get("tile_animations"):
        entry["tile_animations"] = meta["tile_animations"]
    if meta.get("payload_segments"):
        entry["payload_segments"] = meta["payload_segments"]
    return entry


PARKED_STATUSES = ("decoded-exact", "header-only", "opaque", "partial")


def build(asset_dirs=ASSET_DIRS, rom_path=ROM):
    """-> isi manifest; metadata non-rom-exact diparkir, bukan dihitung."""
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
            status = meta.get("status")
            if status in PARKED_STATUSES:
                continue
            if status != "rom-exact":
                raise SystemExit(
                    f"{path}: status {status!r} tidak dikenal; pakai "
                    f"rom-exact atau salah satu {PARKED_STATUSES}")
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
