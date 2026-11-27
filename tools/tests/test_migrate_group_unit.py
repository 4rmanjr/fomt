"""Regresi decomp.migrate.extend_unit_by_blocks.

Blok hasil migrasi adalah teks C/asm, jadi rujukan keras di dalamnya
(`bl`/`b`/`b<cond>`) tidak terlihat oleh analisis section asm. Kalau target
tidak ikut pindah, percabangan pendek meluap — bukti nyata:
`func_080D139C -> sub_080D14C6` menghasilkan
`relocation truncated to fit: R_ARM_THM_JUMP8 against symbol sub_080D14C6`.
"""

import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
if str(REPO) not in sys.path:
    sys.path.insert(0, str(REPO))

from decomp.migrate import extend_unit_by_blocks  # noqa: E402

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
