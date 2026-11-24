#!/usr/bin/env python3
"""Regresi classifier `raw_assets.py` untuk ambang header/ekor.

Fixture kecil dan deterministik; tujuannya mengunci kelas yang sudah
dibuktikan di inventaris, bukan menguji ulang isi ROM:

  * flat tile 4148 B: 20 B header + 129 tile tetap sprite;
  * gClockFont 4100 B: 128 tile + 4 B ekor tetap sprite;
  * symbol yang terverifikasi call-site/stream sebagai container/tabel
    metatile/gambar terkompresi tetap memakai override walau data sintetisnya
    lolos uji tile;
  * sprite 128 B: empat tile tetap sprite;
  * tilemap 780 B: 390 entri tetap tilemap;
  * tabel besar non-32 B tetap tabel.

Jalankan: python3 tools/tests/test_raw_assets.py
"""
import importlib.util
import json
import struct
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "raw_assets", REPO / "tools" / "scripts" / "raw_assets.py")
raw_assets = importlib.util.module_from_spec(spec)
spec.loader.exec_module(raw_assets)


def tiles(count, step):
    """Tile 4bpp padat nol dengan satu indeks per tile (mudah diverifikasi)."""
    body = bytearray(count * 32)
    for i in range(count):
        body[i * 32 + (i * step) % 32] = i % 15 + 1
    return body


def font_4148():
    # u32 awal kecil -> classifier memotong 20 B header di depan.
    return struct.pack("<I", 0x1234) + bytes(16) + bytes(tiles(129, 7))


def font_4100():
    # u32 awal besar, u32 akhir kecil -> classifier memotong 4 B ekor.
    body = tiles(128, 5)
    body[:4] = struct.pack("<I", 0x00010000)
    return bytes(body) + struct.pack("<I", 1)


def palette_16():
    """16 warna BGR555 sah: tiap word mengisi >= 2 nibble."""
    cols = [0x7FFF, 0x03E0, 0x7C00, 0x001F, 0x4210, 0x2108, 0x6318, 0x1CE7,
            0x5294, 0x0C63, 0x3DEF, 0x77BD, 0x294A, 0x0421, 0x6B5A, 0x7BDE]
    return struct.pack("<16H", *cols)


def tile_jarang(tiles=4):
    """Tile 4bpp jarang: word satu-nibble (0x0003, 0x0030), semua < 0x8000."""
    body = bytearray()
    for i in range(tiles * 16):
        body += struct.pack("<H", (0x0003, 0x0030, 0x0000, 0x0300)[i % 4])
    return bytes(body)


def sprite_128():
    # Bit 15 menyala supaya tidak lolos cabang palet; modal 0xFFFF > 90%
    # membuat cabang tilemap juga tidak aktif.
    return b"\xff" * 128


def tilemap_780():
    # 390 entri; top-bit konsisten, tetapi tidak ada nilai yang mendominasi.
    values = ([0x0400 + i % 8 for i in range(320)]
              + [0x0C00 + i % 8 for i in range(70)])
    return struct.pack("<390H", *values)


def large_table():
    # 8193 B: semua 16 indeks muncul, nol < 13%, dan panjang ganjil
    # sehingga tidak masuk cabang tilemap maupun tile_prefix.
    return bytes(range(256)) * 32 + b"\x07"


def cell_stamp(cols, rows):
    """Stempel peta u16 selaras: atribut bit 10-15 konsisten."""
    return struct.pack(f"<{cols * rows}H",
                       *[0x2400 + i for i in range(cols * rows)])


