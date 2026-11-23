# Arsitektur dan workflow aset

Status: **rancangan yang diadopsi, implementasi bertahap**. Dokumen ini adalah
rujukan untuk memindahkan aset dari `.incbin "baserom.gba"` ke source yang bisa
dirawat, tanpa mengubah byte ROM pada profil `match`.

Dokumen terkait: [`RENCANA-TRANSLASI.md`](../RENCANA-TRANSLASI.md) untuk urutan
translasi kode, [`ASET-INVENTARIS.md`](ASET-INVENTARIS.md) dan
[`ASET-0X70-PETA-BERKAS.md`](ASET-0X70-PETA-BERKAS.md) untuk inventaris yang
sudah ada, serta [`TOOLS.md`](../ops/TOOLS.md) untuk perintah tool.

## 1. Keputusan

1. **Source aset bukan asm dan bukan binary ROM.** Source yang diedit adalah
   PNG/JSON/palet (atau format domain lain); `.4bpp`, `.bin`, dan `.s` adalah
   hasil generate.
2. **`baserom.gba` tetap referensi byte, bukan input build untuk aset yang
   sudah dikonversi.** Selama sebuah aset belum lolos round-trip, aset itu
   tetap `opaque` dan boleh memakai `.incbin baserom.gba`.
3. **Identik byte adalah gerbang per aset dan gerbang akhir.** Bukan sekadar
   "render-nya mirip": encoder harus menghasilkan byte yang sama dengan slice
   ROM asli, lalu `make compare` harus HIJAU.
4. **Simbol, offset, ukuran, dan alignment adalah kontrak.** Dalam profil
   `match`, mengganti representasi tidak boleh menggeser simbol atau mengubah
   pointer internal.
5. **Dua profil build** memisahkan kebutuhan decomp dari kebutuhan modding:
   `match` untuk reproduksi byte-identik, `mod` untuk perubahan yang boleh
   menggeser layout.
6. **Pekerjaan aset dan translasi C berjalan di lane terpisah.** Keduanya
   bertemu di simbol yang stabil, bukan di file yang sama.

## 2. Kondisi saat ini

`asm/data/data_0813B288.s` memuat blob sebagai:

```asm
.global gUnk_0875A440
gUnk_0875A440:
    .incbin "baserom.gba", 0x75A440, 0x1004
```

Konsekuensinya:

- asset tidak bisa diedit sebagai source;
- build bergantung pada ROM referensi;
- perubahan tidak bisa direview sebagai diff yang bermakna;
- format, header/ekor, dan kompresi tidak terlihat di dependency build.

`assets/raw/` dan `assets/0x70/` yang ada sekarang adalah **inventaris,
provenance, dan preview**, bukan source build resmi. Manifest-nya sudah berguna:
hash, kelas, pasangan palet/tileset, status bukti, dan `map_loader`. Pekerjaan
berikutnya adalah menambahkan jalur source → encoder → binary di atasnya.

## 3. Pola yang diadopsi

Proyek decomp profesional tidak menaruh graphics di asm. Pret/pokeemerald
memakai `graphics/` sebagai source PNG/palet, lalu `gbagfx` mengubahnya menjadi
`.4bpp`/`.gbapal`/`.lz`; map dan layout memakai JSON + `mapjson`; audio memakai
`mid2agb`/`wav2agb`; dependency dilacak `scaninc`. Porytiles memakai model
`source ⇄ binary` dengan compile/decompile sebagai invers, dan Porymap menjadi
editor untuk map/tileset.

Yang diadopsi adalah **arsitekturnya**, bukan format Pokémon-nya:

- source asset yang bisa dibuka editor biasa;
- compiler asset yang deterministik;
- generated binary yang di-INCBIN sebagai artefak;
- `make compare` sebagai gerbang akhir;
- editor/validator untuk map/tileset, bukan hex editor.

Format Harvest Moon tetap milik repo ini; jangan memaksakan `map.json` atau
tileset Pokémon ke format FOMT.

Referensi pola:

- <https://github.com/pret/pokeemerald/blob/master/Makefile>
- <https://pret-pokeemerald.mintlify.app/overview/project-structure>
- <https://grunt-lucas.github.io/porytiles-user-docs/quickstart.html>

## 4. Prinsip invarian

### 4.1 Satu source of truth per aset

