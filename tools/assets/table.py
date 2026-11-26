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
   {"offset": 4, "format": "hex", "hex": "00000000...",
    "note": "blok gaya; hanya satu blok per panggilan yang dibaca"}
 ]}}
```

Format yang didukung: `u8`, `u16le`, `u32le`, dan `hex`. `values` dipakai
untuk array bilangan; `hex` untuk byte yang belum punya arti per-field. Segmen
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
        try:
            return offset, bytes.fromhex(segment["hex"])
        except (KeyError, ValueError) as exc:
            raise ValueError(f"segmen {offset:#x}: hex tidak valid: {exc}")
    raise ValueError(f"segmen {offset:#x}: format {fmt!r} tidak dikenal")


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
