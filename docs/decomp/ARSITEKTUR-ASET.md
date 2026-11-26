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

`asm/data/data_0813B288.s` tidak lagi mengambil blob aset dari ROM. Setiap
simbol aset memakai binary hasil encoder (§8):

```asm
.global gUnk_0869A0A4
gUnk_0869A0A4:
    @ rom: 0x69A0A4 0x11E0 — source assets/gfx/tiles/gUnk_0869A0A4.{png,json}; tiles 4bpp
    .incbin "build/assets/gUnk_0869A0A4.bin"
```

Seluruh blob aset di `data_0813B288.s` — termasuk 53 kontainer `0x70` utuh —
sudah `rom-exact`: byte source sama dengan slice ROM, `.incbin` menunjuk
`build/assets/`, dan `asset_verify.py` tidak menemukan `.incbin "baserom.gba"`
di antara mereka. Status itu membuktikan byte
source, bukan bahwa setiap field decoded — byte tanpa pembaca tetap disimpan
eksplisit sebagai `raw`/`hex` dengan `padding` berjustifikasi (§4.3) dan
semantiknya `unidentified`. Populasi serta cakupan per grup diambil dari
`assets/manifest.json` dan `tools/scripts/asset_inventory.py --json`, bukan
ditulis di sini.

Tidak ada lagi `.incbin "baserom.gba"` per simbol di berkas itu; yang tersisa
hanya baris pembuka region tanpa simbol (`.LDATA_BEG`), dan `make compare`
tetap memakai `baserom.gba` sebagai pembanding.

Daftar aturan build graphics tidak lagi ditulis tangan: `gfx_rules.mk`
dihasilkan `tools/assets/gfx_rules.py` dari metadata `assets/gfx/**/*.json`
(pola `graphics_file_rules.mk` pret) dan di-include Makefile.

Konsekuensi lama yang sudah hilang: aset bisa diedit sebagai source, perubahan
tampil sebagai diff PNG/JSON yang bermakna, dan dependency build memuat format
serta `padding` tiap segmen. `assets/raw/` dan `assets/0x70/` sekarang berperan
sebagai **inventaris, provenance, dan preview** di samping source kanonik
`assets/gfx/**` yang menjadi input build.

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
[`ASET-0X70-REENCODE.md`](ASET-0X70-REENCODE.md); cakupan per sumber dan
jumlah stream `opaque` ada di bagian Ringkasan dokumen itu — ambil angkanya
dari `stream_audit.build()`, jangan disalin ke sini. Status `opaque` hanya
penanda stream yang encoder-nya belum menghasilkan byte sama; prioritas di
dokumen itu bukan izin mengganti `.incbin`.

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

- `id`: nama stabil dan semantik, bukan alamat. **Pengecualian eksplisit:**
  aset yang semantiknya belum terbukti wajib memakai placeholder kanonik
  `<dir>/gunk_<alamat>` (diturunkan dari `symbol` + lokasi berkas) dan menandai
  `"semantics": "unidentified"`. Aset dengan id semantik memakai
  `"semantics": "proven"`, dan `asset_manifest.py` menolak `proven` yang id-nya
  masih memuat alamat ROM, atau `unidentified` yang id-nya bukan placeholder
  kanonik. Field `semantics` wajib di schema; §6 karena itu tidak lagi
  "dilarang tanpa jalan keluar", melainkan dilarang tanpa penanda;
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
| tilemap BG | grid entri u16 di JSON (`entries` + `tilemap.width/height`) | `map2bin.py` | jumlah entri = width×height = `rom.size`/2, byte + SHA-256 vs slice ROM |
| map/tileset | source tileset + metatile + atribut + layout | editor/compiler khusus FOMT | pasangan palet/tileset, header 40 B, sha256 |
| layar statis (logo/HUD) | PNG tilemap + palet/tileset | renderer layar | kelas `layar`, bukan peta; bukti fungsi scene |
| sprite/OBJ | PNG terindeks (PLTE) + `.pal` + JSON frame | `sprite2gba.py` | urutan tile, hash palet pasangan, jumlah tile = frame × tile/frame |
| tabel/struct | JSON segmen (`table.py`), atau C dengan schema | `table.py` / generator C | segmen menutup seluruh slice, hash byte |
| container 0x70 | manifest stream + source decoded | `lz70` + encoder stream | decoded hash **dan** compressed hash |
| kontainer 0x70 utuh (`stream_bank`) | bin decoded per stream di `assets/0x70/bin` + header kompresi asli di JSON | `stream_bank.py` | tiap stream reencode byte-identik; total packed = `rom.size`, SHA-256 vs slice ROM |
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
- aset `rom-exact` tidak masih memakai `baserom.gba` (`asset_verify`
  melaporkannya sebagai catatan; `--require-switched` menjadikannya
  kegagalan);
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
  Kelas tilemap punya `tools/assets/map2bin.py` (grid entri u16, grid wajib
  cocok dengan `rom.size`) dan sudah dipakai `gUnk_08755230`; palet dan
  tiles4bpp menyusul dengan pola yang sama.

**Exit:** ada minimal satu kelas yang seluruh asetnya `rom-exact`.

### Fase 2 — container `0x70`

- Gunakan decoder yang sudah ada; tambahkan encoder stream dan container.
- Status `decoded-exact` dulu; naik ke `rom-exact` hanya bila compressed bytes
  juga sama.
- Jika compressor tidak bisa mereproduksi byte, tetap `opaque`; jangan
  mengganti `.incbin`.
- **Progres:** `tools/assets/lz70.py` menulis format `000` (atom0/lzss0),
  atom0/lzss2 (`020`/`023`/`024`), dan atom0/lzss3 (`030`/`033`, termasuk
  diff 3). Replay token asli via serializer byte-identik untuk seluruh stream
  ketiga format, dan encoder menghasilkan compressed persis sama dengan
  tangga asli: **5/5** `000`, **70/70** atom0/lzss2, **53/53** atom0/lzss3.
