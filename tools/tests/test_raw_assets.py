#!/usr/bin/env python3
"""Regresi classifier `raw_assets.py` untuk ambang header/ekor.

Fixture kecil dan deterministik; tujuannya mengunci kelas yang sudah
dibuktikan di inventaris, bukan menguji ulang isi ROM:

  * font 4148 B: 20 B header + 129 tile tetap sprite;
  * font 4100 B: 128 tile + 4 B ekor tetap sprite;
  * sprite 128 B: empat tile tetap sprite;
  * tilemap 780 B: 390 entri tetap tilemap;
  * tabel besar non-32 B tetap tabel.

Jalankan: python3 tools/tests/test_raw_assets.py
"""
import importlib.util
import struct
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


class RawAssetClassifier(unittest.TestCase):
    def check(self, data, group, window=None):
        got, note, probe = raw_assets.classify(data)
        self.assertEqual(got, group, note)
        self.assertEqual(probe, window)

    def test_font_4148_header_stays_sprite(self):
        data = font_4148()
        self.assertEqual(len(data), 4148)
        self.check(data, "sprite/OBJ", (20, 0))

    def test_font_4100_tail_stays_sprite(self):
        data = font_4100()
        self.assertEqual(len(data), 4100)
        self.check(data, "sprite/OBJ", (0, 4))

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


if __name__ == "__main__":
    unittest.main(verbosity=2)
