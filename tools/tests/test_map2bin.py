#!/usr/bin/env python3
"""Regresi codec tilemap: grid entri <-> byte, tolak grid yang tidak cocok."""
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "map2bin", REPO / "tools" / "assets" / "map2bin.py")
map2bin = importlib.util.module_from_spec(spec)
spec.loader.exec_module(map2bin)


def _meta(**over):
    meta = {
        "id": "gfx/maps/gunk_08755230",
        "symbol": "gUnk_08755230",
        "kind": "tilemap",
        "status": "rom-exact",
        "semantics": "unidentified",
        "rom": {"offset": "0x755230", "size": 6, "sha256": "0" * 64},
        "source": {"json": "x.json"},
        "encoder": {"tool": "map2bin.py", "version": 1},
        "tilemap": {"width": 3, "height": 1},
        "entries": [0x0001, 0x00FF, 0x03FF],
        "note": "",
    }
    meta.update(over)
    return meta


class Map2Bin(unittest.TestCase):
    def _write(self, td, meta):
        path = Path(td) / "x.json"
        path.write_text(json.dumps(meta))
        return path

    def test_entri_jadi_byte_little_endian(self):
        data = map2bin.bytes_from_entries([0x0001, 0x00FF, 0x03FF])
        self.assertEqual(data, b"\x01\x00\xff\x00\xff\x03")

    def test_roundtrip_json_ke_byte(self):
        with tempfile.TemporaryDirectory() as td:
            path = self._write(td, _meta())
            self.assertEqual(map2bin.encode_source(path),
                             b"\x01\x00\xff\x00\xff\x03")

    def test_grid_tidak_cocok_ditolak(self):
        with tempfile.TemporaryDirectory() as td:
            path = self._write(td, _meta(tilemap={"width": 4, "height": 1}))
            with self.assertRaises(SystemExit) as ctx:
                map2bin.encode_source(path)
            self.assertIn("entri", str(ctx.exception))

    def test_ukuran_rom_harus_sama_dengan_jumlah_entri(self):
        with tempfile.TemporaryDirectory() as td:
            meta = _meta()
            meta["rom"]["size"] = 8
            path = self._write(td, meta)
            with self.assertRaises(SystemExit) as ctx:
                map2bin.encode_source(path)
            self.assertIn("8 B", str(ctx.exception))

    def test_entri_di_luar_u16_ditolak(self):
        with tempfile.TemporaryDirectory() as td:
            path = self._write(td, _meta(entries=[0x10000, 0, 0]))
            with self.assertRaises(SystemExit):
                map2bin.encode_source(path)

    def test_padding_nol_di_ekor(self):
        data = map2bin.bytes_from_entries([1, 2, 3], padding=1)
        self.assertEqual(data, b"\x01\x00\x02\x00\x03\x00\x00\x00")
        self.assertEqual(map2bin.entries_from_bytes(data, 3, 1, padding=1),
                         [1, 2, 3])
        with self.assertRaises(ValueError):
            map2bin.entries_from_bytes(b"\x01\x00\x02\x00\x03\x00\xff\xff",
                                       3, 1, padding=1)

    def test_decode_menolak_lebar_tebakan(self):
        blob = b"\x01\x00\xff\x00\xff\x03"
        with self.assertRaises(ValueError):
            map2bin.entries_from_bytes(blob, 4, 1)
        self.assertEqual(map2bin.entries_from_bytes(blob, 3, 1),
                         [0x0001, 0x00FF, 0x03FF])


if __name__ == "__main__":
    unittest.main(verbosity=2)