- **Aturan tokenisasi** yang terbukti: match terpanjang di seluruh jendela
  (seri → jarak terdekat), match 3 B di tiga byte terakhir tidak dipakai,
  literal escape dipakai mulai 9 B, dan match >18 B lewat escape VLI.
  Lzss0 menambahkan run token (menang bila panjang utuh >= match); lzss2
  tidak punya run token sehingga jarak 1 ikut sebagai match. Lzss3 memakai
  unit 2 B: match minimal 2 unit (4 B), pendek 2..9 unit, >9 unit lewat
  escape, dan literal escape mulai 9 pasang (18 B).
- **Blob:** setiap blob `0x70` dimuat utuh oleh `Unpack` (contoh
  `func_080B55D0` memuat `gUnk_0872C84C` ke `0x06004000`, baris 46443-46446;
  `gUnk_086FD19C` ke `0x05000000`, baris 46433-46435), jadi penggantian
  `.incbin` menunggu **seluruh** stream di blob itu byte-identik. Encoder
  huffman kini tersedia, jadi semua format (`000`..`234`) bisa direencode
  byte-identik; daftar per blob ada di `docs/decomp/ASET-0X70-REENCODE.md`.
  Tiga container bertingkat sudah rom-exact lewat `compressed_bank.py`:
  `gUnk_086DC3F4` (3 stream), `gUnk_0869B284` (119 stream; 168 pointer
  `gUnk_08105EDC` menunjuk 119/119 awal stream) dan `gUnk_086D74F8`
  (25 stream; 51 pointer menunjuk 25/25). Prefix `gUnk_086D74F8` disalin
  utuh 0x60 B oleh `func_080A95A4`; prefix `gUnk_0869B284` = palet 128 B
  + 15 struct 12 B, dengan 4 entri ditunjuk `gUnk_080E93F8`.
- `stream_audit.py` menaikkan status ke `ok` hanya bila compressed hasil
  encoder sama byte. Saat ini 284/284 stream `ok`; tidak ada lagi format yang
  menunggu encoder. Rincian angka: `docs/decomp/ASET-0X70-REENCODE.md`.
- **Huffman:** `compressed_bank.py` menyimpan header asli sebagai `counts`,
  `leaves`, dan `widths`, lalu `lz70.encode_huffman` mereproduksi tree + token
  byte-identik. Tidak ada lagi stream huffman yang diparkir karena encoder.

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
- byte yang belum punya pembaca tidak mendominasi source: `coverage.
  proven_ratio` minimal 0.5 (di bawah itu aset diparkir, bukan dihitung);
- dokumentasi dan tool yang dipakai tercatat.

Status `decoded-exact`, `header-only`, `opaque`, dan `partial` tetap boleh ada
sebagai utang teknis yang tercatat, tetapi tidak dihitung sebagai aset selesai.
Ambang 0.5 mencegah bank yang 90%+ isinya `raw` menaikkan cakupan seolah-olah
byte itu sudah diterjemahkan.

Blok `coverage` selalu dihitung codec aset, bukan ditulis tangan: `palette`
memakai `pal2gba.coverage()` (total dari jumlah warna `.pal`), codec lain
menghitung dari field tersumber. Warna ekor yang tidak disalin call-site
dinyatakan sebagai range `padding` bernama beserta buktinya dan dihitung raw;
byte itu tetap ditulis dari `.pal`, bukan hex buram. `asset_verify` menolak
blok `coverage` yang tidak sama dengan hitungan codec.

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

### Blok `0x7529AC`–`0x752DCC`: tile 8×8, bukan palet 64 warna

Blok ini sempat diparkir karena tidak ada pasangan tile+palet yang rapi. Hasil
telusur: **bukan** sprite 8bpp dan **bukan** palet yang dibagi lewat tabel OAM.
Isinya tile 8×8 individual, dan masing-masing simbol disalin **0x20 B** ke
VRAM pada slot tile berbeda (`func_080645F0`, `func_08068344`):

| simbol | tujuan DMA | ukuran |
|---|---|---|
| `gUnk_08752B4C` | `0x06000000 + 0x71*0x20` | 0x20 |
| `gUnk_087529AC` | `+ 0x72*0x20` | 0x20 |
| `gUnk_08752D4C` | `+ 0x73*0x20` | 0x80 (4 tile) |
| `gUnk_08752DCC` | `+ 0x70*0x20` | 0x20 |
| `gUnk_08752A2C` | `+ 0x58*0x20` | 0x20 |
| `gUnk_08752CCC` / `BCC` / `C4C` | `+ 0x59/0x5a/0x5b*0x20` | 0x20 |

`func_08008F0C` hanyalah penyusun deskriptor DMA3 (`0x84000000 | count`), jadi
tujuan `0x0600xxxx` itu pasti VRAM, bukan palette RAM.
Pemeriksaan byte tiap blob 128 B: hanya 32 B pertama berisi gambar, sedangkan
tile #1–#3 selalu 32 B nol (hash-nya sama di semua blob). Jadi isinya satu
tile 8×8 + 0x60 padding nol, bukan empat frame. Karena itu salinan 0x20 B
memang satu tile 4bpp — tile 8bpp butuh 0x40 B — dan `gUnk_08752ACC` disalin
0x80 B karena ikut membawa padding-nya. Satu-satunya palet di
blok itu adalah `gUnk_08752AAC` (0x20 B ke `0x05000000+sl`), pasangan sah untuk
`gUnk_08752A2C` (blob bersebelahan, jarak load 153 baris → `--pair-rule
asm-branch`).

**Cacat inventaris (sudah diperbaiki):** `gUnk_08752D4C` dan
`gUnk_08752DCC` dulu terdaftar sebagai `palet` "64 warna" karena heuristik
`raw_assets.py` hanya memeriksa "semua u16 < 0x8000" + kelipatan 32 B, dan
tile 4bpp jarang (banyak nol) lolos syarat itu. Rasio nol tidak bisa dipakai
sebagai pembeda (palet sah ada yang 0,69 nol; tile ini 0,5–0,8), jadi
heuristiknya sekarang memakai **pola nibble**: palet berisi warna BGR555 yang
mengisi beberapa nibble per word, sedangkan tile 4bpp berisi indeks piksel
sehingga word empat-piksel sering menyisakan satu nibble. Ambangnya
`single_nibble_fraction < 15%` untuk palet (palet sah terukur <= 6%, tile
22–100%), dengan tes yang mengunci kedua sisi.

