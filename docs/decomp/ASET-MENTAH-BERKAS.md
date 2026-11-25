# Aset mentah `data_0813B288.s`

**Dihasilkan otomatis**, jangan disunting tangan: `python3 tools/scripts/raw_assets.py`. Sumber daftar dan offset: `asset_inventory.analyze()` (`ASET-INVENTARIS.md`); yang dicakup di sini hanya blob yang bukan format `0x70` (lihat `ASET-0X70-PETA-BERKAS.md` untuk yang terkompresi).

## Cara memperbarui

```sh
python3 tools/scripts/raw_assets.py           # tulis PNG + manifest + dokumen
python3 tools/scripts/raw_assets.py --check   # exit 1 bila dokumen basi
```

## Ringkasan

| kelompok | blob | bisa dirender |
|---|---|---|
| palet | 64 | 64 |
| sprite/OBJ | 86 | 67 |
| tilemap | 15 | 15 |
| gambar terkompresi | 3 | 0 |
| tabel | 63 | 0 |
| **total** | **231** | **146** |

Kelompok ditentukan dari isi, bukan nama simbol, kecuali `gambar terkompresi` (lihat di bawah): palet = semua u16 < 0x8000 dan <= 1 KB; sprite/OBJ = kelipatan 32 B (tile 4bpp), ditambah blob non-32 B yang setelah header/ekor <= 31 B menyisakan tile dengan >= 13% nibble nol dan <= 12 indeks/tile; tilemap = entri 16-bit dengan bit 10-15 konsisten; sisanya tabel/struct dan tidak dirender. Kelompok `gambar terkompresi` **bukan** hasil deteksi isi: hanya blob yang bank stream `0x70`-nya terbukti dari call site (daftar override di `VERIFIED_LAYOUT`) yang masuk ke sana, karena rantai `0x70` yang berakhir tepat di ujung blob juga muncul di blob lain yang terbukti container. Offset/ekor yang dipotong dicatat di manifest (`tile_offset`/`tile_trim`). Override `layout: container` menandai wadah font/objek yang sudah diverifikasi dari call site; isinya bukan tile 4bpp datar dan tidak dirender sebagai lembar tile. Untuk stamp peta, field `map_width` di manifest berisi lebar kolom dari loader (`func_080AA9C8`), bukan tebakan pembagi; hash PNG memakai lebar itu. Batas ini heuristik, bukan bukti format; override call-site adalah bukti terpisah.

## Rantai `0x70` valid di blob non-32 B

Pemeriksa silang untuk kelompok `gambar terkompresi`: 94 blob non-32 B diuji apakah memuat rantai stream `0x70` yang berakhir tepat di ujung blob, lalu hasilnya dibandingkan dengan kelompoknya. Tabel ini **bukan** penentu kelompok (lihat alasannya di atas); gunanya memastikan tidak ada bank tertanam yang lolos dari kelompok.

- blob non-32 B: **94**
- dengan rantai `0x70` berakhir di ujung: **4**
- bank terbukti: **3**, container terbukti: **1**, belum terbukti: **0**

| simbol | ukuran | sisa %32 | kelompok | awal | stream | packed | status |
|---|---:|---:|---|---:|---:|---:|---|
| `gUnk_0869B284` | 238212 | 4 | gambar terkompresi | 308 | 119 | 237904 | bank terbukti |
| `gUnk_086D74F8` | 20172 | 12 | gambar terkompresi | 96 | 25 | 20076 | bank terbukti |
| `gUnk_087409E4` | 9844 | 20 | sprite/OBJ | 4112 | 20 | 5732 | container terbukti |
| `gUnk_086DC3F4` | 344 | 24 | gambar terkompresi | 12 | 3 | 332 | bank terbukti |

Tidak ada kandidat `belum terbukti`: setiap rantai sudah dijelaskan penunjuk kode/tabel (bank atau container).

## palet (64 blob)

Dirender sebagai kartu swatch 16 warna per baris, warna GBA 5-5-5.

