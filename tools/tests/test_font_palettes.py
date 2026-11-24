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
            for p in e["proof"]:
                self.assertTrue(p.get("copies"), e["symbol"])
                for c in p["copies"]:
                    self.assertIn(c["source"], p["palette_symbols"])
                    self.assertTrue(c["dest"].startswith("0x05000"), c["dest"])

    def test_palette_copy_requires_source_argument(self):
        def trace(*lines):
            return font_palettes.palette_copy(
                font_palettes.trace_copies("\n".join(lines)),
                {"gUnk_08731940"})

        # sumber = simbol palet, tujuan = palet RAM -> bukti
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tbl func_08008E64"),
            [{"call": "func_08008E64", "source": "gUnk_08731940",
              "dest": "0x05000000"}])
        # Unpack: tujuan palet OBJ juga dihitung
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tldr r1, .L2 @ =0x05000200",
                  "\tbl Unpack")[0]["dest"], "0x05000200")
        # sumber lewat `mov` tetap terlacak
        self.assertEqual(len(trace("\tldr r0, .L1 @ =gUnk_08731940",
                                   "\tmov r5, r0",
                                   "\tldr r1, .L2 @ =0x05000000",
                                   "\tmov r0, r5",
                                   "\tbl func_08008EB8")), 1)
        # tujuan bukan palet RAM -> bukan bukti
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tldr r1, .L2 @ =0x06000000",
                  "\tbl func_08008E64"), [])
        # simbol palet sebagai tujuan, bukan sumber -> bukan bukti
        self.assertEqual(
            trace("\tldr r0, .L1 @ =0x06000000",
                  "\tldr r1, .L2 @ =gUnk_08731940",
                  "\tbl func_08008EB8"), [])
        # sumber ditimpa `bl` lain -> tidak diketahui, bukan ditebak
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tbl func_lain",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tbl func_08008E64"), [])

    def test_pop_and_ldm_ranges_invalidate(self):
        def trace(*lines):
            return font_palettes.palette_copy(
                font_palettes.trace_copies("\n".join(lines)),
                {"gUnk_08731940"})

        # `pop {r4-r7}` menulis r4..r7: nilai lama r5 tidak boleh jadi sumber
        self.assertEqual(
            trace("\tldr r5, .L1 @ =gUnk_08731940",
                  "\tpop {r4-r7}",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tmov r0, r5",
                  "\tbl func_08008E64"), [])
        # `ldmia r0!, {r4-r7}` juga menulis rentang itu
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tmov r6, r0",
                  "\tldmia r0!, {r4-r7}",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tmov r0, r6",
                  "\tbl func_08008E64"), [])
        # `pop {r1-r3}` mengosongkan argumen r1 (tujuan) — bukan palet RAM lagi
        self.assertEqual(
            trace("\tldr r0, .L1 @ =gUnk_08731940",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tpop {r1-r3}",
                  "\tbl func_08008E64"), [])
        # register di luar rentang tetap terlacak
        self.assertEqual(
            trace("\tldr r8, .L1 @ =gUnk_08731940",
                  "\tpop {r4-r7}",
                  "\tldr r1, .L2 @ =0x05000000",
                  "\tmov r0, r8",
                  "\tbl func_08008E64"),
            [{"call": "func_08008E64", "source": "gUnk_08731940",
              "dest": "0x05000000"}])
        # daftar tunggal dan rentang campur (`push`/`pop` agbcc)
        self.assertEqual(font_palettes.reg_list("r4-r7, lr"),
                         ["r4", "r5", "r6", "r7", "lr"])
        self.assertEqual(font_palettes.reg_list("r0, r2-r3"),
                         ["r0", "r2", "r3"])

    def test_every_symbol_has_call_site(self):
        for e in self.manifest["symbols"]:
            self.assertTrue(e["call_sites"], e["symbol"])
            for s in e["call_sites"]:
                self.assertTrue((REPO / s["file"]).exists(), s["file"])

    def test_manifest_and_doc_synced(self):
        self.assertEqual(font_palettes.main(["--check"]), 0)


if __name__ == "__main__":
    unittest.main(verbosity=2)
