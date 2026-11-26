#!/usr/bin/env python3
"""Regresi codec container font/objek `func_0805E6CC`."""
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


tile4bpp = load("tile4bpp")
font_container = load("font_container")

# (nama, ukuran entri, count) — sama dengan enam tabel + ekor func_0805E6CC.
SYNTH = (("A", 4, 2), ("B", 16, 1), ("C", 8, 1),
         ("D", 32, 2), ("E", 32, 1), ("F", 8, 0), ("T", 4, 2))


def synthetic():
    blob = bytearray()
    for _name, size, count in SYNTH:
        blob += struct.pack("<HH", count, 0xAAAA)
        blob += bytes((i * 7 + size) & 0xFF for i in range(count * size))
    return bytes(blob)


class FontContainerCodec(unittest.TestCase):
    def test_roundtrip_synthetic(self):
        blob = synthetic()
        rgb, meta = font_container.decode_blob(blob, tiles_wide=2)
        self.assertEqual(meta["kind"], "font_container")
        self.assertEqual([s["name"] for s in meta["sections"]],
                         [name for name, _s, _c in SYNTH])
        self.assertEqual(meta["source"]["tile_count"], 3)
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 16, rgb)
            meta["source"]["png"] = "tiles.png"
            meta["rom"] = {"offset": "0x0", "size": len(blob),
                           "sha256": font_container.sha256(blob)}
            (td / "tiles.json").write_text(json.dumps(meta))
            self.assertEqual(font_container.encode_source(td / "tiles.json"), blob)


    def test_roundtrip_with_tail(self):
        # Container diikuti ekor mentah (mis. palet 32 B): ekor disimpan
        # sebagai tail_words eksplisit dan encode harus mengembalikan byte sama.
        blob = synthetic() + bytes(range(0x20))
        rgb, meta = font_container.decode_blob(blob, tiles_wide=2)
        expected = [int.from_bytes(bytes(range(0x20))[i:i + 4], "little")
                    for i in range(0, 0x20, 4)]
        self.assertEqual(meta["source"]["tail_words"], expected)
        self.assertNotIn("tail_hex", meta["source"])
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 16, rgb)
            meta["source"]["png"] = "tiles.png"
            meta["rom"] = {"offset": "0x0", "size": len(blob),
                           "sha256": font_container.sha256(blob)}
            (td / "tiles.json").write_text(json.dumps(meta))
            self.assertEqual(font_container.encode_source(td / "tiles.json"), blob)

    def test_tail_hex_ditolak(self):
        """Ekor container tidak boleh disimpan sebagai hex lagi."""
        blob = synthetic()
        _rgb, meta = font_container.decode_blob(blob, tiles_wide=2)
        meta["rom"] = {"offset": "0x0", "size": len(blob),
                       "sha256": font_container.sha256(blob)}
        meta["source"]["tail_hex"] = "00"
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "tiles.png", 16, 16, _rgb)
            meta["source"]["png"] = "tiles.png"
            (td / "tiles.json").write_text(json.dumps(meta))
            with self.assertRaises(ValueError) as ctx:
                font_container.encode_source(td / "tiles.json")
            self.assertIn("tail_hex", str(ctx.exception))

    def test_rejects_flat_tile_framing(self):
        # Framing lama (header 20 B + tile datar) bukan container: panjang
        # total tidak berakhir di count tabel T, jadi harus ditolak.
        blob = bytes.fromhex("1b000000") + bytes(92)
        with self.assertRaises(ValueError):
            font_container.parse(blob)

    def test_real_asset_matches_rom(self):
        rom_path = REPO / "baserom.gba"
        if not rom_path.exists():
            self.skipTest("baserom.gba tidak ada")
        meta_path = REPO / "assets" / "gfx" / "fonts" / "unk_0872de44.json"
        meta = json.loads(meta_path.read_text())
        self.assertEqual(meta["kind"], "font_container")
        counts = {s["name"]: s["tiles"] if "tiles" in s
                  else len(s["values"]) for s in meta["sections"]}
        self.assertEqual(counts, {"A": 27, "B": 27, "C": 6, "D": 106,
                                  "E": 1, "F": 0, "T": 27})
        encoded = font_container.encode_source(meta_path)
        offset = int(meta["rom"]["offset"], 0)
        original = rom_path.read_bytes()[offset:offset + meta["rom"]["size"]]
        self.assertEqual(len(encoded), 4148)
        self.assertEqual(encoded, original)
        self.assertEqual(font_container.sha256(encoded), meta["rom"]["sha256"])


if __name__ == "__main__":
    unittest.main(verbosity=2)
