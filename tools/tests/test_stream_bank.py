import json
import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "assets"))
import stream_bank  # noqa: E402

STREAM_DIR = REPO / "assets" / "gfx" / "streams"


class StreamBank(unittest.TestCase):
    """Kontainer `0x70` utuh: payload per stream + header asli -> byte ROM."""

    def test_coverage_all_proven(self):
        meta_path = STREAM_DIR / "gunk_08527238.json"
        meta = json.loads(meta_path.read_text())
        self.assertEqual(meta["coverage"], stream_bank.coverage(meta))
        self.assertEqual(meta["coverage"]["proven_ratio"], 1.0)
        self.assertEqual(sum(s["packed"] for s in meta["streams"]),
                         meta["rom"]["size"])

    def test_every_stream_bank_verifies(self):
        paths = sorted(STREAM_DIR.glob("*.json"))
        self.assertTrue(paths)
        for path in paths:
            with self.subTest(path.name):
                self.assertEqual(stream_bank.verify(path), [])


if __name__ == "__main__":
    unittest.main()
