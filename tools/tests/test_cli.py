#!/usr/bin/env python3
"""Test regresi ringan untuk entry point decomp.

Fokus: kelas bug yang pernah nyata —
  * `status` / `decomp` diperlakukan sebagai nama modul (antrean kosong),
  * `--help` malah menjalankan batch + resanitasi,
  * filter modul asli harus tetap bekerja,
  * `_norm_sig` menyamakan tipe/parameter tanpa nama.

Jalankan: python3 tools/tests/test_cli.py
"""
import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO))

import decomp.run as run          # noqa: E402
import decomp.migrate as migrate  # noqa: E402


class ParseCli(unittest.TestCase):
    def setUp(self):
        self.calls = []
        self._old = (run.run_batch, run.scan, run.resanitize_stale)
        run.run_batch = lambda n, modules, *a, **k: (
            self.calls.append((n, modules)) or (0, 0, True, False))
        run.scan = lambda modules: {}
        run.resanitize_stale = lambda: 0

    def tearDown(self):
        run.run_batch, run.scan, run.resanitize_stale = self._old

    def parse(self, argv):
        self.calls.clear()
        rc = run.main(list(argv))
        return rc, list(self.calls)

    def test_status_is_progress_only(self):
        rc, calls = self.parse(["status"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [(0, None)])

    def test_decomp_alias_default(self):
        rc, calls = self.parse(["decomp"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [(20, None)])

    def test_decomp_alias_with_count(self):
        rc, calls = self.parse(["decomp", "5"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [(5, None)])

    def test_decomp_alias_after_count(self):
        rc, calls = self.parse(["0", "decomp"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [(0, None)])

    def test_module_filter_still_works(self):
        rc, calls = self.parse(["decomp", "0", "hardware.s"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [(0, ["hardware.s"])])

    def test_help_does_not_run_batch(self):
        rc, calls = self.parse(["--help"])
        self.assertEqual(rc, 0)
        self.assertEqual(calls, [])


class NormSig(unittest.TestCase):
    def test_param_names_ignored(self):
        self.assertEqual(
            migrate._norm_sig("void f(GenObj *arg0, s32 arg1)"),
            migrate._norm_sig("void f(GenObj *, s32)"))

    def test_types_compared(self):
        self.assertNotEqual(
            migrate._norm_sig("s32 f(void *)"),
            migrate._norm_sig("s32 f(GenObj *)"))


if __name__ == "__main__":
    unittest.main(verbosity=2)
