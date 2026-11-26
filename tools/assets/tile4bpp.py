#!/usr/bin/env python3
"""Codec minimal tile/font 4bpp: PNG indeks 16 warna + header/ekor JSON.

Format source:
- PNG truecolor 8-bit, setiap piksel memakai warna indeks 0..15
  (R=G=B=index*17), tile disusun kiri-ke-kanan lalu baris tile;
- JSON menyimpan symbol, offset/ukuran ROM, hash, panjang header/ekor,
  jumlah tile, dan lebar tile.

Nibble GBA: piksel x genap = nibble rendah, x ganjil = nibble tinggi.
Header/ekor disimpan sebagai `header_words`/`tail_words` (u32) atau
`*_bytes` (u8) eksplisit dan ditulis dari nilai itu, bukan dari hex, sehingga
codec ini tidak mengubah byte di luar body.  `.incbin` tidak pernah disentuh tool ini.

  python3 tools/assets/tile4bpp.py decode --rom baserom.gba \
      --offset 0x75A440 --size 4100 --header 0 --tail 4 \
      --png assets/gfx/fonts/clock.png --json assets/gfx/fonts/clock.json
  python3 tools/assets/tile4bpp.py encode --json assets/gfx/fonts/clock.json \
      --out build/assets/gUnk_0875A440.bin
  python3 tools/assets/tile4bpp.py verify --json assets/gfx/fonts/clock.json
"""
import argparse
import hashlib
import json
import struct
import sys
import zlib
from pathlib import Path

TILE_BYTES = 32
TILE_SIZE = 8
INDICES = tuple((i * 17,) * 3 for i in range(16))
RGB_TO_INDEX = {color: i for i, color in enumerate(INDICES)}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def write_png(path, width, height, rgb):
    """PNG truecolor 8-bit tanpa dependensi."""
    rows = b"".join(b"\x00" + bytes(rgb[y * width * 3:(y + 1) * width * 3])
                    for y in range(height))

    def chunk(tag, data):
        return (struct.pack(">I", len(data)) + tag + data
                + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF))

    ihdr = struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0)
    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", ihdr)
                     + chunk(b"IDAT", zlib.compress(rows, 9))
                     + chunk(b"IEND", b""))


def _paeth(a, b, c):
    p = a + b - c
    pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
    if pa <= pb and pa <= pc:
        return a
    if pb <= pc:
        return b
    return c


