#!/usr/bin/env python3
"""glyph_font.py — codec glyph font 8x12 1bpp/2bpp (record 12 B / 24 B).

Dua blob font di `func_080D0D28` bukan container `func_0805E6CC` dan bukan
tile 4bpp: isinya array record berukuran tetap, satu record = satu glyph 8x12.

- 1bpp: 12 B/record, 1 byte per baris, bit MSB = piksel paling kiri (0/1).
- 2bpp: 24 B/record, 2 byte per baris = dua bitplane berurutan. Byte pertama
  plane 0 (bit 0 warna), byte kedua plane 1 (bit 1 warna); piksel =
  `plane0 | plane1 << 1`. Bitplane terpisah (bukan nibble) karena blob asli
  memuat nilai nibble 0xF pada glyph blok, yang mustahil untuk 2bpp ber-nibble.

PNG kanonik menyimpan indeks warna sebagai grayscale `indeks * 17`
(0, 17, 34, 51) supaya tetap truecolor 8-bit tanpa palet eksternal; `encode`
menolak nilai yang bukan kelipatan 17 atau melebihi `2**bpp`. Metadata JSON
menyimpan `source.bpp`, `columns`, dan jumlah glyph; `verify` menuntut byte +
SHA-256 hasil encode sama dengan slice `baserom.gba`.

  python3 tools/assets/glyph_font.py decode --rom baserom.gba --offset 0x4F90CC \\
      --size 5844 --bpp 1 --png assets/gfx/fonts/glyph_084f90cc.png \\
      --json assets/gfx/fonts/glyph_084f90cc.json \\
      --id gfx/fonts/gunk_084f90cc --symbol gUnk_084F90CC
  python3 tools/assets/glyph_font.py verify --json assets/gfx/fonts/glyph_084f90cc.json

Tidak menjalankan build dan tidak menyentuh `asm/data/*.s`.
"""
import argparse
import hashlib
import importlib.util
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = Path(__file__).resolve().parent
GLYPH_W = 8
GLYPH_H = 12
BPP = (1, 2)


def _load_tile4bpp():
    spec = importlib.util.spec_from_file_location("tile4bpp", TOOLS / "tile4bpp.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


tile4bpp = _load_tile4bpp()


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def record_size(bpp):
    return GLYPH_W * bpp * GLYPH_H // 8


def _check_bpp(bpp):
    if bpp not in BPP:
        raise ValueError(f"bpp wajib salah satu {BPP}, bukan {bpp!r}")


def decode_blob(blob, bpp=1, columns=16):
    """ROM blob glyph -> (rgb bytes, metadata)."""
    _check_bpp(bpp)
    if columns < 1:
        raise ValueError("columns harus >= 1")
    rec = record_size(bpp)
    if len(blob) % rec:
        raise ValueError(f"body {len(blob)} B bukan kelipatan {rec} B "
                         f"({bpp}bpp x {GLYPH_W}x{GLYPH_H})")
    count = len(blob) // rec
    rows = (count + columns - 1) // columns
    width = columns * GLYPH_W
    height = rows * GLYPH_H
    rgb = bytearray(width * height * 3)
    stride = GLYPH_W * bpp // 8
    for g in range(count):
        gx = (g % columns) * GLYPH_W
        gy = (g // columns) * GLYPH_H
        record = blob[g * rec:(g + 1) * rec]
        for y in range(GLYPH_H):
            line = record[y * stride:(y + 1) * stride]
            for x in range(GLYPH_W):
                if bpp == 1:
                    idx = (line[0] >> (7 - x)) & 1
                else:
                    idx = ((line[0] >> (7 - x)) & 1) | (
                        ((line[1] >> (7 - x)) & 1) << 1)
                color = idx * 17
                dst = ((gy + y) * width + gx + x) * 3
                rgb[dst:dst + 3] = bytes((color, color, color))
    meta = {
        "kind": "glyph_font",
        "source": {
            "png": None,
            "bpp": bpp,
            "glyph_width": GLYPH_W,
            "glyph_height": GLYPH_H,
            "columns": columns,
            "count": count,
        },
        "encoder": {
            "tool": "glyph_font.py",
            "version": 1,
            "pixel_order": "msb-left",
            "planes": "plane0,plane1" if bpp == 2 else "plane0",
        },
    }
    return rgb, meta


def encode_source(meta_path):
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    source = meta["source"]
    bpp = source["bpp"]
    _check_bpp(bpp)
    columns = source["columns"]
    count = source["count"]
    rec = record_size(bpp)
    stride = GLYPH_W * bpp // 8
    png = meta_path.parent / source["png"]
    width, height, rgb = tile4bpp.read_png(png)
    rows = (count + columns - 1) // columns
    want = (columns * GLYPH_W, rows * GLYPH_H)
    if (width, height) != want:
        raise ValueError(
            f"{png}: ukuran {width}x{height}, seharusnya {want[0]}x{want[1]} "
            f"({count} glyph, {columns} kolom)")
    out = bytearray()
    max_idx = (1 << bpp) - 1
    for g in range(count):
        gx = (g % columns) * GLYPH_W
        gy = (g // columns) * GLYPH_H
        record = bytearray(rec)
        for y in range(GLYPH_H):
            line = bytearray(stride)
            for x in range(GLYPH_W):
                p = ((gy + y) * width + gx + x) * 3
                r, gr, b = rgb[p], rgb[p + 1], rgb[p + 2]
                if not (r == gr == b) or r % 17:
                    raise ValueError(
                        f"{png}: piksel ({gx + x},{gy + y}) bukan grayscale "
                        f"indeks*17 (dapat {r},{gr},{b})")
                idx = r // 17
                if idx > max_idx:
                    raise ValueError(
                        f"{png}: piksel ({gx + x},{gy + y}) indeks {idx} "
                        f"melebihi {bpp}bpp")
                for bit in range(bpp):
                    if (idx >> bit) & 1:
                        line[bit] |= 1 << (7 - x)
            record[y * stride:(y + 1) * stride] = line
        out += record
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


def cmd_decode(args):
    blob = Path(args.rom).read_bytes()[args.offset:args.offset + args.size]
    if len(blob) != args.size:
        raise SystemExit(f"slice ROM hanya {len(blob)} B, bukan {args.size} B")
    rgb, meta = decode_blob(blob, args.bpp, args.columns)
    png = Path(args.png)
    js = Path(args.json)
    png.parent.mkdir(parents=True, exist_ok=True)
    width = args.columns * GLYPH_W
    rows = (meta["source"]["count"] + args.columns - 1) // args.columns
    tile4bpp.write_png(png, width, rows * GLYPH_H, rgb)
    meta.update({
        "id": args.id,
        "symbol": args.symbol,
        "rom": {
            "offset": f"0x{args.offset:X}",
            "size": len(blob),
            "sha256": sha256(blob),
        },
    })
    if args.note:
        meta["note"] = args.note
    meta["source"]["png"] = png.name
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {meta['source']['count']} glyph {args.bpp}bpp, "
          f"sha256={sha256(blob)}")


def _cmd_encode(args):
    data = encode_source(args.json)
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print(f"{out}: {len(data)} B sha256={sha256(data)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    d = sub.add_parser("decode", help="slice ROM glyph font -> PNG + JSON")
    d.add_argument("--rom", required=True)
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--bpp", type=int, required=True, choices=BPP)
    d.add_argument("--columns", type=int, default=16)
    d.add_argument("--png", required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.set_defaults(func=cmd_decode)

    e = sub.add_parser("encode", help="JSON + PNG -> byte glyph font")
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
