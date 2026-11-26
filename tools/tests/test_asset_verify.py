#!/usr/bin/env python3
"""Regresi Fase 0: schema manifest aset, gate `asset_verify`, encoder palet.

Fixture kecil + manifest asli. Yang dikunci:

  * schema menolak field wajib yang hilang dan `id` berisi alamat ROM;
  * `pal2gba` round-trip 5 bit eksak dan byte-nya sama dengan slice ROM;
  * `asset_verify` melaporkan hash ROM yang diubah, dan mencatat `.incbin`
    yang belum dialihkan sebagai catatan (bukan kegagalan di Fase 0);
  * penjaga evidence palet menolak tujuan tetap di tapak salinan yang menambah
    indeks slot, dan sebaliknya;
  * penjaga evidence tiles4bpp menolak kutipan bukan salinan/loader dan kutipan
    yang memuat simbol lain.

Jalankan: python3 tools/tests/test_asset_verify.py
"""
import hashlib
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


verify = load("asset_verify", "tools/assets/asset_verify.py")
pal2gba = load("pal2gba", "tools/assets/pal2gba.py")

MANIFEST = REPO / "assets" / "manifest.json"
SCHEMA = REPO / "tools" / "assets" / "manifest_schema.json"
ROM = REPO / "baserom.gba"


def minimal_asset(**over):
    asset = {
        "id": "gfx/palettes/x",
        "semantics": "proven",
        "symbol": "gUnk_00000000",
        "kind": "palette",
        "status": "rom-exact",
        "rom": {"offset": "0x0", "size": 32, "sha256": "0" * 64},
        "source": {"json": "assets/gfx/palettes/x.json"},
        "encoder": {"tool": "pal2gba.py", "version": 1},
    }
    asset.update(over)
    return asset


class ManifestSchema(unittest.TestCase):
    def schema(self):
        return json.loads(SCHEMA.read_text())

    def test_real_manifest_matches_schema(self):
        manifest = json.loads(MANIFEST.read_text())
        self.assertEqual(verify.validate(manifest, self.schema()), [])

    def test_missing_rom_field_is_rejected(self):
        asset = minimal_asset()
        del asset["rom"]["sha256"]
        errs = verify.validate({"assets": [asset]}, self.schema())
        self.assertTrue(any("sha256" in e for e in errs), errs)

    def test_id_with_address_is_rejected(self):
        errs = verify.validate({"assets": [minimal_asset(id="gfx/0x731940")]},
                               self.schema())
        self.assertTrue(any("id" in e for e in errs), errs)

    def test_unknown_status_is_rejected(self):
        errs = verify.validate({"assets": [minimal_asset(status="match")]},
                               self.schema())
        self.assertTrue(any("status" in e for e in errs), errs)


class PaletteEncoder(unittest.TestCase):
    def test_roundtrip_5bit(self):
        self.assertTrue(pal2gba.roundtrip_ok())

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_palette_source_reproduces_rom(self):
        meta = REPO / "assets" / "gfx" / "palettes" / "unk_08731940.json"
        data = json.loads(meta.read_text())
        off = int(data["rom"]["offset"], 0)
        size = data["rom"]["size"]
        rom = ROM.read_bytes()[off:off + size]
        encoded = pal2gba.encode_source(meta)
        self.assertEqual(len(encoded), size)
        self.assertEqual(encoded, rom)


