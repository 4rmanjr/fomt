#!/usr/bin/env python3
"""Regresi bank stream 0x70 tertanam: discovery rantai + verifikasi tanpa ROM."""
import importlib.util
import json
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
spec = importlib.util.spec_from_file_location(
    "embedded_streams", REPO / "tools" / "assets" / "embedded_streams.py")
embedded = importlib.util.module_from_spec(spec)
spec.loader.exec_module(embedded)

BANKS = {"gUnk_0869B284": (0x134, 119), "gUnk_086D74F8": (0x60, 25),
         "gUnk_086DC3F4": (0x0C, 3)}


class EmbeddedStreams(unittest.TestCase):
    def test_discovery_matches_chain_end(self):
        rom_path = REPO / "baserom.gba"
        if not rom_path.exists():
            self.skipTest("baserom.gba tidak ada")
        rom = rom_path.read_bytes()
        _, inventory, _ = embedded.inv.analyze()
        entries = {e.name: e for e in inventory}
        for name, (prefix, count) in BANKS.items():
            entry = entries[name]
            got_prefix, streams = embedded.discover(
                rom, entry.offset, entry.size)
            self.assertEqual(got_prefix, prefix, name)
            self.assertEqual(len(streams), count, name)
            last = streams[-1]
            self.assertEqual(last[0] + last[1], entry.size, name)

    def test_check_works_without_rom(self):
        # --check hanya membaca manifest + extern/ + png/, bukan baserom.gba.
        # quick=True melewati render ulang hanya bila sidik jari bin+manifest
        # sama dengan render terakhir; hash setiap bin/PNG tetap diperiksa.
        self.assertEqual(embedded.check(quick=True), 0)

    def test_manifest_matches_doc_and_streams(self):
        manifest = json.loads(embedded.MANIFEST.read_text())
        self.assertEqual(embedded.render_doc(manifest),
                         embedded.DOC.read_text())
        got = {b["blob"]: len(b["streams"]) for b in manifest["banks"]}
        self.assertEqual(got, {k: v[1] for k, v in BANKS.items()})
        for bank in manifest["banks"]:
            for s in bank["streams"]:
                self.assertTrue((embedded.OUT / s["bin"]).exists(), s["bin"])
                self.assertEqual(len((embedded.OUT / s["bin"]).read_bytes()),
                                 s["unpacked"])


if __name__ == "__main__":
    unittest.main(verbosity=2)
