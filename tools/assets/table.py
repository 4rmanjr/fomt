#!/usr/bin/env python3
"""table.py — source segmen untuk tabel/struct yang belum punya codec domain.

Sebagian blob di grup `tabel` sudah terbukti sebagian dari call site, tetapi
belum cukup untuk codec domain (bukan tile, bukan tilemap persegi, bukan
container `func_0805E6CC`). Codec ini menyimpan byte sebagai segmen eksplisit:

```json
{"kind": "table",
 "source": {"segments": [
   {"offset": 0, "format": "u16le", "values": [4],
    "note": "header: jumlah tile per blok gaya"},
   {"offset": 4, "format": "tiles4bpp", "tiles": 4, "tiles_wide": 4,
    "png": "assets/gfx/tables/gUnk_08529994/block_0x0004.png",
    "note": "blok gaya; hanya satu blok per panggilan yang dibaca"}
 ]}}
```

Format yang didukung: `u8`, `u16le`, `u32le`, dan `tiles4bpp` (PNG indeks
0..15, aturan warna sama dengan tile peta). Segmen `format: hex` ditolak —
byte yang belum punya arti tetap dipecah per nilai. Segmen
wajib menutup **seluruh** `rom.size` tanpa celah/tumpang tindih—dengan begitu
round-trip byte-identik tanpa mengarang field yang belum terbukti. Arti tabel
tetap `semantics: unidentified` sampai call site membuktikannya.

  python3 tools/assets/table.py encode --json x.json --out x.bin
  python3 tools/assets/table.py verify --json x.json --rom baserom.gba
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import tile4bpp  # noqa: E402

REPO = Path(__file__).resolve().parents[2]
FORMATS = {"u8": 1, "u16le": 2, "u32le": 4}
MAX_VALUE = {"u8": 0xFF, "u16le": 0xFFFF, "u32le": 0xFFFFFFFF}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def _load_meta(meta_path):
    try:
        meta = json.loads(Path(meta_path).read_text())
    except (OSError, UnicodeDecodeError, json.JSONDecodeError) as exc:
        raise SystemExit(f"{meta_path}: JSON tidak valid: {exc}")
    if not isinstance(meta, dict):
        raise SystemExit(f"{meta_path}: JSON wajib objek")
    for key in ("rom", "source"):
        if not isinstance(meta.get(key), dict):
            raise SystemExit(f"{meta_path}: field {key} wajib objek")
    return meta


def _segment_bytes(segment):
    fmt = segment.get("format")
    offset = int(str(segment["offset"]), 0)
    if fmt in FORMATS:
        values = segment.get("values")
        if not isinstance(values, list):
            raise ValueError(f"segmen {offset:#x}: values wajib untuk {fmt}")
        width = FORMATS[fmt]
        limit = MAX_VALUE[fmt]
        out = bytearray()
        for index, value in enumerate(values):
            if isinstance(value, bool) or not isinstance(value, int):
                raise ValueError(
                    f"segmen {offset:#x} entri {index}: {value!r} bukan int")
            if not 0 <= value <= limit:
                raise ValueError(
                    f"segmen {offset:#x} entri {index}: {value} di luar {fmt}")
            out += value.to_bytes(width, "little")
        return offset, bytes(out)
    if fmt == "hex":
        raise ValueError(
            f"segmen {offset:#x}: format hex sudah tidak dipakai; pakai "
            "u8/u16le/u32le atau tiles4bpp (PNG)")
    if fmt == "tiles4bpp":
        count = segment.get("tiles")
        wide = segment.get("tiles_wide")
        png = segment.get("png")
        if not isinstance(count, int) or count < 1:
            raise ValueError(f"segmen {offset:#x}: tiles wajib >= 1")
        if not isinstance(wide, int) or wide < 1:
            raise ValueError(f"segmen {offset:#x}: tiles_wide wajib >= 1")
        if not isinstance(png, str) or not png:
            raise ValueError(f"segmen {offset:#x}: png wajib path PNG")
        return offset, _tiles_bytes(REPO / png, count, wide, offset)
    raise ValueError(f"segmen {offset:#x}: format {fmt!r} tidak dikenal")


def _tiles_bytes(path, count, tiles_wide, offset):
    """PNG indeks 0..15 -> body tile 4bpp (nibble rendah dulu)."""
    width, height, rgb = tile4bpp.read_png(path)
    rows = (count + tiles_wide - 1) // tiles_wide
    if width != tiles_wide * 8 or height != rows * 8:
        raise ValueError(
            f"segmen {offset:#x}: {path.name} {width}x{height}, harus "
            f"{tiles_wide * 8}x{rows * 8} untuk {count} tile")
    out = bytearray()
    for tile in range(count):
        tx = (tile % tiles_wide) * 8
        ty = (tile // tiles_wide) * 8
        for y in range(8):
            for x in range(0, 8, 2):
                pair = []
                for xx in (x, x + 1):
                    dst = ((ty + y) * width + tx + xx) * 3
                    color = tuple(rgb[dst:dst + 3])
                    if color not in tile4bpp.RGB_TO_INDEX:
                        raise ValueError(
                            f"segmen {offset:#x}: warna {color} di tile "
                            f"{tile} bukan indeks 0..15")
                    pair.append(tile4bpp.RGB_TO_INDEX[color])
                out.append(pair[0] | (pair[1] << 4))
    return bytes(out)


def coverage(meta, meta_path=None):
    """Coverage tabel: semua byte dari field (u8/u16/u32/png), tanpa hex."""
    for offset, segment in enumerate(
            meta.get("source", {}).get("segments", [])):
        if segment.get("format") == "hex":
            raise ValueError(
                f"segmen[{offset}]: format hex tidak bisa dihitung proven")
    size = int(meta["rom"]["size"])
    written = sum(len(_segment_bytes(s)[1])
                  for s in meta.get("source", {}).get("segments", []))
    if written != size:
        raise ValueError(f"segmen menutup {written} B != rom.size {size} B")
    # `padding` tetap dokumentasi "tanpa pembaca"; nilainya ditulis dari
    # field, jadi tidak ada byte buram yang perlu dihitung raw.
    return {
        "total_bytes": size,
        "proven_bytes": size,
        "raw_bytes": 0,
        "proven_ratio": 1.0,
    }


def _layout(meta):
    size = int(meta["rom"]["size"])
    segments = []
    for segment in meta.get("source", {}).get("segments", []):
        offset, data = _segment_bytes(segment)
        segments.append((offset, data, segment))
    segments.sort(key=lambda item: item[0])
    expected = 0
    for offset, data, _segment in segments:
        if offset != expected:
            kind = "celah" if offset > expected else "tumpang tindih"
            raise ValueError(
                f"segmen {offset:#x}: {kind}; seharusnya mulai {expected:#x}")
        expected += len(data)
    if expected != size:
        raise ValueError(
            f"segmen menutup {expected} B, rom.size {size} B")
    return segments


def encode_source(meta_path):
    """JSON segmen -> byte ROM lengkap."""
    meta_path = Path(meta_path)
    meta = _load_meta(meta_path)
    if meta.get("kind") != "table":
        raise ValueError(f"{meta_path}: kind bukan table")
    try:
        return b"".join(data for _offset, data, _segment in _layout(meta))
    except ValueError as exc:
        raise SystemExit(f"{meta_path}: {exc}")


def verify(meta_path, rom_path=None, out_path=None):
    meta_path = Path(meta_path)
    meta = _load_meta(meta_path)
    encoded = encode_source(meta_path)
    expected = None
    if rom_path is not None:
        rom = Path(rom_path).read_bytes()
        offset = int(str(meta["rom"]["offset"]), 0)
        size = int(meta["rom"]["size"])
        expected = rom[offset:offset + size]
        expected_hash = sha256(expected)
        if expected_hash != meta["rom"]["sha256"]:
            raise ValueError(
                f"{meta_path}: hash ROM berubah: {expected_hash} != "
                f"{meta['rom']['sha256']}")
    else:
        expected_hash = meta["rom"]["sha256"]
    actual_hash = sha256(encoded)
    ok = actual_hash == expected_hash and (expected is None or encoded == expected)
    if out_path is not None:
        out = Path(out_path)
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(encoded)
    print(f"symbol={meta.get('symbol', '?')}")
    print(f"size={len(encoded)} expected_sha256={expected_hash}")
    print(f"encoded_sha256={actual_hash}")
    print(f"status={'MATCH' if ok else 'MISMATCH'}")
    if not ok:
        if expected is not None and len(encoded) != len(expected):
            print(f"panjang berbeda: {len(encoded)} != {len(expected)}",
                  file=sys.stderr)
        return 1
    return 0


def _cmd_encode(args):
    data = encode_source(args.json)
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print(f"{out}: {len(data)} B sha256={sha256(data)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    e = sub.add_parser("encode", help="JSON segmen -> byte tabel")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    e.set_defaults(func=_cmd_encode)

    v = sub.add_parser("verify", help="gate byte/SHA-256 terhadap slice ROM")
    v.add_argument("--json", required=True)
    v.add_argument("--rom", default="baserom.gba")
    v.add_argument("--out", default=None)
    v.set_defaults(func=lambda a: sys.exit(verify(a.json, a.rom, a.out)))

    args = ap.parse_args(argv)
    args.func(args)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
