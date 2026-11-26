# Palet font/objek: status bukti

**Dihasilkan otomatis**, jangan disunting tangan: `python3 tools/assets/font_palettes.py`. Sumbernya `assets/gfx/fonts/palettes.json`.

## Metode

Status `terbukti` hanya diberikan bila di satu fungsi call site ada pemanggilan `func_08008E64`/`func_08008EB8`/`Unpack` yang argumen sumbernya (r0, ditelusuri mundur sampai penugasan terakhirnya) adalah simbol palet (kelompok `palet` di `assets/raw/manifest.json`) dan tujuannya (r1) di `0x05000000`-`0x050003FF`. Memuat simbol palet dan menulis palet RAM di fungsi yang sama **tidak** cukup: simbol palet harus benar-benar sumber salinan itu. Nilai register yang ditimpa (termasuk seluruh daftar `pop`/`ldm`, rentang `rX-rY` ikut) atau lewat `bl` lain dianggap tidak diketahui, bukan ditebak. Selain itu statusnya `belum terbukti`, berapa pun miripnya render atau dekatnya letak di ROM.

Dua alasan struktural yang membuat pasangan tidak otomatis ada:

- vtable wadah font (`0x080E79C8`, 5 entri) hanya berisi `0x00000000`, `0x00000000`, destruktor `func_080E1984`, `func_0805E760` (pointer glyph), `func_0805E790` (record glyph). Tidak ada metode palet; tile 4bpp juga tidak membawa palet.
- palet ditentukan isi palet RAM (BG `0x05000000`, OBJ `0x05000200`) saat gambar; yang perlu dibuktikan adalah loader yang mengisi palet itu untuk font tersebut, bukan isi wadah.

## Ringkasan

- simbol diperiksa: **13**
- berstatus `terbukti`: **0**
- berstatus `belum terbukti`: **13**

| simbol | jenis | call site | status palet |
|---|---|---:|---|
| `gUnk_084F90CC` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_084FA9A0` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_0852D984` | wadah font/objek | 2 | **belum terbukti** |
| `gUnk_0858BA28` | wadah font/objek | 14 | **belum terbukti** |
| `gUnk_086F2FAC` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_0871D51C` | wadah font/objek | 6 | **belum terbukti** |
| `gUnk_08728320` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_08729460` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_0872DE44` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_08731B40` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_087409E4` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_0874F34C` | wadah font/objek | 1 | **belum terbukti** |
| `gUnk_0875A440` | tile datar (font jam) | 7 | **belum terbukti** |

## Call site per simbol

### `gUnk_084F90CC` (belum terbukti)

- `func_080D0D28` — asm/code_809E804.s:103041

### `gUnk_084FA9A0` (belum terbukti)

- `func_080D0D28` — asm/code_809E804.s:103041

### `gUnk_0852D984` (belum terbukti)

- `func_080ADCA4` — asm/code_809E804.s:31083
- `func_080ADD20` — asm/code_809E804.s:31145

### `gUnk_0858BA28` (belum terbukti)

- `func_080522F8` — asm/code_0803EE94.s:35378
- `func_0805806C` — asm/code_0803EE94.s:47002
- `func_080722DC` — asm/code_0803EE94.s:100932
- `func_08088318` — asm/code_0803EE94.s:143468
- `func_0808BDA0` — asm/code_0803EE94.s:150245
- `func_0808C664` — asm/code_0803EE94.s:151302
- `func_08091094` — asm/code_0803EE94.s:159781
- `func_08092754` — asm/code_0803EE94.s:162483
- `func_080AC674` — asm/code_809E804.s:28381
- `func_080ADF6C` — asm/code_809E804.s:31457
- `func_080B3CC8` — asm/code_809E804.s:43366
- `func_080BC938` — asm/code_809E804.s:61453
- `func_080C0DCC` — asm/code_809E804.s:70231
- `func_08000914` — asm/intro_scene.s:4

### `gUnk_086F2FAC` (belum terbukti)

- `func_080AC674` — asm/code_809E804.s:28381

### `gUnk_0871D51C` (belum terbukti)

- `func_080522F8` — asm/code_0803EE94.s:35378
- `func_080AC674` — asm/code_809E804.s:28381
- `func_080ADF6C` — asm/code_809E804.s:31457
- `func_080B3CC8` — asm/code_809E804.s:43366
- `func_080BC938` — asm/code_809E804.s:61453
- `func_080C0DCC` — asm/code_809E804.s:70231

### `gUnk_08728320` (belum terbukti)

- `func_0804F288` — asm/code_0803EE94.s:29677

### `gUnk_08729460` (belum terbukti)

- `func_080B3CC8` — asm/code_809E804.s:43366

### `gUnk_0872DE44` (belum terbukti)

- `func_080522F8` — asm/code_0803EE94.s:35378

### `gUnk_08731B40` (belum terbukti)

- `func_080B3CC8` — asm/code_809E804.s:43366

### `gUnk_087409E4` (belum terbukti)

- `func_080B3CC8` — asm/code_809E804.s:43366

### `gUnk_0874F34C` (belum terbukti)

- `func_080A220C` — asm/code_809E804.s:7191

### `gUnk_0875A440` (belum terbukti)

- `func_0803C5B0` — asm/code_0803A8A4.s:3596
- `func_0803CD4C` — asm/code_0803A8A4.s:4536
- `func_0803D080` — asm/code_0803A8A4.s:4936
- `func_0803D0F0` — asm/code_0803A8A4.s:4998
- `func_0803D240` — asm/code_0803A8A4.s:5162
- `func_0803D2E8` — asm/code_0803A8A4.s:5245
- `func_0803D340` — asm/code_0803A8A4.s:5291

## Petunjuk posisi (bukan bukti)

Blob tepat sebelum simbol di `data_0813B288.s` yang isinya palet. Letak berdekatan hanya kandidat: tidak ada call site yang memuat palet itu bersama fontnya, jadi pasangan ini **tidak** dinaikkan menjadi `terbukti`.

- `gUnk_0871D51C` ← kandidat `gUnk_087170B8`: blob sebelumnya berformat 0x70, stream 0: palet 480 B; pemuat: `func_080A95A4` (asm/code_809E804.s:21907)
- `gUnk_0872DE44` ← kandidat `gUnk_0872DDE4`: blob sebelumnya 0x72DDE4 (96 B), klasifikasi isi: palet; pemuat: `func_080B7164` (asm/code_809E804.s:49968)
- `gUnk_08731B40` ← kandidat `gUnk_08731940`: blob sebelumnya 0x731940 (512 B), klasifikasi isi: palet; pemuat: `func_080AE7D0` (asm/code_809E804.s:32427)
- `gUnk_0874F34C` ← kandidat `gUnk_0874F2EC`: blob sebelumnya 0x74F2EC (96 B), klasifikasi isi: palet; pemuat: `func_080A2BA4` (asm/code_809E804.s:8371)

