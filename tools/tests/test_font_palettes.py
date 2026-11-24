#!/usr/bin/env python3
"""Regresi telusur palet font/objek: status jujur + dokumen sinkron."""
import importlib.util
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "font_palettes", REPO / "tools" / "assets" / "font_palettes.py")
font_palettes = importlib.util.module_from_spec(spec)
spec.loader.exec_module(font_palettes)

CONTAINERS = {
    "gUnk_084F90CC", "gUnk_084FA9A0", "gUnk_0852D984", "gUnk_0858BA28",
    "gUnk_086F2FAC", "gUnk_0871D51C", "gUnk_08728320", "gUnk_08729460",
    "gUnk_0872DE44", "gUnk_08731B40", "gUnk_087409E4", "gUnk_0874F34C",
}


class FontPalettes(unittest.TestCase):
    def setUp(self):
        self.manifest = font_palettes.analyse()

    def test_covers_twelve_containers_and_clock_font(self):
        syms = {e["symbol"] for e in self.manifest["symbols"]}
        self.assertEqual(syms, CONTAINERS | {"gUnk_0875A440"})
        containers = {e["symbol"] for e in self.manifest["symbols"]
                      if e["container"]}
        self.assertEqual(containers, CONTAINERS)

    def test_status_only_when_proved(self):
        for e in self.manifest["symbols"]:
            self.assertIn(e["palette_status"],
                          ("terbukti", "belum terbukti"))
            if e["palette_status"] == "terbukti":
                self.assertTrue(e["proof"], e["symbol"])
            else:
                self.assertEqual(e["proof"], [], e["symbol"])

    def test_every_symbol_has_call_site(self):
        for e in self.manifest["symbols"]:
            self.assertTrue(e["call_sites"], e["symbol"])
            for s in e["call_sites"]:
                self.assertTrue((REPO / s["file"]).exists(), s["file"])

    def test_manifest_and_doc_synced(self):
        self.assertEqual(font_palettes.main(["--check"]), 0)


if __name__ == "__main__":
    unittest.main(verbosity=2)