Validasi ke call site: keempat blob yang berubah kategori memang di-DMA ke
VRAM, bukan palette RAM — `08750C4C` → `0x060100A0` (0x20 B),
`08750C8C` → `0x06002A00` (416 B), `08752D4C` → slot 0x73 (0x80 B),
`08752DCC` → slot 0x70. Karena itu penyebut `palet` turun 4 dan populasi
`sprite/OBJ` naik 4.

Keenam blob `087529AC`, `08752B4C`, `08752ACC`, `08752CCC`, `08752BCC`, dan
`08752C4C` akhirnya bisa dipasangkan secara sah lewat jalur BG-map, bukan
lewat kedekatan load. `func_0804E9F4` menulis entri peta tile dengan
`tile | (indeks_palet << 12)`, dan call site-nya menulis slot tile ini dengan
indeks palet eksplisit:

| slot tile | blob | indeks palet | palet | bukti |
|---|---|---|---|---|
| 0x71 / 0x72 / 0x77 | `08752B4C` / `087529AC` / `08752ACC` | 2 | `gUnk_0875298C` | branch 75710 / 75845 / 76024, `func_0804E9F4` di baris 75717 / 75852 / 76042; palet di-DMA ke `0x05000040` (bank 2) di baris 73892 |
| 0x59 / 0x5A / 0x5B | `08752CCC` / `08752BCC` / `08752C4C` | 1 | `gUnk_08752AAC` | branch 83541 / 83554 / 83567, `func_0804E9F4` di baris 83546 / 83559 / 83572; palet di-DMA ke `0x05000020` (bank 1) di baris 80960 |

Karena load tile dan palet berjauhan, pasangannya dicatat
`--pair-rule asm-branch` dengan `--pair-lines` yang diverifikasi
`--pair-asm`; `pair.reason` menyebut slot tile, indeks palet, dan tujuan DMA
palet. Keenam aset kini `kind: sprite` di `assets/gfx/sprites/` (JSON lama di
`assets/gfx/tiles/` dihapus) dengan `sprite2gba.py verify` MATCH; PNG-nya
menampilkan ikon 8x8 di tile 0, sedangkan tiga tile sisanya padding nol.

Dua blob lain di blok itu ikut dikonversi dengan bukti yang sama:
`gUnk_08752DCC` (slot 0x70, `func_0804E9F4` baris 75581) dan
`gUnk_08752D4C` (slot 0x73, branch baris 76012 dengan `bl` 76042) juga
ditulis dengan indeks palet 2, jadi pasangannya `gUnk_0875298C`; keduanya
kini `kind: sprite` dan JSON lama di `assets/gfx/tiles/` dihapus.

Nomor baris di tabel bukan lagi kutipan manual: kedelapan JSON menyimpan blok
`pair.bg_map` (`line`, `branch`, `tile`, `palette`, `palette_dma`, `bank`)
yang dihasilkan `sprite2gba.py` dari `check_bg_map`. Tool membaca asm dan
menolak bukti yang tidak cocok: baris `line` harus benar-benar
`bl func_0804E9F4`, baris `branch` harus menetapkan tile itu di `r1`
(`movs r1, #tile` atau `lsrs r1, rX, #0x10` dengan konstanta slot stack yang
dicek), argumen ke-5 `[sp]` di jendela branch..bl harus sama dengan indeks
palet, dan palet pasangan harus di-DMA ke `0x05000000 + palette*0x20`
(literal `@ =0x0500xxxx` maupun `0x05000000 + sl`). `verify` menjalankan
ulang pemeriksaan ini, jadi angka di tabel dan di JSON tidak bisa menyimpang
dari asm. Tes regresi menolak setiap sprite JSON yang `pair.reason`/`evidence`
menyebut `func_0804E9F4` atau indeks palet BG map tanpa blok `pair.bg_map`,
jadi aset baru tidak bisa kembali ke kutipan manual. Nomor baris `bl`/branch
dan indeks palet yang dikutip `pair.reason`/`evidence` juga wajib sama persis
dengan `line`/`branch`/`palette` di blok itu, sehingga kalimat bukti tidak
bisa menyimpang dari angka hasil mesin.

Keempatnya lalu dimigrasikan sebagai **`kind: tiles4bpp`** lewat jalur tile
(`tile4bpp.py`), bukan sprite: blob ini tile mentah tanpa palet pasangan, jadi
tidak ada `--pair-rule` yang perlu dibuktikan. Source hidup di
`assets/gfx/tiles/*.json` + PNG indeks; `tile4bpp.py verify` mencocokkan byte
dan hash ke ROM, `assets-check` menggabungkannya dengan gate lain, baru
`.incbin` dialihkan ke `build/assets/<symbol>.bin`. Preview grayscale
menunjukkan isinya nyata: dua potongan grafis (busur/panah), satu tile garis,
dan satu strip glyph angka 0–9/`X`/`=`.

Dua penyesuaian tool ikut di commit yang sama: `asset_manifest.py` memindai
`assets/gfx/tiles/` (sebelumnya hanya fonts/palettes/sprites, sehingga aset
tile baru tidak pernah masuk manifest), dan `tile4bpp.py decode` menulis
`status: rom-exact` seperti `sprite2gba.py` — tanpa itu manifest menolak
metadata hasil decode dengan "status None".

### Aturan pemasangan sprite + palet

Pasangan tile+palet tidak selalu muncul berdampingan di asm: palet bisa dimuat
di cabang lain dari fungsi yang sama. Karena itu `sprite2gba.py decode` punya
`--pair-rule` eksplisit, dan hasilnya dicatat di JSON sebagai blok `pair`
(`rule`, `rom_adjacent`, `load_lines`, `distance`, `reason`):

| `--pair-rule` | Arti | Syarat yang ditegakkan tool |
|---|---|---|
| `adjacent` (default) | palet tepat setelah tile di ROM; cukup urutan blob | `pal_offset == offset + size` |
| `asm-load` | palet dirujuk load asm berdekatan | `--pair-lines tile/palet` + `--pair-asm <berkas .s>`; baris wajib memuat `@ =<symbol>`/`@ =<pal-symbol>` dan harus rujukan **pertama**; jarak <= `--pair-max-distance` (default 40 baris) |
| `asm-branch` | palet dimuat di cabang lain, jarak jauh | `--pair-lines` + `--pair-asm` + `--pair-reason` wajib; jarak dicatat apa adanya |

