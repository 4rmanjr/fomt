#!/usr/bin/env python3
"""compressed_bank.py — container `0x70` bertingkat: prefix + beberapa stream.

Kelas ini untuk blob yang bukan satu stream `0x70`, melainkan **prefix mentah
yang terbukti** (stempel/palet/header) diikuti beberapa stream `0x70`. Source
kanoniknya adalah prefix + entri 16-bit per stream + header kompresi asli
(tangga LZSS, dan pohon huffman bila ada), sama seperti `stream_audit.py`
memakai header stream sebagai parameter encoder.

Format metadata:

```json
{"kind": "compressed_bank",
 "rom": {"offset": "0x6DC3F4", "size": 344, "sha256": "..."},
 "prefix": "0011...", "prefix_size": 12,
 "streams": [
   {"format": "134", "unpacked": 1560, "packed": 196,
    "header": {"counts": [...], "leaves": [[...]], "widths": [3, 8, 12]},
    "entries": [0, 1, ...]},
   {"format": "030", "unpacked": 1560, "packed": 12,
    "header": {"widths": [7, 11, 13]}, "entries": [...]}
 ]}
```

`entries` disimpan little endian u16; `encode` menyusun ulang
`prefix + encode_stream(stream)` dan menolak bila panjang packed tidak sama
dengan metadata.

  python3 tools/assets/compressed_bank.py decode --rom baserom.gba \\
      --offset 0x6DC3F4 --size 344 --json assets/gfx/maps/gUnk_086DC3F4.json \\
      --id gfx/maps/gunk_086dc3f4 --symbol gUnk_086DC3F4
  python3 tools/assets/compressed_bank.py encode --json <json> --out x.bin
  python3 tools/assets/compressed_bank.py verify --json <json>
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
ASSETS = REPO / "tools" / "assets"
SCRIPTS = REPO / "tools" / "scripts"
sys.path.insert(0, str(ASSETS))
sys.path.insert(0, str(SCRIPTS))
import asset_inventory as inv  # noqa: E402
import decompress  # noqa: E402
import lz70  # noqa: E402

ROM = REPO / "baserom.gba"


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def discover(blob):
    """-> (prefix, streams) dengan stream berakhir tepat di ujung blob."""
    end = len(blob)
    for start in range(end - 4):
        if blob[start] != 0x70:
            continue
        cur, found = start, []
        while True:
            got = inv.decode_popuri(blob, cur, end)
            if not got:
                break
            packed, unpacked, fmt = got
            found.append((cur, packed, unpacked, fmt))
            cur += packed
        if found and cur == end:
            return blob[:start], found
    raise ValueError("tidak ada rantai stream 0x70 yang berakhir di ujung blob")


def stream_header(compressed, fmt):
    """Header kompresi asli: widths, plus counts/leaves untuk huffman."""
    atom, lzss, _diff = (int(c) for c in fmt)
    if atom in (1, 2):
        _size, spec, _atom, counts, leaves, widths = lz70.parse_huffman(
            compressed)
        if f"{(spec >> 3) & 3}{spec & 7}{spec >> 5}" != fmt:
            raise ValueError(f"spec {spec:#04x} != format {fmt}")
        return {"counts": counts, "leaves": leaves, "widths": list(widths)}
    if atom != 0:
        raise ValueError(f"atom {atom} tidak didukung")
    if lzss == 0:
        _size, widths, _tokens = lz70.parse(compressed)
    elif lzss == 2:
        _size, widths, _tokens, spec = lz70.parse_lzss2(compressed)
        if spec != (int(fmt[2]) << 5) | 2:
            raise ValueError(f"spec {spec:#04x} != format {fmt}")
    elif lzss == 3:
        _size, widths, _tokens, spec = lz70.parse_lzss3(compressed)
        if spec != (int(fmt[2]) << 5) | 3:
            raise ValueError(f"spec {spec:#04x} != format {fmt}")
    else:
        raise ValueError(f"lzss {lzss} tidak didukung")
    return {"widths": list(widths)}


def entries_from_bytes(data):
    if len(data) % 2:
        raise ValueError(f"payload {len(data)} B bukan kelipatan 2")
    return [int.from_bytes(data[i:i + 2], "little")
            for i in range(0, len(data), 2)]


def bytes_from_entries(entries):
    out = bytearray()
    for value in entries:
        if not isinstance(value, int) or not 0 <= value <= 0xFFFF:
            raise ValueError(f"entri {value!r} di luar u16")
        out += int(value).to_bytes(2, "little")
    return bytes(out)


def encode_stream(stream):
    """Satu stream metadata -> compressed byte-identik."""
    fmt = str(stream["format"])
    if len(fmt) != 3:
        raise ValueError(f"format {fmt!r} bukan tiga digit")
    atom, lzss, diff = (int(c) for c in fmt)
    data = bytes_from_entries(stream["entries"])
    unpacked = int(stream["unpacked"])
    if len(data) != unpacked:
        raise ValueError(f"format {fmt}: {len(data)} B != unpacked {unpacked}")
    header = stream["header"]
    widths = tuple(header["widths"])
    if atom == 0:
        if lzss == 0:
            if diff:
                raise ValueError(f"format {fmt}: diff != 0 pada lzss0")
            out = lz70.encode(data, widths, parity=True)
        elif lzss == 2:
            out = lz70.encode_lzss2(data, widths, diff)
        elif lzss == 3:
            out = lz70.encode_lzss3(data, widths, diff)
        else:
            raise ValueError(f"format {fmt}: lzss {lzss} tidak didukung")
    elif atom in (1, 2):
        spec = (diff << 5) | (atom << 3) | lzss
        tree = (unpacked, spec, atom, header["counts"], header["leaves"],
                widths)
        out = lz70.encode_huffman(data, tree)
    else:
        raise ValueError(f"format {fmt}: atom {atom} tidak didukung")
    packed = stream.get("packed")
    if packed is not None and len(out) != int(packed):
        raise ValueError(f"format {fmt}: encoder {len(out)} B != packed {packed}")
    return out


def encode_source(meta_path):
    """Prefix mentah + stream -> byte ROM."""
    meta = json.loads(Path(meta_path).read_text())
    prefix = bytes.fromhex(meta["prefix"])
    if len(prefix) != int(meta.get("prefix_size", len(prefix))):
        raise ValueError("prefix_size tidak cocok dengan prefix hex")
    out = bytearray(prefix)
    for stream in meta["streams"]:
        out += encode_stream(stream)
    return bytes(out)


def build_metadata(rom, offset, size, ident, symbol):
    blob = rom[offset:offset + size]
    if len(blob) != size:
        raise ValueError(f"slice ROM {len(blob)} B != size {size}")
    prefix, found = discover(blob)
    streams = []
    for at, packed, unpacked, fmt in found:
        compressed = blob[at:at + packed]
        data, decoded_fmt, _ladder = decompress.unpack(blob, at)
        if decoded_fmt != fmt or len(data) != unpacked:
            raise ValueError(f"stream +0x{at:X}: decode {decoded_fmt} != {fmt}")
        streams.append({
            "format": fmt,
            "offset": at,
            "packed": packed,
            "unpacked": unpacked,
            "header": stream_header(compressed, fmt),
            "entries": entries_from_bytes(data),
        })
    return {
        "id": ident,
        "symbol": symbol,
        "kind": "compressed_bank",
        "status": "rom-exact",
        "semantics": "unidentified",
        "rom": {
            "offset": f"0x{offset:X}",
            "size": size,
            "sha256": sha256(blob),
        },
        "source": {"json": f"{symbol}.json"},
        "encoder": {"tool": "compressed_bank.py", "version": 1},
        "evidence": (
            "Prefix 12 B = stempel 3x2 yang disalin func_080AA540; tiga stream "
            "0x70 ditunjuk tabel descriptor 0x08106860 (0x086DC400/0x086DC4C4/"
            "0x086DC4D0, 30x26 = 780 entri) dan rantainya berakhir tepat di ujung "
            "blob 344 B. Stream 134/030/023 direencode byte-identik dengan header "
            "aslinya (lihat docs/decomp/ASET-0X70-REENCODE.md)."),
        "prefix_size": len(prefix),
        "prefix": prefix.hex(),
        "streams": streams,
    }


def verify(meta_path, rom_path=ROM, require_switched=False):
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(meta["rom"]["size"])
    rom = Path(rom_path).read_bytes()
    original = rom[offset:offset + size]
    problems = []
    if len(original) != size:
        problems.append(f"slice ROM {len(original)} B != {size} B")
    try:
        encoded = encode_source(meta_path)
    except Exception as exc:  # noqa: BLE001 - laporkan semua kegagalan
        problems.append(f"encode gagal: {type(exc).__name__}: {exc}")
        encoded = None
    if encoded is not None:
        if sha256(encoded) != meta["rom"]["sha256"]:
            problems.append("sha256 encoder != metadata")
        if encoded != original:
            problems.append("byte encoder != slice ROM")
    if problems:
        for problem in problems:
            print(f"MASALAH {meta_path}: {problem}", file=sys.stderr)
        return 1
    total = sum(int(s["packed"]) for s in meta["streams"])
    print(f"{meta['symbol']}: OK {len(encoded)} B "
          f"({len(meta['streams'])} stream, {total} B compressed)")
    return 0


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd", required=True)
    dec = sub.add_parser("decode", help="ROM -> metadata JSON")
    dec.add_argument("--rom", type=Path, default=ROM)
    dec.add_argument("--offset", required=True)
    dec.add_argument("--size", required=True, type=int)
    dec.add_argument("--json", required=True, type=Path)
    dec.add_argument("--id", required=True)
    dec.add_argument("--symbol", required=True)
    enc = sub.add_parser("encode", help="metadata JSON -> byte ROM")
    enc.add_argument("--json", required=True, type=Path)
    enc.add_argument("--out", required=True, type=Path)
    ver = sub.add_parser("verify", help="cek ulang metadata vs ROM")
    ver.add_argument("--json", required=True, type=Path)
    ver.add_argument("--rom", type=Path, default=ROM)
    args = ap.parse_args(argv)
    if args.cmd == "decode":
        rom = args.rom.read_bytes()
        meta = build_metadata(rom, int(args.offset, 0), args.size, args.id,
                              args.symbol)
        args.json.write_text(json.dumps(meta, indent=1) + "\n")
        print(f"{args.json}: prefix {meta['prefix_size']} B, "
              f"{len(meta['streams'])} stream")
        return 0
    if args.cmd == "encode":
        out = encode_source(args.json)
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_bytes(out)
        print(f"{args.out}: {len(out)} B")
        return 0
    return verify(args.json, args.rom)


if __name__ == "__main__":
    raise SystemExit(main())
