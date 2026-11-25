#!/usr/bin/env python3
"""Regresi encoder 0x70 minimal (format 000).

Yang dijaga: header/bitstream tulis-ulang identik dengan stream asli (replay),
payload hasil encoder dapat didekode balik, encoder optimal tidak lebih besar
dari stream asli, dan strategi `parity` (aturan tokenisasi encoder asli)
menghasilkan byte persis sama untuk ketiga stream P0 format 000.
"""
import importlib.util
import json
import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


lz70 = load("lz70", REPO / "tools" / "assets" / "lz70.py")
import decompress  # noqa: E402

MANIFEST = REPO / "assets" / "0x70" / "manifest.json"
ROM = REPO / "baserom.gba"


def p0_streams():
    """(symbol, index, compressed, decoded) untuk stream format 000."""
    if not ROM.exists():
        return []
    inv = load("asset_inventory",
               REPO / "tools" / "scripts" / "asset_inventory.py")
    rom = ROM.read_bytes()
    source = json.loads(MANIFEST.read_text())
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        for stream in blob["streams"]:
            if str(stream["format"]) != "000":
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            rows.append((blob["blob"], stream["index"],
                         rom[offset:offset + packed],
                         (MANIFEST.parent / stream["bin"]).read_bytes()))
    return rows


def atom0_streams(formats):
    """(label, compressed, decoded, diff) untuk format atom0 yang diminta."""
    if not ROM.exists():
        return []
    inv = load("asset_inventory",
               REPO / "tools" / "scripts" / "asset_inventory.py")
    rom = ROM.read_bytes()
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    source = json.loads(MANIFEST.read_text())
    embedded = json.loads(
        (MANIFEST.parent / "embedded_manifest.json").read_text())
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        for stream in blob["streams"]:
            fmt = str(stream["format"])
            if fmt not in formats:
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            rows.append((f"{blob['blob']}#{stream['index']}",
                         rom[offset:offset + packed],
                         (MANIFEST.parent / stream["bin"]).read_bytes(),
                         int(fmt[2])))
    for bank in embedded.get("banks", []):
        entry = by_symbol.get(bank["blob"])
        for stream in bank["streams"]:
            fmt = str(stream["format"])
            if fmt not in formats:
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            rows.append((f"{bank['blob']}#{stream['index']}",
                         rom[offset:offset + packed],
                         (MANIFEST.parent / stream["bin"]).read_bytes(),
                         int(fmt[2])))
    return rows


def lzss2_streams():
    return atom0_streams(("020", "023", "024"))


def lzss3_streams():
    return atom0_streams(("030", "033"))


def huffman_streams():
    """(label, compressed, decoded, format) untuk semua stream huffman."""
    if not ROM.exists():
        return []
    inv = load("asset_inventory",
               REPO / "tools" / "scripts" / "asset_inventory.py")
    rom = ROM.read_bytes()
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    source = json.loads(MANIFEST.read_text())
    embedded = json.loads(
        (MANIFEST.parent / "embedded_manifest.json").read_text())
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        for stream in blob["streams"]:
            fmt = str(stream["format"])
            if fmt[0] not in "12":
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            rows.append((f"{blob['blob']}#{stream['index']}",
                         rom[offset:offset + packed],
                         (MANIFEST.parent / stream["bin"]).read_bytes(), fmt))
    for bank in embedded.get("banks", []):
        entry = by_symbol.get(bank["blob"])
        for stream in bank["streams"]:
            fmt = str(stream["format"])
            if fmt[0] not in "12":
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            rows.append((f"{bank['blob']}#{stream['index']}",
                         rom[offset:offset + packed],
                         (MANIFEST.parent / stream["bin"]).read_bytes(), fmt))
    return rows


