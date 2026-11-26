#!/usr/bin/env python3
"""Regresi indeks aset: sinkron, memarkir non-rom-exact, menolak status asing."""
import hashlib
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

spec = importlib.util.spec_from_file_location(
    "pal2gba", REPO / "tools" / "assets" / "pal2gba.py")
pal2gba = importlib.util.module_from_spec(spec)
spec.loader.exec_module(pal2gba)

spec = importlib.util.spec_from_file_location(
    "table", REPO / "tools" / "assets" / "table.py")
table = importlib.util.module_from_spec(spec)
spec.loader.exec_module(table)

spec = importlib.util.spec_from_file_location(
    "tilemap_bank", REPO / "tools" / "assets" / "tilemap_bank.py")
tilemap_bank = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tilemap_bank)


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
            self.assertTrue(seg["pointer_sources"])
            end = seg["offset"] + seg["size"]
        self.assertEqual(end, 0x1D20 + 25856)
        self.assertEqual(segs[0]["offset"], 0x1D20)
        rom = asset_manifest.ROM.read_bytes()
        base = int(meta["rom"]["offset"], 0)
        for seg in segs:
            for source in seg["pointer_sources"]:
                address = int(source, 0)
                self.assertEqual(
                    struct.unpack_from("<I", rom, address)[0],
                    0x08000000 + base + seg["offset"], source)

    def test_payload_segments_reconstruct_rom_bytes(self):
        """Tiap segmen bertipe: byte ditulis dari field semantik = byte ROM."""
        path = REPO / "assets" / "gfx" / "maps" / "gUnk_086EAD8C.json"
        meta = json.loads(path.read_text())
        segs = meta["payload_segments"]
        self.assertEqual({seg["kind"] for seg in segs},
                         {"tilemap", "palette", "frames4bpp", "packed"})
        rom = asset_manifest.ROM.read_bytes()
        base = int(meta["rom"]["offset"], 0)
        for seg in segs:
            with self.subTest(offset=hex(seg["offset"])):
                self.assertIn(seg["kind"], tilemap_bank.PAYLOAD_KINDS)
                self.assertTrue(seg.get("evidence"))
                data = tilemap_bank.payload_bytes(seg)
                self.assertEqual(len(data), seg["size"])
                self.assertEqual(
                    data, rom[base + seg["offset"]:
                              base + seg["offset"] + seg["size"]])
                if seg["kind"] == "palette":
                    self.assertNotIn("hex", seg)
                    self.assertEqual(len(seg["colors"]), seg["size"] // 2)
                    for color in seg["colors"]:
                        self.assertLess(color, 0x8000)
                elif seg["kind"] == "tilemap":
                    self.assertNotIn("hex", seg)
                    self.assertNotIn("tail_hex", seg)
                    self.assertEqual(len(seg["entries"]),
                                     seg["width"] * seg["height"])
                    grid = seg["width"] * seg["height"] * 2
                    tail = seg.get("tail")
                    pad = seg["size"] - grid
                    self.assertEqual((tail or {}).get("size", 0), pad)
                    if pad:
                        self.assertEqual(tail["kind"], "alignment")
                        self.assertEqual(pad, (-grid) % 4)
                        self.assertEqual((seg["offset"] + seg["size"]) % 4, 0)
                        self.assertEqual(
                            rom[base + seg["offset"] + grid:
                                base + seg["offset"] + seg["size"]],
                            bytes(pad))
                elif seg["kind"] == "frames4bpp":
                    self.assertEqual(seg["header"],
                                     [seg["tiles_per_frame"], seg["frames"]])
                    self.assertEqual(
                        4 + seg["tiles_per_frame"] * seg["frames"] * 32,
                        seg["size"])
                elif seg["kind"] == "packed":
                    # Byte terkompresi ditulis dari token, bukan disimpan.
                    self.assertNotIn("hex", seg)
                    self.assertEqual(seg["codec"], "unpack")
                    header = struct.unpack_from(
                        "<I", rom, base + seg["offset"])[0]
                    self.assertEqual(seg["unpack_size"], header >> 8)
                    self.assertEqual(seg["unpack_flags"], header & 0xFF)
                    self.assertEqual(seg["unpack_size"] % 32, 0)
                    self.assertTrue(seg["tokens"])
                    self.assertIn(":", seg["tokens"])
                    lz = seg["format"] & 7
                    self.assertEqual(len(seg["ladder"]),
                                     {2: 7, 3: 3}[lz])
                    data = tilemap_bank.popuri().decode(data)[0]
                    self.assertEqual(len(data), seg["unpack_size"])
                    self.assertEqual(hashlib.sha256(data).hexdigest(),
                                     seg["unpacked_sha256"])

    def test_packed_bytes_ditulis_dari_token(self):
        """Token adalah sumber byte terkompresi: diubah -> byte ikut berubah."""
        path = REPO / "assets" / "gfx" / "maps" / "gUnk_086EAD8C.json"
        meta = json.loads(path.read_text())
        rom = asset_manifest.ROM.read_bytes()
        base = int(meta["rom"]["offset"], 0)
        packed = [s for s in meta["payload_segments"] if s["kind"] == "packed"]
        self.assertTrue(packed)
        for source in packed:
            with self.subTest(offset=hex(source["offset"])):
                self.assertNotIn("hex", source)
                seg = json.loads(json.dumps(source))
                good = tilemap_bank.payload_bytes(seg)
                self.assertEqual(
                    good, rom[base + seg["offset"]:
                             base + seg["offset"] + seg["size"]])
                seg["hex"] = good.hex()
                with self.assertRaises(ValueError):
                    tilemap_bank.payload_bytes(seg)
                del seg["hex"]
                head, _, rest = seg["tokens"].partition(";")
                self.assertTrue(head.startswith("l:"), head)
                raw = bytes.fromhex(head[2:])
                if len(set(raw)) > 1:
                    # Tukar dua simbol literal: isi berubah, token tetap sah.
                    bad = bytes([raw[1], raw[0]]) + raw[2:]
                    seg["tokens"] = "l:" + bad.hex()
                    if rest:
                        seg["tokens"] += ";" + rest
                    self.assertNotEqual(tilemap_bank.payload_bytes(seg), good)
                seg["tokens"] = seg["tokens"].replace("l:", "q:", 1)
                with self.assertRaises(ValueError):
                    tilemap_bank.payload_bytes(seg)

    def test_payload_coverage_counts_only_checked_bytes(self):
        path = REPO / "assets" / "gfx" / "maps" / "gUnk_086EAD8C.json"
        meta = json.loads(path.read_text())
        coverage = meta["coverage"]
        self.assertEqual(coverage, tilemap_bank.coverage(meta))
        proven = 0
        for layer in meta["layers"]:
            proven += layer["width"] * layer["height"] * 2
        for seg in meta["payload_segments"]:
            if seg["kind"] == "palette":
                proven += seg["size"]
            elif seg["kind"] == "tilemap":
                proven += seg["width"] * seg["height"] * 2
            elif seg["kind"] == "packed":
                # Byte terkompresi ditulis dari token, bukan hex mentah.
                self.assertNotIn("hex", seg)
                self.assertTrue(seg["tokens"])
                proven += seg["size"]
        self.assertEqual(coverage["total_bytes"], meta["rom"]["size"])
        self.assertEqual(coverage["proven_bytes"], proven)
        self.assertEqual(coverage["raw_bytes"],
                         meta["rom"]["size"] - proven)

    def test_coverage_menolak_packed_berupa_hex(self):
        """Blob buram tidak boleh menaikkan proven_bytes."""
        path = REPO / "assets" / "gfx" / "maps" / "gUnk_086EAD8C.json"
        meta = json.loads(path.read_text())
        seg = next(dict(s) for s in meta["payload_segments"]
                   if s["kind"] == "packed")
        seg["hex"] = bytes(seg["size"]).hex()
        seg.pop("tokens")
        with self.assertRaises(ValueError) as ctx:
            tilemap_bank.coverage({"rom": meta["rom"],
                                   "payload_segments": [seg]})
        self.assertIn("proven", str(ctx.exception))

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


class DegenerateSources(unittest.TestCase):
    """Input source kosong/rusak harus gagal dengan pesan, bukan traceback."""

    @staticmethod
    def _chunk(tag, data):
        return (struct.pack(">I", len(data)) + tag + data
                + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF))

    def _png(self, path, width=2, height=2, color=(255, 0, 0),
             ihdr=True, idat=True, iend=True):
        rows = b"".join(b"\x00" + bytes(color) * width
                        for _ in range(height))
        raw = bytearray(b"\x89PNG\r\n\x1a\n")
        if ihdr:
            raw += self._chunk(b"IHDR", struct.pack(
                ">IIBBBBB", width, height, 8, 2, 0, 0, 0))
        if idat:
            raw += self._chunk(b"IDAT", zlib.compress(rows))
        if iend:
            raw += self._chunk(b"IEND", b"")
        path.write_bytes(raw)
        return bytes(raw)

    def test_degenerate_png_fails_cleanly(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            cases = {
                "empty": b"",
                "signature": b"\x89PNG\r\n\x1a\n",
                "bad-signature": b"\x00\x01\x02\x03\x04\x05\x06\x07",
                "truncated": b"\x89PNG\r\n\x1a\n" + b"\x00" * 12,
            }
            for name, raw in cases.items():
                path = td / f"{name}.png"
                path.write_bytes(raw)
                with self.assertRaises(ValueError) as ctx:
                    tile4bpp.read_png(path)
                self.assertIn(str(path), str(ctx.exception))
            malformed = {
                "no-ihdr": {"ihdr": False},
                "no-idat": {"idat": False},
                "no-iend": {"iend": False},
                "ihdr-only": {"idat": False, "iend": False},
                "1x1": {"width": 1, "height": 1},
                "single-color": {"width": 2, "height": 2},
            }
            path = td / "truncated-idat.png"
            raw = self._png(path)
            path.write_bytes(raw[:-20])
            with self.assertRaises(ValueError) as ctx:
                tile4bpp.read_png(path)
            self.assertIn(str(path), str(ctx.exception))
            for name, kwargs in malformed.items():
                path = td / f"{name}.png"
                self._png(path, **kwargs)
                with self.assertRaises(ValueError) as ctx:
                    tile4bpp.read_png(path)
                self.assertIn(str(path), str(ctx.exception))

    def test_degenerate_pal_fails_cleanly(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            cases = {
                "empty": "",
                "header-only": "JASC-PAL\n0100\n",
                "no-count": "JASC-PAL\n",
                "one-color": "JASC-PAL\n0100\n1\n255 0 0\n",
                "count-mismatch": "JASC-PAL\n0100\n2\n255 0 0\n",
                "truncated-channels": "JASC-PAL\n0100\n2\n255 0\n2 2 2\n",
                "not-jasc": "RIFF-PAL\n0100\n2\n0 0 0\n255 255 255\n",
                "bad-channel": "JASC-PAL\n0100\n2\n0 0 999\n255 255 255\n",
                "bad-count": "JASC-PAL\n0100\nx\n0 0 0\n",
            }
            for name, text in cases.items():
                path = td / f"{name}.pal"
                path.write_text(text)
                with self.assertRaises(ValueError) as ctx:
                    pal2gba.read_pal(path)
                self.assertIn(str(path), str(ctx.exception))

    def test_degenerate_json_fails_cleanly(self):
        with tempfile.TemporaryDirectory() as td:
            td = Path(td)
            cases = {
                "empty": "",
                "whitespace": " \n\t\n",
                "list": "[]",
                "string": '"table"',
                "null": "null",
                "object": "{}",
                "malformed": '{"rom": ',
                "trailing-comma": '{"rom": {"size": 1,},}',
                "open-string": '{"rom": "',
            }
            for name, text in cases.items():
                path = td / f"{name}.json"
                path.write_text(text)
                for loader in (table.encode_source,
                               tilemap_bank.encode_source):
                    with self.assertRaises(SystemExit) as ctx:
                        loader(path)
                    self.assertIn(str(path), str(ctx.exception))


class DegeneratePayload(unittest.TestCase):
    """Field payload kosong/rusak ditolak dengan pesan, bukan byte karangan."""

    def test_payload_field_rusak_ditolak(self):
        base = {"offset": 0x1D20, "size": 4}
        zero = {"offset": 0x1D20, "size": 0}
        cases = [
            (base, {"kind": "palette", "colors": []}),
            (base, {"kind": "palette", "colors": [1]}),
            (base, {"kind": "palette", "colors": [0x8000, 0]}),
            (zero, {"kind": "palette", "colors": []}),
            (base, {"kind": "tilemap", "width": 2, "height": 2,
                    "entries": [1, 2]}),
            (base, {"kind": "tilemap", "width": 0, "height": 1,
                    "entries": []}),
            (base, {"kind": "tilemap", "width": 2, "height": 1,
                    "entries": [1, 2], "tail_hex": "zz"}),
            (base, {"kind": "tilemap", "width": 2, "height": 1,
                    "entries": [1, 2], "tail": {"kind": "opaque", "size": 2}}),
            (base, {"kind": "tilemap", "width": 2, "height": 1,
                    "entries": [1, 2], "tail": {"kind": "alignment",
                                              "size": 0}}),
            (base, {"kind": "frames4bpp", "header": [1, 1],
                    "tiles_per_frame": 2, "frames": 1, "tiles_hex": ""}),
            (base, {"kind": "frames4bpp", "header": [1, 1],
                    "tiles_per_frame": 1, "frames": 1, "tiles_hex": "00"}),
            (base, {"kind": "packed", "codec": "unpack", "hex": "00"}),
            (base, {"kind": "packed", "codec": "unpack",
                    "format": 19, "ladder": [1, 4, 8], "tokens": "l:00"}),
            (base, {"kind": "packed", "codec": "unpack", "format": 19,
                    "ladder": [1, 4, 8], "tokens": "x:00"}),
            (base, {"kind": "packed", "codec": "unpack", "format": 19,
                    "ladder": [1, 4], "tokens": "l:0000"}),
            (base, {"kind": "opaque", "hex": "00000000"}),
            (base, {"kind": "palette", "hex": "00000000"}),
        ]
        for extra, fields in cases:
            with self.subTest(fields=fields):
                with self.assertRaises(ValueError) as ctx:
                    tilemap_bank.payload_bytes({**extra, **fields})
                self.assertIn("payload", str(ctx.exception))


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
