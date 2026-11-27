"""Regresi tools/scripts/audit_consistency.py — cek #2 (state yatim).

Shard agregat (`decomp/state/modules/code_linkonce.json`) memuat entri semua
modul, sementara bloknya hidup di `promoted/<modul>.cc`. Cek yatim yang hanya
membandingkan dengan `promoted/<nama shard>.cc` melaporkan 11 fungsi
code_809E804 sebagai "state promoted tapi blok & src hilang" padahal bloknya
ada. Tes ini mengunci perilaku benar: blok di promoted/*.cc MANA PUN cukup.
"""

import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))

from audit_consistency import orphan_entries  # noqa: E402


class OrphanEntriesTest(unittest.TestCase):
    def test_blok_di_modul_lain_bukan_yatim(self):
        state = {"func_080D116A": {"status": "promoted"}}
        self.assertEqual(
            orphan_entries(state, own_names=set(),
                           all_promoted={"func_080D116A"},
                           in_src=set(), global_src=set()),
            [])

    def test_tanpa_blok_dan_tanpa_src_adalah_yatim(self):
        state = {"hilang": {"status": "promoted"}}
        self.assertEqual(
            orphan_entries(state, own_names=set(), all_promoted=set(),
                           in_src=set(), global_src=set()),
            ["hilang"])

    def test_sudah_di_src_bukan_yatim(self):
        state = {"f": {"status": "promoted"}}
        self.assertEqual(
            orphan_entries(state, own_names=set(), all_promoted=set(),
                           in_src={"f"}, global_src=set()),
            [])

    def test_blok_di_shard_sendiri_bukan_yatim(self):
        state = {"f": {"status": "promoted"}}
        self.assertEqual(
            orphan_entries(state, own_names={"f"}, all_promoted=set(),
                           in_src=set(), global_src=set()),
            [])

    def test_status_selain_promoted_diabaikan(self):
        state = {"f": {"status": "failed"}, "g": {"status": "pending"}}
        self.assertEqual(
            orphan_entries(state, own_names=set(), all_promoted=set(),
                           in_src=set(), global_src=set()),
            [])


if __name__ == "__main__":
    unittest.main()
