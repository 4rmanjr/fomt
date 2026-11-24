#!/usr/bin/env python3
"""map2bin.py — tilemap BG 16-bit: grid entri u16 di JSON -> byte ROM.

Kelas `tilemap` berbeda dari `tiles4bpp`: yang dipindahkan bukan piksel tile,
melainkan daftar entri peta BG (`ldrh`/`strh` per entri). Source kanoniknya
karena itu **grid entri di JSON**, bukan PNG — menggambar ulang peta butuh
tileset pasangan yang belum tentu terbukti, sedangkan yang dibuktikan call
site adalah lebar/tinggi grid dan tujuan salinnya.

Format metadata:

```json
{"kind": "tilemap", "tilemap": {"width": 30, "height": 13},
 "entries": [0, 1, 2, ...], "rom": {"offset": "0x755230", "size": 780,
 "sha256": "..."}}
```

Entri disimpan urut baris demi baris, little endian, tanpa padding; jumlahnya
wajib `width * height` dan byte hasilnya wajib sepanjang `rom.size`, jadi grid
yang salah tidak bisa lolos diam-diam (frame "lebar tebakan" ditolak).

  python3 tools/assets/map2bin.py decode --rom baserom.gba \\
      --offset 0x755230 --size 780 --width 30 --height 13 \\
      --json assets/gfx/maps/gUnk_08755230.json \\
      --id gfx/maps/gunk_08755230 --symbol gUnk_08755230
  python3 tools/assets/map2bin.py encode --json assets/gfx/maps/x.json \\
      --out build/assets/gUnk_x.bin
  python3 tools/assets/map2bin.py verify --json assets/gfx/maps/x.json

`encode_source(meta_path)` dipakai `asset_manifest.py`/`asset_verify.py`;
tidak menyentuh `asm/data/*.s`.
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

ENTRY = 2  # u16 little endian


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def entries_from_bytes(data, width, height):
    if len(data) % ENTRY:
        raise ValueError(f"tilemap {len(data)} B bukan kelipatan {ENTRY}")
    count = len(data) // ENTRY
    if count != width * height:
        raise ValueError(
            f"tilemap {count} entri != {width}x{height} = {width * height}")
    return [int.from_bytes(data[i:i + ENTRY], "little")
            for i in range(0, len(data), ENTRY)]


def bytes_from_entries(entries):
    out = bytearray()
    for value in entries:
        if not 0 <= value <= 0xFFFF:
            raise ValueError(f"entri {value!r} di luar u16")
        out += int(value).to_bytes(ENTRY, "little")
    return bytes(out)


def read_entries(meta_path):
    """-> (meta, entries); menolak grid yang tidak cocok dengan ukuran ROM."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    grid = meta.get("tilemap") or {}
    width, height = grid.get("width"), grid.get("height")
    if not width or not height:
        raise ValueError(f"{meta_path}: tilemap.width/height wajib ada")
    entries = meta.get("entries")
    if not isinstance(entries, list):
        raise ValueError(f"{meta_path}: field entries wajib list")
    if len(entries) != width * height:
        raise ValueError(
            f"{meta_path}: {len(entries)} entri != {width}x{height} = "
            f"{width * height}")
    size = meta.get("rom", {}).get("size")
    if size is not None and len(entries) * ENTRY != size:
        raise ValueError(
            f"{meta_path}: {len(entries)} entri = {len(entries) * ENTRY} B, "
            f"metadata bilang {size} B")
    return meta, entries


def encode_source(meta_path):
    """Byte ROM dari grid entri di metadata per-aset."""
    try:
        _, entries = read_entries(meta_path)
        return bytes_from_entries(entries)
    except ValueError as e:
        raise SystemExit(f"MASALAH: {e}")


def decode_meta(blob, width, height, args):
    entries = entries_from_bytes(blob, width, height)
    return {
        "id": args.id,
        "symbol": args.symbol,
        "kind": "tilemap",
        # Sama seperti codec lain: hanya status ini yang masuk manifest/aturan.
        "status": "rom-exact",
        "semantics": args.semantics,
        "rom": {
            "offset": f"0x{args.offset:X}",
            "size": len(blob),
            "sha256": sha256(blob),
        },
        "source": {"json": Path(args.json).name},
        "encoder": {"tool": "map2bin.py", "version": 1},
        "tilemap": {"width": width, "height": height},
        "entries": entries,
        "note": args.note,
    }


def verify(json_path, rom_path, out_path=None):
    meta, entries = read_entries(json_path)
    encoded = bytes_from_entries(entries)
    expected_hash = meta["rom"]["sha256"]
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(meta["rom"]["size"])
    rom = Path(rom_path).read_bytes()
    expected = rom[offset:offset + size]
    actual_hash = sha256(encoded)
    ok = (actual_hash == expected_hash
          and len(expected) == size and encoded == expected)
    if out_path is not None:
        out = Path(out_path)
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(encoded)
    grid = meta["tilemap"]
    print(f"symbol={meta.get('symbol', '?')} "
          f"grid={grid['width']}x{grid['height']}")
    print(f"size={len(encoded)} expected_sha256={expected_hash}")
    print(f"encoded_sha256={actual_hash}")
    print(f"status={'MATCH' if ok else 'MISMATCH'}")
    if not ok:
        if len(expected) != size:
            print(f"slice ROM {len(expected)} B, metadata bilang {size} B",
                  file=sys.stderr)
        return 1
    return 0


def cmd_decode(args):
    blob = Path(args.rom).read_bytes()[args.offset:args.offset + args.size]
    if len(blob) != args.size:
        raise SystemExit(f"slice ROM hanya {len(blob)} B, bukan {args.size} B")
    meta = decode_meta(blob, args.width, args.height, args)
    js = Path(args.json)
    js.parent.mkdir(parents=True, exist_ok=True)
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {args.width}x{args.height} entri, "
          f"{len(blob)} B, sha256={sha256(blob)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    d = sub.add_parser("decode", help="slice ROM -> metadata JSON entri")
    d.add_argument("--rom", default="baserom.gba")
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--width", type=int, required=True)
    d.add_argument("--height", type=int, required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.add_argument("--semantics", choices=("proven", "unidentified"),
                   default="unidentified")
    d.set_defaults(func=cmd_decode)

    e = sub.add_parser("encode", help="metadata JSON -> bin")
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