Bukti BG map (slot tile + indeks palet) diverifikasi terpisah lewat
`--pair-bg-line` (baris `bl func_0804E9F4`), `--pair-bg-branch` (baris yang
menetapkan tile di `r1`), `--pair-bg-tile`, dan `--pair-bg-palette`. Keempatnya
wajib bersama dan hanya sah bila `--pair-lines`/`--pair-asm` sudah ada;
hasilnya blok `pair.bg_map` yang ikut dicek ulang oleh `verify`.

Contoh kasus nyata: `gUnk_0875254C`/`gUnk_087525CC` dimuat di baris 64123 dan
64270 (jarak 147, beda cabang `func_0805FF14`), jadi dipanggil dengan
`--pair-rule asm-branch --pair-lines 64123/64270 --pair-asm asm/code_0803EE94.s
--pair-reason "..."`. Nomor baris tidak bisa asal diketik: tool membaca berkas
asm dan menolak baris yang tidak memuat rujukan simbol pasangan, atau yang
bukan rujukan pertama (baris kanonik). Semua
aturan tetap mencatat `rom_adjacent`, sehingga pembaca JSON tahu apakah urutan
blob ROM mendukung pasangan itu. `--pair-rule adjacent` menolak pasangan yang
tidak bersebelahan, bukan menerimanya diam-diam. Blok `pair` hanya ada pada
aset `kind: sprite`; `tiles4bpp`, `tilemap`, `font_container`, dan `palette`
tidak punya palet pasangan di metadata (palet font dikelola `fonts/palettes.json`).

```sh
python3 tools/assets/sprite2gba.py decode --rom baserom.gba \
    --offset 0x75254C --size 128 --pal-offset 0x7525CC --pal-size 32 \
    --pal-symbol gUnk_087525CC --tiles-wide 2 --frame-width 2 --frame-height 2 \
    --pair-rule asm-branch --pair-lines 64123/64270 \
    --pair-asm asm/code_0803EE94.s \
    --pair-reason "palet dimuat di cabang lain func_0805FF14" \
    --png ... --pal ... --json ... --id ... --symbol gUnk_0875254C
```

Rantai sprite 4-tile yang sama berlanjut setelah `gUnk_087530CC`: pasangan
`gUnk_0875316C`/`gUnk_087531EC`, `gUnk_0875320C`/`gUnk_0875328C`,
`gUnk_087532AC`/`gUnk_0875332C`, `gUnk_0875334C`/`gUnk_087533CC`, dan
`gUnk_087533EC`/`gUnk_0875346C` semuanya dimuat berurutan di asm (jarak 1–2
baris, `code_0803EE94.s`), jadi bukti pasangannya `--pair-rule asm-load`, bukan
`asm-branch`; blob ROM-nya juga bersebelahan sehingga `rom_adjacent` benar.
Alamat tetap dipakai hanya sebagai placeholder `semantics: unidentified` (§6).

Rantai berlanjut ke `gUnk_0875348C` (0x80, palet `gUnk_0875350C`): tile
di-DMA 0x20 B ke VRAM `0x06000BA0` (slot tile 0x5D, baris 64709) dan palet
di-DMA ke `0x05000080` (bank 4) di cabang lain `func_0805FF14` (baris
64848), jadi pasangannya `--pair-rule asm-branch` (jarak 147). Bedanya
dengan rantai sebelumnya, slot tile itu juga ditulis ke BG map:
`func_0804E9F4` dipanggil di baris 65559 dengan tile 0x5D dan indeks palet 4
(branch baris 65553), sehingga `pair.bg_map` ikut terverifikasi mesin dan
angkanya cocok dengan tujuan DMA palet (bank 4).

### Blob 0x75352C–0x7537D0: container `func_0805E6CC`, bukan sprite

Empat blob sesudah palet `gUnk_0875350C` berukuran 220/220/236/3748 B — bukan
kelipatan 32 B — sehingga tidak bisa dipotong sebagai tile datar. Call site
memutuskan formatnya: `func_0805E6CC` (0x0805E6CC) adalah pembaca container
berhitung (enam tabel A–F + ekor T). `gUnk_08753608` (baris 130129),
`gUnk_087536E4` (code_809E804.s baris 84854), dan `gUnk_087537D0` (baris
96720, 113849) dipanggil langsung dengan simbol itu sebagai argumen kedua;
`gUnk_0875352C` (baris 133363) masuk lewat `func_08082264`, yang di baris
132394 meneruskan argumen ke-4-nya ke `func_0805E6CC`.

Aritmetika panjangnya menutup tepat di ukuran slice: `gUnk_0875352C` dan
`gUnk_08753608` A1/B1/C1/D4/E1/F0/T1 = 0xDC, `gUnk_087536E4`
A2/B4/C3/D2/E1/F0/T4 = 0xEC, `gUnk_087537D0` A20/B40/C11/D73/E13/F0/T40 =
0xEA4. Karena itu pipeline-nya **bukan** `sprite2gba.py --pair-rule` — tidak
ada pasangan tile/palet yang perlu dibuktikan, dan byte-nya bukan body tile
datar. Keempatnya dimigrasikan dengan `font_container.py` (tabel disimpan
sebagai hex, hanya section D+E 32 B yang dirender ke PNG), lolos `verify`
MATCH, lalu `.incbin`-nya dialihkan ke `build/assets/*.bin`. Semantik isinya
tetap `unidentified`: yang terbukti hanya format container dan pembacanya,
bukan arti tabel A–F.

Rantai container berlanjut di 0x754xxx: `gUnk_08754674` (1432 B,
A1/B3/C3/D40/E1/F0/T4) dan `gUnk_08754C0C` (1352 B,
A2/B4/C2/D36/E2/F0/T5), keduanya juga menutup tepat di ukuran slice-nya.
Pembacanya tetap `func_0805E6CC`, dipanggil langsung di `func_08094AC0`
(baris 166592 dan 166585); `gUnk_08754C0C` juga dipakai `func_080CD578`
(code_809E804.s baris 95889) dan `func_080CEC00` (baris 98781). Keduanya
lolos `verify` MATCH lalu `.incbin`-nya dialihkan dengan `font_container.py`,
tetap `semantics: unidentified`.

