#!/usr/bin/env python3
"""Regresi sprite2gba + gfx_rules: source PNG/palet, frame, dan aturan build."""
import argparse
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

    def test_decode_menulis_semantics_dan_pair(self):
        rom = self.dir / "rom.gba"
        tiles = bytes(range(128))
        rom.write_bytes(bytes(0x10) + tiles + bytes(32))
        png, pal, js = (self.dir / "d.png", self.dir / "d.pal",
                        self.dir / "d.json")
        sprite2gba.decode(argparse.Namespace(
            rom=str(rom), offset=0x10, size=128, pal_offset=0x90,
            pal_size=32, pal_symbol="sPal", tiles_wide=2, frame_width=2,
            frame_height=2, png=str(png), pal=str(pal), json=str(js),
            id="gfx/sprites/gunk_00000010", symbol="gUnk_00000010",
            evidence="", note="", pair_rule="adjacent", pair_lines="",
            pair_reason="", pair_max_distance=40, pair_asm="",
            semantics="unidentified"))
        meta = json.loads(js.read_text())
        self.assertEqual(meta["semantics"], "unidentified")
        self.assertEqual(meta["pair"]["rule"], "adjacent")

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


def _bg_asm(tmp, pal_const="0x05000040", sl_bank=None, tile=0x72, pal=2):
    """Fixture asm: DMA palet + BG map `bl func_0804E9F4` dengan indeks palet."""
    lines = []
    if sl_bank is not None:
        lines += ["\tmovs r4, #%d" % sl_bank, "\tlsls r4, r4, #5",
                  "\tmov sl, r4"]
    lines += ["\tmovs r0, #0x%02x" % tile, "\tlsls r0, r0, #0x10",
              "\tstr r0, [sp, #0x108]",
              "\tldr r1, .Lp @ =gUnk_0875298C"]
    pal_line = len(lines)
    if sl_bank is not None:
        lines += ["\tmovs r2, #0xa0", "\tlsls r2, r2, #0x13",
                  "\tadd r2, sl"]
    else:
        lines += ["\tldr r2, .Lq @ =%s" % pal_const]
    lines += ["\tmovs r3, #0x20", "\tbl func_08008F0C",
              "\tldr r3, [sp, #0x108]", "\tlsrs r1, r3, #0x10"]
    branch = len(lines)
    lines += ["\tmovs r2, #%d" % pal, "\tstr r2, [sp]",
              "\tmovs r2, #0x20", "\tstr r2, [sp, #4]",
              "\tmovs r3, #1"]
    bg = len(lines) + 1
    lines += ["\tbl func_0804E9F4"]
    lines += [".Lp: .4byte gUnk_0875298C"]
    if pal_const is not None:
        lines += [".Lq: .4byte " + pal_const]
    path = tmp / "bg.s"
    path.write_text("\n".join(lines) + "\n")
    return path, pal_line, branch, bg


