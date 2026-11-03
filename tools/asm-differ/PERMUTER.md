# decomp-permuter-arm (setup, tidak di-vendor)

Randomized source permutation untuk tie-break 1-2 byte.
Sumber: https://github.com/laqieer/decomp-permuter-arm
(upstream: simonlindholm/decomp-permuter).

## Setup sekali (teruji 2026-11-04)

```bash
git clone --depth 1 https://github.com/laqieer/decomp-permuter-arm.git
/usr/bin/python3 -m pip install --user --break-system-packages \
  "pycparser==2.20" pynacl toml
# PENTING: pycparser HARUS 2.20 — 2.21+ crash
# (`TypeDecl.__init__() missing 'align'`), <2.20 tak ada plyparser.
# Python venv Hermes tidak punya pip — pakai /usr/bin/python3 sistem.
```

## Pakai per fungsi

```bash
mkdir -p permtest
# base.c: SATU fungsi + typedef inline (TANPA #include — permuter
# menjalankan `cpp -P -nostdinc` sendiri; pycparser tak paham __asm__,
# jadi base HANYA varian polos tanpa pin-reg).
# target.o: .o referensi (rakit dari potongan asm).
# compile.sh: dipanggil sebagai `compile.sh <src.c> -o <out.o>` (3 arg!).
```

Contoh `compile.sh` (agbcc):

```bash
#!/bin/bash
SRC="$1"; OUT="$3"
T=/home/lenovo/gitproject/fomt/tools
arm-none-eabi-cpp -nostdinc -undef -I$T/agbcc/include "$SRC" -o out.i
$T/agbcc/bin/agbcc -mthumb-interwork -O2 -fhex-asm out.i -o out.s
$T/arm-gnu/bin/arm-none-eabi-as -mcpu=arm7tdmi out.s -o "$OUT"
```

Jalan: `/usr/bin/python3 permuter/permuter.py --stop-on-zero -j4 permtest`

Catatan: scorer objdump-based; cocok untuk sisa regalloc, lemah untuk
reorder struktural (konfirmasi upstream). Uji 2026-11-04: jalan 6334
iterasi tanpa crash di toolchain ini (skor turun 2210 -> 560).

## Hasil evaluasi (2026-11-04, sesi Hermes)

Permuter jalan bersih di toolchain ini (agbcc -O2 + as, 14-18rb iterasi
tanpa crash). Catatan jujur dari 2 target dinding:

- BDB8 (basis polos, tanpa anchor `__asm__` karena pycparser tak bisa
  parse itu): skor terbaik 75 (dari >200), TIDAK MATCH. Varian terbaik
  yang ditemukan: `char neg` (mutasi tipe) — arah menarik tapi tak
  menutup selisih. Penyebab utama (fold `-0x80` -> `0x80`) tak mungkin
  ditemukan randomizer karena butuh konstruksi `__asm__ volatile`
  yang disengaja, bukan permutasi.
- E8E8 (basis polos, 14700 iterasi): skor terbaik 385, TIDAK MATCH.
  Tak satu pun varian menempatkan t1->r2. Tie-break home register
  ini tak terjangkau randomisasi buta dalam budget terbatas.

Kesimpulan: permuter layak untuk sisa regalloc ringan (skor ratusan
kecil), BUKAN untuk dinding fold/neg-materialization atau tie-break
home yang dalam. Untuk yang terakhir, tetap andalkan pin-reg eksplisit
+ anchor manual (terbukti di BD60/908CC), dengan asm-differ/objdiff
sebagai oracle.