Satu aset punya satu source kanonik dan satu entri manifest. PNG preview,
binary hasil generate, dan file lama tidak boleh menjadi source kedua yang
diedit terpisah.

### 4.2 Round-trip sebelum replace

Urutan wajib untuk setiap aset:

```text
byte ROM asli
  -> decode ke source kanonik
  -> encode ulang
  -> sha256(encoded) == sha256(byte ROM asli)?
       ya  -> status rom-exact, boleh menggantikan .incbin
       tidak -> status opaque, tetap pakai byte asli
```

Untuk container terkompresi, “byte ROM asli” berarti **byte compressed**, bukan
hanya payload hasil dekompresi. Payload yang sama dengan kompresi berbeda tetap
mengubah ROM.

### 4.3 Status eksplisit

| status | arti | boleh menggantikan `.incbin baserom`? |
|---|---|---|
| `rom-exact` | source menghasilkan byte ROM persis | ya |
| `decoded-exact` | payload sama, compressed bytes belum tentu sama | tidak |
| `header-only` | bukti pasangan peta dari tabel header, bukan call site `Unpack` | tidak; tetap `opaque` untuk build |
| `opaque` | belum ada encoder/format yang bisa dipertanggungjawabkan | tidak |

`pair_status` pada manifest `0x70` adalah **bukti pasangan** (`callsite`,
`header-only`, `unproven`), bukan status build. Status build aset memakai field
`status` di §6; `header-only` tidak otomatis berarti `decoded-exact`.

`header-only` dan `decoded-exact` adalah status jujur, bukan kegagalan yang
perlu disembunyikan. Ia mencegah klaim bukti yang tidak bisa dipertahankan.

### 4.4 Symbol/address contract

Dalam profil `match`:

- nama simbol tidak berubah;
- offset dan ukuran tidak berubah;
- alignment tidak berubah;
- pointer internal tetap menunjuk alamat yang benar;
- urutan data dalam section tetap.

Jika perubahan source mengubah ukuran atau urutan, itu perubahan profil `mod`,
bukan `match`.

## 5. Struktur direktori target

```text
assets/
  manifest.json              # indeks aset + hash + status
  gfx/
    fonts/
      clock.png
      clock.pal
      clock.json
    ui/
    sprites/
    tilesets/
  maps/
    farm/
      map.bin
      map.json
  audio/
  raw/
  containers/
    0x70/
      gUnk_086FD240.json
tools/assets/
  png2gba.py
  gba2png.py
  pal2gba.py
  map2bin.py
  lz70.py
  build_assets.py
  asset_verify.py
  asset_diff.py
build/assets/                # generated, tidak diedit tangan
```

Aturan:

- `assets/**` berisi source dan metadata, bukan output build.
- `build/assets/**` adalah artefak; boleh dihapus dan dibangun ulang.
- `assets/manifest.json` adalah indeks, bukan tempat menyimpan byte asset.
- `assets/raw/` dan `assets/0x70/` yang sekarang tetap dipertahankan sebagai
  export/audit; jangan langsung dijadikan input build tanpa status `rom-exact`.

## 6. Manifest aset

Contoh satu aset:

```json
{
  "id": "gfx/fonts/clock",
  "symbol": "gUnk_0875A440",
  "kind": "tiles4bpp",
  "rom": {
    "offset": "0x75A440",
    "size": 4100,
    "sha256": "..."
  },
  "source": {
    "path": "assets/gfx/fonts/clock.png",
    "palette": "assets/gfx/fonts/clock.pal",
    "tile_offset": 0,
    "tile_trim": 4
  },
  "encoder": {
    "tool": "png2gba",
    "version": 1,
    "args": ["--4bpp", "--tile-order=row-major"]
  },
  "codec": null,
  "deps": ["gfx/fonts/clock.pal"],
  "status": "rom-exact"
}
```

Field yang wajib ada:

- `id`: nama stabil dan semantik, bukan alamat;
- `symbol`: nama linker yang dipakai C/asm;
- `kind`: kelas encoder;
- `rom`: offset, ukuran, sha256;
- `source`: path kanonik dan parameter yang memengaruhi byte;
- `encoder`: tool + versi + argumen;
- `codec`: `null` atau deskripsi container/kompresi;
- `deps`: palet, tileset, atau include lain;
- `status`: salah satu status di §4.3.

