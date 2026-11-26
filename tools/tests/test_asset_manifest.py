#!/usr/bin/env python3
"""Regresi indeks aset: sinkron, memarkir non-rom-exact, menolak status asing."""
import importlib.util
import json
import shutil
import struct
import zlib
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "asset_manifest", REPO / "tools" / "assets" / "asset_manifest.py")
asset_manifest = importlib.util.module_from_spec(spec)
spec.loader.exec_module(asset_manifest)

spec = importlib.util.spec_from_file_location(
    "tile4bpp", REPO / "tools" / "assets" / "tile4bpp.py")
tile4bpp = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tile4bpp)


class AssetManifest(unittest.TestCase):
    def setUp(self):
        if not asset_manifest.ROM.exists():
            self.skipTest("baserom.gba tidak ada")

    def test_manifest_file_is_synced(self):
        text = asset_manifest.render(asset_manifest.build())
        self.assertEqual(asset_manifest.MANIFEST.read_text(), text)
        assets = json.loads(text)["assets"]
        # Daftar simbol diturunkan dari metadata, bukan dipatok: menambah aset
        # (mis. palet Fase 0) tidak boleh membuat regresi ini merah.
        expected = []
        # `assets/gfx/tiles/` (blob tile tanpa palet) harus ikut dipindai,
        # kalau tidak aset tiles4bpp baru tidak pernah masuk manifest.
        self.assertIn(asset_manifest.TILE_DIR, asset_manifest.ASSET_DIRS)
        for directory in asset_manifest.ASSET_DIRS:
            for path in sorted(Path(directory).glob("*.json")):
                meta = json.loads(path.read_text())
                if ("rom" in meta and "kind" in meta
                        and meta.get("status") == "rom-exact"):
                    expected.append(meta["symbol"])
        self.assertEqual([a["symbol"] for a in assets], expected)
        kinds = {a["kind"] for a in assets}
        self.assertIn("tiles4bpp", kinds)
        self.assertIn("palette", kinds)
        self.assertIn("tilemap", kinds)
        for entry in assets:
            self.assertEqual(entry["status"], "rom-exact")
            for key in ("id", "kind", "rom", "source", "encoder"):
                self.assertIn(key, entry)
            self.assertIn("json", entry["source"])
            # source minimal punya satu representasi gambar: png atau pal.
            # Pengecualian `tilemap`, `tilemap_bank`, `table`, `glyph_index`,
            # dan `compressed_bank`: sumbernya grid/array/segmen (plus prefix)
            # di metadata JSON itu sendiri; peta butuh tileset pasangan yang
            # belum tentu terbukti, tabel/indeks glyph bukan gambar, dan
            # container terkompresi menyimpan stream biner.
            if entry["kind"] not in ("tilemap", "tilemap_bank", "table",
                                     "glyph_index", "compressed_bank"):
                self.assertTrue(entry["source"].get("png")
                                or entry["source"].get("pal"))
            self.assertRegex(entry["rom"]["sha256"], r"^[0-9a-f]{64}$")

    def test_raw_dan_tail_wajib_punya_padding_berbukti(self):
        # Ambang ketat: raw/tail tanpa kind+reason+evidence ditolak, dan
        # setiap raw harus tercakup tepat oleh range padding.
        for path in sorted(p for d in asset_manifest.ASSET_DIRS
                           for p in Path(d).glob("*.json")):
            meta = json.loads(path.read_text())
            raw = meta.get("raw") or []
            tail = len(meta.get("source", {}).get("tail_hex", "")) // 2
            if not (raw or tail):
                continue
            with self.subTest(path=str(path)):
                spans = meta.get("padding") or []
                self.assertTrue(spans, "raw/tail tanpa padding")
                for i, item in enumerate(spans):
                    for key in ("offset", "size", "kind", "reason", "evidence"):
                        self.assertTrue(item.get(key), f"padding[{i}] {key}")
                    self.assertGreaterEqual(item["offset"], 0)
                    self.assertLessEqual(item["offset"] + item["size"],
                                         meta["rom"]["size"])
                ordered = sorted((o["offset"], o["offset"] + o["size"])
                                 for o in spans)
                for (_, end), (start, _) in zip(ordered, ordered[1:]):
                    self.assertLessEqual(end, start, "range padding tumpang tindih")
                for j, item in enumerate(raw):
                    start = int(str(item["offset"]), 0)
                    end = start + len(item["hex"]) // 2
                    self.assertTrue(
                        any(a <= start and end <= b for a, b in ordered),
                        f"raw[{j}] {start:#x}..{end:#x} tanpa padding")

    def test_manifest_carries_padding_ranges(self):
        assets = json.loads(asset_manifest.MANIFEST.read_text())["assets"]
        by_symbol = {a["symbol"]: a for a in assets}
        for path in sorted(p for d in asset_manifest.ASSET_DIRS
                           for p in Path(d).glob("*.json")):
            meta = json.loads(path.read_text())
            self.assertNotIn("opaque", meta, str(path))
            if meta.get("padding"):
                self.assertEqual(by_symbol[meta["symbol"]]["padding"],
                                 meta["padding"])

    def test_manifest_has_no_opaque_ranges(self):
        for asset in json.loads(asset_manifest.MANIFEST.read_text())["assets"]:
            self.assertNotIn("opaque", asset, asset["symbol"])
            for item in asset.get("padding", []):
                self.assertTrue(item.get("kind"), asset["symbol"])
                self.assertNotEqual(item["kind"], "map_payload", asset["symbol"])

    def test_payload_segments_are_pointer_backed(self):
        path = REPO / "assets" / "gfx" / "maps" / "gUnk_086EAD8C.json"
        meta = json.loads(path.read_text())
        segs = meta.get("payload_segments") or []
        self.assertTrue(segs)
        self.assertFalse(any(o.get("kind") == "map_payload"
                             for o in meta.get("padding", [])))
        end = 0x1D20
        for seg in segs:
            self.assertGreaterEqual(seg["offset"], end)
            self.assertEqual(len(seg["hex"]) // 2, seg["size"])
            self.assertTrue(seg["pointer_sources"])
            end = seg["offset"] + seg["size"]
        self.assertEqual(end, 0x1D20 + 25856)
        self.assertEqual(segs[0]["offset"], 0x1D20)

    def test_source_files_are_not_degenerate(self):
        assets = json.loads(asset_manifest.MANIFEST.read_text())["assets"]
        for asset in assets:
            source = asset["source"]
            if source.get("png"):
                png_path = REPO / source["png"]
                raw = png_path.read_bytes()
                self.assertTrue(raw.startswith(b"\x89PNG\r\n\x1a\n"),
                                source["png"])
                pos = 8
                width = height = colortype = None
                palette = b""
                idat = bytearray()
                saw_iend = False
                while pos + 8 <= len(raw):
                    length = struct.unpack(">I", raw[pos:pos + 4])[0]
                    tag = raw[pos + 4:pos + 8]
                    data = raw[pos + 8:pos + 8 + length]
                    pos += 12 + length
                    if tag == b"IHDR":
                        (width, height, depth, colortype,
                         _comp, _filt, interlace) = struct.unpack(
                             ">IIBBBBB", data)
                        self.assertEqual((depth, interlace), (8, 0),
                                         source["png"])
                    elif tag == b"PLTE":
                        palette = data
                    elif tag == b"IDAT":
                        idat += data
                    elif tag == b"IEND":
                        saw_iend = True
                        break
                self.assertTrue(saw_iend, source["png"])
                self.assertGreater(width, 1, source["png"])
                self.assertGreater(height, 1, source["png"])
                if colortype == 2:
                    _w, _h, rgb = tile4bpp.read_png(png_path)
                    colors = {bytes(rgb[i:i + 3])
                              for i in range(0, len(rgb), 3)}
                elif colortype == 3:
                    self.assertGreaterEqual(len(palette) // 3, 2,
                                            source["png"])
                    stream = zlib.decompress(bytes(idat))
                    stride = width + 1
                    self.assertGreaterEqual(len(stream), height * stride,
                                            source["png"])
                    colors = {bytes(stream[row * stride + 1:
                                           (row + 1) * stride])
                              for row in range(height)}
                else:
                    self.fail(f"{source['png']}: colortype {colortype}")
                self.assertGreater(len(colors), 1, source["png"])
            if source.get("pal"):
                lines = (REPO / source["pal"]).read_text().splitlines()
                self.assertEqual(lines[0].strip(), "JASC-PAL", source["pal"])
                colors = [ln for ln in lines[3:] if ln.strip()]
                self.assertGreater(len(colors), 1, source["pal"])
            meta = json.loads((REPO / source["json"]).read_text())
            if meta.get("kind") == "table":
                self.assertTrue(meta.get("source", {}).get("segments"),
                                source["json"])
            if meta.get("kind") == "tilemap_bank":
                self.assertTrue(meta.get("layers") or meta.get("tile_animations")
                                or meta.get("payload_segments"), source["json"])

    def test_rejects_status_below_rom_exact(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            for name in ("clock.json", "clock.png"):
                shutil.copy(REPO / "assets" / "gfx" / "fonts" / name, td / name)
            meta = json.loads((td / "clock.json").read_text())
            meta["status"] = "decoded-exact"
            (td / "clock.json").write_text(json.dumps(meta))
            with self.assertRaises(SystemExit):
                asset_manifest.build_entry(td / "clock.json",
                                           asset_manifest.ROM.read_bytes())


class SemanticsRule(unittest.TestCase):
    """§6: id semantik, atau placeholder eksplisit untuk yang belum terbukti."""

    def test_placeholder_wajib_sama_dengan_simbol_dan_lokasi(self):
        got = asset_manifest.check_semantics(
            "gfx/tiles/gunk_08750c4c", "unidentified",
            "gUnk_08750C4C", "gfx/tiles")
        self.assertEqual(got, "unidentified")

    def test_placeholder_yang_dikarang_ditolak(self):
        with self.assertRaises(SystemExit) as ctx:
            asset_manifest.check_semantics(
                "gfx/tiles/tile_keren", "unidentified",
                "gUnk_08750C4C", "gfx/tiles")
        self.assertIn("placeholder", str(ctx.exception))

    def test_id_semantik_dengan_status_unidentified_ditolak(self):
        with self.assertRaises(SystemExit) as ctx:
            asset_manifest.check_semantics(
                "gfx/palettes/panel_screen", "unidentified",
                "gUnk_08731940", "gfx/palettes")
        self.assertIn("placeholder", str(ctx.exception))

    def test_proven_menolak_id_beralamat(self):
        with self.assertRaises(SystemExit) as ctx:
            asset_manifest.check_semantics(
                "gfx/fonts/gunk_0872de44", "proven",
                "gUnk_0872DE44", "gfx/fonts")
        self.assertIn("alamat ROM", str(ctx.exception))

    def test_proven_menerima_id_semantik(self):
        got = asset_manifest.check_semantics(
            "gfx/fonts/clock", "proven", "gUnk_0875A440", "gfx/fonts")
        self.assertEqual(got, "proven")

    def test_semantics_wajib_dikenal(self):
        with self.assertRaises(SystemExit) as ctx:
            asset_manifest.check_semantics(
                "gfx/fonts/clock", "mungkin", "gUnk_0875A440", "gfx/fonts")
        self.assertIn("semantics wajib", str(ctx.exception))


if __name__ == "__main__":
    unittest.main(verbosity=2)
