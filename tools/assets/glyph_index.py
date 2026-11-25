#!/usr/bin/env python3
"""glyph_index.py — codec tabel indeks glyph s16 (`func_080D0D28`).

Dua blob di `func_080D0D28` bukan glyph maupun container: isinya array
`int16` little-endian yang memetakan kode karakter ke indeks record glyph.
Nilai negatif (praktiknya `-1`) berarti karakter itu tidak punya glyph; pemanggil
mengosongkan sel glyph 8x12 dengan `memset 0x80`.

- `gUnk_084FA7A0` (256 entri): kode satu byte `0x00`–`0xFF`; indeks langsung
  `kode * 2`.
- `gUnk_08523290` (7938 entri): kode dua byte; `func_080D0CD4` mengubahnya
  menjadi indeks linear `189 * lead + (trail - 0x40)` dengan lead `0x81`–`0x9F`
  (offset 0–30) dan `0xE0`–`0xEA` (offset 31–41), lalu `ldrsh` dari
  `tabel + indeks * 2`.

Source kanonik adalah `source.entries` di metadata JSON: satu bilangan desimal
per baris, urut indeks. `encode` menolak jumlah entri yang tidak sama dengan
`source.count` maupun `rom.size / 2`, dan nilai di luar rentang s16.

  python3 tools/assets/glyph_index.py decode --rom baserom.gba \
      --offset 0x4FA7A0 --size 512 --encoding byte \
      --json assets/gfx/fonts/glyph_index_04fa7a0.json \
      --id gfx/fonts/gunk_084fa7a0 --symbol gUnk_084FA7A0
  python3 tools/assets/glyph_index.py verify \
      --json assets/gfx/fonts/glyph_index_04fa7a0.json

Tidak menjalankan build dan tidak menyentuh `asm/data/*.s`.
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
S16_MIN = -0x8000
S16_MAX = 0x7FFF
ENCODINGS = ("byte", "shift-jis")


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def decode_blob(blob):
    """Byte ROM -> daftar int16 (little-endian)."""
    if len(blob) % 2:
        raise ValueError(f"tabel {len(blob)} B bukan kelipatan 2 B (s16)")
    return list(struct.unpack(f"<{len(blob) // 2}h", blob))


def encode_values(values):
    """Daftar int16 -> byte ROM little-endian."""
    out = bytearray()
    for index, value in enumerate(values):
        if isinstance(value, bool) or not isinstance(value, int):
            raise ValueError(f"entri {index}: {value!r} bukan bilangan bulat")
        if not S16_MIN <= value <= S16_MAX:
            raise ValueError(f"entri {index}: {value} di luar rentang s16")
        out += struct.pack("<h", value)
    return bytes(out)


def encode_source(meta_path):
    """Byte ROM dari `source.entries` yang dirujuk metadata per-aset."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    source = meta["source"]
    entries = source.get("entries")
    if not isinstance(entries, list):
        raise SystemExit(f"{meta_path}: source.entries tidak ada")
    if "count" in source and source["count"] != len(entries):
        raise SystemExit(
            f"{meta_path}: source.count {source['count']} != "
            f"{len(entries)} entri")
    size = int(str(meta["rom"]["size"]))
    if len(entries) * 2 != size:
        raise SystemExit(
            f"{meta_path}: {len(entries)} entri != rom.size {size} B "
            f"({size // 2} s16)")
    encoding = source.get("encoding")
    if encoding not in ENCODINGS:
        raise SystemExit(f"{meta_path}: source.encoding wajib {ENCODINGS}")
    try:
        return encode_values(entries)
    except ValueError as e:
        raise SystemExit(f"{meta_path}: {e}")


def verify(meta_path, rom_path=None, out_path=None):
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    encoded = encode_source(meta_path)
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


def decode_blob_meta(blob, encoding):
    if encoding not in ENCODINGS:
        raise ValueError(f"encoding wajib {ENCODINGS}, bukan {encoding!r}")
    entries = decode_blob(blob)
    return {
        "kind": "glyph_index",
        "source": {
            "count": len(entries),
            "format": "s16le",
            "encoding": encoding,
            "entries": entries,
        },
        "encoder": {"tool": "glyph_index.py", "version": 1},
    }


def cmd_decode(args):
    rom = Path(args.rom).read_bytes()
    blob = rom[args.offset:args.offset + args.size]
    if len(blob) != args.size:
        raise SystemExit(f"slice ROM hanya {len(blob)} B, bukan {args.size} B")
    meta = decode_blob_meta(blob, args.encoding)
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
    meta["status"] = "rom-exact"
    meta["semantics"] = "unidentified"
    if args.evidence:
        meta["evidence"] = args.evidence
    js = Path(args.json)
    js.parent.mkdir(parents=True, exist_ok=True)
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {meta['source']['count']} entri s16, "
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

    d = sub.add_parser("decode", help="slice ROM s16 -> metadata JSON")
    d.add_argument("--rom", required=True)
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--encoding", choices=ENCODINGS, required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.add_argument("--evidence", default="")
    d.set_defaults(func=cmd_decode)

    e = sub.add_parser("encode", help="metadata JSON -> byte tabel s16")
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
