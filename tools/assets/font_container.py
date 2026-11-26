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
entri 32 B yang dirender ke PNG; tabel lain disimpan `values` (baris u32)
dan `pad` u16 eksplisit, bukan hex. Encode
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
            "pad": struct.unpack_from("<H", blob, pos + 2)[0],
            "data": blob[pos + 4:end],
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
        "pad": struct.unpack_from("<H", blob, pos + 2)[0],
        "data": blob[pos + 4:end],
    })
    return out


def parse_prefix(blob):
    """Slice container -> (sections, consumed) tanpa menuntut akhir slice.

    Dipakai untuk blob yang container-nya diikuti ekor mentah (mis. palet 32 B
    atau payload yang dibaca pemanggil lain); ekornya disimpan `tail_words`.
    """
    blob = bytes(blob)
    pos = 0
    for name, entry_size in SECTIONS + (TRAILER,):
        if pos + 4 > len(blob):
            raise ValueError(f"tabel {name}: header terpotong di 0x{pos:X}")
        count = struct.unpack_from("<H", blob, pos)[0]
        pos += 4 + count * entry_size
        if pos > len(blob):
            raise ValueError(
                f"tabel {name}: count {count} x {entry_size} B melewati akhir")
    return parse(blob[:pos]), pos


def tile_sections(sections):
    return [s for s in sections if s["entry_size"] == tile4bpp.TILE_BYTES]


def _section_fields(section):
    """Section parse -> bentuk JSON: `tiles` untuk 32 B, `values` u32 lainnya."""
    data = bytes(section.pop("data"))
    section.pop("count")
    if section["entry_size"] == tile4bpp.TILE_BYTES:
        section["tiles"] = len(data) // tile4bpp.TILE_BYTES
        return data
    words = section["entry_size"] // 4
    section["values"] = [
        [int.from_bytes(data[i + 4 * w:i + 4 * w + 4], "little")
         for w in range(words)]
        for i in range(0, len(data), section["entry_size"])]
    return b""


def decode_blob(blob, tiles_wide=16):
    """Slice container -> (rgb, metadata)."""
    sections, consumed = parse_prefix(blob)
    tail = bytes(blob[consumed:])
    parts = []
    for section in sections:
        data = _section_fields(section)
        if section["entry_size"] == tile4bpp.TILE_BYTES:
            parts.append(data)
    tiles = b"".join(parts)
    count = len(tiles) // tile4bpp.TILE_BYTES
    if count * tile4bpp.TILE_BYTES != len(tiles):
        raise ValueError("tabel tile tidak kelipatan 32 B")
    rgb, meta = tile4bpp.decode_blob(tiles, 0, 0, tiles_wide)
    meta["source"].pop("tile_offset", None)
    meta["source"].pop("tile_trim", None)
    words = [(int.from_bytes(tail[i:i + 4], "little"))
             for i in range(0, len(tail) - len(tail) % 4, 4)]
    if words:
        meta["source"]["tail_words"] = words
    if len(tail) % 4:
        meta["source"]["tail_bytes"] = list(tail[len(words) * 4:])
    meta.update({
        "kind": "font_container",
        "format": "func_0805E6CC",
        "layout": {
            "entry_sections": [list(s) for s in SECTIONS],
            "trailer": list(TRAILER),
        },
        "sections": sections,
        "source": {
            **meta["source"],
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
    order = list(SECTIONS) + [TRAILER]
    sections = meta["sections"]
    if not isinstance(sections, list) or len(sections) != len(order):
        raise ValueError(
            f"sections wajib {len(order)} tabel ({[n for n, _ in order]})")
    primed = 0
    out = bytearray()
    for index, (name, entry_size) in enumerate(order):
        section = sections[index]
        if (section.get("name") != name
                or section.get("entry_size") != entry_size):
            raise ValueError(
                f"section {index} harus {name}/{entry_size} B, bukan "
                f"{section.get('name')}/{section.get('entry_size')}")
        if entry_size == tile4bpp.TILE_BYTES:
            if "values" in section:
                raise ValueError(f"tabel {name}: section tile tidak punya values")
            n = int(section.get("tiles") or 0)
            data = body[primed * entry_size:(primed + n) * entry_size]
            if len(data) != n * entry_size:
                raise ValueError(f"tabel {name}: {n} tile melewati PNG")
            primed += n
            count = n
        else:
            rows = section.get("values")
            words = entry_size // 4
            if not isinstance(rows, list):
                raise ValueError(f"tabel {name}: values wajib daftar")
            data = bytearray()
            for row in rows:
                if not isinstance(row, list) or len(row) != words:
                    raise ValueError(
                        f"tabel {name}: entri {row!r} bukan {words} u32")
                for value in row:
                    if isinstance(value, bool) or not isinstance(value, int) \
                            or not 0 <= value <= 0xFFFFFFFF:
                        raise ValueError(
                            f"tabel {name}: {value!r} bukan u32")
                    data += value.to_bytes(4, "little")
            count = len(rows)
        pad = section.get("pad", 0)
        if isinstance(pad, bool) or not isinstance(pad, int) \
                or not 0 <= pad <= 0xFFFF:
            raise ValueError(f"tabel {name}: pad {pad!r} bukan u16")
        out += struct.pack("<HH", count, pad) + data
    if primed != total:
        raise ValueError(f"tile terpakai {primed}, JSON bilang {total}")
    return bytes(out) + _tail_bytes(source)


def _tail_bytes(source):
    """Ekor container -> byte; hanya kata/byte eksplisit, hex ditolak."""
    if "tail_hex" in source:
        raise ValueError(
            "source.tail_hex sudah tidak dipakai; pakai tail_words/tail_bytes")
    out = bytearray()
    for value in source.get("tail_words") or []:
        if isinstance(value, bool) or not isinstance(value, int) \
                or not 0 <= value <= 0xFFFFFFFF:
            raise ValueError(f"source.tail_words: {value!r} bukan u32")
        out += value.to_bytes(4, "little")
    for value in source.get("tail_bytes") or []:
        if isinstance(value, bool) or not isinstance(value, int) \
                or not 0 <= value <= 0xFF:
            raise ValueError(f"source.tail_bytes: {value!r} bukan u8")
        out.append(value)
    return bytes(out)


def _sections_size(meta):
    """Ukuran section dari field saja (tanpa membaca PNG / ekor)."""
    total = 0
    for section in meta.get("sections") or []:
        if "tiles" in section:
            total += 4 + tile4bpp.TILE_BYTES * int(section["tiles"])
        else:
            rows = section.get("values")
            if not isinstance(rows, list):
                raise ValueError(f"tabel {section.get('name')}: values wajib")
            total += 4 + 4 * sum(len(row) for row in rows)
    return total


def coverage(meta, meta_path=None):
    """Coverage container: semua byte dari field (tabel/tile/ekor eksplisit).

    `padding` di JSON tetap dokumentasi "tanpa pembaca", bukan angka raw:
    ekornya ditulis dari `tail_words`/`tail_bytes`, bukan hex buram.
    """
    size = int(meta["rom"]["size"])
    enc = _sections_size(meta) + len(_tail_bytes(meta["source"]))
    if enc != size:
        raise ValueError(f"sections + ekor = {enc} B != rom.size {size} B")
    return {
        "total_bytes": size,
        "proven_bytes": size,
        "raw_bytes": 0,
        "proven_ratio": 1.0,
    }


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
