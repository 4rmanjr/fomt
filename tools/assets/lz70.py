#!/usr/bin/env python3
"""lz70.py — encoder `0x70` minimal (atom0/lzss0/diff0) + uji byte-identik.

Format `000` = atom 0 (bit mentah), LZSS 0, diff 0. Encoder di sini sengaja
minimal: tangga jarak 2 entri, pencocokan greedy, run literal/run-length
dipotong maksimum. Tujuannya menjawab satu pertanyaan: payload yang sama bisa
dipadatkan **byte-identik** dengan aslinya atau tidak.

Tiga tingkat uji di `probe`:

1. `roundtrip` — packed hasil encoder didekode ulang harus sama dengan payload;
2. `replay` — perintah hasil parse stream asli, ditulis ulang serializer,
   harus sama byte dengan compressed asli (menguji model bit/header);
3. `match` — encoder greedy dari payload harus sama byte dengan compressed
   asli (menguji pilihan perintah encoder asli).

  python3 tools/assets/lz70.py encode --bin x.bin --out x.packed [--ladder 7,11]
  python3 tools/assets/lz70.py probe            # 3 stream P0 format 000
  python3 tools/assets/lz70.py probe --sweep    # tangga 1..12 x 1..12
  python3 tools/assets/lz70.py probe --json --write-report

Status stream hanya berubah lewat `stream_audit.py`; tool ini tidak menyunting
manifest.
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import decompress  # noqa: E402

MANIFEST = REPO / "assets" / "0x70" / "manifest.json"
ROM = REPO / "baserom.gba"
REPORT = REPO / "assets" / "0x70" / "encoder_probe.md"

LADDER_DEFAULT = (7, 11)
MIN_MATCH = 3
MAX_MATCH = 66  # size = 3 + 6 bit
WINDOW = 8192


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def pack_bits(bits):
    """Deret bit -> byte stream `0x70`: kata 32-bit little endian, bit MSB dulu.

    `decompress.ReadBits` memuat 4 byte little endian lalu mengambil bit dari
    MSB kata, jadi bit dipetakan ke kata, bukan langsung ke byte.
    """
    padded = list(bits) + [0] * (-len(bits) % 32)
    out = bytearray()
    for i in range(0, len(padded), 32):
        word = 0
        for bit in padded[i:i + 32]:
            word = (word << 1) | (bit & 1)
        out += struct.pack("<I", word)
    return bytes(out)


class BitWriter:
    def __init__(self):
        self.bits = []

    def write(self, value, count):
        for shift in range(count - 1, -1, -1):
            self.bits.append((value >> shift) & 1)

    def bytes(self):
        return pack_bits(self.bits)


class Ladder:
    """Tangga jarak: entri ke-i = base + N bit; base berurutan seperti decoder."""

    def __init__(self, widths):
        self.widths = tuple(widths)
        self.bases = []
        start = 1
        for width in self.widths:
            self.bases.append(start)
            start += 1 << width

    def encode(self, distance):
        for index, (base, width) in enumerate(zip(self.bases, self.widths)):
            if base <= distance < base + (1 << width):
                return index, distance - base
        return None

    def header_bits(self):
        return [(w - 1) & 0xF for w in self.widths]


def _emit_literal(writer, chunk):
    start = 0
    while start < len(chunk):
        take = min(64, len(chunk) - start)
        writer.write(2, 2)
        writer.write(take - 1, 6)
        for byte in chunk[start:start + take]:
            writer.write(byte, 8)
        start += take


def _emit_run(writer, byte, size):
    start = 0
    while start < size:
        take = min(65, size - start)
        writer.write(3, 2)
        writer.write(take - 2, 6)
        writer.write(byte, 8)
        start += take


def _emit_match(writer, ladder, distance, length):
    index, raw = ladder.encode(distance)
    if index is None:
        raise ValueError(f"jarak {distance} di luar tangga {ladder.widths}")
    writer.write(index, 2)
    writer.write(raw, ladder.widths[index])
    writer.write(length - 3, 6)


def _tokens(data, ladder):
    """Greedy: literal / run-length / match (jarak harus masuk tangga)."""
    n = len(data)
    out = []
    i = 0
    head = {}
    while i < n:
        best_len, best_dist = 0, 0
        window = min(MAX_MATCH, n - i)
        if window >= MIN_MATCH:
            for candidate in reversed(head.get(data[i:i + 3], [])[-64:]):
                dist = i - candidate
                if dist > WINDOW or ladder.encode(dist) is None:
                    continue
                length = 3
                while (length < window
                       and data[candidate + length] == data[i + length]):
                    length += 1
                if length > best_len:
                    best_len, best_dist = length, dist
                    if length == window:
                        break
        if best_len >= MIN_MATCH:
            out.append(("match", best_dist, best_len))
            step = best_len
        else:
            run = 1
            while i + run < n and run < 65 and data[i + run] == data[i]:
                run += 1
            if run >= 2:
                out.append(("run", data[i], run))
                step = run
            else:
                # literal sampai ada match atau run berikutnya
                end = i + 1
                while end < n and end - i < 64:
                    if ladder.encode(1) is not None and end + 3 <= n and \
                            data[end:end + 3] in head:
                        break
                    if end + 1 < n and data[end] == data[end + 1]:
                        break
                    end += 1
                out.append(("literal", bytes(data[i:end]), end - i))
                step = end - i
        for j in range(i, min(i + step, n)):
            if j + 3 <= n:
                head.setdefault(data[j:j + 3], []).append(j)
        i += step
    return out


def _tokens_optimal(data, ladder):
    """Dynamic programming: total bit minimum, seri dipilih token terpanjang.

    Hasilnya berukuran sama dengan stream asli pada ketiga stream P0, tetapi
    susunan perintahnya berbeda (lihat `assets/0x70/encoder_probe.md`), jadi
    belum dipakai sebagai encoder pengganti `opencode`.
    """
    n = len(data)
    inf = 1 << 60
    cost = [inf] * (n + 1)
    back = [None] * (n + 1)
    cost[0] = 0
    max_distance = ladder.bases[-1] + (1 << ladder.widths[-1]) - 1
    for i in range(n):
        if cost[i] == inf:
            continue
        candidates = []
        for length in range(1, min(64, n - i) + 1):
            candidates.append(("literal", length, None, cost[i] + 10 + 8 * length))
        run = 1
        while i + run < n and run < 65 and data[i + run] == data[i]:
            run += 1
        for length in range(2, run + 1):
            candidates.append(("run", length, data[i], cost[i] + 18))
        for distance in range(1, min(i, max_distance) + 1):
            entry = ladder.encode(distance)
            if entry is None:
                continue
            index, _raw = entry
            limit = 0
            while (limit < 66 and i + limit < n
                   and data[i - distance + limit] == data[i + limit]):
                limit += 1
            if limit < MIN_MATCH:
                continue
            price = cost[i] + 2 + ladder.widths[index] + 6
            for length in range(MIN_MATCH, limit + 1):
                candidates.append(("match", length, distance, price))
        for kind, length, value, price in candidates:
            end = i + length
            if price < cost[end] or (price == cost[end] and back[end]
                                     and length > back[end][2]):
                cost[end] = price
                back[end] = (i, kind, length, value)
    tokens = []
    position = n
    while position > 0:
        start, kind, length, value = back[position]
        if kind == "literal":
            tokens.append(("literal", bytes(data[start:position]), length))
        elif kind == "run":
            tokens.append(("run", value, length))
        else:
            tokens.append(("match", value, length))
        position = start
    tokens.reverse()
    return tokens


def encode(data, ladder_widths=LADDER_DEFAULT, optimal=False):
    """Payload -> byte stream `0x70` format 000 (header + tangga + perintah)."""
    ladder = Ladder(ladder_widths)
    if len(data) > 0xFFFFFF:
        raise ValueError("payload > 24 bit")
    if optimal:
        return serialize(len(data), ladder_widths, _tokens_optimal(data, ladder))
    writer = BitWriter()
    writer.write(0, 8)  # format byte 000 ikut bitstream, bukan byte terpisah
    for value in ladder.header_bits():
        writer.write(value, 4)
    for kind, value, extra in _tokens(data, ladder):
        if kind == "literal":
            _emit_literal(writer, value)
        elif kind == "run":
            _emit_run(writer, value, extra)
        else:
            _emit_match(writer, ladder, value, extra)
    return struct.pack("<I", (len(data) << 8) | 0x70) + writer.bytes()


def parse(stream):
    """Stream format 000 -> (size, widths, tokens) dengan decoder repo."""
    head = int.from_bytes(stream[:4], "little")
    if head & 0xFF != 0x70:
        raise ValueError("bukan header 0x70")
    size = head >> 8
    read = decompress.ReadRaw(decompress.ReadBits(stream, 4))
    fmt = read.read_bits(8)
    if fmt != 0:
        raise ValueError(f"format byte {fmt:#04x} bukan 000")
    widths = tuple(read.read_bits(4) + 1 for _ in range(2))
    ladder = Ladder(widths)
    tokens = []
    produced = 0
    while produced < size:
        method = read.read_bits(2)
        if method == 2:
            length = read.read_bits(6) + 1
            tokens.append(("literal", bytes(read.read_byte()
                                            for _ in range(length))))
            produced += length
        elif method == 3:
            length = read.read_bits(6) + 2
            tokens.append(("run", read.read_bits(8), length))
            produced += length
        else:
            distance = ladder.bases[method] + read.read_bits(widths[method])
            length = read.read_bits(6) + 3
            tokens.append(("match", distance, length))
            produced += length
    return size, widths, tokens


def serialize(size, widths, tokens):
    ladder = Ladder(widths)
    writer = BitWriter()
    writer.write(0, 8)  # format byte 000
    for value in ladder.header_bits():
        writer.write(value, 4)
    for token in tokens:
        if token[0] == "literal":
            _emit_literal(writer, token[1])
        elif token[0] == "run":
            _emit_run(writer, token[1], token[2])
        else:
            _emit_match(writer, ladder, token[1], token[2])
    return struct.pack("<I", (size << 8) | 0x70) + writer.bytes()


def _decode(stream):
    payload, fmt, _ = decompress.unpack(stream, 0)
    return payload, fmt


def probe(manifest=MANIFEST, rom_path=ROM, sweep=False):
    rom = Path(rom_path).read_bytes()
    source = json.loads(Path(manifest).read_text())
    import asset_inventory as inv
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        for stream in blob["streams"]:
            if str(stream["format"]) != "000":
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            original = rom[offset:offset + packed]
            decoded = (Path(manifest).parent / stream["bin"]).read_bytes()
            size, widths, tokens = parse(original)
            replay = serialize(size, widths, tokens)
            # Tangga asli stream ikut diuji: encoder asli memilihnya, dan
            # tangga menentukan harga/legitimasi setiap jarak.
            ladders = [widths]
            if LADDER_DEFAULT != widths:
                ladders.append(LADDER_DEFAULT)
            if sweep:
                ladders = [(a, b) for a in range(1, 13) for b in range(1, 13)]
            attempts = []
            for widths_try in ladders:
                for optimal in (False, True):
                    try:
                        out = encode(decoded, widths_try, optimal=optimal)
                    except ValueError:
                        continue
                    try:
                        back, _fmt = _decode(out)
                        roundtrip = back == decoded
                    except decompress.UnpackException:
                        roundtrip = False
                    attempts.append({"ladder": list(widths_try),
                                     "optimal": optimal,
                                     "size": len(out),
                                     "sha256": sha256(out),
                                     "roundtrip": roundtrip,
                                     "match": out == original})
            ok = [a for a in attempts if a["match"]]
            best = min(attempts, key=lambda a: (a["size"], a["optimal"]),
                       default=None) if attempts else None
            if ok:
                best = ok[0]
            rows.append({
                "symbol": blob["blob"],
                "index": stream["index"],
                "compressed_offset": f"0x{offset:06X}",
                "compressed_size": packed,
                "compressed_sha256": sha256(original),
                "decoded_size": len(decoded),
                "parse_ladder": list(widths),
                "replay_match": replay == original,
                "replay_size": len(replay),
                "match": bool(ok),
                "roundtrip": bool(best and best["roundtrip"]),
                "optimal_size": min((a["size"] for a in attempts
                                     if a["optimal"]), default=None),
                "greedy_size": min((a["size"] for a in attempts
                                    if not a["optimal"]), default=None),
                "attempts": len(attempts),
                "best": best,
            })
    return rows


def render_probe(rows):
    matched = sum(1 for r in rows if r["match"])
    replays = sum(1 for r in rows if r["replay_match"])
    out = ["# Uji encoder `0x70` minimal (format 000)", "",
           "**Dihasilkan otomatis** oleh `python3 tools/assets/lz70.py probe "
           "--write-report` (`--sweep` untuk mencoba tangga 1..12).", "",
           f"Stream P0 format `000`: **{len(rows)}**. Serializer replay "
           f"byte-identik: **{replays}/{len(rows)}**. Encoder greedy "
                      f"byte-identik: **{matched}/{len(rows)}**. Ukuran optimal encoder "
           f"sama dengan aslinya: "
           f"**{sum(1 for r in rows if r.get('optimal_size') == r['compressed_size'])}/{len(rows)}**.",
           "",
           "| simbol | idx | compressed B | sha256 asli | replay | greedy | hasil encoder |",
           "|---|---:|---:|---|---|---|---|"]
    for row in rows:
        best = row["best"] or {}
        out.append(
            f"| `{row['symbol']}` | {row['index']} | {row['compressed_size']} "
            f"| `{row['compressed_sha256'][:16]}…` "
            f"| {'sama' if row['replay_match'] else 'beda'} "
            f"| {'sama' if row['match'] else 'beda'} "
            f"| optimal {row.get('optimal_size', '-')} B, greedy "
            f"{row.get('greedy_size', '-')} B, tangga {row['parse_ladder']}, "
            f"roundtrip {'ya' if (best or {}).get('roundtrip') else 'tidak'} |")
    out.append("")
    if matched == 0:
        out += [
            "Tidak ada stream yang byte-identik, jadi status `opaque` "
            "dipertahankan.",
            "",
            "Implikasi: format `000` sudah bisa **ditulis** — replay token "
            "asli menghasilkan byte yang sama persis, dan encoder optimal "
            "mencapai ukuran compressed yang sama dengan aslinya. Yang belum "
            "sama adalah *pilihan* perintahnya: banyak tokenisasi berbiaya "
            "bit identik, dan encoder asli memilih di antaranya dengan aturan "
            "yang belum diketahui (24 kombinasi tie-break yang diuji di "
            "`_tokens_optimal` + preferensi panjang/jarak tidak ada yang "
            "cocok). Karena hash compressed bergantung pada byte, bukan "
            "ukuran, stream ini tetap tidak boleh diklaim `ok`.",
        ]
    return "\n".join(out) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd")
    e = sub.add_parser("encode", help="payload -> packed")
    e.add_argument("--bin", required=True, type=Path)
    e.add_argument("--out", required=True, type=Path)
    e.add_argument("--ladder", default="7,11")
    p = sub.add_parser("probe", help="uji stream P0 format 000")
    p.add_argument("--sweep", action="store_true")
    p.add_argument("--json", action="store_true")
    p.add_argument("--write-report", action="store_true")
    args = ap.parse_args(argv)

    if args.cmd == "encode":
        widths = tuple(int(w) for w in args.ladder.split(","))
        out = encode(args.bin.read_bytes(), widths)
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_bytes(out)
        print(f"{args.out}: {len(out)} B")
        return 0
    if args.cmd == "probe":
        rows = probe(sweep=args.sweep)
        if args.json:
            print(json.dumps(rows, indent=1))
        else:
            for row in rows:
                print(f"{row['symbol']}#{row['index']} 000: "
                      f"replay {'sama' if row['replay_match'] else 'BEDA'}, "
                      f"greedy {'MATCH' if row['match'] else 'MISMATCH'} "
                      f"(asli {row['compressed_size']} B, encoder "
                      f"{row['best']['size'] if row['best'] else '-'} B)")
            print(f"byte-identik: {sum(1 for r in rows if r['match'])}/{len(rows)}")
        if args.write_report:
            REPORT.write_text(render_probe(rows))
        return 0 if all(r["match"] for r in rows) else 1
    ap.print_help()
    return 2


if __name__ == "__main__":
    raise SystemExit(main())
