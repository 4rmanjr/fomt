# Friends of Mineral Town

Decompilation of the 2003 GBA game **Harvest Moon: Friends of Mineral Town** (US).
Two translation tracks run side by side, and both are proven by bytes, not by
claims: asm → C, and ROM blobs → editable asset sources.

It builds the following ROM:

* **[fomt.gba]** `sha1: a2fc3574f0a65a4fcf7682fb274b9d7eebdef963`

[fomt.gba]: https://datomatic.no-intro.org/index.php?page=show_record&s=23&n=1249

---

## Progress

Angka di bawah **dihasilkan otomatis** oleh `tools/scripts/readme_stats.py`
(ditulis ke blok bertanda `README-STATS`); `check_docs.py` menolak README yang
basinya. Jangan menyunting angkanya dengan tangan — perbarui datanya:

```sh
fomt status                              # fungsi MATCH / src / promote-only
python3 tools/scripts/plan_stats.py      # rincian per modul + byte
python3 tools/assets/asset_manifest.py   # aset source rom-exact
python3 tools/scripts/readme_stats.py    # tulis ulang blok statistik ini
```

<!-- README-STATS:BEGIN -->
### Translasi asm -> C

| Tahap | Selesai | Total | Progres |
|---|---:|---:|---|
| **MATCH** (byte-identik dengan ROM) | 2.736 | 4.912 | `███████████░░░░░░░░░` 55,7% |
| **Dipindah ke `src/`** (bukti migrasi) | 2.711 | 4.912 | `███████████░░░░░░░░░` 55,2% |
| Promote-only (MATCH, tertahan rantai ekor) | 25 | 4.912 | `░░░░░░░░░░░░░░░░░░░░` 0,5% |
| Sisa (belum MATCH) | 2.162 | 4.912 | `█████████░░░░░░░░░░░` 44% |

Byte ROM yang sudah dihasilkan dari C: **144.772 / 1.706.396 B (8,5%)** — persentase fungsi lebih tinggi karena fungsi yang sudah selesai kebanyakan kecil.

### Translasi aset ROM -> source

| Grup blob | Rom-exact | Populasi | Cakupan | Sumber kelas |
|---|---:|---:|---|---|
| Sprite/OBJ | 86 | 86 | `████████████████████` 100% | 56 Sprite/OBJ, 18 Container font, 10 Tiles 4bpp, 2 Glyph 8x12 |
| Palet | 64 | 64 | `████████████████████` 100% | 62 Palet, 2 Tilemap |
| Tabel | 63 | 63 | `████████████████████` 100% | 34 Container font, 13 Tilemap, 8 Tabel, 6 Bank layer peta, 2 Indeks glyph |
| Tilemap | 15 | 15 | `████████████████████` 100% | 10 Tilemap, 3 Bank layer peta, 2 Tabel |
| Kontainer 0x70 | 53 | 53 | `████████████████████` 100% | 53 Stream 0x70 |
| **Total (semua grup)** | 284 | 284 | `████████████████████` 100% | |
<!-- README-STATS:END -->

Definisi selesainya sengaja ketat di kedua jalur:

- **asm -> C.** "MATCH" saja belum dihitung beres: fungsi baru selesai ketika
  bloknya **pindah ke `src/`** (bukan `promote-only`) dan `make compare` tetap
  HIJAU. Angka byte lebih kecil dari angka fungsi karena yang selesai
  kebanyakan fungsi kecil.
- **Aset.** Selesai berarti PNG terindeks + palet JASC + metadata JSON di
  `assets/gfx/`, di-encode tool repo, dan `sha256(encoded) == sha256(slice ROM)`
  sehingga `.incbin` tidak lagi menunjuk `baserom.gba`. Status `rom-exact`
  membuktikan byte source, bukan bahwa setiap field sudah decoded. Byte yang
  belum punya pembaca hanya boleh disimpan sebagai `raw`/`hex` bila metadata
  memuat `padding` dengan `offset`, `size`, `kind`, `reason`, dan `evidence`;
  `make gate` menolak raw/tail tanpa justifikasi itu (ambang lama “raw proven
  < 50% diparkir” diganti aturan per-range yang lebih ketat, bukan dihapus).
  Seluruh 231 blob di `assets/raw` sudah punya source rom-exact; semua stream di
  container terkompresi `0x70` (284/284) sudah bisa direencode byte-identik.
  Ketiga container `0x70` (`gUnk_086DC3F4`, `gUnk_0869B284`, `gUnk_086D74F8`)
  sudah rom-exact lewat `compressed_bank.py`; 20 blob tilemap/tabel terakhir
  memakai segmen eksplisit/`payload_segments`/`padding` yang sudah diproven.
- **Penyebut cakupan.** Populasi dihitung dari blob `.incbin` yang benar-benar
  terinventaris di `assets/raw` (satu blob = satu entri `.incbin`; satu blob
  bisa memuat beberapa sprite). Tabel per kelas memakai penyebut grup, jadi
  beberapa baris berbagi populasi; tabel "Cakupan per grup blob" di atasnya
  non-overlap dan totalnya memakai union blob supaya tidak menghitung ganda.
  Blob container `0x70` dihitung di grup `gambar terkompresi`; ketiganya sudah
  rom-exact, dan stream di dalamnya tidak dihitung sebagai aset terpisah.

Pipeline, tabel padanan pret/pokeemerald-expansion, dan alur menambah sprite:
[docs/decomp/ARSITEKTUR-ASET.md](./docs/decomp/ARSITEKTUR-ASET.md).

```sh
make assets-bin     # encode aset rom-exact -> build/assets/*.bin
make assets-check   # gate: aturan/manifest tidak basi + hash cocok ROM
make test-tools     # regresi encoder & inventory
```

## Setting up

See [INSTALL.md](./INSTALL.md).

## Contributing

Please do. Feel free to yell at me if you need naming/style/formatting guidelines.

If you're looking for things that need to be done, check out [TODO.md](./TODO.md).

Working rules (one command `fomt`, no overwriting MATCH results, honest commit
messages) are in [AGENTS.md](./AGENTS.md); asset architecture in
[docs/decomp/ARSITEKTUR-ASET.md](./docs/decomp/ARSITEKTUR-ASET.md).

## Contact

You can find me over at the [Fire Emblem Universe Discord](https://feuniverse.us/t/feu-discord-server/1480?u=stanh) under the handle `nat_776`. I also lurk other places such as the pret Discord.

See also my other stuff:

* [**StanHash/FOMT-DOC**](https://github.com/StanHash/FOMT-DOC), my old documentation of this game's internals.
* [**StanHash/fe6**](https://github.com/StanHash/fe6), a decompilation of Fire Emblem: The Binding Blade (JP)
