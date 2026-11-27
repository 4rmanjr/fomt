#!/usr/bin/env python3
"""Regresi splitter: pengelompokan chunk + aturan "jangan cabut tujuan label".

Bug yang dijaga (2026-11-27): dulu setiap chunk dianggap migratable, lalu
`split()` meng-emit tiap chunk sisa dari grup gabungan sebagai section
SENDIRI. Akibatnya literal pool (`ldr rX, .Lpool`) terpisah section dari
yang memakainya dan assembler gagal:

    Error: cannot represent THUMB_OFFSET relocation in this object file format
    Error: invalid offset, value too big (0xFFFFFFFFFFFFFFFC)

Rujukan simbolik di direktif data (`.4byte func_080D116A`) kena masalah yang
sama. Tes di bawah mengunci: (a) chunk yang saling merujuk tetap satu
section, (b) section yang masih jadi tujuan rujukan keras tidak boleh
dicabut, (c) `migration_blockers_map` melaporkan blocker dua arah.
"""

import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))

import split_asm_sections as S  # noqa: E402


def _mod(*funcs):
    """Rakit teks asm sintetis dari blok (nama, alamat, baris...)."""
    out = ["\t.include \"asm/macro.inc\"\n", "\t.syntax unified\n", "\t.thumb\n\n"]
    for name, addr, body in funcs:
        out.append(f"\tthumb_func_start {name}\n")
        out.append(f"{name}: @ 0x{addr:08X}\n")
        out.extend(body)
        out.append("\n")
    return "".join(out)


POOL_FUNC = (
    "func_08001000", 0x08001000,
    [
        "\tpush {lr}\n", "\tldr r0, .L08001010\n", "\tbl func_08002000\n",
        "\tpop {r0}\n", "\tbx r0\n", "\t.align 2, 0\n",
        ".L08001010: .4byte 0x00000420\n",
    ],
)

NEXT_FUNC = (
    "func_08002000", 0x08002000,
    ["\tpush {lr}\n", "\tldr r1, .L08002010\n", "\tpop {r0}\n", "\tbx r0\n",
     "\t.align 2, 0\n", ".L08002010: .4byte 0x00000001\n"],
)

# Pool milik fungsi A dibaca dari fungsi B (kasus code_entities 0802FBFC).
SHARED_A = (
    "func_08003000", 0x08003000,
    ["\tpush {lr}\n", "\tldr r0, .L08003010\n", "\tpop {r0}\n", "\tbx r0\n"],
)
SHARED_B = (
    "func_08003010", 0x08003010,
    ["\t.align 2, 0\n", ".L08003010: .4byte 0x00000002\n",
     "\tthumb_func_start unused\n", "unused: @ 0x08003020\n",
     "\tmovs r0, #0\n", "\tbx lr\n"],
)


class TestPoolRefs(unittest.TestCase):
    def test_pool_ref_detects_ldr_literal_only(self):
        self.assertEqual(S._pool_refs(["\tldr r2, .L08001010 @ =0x1\n"]),
                         {".L08001010"})
        # cabang tidak butuh section sama (relokasi cabang didukung linker)
        self.assertEqual(S._pool_refs(["\tb .L08001010\n"]), set())
        self.assertEqual(S._pool_refs(["\tbl func_08001000\n"]), set())

    def test_hard_refs_includes_symbolic_data(self):
        lines = [".L1: .4byte func_080D116A\n", ".L2: .4byte 0x080D116B\n"]
        self.assertEqual(S._sym_refs(lines), {"func_080D116A"})
        self.assertEqual(S._hard_refs(lines), {"func_080D116A"})


class TestGrouping(unittest.TestCase):
    def test_pool_loaded_across_chunks_is_one_group(self):
        text = _mod(SHARED_A, SHARED_B)
        _pre, groups = S.analyze(text, "game_state", migrated=set())
        same = [g for g in groups
                if any(c.get("name") == "func_08003000" for c in g)]
        self.assertEqual(len(same), 1)
        # pool .L08003010 ada di chunk berikut -> wajib satu grup/section
        self.assertEqual([c["name"] for c in same[0]],
                         ["func_08003000", "func_08003010"])
        out = S.split(text, "game_state", migrated=set())
        sec = out.split('.section "')[1]
        self.assertIn("ldr r0, .L08003010", sec)
        self.assertIn(".L08003010: .4byte", sec)