`gUnk_08755154` (0x755154, 220 B, A1/B1/C1/D4/E1/F0/T1) menutup rangkaian ini
dengan jalur yang sama seperti `gUnk_0875352C`: baris 133387 memuatnya,
`func_08082264` (baris 132394) meneruskan argumen ke-4 ke `func_0805E6CC`.
Section D-nya berawalan byte yang sama dengan `gUnk_0875352C`, hanya section E
(1 tile) yang berbeda, jadi keduanya varian isi dari bentuk container yang
sama — tetap `unidentified` karena arti tabelnya belum terbukti.

### Blob 0x4F90CC dan 0x4FA9A0: glyph 8x12 1bpp/2bpp (terbuka)

Dua blob ini bukan container `func_0805E6CC` maupun tile 4bpp. Call site
`func_080D0D28` memilih record tetap: `gUnk_084F90CC` diindeks `r5*12` lalu
diteruskan ke `func_0300085C` (asm/code_809E804.s:103164), sedangkan
`gUnk_084FA9A0` diindeks `r5*24` dan diteruskan ke `func_03000714`
(baris 103149). Ukuran slice habis dibagi record (5844/12 = 487, 166128/24 =
6922). Codec `tools/assets/glyph_font.py` memetakan 1bpp (1 byte/baris, MSB =
piksel kiri) dan 2bpp (2 byte/baris = bitplane 0 lalu bitplane 1; piksel =
`p0 | p1<<1`). Bitplane terpisah, bukan nibble: glyph blok di blob 2bpp memuat
nibble 0xF, yang mustahil untuk 2bpp ber-nibble. Encode ulang keduanya byte
identik dengan slice ROM, jadi `.incbin` dialihkan ke `build/assets/*.bin`.

### Tabel indeks glyph 0x4FA7A0/0x523290: array s16, bukan kontainer

`func_080D0D28` memakai dua tabel sebelum menyentuh record glyph: kode satu
byte `0x00`–`0xFF` diindeks langsung ke `gUnk_084FA7A0` (256 entri, 512 B),
sedangkan kode dua byte dilewatkan `func_080D0CD4` lebih dulu lalu diindeks ke
`gUnk_08523290` (7938 entri, 15876 B). Keduanya dibaca `ldrsh`; nilai negatif
(praktiknya `-1`) berarti karakter itu tidak punya glyph, dan pemanggil
mengosongkan sel 8x12 dengan `memset 0x80`. Indeks hasil `func_080D0CD4` adalah
`189 * lead + (trail - 0x40)`: lead `0x81`–`0x9F` menempati offset 0–30 dan
lead `0xE0`–`0xEA` offset 31–41, masing-masing 189 trail — 42 × 189 = 7938,
tepat ukuran tabel. Indeks glyph-nya cocok dengan populasi record: maksimum
tabel 2-byte 6921, sedangkan `gUnk_084FA9A0` berisi 6922 glyph (0..6921),
dan maksimum tabel 1-byte 368 < 487 record `gUnk_084F90CC`.

Codec `tools/assets/glyph_index.py` (`kind: glyph_index`) menyimpan array itu
sebagai `source.entries` di metadata JSON, satu nilai per baris. `encode`
menolak jumlah entri yang tidak sama dengan `source.count` maupun
`rom.size/2`, dan nilai di luar s16; `verify` menuntut byte dan SHA-256 sama
dengan slice ROM. Semantik aset tetap `unidentified` karena yang terbukti
adalah peran tabel sebagai pemeta kode → indeks glyph, bukan arti tiap kode
karakter. `.incbin` kedua simbol sudah dialihkan ke `build/assets/*.bin`.

### Backlog blob tanpa metadata: urutan nilai

Blob di `asm/data/data_0813B288.s` yang belum punya metadata dinilai dengan
tiga bukti: parse struktural oleh kodek yang ada, round-trip byte identik ke
slice ROM, dan call site di `asm/`. Urutan nilai = byte ROM yang bisa langsung
dialihkan ke `build/assets/` dibagi biaya membuktikannya.

| Prioritas | Kelas | Bukti yang sudah ada | Kodek | Langkah berikut |
|---|---|---|---|---|
| 1 | container `func_0805E6CC` utuh | parse A–F+T berakhir tepat di ujung slice,
encode ulang byte identik, dan rujukan kode dekat `func_0805E6CC` |
`font_container.py` | selesai — lihat catatan di bawah |
| 2 | palet 32 B/512 B | semua u16 < 0x8000 dan `pal2gba.py` encode ulang byte
identik; hanya yang tapak salinannya menuju palette RAM yang dimigrasikan |
`pal2gba.py` | selesai — termasuk blok `+0xc0` yang tujuannya terbukti
palette RAM; lihat catatan di bawah |
| 3 | tile 4bpp kelipatan 32 B (`gUnk_0872FA9C`, …) | `tile4bpp.py` round-trip
byte identik, tetapi bentuk byte saja tidak cukup | `tile4bpp.py` | selesai —
kandidat non-tile dimodelkan sebagai tilemap/tabel atau disimpan `raw`
berjustifikasi; lihat catatan di bawah |
| 4 | stream `0x70` (lihat `ASET-0X70-PETA-BERKAS.md`) | dekoder ada
(`decompress.py`); encoder byte-identik untuk `000` dan atom0/lzss2 sudah
terbukti | `lz70.py` | sebagian — status naik per stream lewat
`stream_audit.py`; format huffman/lzss3 belum punya encoder |
| 5 | tabel indeks glyph s16 (`gUnk_084FA7A0`, `gUnk_08523290`) | 256 + 7938
entri `int16`, `ldrsh`, nilai < 0 = karakter tanpa glyph; `gUnk_08523290`
diindeks `func_080D0CD4` (`189*lead + trail - 0x40`) | `glyph_index.py` |
selesai — lihat catatan di bawah |