| simbol | offset | ukuran | catatan | bisa dirender | PNG |
|---|---|---|---|---|---|
| `gUnk_08529794` | `0x529794` | 512 | 256 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08529794_512_palet.png) |
| `gUnk_0852CA40` | `0x52CA40` | 512 | 256 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0852CA40_512_palet.png) |
| `gUnk_08731940` | `0x731940` | 512 | 256 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08731940_512_palet.png) |
| `gUnk_0874E330` | `0x74E330` | 512 | 256 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0874E330_512_palet.png) |
| `gUnk_0872FA9C` | `0x72FA9C` | 352 | 176 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0872FA9C_352_palet.png) |
| `gUnk_0873CBF4` | `0x73CBF4` | 192 | 96 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0873CBF4_192_palet.png) |
| `gUnk_087400E4` | `0x7400E4` | 192 | 96 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087400E4_192_palet.png) |
| `gUnk_08757AE0` | `0x757AE0` | 192 | 96 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08757AE0_192_palet.png) |
| `gUnk_0875A358` | `0x75A358` | 192 | 96 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875A358_192_palet.png) |
| `gUnk_087399C4` | `0x7399C4` | 160 | 80 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087399C4_160_palet.png) |
| `gUnk_0872DDE4` | `0x72DDE4` | 96 | 48 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0872DDE4_96_palet.png) |
| `gUnk_08747A14` | `0x747A14` | 96 | 48 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08747A14_96_palet.png) |
| `gUnk_0874F2EC` | `0x74F2EC` | 96 | 48 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0874F2EC_96_palet.png) |
| `gUnk_086EACE4` | `0x6EACE4` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_086EACE4_32_palet.png) |
| `gUnk_086EAD04` | `0x6EAD04` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_086EAD04_32_palet.png) |
| `gUnk_086EAD24` | `0x6EAD24` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_086EAD24_32_palet.png) |
| `gUnk_086EAD44` | `0x6EAD44` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_086EAD44_32_palet.png) |
| `gUnk_0872D5AC` | `0x72D5AC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0872D5AC_32_palet.png) |
| `gUnk_0874EB40` | `0x74EB40` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0874EB40_32_palet.png) |
| `gUnk_08750C6C` | `0x750C6C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08750C6C_32_palet.png) |
| `gUnk_08750F6C` | `0x750F6C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08750F6C_32_palet.png) |
| `gUnk_087512EC` | `0x7512EC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087512EC_32_palet.png) |
| `gUnk_0875178C` | `0x75178C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875178C_32_palet.png) |
| `gUnk_0875194C` | `0x75194C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875194C_32_palet.png) |
| `gUnk_087519EC` | `0x7519EC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087519EC_32_palet.png) |
| `gUnk_08751A8C` | `0x751A8C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751A8C_32_palet.png) |
| `gUnk_08751B2C` | `0x751B2C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751B2C_32_palet.png) |
| `gUnk_08751BCC` | `0x751BCC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751BCC_32_palet.png) |
| `gUnk_08751C6C` | `0x751C6C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751C6C_32_palet.png) |
| `gUnk_08751D0C` | `0x751D0C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751D0C_32_palet.png) |
| `gUnk_08751DAC` | `0x751DAC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751DAC_32_palet.png) |
| `gUnk_08751E4C` | `0x751E4C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751E4C_32_palet.png) |
| `gUnk_08751EEC` | `0x751EEC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751EEC_32_palet.png) |
| `gUnk_08751F8C` | `0x751F8C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08751F8C_32_palet.png) |
| `gUnk_0875202C` | `0x75202C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875202C_32_palet.png) |
| `gUnk_087520CC` | `0x7520CC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087520CC_32_palet.png) |
| `gUnk_0875216C` | `0x75216C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875216C_32_palet.png) |
| `gUnk_0875220C` | `0x75220C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875220C_32_palet.png) |
| `gUnk_087522AC` | `0x7522AC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087522AC_32_palet.png) |
| `gUnk_0875234C` | `0x75234C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875234C_32_palet.png) |
| `gUnk_087523EC` | `0x7523EC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087523EC_32_palet.png) |
| `gUnk_0875248C` | `0x75248C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875248C_32_palet.png) |
| `gUnk_0875252C` | `0x75252C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875252C_32_palet.png) |
| `gUnk_087525CC` | `0x7525CC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087525CC_32_palet.png) |
| `gUnk_0875266C` | `0x75266C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875266C_32_palet.png) |
| `gUnk_0875270C` | `0x75270C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875270C_32_palet.png) |
| `gUnk_087527AC` | `0x7527AC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087527AC_32_palet.png) |
| `gUnk_0875284C` | `0x75284C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875284C_32_palet.png) |
| `gUnk_087528EC` | `0x7528EC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087528EC_32_palet.png) |
| `gUnk_0875298C` | `0x75298C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875298C_32_palet.png) |
| `gUnk_08752AAC` | `0x752AAC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08752AAC_32_palet.png) |
| `gUnk_08752ECC` | `0x752ECC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08752ECC_32_palet.png) |
| `gUnk_08752F6C` | `0x752F6C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08752F6C_32_palet.png) |
| `gUnk_0875300C` | `0x75300C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875300C_32_palet.png) |
| `gUnk_087530AC` | `0x7530AC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087530AC_32_palet.png) |
| `gUnk_0875314C` | `0x75314C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875314C_32_palet.png) |
| `gUnk_087531EC` | `0x7531EC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087531EC_32_palet.png) |
| `gUnk_0875328C` | `0x75328C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875328C_32_palet.png) |
| `gUnk_0875332C` | `0x75332C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875332C_32_palet.png) |
| `gUnk_087533CC` | `0x7533CC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_087533CC_32_palet.png) |
| `gUnk_0875346C` | `0x75346C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875346C_32_palet.png) |
| `gUnk_0875350C` | `0x75350C` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_0875350C_32_palet.png) |
| `gUnk_08757BAC` | `0x757BAC` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08757BAC_32_palet.png) |
| `gUnk_08757BD8` | `0x757BD8` | 32 | 16 warna (semua u16 < 0x8000) | ya | [png](../../assets/raw/png/gUnk_08757BD8_32_palet.png) |

## sprite/OBJ (86 blob)

Dirender sebagai lembar tile 4bpp abu-abu indeks (tanpa palet; warna asli butuh palet OBJ terpisah). Entri `layout: container` adalah wadah font/objek terverifikasi call-site dan sengaja tidak dirender.

| simbol | offset | ukuran | catatan | bisa dirender | PNG |
|---|---|---|---|---|---|
| `gUnk_0858BA28` | `0x58BA28` | 898616 | count 2551 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_0852D984` | `0x52D984` | 385188 | count 184 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_086678A0` | `0x6678A0` | 196736 | 6148 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_086678A0_196736_sprite.png) |
| `gUnk_084FA9A0` | `0x4FA9A0` | 166128 | glyph 24 B; func_080D0D28 indeks r5*24 -> func_03000714 | tidak | - |
| `gUnk_086F2FAC` | `0x6F2FAC` | 31444 | count 4 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_0871EF00` | `0x71EF00` | 28320 | 885 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0871EF00_28320_sprite.png) |
| `gUnk_08731B40` | `0x731B40` | 26116 | count 20 + tabel; @ChickenPortraits, func_0805E6CC, bukan tile datar | tidak | - |
| `gUnk_08729460` | `0x729460` | 10756 | count 1 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_087409E4` | `0x7409E4` | 9844 | count 1 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_084F90CC` | `0x4F90CC` | 5844 | glyph 12 B; func_080D0D28 indeks r5*12 -> func_0300085C | tidak | - |
| `gUnk_0874F34C` | `0x74F34C` | 5012 | count 22 + tabel; func_080A220C -> func_0805E6CC, bukan tile datar | tidak | - |
| `gUnk_0871D51C` | `0x71D51C` | 4748 | count 11 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_08697920` | `0x697920` | 4576 | 143 tile 4bpp (bukan palet: 25% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08697920_4576_sprite.png) |
| `gUnk_08698E14` | `0x698E14` | 4576 | 143 tile 4bpp (bukan palet: 19% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08698E14_4576_sprite.png) |
| `gUnk_0869A0A4` | `0x69A0A4` | 4576 | 143 tile 4bpp (bukan palet: 25% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_0869A0A4_4576_sprite.png) |
| `gUnk_08728320` | `0x728320` | 4188 | count 7 + tabel; func_0805E6CC (font/objek), bukan tile datar | tidak | - |
| `gUnk_0872DE44` | `0x72DE44` | 4148 | container func_0805E6CC: A27/B27/C6/D106/E1/F0/T27; tile 4bpp hanya D+E (107 tile), sisa tabel | tidak | - |
| `gUnk_0875A440` | `0x75A440` | 4100 | 128 tile 4bpp dipotong 4 B ekor; 62% nibble nol, 2.7 indeks/tile | ya | [png](../../assets/raw/png/gUnk_0875A440_4100_sprite.png) |
| `gUnk_087537D0` | `0x7537D0` | 3748 | container func_0805E6CC: A20/B40/C11/D73/E13/F0/T40; func_0805E6CC dipanggil langsung di baris 96720 dan 113849, bukan tile datar | tidak | - |
| `gUnk_086D5508` | `0x6D5508` | 3680 | 115 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_086D5508_3680_sprite.png) |
| `gUnk_086D6698` | `0x6D6698` | 3680 | 115 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_086D6698_3680_sprite.png) |
| `gUnk_08667060` | `0x667060` | 2112 | 66 tile 4bpp (bukan palet: 56% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08667060_2112_sprite.png) |
| `gUnk_08754674` | `0x754674` | 1432 | container func_0805E6CC: A1/B3/C3/D40/E1/F0/T4; func_0805E6CC dipanggil langsung di baris 166592 (func_08094AC0), bukan tile datar | tidak | - |
| `gUnk_08754C0C` | `0x754C0C` | 1352 | container func_0805E6CC: A2/B4/C2/D36/E2/F0/T5; func_0805E6CC dipanggil langsung di baris 166585, code_809E804.s 95889/98781, bukan tile datar | tidak | - |
| `gUnk_08750C8C` | `0x750C8C` | 448 | 14 tile 4bpp (bukan palet: 22% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08750C8C_448_sprite.png) |
| `gUnk_08750E4C` | `0x750E4C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08750E4C_288_sprite.png) |
| `gUnk_08750F8C` | `0x750F8C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08750F8C_288_sprite.png) |
| `gUnk_087510AC` | `0x7510AC` | 288 | 9 tile 4bpp: func_0806644C menyalin 0x120 B ke VRAM 0x060014A0 (func_08008F0C); klasifikasi isi menyebut palet 144 warna, call site membuktikannya tile | ya | [png](../../assets/raw/png/gUnk_087510AC_288_sprite.png) |
| `gUnk_087511CC` | `0x7511CC` | 288 | 9 tile 4bpp: func_08068344 menyalin 0x120 B ke VRAM 0x06001380 (func_08008F0C); klasifikasi isi menyebut palet 144 warna, call site membuktikannya tile | ya | [png](../../assets/raw/png/gUnk_087511CC_288_sprite.png) |
| `gUnk_0875130C` | `0x75130C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875130C_288_sprite.png) |
| `gUnk_0875142C` | `0x75142C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875142C_288_sprite.png) |
| `gUnk_0875154C` | `0x75154C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875154C_288_sprite.png) |
| `gUnk_0875166C` | `0x75166C` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875166C_288_sprite.png) |
| `gUnk_087517AC` | `0x7517AC` | 288 | 9 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087517AC_288_sprite.png) |
| `gUnk_087536E4` | `0x7536E4` | 236 | container func_0805E6CC: A2/B4/C3/D2/E1/F0/T4; func_0805E6CC dipanggil langsung di code_809E804.s baris 84854, bukan tile datar | tidak | - |
| `gUnk_0875352C` | `0x75352C` | 220 | container func_0805E6CC: A1/B1/C1/D4/E1/F0/T1; func_08082264 (baris 133363 -> 132394) meneruskannya ke func_0805E6CC, bukan tile datar | tidak | - |
| `gUnk_08753608` | `0x753608` | 220 | container func_0805E6CC: A1/B1/C1/D4/E1/F0/T1; func_0805E6CC dipanggil langsung di baris 130129, bukan tile datar | tidak | - |
| `gUnk_08755154` | `0x755154` | 220 | container func_0805E6CC: A1/B1/C1/D4/E1/F0/T1; func_08082264 (baris 133387 -> 132394) meneruskannya ke func_0805E6CC, bukan tile datar | tidak | - |
| `gUnk_087518CC` | `0x7518CC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087518CC_128_sprite.png) |
| `gUnk_0875196C` | `0x75196C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875196C_128_sprite.png) |
| `gUnk_08751A0C` | `0x751A0C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751A0C_128_sprite.png) |
| `gUnk_08751AAC` | `0x751AAC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751AAC_128_sprite.png) |
| `gUnk_08751B4C` | `0x751B4C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751B4C_128_sprite.png) |
| `gUnk_08751BEC` | `0x751BEC` | 128 | 4 tile 4bpp (bukan palet: 18% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08751BEC_128_sprite.png) |
| `gUnk_08751C8C` | `0x751C8C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751C8C_128_sprite.png) |
| `gUnk_08751D2C` | `0x751D2C` | 128 | 4 tile 4bpp (bukan palet: 24% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08751D2C_128_sprite.png) |
| `gUnk_08751DCC` | `0x751DCC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751DCC_128_sprite.png) |
| `gUnk_08751E6C` | `0x751E6C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751E6C_128_sprite.png) |
| `gUnk_08751F0C` | `0x751F0C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751F0C_128_sprite.png) |
| `gUnk_08751FAC` | `0x751FAC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08751FAC_128_sprite.png) |
| `gUnk_0875204C` | `0x75204C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875204C_128_sprite.png) |
| `gUnk_087520EC` | `0x7520EC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087520EC_128_sprite.png) |
| `gUnk_0875218C` | `0x75218C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875218C_128_sprite.png) |
| `gUnk_0875222C` | `0x75222C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875222C_128_sprite.png) |
| `gUnk_087522CC` | `0x7522CC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087522CC_128_sprite.png) |
| `gUnk_0875236C` | `0x75236C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875236C_128_sprite.png) |
| `gUnk_0875240C` | `0x75240C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875240C_128_sprite.png) |
| `gUnk_087524AC` | `0x7524AC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087524AC_128_sprite.png) |
| `gUnk_0875254C` | `0x75254C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875254C_128_sprite.png) |
| `gUnk_087525EC` | `0x7525EC` | 128 | 4 tile 4bpp (bukan palet: 16% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_087525EC_128_sprite.png) |
| `gUnk_0875268C` | `0x75268C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875268C_128_sprite.png) |
| `gUnk_0875272C` | `0x75272C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875272C_128_sprite.png) |
| `gUnk_087527CC` | `0x7527CC` | 128 | 4 tile 4bpp (bukan palet: 15% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_087527CC_128_sprite.png) |
| `gUnk_0875286C` | `0x75286C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875286C_128_sprite.png) |
| `gUnk_0875290C` | `0x75290C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875290C_128_sprite.png) |
| `gUnk_087529AC` | `0x7529AC` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B ke VRAM slot 0x72; BG map tile 0x72 ditulis func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40) | ya | [png](../../assets/raw/png/gUnk_087529AC_128_sprite.png) |
| `gUnk_08752A2C` | `0x752A2C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08752A2C_128_sprite.png) |
| `gUnk_08752ACC` | `0x752ACC` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x80 B (tile + padding) ke VRAM slot 0x77; BG map tile 0x77 ditulis func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40) | ya | [png](../../assets/raw/png/gUnk_08752ACC_128_sprite.png) |
| `gUnk_08752B4C` | `0x752B4C` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B ke VRAM slot 0x71; BG map tile 0x71 ditulis func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40) | ya | [png](../../assets/raw/png/gUnk_08752B4C_128_sprite.png) |
| `gUnk_08752BCC` | `0x752BCC` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B ke VRAM slot 0x5A; BG map tile 0x5A ditulis func_0804E9F4 dengan indeks palet 1 -> gUnk_08752AAC (bank 0x20) | ya | [png](../../assets/raw/png/gUnk_08752BCC_128_sprite.png) |
| `gUnk_08752C4C` | `0x752C4C` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B ke VRAM slot 0x5B; BG map tile 0x5B ditulis func_0804E9F4 dengan indeks palet 1 -> gUnk_08752AAC (bank 0x20) | ya | [png](../../assets/raw/png/gUnk_08752C4C_128_sprite.png) |
| `gUnk_08752CCC` | `0x752CCC` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B ke VRAM slot 0x59; BG map tile 0x59 ditulis func_0804E9F4 dengan indeks palet 1 -> gUnk_08752AAC (bank 0x20) | ya | [png](../../assets/raw/png/gUnk_08752CCC_128_sprite.png) |
| `gUnk_08752D4C` | `0x752D4C` | 128 | 4 tile 8x8 berisi; func_080645F0 menyalin 0x80 B ke VRAM slot 0x73; BG map tile 0x73 ditulis func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40) | ya | [png](../../assets/raw/png/gUnk_08752D4C_128_sprite.png) |
| `gUnk_08752DCC` | `0x752DCC` | 128 | 1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B ke VRAM slot 0x70; BG map tile 0x70 ditulis func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40) | ya | [png](../../assets/raw/png/gUnk_08752DCC_128_sprite.png) |
| `gUnk_08752E4C` | `0x752E4C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08752E4C_128_sprite.png) |
| `gUnk_08752EEC` | `0x752EEC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08752EEC_128_sprite.png) |
| `gUnk_08752F8C` | `0x752F8C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_08752F8C_128_sprite.png) |
| `gUnk_0875302C` | `0x75302C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875302C_128_sprite.png) |
| `gUnk_087530CC` | `0x7530CC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087530CC_128_sprite.png) |
| `gUnk_0875316C` | `0x75316C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875316C_128_sprite.png) |
| `gUnk_0875320C` | `0x75320C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875320C_128_sprite.png) |
| `gUnk_087532AC` | `0x7532AC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087532AC_128_sprite.png) |
| `gUnk_0875334C` | `0x75334C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875334C_128_sprite.png) |
| `gUnk_087533EC` | `0x7533EC` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_087533EC_128_sprite.png) |
| `gUnk_0875348C` | `0x75348C` | 128 | 4 tile 4bpp (32 B/tile) | ya | [png](../../assets/raw/png/gUnk_0875348C_128_sprite.png) |
| `gUnk_08750C4C` | `0x750C4C` | 32 | 1 tile 4bpp (bukan palet: 100% word satu-nibble) | ya | [png](../../assets/raw/png/gUnk_08750C4C_32_sprite.png) |

## tilemap (15 blob)

Dirender sebagai grid indeks; lebar diambil dari `map_width` (call site) bila ada, sisanya ditebak dari jumlah entri dan dicantumkan di nama berkas.

| simbol | offset | ukuran | catatan | bisa dirender | PNG |
|---|---|---|---|---|---|
| `gUnk_08755230` | `0x755230` | 780 | 390 entri 16-bit; bit 10-15 modal 88% | ya | [png](../../assets/raw/png/gUnk_08755230_780_tilemap_30.png) |
| `gUnk_0875553C` | `0x75553C` | 780 | 390 entri 16-bit; bit 10-15 modal 69% | ya | [png](../../assets/raw/png/gUnk_0875553C_780_tilemap_30.png) |
| `gUnk_08757C14` | `0x757C14` | 780 | 390 entri 16-bit; bit 10-15 modal 88% | ya | [png](../../assets/raw/png/gUnk_08757C14_780_tilemap_30.png) |
| `gUnk_08757F20` | `0x757F20` | 780 | 390 entri 16-bit; bit 10-15 modal 69% | ya | [png](../../assets/raw/png/gUnk_08757F20_780_tilemap_30.png) |
| `gUnk_086D6368` | `0x6D6368` | 240 | 120 entri 16-bit; bit 10-15 modal 52% | ya | [png](../../assets/raw/png/gUnk_086D6368_240_tilemap_24.png) |
| `gUnk_086D6458` | `0x6D6458` | 192 | 96 entri 16-bit; bit 10-15 modal 54% | ya | [png](../../assets/raw/png/gUnk_086D6458_192_tilemap_16.png) |
| `gUnk_086D6548` | `0x6D6548` | 192 | 96 entri 16-bit; bit 10-15 modal 43% | ya | [png](../../assets/raw/png/gUnk_086D6548_192_tilemap_16.png) |
| `gUnk_086D6608` | `0x6D6608` | 144 | 72 entri 16-bit; bit 10-15 modal 69% | ya | [png](../../assets/raw/png/gUnk_086D6608_144_tilemap_8.png) |
| `gUnk_086DC54C` | `0x6DC54C` | 48 | stamp 6x4 (24 entri u16) dibaca func_080AA9C8 (sl=6, 4 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086DC54C_48_tilemap_6.png) |
| `gUnk_086DD6B0` | `0x6DD6B0` | 48 | stamp 6x4 (24 entri u16) dibaca func_080AA9C8 (sl=6, 4 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086DD6B0_48_tilemap_6.png) |
| `gUnk_086D6528` | `0x6D6528` | 32 | 16 entri 16-bit; bit 10-15 modal 62% | ya | [png](../../assets/raw/png/gUnk_086D6528_32_tilemap_8.png) |
| `gUnk_086DD690` | `0x6DD690` | 32 | stamp 4x4 (16 entri u16) dibaca func_080AA9C8 (sl=4, 4 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086DD690_32_tilemap_4.png) |
| `gUnk_086EAD64` | `0x6EAD64` | 32 | stamp 4x4 (16 entri u16) dibaca func_080AA9C8 (sl=4, 4 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086EAD64_32_tilemap_4.png) |
| `gUnk_086EACDC` | `0x6EACDC` | 8 | stamp 2x2 (4 entri u16) dibaca func_080AA9C8 (sl=2, 2 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086EACDC_8_tilemap_2.png) |
| `gUnk_086EAD84` | `0x6EAD84` | 8 | stamp 2x2 (4 entri u16) dibaca func_080AA9C8 (sl=2, 2 baris); lebar = kolom loader | ya | [png](../../assets/raw/png/gUnk_086EAD84_8_tilemap_2.png) |

## gambar terkompresi (3 blob)

Tidak dirender mentah: berisi bank stream `0x70` tertanam. `assets/0x70/` memuat blob berformat `0x70` dan bank tertanam `gUnk_0869B284`, `gUnk_086D74F8`, `gUnk_086DC3F4` (lihat `ASET-0X70-TERTANAM.md`).

| simbol | offset | ukuran | catatan | bisa dirender | PNG |
|---|---|---|---|---|---|
| `gUnk_0869B284` | `0x69B284` | 238212 | palet 0x00-0x7f; bank 119 stream 0x70 tertanam (mulai 0x134) sudah diekstrak ke assets/0x70/extern | tidak | - |
| `gUnk_086D74F8` | `0x6D74F8` | 20172 | 25 stream 0x70 tertanam (mulai 0x60); palet di 0x20; sudah diekstrak ke assets/0x70/extern | tidak | - |
| `gUnk_086DC3F4` | `0x6DC3F4` | 344 | stempel 3x2 12 B (func_080AA540 menyalin 12 B); sisa 332 B = 3 stream 0x70 tertanam (1560 B) ditunjuk tabel descriptor 0x08106860 (086DC400/4C4/4D0, dims 30x26); sudah diekstrak ke assets/0x70/extern | tidak | - |

## tabel (63 blob)

Tidak dirender: data angka/struct, bukan piksel atau tilemap 16-bit.

| simbol | offset | ukuran | catatan | bisa dirender | PNG |
|---|---|---|---|---|---|
| `gUnk_086DE7F4` | `0x6DE7F4` | 50408 | tabel 16-bit; func_080AA9C8 (kasus 21) memakai 16 entri sebagai blok 4x4 (sl=4 kolom, 4 baris) yang dicap ke lapis, bukan lapis peta; 25204 entri tak punya lebar persegi dan header peta gUnk_08105EDC tidak menunjuk blob ini | tidak | - |
| `gUnk_086EAD8C` | `0x6EAD8C` | 33312 | 16656 entri u16 = 1041 blok 4x4; func_080AA9C8 memakai 16 entri pertama sebagai stamp 4x4 (sl=4, 4 baris), bukan 1041 tile 4bpp | tidak | - |
| `gUnk_08523290` | `0x523290` | 15876 | 7938 entri s16 indeks glyph kode 2-byte; func_080D0CD4 memetakan lead/trail ke 189*lead + trail - 0x40; ldrsh, nilai < 0 = tanpa glyph | tidak | - |
| `gUnk_08725DA0` | `0x725DA0` | 3884 | 3884 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873AFC8` | `0x73AFC8` | 3676 | 3676 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DCC88` | `0x6DCC88` | 2568 | 1284 entri u16; func_080AA9C8 memakai 16 entri pertama sebagai stamp 4x4 (sl=4, 4 baris); sisa tabel tak terbukti persegi (80,25 blok) | tidak | - |
| `gUnk_086DDDEC` | `0x6DDDEC` | 2568 | 1284 entri u16; func_080AA9C8 memakai 16 entri pertama sebagai stamp 4x4 (sl=4, 4 baris); sisa tabel tak terbukti persegi (80,25 blok) | tidak | - |
| `gUnk_08738144` | `0x738144` | 2452 | 2452 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08529DA4` | `0x529DA4` | 2356 | 2356 B, bukan kelipatan 32 B; 9/589 word menunjuk ROM | tidak | - |
| `gUnk_0852D050` | `0x52D050` | 2356 | 2356 B, bukan kelipatan 32 B; 9/589 word menunjuk ROM | tidak | - |
| `gUnk_08727A74` | `0x727A74` | 1940 | 1940 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0872BE64` | `0x72BE64` | 1900 | 1900 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873A6E8` | `0x73A6E8` | 1900 | 1900 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873D6D8` | `0x73D6D8` | 1900 | 1900 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873DE44` | `0x73DE44` | 1900 | 1900 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873E5B0` | `0x73E5B0` | 1900 | 1900 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DC57C` | `0x6DC57C` | 1804 | 902 entri u16; func_080AA9C8 memakai 4 entri pertama sebagai stamp 2x2 (sl=2, 2 baris); 902 entri bukan persegi | tidak | - |
| `gUnk_086DD6E0` | `0x6DD6E0` | 1804 | 902 entri u16; func_080AA9C8 memakai 4 entri pertama sebagai stamp 2x2 (sl=2, 2 baris); 902 entri bukan persegi | tidak | - |
| `gUnk_08727368` | `0x727368` | 1804 | 1804 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873ED1C` | `0x73ED1C` | 1708 | 1708 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08726CCC` | `0x726CCC` | 1692 | 1692 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0875B444` | `0x75B444` | 1460 | 1460 B, bukan kelipatan 32 B; 4/365 word menunjuk ROM | tidak | - |
| `gUnk_086FAA80` | `0x6FAA80` | 1412 | 1412 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_087506E0` | `0x7506E0` | 1388 | 1388 B, bukan kelipatan 32 B; 1/347 word menunjuk ROM | tidak | - |
| `gUnk_0871E7A8` | `0x71E7A8` | 1284 | 1284 B, bukan kelipatan 32 B; 1/321 word menunjuk ROM | tidak | - |
| `gUnk_0873D234` | `0x73D234` | 968 | 968 B, bukan kelipatan 32 B; 6/242 word menunjuk ROM | tidak | - |
| `gUnk_087405A0` | `0x7405A0` | 872 | 872 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08698B00` | `0x698B00` | 788 | 788 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_087401A4` | `0x7401A4` | 688 | 688 B, bukan kelipatan 32 B; 4/172 word menunjuk ROM | tidak | - |
| `gUnk_0872EE78` | `0x72EE78` | 676 | 676 B, bukan kelipatan 32 B; 1/169 word menunjuk ROM | tidak | - |
| `gUnk_0873CF90` | `0x73CF90` | 676 | 676 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08529994` | `0x529994` | 532 | 532 B, bukan kelipatan 32 B; 1/133 word menunjuk ROM | tidak | - |
| `gUnk_0852CC40` | `0x52CC40` | 532 | 532 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_084FA7A0` | `0x4FA7A0` | 512 | 256 entri s16 indeks glyph untuk kode 0x00-0xFF; func_080D0D28 ldrsh, nilai < 0 = tanpa glyph | tidak | - |
| `gUnk_08529BA8` | `0x529BA8` | 508 | 508 B, bukan kelipatan 32 B; 1/127 word menunjuk ROM | tidak | - |
| `gUnk_0852CE54` | `0x52CE54` | 508 | 508 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873CCB4` | `0x73CCB4` | 504 | 504 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08527094` | `0x527094` | 420 | 420 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873AE54` | `0x73AE54` | 372 | 372 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08740454` | `0x740454` | 332 | 332 B, bukan kelipatan 32 B; 6/83 word menunjuk ROM | tidak | - |
| `gUnk_0871EDD4` | `0x71EDD4` | 300 | 300 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0871ECAC` | `0x71ECAC` | 296 | 296 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08728208` | `0x728208` | 280 | 280 B, bukan kelipatan 32 B; 1/70 word menunjuk ROM | tidak | - |
| `gUnk_0874E530` | `0x74E530` | 280 | 280 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0872937C` | `0x72937C` | 228 | 228 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0873CEAC` | `0x73CEAC` | 228 | 228 B, bukan kelipatan 32 B; 2/57 word menunjuk ROM | tidak | - |
| `gUnk_0873D5FC` | `0x73D5FC` | 220 | 220 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08740908` | `0x740908` | 220 | 220 B, bukan kelipatan 32 B; 1/55 word menunjuk ROM | tidak | - |
| `gUnk_0874EE38` | `0x74EE38` | 220 | 220 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08699FF4` | `0x699FF4` | 176 | 176 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08757BF8` | `0x757BF8` | 20 | 20 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0875A424` | `0x75A424` | 20 | 20 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DC3C4` | `0x6DC3C4` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DC3D0` | `0x6DC3D0` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DC3DC` | `0x6DC3DC` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086DC3E8` | `0x6DC3E8` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08757BA0` | `0x757BA0` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08757BCC` | `0x757BCC` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0875A418` | `0x75A418` | 12 | 12 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086D6518` | `0x6D6518` | 8 | 8 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_086D6520` | `0x6D6520` | 8 | 8 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_08757C0C` | `0x757C0C` | 8 | 8 B, bukan kelipatan 32 B | tidak | - |
| `gUnk_0875A438` | `0x75A438` | 8 | 8 B, bukan kelipatan 32 B | tidak | - |