Aturan `id`: huruf kecil, berbentuk path, stabil, dan tidak memuat alamat ROM.
Rename `id` adalah commit migrasi tersendiri; simbol tetap nama linker yang
dipakai kode.

Untuk container `0x70`, tambahkan:

```json
{
  "codec": {
    "container": "0x70",
    "streams": [
      {"index": 0, "codec": "lzss", "source": "..."}
    ],
    "compressed_sha256": "..."
  }
}
```

## 7. Kelas aset dan encoder

| kelas | source kanonik | encoder | verifikasi khas |
|---|---|---|---|
| palet | PNG indexed / `.pal` JASC | `pal2gba` | 16/256 warna, urutan bank, BGR555 |
| tile/font/UI 4bpp | PNG indexed | `png2gba` | 8×8 tile, urutan tile, `tile_offset`/`tile_trim` |
| tilemap peta | `.bin` + `map.json` | `map2bin` | lebar/tinggi, 0x03FF kosong, indeks tile |
| map/tileset | source tileset + metatile + atribut + layout | editor/compiler khusus FOMT | pasangan palet/tileset, header 40 B, sha256 |
| layar statis (logo/HUD) | PNG tilemap + palet/tileset | renderer layar | kelas `layar`, bukan peta; bukti fungsi scene |
| sprite/OBJ | PNG + frame/OAM/anim JSON | `sprite2gba` | urutan tile, palet, metadata frame |
| tabel/struct | JSON/C dengan schema | generator C/asm | layout struct, `static_assert`, hash byte |
| container 0x70 | manifest stream + source decoded | `lz70` + encoder stream | decoded hash **dan** compressed hash |
| audio | MIDI/WAV | encoder m4a | urutan/loop, sample, hash |

Urutan prioritas: palet → tile/font/UI → tilemap → container `0x70` →
map/tileset → audio → tabel/struct. Mulai dari yang encoder-nya paling mudah
dibuktikan, bukan dari yang paling banyak.

## 8. Pipeline build

```text
assets/**/*.png|json|pal
        │
        ▼
tools/assets/build_assets.py
        │
        ├── build/assets/<symbol>.bin
        ├── build/asm/data_0813B288.gen.s
        └── assets/manifest.json (hash/status)
                    │
                    ▼
             ld → fomt.gba → make compare
```

Aturan build:

- `build_assets.py` hanya membangun aset yang berubah (dependency graph).
- Generated asm tetap mempertahankan `.global`, urutan, dan alignment.
- Untuk aset `rom-exact`, generated asm tidak boleh memakai
  `.incbin "baserom.gba"`.
- `build/assets/**` tidak di-track; source + manifest + versi tool yang
  di-track.
- `make compare` tetap menjadi gerbang akhir; asset build bukan pengganti
  verifikasi ROM.

## 9. Gate verifikasi

### Gate per aset

```text
asset_verify --symbol gUnk_0875A440
```

Memeriksa:

- sha256 generated == sha256 slice ROM;
- offset, ukuran, alignment tidak berubah;
- source dan encoder yang tercatat benar-benar dipakai;
- aset `rom-exact` tidak masih memakai `baserom.gba`.

### Gate build

```text
asset_verify --all
make compare
```

`asset_verify --all` memeriksa seluruh manifest. `make compare` memeriksa ROM
akhir; keduanya diperlukan karena hash per aset tidak mendeteksi pergeseran
layout yang saling meniadakan.

### Gate repository

```text
python3 tools/scripts/check_docs.py
python3 tools/scripts/audit_consistency.py
```

Dokumen dan state harus tetap sinkron. Untuk perubahan tool, `TOOLS.md`
diperbarui pada commit yang sama.

## 10. Profil `match` dan `mod`

| hal | `match` | `mod` |
|---|---|---|
| tujuan | byte-identik dengan `fomt.gba` | perubahan boleh terlihat |
| ukuran aset | tidak boleh berubah | boleh berubah |
| alamat simbol | tidak boleh bergeser | layout/pointer diregenerasi |
| `make compare` | wajib HIJAU | tidak relevan untuk klaim identik |
| output | `fomt.gba` | ROM mod terpisah |
| status aset | `rom-exact` | `edited` |

