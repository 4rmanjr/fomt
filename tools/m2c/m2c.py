#!/usr/bin/env python3
"""Wrapper m2c yang di-vendor: pakai interpreter pemanggil, tanpa shebang absolut."""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

from m2c.main import main

if __name__ == "__main__":
    raise SystemExit(main())