class Lz70(unittest.TestCase):
    def setUp(self):
        self.streams = p0_streams()
        if not self.streams:
            self.skipTest("baserom.gba tidak ada")
        self.assertEqual(len(self.streams), 3, "P0 harus 3 stream format 000")

    def test_replay_is_byte_identical(self):
        """Model header + urutan bit terbukti: tulis ulang token = byte asli."""
        for symbol, index, original, decoded in self.streams:
            size, widths, tokens = lz70.parse(original)
            self.assertEqual(size, len(decoded))
            self.assertEqual(lz70.serialize(size, widths, tokens), original,
                             f"{symbol}#{index} replay beda")

    def test_encode_roundtrip(self):
        for symbol, index, original, decoded in self.streams:
            size, widths, _tokens = lz70.parse(original)
            for optimal, parity in ((False, False), (True, False),
                                    (False, True)):
                out = lz70.encode(decoded, widths, optimal=optimal,
                                  parity=parity)
                self.assertEqual(out[:4],
                                 (len(decoded) << 8 | 0x70).to_bytes(4, "little"))
                self.assertEqual(lz70._decode(out)[0], decoded,
                                 f"{symbol}#{index} roundtrip gagal "
                                 f"(optimal={optimal}, parity={parity})")

    def test_parity_is_byte_identical(self):
        """Aturan tie-break asli: match terpanjang, seri run, literal berhenti."""
        for symbol, index, original, decoded in self.streams:
            _size, widths, _tokens = lz70.parse(original)
            self.assertEqual(lz70.encode(decoded, widths, parity=True),
                             original, f"{symbol}#{index} parity beda")

    def test_optimal_is_not_larger(self):
        for symbol, index, original, decoded in self.streams:
            _size, widths, _tokens = lz70.parse(original)
            out = lz70.encode(decoded, widths, optimal=True)
            self.assertLessEqual(len(out), len(original))

    def test_rejects_foreign_format(self):
        for symbol, index, original, _decoded in self.streams:
            broken = bytearray(original)
            broken[7] = 0x01  # format byte 001 (lzss1), bukan 000
            with self.assertRaises(ValueError):
                lz70.parse(bytes(broken))
            break

    def test_rejects_plain_bytes(self):
        with self.assertRaises(ValueError):
            lz70.parse(b"nope-nope-nope")


class Lzss2(unittest.TestCase):
    """Format atom0/lzss2: replay, encoder byte-identik, dan ambang token."""

    def setUp(self):
        self.streams = lzss2_streams()
        if not self.streams:
            self.skipTest("baserom.gba tidak ada")
        self.assertEqual(len(self.streams), 70,
                         "P1 atom0/lzss2 harus 70 stream")

    def test_replay_is_byte_identical(self):
        for label, original, _decoded, diff in self.streams:
            size, widths, tokens, spec = lz70.parse_lzss2(original)
            self.assertEqual(spec >> 5, diff, label)
            self.assertEqual(lz70.serialize_lzss2(size, widths, tokens, spec),
                             original, f"{label} replay beda")

    def test_encode_is_byte_identical(self):
        for label, original, decoded, diff in self.streams:
            _size, widths, _tokens, _spec = lz70.parse_lzss2(original)
            out = lz70.encode_lzss2(decoded, widths, diff)
            self.assertEqual(out, original, f"{label} encoder beda")
            self.assertEqual(decompress.unpack(out)[0], decoded, label)

    def test_diff_encode_inverts_decoder(self):
        payload = bytes(range(64))
        for diff in range(5):
            filtered = bytearray(lz70.diff_encode(payload, diff))
            decompress.DIFF_FUNCS[diff](filtered)
            self.assertEqual(bytes(filtered), payload, f"diff{diff}")

    def test_escape_literal_threshold(self):
        ladder = lz70.Ladder((7, 11))
        eight = lz70._tokens_lzss2(bytes(range(8)), ladder)
        nine = lz70._tokens_lzss2(bytes(range(9)), ladder)
        self.assertTrue(all(t[0] == "lit" for t in eight))
        self.assertEqual([len(t[1]) for t in nine if t[0] == "lrun"], [9])

    def test_long_match_threshold(self):
        ladder = lz70.Ladder((7, 11))
        for length, kind in ((18, "match"), (19, "lmatch")):
            block = bytes(range(length))
            tokens = lz70._tokens_lzss2(block + b"\xff\xfe" + block, ladder)
            found = [t for t in tokens if t[0] in ("match", "lmatch")]
            self.assertTrue(any(t[0] == kind and t[2] == length
                                for t in found), (length, tokens))

    def test_three_byte_tail_stays_literal(self):
        ladder = lz70.Ladder((7, 11))
        tokens = lz70._tokens_lzss2(b"abcXYZabc", ladder)
        self.assertFalse([t for t in tokens if t[0] in ("match", "lmatch")],
                         tokens)


