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

    def test_real_table_assets_match_rom(self):
        manifest = json.loads((REPO / "assets" / "manifest.json").read_text())
        rows = [a for a in manifest["assets"] if a["kind"] == "table"]
        self.assertTrue(rows)
        rom = (REPO / "baserom.gba").read_bytes()
        for asset in rows:
            with self.subTest(symbol=asset["symbol"]):
                encoded = table.encode_source(REPO / asset["source"]["json"])
                offset = int(str(asset["rom"]["offset"]), 0)
                size = asset["rom"]["size"]
                self.assertEqual(encoded, rom[offset:offset + size])


if __name__ == "__main__":
    unittest.main(verbosity=2)
