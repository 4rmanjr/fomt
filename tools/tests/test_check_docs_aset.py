import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest import mock

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import check_docs  # noqa: E402


class AssetClaim(unittest.TestCase):
    """Gate `aset_klaim`: simbol `rom-exact` tidak boleh disebut masih
    `.incbin "baserom.gba"` atau diparkir di dokumen."""

    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        root = Path(self.tmp.name)
        (root / "assets").mkdir()
        manifest = {"assets": [
            {"symbol": "gUnk_00000001", "kind": "palette",
             "status": "rom-exact"},
            {"symbol": "gUnk_00000002", "kind": "sprite",
             "status": "opaque"},
            {"symbol": "gUnk_00000003", "kind": "stream_bank",
             "status": "rom-exact"},
        ]}
        (root / "assets" / "manifest.json").write_text(json.dumps(manifest))
        self.doc = root / "DOC.md"
        patcher = mock.patch.multiple(
            check_docs, REPO=root, ASSET_CLAIM_DOCS=["DOC.md"])
        patcher.start()
        self.addCleanup(patcher.stop)
        self.addCleanup(self.tmp.cleanup)

    def gate(self, text):
        self.doc.write_text(text)
        return check_docs.aset_klaim()

    def test_rom_exact_still_incbin_baserom(self):
        prob, _ = self.gate('`gUnk_00000001` masih `.incbin "baserom.gba"`.\n')
        self.assertIsNotNone(prob)
        self.assertIn("baserom.gba", prob[1])

    def test_rom_exact_still_parked(self):
        prob, _ = self.gate("`gUnk_00000001` masih diparkir.\n")
        self.assertIsNotNone(prob)
        self.assertIn("diparkir", prob[1])

    def test_negation_and_non_rom_exact_pass(self):
        prob, note = self.gate(
            '`gUnk_00000001` tidak lagi parkir; '
            '`.incbin "build/assets/gUnk_00000001.bin"`.\n'
            "`gUnk_00000002` masih diparkir.\n")
        self.assertIsNone(prob)
        self.assertIn("2 rom-exact", note)  # font + stream_bank 0x70 di manifest tes

    def test_class_claim_stale_when_all_members_rom_exact(self):
        # Klaim kelas boleh terlipat antar-baris; paragraf digabung dulu.
        prob, _ = self.gate("Blok palet\nmasih mentah.\n")
        self.assertIsNotNone(prob)
        self.assertIn("klaim kelas basi: palet", prob[1])

    def test_class_with_opaque_member_passes(self):
        # Kelas sprite belum selesai (ada anggota `opaque`), jadi klaimnya sah.
        prob, _ = self.gate("Sprite masih diparkir.\n")
        self.assertIsNone(prob)

    def test_class_negation_passes(self):
        prob, _ = self.gate("Palet tidak lagi parkir.\n")
        self.assertIsNone(prob)

    def test_container_0x70_claim_stale(self):
        prob, _ = self.gate("Kontainer 0x70 masih opaque.\n")
        self.assertIsNotNone(prob)
        self.assertIn("klaim kelas basi: 0x70", prob[1])

    def test_generic_stream_0x70_wording_passes(self):
        # Kalimat kebijakan "stream tetap opaque" bukan klaim kelas kontainer.
        prob, _ = self.gate("Stream 0x70 yang gagal tetap opaque.\n")
        self.assertIsNone(prob)


if __name__ == "__main__":
    unittest.main()
