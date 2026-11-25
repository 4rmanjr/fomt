#!/usr/bin/env python3
"""Regresi codec bank layer peta (`tilemap_bank`).

Yang dijaga: dua metadata asli (gUnk_086EAD8C/gUnk_086DE7F4) encode
byte-identik dengan slice ROM, dan encoder menolak source yang tidak menutup
seluruh slice, tumpang tindih, atau jumlah entri tidak cocok.
"""
import importlib.util
import json
import sys
import tempfile
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


bank = load("tilemap_bank", REPO / "tools" / "assets" / "tilemap_bank.py")
ROM = REPO / "baserom.gba"
ASSETS = REPO / "assets" / "gfx" / "maps"
CASES = ("gUnk_086EAD8C", "gUnk_086DE7F4")


class TilemapBank(unittest.TestCase):
    def setUp(self):
        if not ROM.exists():
            self.skipTest("baserom.gba tidak ada")
        self.rom = ROM.read_bytes()

    def test_real_banks_are_byte_identical(self):
        for symbol in CASES:
            meta_path = ASSETS / f"{symbol}.json"
            meta = json.loads(meta_path.read_text())
            self.assertEqual(meta["kind"], "tilemap_bank")
            self.assertTrue(meta["layers"], symbol)
            offset = int(meta["rom"]["offset"], 0)
            size = meta["rom"]["size"]
            self.assertEqual(bank.encode_source(meta_path),
                             self.rom[offset:offset + size], symbol)

    def test_layers_record_offset_size(self):
        for symbol in CASES:
            meta = json.loads((ASSETS / f"{symbol}.json").read_text())
            for layer in meta["layers"]:
                self.assertEqual(len(layer["entries"]),
                                 layer["width"] * layer["height"], symbol)
                self.assertIn("descriptor", layer)
                self.assertIn(layer["slot"], (0, 1, 2))

    def _meta(self, layers, size):
        return {"rom": {"size": size}, "layers": layers, "raw": []}

    def test_rejects_gap(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "x.json"
            meta = self._meta([{"offset": 2, "width": 1, "height": 1,
                                "entries": [1]}], 4)
            path.write_text(json.dumps(meta))
            with self.assertRaises(ValueError):
                bank.encode_source(path)

    def test_rejects_overlap(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "x.json"
            meta = self._meta([
                {"offset": 0, "width": 2, "height": 1, "entries": [1, 2]},
                {"offset": 2, "width": 1, "height": 1, "entries": [3]},
            ], 4)
            path.write_text(json.dumps(meta))
            with self.assertRaises(ValueError):
                bank.encode_source(path)

    def test_rejects_entry_count(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "x.json"
            meta = self._meta([{"offset": 0, "width": 2, "height": 2,
                                "entries": [1, 2, 3]}], 8)
            path.write_text(json.dumps(meta))
            with self.assertRaises(ValueError):
                bank.encode_source(path)


if __name__ == "__main__":
    unittest.main(verbosity=2)