class TestNoCutReference(unittest.TestCase):
    """Section yang masih jadi tujuan rujukan keras tak boleh dicabut."""

    def test_cutting_pool_owner_raises(self):
        text = _mod(SHARED_A, SHARED_B)
        blocked = S.migration_blockers_map(text, "game_state")
        # B defines .L08003010 yang dipakai A -> B tidak boleh dicabut
        self.assertIn("func_08003010", blocked)
        self.assertIn(".L08003010", [b[0] for b in blocked["func_08003010"]])
        with self.assertRaises(S.SplitError) as cm:
            S.split(text, "game_state", migrated={
                ".text.game_state.08003010",
                ".text.game_state.08003020",
            })
        msg = str(cm.exception)
        self.assertIn(".L08003010", msg)
        self.assertIn("dicabut", msg)

    def test_symbolic_reference_blocks_migration(self):
        text = _mod(
            ("func_08004000", 0x08004000,
             ["\tpush {lr}\n", "\tldr r0, .L08004010\n", "\tpop {r0}\n",
              "\tbx r0\n", "\t.align 2, 0\n",
              ".L08004010: .4byte func_08005000\n"]),
            ("func_08005000", 0x08005000, ["\tmovs r0, #1\n", "\tbx lr\n"]),
        )
        blocked = S.migration_blockers_map(text, "game_state")
        self.assertIn("func_08005000", blocked)
        self.assertEqual(blocked["func_08005000"][0][0], "func_08005000")

    def test_numeric_pool_entry_unblocks(self):
        text = _mod(
            ("func_08004000", 0x08004000,
             ["\tpush {lr}\n", "\tldr r0, .L08004010\n", "\tpop {r0}\n",
              "\tbx r0\n", "\t.align 2, 0\n",
              ".L08004010: .4byte 0x08005001\n"]),
            ("func_08005000", 0x08005000, ["\tmovs r0, #1\n", "\tbx lr\n"]),
        )
        blocked = S.migration_blockers_map(text, "game_state")
        self.assertNotIn("func_08005000", blocked)


class TestSplitEmission(unittest.TestCase):
    def test_self_contained_func_migrates_cleanly(self):
        text = _mod(POOL_FUNC, NEXT_FUNC)
        out = S.split(text, "game_state",
                      migrated={".text.game_state.08001000"})
        self.assertNotIn(".text.game_state.08001000", out)
        self.assertIn(".text.game_state.08002000", out)
        # pool fungsi yang tetap di asm tidak boleh terpisah dari ldr-nya
        for sec in out.split('.section "')[1:]:
            head, _, body = sec.partition('"')
            if ".L08002010:" in body:
                self.assertIn("ldr r1, .L08002010", body, head)

    def test_padding_merged_group_splits_without_error(self):
        """Grup 2-fungsi tanpa rujukan (merger padding) tetap boleh dipisah."""
        text = _mod(
            ("func_08006000", 0x08006000, ["\tmovs r0, #0\n", "\tbx lr\n"]),
            ("func_08006004", 0x08006004, ["\tmovs r0, #1\n", "\tbx lr\n"]),
        )
        out = S.split(text, "game_state",
                      migrated={".text.game_state.08006004"})
        self.assertIn(".text.game_state.08006000", out)
        self.assertNotIn(".text.game_state.08006004", out)


class TestMiddleCut(unittest.TestCase):
    """Chunk di tengah grup gabungan hanya boleh dicabut bila tak mengikat."""

    def test_middle_cut_with_cross_ref_refused(self):
        text = _mod(
            ("func_08008000", 0x08008000,
             ["\tpush {lr}\n", "\tldr r0, .L08008020\n", "\tpop {r0}\n",
              "\tbx r0\n"]),
            ("func_08008010", 0x08008010,
             ["\tmovs r0, #1\n", "\tbx lr\n"]),
            ("func_08008020", 0x08008020,
             ["\t.align 2, 0\n", ".L08008020: .4byte 0x00000003\n"]),
        )
        with self.assertRaises(S.SplitError) as cm:
            S.split(text, "game_state",
                    migrated={".text.game_state.08008010"})
        self.assertIn("memisahkan", str(cm.exception))

    def test_partial_group_runs_prefix_and_suffix(self):
        def ch(name, sec):
            return {"kind": "func", "name": name, "secname": sec,
                    "lines": [], "migrated": False, "labels": {name},
                    "refs": set(), "hard_refs": set()}
        chs = [ch("a", ".text.game_state.08009000"),
               ch("b", ".text.game_state.08009004"),
               ch("c", ".text.game_state.08009008")]
        self.assertEqual(S._partial_group_runs(chs, {1}), [[0], [2]])
        self.assertEqual(S._partial_group_runs(chs, {0, 1}), [[2]])
        self.assertEqual(S._partial_group_runs(chs, {2}), [[0, 1]])


