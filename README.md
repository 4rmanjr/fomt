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
| **MATCH** (byte-identik dengan ROM) | 1.357 | 2.643 | `██████████░░░░░░░░░░` 51,3% |
| **Dipindah ke `src/`** (bukti migrasi) | 1.118 | 2.643 | `████████░░░░░░░░░░░░` 42,3% |
| Promote-only (MATCH, tertahan rantai ekor) | 239 | 2.643 | `██░░░░░░░░░░░░░░░░░░` 9% |
| Sisa (belum MATCH) | 1.286 | 2.643 | `██████████░░░░░░░░░░` 48,7% |

Byte ROM yang sudah dihasilkan dari C: **63.232 / 892.093 B (7,1%)** — persentase fungsi lebih tinggi karena fungsi yang sudah selesai kebanyakan kecil.

### Translasi aset ROM -> source

| Kelas | Rom-exact | Populasi blob | Cakupan |
|---|---:|---:|---|
| Sprite/OBJ | 56 | 86 | `█████████████░░░░░░░` 65,1% |
| Palet | 51 | 64 | `████████████████░░░░` 79,7% |
| Tiles 4bpp | 10 | 86 | `██░░░░░░░░░░░░░░░░░░` 11,6% |
| Tilemap | 25 | 142 | `████░░░░░░░░░░░░░░░░` 17,6% |
| Bank layer peta | 7 | 78 | `██░░░░░░░░░░░░░░░░░░` 9% |
| Container font | 51 | 149 | `███████░░░░░░░░░░░░░` 34,2% |
| Glyph 8x12 | 2 | 86 | `░░░░░░░░░░░░░░░░░░░░` 2,3% |
| Indeks glyph | 2 | 63 | `█░░░░░░░░░░░░░░░░░░░` 3,2% |
| **Total (blob unik)** | 204 | 228 | `██████████████████░░` 89,5% |
<!-- README-STATS:END -->

Definisi selesainya sengaja ketat di kedua jalur:

- **asm -> C.** "MATCH" saja belum dihitung beres: fungsi baru selesai ketika
  bloknya **pindah ke `src/`** (bukan `promote-only`) dan `make compare` tetap
  HIJAU. Angka byte lebih kecil dari angka fungsi karena yang selesai
  kebanyakan fungsi kecil.
- **Aset.** Selesai berarti PNG terindeks + palet JASC + metadata JSON di
  `assets/gfx/`, di-encode tool repo, dan `sha256(encoded) == sha256(slice ROM)`
  sehingga `.incbin` tidak lagi menunjuk `baserom.gba`. Sprite pertama yang
  sudah begitu: `gUnk_087518CC` (128 B, 4 tile 4bpp). Blob sprite lain masih
  `.incbin` ROM, dan sprite di dalam container terkompresi `0x70` menunggu
  encoder yang byte-identik.
- **Penyebut cakupan.** Populasi dihitung dari blob `.incbin` yang benar-benar
  terinventaris di `assets/raw` (satu blob = satu entri `.incbin`; satu blob
  bisa memuat beberapa sprite). Beberapa kelas berbagi grup inventaris yang
  sama (`sprite/OBJ`), jadi baris total memakai union blob supaya tidak
  menghitung ganda. Stream di dalam container `0x70` belum masuk penyebut
  karena encoder-nya belum byte-identik.

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