class Lzss3(unittest.TestCase):
    """Format atom0/lzss3: replay, encoder byte-identik, dan ambang unit."""

    def setUp(self):
        self.streams = lzss3_streams()
        if not self.streams:
            self.skipTest("baserom.gba tidak ada")
        self.assertEqual(len(self.streams), 53,
                         "P1 atom0/lzss3 harus 53 stream")

    def test_replay_is_byte_identical(self):
        for label, original, _decoded, diff in self.streams:
            size, widths, tokens, spec = lz70.parse_lzss3(original)
            self.assertEqual(spec >> 5, diff, label)
            self.assertEqual(lz70.serialize_lzss3(size, widths, tokens, spec),
                             original, f"{label} replay beda")

    def test_encode_is_byte_identical(self):
        for label, original, decoded, diff in self.streams:
            _size, widths, _tokens, _spec = lz70.parse_lzss3(original)
            out = lz70.encode_lzss3(decoded, widths, diff)
            self.assertEqual(out, original, f"{label} encoder beda")
            self.assertEqual(decompress.unpack(out)[0], decoded, label)

    def test_literal_escape_threshold(self):
        ladder = lz70.Ladder((7, 11, 13))
        eight = lz70._tokens_lzss3(bytes(range(16)), ladder)
        nine = lz70._tokens_lzss3(bytes(range(18)), ladder)
        self.assertTrue(all(t[0] == "lit" for t in eight))
        self.assertEqual([len(t[1]) for t in nine if t[0] == "lrun"], [18])

    def test_match_threshold_is_units(self):
        ladder = lz70.Ladder((7, 11, 13))
        for units, kind in ((9, "match"), (10, "lmatch")):
            block = bytes(range(units * 2))
            tokens = lz70._tokens_lzss3(block + b"\xff\xfe" + block,
                                        ladder)
            found = [t for t in tokens if t[0] in ("match", "lmatch")]
            self.assertTrue(any(t[0] == kind and t[2] == units * 2
                                for t in found), (units, tokens))

    def test_minimum_two_units(self):
        ladder = lz70.Ladder((7, 11, 13))
        block = b"abcX"
        tokens = lz70._tokens_lzss3(block + b"\xff\xfe" + block, ladder)
        self.assertTrue(any(t[0] == "match" and t[2] == 4 for t in tokens),
                        tokens)
        tail = lz70._tokens_lzss3(block + b"\xff\xfe" + block[:2], ladder)
        self.assertFalse([t for t in tail if t[0] in ("match", "lmatch")],
                         tail)


class Huffman(unittest.TestCase):
    """Format huffman4/8: pohon header + token LZSS parity byte-identik."""

    def setUp(self):
        self.streams = huffman_streams()
        if not self.streams:
            self.skipTest("baserom.gba tidak ada")
        self.assertEqual(len(self.streams), 156,
                         "huffman harus 156 stream (blob + bank tertanam)")

    def test_encode_is_byte_identical(self):
        for label, original, decoded, fmt in self.streams:
            header = lz70.parse_huffman(original)
            spec = header[1]
            self.assertEqual(f"{(spec >> 3) & 3}{spec & 7}{spec >> 5}", fmt,
                             label)
            out = lz70.encode_huffman(decoded, header)
            self.assertEqual(out, original, f"{label} encoder beda")
            payload, unpacked_fmt, _ = decompress.unpack(out)
            self.assertEqual(payload, decoded, label)
            self.assertEqual(unpacked_fmt, fmt, label)

    def test_tree_codes_match_header(self):
        for label, original, _decoded, _fmt in self.streams:
            _size, _spec, _atom, counts, leaves, _widths = \
                lz70.parse_huffman(original)
            codes = lz70.huffman_codes(counts, leaves)
            self.assertEqual(len(codes), sum(counts), label)
            for depth, row in enumerate(leaves):
                for value in row:
                    self.assertEqual(codes[value][1], depth + 1, label)

    def test_rejects_non_huffman(self):
        for _label, original, _decoded, _fmt in self.streams:
            broken = bytearray(original)
            broken[7] = 0x03  # atom0/lzss3, bukan huffman
            with self.assertRaises(ValueError):
                lz70.parse_huffman(bytes(broken))
            break


if __name__ == "__main__":
    unittest.main(verbosity=2)