Kelas 1 sudah habis: setiap blob `data_0813B288.s` yang masih
`.incbin "baserom.gba"` diuji ulang dengan `font_container.parse` dan tidak ada
yang lolos lagi, jadi pemindai berikutnya tidak perlu mengulang kelas ini.
Bukti yang dicatat untuk gelombang terakhir hanya parse + round-trip + rujukan
kode, karena itu semantiknya tetap `unidentified` (arti tabel A–F belum
terbukti). Satu blob memakai jalur tidak langsung: `gUnk_0874EE38` tidak
memanggil `func_0805E6CC` sendiri, melainkan lewat `func_08082264` — jalur yang
sama dengan `gUnk_0875352C` dan `gUnk_08755154`.

Saat memindai kandidat, pola regex harus toleran terhadap baris `.global` yang
membawa komentar `@…`: `gUnk_08738144` ditulis `@gCalendarFont?` dan lolos
parse penuh, tetapi pola yang menuntut `.global <simbol>` bersih melewatkannya
sehingga kelasnya tampak kurang satu.

Kelas 2 tuntas untuk blok yang tapak salinannya terbukti, dan batasnya adalah
bukti pemuat, bukan bentuk byte.
Bukti yang diterima: tapak salinan yang tujuannya konstanta palette RAM
(`0x05000000`–`0x050003FF`), lewat `func_08008E64` (`r0` sumber, `r1` tujuan,
`r2` panjang), `func_08008F0C` (`r0` antrean, `r1` sumber, **`r2` tujuan**,
`r3` panjang), atau `Unpack` (`r1` tujuan). Tujuan boleh berupa basis palette
RAM ditambah indeks slot (`0x05000200 + slot*0x20`), asalkan basisnya konstanta
itu. Bukti disimpan di field `evidence` metadata aset, jadi tidak perlu
ditelusuri ulang dari asm. `asset_verify.py` ikut menjaga bukti itu: kutipan
`<berkas>.s:<baris>` di evidence dicocokkan dengan asm, sehingga evidence yang
menulis tujuan tetap padahal tapak salinannya menambah indeks slot (atau
sebaliknya) menjadi masalah gate, bukan sekadar catatan.

Palet sprite 0x75194C–0x75346C (32 × 32 B) memakai jalur antar-fungsi yang
sama: definisi sprite menulis pointer palet ke `struct+0xc` (tile di `+8`),
struct 0x10 B itu ditambahkan ke list `obj+0x594`, lalu `func_08076EA8`
membaca `entry+0xc` dan menyalin 0x20 B ke `0x05000200 + slot*0x20`
(`code_0803EE94.s:111004`, `func_08008F0C`). Tiga bentuk penulisan diterima:
store langsung `str r0, [rN, #0xc]`, struct stack yang `+0xc`-nya diisi dari
`sp+0x14` lalu disalin ke list (baris 75043), atau argumen kelima
`func_08063EB8` yang menulisnya ke `struct+0xc` (baris 71095) sebelum menambah
ke list yang sama. Bukti tiap aset mencatat baris penulisnya **dan** baris
111004; `asset_verify.py` menerima evidence yang menyebut basis + slot karena
tujuan salinan ditambah `r8` (slot × 0x20), bukan konstanta tetap.

Blob yang salah satu u16-nya `>= 0x8000` tetap bukan palet (bit 15 bukan
bagian BGR555) dan tidak dihitung sebagai kandidat.

Kelas 3 disortir dengan syarat yang sama seperti kelas 2: tapak salinan harus
menuju VRAM (`0x06000000`–`0x06017FFF`) dan panjang salinan harus sama dengan
ukuran slice. Yang lolos hanya `gUnk_0869A0A4` (143 tile, `func_080A748C`
menyalin 0x11E0 B ke `0x06006E20`); sisanya parkir dengan alasan yang terbaca
dari tapak salinannya:

- `gUnk_0872DDE4`, `gUnk_0872FA9C`, `gUnk_087399C4`, `gUnk_0873CBF4`,
  `gUnk_087400E4`, `gUnk_08747A14`, `gUnk_0874F2EC` menuju palette RAM
  (`0x05000000`/`0x05000020`), jadi milik kelas palet. Panjang salinannya juga
  tidak sama dengan ukuran slice (0x200 lebih besar, 0x40 lebih kecil), artinya
  slice itu bukan blok utuh yang disalin — sumber kanonik per-simbol akan
  memotong data yang ikut tersalin. Pasangan `gUnk_08757AE0`/`gUnk_0875A358`
  (192 B, salinan 0xC0 ke `0x05000020`) ukurannya cocok sehingga sudah
  dimigrasikan sebagai palet: keduanya varian isi yang dipilih `func_08077EC0`
  menurut `r5`, dan pilihan itu dicatat di `evidence` masing-masing aset.
- `gUnk_086D6528`, `gUnk_086EAD8C`, `gUnk_086DE7F4` berisi entri map u16
  (`0x93ff`, deret `0x92a0…`, `0x93xx` berurutan), bukan tile 4bpp.
  `gUnk_086D6458` seluruhnya `0x93ff` dan tidak dirujuk kode. Dua stamp 4x4
  yang seluruh slice-nya habis dibaca (`gUnk_086EAD64`, `gUnk_086DD690`) dan
  cluster BG map di §`func_08077E64` sudah dimigrasikan sebagai tilemap;
  `gUnk_08757BAC`/`gUnk_08757BD8` termasuk cluster itu.
- `gUnk_086D6548` disalin dari dalam buffer objek (bukan dari awal simbol),
  jadi slice simbol bukan blok utuh yang disalin (§cluster BG map).
- Sisa blob di luar manifest tetap parkir, dengan alasan dari asm:
  `gUnk_0872DDE4` dan `gUnk_0874F2EC` disalin `0x200` B ke `0x05000000`
  padahal slice-nya hanya 96 B (`code_809E804.s:8450`/`49978`), jadi slice
  bukan blok utuh yang disalin. `gUnk_0872FA9C`, `gUnk_087399C4`,
  `gUnk_0873CBF4`, `gUnk_087400E4`, `gUnk_08747A14` juga menuju palette RAM
  dengan panjang salinan 0x200/0x40 yang tidak sama dengan ukuran slice.
