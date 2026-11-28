"""Regresi tools/scripts/align_sections.sh.

Skrip ini menulis padding tiap section `ax` hasil agbcc. ROM FOTM menaruh
sebagian fungsi di alamat 2-mod-4 (mis. 0x080D1186, 0x080D116A), jadi section
seperti itu HARUS di-align 2 byte; kalau dipaksa 4 byte linker menyisipkan
2 byte dan semua simbol sesudahnya bergeser (func_080D1186 -> 0x080d1188).
"""

import shutil
import subprocess
import sys
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


def _align_line(lines):
    """Baris `.align` pertama sesudah header section (label .Lalignfix_*
    boleh berada di antaranya: dipakai `.fill` padding ekor)."""
    for ln in lines[1:4]:
        if ln.startswith("\t.align"):
            return ln
    return None


def _section(text, name):
    """Baris-baris satu section (header + isi) sampai section berikutnya."""
    out, on = [], False
    for ln in text.splitlines():
        if ln.startswith("\t.section "):
            on = name in ln
        if on:
            out.append(ln)
    return out


class LinkonceSectionTest(unittest.TestCase):
    """`.gnu.linkonce.t.*` (instansiasi template C++) = section kode.

    Kalau dilewat skrip, GAS membulatkan panjangnya ke alignment dengan filler
    `nop` — 2 byte `c046` vs `0000` di ROM (TERBUKTI
    `.gnu.linkonce.t.push_front__...ToolStack` @ 0x080d7e62).
    """

    def test_linkonce_dapat_tail_align_fill_0(self):
        src = (
            "\t.section .gnu.linkonce.t.foo,\"ax\",%progbits\n"
            "\t.align\t2, 0\n"
            "foo:\n"
            "\tnop\n"
        )
        out = _run(src)
        self.assertIn('\t.section ".gnu.linkonce.t.foo"\n\t.align 2, 0', out)


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
        self.assertEqual(_align_line(lines), "\t.align 1, 0")
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
        self.assertEqual(_align_line(lines), "\t.align 2, 0")
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
        self.assertEqual(_align_line(lines), "\t.align 2, 0")
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

    def test_section_berakhir_2_mod_4_wajib_align_1(self):
        """Section 4-aligned tapi BERAKHIR di 2-mod-4 harus align 1.

        TERBUKTI: `.080D1498` (0x1498..0x14c6) isi 0x2e, tapi `.align 2`
        membulatkannya jadi 0x30 -> ROM +2 byte; `.080D10F0` (chunk asm)
        isi 0x96 -> 0x98 saat 0x1186 pindah ke src/ (func_080D1186 mendarat
        di 0x080d1188).
        """
        sys.path.insert(0, str(REPO / "tools" / "scripts"))
        from align_sections import align_for  # noqa: E402
        addrs = [0x080D1186, 0x080D119E, 0x080D1224, 0x080D1498, 0x080D14C6]
        self.assertEqual(align_for(".text.m.080D1498", addrs, src_present={0x080D14C6}), 1)
        # section berikutnya masih di berkas yang sama -> biarkan asli (4)
        self.assertEqual(align_for(".text.m.080D1498", addrs, present={0x080D14C6}), 2)
        self.assertEqual(align_for(".text.m.080D1186", addrs), 1)
        self.assertEqual(align_for(".text.m.080D1224", addrs), 2)

    def test_align_ekor_section_2_mod_4_dibuang(self):
        """`.align 2, 0` penutup fungsi tak boleh memaksa section 2-mod-4.

        TERBUKTI: .text.code_809E804.080D129A berisi 0x52 byte tapi jadi
        0x54 karena agbcc menutup fungsi dgn `.align 2, 0`; tiga section
        seperti itu membuat ROM +8 byte dan fomt.gba FAILED.
        """
        src = ('\t.section .text.m.080D129A,"ax",%progbits\n'
               "\t.align\t2, 0\n"
               "f:\n"
               "\t.byte 0x01, 0x02\n"
               "\t.align 2, 0\n"
               '\t.section .text.m.080D12EC,"ax",%progbits\n'
               "\t.align\t2, 0\n"
               "g:\n"
               "\t.byte 0x03\n")
        out = _run(src)
        head = out.split(".text.m.080D12EC")[0]
        self.assertIn("\t.align 1, 0", head)
        self.assertNotIn("\t.align 2, 0", head)

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