def read_png(path):
    """Baca PNG truecolor/RGBA 8-bit non-interlaced -> (w, h, RGB bytes)."""
    raw = path.read_bytes()
    if len(raw) < 8 or not raw.startswith(b"\x89PNG\r\n\x1a\n"):
        raise ValueError(f"{path}: bukan PNG")
    pos = 8
    width = height = None
    color_type = None
    idat = bytearray()
    saw_iend = False
    while pos < len(raw):
        if pos + 12 > len(raw):
            raise ValueError(f"{path}: chunk terpotong di {pos:#x}")
        length = struct.unpack(">I", raw[pos:pos + 4])[0]
        tag = raw[pos + 4:pos + 8]
        end = pos + 12 + length
        if end > len(raw):
            raise ValueError(f"{path}: chunk {tag!r} terpotong")
        data = raw[pos + 8:pos + 8 + length]
        pos = end
        if tag == b"IHDR":
            if length != 13:
                raise ValueError(f"{path}: IHDR {length} B, harus 13 B")
            (width, height, depth, color_type, _comp, _filter,
             interlace) = struct.unpack(">IIBBBBB", data)
            if depth != 8 or color_type not in (2, 6) or interlace != 0:
                raise ValueError(f"{path}: butuh truecolor/RGBA 8-bit non-interlaced")
            if width < 2 or height < 2:
                raise ValueError(f"{path}: ukuran {width}x{height}, minimal 2x2")
        elif tag == b"IDAT":
            idat.extend(data)
        elif tag == b"IEND":
            saw_iend = True
            break
    if width is None or height is None:
        raise ValueError(f"{path}: IHDR tidak ada")
    if not idat:
        raise ValueError(f"{path}: IDAT tidak ada")
    if not saw_iend:
        raise ValueError(f"{path}: IEND tidak ada")
    bpp = 3 if color_type == 2 else 4
    stride = width * bpp
    try:
        stream = zlib.decompress(bytes(idat))
    except zlib.error as exc:
        raise ValueError(f"{path}: IDAT tidak valid: {exc}")
    rows = []
    prev = bytearray(stride)
    p = 0
    for _ in range(height):
        if p + 1 + stride > len(stream):
            raise ValueError(f"{path}: data piksel terpotong")
        kind = stream[p]
        cur = bytearray(stream[p + 1:p + 1 + stride])
        p += 1 + stride
        for i in range(stride):
            left = cur[i - bpp] if i >= bpp else 0
            up = prev[i]
            up_left = prev[i - bpp] if i >= bpp else 0
            if kind == 1:
                cur[i] = (cur[i] + left) & 0xFF
            elif kind == 2:
                cur[i] = (cur[i] + up) & 0xFF
            elif kind == 3:
                cur[i] = (cur[i] + ((left + up) // 2)) & 0xFF
            elif kind == 4:
                cur[i] = (cur[i] + _paeth(left, up, up_left)) & 0xFF
            elif kind != 0:
                raise ValueError(f"{path}: filter PNG {kind} tidak didukung")
        rows.append(cur)
        prev = cur
    rgb = bytearray(width * height * 3)
    for y, row in enumerate(rows):
        for x in range(width):
            src = x * bpp
            dst = (y * width + x) * 3
            rgb[dst:dst + 3] = row[src:src + 3]
    colors = {bytes(rgb[i:i + 3]) for i in range(0, len(rgb), 3)}
    if len(colors) < 2:
        raise ValueError(f"{path}: gambar hanya punya {len(colors)} warna")
    return width, height, rgb


def decode_blob(blob, header_len=0, tail_len=0, tiles_wide=16):
    """ROM blob -> (rgb, metadata) untuk body tile 4bpp."""
    if header_len < 0 or tail_len < 0:
        raise ValueError("header/tail tidak boleh negatif")
    end = len(blob) - tail_len if tail_len else len(blob)
    if end < header_len:
        raise ValueError("header/tail melebihi ukuran blob")
    header = blob[:header_len]
    tail = blob[len(blob) - tail_len:] if tail_len else b""
    body = blob[header_len:end]
    if len(body) % TILE_BYTES:
        raise ValueError(f"body {len(body)} B bukan kelipatan {TILE_BYTES}")
    if tiles_wide < 1:
        raise ValueError("tiles_wide harus >= 1")
    count = len(body) // TILE_BYTES
    rows = (count + tiles_wide - 1) // tiles_wide
    width = tiles_wide * TILE_SIZE
    height = rows * TILE_SIZE
    rgb = bytearray(width * height * 3)
    for t in range(count):
        tx = (t % tiles_wide) * TILE_SIZE
        ty = (t // tiles_wide) * TILE_SIZE
        for y in range(TILE_SIZE):
            for x in range(TILE_SIZE):
                b = body[t * TILE_BYTES + y * 4 + x // 2]
                idx = (b & 15) if x % 2 == 0 else (b >> 4)
                color = INDICES[idx]
                dst = ((ty + y) * width + tx + x) * 3
                rgb[dst:dst + 3] = bytes(color)
    source = {
        "png": None,
        "tiles_wide": tiles_wide,
        "tile_count": count,
        "tile_offset": header_len,
        "tile_trim": tail_len,
    }
    for name, blob in (("header", header), ("tail", tail)):
        if not blob:
            continue
        if len(blob) % 4:
            source[f"{name}_bytes"] = list(blob)
        else:
            source[f"{name}_words"] = [
                int.from_bytes(blob[i:i + 4], "little")
                for i in range(0, len(blob), 4)]
    meta = {
        "kind": "tiles4bpp",
        "source": source,
        "encoder": {
            "tool": "tile4bpp.py",
            "version": 1,
            "tile_order": "row-major",
            "nibble_order": "low-first",
        },
    }
    return rgb, meta


def _field_bytes(source, name):
    """Field header/tail -> byte; hex buram ditolak, nilainya harus eksplisit."""
    if f"{name}_hex" in source:
        raise ValueError(
            f"source.{name}_hex sudah tidak dipakai; pakai {name}_words/"
            f"{name}_bytes")
    words = source.get(f"{name}_words") or []
    raw = source.get(f"{name}_bytes") or []
    if words and raw:
        raise ValueError(f"source: {name}_words dan {name}_bytes dua-duanya ada")
    out = bytearray()
    for value in words:
        if isinstance(value, bool) or not isinstance(value, int) \
                or not 0 <= value <= 0xFFFFFFFF:
            raise ValueError(f"source.{name}_words: {value!r} bukan u32")
        out += value.to_bytes(4, "little")
    for value in raw:
        if isinstance(value, bool) or not isinstance(value, int) \
                or not 0 <= value <= 0xFF:
            raise ValueError(f"source.{name}_bytes: {value!r} bukan u8")
        out.append(value)
    return bytes(out)


def coverage(meta, meta_path=None):
    """Coverage: semua byte dari field (tile PNG, header/tail eksplisit).

    `padding` di JSON tetap dokumentasi "tanpa pembaca", bukan angka raw:
    bytenya ditulis dari `*_words`/`*_bytes`, jadi nilainya tetap ditentukan
    field (bukan blob buram).
    """
    size = int(meta["rom"]["size"])
    pad = (len(_field_bytes(meta["source"], "header"))
           + len(_field_bytes(meta["source"], "tail")))
    proven = TILE_BYTES * int(meta["source"]["tile_count"]) + pad
    if proven > size:
        raise ValueError(
            f"tile_count + header/tail = {proven} B > rom.size {size} B")
    return {
        "total_bytes": size,
        "proven_bytes": proven,
        "raw_bytes": size - proven,
        "proven_ratio": round(proven / size, 4),
    }


def encode_source(meta_path):
    """Baca JSON+PNG, hasilkan byte lengkap (header + body + ekor)."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    source = meta["source"]
    png_path = meta_path.parent / source["png"]
    width, height, rgb = read_png(png_path)
    count = int(source["tile_count"])
    tiles_wide = int(source["tiles_wide"])
    rows = (count + tiles_wide - 1) // tiles_wide
    if width != tiles_wide * TILE_SIZE or height != rows * TILE_SIZE:
        raise ValueError(
            f"{png_path}: ukuran {width}x{height}, harus "
            f"{tiles_wide * TILE_SIZE}x{rows * TILE_SIZE}")
    body = bytearray()
    for t in range(count):
        tx = (t % tiles_wide) * TILE_SIZE
        ty = (t // tiles_wide) * TILE_SIZE
        for y in range(TILE_SIZE):
            for x in range(0, TILE_SIZE, 2):
                idx = []
                for xx in (x, x + 1):
                    dst = ((ty + y) * width + tx + xx) * 3
                    color = tuple(rgb[dst:dst + 3])
                    if color not in RGB_TO_INDEX:
                        raise ValueError(
                            f"{png_path}: warna {color} bukan indeks 0..15")
                    idx.append(RGB_TO_INDEX[color])
                body.append(idx[0] | (idx[1] << 4))
    return (_field_bytes(source, "header") + body
            + _field_bytes(source, "tail"))


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
        expected = None
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
    rgb, meta = decode_blob(blob, args.header, args.tail, args.tiles_wide)
    png = Path(args.png)
    js = Path(args.json)
    png.parent.mkdir(parents=True, exist_ok=True)
    write_png(png, args.tiles_wide * TILE_SIZE,
              ((meta["source"]["tile_count"] + args.tiles_wide - 1)
               // args.tiles_wide) * TILE_SIZE, rgb)
    meta.update({
        "id": args.id,
        "symbol": args.symbol,
        # Sama seperti sprite2gba.decode: hanya aset dengan status ini yang
        # boleh masuk asset_manifest/`gfx_rules.mk`.
        "status": "rom-exact",
        "semantics": args.semantics,
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
    print(f"{js}: {meta['source']['tile_count']} tile, "
          f"header={args.header} tail={args.tail}, sha256={sha256(blob)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    d = sub.add_parser("decode", help="ROM slice -> PNG + JSON")
    d.add_argument("--rom", required=True)
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--header", type=int, default=0)
    d.add_argument("--tail", type=int, default=0)
    d.add_argument("--tiles-wide", type=int, default=16)
    d.add_argument("--png", required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.add_argument("--semantics", choices=("proven", "unidentified"),
                   default="unidentified")
    d.set_defaults(func=cmd_decode)

    e = sub.add_parser("encode", help="JSON + PNG -> binary")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    e.set_defaults(func=lambda a: _cmd_encode(a))

    v = sub.add_parser("verify", help="gate hash/byte terhadap slice ROM")
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
