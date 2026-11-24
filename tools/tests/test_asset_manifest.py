#!/usr/bin/env python3
"""Regresi indeks aset: sinkron dengan metadata dan menolak non-rom-exact."""
import importlib.util
import json
import shutil
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "asset_manifest", REPO / "tools" / "assets" / "asset_manifest.py")
asset_manifest = importlib.util.module_from_spec(spec)
spec.loader.exec_module(asset_manifest)


class AssetManifest(unittest.TestCase):
    def setUp(self):
        if not asset_manifest.ROM.exists():
            self.skipTest("baserom.gba tidak ada")

    def test_manifest_file_is_synced(self):
        text = asset_manifest.render(asset_manifest.build())
        self.assertEqual(asset_manifest.MANIFEST.read_text(), text)
        assets = json.loads(text)["assets"]
        # Daftar simbol diturunkan dari metadata, bukan dipatok: menambah aset
        # (mis. palet Fase 0) tidak boleh membuat regresi ini merah.
        expected = []
        # `assets/gfx/tiles/` (blob tile tanpa palet) harus ikut dipindai,
        # kalau tidak aset tiles4bpp baru tidak pernah masuk manifest.
        self.assertIn(asset_manifest.TILE_DIR, asset_manifest.ASSET_DIRS)
        for directory in asset_manifest.ASSET_DIRS:
            for path in sorted(Path(directory).glob("*.json")):
                meta = json.loads(path.read_text())
                if "rom" in meta and "kind" in meta:
                    expected.append(meta["symbol"])
        self.assertEqual([a["symbol"] for a in assets], expected)
        kinds = {a["kind"] for a in assets}
        self.assertIn("tiles4bpp", kinds)
        self.assertIn("palette", kinds)
        for entry in assets:
            self.assertEqual(entry["status"], "rom-exact")
            for key in ("id", "kind", "rom", "source", "encoder"):
                self.assertIn(key, entry)
            self.assertIn("json", entry["source"])
            # source minimal punya satu representasi gambar: png atau pal.
            self.assertTrue(entry["source"].get("png")
                            or entry["source"].get("pal"))
            self.assertRegex(entry["rom"]["sha256"], r"^[0-9a-f]{64}$")

    def test_rejects_status_below_rom_exact(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            for name in ("clock.json", "clock.png"):
                shutil.copy(REPO / "assets" / "gfx" / "fonts" / name, td / name)
            meta = json.loads((td / "clock.json").read_text())
            meta["status"] = "decoded-exact"
            (td / "clock.json").write_text(json.dumps(meta))
            with self.assertRaises(SystemExit):
                asset_manifest.build_entry(td / "clock.json",
                                           asset_manifest.ROM.read_bytes())


if __name__ == "__main__":
    unittest.main(verbosity=2)
