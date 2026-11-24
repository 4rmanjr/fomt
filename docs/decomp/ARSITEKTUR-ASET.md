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
.global gUnk_0872DE44
gUnk_0872DE44:
    .incbin "baserom.gba", 0x72DE44, 0x1034
```

Sebagian simbol sudah dialihkan ke binary hasil encoder (§8): font jam
(`gUnk_0875A440`, kelas `tiles4bpp`) dan satu sprite OBJ 16x16
(`gUnk_087518CC`, kelas `sprite`, palet pasangannya `gUnk_0875194C` ikut
digerbang di metadata). Sisanya masih `.incbin "baserom.gba"`.

Daftar aturan build graphics tidak lagi ditulis tangan: `gfx_rules.mk`
dihasilkan `tools/assets/gfx_rules.py` dari metadata `assets/gfx/**/*.json`
(pola `graphics_file_rules.mk` pret) dan di-include Makefile.

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

Pemetaan konkret terhadap pokeemerald-expansion (yang sudah diadopsi):

| komponen pret/pokeemerald | padanan di repo ini | status |
|---|---|---|
| `graphics_file_rules.mk` (satu aturan per aset) | `gfx_rules.mk` yang **digenerate** `tools/assets/gfx_rules.py` dari metadata | diadopsi |
| `gbagfx` PNG→`.4bpp`/`.gbapal` | `sprite2gba.py`, `tile4bpp.py`, `pal2gba.py` | diadopsi untuk 4bpp/palet |
| PNG terindeks + `.pal` JASC sebagai source | `assets/gfx/sprites/*.png` (PLTE) + `.pal` | diadopsi |
| `object_event_graphics_info` (size/width/height/pointer palet) | metadata JSON per sprite: `frame`, `palette.rom`, `rom` | diadopsi sebagai metadata; tabel C-nya belum |
| `INCBIN` di asm data | `.incbin "build/assets/<symbol>.bin"` setelah gate hash | diadopsi |
| `mapjson`/porymap untuk peta | — | belum (format peta FOMT belum dipetakan) |
| `.lz` (kompresi saat build) | `lz70.py` | belum byte-identik, jadi tidak dipakai build |

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

Audit hash compressed + decoded dan prioritas konversi untuk **seluruh**
stream `0x70` yang sudah diekstrak — blob utuh maupun bank tertanam — ada di
[`ASET-0X70-REENCODE.md`](ASET-0X70-REENCODE.md); cakupan per sumber dicatat
di bagian Ringkasan dokumen itu, dan saat ini semuanya `opaque` karena repo
belum punya encoder `0x70` yang terbukti byte-identik. Prioritas di dokumen
itu bukan izin mengganti `.incbin`.

Palet `gUnk_0875A440` dan 12 wadah font/objek belum punya pasangan yang
terbukti: tidak ada call site yang menyalin simbol palet ke palet RAM
(`func_08008E64`/`func_08008EB8`/`Unpack` dengan sumber terselusur), dan
vtable wadah hanya
mengembalikan pointer glyph/tile. Status bukti + kandidat posisi dicatat di
[`PALET-FONT.md`](PALET-FONT.md); jangan mengisi palet di manifest aset
sebelum ada bukti loader.

### 4.4 Symbol/address contract

Dalam profil `match`:

- nama simbol tidak berubah;
- offset dan ukuran tidak berubah;
- alignment tidak berubah;
- pointer internal tetap menunjuk alamat yang benar;
- urutan data dalam section tetap.

Jika perubahan source mengubah ukuran atau urutan, itu perubahan profil `mod`,
bukan `match`.

### 4.5 Framing lossless bukan bukti format

Round-trip byte-identik hanya membuktikan framing yang dipilih bisa dibalik,
bukan bahwa framing itu benar. Satu blob bisa dibaca sebagai “header 20 B +
N tile” dan tetap round-trip, padahal aslinya container berhitung. Bukti format
harus datang dari pembaca sebenarnya (call site) dan aritmetika panjangnya,
bukan dari kecocokan hash semata.

Contoh konkret `gUnk_0872DE44` (`0x72DE44`, 4148 B): `func_0805E6CC` membaca
enam tabel berhitung lalu satu tabel ekor — A 27×4 B, B 27×16 B, C 6×8 B,
D 106×32 B, E 1×32 B, F 0×8 B, lalu T 27×4 B — dan totalnya tepat `0x1034`.
Framing lama “20 B header + 129 tile” juga round-trip, tetapi 22 B tabel ikut
menjadi piksel sehingga preview-nya tampak seperti glyph yang bergeser. Source
yang benar hanya merender section D+E (107 tile 4bpp) dan menyimpan tabel lain
apa adanya; `tools/assets/font_container.py` melakukan itu dan `verify`
menuntut SHA-256 seluruh container sama. Penggantian `.incbin` untuk simbol ini
tetap pekerjaan terpisah dan belum dilakukan.

## 5. Struktur direktori target

```text
assets/
  manifest.json              # indeks aset + hash + status
  gfx/
    fonts/
      clock.png
      clock.pal
      clock.json
    sprites/
      gUnk_087518CC.png    # PNG terindeks 8-bit + PLTE (warna palet)
      gUnk_087518CC.pal
      gUnk_087518CC.json   # rom + palette.rom + frame
    ui/
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
  gfx_rules.py        # generate gfx_rules.mk (aturan build graphics)
  tile4bpp.py
  sprite2gba.py
  pal2gba.py
  lz70.py
  asset_manifest.py
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
- Export `0x70` (`assets/0x70/`) punya tiga direktori: `bin/` (stream masih
  terpak dari blob; nama `bin/<blob>_<index>_<unpacked>_0x<format>.bin`),
  `png/` (render indeks + `png_sha256` di manifest; bukan source kanonik), dan
  `extern/` untuk bin hasil unpack yang **bukan** stream di dalam blob sumber
  (pasangan eksternal, mis. tabel tile/palet map). Rujukan di
  `assets/0x70/manifest.json` selalu path relatif terhadap `assets/0x70/`:
  `bin/...`, `png/...`, dan `extern/extern_<alamat>_<unpacked>_<sha8>.bin`
  (mis. `extern/extern_086913D4_32768_4a0f1517.bin`) dengan `sha8` = 8 digit
  pertama `sha256` isi bin setelah unpack (bukan hash terpak). Entri
  `external_assets` mengikat `address`, `bin`, `unpacked`, `format`, dan
  `sha256` penuh untuk tiap pasangan itu.

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

Schema mesin: `tools/assets/manifest_schema.json` (JSON Schema draft-07),
divalidasi `tools/assets/asset_verify.py`; `id` juga ditolak bila memuat
alamat ROM. Artefak pertama Fase 0 yang lolos: `gfx/fonts/clock` (4bpp),
`gfx/fonts/unk_0872de44` (container), dan `gfx/palettes/panel_screen`
(`gUnk_08731940`, 256 warna, bukti DMA `func_080AE7D0`).

Aturan `id`: huruf kecil, berbentuk path, stabil, dan tidak memuat alamat ROM.
Rename `id` adalah commit migrasi tersendiri; simbol tetap nama linker yang
dipakai kode.

`assets/manifest.json` adalah indeks yang dihasilkan
`tools/assets/asset_manifest.py` dari metadata per-aset: `id`, `symbol`,
`kind`, `status`, `rom` (offset/ukuran/sha256), `source` (PNG + JSON), dan
`encoder` (tool + versi). Generator menjalankan encoder dan menolak aset yang
byte/hash-nya belum cocok atau statusnya belum `rom-exact`, jadi entri di
indeks tidak bisa mendahului gate; `--check` exit 1 bila indeks basi.

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
| sprite/OBJ | PNG terindeks (PLTE) + `.pal` + JSON frame | `sprite2gba.py` | urutan tile, hash palet pasangan, jumlah tile = frame × tile/frame |
| tabel/struct | JSON/C dengan schema | generator C/asm | layout struct, `static_assert`, hash byte |
| container 0x70 | manifest stream + source decoded | `lz70` + encoder stream | decoded hash **dan** compressed hash |
| container font/objek (`func_0805E6CC`) | JSON tabel + PNG tile | `font_container.py` | urutan enam tabel + ekor, SHA-256 seluruh container |
| bank stream 0x70 tertanam | bin `extern/` + `embedded_manifest.json` | `embedded_streams.py` | rantai stream berakhir di ujung blob; sha256 bin + PNG tanpa ROM |
| audio | MIDI/WAV | encoder m4a | urutan/loop, sample, hash |

Kelas `layar` diputuskan dari fungsi pemuat scene (`SCREEN_SCENES` di
`tools/scripts/extract_assets.py`), bukan dari gambar: sebuah stream hanya
dipindah ke `layar` bila **semua** call site-nya berada di satu fungsi yang
memang memuat tilemap langsung ke screenblock BG (`0x0600C000-0x0600FFFF`)
plus palet, tanpa header peta/kamera. Contoh terverifikasi: `func_080B7164`
(`gUnk_0872D630`, `gUnk_0872D5CC`), `func_080B55D0` (`gUnk_0872C73C`,
`gUnk_0872C5D0`), `func_080AE7D0` (`gUnk_0872FE6C`, `gUnk_0872FC34`) — panel
layar 32x32, bukan lapis peta; render-nya memperlihatkan kotak dialog/panel BG.

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
- Orkestrasi build ada di Makefile, bukan skrip terpisah: `gfx_rules.mk`
  (dihasilkan `tools/assets/gfx_rules.py`) mendefinisikan `ASSET_BINS` dan satu
  aturan `build/assets/<symbol>.bin` per aset `rom-exact`; objek
  `build/asm/data/data_0813B288.o` bergantung pada daftar itu. Menambah aset =
  taruh PNG/palet + JSON, jalankan `gfx_rules.py`; tidak ada sunting Makefile.
  Aset yang belum `rom-exact` tidak punya aturan, jadi `.incbin`-nya tetap
  menunjuk ROM.
- Ganti satu simbol per perubahan dan jalankan `make compare`. Provenance
  offset/ukuran ROM tetap ditulis di asm sebagai komentar
  `@ rom: 0xOFFSET 0xSIZE` supaya inventaris aset tidak kehilangan asal simbol.
- `build/assets/**` tidak di-track; source + manifest + versi tool yang
  di-track.
- `make compare` tetap menjadi gerbang akhir; asset build bukan pengganti
  verifikasi ROM.

## 9. Gate verifikasi

### Gate per aset

```text
python3 tools/assets/asset_verify.py --symbol gUnk_0875A440
python3 tools/assets/asset_verify.py            # semua aset di manifest
```

Memeriksa:

- sha256 generated == sha256 slice ROM;
- offset, ukuran, alignment tidak berubah;
- source dan encoder yang tercatat benar-benar dipakai;
- aset `rom-exact` tidak masih memakai `baserom.gba` (di Fase 0 ini masih
  dilaporkan sebagai catatan; `--require-switched` menjadikannya kegagalan);
- `assets/manifest.json` sesuai schema dan tidak punya symbol/offset ganda.

Gate `assets/manifest.json` juga dipanggil `check_docs.py` (dibandingkan
dengan `asset_manifest.build()`), jadi manifest basi menggagalkan tutup sesi.

### Gate aset `0x70` tanpa ROM

Dua gerbang ini merender/hash ulang dari manifest + berkas yang sudah ada,
sehingga bisa dijalankan tanpa `baserom.gba`:

```sh
python3 tools/scripts/extract_assets.py --check-png
python3 tools/scripts/extract_assets.py --check-external
```

- `--check-png` merender ulang setiap PNG dari `bin/` stream internal atau
  `extern/*.bin`, lalu membandingkan `png_sha256` di manifest **dan** hash
  berkas PNG di disk. Format ringkas: `PNG: <n> diperiksa, <m> masalah`;
  `m > 0` → exit 1, dengan baris `MASALAH <blob>#<i>: <sebab>` (mis.
  `hash render ulang beda` atau `file PNG beda dari manifest`).
- `--check-external` menghitung SHA-256 setiap entri
  `external_assets` di `assets/0x70/manifest.json`, mencocokkannya dengan
  field `sha256`, dan menolak berkas yang hilang. Format ringkas:
  `aset pasangan eksternal: <cocok>/<total> cocok`; `MASALAH <alamat>:
  sha256 beda` / `berkas hilang: <bin>` → exit 1.

Uji negatif yang pernah dijalankan: satu PNG dipotong 1 byte dan satu bin
`extern/` diubah 1 byte → kedua perintah exit 1 (`hash render ulang beda`,
`sha256 beda`); setelah berkas dipulihkan byte-identik, keduanya exit 0.
Artinya kegagalan berkas benar-benar tertangkap, bukan hanya kegagalan
manifest.

Gate tutup sesi memakai jalur murah dari pemeriksaan yang sama:
`check_docs.py` memanggil kedua jalur `quick`: `extract_assets.png_problems`
untuk PNG stream/pasangan dan `embedded_streams.problems` untuk PNG bank
tertanam. Keduanya selalu memeriksa hash setiap PNG ke `png_sha256`
manifestnya (murah, dan itu yang menangkap PNG rusak), dan hanya merender
ulang bila sidik jari input render (isi manifest + path/ukuran/mtime setiap
`bin/`) berbeda dari render terakhir yang lolos. Sidik jari disimpan di
`build/png_check.stamp.json` dan `build/embedded_check.stamp.json`
(gitignored), jadi render penuh hanya terjadi setelah clone/clean atau saat
bin benar-benar berubah; `--check-png` tanpa `--quick` dan `embedded_streams
--check` tanpa `--quick` selalu merender ulang. Hook `pre-commit` juga
terpicu bila yang di-stage adalah `assets/0x70/png|bin|extern/` atau
`assets/0x70/manifest.json`, jadi PNG rusak tidak bisa ikut ter-commit tanpa
ada yang menjalankan perintah manual.

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

- **Selesai:** `tools/assets/asset_verify.py` + `tools/assets/manifest_schema.json`
  (validasi schema, hash ROM, encoder, source, catatan `.incbin`).
- **Selesai:** bukti tiga aset source `rom-exact` — `gfx/fonts/clock`
  (`tile4bpp.py`), `gfx/fonts/unk_0872de44` (`font_container.py`), dan
  `gfx/palettes/panel_screen` (`gUnk_08731940`, `pal2gba.py`); semuanya
  `sha256(encoded) == sha256(ROM slice)` dan `make compare` HIJAU.
- **Selesai:** `assets/raw` dan `assets/0x70` tetap export/audit (tidak jadi
  input build), belum ada `.incbin` baru yang diubah.
- **Belum:** status `opaque` + sha256 per blob `raw/0x70` masuk manifest;
  `.incbin` diganti hanya setelah encoder-nya lolos gate (Fase 1).

**Exit:** semua blob punya status; belum ada klaim `rom-exact` baru di luar
aset source yang lolos gate.

### Fase 1 — encoder termudah

- Palet, tile/font/UI 4bpp, tilemap.
- Satu aset dibuktikan end-to-end: decode → encode → sha256 → `make compare`.
- Baru setelah satu aset berhasil, buat template untuk kelas itu.
- **Progres:** kelas sprite punya `tools/assets/sprite2gba.py` (PNG terindeks
  + `.pal` + metadata frame, hash palet pasangan ikut digerbang) dan satu
  sprite sudah dialihkan `.incbin`-nya dengan `make compare` HIJAU. Aturan
  build-nya digenerate, jadi aset baru di kelas ini tidak menyentuh Makefile.

**Exit:** ada minimal satu kelas yang seluruh asetnya `rom-exact`.

### Fase 2 — container `0x70`

- Gunakan decoder yang sudah ada; tambahkan encoder stream dan container.
- Status `decoded-exact` dulu; naik ke `rom-exact` hanya bila compressed bytes
  juga sama.
- Jika compressor tidak bisa mereproduksi byte, tetap `opaque`; jangan
  mengganti `.incbin`.
- **Progres:** `tools/assets/lz70.py` menulis format `000` (atom0/lzss0/diff0).
  Replay token asli via serializer = byte identik **3/3** stream P0 (model
  header/bit/padding terbukti), roundtrip decode 3/3, dan parse optimal
  mencapai ukuran compressed yang sama persis dengan aslinya **3/3**.
- **Namun hash compressed belum sama**: ada banyak tokenisasi berbiaya bit
  identik dan encoder asli memilih di antaranya dengan aturan yang belum
  diketahui (24 kombinasi tie-break diuji, tidak ada yang cocok). Karena
  `stream_audit.py` menilai byte, bukan ukuran, ketiga stream P0 **tetap
  `opaque`**. Rincian: `assets/0x70/encoder_probe.md`.

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

## 18. Pola pret/pokeemerald-expansion yang diadopsi

Repo upstream (`pret/pokeemerald`, `rh-hideout/pokeemerald-expansion`) membangun
graphics dari source lewat aturan pola + tool konversi, bukan dari blob ROM.
Modelnya diadopsi di sini; yang berbeda hanya bentuk metadatanya.

| upstream | di repo ini | catatan |
|---|---|---|
| `tools/gbagfx` (`png` -> `4bpp`/`1bpp`/`gbapal`, `lz`, `rl`) | `tools/assets/tile4bpp.py`, `sprite2gba.py`, `pal2gba.py`, `font_container.py` | encoder Python, satu per kelas; tiap encoder punya tes di `tools/tests/` |
| `graphics_file_rules.mk` / `spritesheet_rules.mk` (di-`include` Makefile) | `gfx_rules.mk` (di-include Makefile) | upstream ditulis/di-`scaninc`; di sini **digenerate** dari `assets/gfx/**/*.json` |
| `INCGFX_U32("x.png", ".4bpp", "-mwidth 4 -mheight 4")` di C | metadata JSON: `source.png` + `frame.width_tiles/height_tiles` | slice frame per tile 8x8, urutan kiri->kanan lalu baris berikutnya |
| `.pal` JASC -> `.gbapal` | `pal2gba.py` dari `source.pal` | palet pasangan sprite ikut digerbang di metadata |
| `.lz` / `.smol` (compresSmol) | `tools/assets/lz70.py` (format `0x70`) | byte-compressed belum identik -> stream tetap `opaque` |
| `make clean-generated` | `make clean-assets` | hanya `build/assets/`, ROM tidak disentuh |
| status "sudah dikonversi" implisit | status eksplisit `rom-exact`/`decoded-exact`/`opaque` | gate hash, bukan asumsi |

Perintah harian (jalur aset tidak menyentuh build ROM):

```sh
make assets-rules     # regenerasi gfx_rules.mk setelah tambah/ubah JSON
make assets-bin       # encode semua aset rom-exact ke build/assets/*.bin
make assets-check     # gate: aturan & manifest tidak basi + hash cocok ROM
make clean-assets     # buang bin hasil encode
```

### Alur menambah sprite (end-to-end)

1. **Ambil dari ROM** (sekali per sprite): `sprite2gba.py decode --rom
   baserom.gba --offset <off> --size <n> --pal-offset <off> --pal-size 32
   --frame-width <tile> --frame-height <tile> --png ... --pal ... --json ...
   --id gfx/sprites/<nama> --symbol <gUnk_...>`.
2. **Edit** PNG terindeks (PLTE 16 warna) dan `.pal` JASC; jangan mengubah
   offset/ukuran sampai gate hijau.
3. `python3 tools/assets/asset_manifest.py` — gate hash menulis ulang
   `assets/manifest.json` (aset yang hash-nya beda tidak akan masuk).
4. `make assets-rules && make assets-bin && make assets-check`.
5. Ganti `.incbin "baserom.gba", <off>, <size>` di
   `asm/data/data_0813B288.s` menjadi `.incbin "build/assets/<symbol>.bin"`
   (beri komentar provenance: offset + sumber PNG/palet/JSON).
6. `make compare` — HIJAU berarti byte ROM tidak bergeser satu pun.

Aturan besi: langkah 5 hanya boleh dilakukan setelah langkah 4 hijau. Selama
status belum `rom-exact`, `.incbin` tetap menunjuk ROM sehingga pekerjaan aset
dan pekerjaan decomp (`fomt`, judge, migrate) bisa berjalan bersamaan tanpa
saling merusak `make compare`.
