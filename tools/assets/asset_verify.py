#!/usr/bin/env python3
"""asset_verify.py — gate per-aset: schema + hash ROM + encoder + source.

Memeriksa `assets/manifest.json` terhadap `tools/assets/manifest_schema.json`,
lalu untuk setiap aset:

1. slice `baserom.gba[offset:offset+size]` punya sha256 yang sama dengan
   `rom.sha256` di manifest;
2. modul encoder yang tercatat (`encoder.tool`) benar-benar dipanggil ulang
   dari source kanonik (`source.json` -> `pal`/`png`), dan byte hasilnya sama
   dengan slice ROM (sha256 + isi);
3. setiap berkas `source` ada;
4. `.incbin "baserom.gba", <offset>, <size>` yang masih tersisa di
   `asm/data/*.s` dilaporkan sebagai catatan (Fase 0 belum mengubah build);
   dengan `--require-switched` catatan itu menjadi kegagalan.

  python3 tools/assets/asset_verify.py                  # semua aset
  python3 tools/assets/asset_verify.py --symbol gUnk_08731940
  python3 tools/assets/asset_verify.py --json
  python3 tools/assets/asset_verify.py --require-switched

Tidak menjalankan build dan tidak menulis berkas.
"""
import argparse
import hashlib
import importlib.util
import json
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "assets"
MANIFEST = REPO / "assets" / "manifest.json"
SCHEMA = TOOLS / "manifest_schema.json"
ROM = REPO / "baserom.gba"
ASM_DATA = REPO / "asm" / "data"

INCBIN = re.compile(
    r'\.incbin\s+"baserom\.gba"\s*,\s*(0x[0-9A-Fa-f]+)\s*,\s*(0x[0-9A-Fa-f]+)')

_TYPES = {"object": dict, "array": list, "string": str, "integer": int,
          "null": type(None), "boolean": bool, "number": (int, float)}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def load_module(name):
    spec = importlib.util.spec_from_file_location(name[:-3], TOOLS / name)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def validate(node, schema, path="$"):
    """Validator JSON Schema subset (type/required/properties/items/enum/
    pattern/minimum/minItems). Cukup untuk schema manifest ini."""
    errs = []
    want = schema.get("type")
    if want:
        wants = want if isinstance(want, list) else [want]
        ok = False
        for name in wants:
            py = _TYPES.get(name)
            if py and isinstance(node, py) and not (
                    name == "integer" and isinstance(node, bool)):
                ok = True
        if not ok:
            errs.append(f"{path}: tipe {type(node).__name__}, skema minta {want}")
            return errs
    if isinstance(node, dict):
        for key in schema.get("required", []):
            if key not in node:
                errs.append(f"{path}: field wajib '{key}' hilang")
        props = schema.get("properties", {})
        for key, value in node.items():
            if key in props:
                errs += validate(value, props[key], f"{path}.{key}")
    if isinstance(node, list):
        if len(node) < schema.get("minItems", 0):
            errs.append(f"{path}: {len(node)} item < minItems "
                        f"{schema['minItems']}")
        if "items" in schema:
            for i, value in enumerate(node):
                errs += validate(value, schema["items"], f"{path}[{i}]")
    if isinstance(node, str):
        if "enum" in schema and node not in schema["enum"]:
            errs.append(f"{path}: {node!r} tidak ada di enum {schema['enum']}")
        if "pattern" in schema and not re.search(schema["pattern"], node):
            errs.append(f"{path}: {node!r} tidak cocok pola "
                        f"{schema['pattern']}")
    if isinstance(node, int) and not isinstance(node, bool):
        if "minimum" in schema and node < schema["minimum"]:
            errs.append(f"{path}: {node} < minimum {schema['minimum']}")
    return errs


def incbin_offsets():
    """offset ROM -> daftar (berkas, baris) yang masih `.incbin baserom`."""
    found = {}
    for path in sorted(ASM_DATA.glob("*.s")):
        for i, line in enumerate(path.read_text().splitlines(), 1):
            m = INCBIN.search(line)
            if m:
                found.setdefault(int(m.group(1), 16), []).append(
                    (path.name, i, int(m.group(2), 16)))
    return found


