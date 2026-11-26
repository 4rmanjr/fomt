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
            {"symbol": "gUnk_00000001", "status": "rom-exact"},
            {"symbol": "gUnk_00000002", "status": "opaque"},
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
        self.assertIn("1 rom-exact", note)


if __name__ == "__main__":
    unittest.main()