class RawAssetClassifier(unittest.TestCase):
    def check(self, data, group, window=None, name=None):
        got, note, probe = raw_assets.classify(data, name)
        self.assertEqual(got, group, note)
        self.assertEqual(probe, window)

    def test_tile_sheet_4148_header_stays_sprite(self):
        data = font_4148()
        self.assertEqual(len(data), 4148)
        self.check(data, "sprite/OBJ", (20, 0))
        self.check(data, "sprite/OBJ", None, "gUnk_0872DE44")

    def test_gclock_font_4100_tail_stays_sprite(self):
        data = font_4100()
        self.assertEqual(len(data), 4100)
        self.check(data, "sprite/OBJ", (0, 4))
        self.check(data, "sprite/OBJ", (0, 4), "gUnk_0875A440")

    def test_verified_font_container_is_not_flat_tile(self):
        data = font_4148()
        got, note, probe = raw_assets.classify(data, "gUnk_0872DE44")
        self.assertEqual(got, "sprite/OBJ", note)
        self.assertIsNone(probe)
        self.assertIn("A27/B27/C6/D106/E1/F0/T27", note)

    def test_verified_glyph_containers_are_not_flat_tile(self):
        for name, stride in (("gUnk_084F90CC", 12),
                             ("gUnk_084FA9A0", 24)):
            got, note, probe = raw_assets.classify(font_4148(), name)
            self.assertEqual(got, "sprite/OBJ", note)
            self.assertIsNone(probe)
            self.assertIn(f"glyph {stride} B", note)

    def test_verified_metatile_table_is_not_tilemap(self):
        # 25204 entri tidak punya lebar persegi; loader memakainya sebagai blok
        # 4x4, jadi jangan dirender sebagai grid lebar 32 (fallback).
        got, note, probe = raw_assets.classify(large_table(), "gUnk_086DE7F4")
        self.assertEqual(got, "tabel", note)
        self.assertIsNone(probe)
        self.assertIn("blok 4x4", note)
        self.assertIsNone(raw_assets.render(
            {"symbol": "gUnk_086DE7F4", "size": 50408}, bytes(50408),
            Path("/tmp"), "tilemap", note))

    def test_verified_glyph_table_stays_table(self):
        got, note, probe = raw_assets.classify(large_table(), "gUnk_08523290")
        self.assertEqual(got, "tabel", note)
        self.assertIsNone(probe)
        self.assertIn("ldrsh", note)

    def test_verified_embedded_streams_are_compressed(self):
        for name in ("gUnk_0869B284", "gUnk_086D74F8", "gUnk_086DC3F4"):
            got, note, probe = raw_assets.classify(large_table(), name)
            self.assertEqual(got, "gambar terkompresi", note)
            self.assertIsNone(probe)
            self.assertIn("tertanam", note)
            self.assertIn("diekstrak ke assets/0x70/extern", note)

    def test_palet_padat_tetap_palet(self):
        self.check(palette_16(), "palet")

    def test_tile_jarang_bukan_palet(self):
        # 128 B, semua u16 < 0x8000: dulu lolos cabang palet "64 warna".
        data = tile_jarang()
        self.assertTrue(all(v < 0x8000 for v in struct.unpack("<64H", data)))
        got, note, _ = raw_assets.classify(data)
        self.assertEqual(got, "sprite/OBJ", note)
        self.assertIn("bukan palet", note)

    def test_single_nibble_fraction_memisahkan(self):
        cols = struct.unpack("<16H", palette_16())
        sparse = struct.unpack("<64H", tile_jarang())
        self.assertLess(raw_assets.single_nibble_fraction(cols), 0.15)
        self.assertGreaterEqual(raw_assets.single_nibble_fraction(sparse), 0.15)

    def test_palet_dengan_warna_gelap_tetap_palet(self):
        # Palet nyaris hitam: banyak nibble nol, tetapi tiap warna masih dua
        # nibble -> bukan pola tile jarang.
        cols = [0x0011, 0x0022, 0x0110, 0x0220, 0x1100, 0x2200] * 2 + [0x0000] * 4
        self.check(struct.pack("<16H", *cols), "palet")

    def test_override_call_site_menang_atas_palet_288(self):
        # 288 B = 9 x palet 16 warna: isi lolos cabang palet "144 warna",
        # tetapi call site menyalinnya 0x120 B ke VRAM, jadi tile.
        data = palette_16() * 9
        self.assertEqual(raw_assets.classify(data)[0], "palet")
        for name, dst in (("gUnk_087510AC", "0x060014A0"),
                          ("gUnk_087511CC", "0x06001380")):
            got, note, probe = raw_assets.classify(data, name)
            self.assertEqual(got, "sprite/OBJ", note)
            self.assertIsNone(probe)
            self.assertIn("0x120 B", note)
            self.assertIn(dst, note)

    def test_override_padding_nol_dan_slot_dma(self):
        # 32 B gambar + 96 B nol: klasifikasi isi menyebut 4 tile, call site
        # menyalin satu tile 0x20 B ke VRAM dan menulis BG map dengan indeks
        # palet; catatan override harus menyebut padding, slot, dan indeks itu.
        data = struct.pack("<16H", *range(16)) + bytes(96)
        for name, slot in (("gUnk_087529AC", "0x72"),
                           ("gUnk_08752CCC", "0x59")):
            got, note, probe = raw_assets.classify(data, name)
            self.assertEqual(got, "sprite/OBJ", note)
            self.assertIsNone(probe)
            self.assertIn("padding nol", note)
            self.assertIn(f"slot {slot}", note)
            self.assertIn("indeks palet", note)

    def test_sprite_128_stays_sprite(self):
        data = sprite_128()
        self.assertEqual(len(data), 128)
        self.check(data, "sprite/OBJ")

    def test_tilemap_780_stays_tilemap(self):
        data = tilemap_780()
        self.assertEqual(len(data), 780)
        self.check(data, "tilemap")

    def test_large_table_stays_table(self):
        data = large_table()
        self.assertGreater(len(data), 4096)
        self.check(data, "tabel")

    def test_stamp_width_comes_from_loader_not_divisor(self):
        # 48 B stamp 6x4: heuristik pembagi memilih lebar 8 (48 = 6*8 juga
        # habis), tetapi loader membaca 6 kolom. 32 B/8 B sama kasusnya.
        for name, (cols, rows, _block) in raw_assets.VERIFIED_MAP_STAMP.items():
            data = cell_stamp(cols, rows)
            self.assertEqual(len(data) // 2, cols * rows, name)
            got, note, probe = raw_assets.classify(data, name)
            self.assertEqual(got, "tilemap", note)
            self.assertEqual(probe, None)
            self.assertIn(f"stamp {cols}x{rows}", note)
            with tempfile.TemporaryDirectory() as tmp:
                (Path(tmp) / "png").mkdir()
                entry = {"symbol": name, "size": len(data),
                         "map_width": cols}
                png = raw_assets.render(entry, data, Path(tmp),
                                        "tilemap", note)
                self.assertTrue(png and png.endswith(f"tilemap_{cols}.png"),
                                png)

    def test_stamp_without_matching_width_is_not_rendered(self):
        # Kalau map_width tidak membagi jumlah entri, jangan render grid.
        data = cell_stamp(6, 4)
        entry = {"symbol": "x", "size": len(data), "map_width": 5}
        self.assertIsNone(raw_assets.render(entry, data, Path("/tmp"),
                                           "tilemap", "test"))

    def test_stamp_library_is_not_sprite_sheet(self):
        # gUnk_086EAD8C 33312 B = 1041 blok 4x4 u16; bukan 1041 tile 4bpp.
        got, note, probe = raw_assets.classify(bytes(33312), "gUnk_086EAD8C")
        self.assertEqual(got, "tabel", note)
        self.assertIsNone(probe)
        self.assertIn("1041 blok 4x4", note)
        self.assertIn("bukan 1041 tile 4bpp", note)

    def test_non_square_stamp_tables_are_not_rendered(self):
        for name in ("gUnk_086DCC88", "gUnk_086DDDEC",
                     "gUnk_086DC57C", "gUnk_086DD6E0"):
            got, note, probe = raw_assets.classify(large_table(), name)
            self.assertEqual(got, "tabel", note)
            self.assertIsNone(probe)
            self.assertIn("stamp", note)
            self.assertIsNone(raw_assets.render(
                {"symbol": name, "size": len(large_table())},
                large_table(), Path("/tmp"), "tabel", note))

    def test_chain_scan_cross_checks_group(self):
        # Rantai 0x70 valid di blob non-32 B harus tetap terlihat meski bukan
        # penentu kelompok: tiga bank + satu container terbukti.
        manifest = REPO / "assets" / "raw" / "manifest.json"
        rows = {b["symbol"]: b
                for b in json.loads(manifest.read_text())["blobs"]}
        expected = {"gUnk_0869B284": (119, "gambar terkompresi"),
                    "gUnk_086D74F8": (25, "gambar terkompresi"),
                    "gUnk_086DC3F4": (3, "gambar terkompresi"),
                    "gUnk_087409E4": (20, "sprite/OBJ")}
        for name, (streams, group) in expected.items():
            self.assertEqual(rows[name]["group"], group, name)
            self.assertEqual(rows[name]["chain_0x70"]["streams"], streams,
                             name)
            self.assertTrue(rows[name]["size"] % 32, name)

    def test_stamp_sizes_in_manifest_match_rom(self):
        # Regresi silang: lebar/tinggi loader harus pas dengan ukuran ROM.
        manifest = REPO / "assets" / "raw" / "manifest.json"
        sizes = {b["symbol"]: b["size"]
                 for b in json.loads(manifest.read_text())["blobs"]}
        for name, (cols, rows, _b) in raw_assets.VERIFIED_MAP_STAMP.items():
            self.assertEqual(sizes[name] // 2, cols * rows, name)


if __name__ == "__main__":
    unittest.main(verbosity=2)
