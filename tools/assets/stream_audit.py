#!/usr/bin/env python3
"""Audit hash stream 0x70 dan klasifikasi kesiapan reencode byte-identik.

Tool ini sengaja **tidak** menganggap payload hasil decode sebagai bukti
reencode.  Setiap stream dihitung hash compressed dari slice ROM dan hash
decoded dari `assets/0x70/bin/`; status `opaque` diberikan bila belum ada
encoder 0x70 yang terbukti menghasilkan byte compressed yang sama.

  python3 tools/assets/stream_audit.py
  python3 tools/assets/stream_audit.py --check

Output: `assets/0x70/reencode_manifest.json` dan
`docs/decomp/ASET-0X70-REENCODE.md`.
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "scripts"
sys.path.insert(0, str(TOOLS))
sys.path.insert(0, str(REPO / "tools" / "assets"))
import asset_inventory as inv  # noqa: E402
import decompress  # noqa: E402
import lz70  # noqa: E402

MANIFEST = REPO / "assets" / "0x70" / "manifest.json"
EMBEDDED = REPO / "assets" / "0x70" / "embedded_manifest.json"
OUT = REPO / "assets" / "0x70" / "reencode_manifest.json"
DOC = REPO / "docs" / "decomp" / "ASET-0X70-REENCODE.md"


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def reencode_status(compressed, decoded, fmt):
    """-> (status, alasan). `ok` hanya dari encoder yang byte-identik."""
    try:
        if fmt == "000":
            _size, widths, _tokens = lz70.parse(compressed)
            encoded = lz70.encode(decoded, widths, parity=True)
            reason = ("encoder lz70 parity (match terpanjang, seri run) "
                      "menghasilkan byte identik dengan tangga asli")
        elif fmt in ("020", "023", "024"):
            _size, widths, _tokens, spec = lz70.parse_lzss2(compressed)
            if spec != ((int(fmt[2]) << 5) | 2):
                return "opaque", f"spec {spec:#04x} tidak cocok format {fmt}"
            encoded = lz70.encode_lzss2(decoded, widths, int(fmt[2]))
            reason = ("encoder lz70 atom0/lzss2 (match terpanjang, escape "
                      "literal >=9) byte identik dengan tangga asli")
        elif fmt in ("030", "033"):
            _size, widths, _tokens, spec = lz70.parse_lzss3(compressed)
            if spec != ((int(fmt[2]) << 5) | 3):
                return "opaque", f"spec {spec:#04x} tidak cocok format {fmt}"
            encoded = lz70.encode_lzss3(decoded, widths, int(fmt[2]))
            reason = ("encoder lz70 atom0/lzss3 (unit 2 B, escape literal "
                      ">=9 pasang) byte identik dengan tangga asli")
        else:
            return "opaque", f"belum ada encoder untuk format {fmt}"
    except ValueError as exc:
        return "opaque", f"encoder 0x70 gagal: {exc}"
    if encoded == compressed:
        return "ok", reason
    return "opaque", "encoder 0x70 belum byte-identik dengan stream asli"


def format_family(fmt):
    """(prioritas, keluarga) dari tiga digit atom/lzss/diff."""
    atom = int(fmt[0])
    lzss = int(fmt[1])
    if atom == 0 and lzss == 0:
        return "P0", "atom0/lzss0 (paling sederhana)"
    if atom == 0:
        return "P1", f"atom0/lzss{lzss}"
    if atom == 1:
        return "P2", f"huffman4/lzss{lzss}"
    return "P3", f"huffman8/lzss{lzss}"


def build(manifest=MANIFEST, rom_path=REPO / "baserom.gba",
          embedded_path=EMBEDDED):
    """-> laporan hash untuk blob `0x70` utuh **dan** bank `0x70` tertanam.

    Bank tertanam diambil dari `assets/0x70/embedded_manifest.json` (hasil
    `embedded_streams.py`): slice ROM-nya didekode ulang dan dibandingkan
    dengan bin `extern/` serta sha256 manifest itu, jadi cakupan laporan =
    seluruh stream `0x70` yang sudah diekstrak.
    """
    manifest = Path(manifest)
    rom = Path(rom_path).read_bytes()
    source = json.loads(manifest.read_text())
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        if entry is None:
            raise SystemExit(f"symbol {blob['blob']} tidak ada di inventory")
        for stream in blob["streams"]:
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            compressed = rom[offset:offset + packed]
            bin_path = manifest.parent / stream["bin"]
            decoded = bin_path.read_bytes()
            if len(decoded) != int(stream["unpacked"]):
                raise SystemExit(
                    f"{blob['blob']}#{stream['index']}: decoded "
                    f"{len(decoded)} != {stream['unpacked']}")
            if len(compressed) != packed:
                raise SystemExit(f"{blob['blob']}#{stream['index']}: compressed terpotong")
            try:
                from_rom, rom_fmt, _ = decompress.unpack(compressed, 0)
            except decompress.UnpackException as exc:
                raise SystemExit(
                    f"{blob['blob']}#{stream['index']}: decode gagal: {exc}")
            if from_rom != decoded:
                raise SystemExit(
                    f"{blob['blob']}#{stream['index']}: decode compressed != bin")
            priority, family = format_family(str(stream["format"]))
            reencode, reason = reencode_status(
                compressed, decoded, str(stream["format"]))
            rows.append({
                "symbol": blob["blob"],
                "index": stream["index"],
                "source": "blob 0x70",
                "format": str(stream["format"]),
                "family": family,
                "priority": priority,
                "group": stream.get("group", "?"),
                "compressed": {
                    "offset": f"0x{offset:06X}",
                    "size": packed,
                    "sha256": sha256(compressed),
                },
                "decoded": {
                    "size": len(decoded),
                    "sha256": sha256(decoded),
                    "bin": stream["bin"],
                    "decoded_from_compressed": True,
                    "format_decoded": rom_fmt,
                },
                "reencode": reencode,
                "reason": reason,
            })
    embedded = Path(embedded_path)
    banks = json.loads(embedded.read_text()).get("banks", []) \
        if embedded.exists() else []
    for bank in banks:
        entry = by_symbol.get(bank["blob"])
        if entry is None:
            raise SystemExit(f"symbol {bank['blob']} tidak ada di inventory")
        for stream in bank["streams"]:
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            compressed = rom[offset:offset + packed]
            decoded = (embedded.parent / stream["bin"]).read_bytes()
            where = f"{bank['blob']}#{stream['index']}"
            if len(decoded) != int(stream["unpacked"]):
                raise SystemExit(
                    f"{where}: decoded {len(decoded)} != {stream['unpacked']}")
            if len(compressed) != packed:
                raise SystemExit(f"{where}: compressed terpotong")
            try:
                from_rom, rom_fmt, _ = decompress.unpack(compressed, 0)
            except decompress.UnpackException as exc:
                raise SystemExit(f"{where}: decode gagal: {exc}")
            if from_rom != decoded:
                raise SystemExit(
                    f"{where}: decode compressed != bin extern")
            if sha256(decoded) != stream["sha256"]:
                raise SystemExit(
                    f"{where}: bin extern beda dengan embedded_manifest")
            priority, family = format_family(str(stream["format"]))
            reencode, reason = reencode_status(
                compressed, decoded, str(stream["format"]))
            rows.append({
                "symbol": bank["blob"],
                "index": stream["index"],
                "source": "bank tertanam",
                "format": str(stream["format"]),
                "family": family,
                "priority": priority,
                "group": stream.get("group", "?"),
                "compressed": {
                    "offset": f"0x{offset:06X}",
                    "size": packed,
                    "sha256": sha256(compressed),
                },
                "decoded": {
                    "size": len(decoded),
                    "sha256": sha256(decoded),
                    "bin": f"{stream['bin']}",
                    "decoded_from_compressed": True,
                    "format_decoded": rom_fmt,
                },
                "reencode": reencode,
                "reason": reason,
            })
    counts = {}
    for row in rows:
        counts[row["reencode"]] = counts.get(row["reencode"], 0) + 1
    blobs = {}
    for row in rows:
        if row["source"] != "blob 0x70":
            continue
        blob = blobs.setdefault(row["symbol"], {
            "symbol": row["symbol"],
            "streams": 0,
            "formats": set(),
            "fully_encoded": True,
        })
        blob["streams"] += 1
        blob["formats"].add(row["format"])
        if row["reencode"] != "ok":
            blob["fully_encoded"] = False
    blob_rows = [
        {"symbol": b["symbol"], "streams": b["streams"],
         "formats": sorted(b["formats"]),
         "fully_encoded": b["fully_encoded"]}
        for b in sorted(blobs.values(), key=lambda b: b["symbol"])
    ]
    priorities = {}
    for row in rows:
        key = (row["priority"], row["family"])
        p = priorities.setdefault(key, {"streams": 0, "packed": 0, "decoded": 0})
        p["streams"] += 1
        p["packed"] += row["compressed"]["size"]
        p["decoded"] += row["decoded"]["size"]
    sources = {}
    for row in rows:
        s = sources.setdefault(row["source"],
                               {"streams": 0, "packed": 0, "decoded": 0})
        s["streams"] += 1
        s["packed"] += row["compressed"]["size"]
        s["decoded"] += row["decoded"]["size"]
    return {
        "source_manifest": str(manifest.relative_to(REPO)),
        "total": len(rows),
        "reencodeable": sum(1 for r in rows if r["reencode"] == "ok"),
        "opaque": sum(1 for r in rows if r["reencode"] == "opaque"),
        "decode_verified": sum(
            1 for r in rows if r["decoded"]["decoded_from_compressed"]),
        "counts": counts,
        "priorities": [
            {"priority": k[0], "family": k[1], **v}
            for k, v in sorted(priorities.items())
        ],
        "blobs": blob_rows,
        "sources": [{"source": k, **v}
                    for k, v in sorted(sources.items())],
        "embedded_banks": len(banks),
        "streams": rows,
    }


def render_doc(result):
    out = [
        "# Klasifikasi reencode stream `0x70`",
        "",
        "**Dihasilkan otomatis** oleh `python3 tools/assets/stream_audit.py`.",
        "Hash `compressed` dihitung dari slice ROM; hash `decoded` dari",
        "`assets/0x70/bin/` (blob utuh) dan `assets/0x70/extern/` (bank",
        "tertanam). Setiap slice compressed juga didekode ulang dan",
        "dibandingkan dengan bin sebelum hash dicatat. Status hanya `ok` bila",
        "encoder menghasilkan byte compressed yang sama, bukan hanya payload",
        "yang sama.",
        "",
        "Cakupan: stream dari blob yang seluruhnya berformat `0x70` di",
        "`assets/0x70/manifest.json` **dan** stream bank `0x70` tertanam yang",
        "diekstrak `embedded_streams.py` ke `assets/0x70/extern/` (lihat",
        "`ASET-0X70-TERTANAM.md`). Stream bank tertanam dicek ulang di sini:",
        "slice ROM-nya harus decode ke bin `extern/` dengan sha256 yang sama",
        "dengan `embedded_manifest.json`, jadi laporan ini mencakup seluruh",
        "stream `0x70` yang sudah diekstrak, bukan hanya blob utuh.",
        "",
        "## Ringkasan",
        "",
        f"- total stream: **{result['total']}**",
    ]
    for s in result["sources"]:
        out.append(f"- sumber `{s['source']}`: **{s['streams']}** stream, "
                   f"{s['packed']} B compressed → {s['decoded']} B decoded")
    out += [
        f"- bank tertanam tercakup: **{result['embedded_banks']}**",
        f"- compressed → decoded terverifikasi: **{result['decode_verified']}**",
        f"- bisa direencode byte-identik: **{result['reencodeable']}**",
        f"- wajib `opaque`: **{result['opaque']}**",
        "",
        "## Prioritas konversi",
        "",
        "| prioritas | keluarga | stream | compressed B | decoded B |",
        "|---|---|---:|---:|---:|",
    ]
    for p in result["priorities"]:
        out.append(f"| {p['priority']} | {p['family']} | {p['streams']} | "
                   f"{p['packed']} | {p['decoded']} |")
    out += [
        "",
        "## Status per blob `0x70`",
        "",
        "Setiap blob dimuat utuh oleh `Unpack` (call site di",
        "`ASET-0X70-PETA-BERKAS.md`), jadi satu stream yang belum byte-identik",
        "memblokir penggantian `.incbin` seluruh blob. Blob yang seluruh",
        "stream-nya `ok` sudah siap kalau container encoder dibuat.",
        "",
        "| simbol | stream | format | status |",
        "|---|---:|---|---|",
    ]
    for blob in result["blobs"]:
        status = ("siap container" if blob["fully_encoded"]
                  else "parkir: ada format tanpa encoder")
        out.append(f"| `{blob['symbol']}` | {blob['streams']} | "
                   f"`{','.join(blob['formats'])}` | {status} |")
    out += [
        "",
        "Status `ok` hanya untuk stream yang compressed-nya dihasilkan ulang",
        "byte-identik oleh `lz70.py` dengan tangga asli.",
        "Aturan terbukti pada format `000`: match terpanjang (seri -> jarak",
        "terdekat), run menang bila panjangnya >= match, literal berhenti di",
        "run>=2 atau match berikutnya. Untuk atom0/lzss2 (`020`/`023`/`024`)",
        "aturannya match terpanjang (jarak seri -> terdekat), literal escape",
        "dipakai mulai 9 B, match >18 B lewat escape, dan match 3 B di tiga",
        "byte terakhir tidak dipakai. Lzss3 (`030`/`033`) memakai unit 2 B:",
        "match minimal 2 unit, pendek 2..9 unit, >9 unit lewat escape, literal",
        "escape mulai 9 pasang. Format huffman (`1xx`/`2xx`) tetap `opaque`",
        "karena belum ada encodernya. `ok` di level stream juga",
        "belum berarti blob boleh diganti `.incbin`: satu blob bisa memuat",
        "banyak stream, dan penggantian menunggu seluruh isi blob ter-encode.",
        "",
        "## Bukti hash",
        "",
        "| simbol | # | sumber | format | group | compressed | decoded | compressed sha256 | decoded sha256 | status |",
        "|---|---:|---|---|---|---:|---:|---|---|---|",
    ]
    for r in result["streams"]:
        out.append(
            f"| `{r['symbol']}` | {r['index']} | {r['source']} | "
            f"`{r['format']}` | "
            f"{r['group']} | {r['compressed']['size']} | "
            f"{r['decoded']['size']} | `{r['compressed']['sha256']}` | "
            f"`{r['decoded']['sha256']}` | {r['reencode']} |")
    out += [
        "",
        "## Aturan",
        "",
        "- `opaque` adalah status jujur, bukan kegagalan yang boleh disembunyikan.",
        "- Jangan mengganti `.incbin` hanya karena decoded hash cocok.",
        "- Naikkan status hanya setelah encoder + hash compressed + hash decoded",
        "  cocok, lalu `make compare` HIJAU.",
    ]
    return "\n".join(out) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila laporan basi")
    ap.add_argument("--manifest", type=Path, default=MANIFEST)
    ap.add_argument("--rom", type=Path, default=REPO / "baserom.gba")
    args = ap.parse_args(argv)
    result = build(args.manifest, args.rom)
    data = json.dumps(result, indent=1) + "\n"
    doc = render_doc(result)
    if args.check:
        if not OUT.exists() or not DOC.exists():
            print("MASALAH: laporan reencode belum ada", file=sys.stderr)
            return 1
        if OUT.read_text() != data or DOC.read_text() != doc:
            print("BASI: laporan reencode — jalankan tool tanpa --check",
                  file=sys.stderr)
            return 1
        print("laporan reencode sinkron")
        return 0
    OUT.write_text(data)
    DOC.parent.mkdir(parents=True, exist_ok=True)
    DOC.write_text(doc)
    print(f"stream={result['total']} reencodeable={result['reencodeable']} "
          f"opaque={result['opaque']}")
    print(f"output={OUT.relative_to(REPO)}")
    print(f"doc={DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
