"""Regresi tools/scripts/align_sections.sh.

Skrip ini menulis padding tiap section `ax` hasil agbcc. ROM FOTM menaruh
sebagian fungsi di alamat 2-mod-4 (mis. 0x080D1186, 0x080D116A), jadi section
seperti itu HARUS di-align 2 byte; kalau dipaksa 4 byte linker menyisipkan
2 byte dan semua simbol sesudahnya bergeser (func_080D1186 -> 0x080d1188).
"""

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
SCRIPT = REPO / "tools" / "scripts" / "align_sections.sh"
AS = shutil.which("arm-none-eabi-as") or shutil.which("as")


def _run(text):
    with tempfile.TemporaryDirectory() as td:
        p = Path(td) / "unit.s"
        p.write_text(text)
        r = subprocess.run(["bash", str(SCRIPT), str(p)],
                           capture_output=True, text=True)
        if r.returncode != 0:
            raise AssertionError(f"align_sections.sh rc={r.returncode}: {r.stderr}")
        return p.read_text()


def _section(text, name):
    """Baris-baris satu section (header + isi) sampai section berikutnya."""
    out, on = [], False
    for ln in text.splitlines():
        if ln.startswith("\t.section "):
            on = name in ln
        if on:
            out.append(ln)
    return out


class AlignSectionsTest(unittest.TestCase):
    def test_section_2_mod_4_dialign_2_byte(self):
        src = (
            '\t.section .text.m.080D1186,"ax",%progbits\n'
            "\t.align\t2, 0\n"
            "\t.globl\tfunc_080D1186\n"
            "func_080D1186:\n"
            "\tnop\n"
        )
        out = _run(src)
        lines = _section(out, "080D1186")
        self.assertEqual(lines[0],
                         '\t.section .text.m.080D1186,"ax",%progbits')
        self.assertEqual(lines[1], "\t.align 1, 0")
        # padding ekor untuk section yang sama juga 2 byte
        self.assertIn('\t.section ".text.m.080D1186"\n\t.align 1, 0', out)

    def test_section_aligned_4_tetap_4_byte(self):
        src = (
            '\t.section .text.m.080D1188,"ax",%progbits\n'
            "\t.align\t2, 0\n"
            "func_080D1188:\n"
            "\tnop\n"
        )
        out = _run(src)
        lines = _section(out, "080D1188")
        self.assertEqual(lines[1], "\t.align 2, 0")
        self.assertIn('\t.section ".text.m.080D1188"\n\t.align 2, 0', out)

    def test_nama_tanpa_alamat_tetap_4_byte(self):
        src = (
            '\t.section .text.foo,"ax",%progbits\n'
            "\t.align\t2, 0\n"
            "foo:\n"
            "\tnop\n"
        )
        out = _run(src)
        lines = _section(out, ".text.foo")
        self.assertEqual(lines[1], "\t.align 2, 0")
        self.assertIn('\t.section ".text.foo"\n\t.align 2, 0', out)

    def test_isi_section_tidak_berubah(self):
        src = (
            '\t.section .text.m.080D116A,"ax",%progbits\n'
            "\t.align\t2, 0\n"
            "\t.globl\tfunc_080D116A\n"
            "\t.type\t func_080D116A,function\n"
            "\t.thumb_func\n"
            "func_080D116A:\n"
            "\tmovs\tr4, #0x20\n"
            "\tbx\tlr\n"
        )
        out = _run(src)
        for keep in ("\t.globl\tfunc_080D116A",
                     "\t.type\t func_080D116A,function",
                     "\t.thumb_func",
                     "func_080D116A:",
                     "\tmovs\tr4, #0x20",
                     "\tbx\tlr"):
            self.assertIn(keep, out)

    def test_ekor_text_dan_footer(self):
        out = _run('\t.section .text.m.080D1186,"ax",%progbits\n'
                   "\t.align\t2, 0\n"
                   "f:\n\tnop\n")
        self.assertTrue(out.rstrip().endswith("\t.text\n\t.align 2, 0"))

    @unittest.skipUnless(AS, "assembler arm tidak tersedia")
    def test_objek_section_2_mod_4_benar_benar_2_byte(self):
        src = (
            '\t.section .text.m.080D1186,"ax",%progbits\n'
            "\t.align\t2, 0\n"
            "\t.globl\tfunc_080D1186\n"
            "\t.thumb_func\n"
            "func_080D1186:\n"
            "\tnop\n"
            "\tbx\tlr\n"
        )
        with tempfile.TemporaryDirectory() as td:
            s = Path(td) / "unit.s"
            o = Path(td) / "unit.o"
            s.write_text(src)
            subprocess.run(["bash", str(SCRIPT), str(s)], check=True,
                           capture_output=True)
            cmd = ([AS, "-mcpu=arm7tdmi"] if "arm-none" in str(AS) else [AS])
            subprocess.run(cmd + [str(s), "-o", str(o)], check=True,
                           capture_output=True)
            objdump = shutil.which("arm-none-eabi-objdump") or shutil.which("objdump")
            out = subprocess.run([objdump, "-h", str(o)], check=True,
                                 capture_output=True, text=True).stdout
            row = next(ln for ln in out.splitlines() if "080D1186" in ln)
            self.assertTrue(row.rstrip().endswith("2**1"), row)


if __name__ == "__main__":
    unittest.main()
