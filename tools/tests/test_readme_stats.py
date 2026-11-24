#!/usr/bin/env python3
"""Regresi generator statistik README: angka, bar, penanda, deteksi basi."""
import importlib.util
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "readme_stats", REPO / "tools" / "scripts" / "readme_stats.py")
readme_stats = importlib.util.module_from_spec(spec)
spec.loader.exec_module(readme_stats)

TOTALS = {
    "total": 100, "matched": 51, "src": 42, "promo": 9, "failed": 49,
    "bytes_total": 1000, "bytes_matched": 150, "bytes_src": 120,
}
ASSETS = {
    "rows": [
        {"kind": "sprite", "done": 1, "denominator": 73, "groups": ["sprite/OBJ"]},
        {"kind": "palette", "done": 1, "denominator": 70, "groups": ["palet"]},
    ],
    "total_done": 2, "total_denominator": 143, "unknown": [],
    "sprite_done": 1, "sprite_total": 73,
}
# Kasus penting: beberapa kelas berbagi grup yang sama. Penyebutnya harus
# populasi grup (73), bukan jumlah aset yang selesai (3), supaya tidak 100%.
SHARED = {
    "rows": [
        {"kind": "sprite", "done": 1, "denominator": 73, "groups": ["sprite/OBJ"]},
        {"kind": "tiles4bpp", "done": 1, "denominator": 73, "groups": ["sprite/OBJ"]},
        {"kind": "font_container", "done": 1, "denominator": 73, "groups": ["sprite/OBJ"]},
    ],
    "total_done": 3, "total_denominator": 73, "unknown": [],
    "sprite_done": 1, "sprite_total": 73,
}


class ReadmeStats(unittest.TestCase):
    def test_render_pakai_angka_dan_persen_indonesia(self):
        block = readme_stats.render(TOTALS, ASSETS)
        self.assertIn("| 51 | 100 |", block)
        self.assertIn("51%", block)
        self.assertIn("42%", block)
        self.assertIn("9%", block)          # nol di belakang dibuang
        self.assertIn("120 / 1.000 B", block)  # pemisah ribuan Indonesia
        self.assertIn("1,4%", block)        # 1/73 -> 1,4 (pembulatan, koma)
        self.assertIn("| **Total (blob unik)** | 2 | 143 |", block)

    def test_kelas_berbagi_grup_tidak_pernah_100_persen(self):
        block = readme_stats.render(TOTALS, SHARED)
        self.assertIn("| Sprite/OBJ | 1 | 73 |", block)
        self.assertIn("| Tiles 4bpp | 1 | 73 |", block)
        # total memakai union simbol (73), bukan 3 -> kalau 100% berarti
        # penyebutnya kembali dihitung dari himpunan yang sama (bug lama).
        self.assertIn("| **Total (blob unik)** | 3 | 73 |", block)
        self.assertNotIn("100%", block)

    def test_aset_tanpa_blob_dilaporkan(self):
        data = dict(SHARED, unknown=["gUnk_SINTETIS"])
        block = readme_stats.render(TOTALS, data)
        self.assertIn("tak dihitung di penyebut", block)
        self.assertIn("`gUnk_SINTETIS`", block)

    def test_bar_panjangnya_tetap(self):
        self.assertEqual(readme_stats.bar(0).count("░"), readme_stats.BAR_WIDTH)
        self.assertEqual(readme_stats.bar(100).count("█"), readme_stats.BAR_WIDTH)
        half = readme_stats.bar(50)
        self.assertEqual(half.count("█"), readme_stats.BAR_WIDTH // 2)
        self.assertEqual(len(half), readme_stats.BAR_WIDTH)

    def test_blok_di_ganti_tanpa_menyentuh_teks_lain(self):
        text = f"depan\n{readme_stats.BEGIN}\nlama\n{readme_stats.END}\nbelakang\n"
        out = readme_stats.updated_readme(text, block="BARU")
        self.assertIn("BARU", out)
        self.assertNotIn("lama", out)
        self.assertTrue(out.startswith("depan"))
        self.assertTrue(out.rstrip().endswith("belakang"))
        self.assertFalse(readme_stats.is_stale(out, block="BARU"))

    def test_deteksi_basi(self):
        text = f"{readme_stats.BEGIN}\nlama\n{readme_stats.END}\n"
        self.assertTrue(readme_stats.is_stale(text, block="baru"))

    def test_penanda_hilang_ditolak(self):
        with self.assertRaises(SystemExit):
            readme_stats.split_block("tanpa penanda")


if __name__ == "__main__":
    unittest.main()
