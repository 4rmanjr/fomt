import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest import mock

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "assets"))
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import check_docs  # noqa: E402
import stream_audit  # noqa: E402


class StreamAudit(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.result = stream_audit.build()
        cls.by_key = {
            (r["symbol"], r["index"]): r for r in cls.result["streams"]
        }

    def test_all_streams_are_accounted_for(self):
        # Cakupan = blob 0x70 utuh + bank tertanam yang sudah diekstrak.
        blobs = json.loads((REPO / "assets/0x70/manifest.json").read_text())
        banks = json.loads(
            (REPO / "assets/0x70/embedded_manifest.json").read_text())
        expected = (sum(len(b["streams"]) for b in blobs["streams"])
                    + sum(len(b["streams"]) for b in banks["banks"]))
        formats = [str(s["format"]) for b in blobs["streams"]
                   for s in b["streams"]]
        formats += [str(s["format"]) for b in banks["banks"]
                    for s in b["streams"]]
        self.assertEqual(self.result["total"], expected)
        self.assertEqual(self.result["decode_verified"], expected)
        # Encoder byte-identik: lzss0, atom0/lzss2, dan atom0/lzss3.
        encoded_formats = ("000", "020", "023", "024", "030", "033")
        expected_ok = sum(1 for fmt in formats if fmt in encoded_formats)
        self.assertEqual(self.result["reencodeable"], expected_ok)
        self.assertEqual(self.result["opaque"], expected - expected_ok)
        self.assertEqual(self.result["embedded_banks"], len(banks["banks"]))
        self.assertEqual(
            sum(s["streams"] for s in self.result["sources"]), expected)
        self.assertEqual(
            self.result["total"],
            self.result["reencodeable"] + self.result["opaque"])

    def test_embedded_rows_reference_extern_bins(self):
        rows = [r for r in self.result["streams"]
                if r["source"] == "bank tertanam"]
        self.assertTrue(rows)
        for row in rows:
            self.assertTrue(row["decoded"]["bin"].startswith("extern/"),
                            row["decoded"]["bin"])
            self.assertTrue(
                (REPO / "assets/0x70" / row["decoded"]["bin"]).exists(),
                row["decoded"]["bin"])

    def test_known_compressed_and_decoded_hashes(self):
        expected = {
            ("gUnk_08527238", 0): (
                "6ef63dcb057b59d9bfbb2f098b98d626387127069452b8914a24118039098c70",
                "69b8c08caf01ad8e704c840f5a5a65435c65ac3fb529041ef486664c0027eadb",
            ),
            ("gUnk_0875822C", 0): (
                "77bfcdfa8918452edf8fa69de854011016f7447fb417468488565aa953a97672",
                "bd8c727ca1011d1d02e43c3e471616b792a628de8adaa9b77d11d0ce07415bef",
            ),
        }
        for key, (compressed, decoded) in expected.items():
            row = self.by_key[key]
            self.assertEqual(row["compressed"]["sha256"], compressed)
            self.assertEqual(row["decoded"]["sha256"], decoded)
            self.assertEqual(row["reencode"], "opaque")

    def test_ok_streams_reen_code_byte_identical(self):
        """Status `ok` disertai encoder yang benar-benar byte-identik.

        `test_lz70` sudah menguji replay+encode seluruh stream; di sini cukup
        satu sampel per format agar integrasi status audit tetap terjaga tanpa
        mengulang semua encode (dulu ~45 dtk dari total gate).
        """
        rom = (REPO / "baserom.gba").read_bytes()
        rows = [r for r in self.result["streams"] if r["reencode"] == "ok"]
        self.assertTrue(rows, "format 000/atom0-lzss2 harus reencodeable")
        formats = {r["format"] for r in rows}
        self.assertEqual(formats, {"000", "020", "023", "024", "030", "033"})
        seen = set()
        for row in rows:
            if row["format"] in seen:
                continue
            seen.add(row["format"])
            offset = int(row["compressed"]["offset"], 0)
            original = rom[offset:offset + row["compressed"]["size"]]
            decoded = (REPO / "assets/0x70" / row["decoded"]["bin"]).read_bytes()
            status, _reason = stream_audit.reencode_status(
                original, decoded, row["format"])
            self.assertEqual(status, "ok",
                             f"{row['symbol']}#{row['index']} bukan byte-identik")

    def test_check_docs_gate_is_synced(self):
        prob, note = check_docs.aset_reencode()
        self.assertIsNone(prob)
        self.assertIn("sinkron", note)

    def test_check_docs_gate_detects_stale_report(self):
        """Laporan yang tertinggal harus dilaporkan sebagai masalah."""
        with tempfile.TemporaryDirectory(dir=REPO / "build") as td:
            stale = Path(td) / "reencode.md"
            stale.write_text("laporan lama\n")
            with mock.patch.object(check_docs, "REENCODE_DOC",
                                   str(stale.relative_to(REPO))):
                prob, note = check_docs.aset_reencode()
            self.assertIsNotNone(prob, "laporan basi tidak terdeteksi")
            self.assertIn("BASI", prob[1])


if __name__ == "__main__":
    unittest.main()
