#!/usr/bin/env python3
"""Regresi codec glyph font 8x12 1bpp/2bpp (`func_080D0D28`)."""
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]


def load(name):
    spec = importlib.util.spec_from_file_location(
        name, REPO / "tools" / "assets" / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


tile4bpp = load("tile4bpp")
glyph_font = load("glyph_font")


def synthetic(bpp, count=3):
    rec = glyph_font.record_size(bpp)
    max_idx = (1 << bpp) - 1
    blob = bytearray()
    for g in range(count):
        for y in range(glyph_font.GLYPH_H):
            idx = [(g + y * 3 + x * 5) % (max_idx + 1)
                   for x in range(glyph_font.GLYPH_W)]
            for bit in range(bpp):
                line = 0
                for x, value in enumerate(idx):
                    if (value >> bit) & 1:
                        line |= 1 << (7 - x)
                blob.append(line)
    assert len(blob) == count * rec
    return bytes(blob)


class GlyphFontCodec(unittest.TestCase):
    def roundtrip(self, bpp, columns=2):
        blob = synthetic(bpp)
        rgb, meta = glyph_font.decode_blob(blob, bpp=bpp, columns=columns)
        self.assertEqual(meta["kind"], "glyph_font")
        self.assertEqual(meta["source"]["count"], 3)
        self.assertEqual(meta["source"]["bpp"], bpp)
        rows = (3 + columns - 1) // columns
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            tile4bpp.write_png(td / "glyph.png", columns * 8, rows * 12, rgb)
            meta["source"]["png"] = "glyph.png"
            meta["rom"] = {"offset": "0x0", "size": len(blob),
                           "sha256": glyph_font.sha256(blob)}
            (td / "glyph.json").write_text(json.dumps(meta))
            self.assertEqual(glyph_font.encode_source(td / "glyph.json"), blob)
            self.assertEqual(glyph_font.verify(td / "glyph.json"), 0)

    def test_roundtrip_1bpp(self):
        self.roundtrip(1)

    def test_roundtrip_2bpp(self):
        self.roundtrip(2)

    def test_rejects_partial_record(self):
        with self.assertRaises(ValueError):
            glyph_font.decode_blob(bytes(13), bpp=1)

    def test_real_assets_match_rom(self):
        rom = (REPO / "baserom.gba").read_bytes()
        for name in ("glyph_084f90cc", "glyph_084fa9a0"):
            meta_path = REPO / "assets" / "gfx" / "fonts" / f"{name}.json"
            if not meta_path.exists():
                continue
            meta = json.loads(meta_path.read_text())
            offset = int(str(meta["rom"]["offset"]), 0)
            size = int(meta["rom"]["size"])
            self.assertEqual(glyph_font.encode_source(meta_path),
                             rom[offset:offset + size], name)


if __name__ == "__main__":
    unittest.main()
