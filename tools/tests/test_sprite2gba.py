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


class PairRule(unittest.TestCase):
    """Aturan pemasangan sprite+palet: adjacent, asm-load, asm-branch."""

    OFF, SIZE = 0x7518CC, 128
    ASM = """	.text
	ldr r1, .L0 @ =sTest
	nop
	ldr r2, .L1 @ =sPal
	b .L2
	ldr r3, .L3 @ =sTest
"""

    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.asm = Path(self.tmp.name) / "code.s"
        self.asm.write_text(self.ASM)

    def tearDown(self):
        self.tmp.cleanup()

    def pair(self, *a, **kw):
        kw.setdefault("asm_path", str(self.asm))
        kw.setdefault("symbol", "sTest")
        kw.setdefault("pal_symbol", "sPal")
        return sprite2gba.check_pair(*a, **kw)

    def test_adjacent_default_menerima_palet_tepat_setelah_tile(self):
        pair = sprite2gba.check_pair(self.OFF, self.SIZE, 0x75194C)
        self.assertEqual(pair["rule"], "adjacent")
        self.assertTrue(pair["rom_adjacent"])

    def test_adjacent_menolak_palet_yang_tidak_bersebelahan(self):
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_pair(self.OFF, self.SIZE, 0x752000)
        self.assertIn("tepat setelah tile", str(ctx.exception))

    def test_asm_load_menerima_baris_terverifikasi(self):
        pair = self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "2/4")
        self.assertEqual(pair["load_lines"], [2, 4])
        self.assertEqual(pair["distance"], 2)
        self.assertEqual(pair["asm"], str(self.asm))

    def test_asm_load_menolak_baris_tanpa_rujukan(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "3/4")
        self.assertIn("tidak memuat", str(ctx.exception))

    def test_asm_load_menolak_rujukan_bukan_yang_pertama(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "6/4")
        self.assertIn("bukan rujukan pertama", str(ctx.exception))

    def test_asm_load_menolak_baris_tile_dan_palet_tertukar(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "4/2")
        self.assertIn("tidak memuat", str(ctx.exception))

    def test_asm_load_menolak_simbol_yang_tidak_ada_di_asm(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "2/4",
                      symbol="sLain")
        self.assertIn("tidak dirujuk", str(ctx.exception))

    def test_asm_load_menolak_jarak_jauh(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load", "2/4",
                      max_distance=1)
        self.assertIn("asm-branch", str(ctx.exception))

    def test_asm_branch_wajib_alasan(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-branch", "2/4")
        self.assertIn("--pair-reason", str(ctx.exception))

    def test_asm_branch_mencatat_jarak_dan_alasan(self):
        pair = self.pair(self.OFF, self.SIZE, 0x75194C, "asm-branch", "2/4",
                         "beda cabang func_0805FF14")
        self.assertEqual(pair["distance"], 2)
        self.assertEqual(pair["reason"], "beda cabang func_0805FF14")

    def test_asm_load_wajib_pair_lines(self):
        with self.assertRaises(SystemExit) as ctx:
            self.pair(self.OFF, self.SIZE, 0x75194C, "asm-load")
        self.assertIn("--pair-lines", str(ctx.exception))

    def test_asm_load_wajib_pair_asm(self):
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_pair(self.OFF, self.SIZE, 0x75194C, "asm-load",
                                  "2/4", symbol="sTest", pal_symbol="sPal")
        self.assertIn("--pair-asm", str(ctx.exception))

    def test_pair_asm_berkas_hilang_ditolak(self):
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_pair(self.OFF, self.SIZE, 0x75194C, "asm-load",
                                  "2/4", asm_path="/tmp/tidak-ada.s",
                                  symbol="sTest", pal_symbol="sPal")
        self.assertIn("tidak ada", str(ctx.exception))

    def test_pair_rule_tidak_dikenal_ditolak(self):
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_pair(self.OFF, self.SIZE, 0x75194C, "kira-kira")
        self.assertIn("tidak dikenal", str(ctx.exception))


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
