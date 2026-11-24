#!/usr/bin/env python3
"""Regresi encoder 0x70 minimal (format 000).

Yang dijaga: header/bitstream tulis-ulang identik dengan stream asli (replay),
payload hasil encoder dapat didekode balik, dan encoder optimal tidak lebih
besar dari stream asli. Byte-identik penuh **belum** tercapai, jadi status
`opaque` di manifest sengaja tidak diubah di sini.
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
            for optimal in (False, True):
                out = lz70.encode(decoded, widths, optimal=optimal)
                self.assertEqual(out[:4],
                                 (len(decoded) << 8 | 0x70).to_bytes(4, "little"))
                self.assertEqual(lz70._decode(out)[0], decoded,
                                 f"{symbol}#{index} roundtrip gagal")

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


if __name__ == "__main__":
    unittest.main(verbosity=2)
