#!/usr/bin/env python3
"""Regresi codec tile 4bpp: nibble, header/ekor, PNG, dan hash ROM."""
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "tile4bpp", REPO / "tools" / "assets" / "tile4bpp.py")
tile4bpp = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tile4bpp)


def synthetic():
    header = bytes.fromhex("01020304")
    tail = bytes.fromhex("aabbccdd")
    body = bytes(range(64))  # dua tile; rendah/tinggi bergantian
    return header + body + tail


class Tile4bppCodec(unittest.TestCase):
    def test_roundtrip_synthetic(self):
        blob = synthetic()
        rgb, meta = tile4bpp.decode_blob(blob, 4, 4, 2)
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 8, rgb)
            meta["source"]["png"] = "tiles.png"
            meta["rom"] = {"offset": "0x0", "size": len(blob),
                           "sha256": tile4bpp.sha256(blob)}
            (td / "tiles.json").write_text(json.dumps(meta))
            self.assertEqual(tile4bpp.encode_source(td / "tiles.json"), blob)

    def test_decode_menulis_status_rom_exact(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            rom = td / "rom.gba"
            blob = synthetic()
            rom.write_bytes(bytes(16) + blob)
            tile4bpp.main([
                "decode", "--rom", str(rom), "--offset", "16",
                "--size", str(len(blob)), "--header", "4", "--tail", "4",
                "--tiles-wide", "2", "--png", str(td / "t.png"),
                "--json", str(td / "t.json"), "--id", "gfx/tiles/uji",
                "--symbol", "sUji"])
            meta = json.loads((td / "t.json").read_text())
            self.assertEqual(meta["status"], "rom-exact")
            self.assertEqual(meta["semantics"], "unidentified")

    def test_tail_disimpan_sebagai_kata_bukan_hex(self):
        blob = synthetic()
        rgb, meta = tile4bpp.decode_blob(blob, 4, 4, 2)
        self.assertEqual(meta["source"]["tail_words"], [0xDDCCBBAA])
        self.assertNotIn("tail_hex", meta["source"])
        self.assertEqual(tile4bpp.coverage({
            "rom": {"size": len(blob)},
            "source": meta["source"],
        })["proven_bytes"], len(blob))
        self.assertEqual(tile4bpp.coverage({
            "rom": {"size": len(blob)},
            "source": meta["source"],
            "padding": [{"offset": 0, "size": 4, "kind": "tile_tail",
                         "reason": "uji", "evidence": "uji"}],
        })["proven_ratio"], 1.0)
        meta["rom"] = {"offset": "0x0", "size": len(blob),
                       "sha256": tile4bpp.sha256(blob)}
        meta["source"]["tail_hex"] = "aabbccdd"
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 8, rgb)
            meta["source"]["png"] = "tiles.png"
            (td / "tiles.json").write_text(json.dumps(meta))
            with self.assertRaises(ValueError) as ctx:
                tile4bpp.encode_source(td / "tiles.json")
            self.assertIn("tail_hex", str(ctx.exception))

    def test_rejects_colour_outside_index_palette(self):
        blob = synthetic()
        rgb, meta = tile4bpp.decode_blob(blob, 4, 4, 2)
        rgb[0:3] = bytes((1, 2, 3))
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 8, rgb)
            meta["source"]["png"] = "tiles.png"
            (td / "tiles.json").write_text(json.dumps(meta))
            with self.assertRaises(ValueError):
                tile4bpp.encode_source(td / "tiles.json")

    def test_real_assets_match_rom(self):
        rom_path = REPO / "baserom.gba"
        if not rom_path.exists():
            self.skipTest("baserom.gba tidak ada")
        rom = rom_path.read_bytes()
        for meta_path in sorted((REPO / "assets" / "gfx" / "fonts").glob("*.json")):
            meta = json.loads(meta_path.read_text())
            if "rom" not in meta or meta.get("kind") != "tiles4bpp":
                continue
            encoded = tile4bpp.encode_source(meta_path)
            offset = int(meta["rom"]["offset"], 0)
            original = rom[offset:offset + meta["rom"]["size"]]
            self.assertEqual(len(encoded), len(original), meta_path)
            self.assertEqual(tile4bpp.sha256(encoded),
                             meta["rom"]["sha256"], meta_path)
            self.assertEqual(encoded, original, meta_path)


if __name__ == "__main__":
    unittest.main(verbosity=2)