class BgMapCheck(unittest.TestCase):
    """Bukti BG map tidak boleh diketik manual: baris + indeks palet divalidasi."""

    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.dir = Path(self.tmp.name)

    def tearDown(self):
        self.tmp.cleanup()

    def check(self, **kw):
        path, pal, branch, bg = _bg_asm(self.dir, **kw)
        return sprite2gba.check_bg_map(str(path), pal, branch, bg,
                                       kw.get("tile", 0x72),
                                       kw.get("pal", 2))

    def test_menerima_baris_bl_dan_indeks_palet_literal(self):
        info = self.check()
        self.assertEqual(info["tile"], "0x72")
        self.assertEqual(info["palette"], 2)
        self.assertEqual(info["palette_dma"], "0x05000040")
        self.assertEqual(info["bank"], 2)

    def test_menerima_offset_palet_lewat_sl(self):
        info = self.check(pal_const=None, sl_bank=1, pal=1)
        self.assertEqual(info["palette_dma"], "0x05000020")
        self.assertEqual(info["bank"], 1)

    def test_menolak_baris_bukan_bl_func(self):
        path, pal, branch, bg = _bg_asm(self.dir)
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_bg_map(str(path), pal, branch, bg - 1, 0x72, 2)
        self.assertIn("bukan `bl func_0804E9F4`", str(ctx.exception))

    def test_menolak_tile_yang_tidak_ditetapkan_baris_branch(self):
        path, pal, branch, bg = _bg_asm(self.dir)
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_bg_map(str(path), pal, branch, bg, 0x73, 2)
        self.assertIn("menetapkan tile 0x72", str(ctx.exception))

    def test_menolak_indeks_palet_berbeda(self):
        path, pal, branch, bg = _bg_asm(self.dir)
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_bg_map(str(path), pal, branch, bg, 0x72, 3)
        self.assertIn("indeks palet 2", str(ctx.exception))

    def test_menolak_palet_di_dma_ke_bank_lain(self):
        path, pal, branch, bg = _bg_asm(self.dir, pal_const="0x05000060")
        with self.assertRaises(SystemExit) as ctx:
            sprite2gba.check_bg_map(str(path), pal, branch, bg, 0x72, 2)
        self.assertIn("bank 3", str(ctx.exception))

    def test_semua_aset_bg_map_di_repo_lolos(self):
        checked = 0
        for path in sorted((REPO / "assets" / "gfx" / "sprites").glob("*.json")):
            meta = json.loads(path.read_text())
            bg = (meta.get("pair") or {}).get("bg_map")
            if not bg:
                continue
            info = sprite2gba.check_bg_map(
                bg["asm"], meta["pair"]["load_lines"][1], bg["branch"],
                bg["line"], int(bg["tile"], 16), bg["palette"])
            self.assertEqual(info["palette_dma"], bg["palette_dma"], path.name)
            checked += 1
        self.assertGreater(checked, 0)


BG_CLAIM_TOOL = re.compile(r"func_0804E9F4")
BG_CLAIM_PALETTE = re.compile(r"indeks palet", re.I)
BG_CLAIM_MAP = re.compile(r"BG map|peta tile", re.I)


def _claims_bg_map(meta):
    """True bila pair.reason/evidence mengklaim bukti BG map secara manual."""
    pair = meta.get("pair") or {}
    text = " ".join(str(pair.get(k, "")) for k in ("reason", "evidence"))
    return bool(BG_CLAIM_TOOL.search(text)
                or (BG_CLAIM_PALETTE.search(text)
                    and BG_CLAIM_MAP.search(text)))


def _has_bg_map(meta):
    bg = (meta.get("pair") or {}).get("bg_map")
    return isinstance(bg, dict) and bool(bg)


class BgMapClaim(unittest.TestCase):
    """Penjaga: klaim BG map manual wajib punya blok pair.bg_map terverifikasi."""

    def meta(self, reason="", evidence="", bg_map=None):
        pair = {"reason": reason, "evidence": evidence}
        if bg_map is not None:
            pair["bg_map"] = bg_map
        return {"pair": pair}

    def test_menolak_sebutan_func_0804E9F4_tanpa_blok(self):
        meta = self.meta(reason="tile 0x72 ditulis func_0804E9F4")
        self.assertTrue(_claims_bg_map(meta))
        self.assertFalse(_has_bg_map(meta))

    def test_menolak_indeks_palet_bg_map_tanpa_blok(self):
        meta = self.meta(evidence="BG map memakai indeks palet 2")
        self.assertTrue(_claims_bg_map(meta))
        self.assertFalse(_has_bg_map(meta))

    def test_alasan_tanpa_klaim_bg_map_tidak_ikut_dihukum(self):
        meta = self.meta(reason="palet dimuat di cabang lain func_0805FF14")
        self.assertFalse(_claims_bg_map(meta))

    def test_klaim_dengan_blok_diterima(self):
        meta = self.meta(reason="ditulis func_0804E9F4", bg_map={"line": 1})
        self.assertTrue(_claims_bg_map(meta))
        self.assertTrue(_has_bg_map(meta))

    def test_setiap_klaim_bg_map_di_aset_punya_blok(self):
        offenders = []
        for path in sorted((REPO / "assets" / "gfx" / "sprites").glob("*.json")):
            meta = json.loads(path.read_text())
            if _claims_bg_map(meta) and not _has_bg_map(meta):
                offenders.append(path.name)
        self.assertEqual(offenders, [],
                         "pair.reason/evidence menyebut func_0804E9F4 atau "
                         "indeks palet BG map tanpa pair.bg_map: "
                         + ", ".join(offenders))