- Blok `+0xc0` tidak lagi parkir: `gUnk_086EACE4`–`gUnk_086EAD44` disalin
  0x20 B ke `[base+0x1c+idx*4]+0xC0`; evidence tiap aset mencatat baris `ldr`
  (`code_809E804.s:22343` dan seterusnya) plus `bl func_08008E64` (`:22357`),
  jadi tujuannya palette RAM dan keempatnya sudah dimigrasikan sebagai palet.
- `gUnk_08757BAC`/`gUnk_08757BD8` ditulis `func_08077E64` lewat `ldrh`/`strh`
  sebagai entri BG map, bukan palet; keduanya sudah dimigrasikan sebagai
  tilemap di §`func_08077E64`.

Angka pasti per kelas tidak ditulis di sini — ambil dari
`tools/scripts/asset_inventory.py --json` dan `assets/manifest.json` supaya
tidak cepat basi.

### `gUnk_08755230`: tilemap BG 30x13, kelas baru `tilemap`

Blob sesudah rantai container (0x755230, 780 B) bukan container: kelipatan 2
tetapi bukan 220/236 B, dan `func_08077EC0` (baris 112762) memuatnya lalu
memanggil `func_08077E34` (baris 112650) dengan `(obj, 0x1e, blob)`. Fungsi
itu penyalin peta: `ldrh`/`strh` per entri selama 30 kolom (`cmp r1, #0x1d`)
dan 13 baris (`cmp r3, #0xc`) ke `0x06000000 + (0x1e << 11) + baris*0x40`.
Jadi 30×13×2 = 780 B habis tepat, dan argumen `0x1e` adalah **nomor
screenblock tujuan**, bukan lebar grid — membaca argumen itu sebagai lebar
memotong blob jadi 30×26. `gUnk_0875553C` adalah pasangan bentuk yang sama
untuk screenblock `0x1d`.

Kelasnya karena itu `kind: tilemap`: source kanoniknya grid entri u16 di JSON
(`entries`, urut baris) + `tilemap.width/height`, bukan PNG. Render peta butuh
tileset pasangan yang belum terbukti, sedangkan yang dibuktikan call site
hanyalah grid dan tujuan salinnya. `map2bin.py encode` menolak grid yang
jumlah entrinya tidak sama dengan `width*height` **atau** dengan
`rom.size`/2, jadi lebar tebakan tidak bisa lolos; `verify` membandingkan
byte + SHA-256 dengan slice ROM. Isinya berbit palet 1/2 dengan indeks tile
berurutan 0..413, tetapi arti tiap entri tetap `semantics: unidentified`.

### Stamp 4x4 dari `func_080AA9C8`: dua yang habis, blob besar yang bukan tabel

`func_080AA9C8` (baris 24421) memilih tabel menurut `[obj+4]`, lalu menulis
stamp ke lapis peta. Di `.L080AAB00` (baris 24565) id `0xc`/`0xd`/`0xe`/`0xf`
memilih `gUnk_086EAD64`/`gUnk_086EAD8C`/`gUnk_086DD690`/`gUnk_086DE7F4`,
dengan `sl=4` (baris 24603) dan tinggi 4 (baris 24606). Loop baris 24672 dan
kolom 24686 membaca `ldrh r1, [r4]` (baris 24701) berurutan, lalu menulis
`strh r1, [r0]` (baris 24702) ke lapis `[r6,#0x14]` (baris 24699) pada
`(x0+kolom, y0+baris)`: 16 entri u16 = 32 B, urut baris, lebar 4.

Yang lolos adalah simbol yang slice-nya tepat sebesar grid yang dibaca:
`gUnk_086EAD64` (kasus `0xc`, baris 24593) dan `gUnk_086DD690` (kasus `0xe`,
baris 24582) 4x4 = 32 B, serta `gUnk_086DC54C` (kasus `0xe`, baris 24622) dan
`gUnk_086DD6B0` (kasus `0xf`, baris 24628) 6x4 = 48 B di `.L080AAB54`
(`sl=6` baris 24631, 4 baris baris 24633). Keempatnya kini `kind: tilemap`
(lebar 4 atau 6, tinggi 4, urut baris). Klaim sesi sebelumnya bahwa dua label
6x4 itu hanya 32 B **salah**: label di asm memang `0x30`, dan simbol
berikutnya (`gUnk_086DC57C`/`gUnk_086DD6E0`) tepat di `+0x30`, jadi batas
simbol benar dan tidak ada byte yang bocor ke label sebelah.

`gUnk_086EAD8C` (33.312 B = 1041 x 32) dan
`gUnk_086DE7F4` (50.408 B = 1575 x 32 + 8) **bukan** tabel 4x4 walau ukurannya
kelipatan 32: hanya 32 B pertama yang dibaca stamp, jadi blok-blok sisanya
tidak punya pembaca dan bentuknya tidak boleh ditebak dari kelipatan itu
(bentuk sebenarnya di paragraf berikut).

Struktur sisanya juga bukan tabel 4x4. Descriptor 0x18 B yang dibaca
`func_080A5BD8` (baris 14381) berisi `u8` lebar (14397), `u8` tinggi (14398),
tiga pointer layer u16 di `+4/+8/+0xc` (14401), blockmap di `+0x10`, dan tabel
blok di `+0x14` (14448); fungsi itu menyalin `lebar x tinggi` entri per layer
dengan `memcpy` (baris 14436). Contoh `gUnk_08106A7C` (data) berukuran 4x6
dengan dua layer 48 B di `gUnk_086EAD8C+3184` dan `+3232` — dua layer 4x6 yang
bersebelahan, bukan blok 32 B. Pointer descriptor itu tidak kelipatan 32, dan
`gUnk_086DE7F4` juga dirujuk pada offset 4x6/17x20 dan ukuran campuran. Jadi
keduanya bank layer peta berukuran variabel yang dirujuk per offset.

