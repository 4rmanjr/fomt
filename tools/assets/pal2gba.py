#!/usr/bin/env python3
"""pal2gba.py — palet GBA BGR555 (little endian) <-> JASC-PAL + PNG swatch.

Satu warna GBA = u16 `0b0BBBBBGGGGGRRRRR` (bit 15 kosong). Source kanonik
adalah `.pal` teks JASC-PAL (8 bit per kanal), sehingga diff-nya bisa dibaca
manusia; PNG hanya untuk melihat, bukan input encoder.

  python3 tools/assets/pal2gba.py decode --bin x.bin --pal x.pal [--png x.png]
  python3 tools/assets/pal2gba.py encode --json meta.json --out x.bin
  python3 tools/assets/pal2gba.py --check          # uji round-trip 5 bit

`encode_source(meta_path)` dipakai `asset_manifest.py`; tidak membaca ROM.
"""
import argparse
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import extract_assets as fx  # noqa: E402

JASC = "JASC-PAL\n0100\n"


def to5(v):
    """8 bit -> 5 bit dengan pembulatan, kebalikan tepat dari `from5`."""
    return (v * 31 + 127) // 255


def from5(v):
    return (v * 255) // 31


def bgr555_to_rgb(value):
    return (from5(value & 31), from5((value >> 5) & 31),
            from5((value >> 10) & 31))


def rgb_to_bgr555(rgb):
    r, g, b = rgb
    return to5(r) | (to5(g) << 5) | (to5(b) << 10)


def decode_bytes(data):
    if len(data) % 2:
        raise ValueError(f"palet {len(data)} B bukan kelipatan 2")
    return [bgr555_to_rgb(int.from_bytes(data[i:i + 2], "little"))
            for i in range(0, len(data), 2)]


def encode_bytes(colors):
    return b"".join(rgb_to_bgr555(c).to_bytes(2, "little") for c in colors)


def read_pal(path):
    lines = Path(path).read_text().splitlines()
    if len(lines) < 3 or lines[0].strip() != "JASC-PAL":
        raise ValueError(f"{path}: bukan JASC-PAL")
    count = int(lines[2].strip())
    colors = []
    for line in lines[3:3 + count]:
        parts = line.split()
        if len(parts) != 3:
            raise ValueError(f"{path}: baris warna tidak valid: {line!r}")
        colors.append(tuple(int(p) for p in parts))
    if len(colors) != count:
        raise ValueError(f"{path}: {len(colors)} warna, header bilang {count}")
    return colors


def write_pal(path, colors):
    body = JASC + f"{len(colors)}\n"
    body += "".join(f"{r} {g} {b}\n" for r, g, b in colors)
    Path(path).write_text(body)


def encode_source(meta_path):
    """Byte ROM dari source `.pal` yang dirujuk metadata per-aset."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    ref = meta["source"].get("pal")
    if not ref:
        raise SystemExit(f"{meta_path}: source.pal tidak ada")
    pal = meta_path.parent / ref
    if not pal.exists():
        raise SystemExit(f"{pal}: berkas .pal tidak ada")
    return encode_bytes(read_pal(pal))


def roundtrip_ok():
    return all(to5(from5(v)) == v for v in range(32))


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd")
    d = sub.add_parser("decode", help="bin ROM -> .pal (+PNG swatch)")
    d.add_argument("--bin", required=True, type=Path)
    d.add_argument("--pal", required=True, type=Path)
    d.add_argument("--png", type=Path)
    e = sub.add_parser("encode", help="metadata JSON -> bin ROM")
    e.add_argument("--json", required=True, type=Path)
    e.add_argument("--out", required=True, type=Path)
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila round-trip 5 bit tidak eksak")
    args = ap.parse_args(argv)

    if args.check:
        ok = roundtrip_ok()
        print(f"round-trip 5 bit: {'eksak' if ok else 'TIDAK eksak'}")
        return 0 if ok else 1
    if args.cmd == "decode":
        data = args.bin.read_bytes()
        colors = decode_bytes(data)
        write_pal(args.pal, colors)
        if args.png:
            args.png.parent.mkdir(parents=True, exist_ok=True)
            fx.render_palette(data, args.png)
        print(f"{args.pal}: {len(colors)} warna")
        return 0
    if args.cmd == "encode":
        data = encode_source(args.json)
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_bytes(data)
        print(f"{args.out}: {len(data)} B")
        return 0
    ap.print_help()
    return 2


if __name__ == "__main__":
    raise SystemExit(main())