Jangan mencampur dua profil dalam satu build. Perubahan seni yang mengubah byte
tidak boleh “lolos” sebagai `match` hanya karena render terlihat benar.

## 11. Workflow harian

### Menambah aset baru

1. Ambil entri dari inventaris/manifest; pastikan simbol, offset, ukuran, dan
   pemiliknya jelas.
2. Decode byte ROM ke source kanonik. Commit source + entri manifest dengan
   status `decoded-exact`; build belum berubah.
3. Tulis encoder dan jalankan `asset_verify --symbol` sampai sha256, offset,
   ukuran, dan alignment cocok.
4. Ganti `.incbin` hanya untuk simbol itu; jalankan `make compare`.
5. Naikkan status ke `rom-exact`; review diff source/manifest, bukan binary.

### Mengubah aset yang sudah ada

- Untuk perubahan seni/format, pakai profil `mod` dan branch terpisah; jangan
  mengklaim `match` atau `make compare` HIJAU.
- Regenerasi binary + pointer/label bila layout berubah; catat sebagai
  perubahan `mod`, bukan migrasi.
- Perubahan yang tetap `match` hanya boleh mengubah representasi source, bukan
  byte hasil.

### Checklist review

- [ ] source kanonik dan encoder/versi tercatat;
- [ ] status `rom-exact`, bukan `decoded-exact`;
- [ ] offset, ukuran, dan alignment tidak berubah;
- [ ] tidak ada `.incbin "baserom.gba"` untuk simbol itu;
- [ ] `asset_verify --symbol` HIJAU;
- [ ] `make compare` HIJAU;
- [ ] manifest dan dokumen diperbarui.

Satu commit berisi satu kelas/simbol, bukan seluruh inventaris. Perubahan tool
wajib memperbarui [`TOOLS.md`](../ops/TOOLS.md) pada commit yang sama.

## 12. Migrasi bertahap

### Fase 0 — baseline dan pengaman

- Tambahkan `asset_verify.py` dan schema manifest.
- Perkaya manifest raw/0x70 dengan sha256, status, kind, dan source.
- Tegaskan `assets/raw` dan `assets/0x70` sebagai export/audit.
- Belum mengubah `.incbin` atau build pada fase ini.

**Exit:** semua blob punya status; belum ada klaim `rom-exact`.

### Fase 1 — encoder termudah

- Palet, tile/font/UI 4bpp, tilemap.
- Satu aset dibuktikan end-to-end: decode → encode → sha256 → `make compare`.
- Baru setelah satu aset berhasil, buat template untuk kelas itu.

**Exit:** ada minimal satu kelas yang seluruh asetnya `rom-exact`.

### Fase 2 — container `0x70`

- Gunakan decoder yang sudah ada; tambahkan encoder stream dan container.
- Status `decoded-exact` dulu; naik ke `rom-exact` hanya bila compressed bytes
  juga sama.
- Jika compressor tidak bisa mereproduksi byte, tetap `opaque`; jangan
  mengganti `.incbin`.

**Exit:** container yang exact sudah terverifikasi; sisanya punya alasan.

### Fase 3 — map, tileset, audio

- Map/tileset butuh editor/validator dan pasangan palet/tileset.
- Perhatikan bukti pasangan: `callsite` lebih kuat daripada `header-only`;
  jangan menaikkan status bukti hanya karena render cocok.
- Audio butuh validasi loop/sample, bukan hanya sha256.

**Exit:** kelas map/tileset/audio punya source dan encoder yang dapat diuji.

### Fase 4 — switch `.incbin` per simbol

- Generate binary, ganti satu `.incbin` per commit.
- 5–10 aset per commit, bukan seluruh inventaris.
- Jalankan `asset_verify --symbol` lalu `make compare`.
- Simpan fallback sampai aset benar-benar `rom-exact`.

**Exit:** tidak ada `.incbin baserom.gba` untuk aset berstatus `rom-exact`.

### Fase 5 — data tabel ke C

- Hanya tabel/struct yang semantiknya sudah diketahui.
- Tambahkan deklarasi di header lebih dulu; jaga nama simbol.
- Gunakan `static_assert(sizeof(...))` dan hash byte.
- Jangan mencampur konversi data dengan rename atau perubahan fungsi.

**Exit:** data yang dikonversi punya schema, hash, dan pemilik C.

### Fase 6 — penutupan