def _quoted_bg_claims(meta):
    """-> (baris bl/branch func_0804E9F4, indeks palet) kutipan reason/evidence."""
    pair = meta.get("pair") or {}
    text = " ".join(str(pair.get(k, "")) for k in ("reason", "evidence"))
    lines = []
    for clause in re.findall(r"func_0804E9F4[^;]*", text):
        lines += [int(n) for n in re.findall(
            r"(?:(?:bl|branch)\s+(?:baris\s+)?|baris\s+)(\d+)", clause)]
    pals = [int(n) for n in re.findall(r"indeks palet\s+(\d+)", text)]
    return lines, pals


def _bg_claim_problems(meta):
    """Selisih antara kutipan reason/evidence dan angka pair.bg_map."""
    bg = (meta.get("pair") or {}).get("bg_map") or {}
    lines, pals = _quoted_bg_claims(meta)
    problems = []
    if not lines:
        problems.append("tidak mengutip nomor baris func_0804E9F4")
    elif (int(bg.get("line")) not in set(lines)
          or set(lines) - {int(bg.get("line")), int(bg.get("branch", -1))}):
        problems.append(f"baris dikutip {sorted(set(lines))}, pair.bg_map "
                        f"line {bg.get('line')} / branch {bg.get('branch')}")
    if not pals:
        problems.append("tidak mengutip indeks palet BG map")
    elif set(pals) != {int(bg.get("palette"))}:
        problems.append(f"indeks palet dikutip {sorted(set(pals))}, "
                        f"pair.bg_map {bg.get('palette')}")
    return problems


class BgMapQuote(unittest.TestCase):
    """Kalimat bukti tidak boleh menyimpang dari angka pair.bg_map."""

    def meta(self, reason="", evidence="", line=75852, palette=2, branch=75845):
        return {"pair": {"reason": reason, "evidence": evidence,
                         "bg_map": {"line": line, "palette": palette,
                                    "branch": branch}}}

    def test_kutipan_cocok_tidak_bermasalah(self):
        meta = self.meta("ditulis func_0804E9F4 dengan indeks palet 2 "
                         "(bl baris 75852)",
                         "func_0804E9F4 menulis dengan indeks palet 2 "
                         "(baris 75852)")
        self.assertEqual(_bg_claim_problems(meta), [])

    def test_baris_yang_menyimpang_ditolak(self):
        meta = self.meta(reason="func_0804E9F4 dengan indeks palet 2 "
                                "(bl baris 75853)")
        problems = _bg_claim_problems(meta)
        self.assertTrue(any("baris dikutip" in p for p in problems), problems)

    def test_indeks_palet_yang_menyimpang_ditolak(self):
        meta = self.meta(reason="func_0804E9F4 dengan indeks palet 3 "
                                "(bl baris 75852)")
        problems = _bg_claim_problems(meta)
        self.assertTrue(any("indeks palet dikutip" in p for p in problems),
                        problems)

    def test_kutipan_berbeda_antar_reason_dan_evidence_ditolak(self):
        meta = self.meta(reason="func_0804E9F4 (bl baris 75852)",
                         evidence="func_0804E9F4 (baris 75853)")
        problems = _bg_claim_problems(meta)
        self.assertTrue(any("baris dikutip" in p for p in problems), problems)

    def test_kutipan_branch_sah_tapi_wajib_ada_baris_bl(self):
        sah = self.meta(reason="func_0804E9F4 dengan indeks palet 2 "
                                "(branch baris 75845, bl baris 75852)")
        self.assertEqual(_bg_claim_problems(sah), [])
        tanpa_bl = self.meta(reason="func_0804E9F4 (branch 75845)")
        problems = _bg_claim_problems(tanpa_bl)
        self.assertTrue(any("baris dikutip" in p for p in problems), problems)

    def test_setiap_aset_bg_map_mengutip_angka_yang_sama(self):
        checked, failures = 0, []
        for path in sorted((REPO / "assets" / "gfx" / "sprites").glob("*.json")):
            meta = json.loads(path.read_text())
            if not _has_bg_map(meta):
                continue
            checked += 1
            problems = _bg_claim_problems(meta)
            if problems:
                failures.append(f"{path.name}: {'; '.join(problems)}")
        self.assertGreater(checked, 0)
        self.assertEqual(failures, [], "\n".join(failures))


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