class TestClosedUnit(unittest.TestCase):
    """Unit tertutup = closure dua arah rujukan keras di dalam grup.

    Pool/label tak bisa direlokasi antar-section, jadi batas section yang
    sah hanya yang tak memotong edge rujukan keras: migrasi harus
    membawa seluruh unit sekaligus (mode `--group`).
    """

    def test_pulls_cross_referenced_pool(self):
        text = _mod(
            ("func_0800B000", 0x0800B000,
             ["\tldr r1, .L0800B010\n", "\tbx lr\n"]),
            ("func_0800B010", 0x0800B010,
             ["\t.align 2, 0\n", ".L0800B010: .4byte 0x00000007\n"]),
        )
        unit = S.closed_unit(text, "game_state", "func_0800B000")
        self.assertIsNotNone(unit)
        self.assertEqual([c["secname"] for c in unit],
                         [".text.game_state.0800B000",
                          ".text.game_state.0800B010"])

    def test_two_way_edge(self):
        # B memakai pool milik A (arah sebaliknya) -> tetap satu unit.
        text = _mod(
            ("func_0800C000", 0x0800C000,
             ["\t.align 2, 0\n", ".L0800C008: .4byte 0x00000001\n"]),
            ("func_0800C00C", 0x0800C00C,
             ["\tldr r0, .L0800C008\n", "\tbx lr\n"]),
        )
        unit = S.closed_unit(text, "game_state", "func_0800C00C")
        self.assertEqual(len(unit), 2)
        self.assertEqual(unit[0]["secname"], ".text.game_state.0800C000")

    def test_singleton_and_unknown(self):
        text = _mod(
            ("func_0800D000", 0x0800D000, ["\tmovs r0, #0\n", "\tbx lr\n"]),
        )
        unit = S.closed_unit(text, "game_state", "func_0800D000")
        self.assertEqual([c["secname"] for c in unit],
                         [".text.game_state.0800D000"])
        self.assertIsNone(S.closed_unit(text, "game_state", "tidak_ada"))


class TestAbsorb(unittest.TestCase):
    """Section data-ekor yg sudah ada di blok src harus DICABUT dari asm."""

    def test_data_chunk_honours_migrated_flag(self):
        text = _mod(
            ("func_0800A000", 0x0800A000,
             ["\tpush {lr}\n", "\tbl func_0800A000\n", "\tpop {r0}\n",
              "\tbx r0\n", "\t.align 2, 0\n", ".L0800A020:\n",
              "\t.byte 0x01, 0x02\n"]),
            ("func_0800A040", 0x0800A040, ["\tmovs r0, #0\n", "\tbx lr\n"]),
        )
        dsec = ".text.game_state.0800A020"
        _pre, groups = S.analyze(text, "game_state", migrated={dsec})
        data = [c for g in groups for c in g if c["kind"] == "data"]
        self.assertEqual(len(data), 1)
        self.assertTrue(data[0]["migrated"])
        out = S.split(text, "game_state",
                      migrated={".text.game_state.0800A000", dsec})
        self.assertNotIn(dsec, out)

    def test_absorb_marker_parsed(self):
        found = S.SRC_ABSORB_RE.findall(
            "// DECOMP-ABSORB .text.code_809E804.080D120E\n")
        self.assertEqual(found, [".text.code_809E804.080D120E"])


class TestDataJoinRegression(unittest.TestCase):
    """Aturan §134: ekor data yatim ikut pindah bersama fungsi pemiliknya."""

    def test_orphan_tail_becomes_data_chunk(self):
        text = _mod(
            ("func_08007000", 0x08007000,
             ["\tpush {lr}\n", "\tbl func_08007000\n", "\tpop {r0}\n",
              "\tbx r0\n", "\t.align 2, 0\n",
              ".L08007020:\n", "\t.byte 0x00, 0xB5, 0x08, 0x47\n"]),
            ("func_08007040", 0x08007040, ["\tmovs r0, #0\n", "\tbx lr\n"]),
        )
        _pre, groups = S.analyze(text, "game_state", migrated=set())
        ds = [c for g in groups for c in g if c["kind"] == "data"]
        self.assertEqual(len(ds), 1)
        self.assertEqual(ds[0]["secname"], ".text.game_state.08007020")


if __name__ == "__main__":
    unittest.main()
