#!/usr/bin/env python3
"""Regresi Fase 0: schema manifest aset, gate `asset_verify`, encoder palet.

Fixture kecil + manifest asli. Yang dikunci:

  * schema menolak field wajib yang hilang dan `id` berisi alamat ROM;
  * `pal2gba` round-trip 5 bit eksak dan byte-nya sama dengan slice ROM;
  * `asset_verify` melaporkan hash ROM yang diubah, dan mencatat `.incbin`
    yang belum dialihkan sebagai catatan (bukan kegagalan di Fase 0).

Jalankan: python3 tools/tests/test_asset_verify.py
"""
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
    def test_incbin_is_a_note_not_a_failure(self):
        problems, notes, _summary = verify.verify()
        self.assertEqual(problems, [])
        self.assertTrue(any(".incbin baserom" in n for n in notes), notes)
        strict, _notes, _summary = verify.verify(require_switched=True)
        self.assertTrue(any(".incbin" in p for p in strict), strict)

    @unittest.skipUnless(ROM.exists(), "butuh baserom.gba")
    def test_summary_counts_every_asset(self):
        _problems, _notes, summary = verify.verify()
        manifest = json.loads(MANIFEST.read_text())
        self.assertEqual(summary["assets"], len(manifest["assets"]))
        self.assertEqual(summary["ok"], summary["assets"])


if __name__ == "__main__":
    unittest.main(verbosity=2)
