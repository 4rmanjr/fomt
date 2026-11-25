#!/usr/bin/env python3
"""Regresi codec tabel indeks glyph s16 (`func_080D0D28`)."""
import importlib.util
import json
import struct
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]


def load(name):
    spec = importlib.util.spec_from_file_location(
        name, REPO / "tools" / "assets" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


glyph_index = load("glyph_index")


def synthetic(count=9):
    values = [(-1) ** i * (i * 37 % 500) - (1 if i % 4 == 0 else 0)
              for i in range(count)]
    return values, struct.pack(f"<{count}h", *values)


class GlyphIndexCodec(unittest.TestCase):
    def test_decode_encode_roundtrip(self):
        values, blob = synthetic()
        decoded = glyph_index.decode_blob(blob)
        self.assertEqual(decoded, values)
        self.assertEqual(glyph_index.encode_values(decoded), blob)

    def test_metadata_roundtrip(self):
        values, blob = synthetic()
        meta = glyph_index.decode_blob_meta(blob, "byte")
        self.assertEqual(meta["kind"], "glyph_index")
        self.assertEqual(meta["source"]["count"], len(values))
        self.assertEqual(meta["source"]["format"], "s16le")
        meta["rom"] = {"offset": "0x0", "size": len(blob),
                       "sha256": glyph_index.sha256(blob)}
        with tempfile.TemporaryDirectory() as td:
            path = Path(td) / "table.json"
            path.write_text(json.dumps(meta))
            self.assertEqual(glyph_index.encode_source(path), blob)
            self.assertEqual(glyph_index.verify(path), 0)

    def test_odd_size_rejected(self):
        with self.assertRaises(ValueError):
            glyph_index.decode_blob(b"\x00\x01\x02")

    def test_out_of_range_rejected(self):
        with self.assertRaises(ValueError):
            glyph_index.encode_values([0x8000])

    def test_count_mismatch_rejected(self):
        values, blob = synthetic()
        meta = glyph_index.decode_blob_meta(blob, "shift-jis")
        meta["source"]["count"] += 1
        meta["rom"] = {"offset": "0x0", "size": len(blob),
                       "sha256": glyph_index.sha256(blob)}
        with tempfile.TemporaryDirectory() as td:
            path = Path(td) / "table.json"
            path.write_text(json.dumps(meta))
            with self.assertRaises(SystemExit):
                glyph_index.encode_source(path)

    def test_unknown_encoding_rejected(self):
        with self.assertRaises(ValueError):
            glyph_index.decode_blob_meta(synthetic()[1], "utf-8")

    def test_real_tables_match_rom(self):
        rom_path = REPO / "baserom.gba"
        if not rom_path.exists():
            self.skipTest("baserom.gba tidak ada")
        for name, size in (("glyph_index_084fa7a0", 512),
                           ("glyph_index_08523290", 15876)):
            path = REPO / "assets" / "gfx" / "fonts" / f"{name}.json"
            if not path.exists():
                self.skipTest(f"{path.name} tidak ada")
            self.assertEqual(glyph_index.verify(str(path), str(rom_path)), 0)


if __name__ == "__main__":
    unittest.main()
