#!/usr/bin/env python3
"""Codec container font/objek `func_0805E6CC` (bukan tile 4bpp datar).

`func_0805E6CC` (0x0805E6CC) membaca argumen sebagai rangkaian berhitung:

    3 kali: u16 count | 2 B pad | count * ukuran entri
    3 kali: u16 count (entri 4 B) ...

Tepatnya, urutan enam tabel + satu ekor:

| # | nama | entri | isi                                    |
|---|------|-------|----------------------------------------|
| 0 | A    | 4 B   | pasangan u16 (mis. 1, indeks)          |
| 1 | B    | 16 B  | record glyph (8 u16)                   |
| 2 | C    | 8 B   | 4 u16                                  |
| 3 | D    | 32 B  | tile 4bpp                              |
| 4 | E    | 32 B  | tile 4bpp                              |
| 5 | F    | 8 B   | 4 u16                                  |
| 6 | T    | 4 B   | u16 count + count * u32 (tanpa batas)  |

Setiap `count` diawali 4 B (u16 count + 2 B pad); `func_0805E6CC` memakai
`ldrh` lalu `+=4`, jadi 2 B pad itu ikut disalin apa adanya. Tabel T tidak
punya kelipatan ukuran di fungsi; panjangnya dihitung `count * 4`.

Tool ini **tidak** menganggap body sebagai tile datar: hanya tabel dengan
entri 32 B yang dirender ke PNG, sisanya disimpan sebagai hex. Encode
menggabungkan ulang semua prefix + data + tile dan `verify` menuntut SHA-256
dan byte hasil encode sama dengan slice ROM. `.incbin` tidak pernah disentuh.

  python3 tools/assets/font_container.py decode --rom baserom.gba \\
      --offset 0x72DE44 --size 4148 \\
      --png assets/gfx/fonts/unk_0872de44.png \\
      --json assets/gfx/fonts/unk_0872de44.json \\
      --id gfx/fonts/unk_0872de44 --symbol gUnk_0872DE44
  python3 tools/assets/font_container.py encode --json <json> --out build/assets/x.bin
  python3 tools/assets/font_container.py verify --json <json>
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import tile4bpp  # noqa: E402

# (nama, ukuran entri) sesuai urutan pembacaan func_0805E6CC.
SECTIONS = (("A", 4), ("B", 16), ("C", 8), ("D", 32), ("E", 32), ("F", 8))
TRAILER = ("T", 4)


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def parse(blob):
    """Slice container -> (sections, trailer); ValueError bila panjang tak cocok."""
    blob = bytes(blob)
    out = []
    pos = 0
    for name, entry_size in SECTIONS:
        if pos + 4 > len(blob):
            raise ValueError(f"tabel {name}: header terpotong di 0x{pos:X}")
        count = struct.unpack_from("<H", blob, pos)[0]
        end = pos + 4 + count * entry_size
        if end > len(blob):
            raise ValueError(
                f"tabel {name}: count {count} x {entry_size} B melewati akhir")
        out.append({
            "name": name,
            "entry_size": entry_size,
            "count": count,
            "prefix_hex": blob[pos:pos + 4].hex(),
            "data_hex": blob[pos + 4:end].hex(),
        })
        pos = end
    name, entry_size = TRAILER
    if pos + 4 > len(blob):
        raise ValueError(f"tabel {name}: header terpotong di 0x{pos:X}")
    count = struct.unpack_from("<H", blob, pos)[0]
    end = pos + 4 + count * entry_size
    if end != len(blob):
        raise ValueError(
            f"tabel {name}: berakhir 0x{end:X}, ukuran slice 0x{len(blob):X} "
            "(layout bukan container func_0805E6CC)")
    out.append({
        "name": name,
        "entry_size": entry_size,
        "count": count,
        "prefix_hex": blob[pos:pos + 4].hex(),
        "data_hex": blob[pos + 4:end].hex(),
    })
    return out


def tile_sections(sections):
    return [s for s in sections if s["entry_size"] == tile4bpp.TILE_BYTES]


def decode_blob(blob, tiles_wide=16):
    """Slice container -> (rgb, metadata)."""
    sections = parse(blob)
    tiles = b"".join(bytes.fromhex(s["data_hex"]) for s in tile_sections(sections))
    count = len(tiles) // tile4bpp.TILE_BYTES
    if count * tile4bpp.TILE_BYTES != len(tiles):
        raise ValueError("tabel tile tidak kelipatan 32 B")
    rgb, meta = tile4bpp.decode_blob(tiles, 0, 0, tiles_wide)
    for section in sections:
        if section["entry_size"] == tile4bpp.TILE_BYTES:
            section["tiles"] = section.pop("count")
            section.pop("data_hex")
    meta.update({
        "kind": "font_container",
        "format": "func_0805E6CC",
        "layout": {
            "entry_sections": [list(s) for s in SECTIONS],
            "trailer": list(TRAILER),
        },
        "sections": sections,
        "source": {
            "png": None,
            "tiles_wide": tiles_wide,
            "tile_count": count,
        },
    })
    return rgb, meta


def encode_source(meta_path):
    """JSON + PNG tile -> byte container lengkap."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    if meta.get("kind") != "font_container":
        raise ValueError(f"{meta_path}: kind bukan font_container")
    source = meta["source"]
    png_path = meta_path.parent / source["png"]
    width, height, rgb = tile4bpp.read_png(png_path)
    tiles_wide = int(source["tiles_wide"])
    total = int(source["tile_count"])
    rows = (total + tiles_wide - 1) // tiles_wide
    if width != tiles_wide * tile4bpp.TILE_SIZE or \
            height != rows * tile4bpp.TILE_SIZE:
        raise ValueError(
            f"{png_path}: ukuran {width}x{height}, harus "
            f"{tiles_wide * tile4bpp.TILE_SIZE}x{rows * tile4bpp.TILE_SIZE}")
    body = bytearray()
    for t in range(total):
        tx = (t % tiles_wide) * tile4bpp.TILE_SIZE
        ty = (t // tiles_wide) * tile4bpp.TILE_SIZE
        for y in range(tile4bpp.TILE_SIZE):
            for x in range(0, tile4bpp.TILE_SIZE, 2):
                idx = []
                for xx in (x, x + 1):
                    dst = ((ty + y) * width + tx + xx) * 3
                    color = tuple(rgb[dst:dst + 3])
                    if color not in tile4bpp.RGB_TO_INDEX:
                        raise ValueError(
                            f"{png_path}: warna {color} bukan indeks 0..15")
                    idx.append(tile4bpp.RGB_TO_INDEX[color])
                body.append(idx[0] | (idx[1] << 4))
    primed = 0
    out = bytearray()
    for section in meta["sections"]:
        out += bytes.fromhex(section["prefix_hex"])
        if "tiles" in section:
            n = int(section["tiles"])
            size = section["entry_size"]
            if size != tile4bpp.TILE_BYTES:
                raise ValueError(
                    f"tabel {section['name']}: entri tile bukan 32 B")
            out += body[primed * size:(primed + n) * size]
            primed += n
        else:
            data = bytes.fromhex(section["data_hex"])
            if len(data) != section["count"] * section["entry_size"]:
                raise ValueError(
                    f"tabel {section['name']}: data {len(data)} B != "
                    f"{section['count']} x {section['entry_size']} B")
            out += data
    if primed != total:
        raise ValueError(f"tile terpakai {primed}, JSON bilang {total}")
    return bytes(out)


def verify(meta_path, rom_path=None, out_path=None):
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
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


def describe(meta):
    return " ".join(
        f"{s['name']}={s['tiles'] if 'tiles' in s else s['count']}"
        for s in meta["sections"])


def cmd_decode(args):
    blob = Path(args.rom).read_bytes()[args.offset:args.offset + args.size]
    if len(blob) != args.size:
        raise SystemExit(f"slice ROM hanya {len(blob)} B, bukan {args.size} B")
    rgb, meta = decode_blob(blob, args.tiles_wide)
    png = Path(args.png)
    js = Path(args.json)
    png.parent.mkdir(parents=True, exist_ok=True)
    count = meta["source"]["tile_count"]
    tile4bpp.write_png(png, args.tiles_wide * tile4bpp.TILE_SIZE,
                       ((count + args.tiles_wide - 1) // args.tiles_wide)
                       * tile4bpp.TILE_SIZE, rgb)
    meta.update({
        "id": args.id,
        "symbol": args.symbol,
        "rom": {
            "offset": f"0x{args.offset:X}",
            "size": len(blob),
            "sha256": sha256(blob),
        },
        "encoder": {
            "tool": "font_container.py",
            "version": 1,
            "tile_order": "row-major",
            "nibble_order": "low-first",
        },
    })
    if args.note:
        meta["note"] = args.note
    meta["source"]["png"] = png.name
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {describe(meta)}; {count} tile, sha256={sha256(blob)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    d = sub.add_parser("decode", help="slice ROM container -> PNG tile + JSON")
    d.add_argument("--rom", required=True)
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--tiles-wide", type=int, default=16)
    d.add_argument("--png", required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.set_defaults(func=cmd_decode)

    e = sub.add_parser("encode", help="JSON + PNG -> container biner")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    e.set_defaults(func=lambda a: _cmd_encode(a))

    v = sub.add_parser("verify", help="gate byte/SHA-256 terhadap slice ROM")
    v.add_argument("--json", required=True)
    v.add_argument("--rom", default="baserom.gba")
    v.add_argument("--out", default=None)
    v.set_defaults(func=lambda a: sys.exit(verify(a.json, a.rom, a.out)))

    args = ap.parse_args(argv)
    args.func(args)
    return 0


def _cmd_encode(args):
    data = encode_source(args.json)
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print(f"{out}: {len(data)} B sha256={sha256(data)}")


if __name__ == "__main__":
    raise SystemExit(main())
