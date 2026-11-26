#!/usr/bin/env python3
"""stream_bank.py — kontainer `0x70` utuh: beberapa stream bersambung.

`compressed_bank.py` menangani prefix mentah + stream; kelas `stream_bank`
untuk blob yang **seluruhnya** berupa stream `0x70` tanpa celah (mis. 53
simbol grafis terkompresi `gUnk_08527238`..`gUnk_08757F20`). Source
kanoniknya payload hasil decode per stream (`assets/0x70/bin/*.bin`) + header
kompresi asli (tangga LZSS / pohon huffman). Encoder menulis ulang byte ROM
dari payload itu — tidak ada byte terkompresi yang disalin mentah.

  python3 tools/assets/stream_bank.py decode --symbol gUnk_08527238 \\
      --offset 0x527238 --size 0x110 --json assets/gfx/streams/gunk_08527238.json
  python3 tools/assets/stream_bank.py encode --json <json> --out x.bin
  python3 tools/assets/stream_bank.py verify --json <json>
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
ASSETS = Path(__file__).resolve().parent
sys.path.insert(0, str(ASSETS))
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import lz70  # noqa: E402

ROM = REPO / "baserom.gba"
STREAMS = REPO / "assets" / "0x70"
MANIFEST70 = STREAMS / "manifest.json"

LZSS2 = ("020", "023", "024")
LZSS3 = ("030", "033")


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def _fmt(spec):
    """Byte format -> string 3 digit `atom lzss diff` (lihat decompress.py)."""
    return f"{(spec >> 3) & 3}{spec & 7}{(spec >> 5) & 7}"


def _source_path(meta_path, rel):
    path = Path(rel)
    if path.is_absolute():
        return path
    beside = Path(meta_path).parent / path
    return beside if beside.exists() else REPO / path


def _stream_header(compressed, unpacked, fmt):
    """-> dict header encoder dari stream asli (format wajib cocok)."""
    if fmt == "000":
        size, widths, _tokens = lz70.parse(compressed)
        got = "000"
        return {"format": got, "ladder": list(widths)}
    if fmt in LZSS2:
        size, widths, _tokens, spec = lz70.parse_lzss2(compressed)
        got = _fmt(spec)
        return {"format": got, "ladder": list(widths)}
    if fmt in LZSS3:
        size, widths, _tokens, spec = lz70.parse_lzss3(compressed)
        got = _fmt(spec)
        return {"format": got, "ladder": list(widths)}
    size, spec, atom, counts, leaves, widths = lz70.parse_huffman(compressed)
    got = _fmt(spec)
    return {"format": got,
            "huffman": {"spec": spec, "atom": atom, "counts": list(counts),
                        "leaves": [list(x) for x in leaves],
                        "widths": list(widths)}}


def encode_stream(meta_path, stream):
    """Satu stream: payload bin + header asli -> byte compressed identik."""
    data = _source_path(meta_path, stream["bin"]).read_bytes()
    if len(data) != stream["unpacked"]:
        raise SystemExit(f"{stream['bin']}: {len(data)} B != unpacked "
                         f"{stream['unpacked']}")
    fmt = stream["format"]
    if fmt == "000":
        out = lz70.encode(data, stream["ladder"], parity=True)
    elif fmt in LZSS2:
        out = lz70.encode_lzss2(data, stream["ladder"], int(fmt[2]))
    elif fmt in LZSS3:
        out = lz70.encode_lzss3(data, stream["ladder"], int(fmt[2]))
    else:
        h = stream["huffman"]
        out = lz70.encode_huffman(
            data, (stream["unpacked"], h["spec"], h["atom"], h["counts"],
                   h["leaves"], h["widths"]))
    if len(out) != stream["packed"]:
        raise SystemExit(f"{stream['bin']}: encoder {len(out)} B != packed "
                         f"{stream['packed']}")
    return out


def encode_source(meta_path):
    """Metadata -> byte blob utuh (stream berurutan, tanpa celah)."""
    meta = json.loads(Path(meta_path).read_text())
    out = b"".join(encode_stream(meta_path, s) for s in meta["streams"])
    size = int(str(meta["rom"]["size"]), 0)
    if len(out) != size:
        raise SystemExit(f"{meta_path}: encoder {len(out)} B != {size} B")
    return out


def coverage(meta, meta_path=None):
    """Semua byte ditulis dari stream; tidak ada raw/padding."""
    total = int(str(meta["rom"]["size"]), 0)
    proven = sum(s["packed"] for s in meta["streams"])
    return {"total_bytes": total, "proven_bytes": proven,
            "raw_bytes": total - proven,
            "proven_ratio": round(proven / total, 4)}


def decode(symbol, offset, size, manifest_path=MANIFEST70, rom_path=ROM,
           ident=None, png=None, note=None, evidence=None):
    """Manifest 0x70 + slice ROM -> metadata `stream_bank` (status rom-exact)."""
    manifest = json.loads(Path(manifest_path).read_text())
    entry = next((b for b in manifest["streams"] if b["blob"] == symbol), None)
    if entry is None:
        raise SystemExit(f"{symbol}: tidak ada di {manifest_path}")
    if entry["size"] != size:
        raise SystemExit(f"{symbol}: manifest {entry['size']} B != {size} B")
    rom = Path(rom_path).read_bytes()
    blob = rom[offset:offset + size]
    streams = []
    cur = 0
    for s in entry["streams"]:
        if s["offset"] != cur:
            raise SystemExit(f"{symbol}: celah di +{cur:#x}..+{s['offset']:#x}")
        compressed = blob[s["offset"]:s["offset"] + s["packed"]]
        bin_rel = f"assets/0x70/{s['bin']}"
        payload = (REPO / bin_rel).read_bytes()
        if len(payload) != s["unpacked"]:
            raise SystemExit(f"{bin_rel}: {len(payload)} B != unpacked "
                             f"{s['unpacked']}")
        header = _stream_header(compressed, s["unpacked"], s["format"])
        if header["format"] != s["format"]:
            raise SystemExit(f"{symbol} stream {s['index']}: format "
                             f"{header['format']} != manifest {s['format']}")
        row = {"format": s["format"], "packed": s["packed"],
               "unpacked": s["unpacked"], "bin": bin_rel,
               "bin_sha256": sha256(payload)}
        row.update(header)
        if s.get("note"):
            row["note"] = s["note"]
        streams.append(row)
        cur += s["packed"]
    if cur != size:
        raise SystemExit(f"{symbol}: stream {cur} B != {size} B")
    meta = {
        "id": ident or f"gfx/streams/gunk_{symbol.removeprefix('gUnk_').lower()}",
        "symbol": symbol,
        "kind": "stream_bank",
        "semantics": "unidentified",
        "status": "rom-exact",
        "rom": {"offset": f"0x{offset:X}", "size": size,
                "sha256": sha256(blob)},
        "source": {"json": ""},
        "encoder": {"tool": "stream_bank.py", "version": 1},
        "streams": streams,
        "note": note or (f"{len(streams)} stream 0x70 bersambung tanpa celah; "
                         "payload per stream dari assets/0x70/bin, header "
                         "kompresi asli dari stream ROM."),
        "evidence": evidence or (
            f"assets/0x70/manifest.json entri {symbol}: {len(streams)} stream, "
            f"{size} B; stream_audit.py membuktikan encoder lz70 byte-identik "
            "untuk semua stream (reencode ok)."),
    }
    if png:
        meta["source"]["png"] = png
    meta["coverage"] = coverage(meta)
    return meta


def verify(meta_path, rom_path=ROM):
    """-> daftar masalah (kosong = byte + hash cocok slice ROM)."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    problems = []
    encoded = encode_source(meta_path)
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(str(meta["rom"]["size"]), 0)
    rom = Path(rom_path).read_bytes()
    original = rom[offset:offset + size]
    if len(encoded) != size:
        problems.append(f"encoder {len(encoded)} B != {size} B")
    if sha256(encoded) != meta["rom"]["sha256"]:
        problems.append("sha256 encoder != metadata")
    if encoded != original:
        problems.append("byte encoder != slice ROM")
    cov = coverage(meta, meta_path)
    if meta.get("coverage") != cov:
        problems.append(f"coverage {meta.get('coverage')} != {cov}")
    for i, s in enumerate(meta["streams"]):
        if sha256(_source_path(meta_path, s["bin"]).read_bytes()) != s["bin_sha256"]:
            problems.append(f"stream[{i}] bin_sha256 basi: {s['bin']}")
    return problems


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("decode", help="manifest 0x70 + ROM -> metadata")
    d.add_argument("--symbol", required=True)
    d.add_argument("--offset", required=True)
    d.add_argument("--size", required=True, type=lambda v: int(str(v), 0))
    d.add_argument("--json", required=True)
    d.add_argument("--manifest", default=str(MANIFEST70))
    d.add_argument("--rom", default=str(ROM))
    d.add_argument("--png")
    e = sub.add_parser("encode", help="metadata -> blob")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    v = sub.add_parser("verify", help="byte + hash vs slice ROM")
    v.add_argument("--json", required=True)
    v.add_argument("--rom", default=str(ROM))
    a = ap.parse_args(argv)
    if a.cmd == "decode":
        meta = decode(a.symbol, int(str(a.offset), 0), a.size, a.manifest,
                      a.rom, png=a.png)
        out = Path(a.json)
        try:
            meta["source"]["json"] = out.relative_to(REPO).as_posix()
        except ValueError:
            meta["source"]["json"] = out.as_posix()
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(json.dumps(meta, indent=1) + "\n")
        print(f"{out}: {len(meta['streams'])} stream, {a.size} B")
        return 0
    if a.cmd == "encode":
        data = encode_source(a.json)
        Path(a.out).parent.mkdir(parents=True, exist_ok=True)
        Path(a.out).write_bytes(data)
        print(f"{a.out}: {len(data)} B")
        return 0
    problems = verify(a.json, a.rom)
    for p in problems:
        print(f"MASALAH {a.json}: {p}")
    print(f"{a.json}: {'OK' if not problems else 'GAGAL'}")
    return 1 if problems else 0


if __name__ == "__main__":
    raise SystemExit(main())