- Hapus/arsipkan fallback yang tidak terpakai.
- Perbarui `Makefile` dan dokumentasi.
- Catat pengecualian `opaque` yang memang belum bisa dikonversi.

## 13. Paralel dengan translasi C

### Lane

| lane | menulis | tidak menulis |
|---|---|---|
| aset | `assets/**`, `tools/assets/**`, `build/assets/**` | `src/**`, `asm/code*.s` |
| translasi C | `src/**`, `asm/code*.s`, `decomp/**` | source aset |
| shared | `include/assets/**`, `Makefile`, `asm/data/**` generated | edit manual data |

### Kontrak antar-lane

- Nama simbol dan ukuran array di header adalah kontrak. Ganti representasi
  aset tanpa mengganti nama/offset agar `extern` di C tetap valid.
- Pekerjaan C boleh memakai aset sebagai opaque symbol; tidak perlu menunggu
  aset selesai.
- Pekerjaan aset tidak perlu menunggu fungsi C selesai; cukup jaga simbol dan
  layout.
- Jika data akan menjadi C, buat header stabil lebih dulu, lalu konversi di
  commit terpisah.
- Jangan dua lane menyentuh `asm/data/data_0813B288.s` bersamaan. File itu
  adalah generated output setelah migrasi; sebelum migrasi, sentuh hanya untuk
  mengganti satu simbol yang sudah disepakati.

### Git dan agent

- Gunakan `--agent <nama>` unik per sesi.
- Stage hanya file lane sendiri; jangan `git add -A`.
- Commit aset menyebut simbol/kelas dan bukti hash/compare.
- Konflik pada simbol yang sama diselesaikan lewat pemilik manifest, bukan
  dengan menimpa file lane lain.

### CI

Job `assets` dan `code` boleh paralel, tetapi job akhir tetap:

```text
asset_verify --all
make compare
check_docs.py
audit_consistency.py
```

## 14. Anti-pattern

- mengedit `.incbin "baserom.gba"` sebagai cara mengubah aset;
- menyimpan PNG dan `.bin` sebagai dua source of truth;
- menganggap decoded payload sama dengan compressed byte sama;
- mengganti compressor tanpa menguji sha256 compressed;
- mengubah urutan palet/tile tanpa metadata;
- rename simbol bersamaan dengan konversi aset;
- mengonversi semua data ke C tanpa schema;
- mencampur PR aset dengan PR fungsi C;
- mengklaim `header-only` sebagai bukti call site.

## 15. Risiko dan mitigasi

| risiko | mitigasi |
|---|---|
| encoder tidak bisa mereproduksi byte | status `opaque`, fallback `.incbin` |
| kompresi 0x70 tidak identik | simpan compressed hash; `decoded-exact` bukan `rom-exact` |
| batas aset tidak sama dengan simbol | metadata `tile_offset`/`tile_trim`/container |
| pointer internal berubah | profil `match` melarang perubahan layout |
| map/tileset sangat kompleks | mulai dari palet/tile/font; editor terpisah |
| dua lane bentrok | ownership manifest + lane path |
| dokumen usang | `check_docs.py`, manifest sebagai sumber |

## 16. Langkah pertama yang konkret

1. Buat `tools/assets/asset_verify.py` dan schema manifest; belum mengubah
   build.
2. Tandai `assets/raw/` dan `assets/0x70/` sebagai inventaris/preview di
   dokumentasi dan manifest.
3. Pilih satu palet dan satu font 4bpp sebagai pilot; buktikan decode → encode
   → sha256 → `make compare`.
4. Baru buat encoder kelas tersebut dan perluas per kelas.
5. Setelah satu kelas stabil, ganti `.incbin` per simbol (5–10 per commit).

## 17. Definisi selesai aset

Sebuah aset dianggap selesai jika:

- punya source kanonik dan entri manifest;
- status `rom-exact`;
- `asset_verify --symbol` HIJAU;
- offset/ukuran/alignment tidak berubah;
- `make compare` HIJAU;
- tidak memakai `.incbin "baserom.gba"`;
- dokumentasi dan tool yang dipakai tercatat.

Status `decoded-exact`, `header-only`, dan `opaque` tetap boleh ada sebagai
utang teknis yang tercatat, tetapi tidak dihitung sebagai aset selesai.
