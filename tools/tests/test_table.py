#!/usr/bin/env python3
"""Regresi codec `table.py`: segmen harus menutup seluruh slice ROM."""
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]


def load(name, rel):
    spec = importlib.util.spec_from_file_location(name, REPO / rel)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


table = load("table", "tools/assets/table.py")


def meta(segments, size):
    return {
        "kind": "table",
        "rom": {"offset": "0x0", "size": size, "sha256": "0" * 64},
        "source": {"segments": segments},
    }


class TableCodec(unittest.TestCase):
    def encode(self, segments, size):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "x.json"
            path.write_text(json.dumps(meta(segments, size)))
            return table.encode_source(path)

    def test_values_and_hex_roundtrip(self):
        data = self.encode([
            {"offset": 0, "format": "u16le", "values": [0x1234]},
            {"offset": 2, "format": "hex", "hex": "aabb"},
            {"offset": 4, "format": "u8", "values": [7]},
        ], 5)
        self.assertEqual(data, b"\x34\x12\xaa\xbb\x07")

    def test_gap_is_rejected(self):
        with self.assertRaises(SystemExit) as ctx:
            self.encode([
                {"offset": 0, "format": "u16le", "values": [1]},
                {"offset": 4, "format": "u8", "values": [0]},
            ], 5)
        self.assertIn("celah", str(ctx.exception))

    def test_overlap_is_rejected(self):
        with self.assertRaises(SystemExit) as ctx:
            self.encode([
                {"offset": 0, "format": "u16le", "values": [1]},
                {"offset": 1, "format": "hex", "hex": "00"},
            ], 2)
        self.assertIn("tumpang tindih", str(ctx.exception))

    def test_short_source_is_rejected(self):
        with self.assertRaises(SystemExit) as ctx:
            self.encode([{"offset": 0, "format": "u8", "values": [1]}], 2)
        self.assertIn("menutup 1 B", str(ctx.exception))

    def test_value_out_of_range_is_rejected(self):
        with self.assertRaises(SystemExit) as ctx:
            self.encode([{"offset": 0, "format": "u8", "values": [256]}], 1)
        self.assertIn("di luar", str(ctx.exception))

    def test_table_sources_roundtrip_rom(self):
        # Semua source tabel sekarang rom-exact; segmen eksplisit/raw tetap
        # harus mereproduksi slice ROM persis, bukan sekadar lolos schema.
        paths = sorted((REPO / "assets" / "gfx" / "tables").glob("*.json"))
        self.assertTrue(paths)
        rom = (REPO / "baserom.gba").read_bytes()
        for path in paths:
            meta = json.loads(path.read_text())
            with self.subTest(symbol=meta["symbol"]):
                self.assertEqual(meta["status"], "rom-exact")
                encoded = table.encode_source(path)
                offset = int(str(meta["rom"]["offset"]), 0)
                size = meta["rom"]["size"]
                self.assertEqual(encoded, rom[offset:offset + size])


if __name__ == "__main__":
    unittest.main(verbosity=2)