class VerifyGate(unittest.TestCase):
    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_tampered_rom_is_detected(self):
        rom = bytearray(ROM.read_bytes())
        off = 0x731940
        rom[off] ^= 0xFF
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "rom.gba"
            path.write_bytes(bytes(rom))
            problems, _notes, summary = verify.verify(manifest_path=MANIFEST,
                                                    schema_path=SCHEMA,
                                                    rom_path=path)
        self.assertTrue(any("sha256 slice ROM" in p for p in problems),
                        problems)
        self.assertLess(summary["ok"], summary["assets"])

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_incbin_note_for_unswitched_blob(self):
        # Uji unit: pemetaan `.incbin baserom` sintetis harus menghasilkan
        # catatan, terlepas dari apakah semua aset nyata sudah dialihkan.
        rom = ROM.read_bytes()
        incbins = {0x6D6458: [("synthetic.s", 1, 192)]}
        asset = minimal_asset(
            id="gfx/palettes/x", semantics="proven", symbol="gUnk_086D6458",
            rom={"offset": "0x6D6458", "size": 192,
                 "sha256": hashlib.sha256(
                     rom[0x6D6458:0x6D6458 + 192]).hexdigest()},
            source={"json": "assets/gfx/palettes/unk_087519ec.json"})
        _problems, notes = verify.check_asset(asset, rom, incbins)
        self.assertTrue(any(".incbin baserom" in n for n in notes), notes)

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_all_rom_exact_assets_switched(self):
        _problems, notes, _summary = verify.verify()
        self.assertEqual(notes, [])
        strict, _notes, _summary = verify.verify(require_switched=True)
        self.assertEqual(strict, [])

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_fast_path_requires_matching_build_bin(self):
        manifest = json.loads(MANIFEST.read_text())
        asset = next(a for a in manifest["assets"]
                     if a["symbol"] == "gUnk_08731940")
        meta_path = REPO / asset["source"]["json"]
        rom = ROM.read_bytes()
        off = int(asset["rom"]["offset"], 0)
        size = asset["rom"]["size"]
        slice_ = rom[off:off + size]
        if not (verify.REPO / "build" / "assets" /
                "gUnk_08731940.bin").exists():
            self.skipTest("bin build belum ada")
        self.assertTrue(verify.asset_manifest.built_bin_matches(
            meta_path, asset, slice_))
        self.assertFalse(verify.asset_manifest.built_bin_matches(
            meta_path, asset, bytes([slice_[0] ^ 0xFF]) + slice_[1:]))

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_force_encode_still_runs_encoder(self):
        problems, _notes, summary = verify.verify(
            symbol="gUnk_08731940", force_encode=True)
        self.assertEqual(problems, [])
        self.assertEqual(summary["ok"], 1)

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_summary_counts_every_asset(self):
        _problems, _notes, summary = verify.verify()
        manifest = json.loads(MANIFEST.read_text())
        self.assertEqual(summary["assets"], len(manifest["assets"]))
        self.assertEqual(summary["ok"], summary["assets"])


class PaletteEvidenceGuard(unittest.TestCase):
    """Evidence palet tidak boleh menyebut tujuan tetap di tapak ber-slot."""
    SLOT_ASM = ("\tldr r0, .LC0 @ =0x05000200\n"
                "\tadds r1, r1, r0\n"
                "\tbl func_08008E64\n")
    FIXED_ASM = ("\tldr r1, .LC0 @ =0x050000E0\n"
                 "\tmovs r2, #0x20\n"
                 "\tbl func_08008E64\n")

    def repo(self, asm):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        root = Path(tmp.name)
        (root / "asm").mkdir()
        (root / "asm" / "code_test.s").write_text(asm)
        return root

    def problems(self, asm, evidence):
        return verify.palette_evidence_problems(
            {"kind": "palette", "evidence": evidence}, self.repo(asm))

    def test_slot_site_with_fixed_evidence_is_rejected(self):
        errs = self.problems(
            self.SLOT_ASM,
            "func_08000000 (code_test.s:3): func_08008E64(x, 0x05000200, 0x20)")
        self.assertEqual(len(errs), 1)
        self.assertIn("slot", errs[0])

    def test_slot_site_with_slot_evidence_passes(self):
        self.assertEqual(self.problems(
            self.SLOT_ASM,
            "func_08000000 (code_test.s:3): func_08008E64(x, 0x05000200 + slot*0x20, 0x20)"),
            [])

    def test_fixed_site_with_slot_evidence_is_rejected(self):
        errs = self.problems(
            self.FIXED_ASM,
            "func_08000000 (code_test.s:3): func_08008E64(x, 0x050000E0 + slot, 0x20)")
        self.assertEqual(len(errs), 1)
        self.assertIn("slot", errs[0])

    def test_fixed_site_with_fixed_evidence_passes(self):
        self.assertEqual(self.problems(
            self.FIXED_ASM,
            "func_08000000 (code_test.s:3): func_08008E64(x, 0x050000E0, 0x20)"),
            [])

    def test_real_manifest_palettes_pass(self):
        manifest = json.loads(MANIFEST.read_text())
        palettes = [a for a in manifest["assets"] if a["kind"] == "palette"]
        self.assertTrue(palettes)
        for asset in palettes:
            with self.subTest(symbol=asset["symbol"]):
                self.assertEqual(verify.palette_evidence_problems(asset), [])


