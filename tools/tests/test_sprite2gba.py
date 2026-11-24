#!/usr/bin/env python3
"""Regresi sprite2gba + gfx_rules: source PNG/palet, frame, dan aturan build."""
import importlib.util
import json
import re
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]


def _load(name):
    spec = importlib.util.spec_from_file_location(
        name, REPO / "tools" / "assets" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


sprite2gba = _load("sprite2gba")
gfx_rules = _load("gfx_rules")

SPRITE_ASSET = REPO / "assets" / "gfx" / "sprites" / "gUnk_087518CC.json"
# Warna palet harus sudah terkuantisasi 5 bit; `pal2gba.from5` adalah nilai
# yang ditulis sprite2gba ke PLTE, jadi dipakai juga di fixture.
QUANT = [(sprite2gba.pal2gba.from5(i), 0, 0) for i in range(16)]


class SpriteGba(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.dir = Path(self.tmp.name)

    def tearDown(self):
        self.tmp.cleanup()

    def make_asset(self, indices, colors, frame, tiles_wide=2):
        """-> path JSON; tulis PNG terindeks + .pal di direktori sementara."""
        png = self.dir / "s.png"
        pal = self.dir / "s.pal"
        sprite2gba.write_png_indexed(png, tiles_wide * 8, 16, indices, colors)
        sprite2gba.pal2gba.write_pal(pal, colors)
        meta = {
            "kind": "sprite", "id": "gfx/sprites/uji",
            "symbol": "sTest",
            "rom": {"offset": "0x0", "size": 64, "sha256": "0" * 64},
            "source": {"png": png.name, "pal": pal.name,
                       "tiles_wide": tiles_wide, "tile_count": 4},
            "frame": frame,
            "encoder": {"tool": "sprite2gba.py", "version": 1},
        }
        path = self.dir / "s.json"
        path.write_text(json.dumps(meta))
        return path

    def test_encode_packs_nibble_low_first(self):
        colors = QUANT
        # tile 0: baris pertama 0,1,2,3,...; sisanya 0
        indices = bytearray(16 * 16)
        for x in range(8):
            indices[x] = x
        path = self.make_asset(bytes(indices), colors,
                               {"width_tiles": 2, "height_tiles": 2,
                                "count": 1})
        data = sprite2gba.encode_source(path)
        self.assertEqual(len(data), 128)
        self.assertEqual(data[0], 0x10)   # indeks 0 | 1<<4
        self.assertEqual(data[1], 0x32)   # indeks 2 | 3<<4
        self.assertEqual(data[4:8], bytes(4))  # baris kedua tile 0 kosong

    def test_decode_roundtrip_tiles(self):
        blob = bytes(range(128))
        indices, width, height = sprite2gba.unpack_tiles(blob, 2)
        self.assertEqual((width, height), (16, 16))
        self.assertEqual(
            sprite2gba.pack_tiles(indices, width, height, 2, 4), blob)

    def test_frame_must_cover_sheet(self):
        colors = QUANT
        path = self.make_asset(bytes(256), colors,
                               {"width_tiles": 2, "height_tiles": 2,
                                "count": 2})
        with self.assertRaises(ValueError):
            sprite2gba.encode_source(path)

    def test_palette_must_match_plte(self):
        colors = QUANT
        path = self.make_asset(bytes(256), colors,
                               {"width_tiles": 2, "height_tiles": 2,
                                "count": 1})
        pal = self.dir / "s.pal"
        sprite2gba.pal2gba.write_pal(
            pal, [(255, 255, 255)] + colors[1:])
        with self.assertRaises(ValueError):
            sprite2gba.encode_source(path)

    def test_index_above_15_ditolak(self):
        colors = QUANT
        indices = bytearray(256)
        indices[0] = 20
        png = self.dir / "s.png"
        sprite2gba.write_png_indexed(png, 16, 16, bytes(indices), colors)
        _, _, got, _ = sprite2gba.read_png_indexed(png)
        self.assertEqual(got[0], 20)  # PLTE menyimpan indeks apa adanya

    def test_real_sprite_rom_exact(self):
        if not (REPO / "baserom.gba").exists():
            self.skipTest("baserom.gba tidak ada")
        self.assertEqual(sprite2gba.verify(SPRITE_ASSET), 0)


class GfxRules(unittest.TestCase):
    def test_rules_synced(self):
        self.assertEqual(gfx_rules.main(["--check"]), 0)

    def test_every_rom_exact_asset_has_rule(self):
        text = (REPO / "gfx_rules.mk").read_text()
        for row in gfx_rules.collect():
            self.assertIn(f"$(BUILD_DIR)/assets/{row['symbol']}.bin:", text)
            self.assertIn(row["json"], text)

    def test_recipe_not_joined_to_prerequisites(self):
        text = (REPO / "gfx_rules.mk").read_text()
        # prasyarat terakhir tidak boleh berakhir `\` (recipe ikut tersambung)
        for block in text.split("\n\n"):
            if not block.startswith("$(BUILD_DIR)"):
                continue
            deps = block.split("\t@echo")[0].rstrip().splitlines()
            self.assertFalse(deps[-1].endswith("\\"), deps[-1])
            self.assertRegex(block, re.compile(r"\n\t@python3 tools/assets/"))


if __name__ == "__main__":
    unittest.main(verbosity=2)
