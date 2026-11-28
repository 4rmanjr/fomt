"""Regresi decomp.migrate.extend_unit_by_blocks.

Blok hasil migrasi adalah teks C/asm, jadi rujukan keras di dalamnya
(`bl`/`b`/`b<cond>`) tidak terlihat oleh analisis section asm. Kalau target
tidak ikut pindah, percabangan pendek meluap — bukti nyata:
`func_080D139C -> sub_080D14C6` menghasilkan
`relocation truncated to fit: R_ARM_THM_JUMP8 against symbol sub_080D14C6`.
"""

import re
import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
if str(REPO) not in sys.path:
    sys.path.insert(0, str(REPO))

from decomp.migrate import (  # noqa: E402
    extend_unit_by_blocks, faithful_span_body, has_bridge_scaffold,
    parse_unit_names, span_until_next)

ASM = """
\tthumb_func_start func_A
func_A: @ 0x08000000
\tnop
\tthumb_func_start func_B
func_B: @ 0x08000010
\tnop
\tnon_word_aligned_thumb_func_start func_C
func_C: @ 0x08000020
\tnop
\tthumb_func_start func_D
func_D: @ 0x08000030
\tnop
"""


class ParseUnitNamesTest(unittest.TestCase):
    """`--unit-names` memaksa unit grup (chunk gabungan pindah sekaligus)."""

    def test_daftar_dipisah_koma(self):
        self.assertEqual(parse_unit_names("a,b , c"), ["a", "b", "c"])

    def test_kosong_dan_duplikat(self):
        self.assertEqual(parse_unit_names(""), [])
        self.assertEqual(parse_unit_names(None), [])
        self.assertEqual(parse_unit_names("a, a, b"), ["a", "b"])


class BridgeScaffoldTest(unittest.TestCase):
    """Perancah judge `.Lbridge_*` (asm top-level) tak boleh ke src/.

    agbcc menaruh `__asm__(...)` top-level SEBELUM `.section` fungsi
    berikutnya, jadi byte-nya mendarat di section fungsi sebelumnya:
    `.text.code_809E804.080D12EC` jadi 0x2a8 dan ROM +1340 byte.
    """

    SCAFFOLD = '__asm__ (\n    ".syntax unified\\n.Lbridge_a4_x:\\n.space 468\\n");\n'

    def test_perancah_top_level_terdeteksi(self):
        body = self.SCAFFOLD + "__attribute__((naked)) void f(void) {\n" \
            '  __asm__ volatile ("bl .Lbridge_a4_x\\n" : : : "memory");\n}\n'
        self.assertTrue(has_bridge_scaffold(body))

    def test_rujukan_di_dalam_fungsi_saja_bukan_perancah(self):
        body = ("__attribute__((naked)) void f(void) {\n"
                '  __asm__ volatile ("bl .Lbridge_a4_x\\n" : : : "memory");\n}\n')
        self.assertFalse(has_bridge_scaffold(body))

    def test_draf_nyata(self):
        d139 = REPO / "decomp" / "drafts" / "sub_080D139C.c"
        d12ec = REPO / "decomp" / "drafts" / "sub_080D12EC.c"
        self.assertTrue(has_bridge_scaffold(d139.read_text()))
        self.assertFalse(has_bridge_scaffold(d12ec.read_text()))

    def test_span_body_persis_dan_tanpa_space(self):
        rom = bytes(range(256)) * 8
        out = faithful_span_body("sub_080D139C", 0x08000010, 0x24, rom=rom)
        self.assertNotIn(".space", out)
        self.assertNotIn("Lbridge", out)
        leks = re.findall(r"\.byte ([0-9A-Fx, ]+)", out)
        self.assertTrue(leks)
        got = [int(b, 16) for ln in leks
               for b in ln.split(", ") if b.strip()]
        self.assertEqual(got, list(rom[0x10:0x34]))

    def test_span_tak_valid_ditolak(self):
        with self.assertRaises(ValueError):
            faithful_span_body("f", 0x08000000, 0, rom=b"")
        with self.assertRaises(ValueError):
            faithful_span_body("f", 0x08000010, 0x40, rom=b"\x00" * 0x20)

    def test_span_until_next(self):
        st = {"a": {"addr": 0x100}, "b": {"addr": "0x120"}}
        self.assertEqual(span_until_next(st, 0x100), 0x20)
        self.assertIsNone(span_until_next(st, 0x120))
        self.assertIsNone(span_until_next({}, 0x100))


class ExtendUnitByBlocksTest(unittest.TestCase):
    def test_rujukan_blok_ikut_masuk_unit(self):
        blocks = {"func_A": '"bl func_C\\n"', "func_B": '"bx lr\\n"'}
        unit = extend_unit_by_blocks("m.s", ["func_A", "func_B"], ASM, blocks)
        self.assertEqual(unit, ["func_A", "func_B", "func_C"])

    def test_transitif(self):
        blocks = {"func_A": '"bl func_C\\n"', "func_B": "",
                  "func_C": '"b func_D\\n"'}
        unit = extend_unit_by_blocks("m.s", ["func_A", "func_B"], ASM, blocks)
        self.assertEqual(unit, ["func_A", "func_B", "func_C", "func_D"])

    def test_label_lokal_diabaikan(self):
        blocks = {"func_A": '"b .L08000004\\nbl func_tidak_ada\\n"'}
        unit = extend_unit_by_blocks("m.s", ["func_A"], ASM, blocks)
        self.assertEqual(unit, ["func_A"])

    def test_urutan_mengikuti_alamat_asm(self):
        blocks = {"func_B": '"bl func_A\\n"'}
        unit = extend_unit_by_blocks("m.s", ["func_B"], ASM, blocks)
        self.assertEqual(unit, ["func_A", "func_B"])


if __name__ == "__main__":
    unittest.main()