Keduanya punya source `kind: tilemap_bank`
(`tools/assets/tilemap_bank.py`) dan sudah dimigrasikan (`status: rom-exact`).
Source-nya satu JSON per simbol yang memuat `layers` (offset, lebar, tinggi,
descriptor, slot, entri urut baris) dan `raw`
(hex byte yang tidak dirujuk); `encode` menolak source yang tidak menutup
seluruh `rom.size`, tumpang tindih, atau jumlah entri tidak sama dengan
`lebar x tinggi`. Layer diambil dari tabel descriptor `0x10692C`-`0x1070DC`
(record `0x18`) yang menunjuk ke dalam blob, sehingga offset/ukuran tiap layer
tidak ditebak. `.incbin` **tidak perlu dipecah** di offset layer: pointer
descriptor adalah angka absolut, dan (kalau nanti byte `raw` sudah terbukti)
mengganti satu simbol utuh dengan binary hasil encode menjaga semua offset.
Split hanya akan menambah label tanpa mengubah byte; yang penting source
mencatat offset tiap layer. Byte yang tidak dirujuk tetap `raw` (padding
alignment/ekor) dan tidak diklaim sebagai layer: `encode` tetap menghasilkan
byte identik, dan angka proven-nya dijaga blok `coverage` tiap JSON +
`asset_verify`, bukan ditulis di sini.

Alasan parkir stamp lain, semuanya dari loop yang sama:

- `gUnk_086DCC88`/`gUnk_086DDDEC` (layer 4x4 di offset 0) dan
  `gUnk_086DC57C`/`gUnk_086DD6E0` (layer 2x2) tidak lagi parkir karena
  coverage: sisanya adalah blok `tile_animations` yang kini bersumber PNG
  indeks 0..15 (`tiles_png`), dan byte yang tidak terbaca hanya padding yang
  tercatat. Angka proven tiap aset ada di blok `coverage` masing-masing JSON
  dan dihitung ulang `asset_verify`; jangan menyalinnya ke dokumen.
  Dua stamp 2x2 yang seluruh slice-nya habis dibaca (`gUnk_086EACDC`,
  `gUnk_086EAD84`) tetap dihitung sebagai tilemap di §`func_08077E64`.

### Cluster BG map `func_08077E64`

`func_08077E64(tilemap, x, y, ?, lebar, tinggi, src)` menyalin `lebar x tinggi`
entri u16 dari `src` ke BG map di `0x06000000 + x*0x800 + y*2`, kolom demi
kolom. Argumennya terbaca dari call site: `r3` = x, `sp+0x1c` = tinggi,
`sp+0x20` = lebar, `sp+0x24` = src (loop 112870-112890). Sembilan slice di
`code_0803EE94.s` cocok persis dengan `lebar*tinggi` dari call site, termasuk
tiga slice 20 B yang berisi 3x3 entri + satu padding nol dan dua slice 32 B
berisi 3x5 + satu padding nol. Kesembilannya dimigrasikan sebagai
`kind: tilemap` dengan `tilemap.order="column"`; `map2bin.py` sekarang mencatat
padding/urutan eksplisit dan tetap menolak jumlah entri yang tidak cocok.
`gUnk_086EACDC`/`gUnk_086EAD84` (2x2) memakai loop yang sama di
`func_080AA9C8` dan juga sudah dimigrasikan.

Dua pola pointer literal melengkapi cluster ini. `method_0800AF20`
mengembalikan `gUnk_086D6518`/`gUnk_086D6520` untuk field 0/1, lalu
`func_080AA6D0` menyalin `src+0` dan `src+4` ke dua baris peta: 2x2, seluruh
8 B. Untuk field 2 (`gUnk_086D6528`) call site hanya menyalin 8 B pertama,
tetapi slice 32 B habis dibagi 8 sehingga source kanoniknya dimodelkan
`tilemap_bank` berisi empat record 2x2 — record 0 yang ber-call-site
langsung, tiga sisanya tanpa pembaca. Byte-nya `rom-exact` karena source
menutup seluruh slice; semantik record 1–3 tetap `unidentified` dan tidak
diklaim decoded. `func_0809E0AC`
mengembalikan `gUnk_086DC3C4`–`gUnk_086DC3E8` untuk field 0–3, dan
`func_080AA540` menyalin `src+0/+4/+8` masing-masing 4 B ke tiga baris:
2x3, seluruh 12 B. Field 4 adalah blob terkompresi `gUnk_086DC3F4`, bukan
tilemap: prefix 12 B (stempel 3x2) + tiga stream `0x70` yang ditunjuk
descriptor `0x08106860`. Blob ini dimigrasikan sebagai `kind: compressed_bank`
lewat `compressed_bank.py`; pohon huffman dan tangga LZSS dipakai sebagai
header asli, sehingga 344 B-nya byte-identik.

Sisa blob di sekitar cluster ini belum punya lebar/tinggi yang terbaca:
`gUnk_086D6368`/`gUnk_086D6548` disalin 0x60 B dari offset `+0x100`/`+0x160`
di dalam buffer objek, bukan dari awal simbol, jadi slice simbol bukan blok
utuh yang disalin.

### Rantai sprite 9-tile 0x750E4C–0x7517AC

Sembilan blob 9-tile di rentang ini dipakai tiga fungsi `code_0803EE94.s` yang
menyalin tile 0x120 B ke VRAM (`func_08008F0C`) lalu palet 0x20 B ke slot
palet: `func_080645F0` (tile `gUnk_08750E4C`, `gUnk_08750F8C`, `gUnk_087517AC`
+ palet `gUnk_08750F6C`), `func_0806644C` (`gUnk_087510AC`, `gUnk_0875166C` +
`gUnk_0875178C`), dan `func_08068344` (`gUnk_087511CC`, `gUnk_0875154C`,
`gUnk_0875130C`, `gUnk_0875142C` + `gUnk_087512EC`).

Karena palet dimuat di baris jauh dari tile-nya, pasangannya dicatat
`--pair-rule asm-branch` dengan `--pair-lines`/`--pair-asm`; `pair.reason`
menyebut satu fungsi dan tujuan DMA kedua sisi, sebab palet di sini dipakai
bersama oleh beberapa tile dalam satu batch, bukan pasangan 1:1.

Dua di antaranya semula diklasifikasi `palet` 144 warna (`gUnk_087510AC`,
`gUnk_087511CC`) karena isinya 288 B nilai u16 di bawah 0x8000. Call site
membuktikannya tile: keduanya di-DMA 0x120 B ke VRAM `0x060014A0` /
`0x06001380`, bukan ke `0x05xxxxxx`. Override `VERIFIED_LAYOUT` di
`raw_assets.py` mencatat bukti itu supaya klasifikasi isi tidak menang atas
call site.
