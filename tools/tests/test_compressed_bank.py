#!/usr/bin/env python3
"""Regresi container `0x70` bertingkat (`compressed_bank`).

Yang dijaga: `discover` menemukan batas prefix/stream hanya bila rantai
berakhir tepat di ujung blob, metadata `gUnk_086DC3F4` encode byte-identik,
`verify` menerima source yang benar, dan encoder menolak packed/unpacked/
prefix yang tidak cocok.
"""
import importlib.util
import io
import json
import sys
import tempfile
import unittest
from contextlib import redirect_stderr
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


bank = load("compressed_bank",
            REPO / "tools" / "assets" / "compressed_bank.py")
ROM = REPO / "baserom.gba"
META = REPO / "assets" / "gfx" / "maps" / "gUnk_086DC3F4.json"
OFFSET, SIZE = 0x6DC3F4, 344


class Discover(unittest.TestCase):
    def setUp(self):
        if not ROM.exists():
            self.skipTest("baserom.gba tidak ada")
        self.rom = ROM.read_bytes()

    def test_prefix_and_streams_end_at_blob_end(self):
        blob = self.rom[OFFSET:OFFSET + SIZE]
        prefix, streams = bank.discover(blob)
        self.assertEqual(len(prefix), 12)
        self.assertEqual([(at, packed, unpacked, fmt)
                          for at, packed, unpacked, fmt in streams],
                         [(12, 196, 1560, "134"),
                          (208, 12, 1560, "030"),
                          (220, 124, 1560, "023")])
        self.assertEqual(12 + sum(s[1] for s in streams), SIZE)

    def test_rejects_chain_that_does_not_reach_end(self):
        blob = self.rom[OFFSET:OFFSET + SIZE]
        with self.assertRaises(ValueError):
            bank.discover(blob[:-1])
        with self.assertRaises(ValueError):
            bank.discover(blob + b"\x00")

    def test_rejects_blob_without_stream(self):
        with self.assertRaises(ValueError):
            bank.discover(bytes(64))


class Metadata(unittest.TestCase):
    def setUp(self):
        if not ROM.exists():
            self.skipTest("baserom.gba tidak ada")
        self.rom = ROM.read_bytes()

    def test_decode_builds_prefix_and_three_streams(self):
        meta = bank.build_metadata(self.rom, OFFSET, SIZE,
                                   "gfx/maps/gunk_086dc3f4",
                                   "gUnk_086DC3F4")
        self.assertEqual(meta["prefix_size"], 12)
        self.assertEqual(len(bytes.fromhex(meta["prefix"])), 12)
        self.assertEqual([s["format"] for s in meta["streams"]],
                         ["134", "030", "023"])
        self.assertEqual([len(s["entries"]) for s in meta["streams"]],
                         [780, 780, 780])
        self.assertIn("counts", meta["streams"][0]["header"])
        self.assertNotIn("counts", meta["streams"][1]["header"])

    def test_decode_rejects_non_container(self):
        # 12 B stempel gUnk_086DC3E8 bukan rantai stream 0x70.
        with self.assertRaises(ValueError):
            bank.build_metadata(self.rom, 0x6DC3E8, 12,
                                "gfx/maps/gunk_086dc3e8", "gUnk_086DC3E8")


class Encode(unittest.TestCase):
    def setUp(self):
        if not ROM.exists():
            self.skipTest("baserom.gba tidak ada")
        self.rom = ROM.read_bytes()
        self.meta = json.loads(META.read_text())

    def _write(self, meta):
        td = tempfile.TemporaryDirectory(dir=REPO / "build")
        path = Path(td.name) / "meta.json"
        path.write_text(json.dumps(meta))
        self.addCleanup(td.cleanup)
        return path

    def test_encode_is_byte_identical(self):
        encoded = bank.encode_source(META)
        original = self.rom[OFFSET:OFFSET + SIZE]
        self.assertEqual(encoded, original)
        self.assertEqual(bank.sha256(encoded), self.meta["rom"]["sha256"])

    def test_verify_accepts_real_metadata(self):
        self.assertEqual(bank.verify(META), 0)

    def test_rejects_packed_mismatch(self):
        meta = json.loads(META.read_text())
        meta["streams"][0]["packed"] += 1
        with self.assertRaises(ValueError):
            bank.encode_source(self._write(meta))

    def test_rejects_unpacked_mismatch(self):
        meta = json.loads(META.read_text())
        meta["streams"][1]["entries"].pop()
        with self.assertRaises(ValueError):
            bank.encode_source(self._write(meta))

    def test_rejects_bad_prefix_size(self):
        meta = json.loads(META.read_text())
        meta["prefix_size"] += 1
        with self.assertRaises(ValueError):
            bank.encode_source(self._write(meta))

    def test_verify_reports_bad_hash(self):
        meta = json.loads(META.read_text())
        meta["rom"]["sha256"] = "0" * 64
        err = io.StringIO()
        with redirect_stderr(err):
            self.assertEqual(bank.verify(self._write(meta)), 1)
        self.assertIn("sha256", err.getvalue())


if __name__ == "__main__":
    unittest.main(verbosity=2)
