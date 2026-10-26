# Tool yang di-vendor

Folder ini membuat `decomp/` bisa jalan tanpa bergantung pada folder lain
(`~/gitproject/decompilasi/...` atau `~/.local/share/decompnet/...`).

Semua binary di sini untuk **Linux x86-64**. Di mesin lain tetap butuh
`python3` (3.12+; sudah diuji di 3.14).

| Folder | Isi | Sumber | Lisensi |
|---|---|---|---|
| `agbcc/` | `agbcc`, `old_agbcc`, `agbcc_arm`, header, lib | https://github.com/pret/agbcc (`release`) | GPL-2.0 (`COPYING`) |
| `arm-gnu/bin/` | `arm-none-eabi-as`, `arm-none-eabi-cpp` | ARM GNU Toolchain 14.3.rel1 | GPL (`license.txt`) |
| `m2c/` | m2c + pycparser + graphviz (pure Python) | https://github.com/matt-kempster/m2c | GPL-3.0 |
| `decompnet/` | package `decompnet` (tanpa `__pycache__`) | decompnet 1.0.7a1 | lihat `decompnet/LICENSE` |
| `python/` | `pyelftools` 0.33, `capstone` 5.0.9 | PyPI | public domain / BSD |

Catatan:

- `arm-gnu` penuh berukuran ~1 GB; yang disalin hanya dua binary yang dipakai
  judge (`as` dan `cpp`).
- `agbcp` (C++) **tidak** ada di toolchain agbcc ini. Build penuh
  (`make compare`) masih butuh `agbcp` + `baserom.gba`.
- Path bisa di-override lewat env: `FOMT_AGBCC`, `FOMT_AGBCC_INCLUDE`,
  `FOMT_AS`, `FOMT_CPP`, `FOMT_M2C`, `FOMT_DECOMPNET`.

## Refresh

Salin ulang dari sumber masing-masing, lalu jalankan `python3 decomp/run.py 0`
untuk memastikan `scan` masih jalan.