def check_asset(asset, rom, incbins):
    """-> (masalah: list[str], catatan: list[str])."""
    problems, notes = [], []
    symbol = asset.get("symbol", "?")
    offset = int(str(asset["rom"]["offset"]), 0)
    size = int(asset["rom"]["size"])
    declared = asset["rom"]["sha256"]

    slice_ = rom[offset:offset + size]
    if len(slice_) != size:
        problems.append(f"slice ROM {len(slice_)} B, manifest bilang {size} B "
                        f"(offset 0x{offset:X})")
    elif sha256(slice_) != declared:
        problems.append(f"sha256 slice ROM {sha256(slice_)[:12]}… != "
                        f"manifest {declared[:12]}…")

    source = asset["source"]
    meta_path = REPO / source["json"]
    if not meta_path.exists():
        problems.append(f"source.json tidak ada: {source['json']}")
    for key in ("png", "pal"):
        if source.get(key):
            path = REPO / source[key]
            if not path.exists():
                problems.append(f"source.{key} tidak ada: {source[key]}")

    tool = asset["encoder"]["tool"]
    if not (TOOLS / tool).exists():
        problems.append(f"encoder tidak ada: tools/assets/{tool}")
    elif meta_path.exists() and asset["status"] == "rom-exact":
        try:
            encoded = load_module(tool).encode_source(meta_path)
        except SystemExit as e:
            problems.append(f"encoder gagal: {e}")
            encoded = None
        except Exception as e:  # noqa: BLE001 - laporkan semua kegagalan tool
            problems.append(f"encoder error: {type(e).__name__}: {e}")
            encoded = None
        if encoded is not None:
            if len(encoded) != size:
                problems.append(f"hasil encoder {len(encoded)} B != {size} B")
            if sha256(encoded) != declared:
                problems.append(f"sha256 encoder {sha256(encoded)[:12]}… != "
                                f"manifest {declared[:12]}…")
            if len(slice_) == size and encoded != slice_:
                problems.append("byte encoder != byte ROM walau hash sama")

    hit = incbins.get(offset)
    if hit and asset["status"] == "rom-exact":
        where = ", ".join(f"{f}:{n}" for f, n, _sz in hit)
        notes.append(f"masih .incbin baserom ({where}) — penggantian di Fase 1")
    return problems, notes


def verify(manifest_path=MANIFEST, schema_path=SCHEMA, rom_path=ROM,
           symbol=None, require_switched=False):
    """-> (masalah, catatan, ringkasan). Tidak mencetak apa pun."""
    if not manifest_path.exists():
        return [f"{manifest_path}: manifest tidak ada"], [], {}
    if not schema_path.exists():
        return [f"{schema_path}: schema tidak ada"], [], {}
    manifest = json.loads(Path(manifest_path).read_text())
    schema = json.loads(Path(schema_path).read_text())
    problems = [f"schema: {e}" for e in validate(manifest, schema)]
    assets = manifest.get("assets", [])
    if symbol:
        assets = [a for a in assets if a.get("symbol") == symbol]
        if not assets:
            problems.append(f"symbol {symbol} tidak ada di manifest")
    rom_path = Path(rom_path)
    if not rom_path.exists():
        problems.append(f"{rom_path}: ROM referensi tidak ada")
        return problems, [], {}
    rom = rom_path.read_bytes()
    incbins = incbin_offsets()

    seen_symbol, seen_offset = {}, {}
    notes = []
    rows = []
    for asset in assets:
        if not isinstance(asset, dict):
            continue
        key = asset.get("symbol")
        if key in seen_symbol:
            problems.append(f"{key}: symbol duplikat di manifest")
        seen_symbol[key] = True
        off = asset.get("rom", {}).get("offset")
        if off in seen_offset:
            problems.append(f"{key}: offset {off} juga dipakai "
                            f"{seen_offset[off]}")
        seen_offset[off] = key
        found, asset_notes = check_asset(asset, rom, incbins)
        if require_switched:
            found += [n for n in asset_notes if n.startswith("masih .incbin")]
        problems += [f"{key}: {p}" for p in found]
        notes += [f"{key}: {n}" for n in asset_notes]
        rows.append({"symbol": key, "status": asset.get("status"),
                     "ok": not found, "problems": found,
                     "notes": asset_notes})
    summary = {"assets": len(assets),
               "ok": sum(1 for r in rows if r["ok"]), "rows": rows}
    return problems, notes, summary


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--symbol", help="hanya satu simbol")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--manifest", type=Path, default=MANIFEST)
    ap.add_argument("--schema", type=Path, default=SCHEMA)
    ap.add_argument("--rom", type=Path, default=ROM)
    ap.add_argument("--require-switched", action="store_true",
                    help=".incbin baserom untuk aset rom-exact = kegagalan")
    args = ap.parse_args(argv)
    problems, notes, summary = verify(args.manifest, args.schema, args.rom,
                                      args.symbol, args.require_switched)
    if args.json:
        print(json.dumps({"problems": problems, "notes": notes,
                          "summary": summary}, indent=1))
    else:
        for row in summary.get("rows", []):
            mark = "OK" if row["ok"] else "GAGAL"
            print(f"{row['symbol']}: {mark} {row['status']}")
        for note in notes:
            print(f"  catatan: {note}")
        for problem in problems:
            print(f"MASALAH {problem}", file=sys.stderr)
        total = summary.get("assets", 0)
        ok = summary.get("ok", 0)
        print(f"aset terverifikasi: {ok}/{total} cocok")
    return 1 if problems else 0


if __name__ == "__main__":
    raise SystemExit(main())