class TilesEvidenceGuard(unittest.TestCase):
    """Evidence tiles4bpp harus menunjuk salinan/loader simbol yang benar."""
    ASM = ("\tldr r1, .LC0 @ =gUnk_08697920\n"
           "\tmovs r3, #0x8f\n"
           "\tlsls r3, r3, #5\n"
           "\tbl func_08008F0C\n")

    def repo(self, asm):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        root = Path(tmp.name)
        (root / "asm").mkdir()
        (root / "asm" / "code_test.s").write_text(asm)
        return root

    def problems(self, asm, evidence, symbol="gUnk_08697920"):
        return verify.tiles4bpp_evidence_problems(
            {"kind": "tiles4bpp", "symbol": symbol, "evidence": evidence},
            self.repo(asm))

    def test_copy_site_with_matching_symbol_and_length_passes(self):
        self.assertEqual(self.problems(
            self.ASM, "func_08000000 (code_test.s:4): salin 0x11E0 B"), [])

    def test_non_copy_line_is_rejected(self):
        errs = self.problems(self.ASM, "func_08000000 (code_test.s:3)")
        self.assertEqual(len(errs), 1)
        self.assertIn("bukan baris salinan/loader", errs[0])

    def test_other_symbol_at_copy_site_is_rejected(self):
        errs = self.problems(self.ASM, "func_08000000 (code_test.s:4)",
                             symbol="gUnk_08698E14")
        self.assertEqual(len(errs), 1)
        self.assertIn("bukan gUnk_08698E14", errs[0])

    def test_wrong_claimed_length_is_rejected(self):
        errs = self.problems(
            self.ASM, "func_08000000 (code_test.s:4): salin 0x1000 B")
        self.assertEqual(len(errs), 1)
        self.assertIn("padahal func_08008F0C menyalin 0x11E0 B", errs[0])

    def test_untraceable_length_is_rejected(self):
        asm = ("\tldr r1, .LC0 @ =gUnk_08697920\n"
               "\tbl func_08008F0C\n")
        errs = self.problems(
            asm, "func_08000000 (code_test.s:2): salin 0x11E0 B")
        self.assertEqual(len(errs), 1)
        self.assertIn("tidak terlacak", errs[0])

    def test_container_loader_with_matching_symbol_passes(self):
        asm = ("\tldr r1, .LC0 @ =gUnk_08667060\n"
               "\tbl func_0805E6CC\n")
        self.assertEqual(self.problems(
            asm, "func_08000000 (code_test.s:2): container",
            symbol="gUnk_08667060"), [])

    def test_real_manifest_tiles_pass(self):
        manifest = json.loads(MANIFEST.read_text())
        tiles = [a for a in manifest["assets"] if a["kind"] == "tiles4bpp"]
        self.assertTrue(tiles)
        for asset in tiles:
            with self.subTest(symbol=asset["symbol"]):
                self.assertEqual(verify.tiles4bpp_evidence_problems(asset), [])


class SchemaSemantics(unittest.TestCase):
    def entry(self, **extra):
        entry = {
            "id": "gfx/fonts/clock", "symbol": "gUnk_0875A440",
            "kind": "tiles4bpp", "semantics": "proven", "status": "rom-exact",
            "rom": {"offset": "0x75A440", "size": 4100, "sha256": "0" * 64},
            "source": {"json": "assets/gfx/fonts/clock.json"},
            "encoder": {"tool": "tile4bpp.py", "version": 1},
        }
        entry.update(extra)
        return entry

    def errors(self, entry):
        manifest = {"assets": [entry]}
        schema = json.loads(verify.SCHEMA.read_text())
        return verify.validate(manifest, schema)

    def test_semantics_wajib(self):
        entry = self.entry()
        entry.pop("semantics")
        self.assertTrue(any("semantics" in e for e in self.errors(entry)))

    def test_semantics_enum(self):
        self.assertTrue(any("enum" in e
                            for e in self.errors(self.entry(semantics="lain"))))


if __name__ == "__main__":
    unittest.main(verbosity=2)
