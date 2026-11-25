#!/usr/bin/env python3
"""run_parallel.py — jalankan modul `tools/tests/test_*.py` secara paralel.

Tes di repo ini kebanyakan membaca ROM/manifest dan menulis hanya ke direktori
sementara, jadi memisahkannya per proses tidak mengubah hasil. Yang dihemat
adalah waktu tunggu: modul terberat (encoder 0x70) tidak lagi menahan modul
lain. Setiap modul tetap dijalankan dengan `unittest` yang sama; kegagalan
satu modul tidak menyembunyikan kegagalan modul lain.

  python3 tools/tests/run_parallel.py
  FOMT_TEST_WORKERS=1 python3 tools/tests/run_parallel.py   # serial
"""
import os
import re
import subprocess
import sys
import time
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TESTS = Path(__file__).resolve().parent
RAN = re.compile(r"Ran (\d+) tests? in ")


def modules():
    return sorted(path.stem for path in TESTS.glob("test_*.py"))


def run_module(name):
    started = time.monotonic()
    proc = subprocess.run(
        [sys.executable, "-m", "unittest", f"tools.tests.{name}"],
        cwd=REPO, text=True, capture_output=True)
    elapsed = time.monotonic() - started
    match = RAN.search(proc.stderr + proc.stdout)
    count = int(match.group(1)) if match else 0
    return name, proc.returncode, count, elapsed, proc.stdout, proc.stderr


def main():
    names = modules()
    if not names:
        print("TIDAK ADA tes ditemukan", file=sys.stderr)
        return 1
    workers = int(os.environ.get("FOMT_TEST_WORKERS", "0") or 0)
    if workers <= 0:
        workers = min(len(names), os.cpu_count() or 1, 6)
    failures = []
    total = 0
    started = time.monotonic()
    with ThreadPoolExecutor(max_workers=workers) as pool:
        futures = [pool.submit(run_module, name) for name in names]
        for future in as_completed(futures):
            name, code, count, elapsed, out, err = future.result()
            total += count
            status = "OK" if code == 0 else "GAGAL"
            print(f"{status:5} {name:28} {count:3d} tes {elapsed:6.1f} dtk")
            if code != 0:
                failures.append((name, out, err))
    print(f"\nRan {total} tests in {time.monotonic() - started:.1f}s "
          f"({workers} proses)")
    if failures:
        for name, out, err in failures:
            print(f"\n===== {name} =====")
            sys.stdout.write(out)
            sys.stderr.write(err)
        print("FAILED", file=sys.stderr)
        return 1
    print("OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
