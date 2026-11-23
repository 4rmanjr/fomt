# Inventaris aset `asm/data/data_0813B288.s`

**Dihasilkan otomatis**, jangan disunting tangan: `python3 tools/scripts/asset_inventory.py`. Isinya hanya data yang dibaca dari `baserom.gba` dan sumber `asm/`; tidak ada build yang dijalankan dan `fomt.gba` tidak disentuh.

## Cara memperbarui

```sh
python3 tools/scripts/asset_inventory.py            # tulis dokumen ini
python3 tools/scripts/asset_inventory.py --check    # exit 1 bila basi
python3 tools/scripts/asset_inventory.py --stdout   # lihat tanpa menulis
python3 tools/scripts/asset_inventory.py --json     # data mentah
```

Untuk membuka satu aset setelah baris tabelnya ditemukan (contoh `gUnk_08527238` di `0x527238`):

```sh
python3 tools/scripts/decompress.py baserom.gba 0x527238 /tmp/aset.bin
```

## Metode

1. **Daftar blob** — setiap `.global gUnk_*` di berkas itu dipasangkan dengan `.incbin "baserom.gba", offset, ukuran` di baris berikutnya, jadi alamat dan ukuran tidak diketik manual. Baris `.incbin` pembuka `.incbin "baserom.gba", (.LDATA_BEG), (0x4F90CC - .LDATA_BEG)` adalah satu region tanpa simbol dan bukan bagian dari daftar blob.
2. **Format 0x70** — blob diurai berurutan dengan dekoder repo (`tools/scripts/decompress.py`). Header `0x70` + ukuran 24-bit hanya dipercaya kalau stream-stream itu valid **dan** menghabiskan seluruh entri; kalau hanya sebagian, kelasnya `campuran`. Sub-format dicatat sebagai `atom/lzss/diff` (`atom`: 0 mentah, 1 Huffman-4, 2 Huffman-8).
3. **BIOS LZ77/RLE** — header `0x10`/`0x30` divalidasi dengan mendekode stream; kandidat yang gagal tetap `mentah` dan dicatat di bagian bawah. Huffman BIOS (`0x24`/`0x28`) belum punya dekoder di repo, jadi blob semacam itu hanya ditandai kandidat, bukan diklaim compressed.
4. **Pemakai pointer** — seluruh ROM dipindai per kata 32-bit sejajar; kata yang nilainya `0x08000000 + offset` blob dihitung satu pointer. Pemiliknya adalah simbol terdekat sebelum kata itu, diambil dari `thumb_func_start`/`.global` di `asm/` (alamat ada di nama simbol), sehingga hasilnya direproduksi tanpa ELF. Pointer ke tengah blob tidak dihitung, dan pencarian tidak mengenali alamat yang dihitung (`add pc, #imm` atau base+offset) tanpa kata pointer.

## Ringkasan

| kelas | blob | byte di ROM | byte setelah dibuka |
|---|---|---|---|
| BIOS LZ77 (`0x10`) | 0 | 0 | – |
| BIOS RLE (`0x30`) | 0 | 0 | – |
| BIOS Huffman (`0x24`/`0x28`) | 0 | 0 | – |
| LZSS/Huffman header `0x70` | 53 | 255.188 | 987.120 |
| campuran (prefix `0x70` + sisa) | 0 | 0 | – |
| mentah | 231 | 2.245.720 | – |

Stream `0x70` yang terurai: **137** dalam 53 blob; terbanyak `gUnk_086FD240` (50 stream).

Pointer yang menunjuk awal blob: **572** kata (284 blob punya pemakai, 0 tanpa pemakai langsung).

## Blob per alamat

| simbol | alamat | ukuran | kelas | stream | hasil buka | pemakai pointer |
|---|---|---|---|---|---|---|
| `gUnk_084F90CC` | `4F90CC` | 5.844 | mentah | – | – | `func_080D0D28` |
| `gUnk_084FA7A0` | `4FA7A0` | 512 | mentah | – | – | `func_080D0D28` |
| `gUnk_084FA9A0` | `4FA9A0` | 166.128 | mentah | – | – | `func_080D0D28` |
| `gUnk_08523290` | `523290` | 15.876 | mentah | – | – | `func_080D0D28` |
| `gUnk_08527094` | `527094` | 420 | mentah | – | – | `func_0805143C`, `func_0805CF70`, `func_08069F14`, +6 |
| `gUnk_08527238` | `527238` | 272 | lzss-0x70 | 272 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_08527348` | `527348` | 472 | lzss-0x70 | 472 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_08527520` | `527520` | 176 | lzss-0x70 | 176 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_085275D0` | `5275D0` | 8.644 | lzss-0x70 | 8.644 B · `230` | 18.432 B | `func_0806EC94` |
| `gUnk_08529794` | `529794` | 512 | mentah | – | – | `func_0806EC94` |
| `gUnk_08529994` | `529994` | 532 | mentah | – | – | `func_0806EC94` |
| `gUnk_08529BA8` | `529BA8` | 508 | mentah | – | – | `func_0806EC94` |
| `gUnk_08529DA4` | `529DA4` | 2.356 | mentah | – | – | `func_0806EC94` |
| `gUnk_0852A6D8` | `52A6D8` | 276 | lzss-0x70 | 276 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_0852A7EC` | `52A7EC` | 464 | lzss-0x70 | 464 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_0852A9BC` | `52A9BC` | 176 | lzss-0x70 | 176 B · `130` | 5.632 B | `func_0806EC94` |
| `gUnk_0852AA6C` | `52AA6C` | 8.148 | lzss-0x70 | 8.148 B · `220` | 18.432 B | `func_0806EC94` |
| `gUnk_0852CA40` | `52CA40` | 512 | mentah | – | – | `func_0806EC94` |
| `gUnk_0852CC40` | `52CC40` | 532 | mentah | – | – | `func_0806EC94` |
| `gUnk_0852CE54` | `52CE54` | 508 | mentah | – | – | `func_0806EC94` |
| `gUnk_0852D050` | `52D050` | 2.356 | mentah | – | – | `func_0806EC94` |
| `gUnk_0852D984` | `52D984` | 385.188 | mentah | – | – | `func_080ADC00`, `func_080ADCA4`, `func_080ADD20` |
| `gUnk_0858BA28` | `58BA28` | 898.616 | mentah | – | – | 4×`func_08088318`, 4×`func_0808BDA0`, 4×`func_0808C664`, +11 |
| `gUnk_08667060` | `667060` | 2.112 | mentah | – | – | `func_080AC674` |
| `gUnk_086678A0` | `6678A0` | 196.736 | mentah | – | – | 8×`func_0808CEC4`, 7×`func_08089AD8`, 7×`func_0808DD54`, +47 |
| `gUnk_08697920` | `697920` | 4.576 | mentah | – | – | `func_080A748C` |
| `gUnk_08698B00` | `698B00` | 788 | mentah | – | – | `func_080A95A4` |
| `gUnk_08698E14` | `698E14` | 4.576 | mentah | – | – | `func_080A748C`, `func_080CFC7C` |
| `gUnk_08699FF4` | `699FF4` | 176 | mentah | – | – | `func_080A95A4`, `func_080CFB5C` |
| `gUnk_0869A0A4` | `69A0A4` | 4.576 | mentah | – | – | `func_080A748C` |
| `gUnk_0869B284` | `69B284` | 238.212 | mentah | – | – | `func_080A95A4` |
| `gUnk_086D5508` | `6D5508` | 3.680 | mentah | – | – | `func_080A748C`, `func_080CFC7C` |
| `gUnk_086D6368` | `6D6368` | 240 | mentah | – | – | `func_080A95A4`, `func_080CFB5C` |
| `gUnk_086D6458` | `6D6458` | 192 | mentah | – | – | `func_080087C8` |
| `gUnk_086D6518` | `6D6518` | 8 | mentah | – | – | `func_080087C8` |
| `gUnk_086D6520` | `6D6520` | 8 | mentah | – | – | `func_080087C8` |
| `gUnk_086D6528` | `6D6528` | 32 | mentah | – | – | `func_080087C8` |
| `gUnk_086D6548` | `6D6548` | 192 | mentah | – | – | `func_080A95A4` |
| `gUnk_086D6608` | `6D6608` | 144 | mentah | – | – | `func_080087C8` |
| `gUnk_086D6698` | `6D6698` | 3.680 | mentah | – | – | `func_080A748C` |
| `gUnk_086D74F8` | `6D74F8` | 20.172 | mentah | – | – | `func_080A95A4` |
| `gUnk_086DC3C4` | `6DC3C4` | 12 | mentah | – | – | `func_0809DA00` |
| `gUnk_086DC3D0` | `6DC3D0` | 12 | mentah | – | – | `func_0809DA00` |
| `gUnk_086DC3DC` | `6DC3DC` | 12 | mentah | – | – | `func_0809DA00` |
| `gUnk_086DC3E8` | `6DC3E8` | 12 | mentah | – | – | `func_0809DA00` |
| `gUnk_086DC3F4` | `6DC3F4` | 344 | mentah | – | – | `func_0809DA00` |
| `gUnk_086DC54C` | `6DC54C` | 48 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DC57C` | `6DC57C` | 1.804 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DCC88` | `6DCC88` | 2.568 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DD690` | `6DD690` | 32 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DD6B0` | `6DD6B0` | 48 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DD6E0` | `6DD6E0` | 1.804 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DDDEC` | `6DDDEC` | 2.568 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086DE7F4` | `6DE7F4` | 50.408 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086EACDC` | `6EACDC` | 8 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086EACE4` | `6EACE4` | 32 | mentah | – | – | `func_080A95A4` |
| `gUnk_086EAD04` | `6EAD04` | 32 | mentah | – | – | `func_080A95A4` |
| `gUnk_086EAD24` | `6EAD24` | 32 | mentah | – | – | `func_080A95A4` |
| `gUnk_086EAD44` | `6EAD44` | 32 | mentah | – | – | `func_080A95A4` |
| `gUnk_086EAD64` | `6EAD64` | 32 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086EAD84` | `6EAD84` | 8 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086EAD8C` | `6EAD8C` | 33.312 | mentah | – | – | `func_080AA9C8` |
| `gUnk_086F2FAC` | `6F2FAC` | 31.444 | mentah | – | – | `func_080AC674` |
| `gUnk_086FAA80` | `6FAA80` | 1.412 | mentah | – | – | `func_080AC674` |
| `gUnk_086FB004` | `6FB004` | 8.600 | lzss-0x70 | 8.600 B · `230` | 32.768 B | `func_080B55D0`, `gUnk_08105EDC` |
| `gUnk_086FD19C` | `6FD19C` | 164 | lzss-0x70 | 164 B · `030` | 480 B | `func_080B55D0`, `gUnk_08105EDC` |
| `gUnk_086FD240` | `6FD240` | 96.240 | lzss-0x70 | 50 stream · 96.240 B · format 000, 023, 024, +9 | 414.496 B | `func_080B55D0`, `gUnk_08105EDC` |
| `gUnk_08714A30` | `714A30` | 304 | lzss-0x70 | 160+144 B · `030` + `030` | 960 B | `func_080A95A4` |
| `gUnk_08714B60` | `714B60` | 140 | lzss-0x70 | 140 B · `030` | 480 B | `func_080A95A4` |
| `gUnk_08714BEC` | `714BEC` | 9.112 | lzss-0x70 | 6 stream · 9.112 B · format 000, 023, 030, +2 | 55.328 B | `func_080A95A4` |
| `gUnk_08716F84` | `716F84` | 308 | lzss-0x70 | 148+160 B · `030` + `030` | 960 B | `func_080A95A4` |
| `gUnk_087170B8` | `7170B8` | 25.700 | lzss-0x70 | 25 stream · 25.700 B · format 023, 024, 030, +5 | 96.736 B | `func_080A95A4` |
| `gUnk_0871D51C` | `71D51C` | 4.748 | mentah | – | – | `func_080522F8`, `func_080AC674`, `func_080ADF6C`, +3 |
| `gUnk_0871E7A8` | `71E7A8` | 1.284 | mentah | – | – | `func_080E0A94` |
| `gUnk_0871ECAC` | `71ECAC` | 296 | mentah | – | – | `func_080AC674` |
| `gUnk_0871EDD4` | `71EDD4` | 300 | mentah | – | – | `func_080AC674` |
| `gUnk_0871EF00` | `71EF00` | 28.320 | mentah | – | – | `func_080AC674` |
| `gUnk_08725DA0` | `725DA0` | 3.884 | mentah | – | – | `func_080AC674` |
| `gUnk_08726CCC` | `726CCC` | 1.692 | mentah | – | – | `func_080AC674` |
| `gUnk_08727368` | `727368` | 1.804 | mentah | – | – | `func_080AC674` |
| `gUnk_08727A74` | `727A74` | 1.940 | mentah | – | – | `func_080AC674` |
| `gUnk_08728208` | `728208` | 280 | mentah | – | – | `func_080041DC`, `func_0804F19C`, `func_0804F288`, +9 |
| `gUnk_08728320` | `728320` | 4.188 | mentah | – | – | `func_0804F288` |
| `gUnk_0872937C` | `72937C` | 228 | mentah | – | – | `func_0804F288` |
| `gUnk_08729460` | `729460` | 10.756 | mentah | – | – | `func_080B3CC8` |
| `gUnk_0872BE64` | `72BE64` | 1.900 | mentah | – | – | `func_080ADF6C`, `func_080BC938`, `func_080C0DCC` |
| `gUnk_0872C5D0` | `72C5D0` | 364 | lzss-0x70 | 364 B · `030` | 2.048 B | `func_080B55D0` |
| `gUnk_0872C73C` | `72C73C` | 272 | lzss-0x70 | 272 B · `030` | 2.048 B | `func_080B55D0` |
| `gUnk_0872C84C` | `72C84C` | 3.424 | lzss-0x70 | 3.424 B · `020` | 4.480 B | `func_080B55D0` |
| `gUnk_0872D5AC` | `72D5AC` | 32 | mentah | – | – | `func_080B55D0` |
| `gUnk_0872D5CC` | `72D5CC` | 100 | lzss-0x70 | 100 B · `030` | 2.048 B | `func_080B7164` |
| `gUnk_0872D630` | `72D630` | 168 | lzss-0x70 | 168 B · `030` | 2.048 B | `func_080B7164` |
| `gUnk_0872D6D8` | `72D6D8` | 1.804 | lzss-0x70 | 1.804 B · `020` | 3.776 B | `func_080B7164` |
| `gUnk_0872DDE4` | `72DDE4` | 96 | mentah | – | – | `func_080B7164` |
| `gUnk_0872DE44` | `72DE44` | 4.148 | mentah | – | – | `func_080522F8` |
| `gUnk_0872EE78` | `72EE78` | 676 | mentah | – | – | `func_0805806C` |
| `gUnk_0872F11C` | `72F11C` | 160 | lzss-0x70 | 160 B · `030` | 384 B | `func_0805AB08` |
| `gUnk_0872F1BC` | `72F1BC` | 48 | lzss-0x70 | 48 B · `020` | 384 B | `func_0805AB08` |
| `gUnk_0872F1EC` | `72F1EC` | 48 | lzss-0x70 | 48 B · `030` | 384 B | `func_0805AB08` |
| `gUnk_0872F21C` | `72F21C` | 2.176 | lzss-0x70 | 2.176 B · `020` | 11.456 B | `func_0805AB08` |
| `gUnk_0872FA9C` | `72FA9C` | 352 | mentah | – | – | `func_0805AB08` |
| `gUnk_0872FBFC` | `72FBFC` | 56 | lzss-0x70 | 56 B · `030` | 384 B | `func_0805AB08` |
| `gUnk_0872FC34` | `72FC34` | 568 | lzss-0x70 | 568 B · `020` | 2.048 B | `func_080AE7D0` |
| `gUnk_0872FE6C` | `72FE6C` | 140 | lzss-0x70 | 140 B · `030` | 2.048 B | `func_080AE7D0` |
| `gUnk_0872FEF8` | `72FEF8` | 6.728 | lzss-0x70 | 6.728 B · `020` | 29.696 B | `func_080AE7D0` |
| `gUnk_08731940` | `731940` | 512 | mentah | – | – | `func_080AE7D0` |
| `gUnk_08731B40` | `731B40` | 26.116 | mentah | – | – | `func_080B3CC8` |
| `gUnk_08738144` | `738144` | 2.452 | mentah | – | – | `func_080B3CC8` |
| `gUnk_08738AD8` | `738AD8` | 496 | lzss-0x70 | 496 B · `000` | 1.280 B | `func_08054F40` |
| `gUnk_08738CC8` | `738CC8` | 40 | lzss-0x70 | 40 B · `030` | 1.280 B | `func_08054F40` |
| `gUnk_08738CF0` | `738CF0` | 44 | lzss-0x70 | 44 B · `030` | 320 B | `func_08054F40` |
| `gUnk_08738D1C` | `738D1C` | 3.240 | lzss-0x70 | 3.240 B · `020` | 10.496 B | `func_08054F40` |
| `gUnk_087399C4` | `7399C4` | 160 | mentah | – | – | `func_08054F40` |
| `gUnk_08739A64` | `739A64` | 3.204 | lzss-0x70 | 3.204 B · `020` | 6.144 B | `func_08054F40` |
| `gUnk_0873A6E8` | `73A6E8` | 1.900 | mentah | – | – | `func_080522F8` |
| `gUnk_0873AE54` | `73AE54` | 372 | mentah | – | – | `func_080ADF6C` |
| `gUnk_0873AFC8` | `73AFC8` | 3.676 | mentah | – | – | `func_080B3CC8` |
| `gUnk_0873BE24` | `73BE24` | 292 | lzss-0x70 | 292 B · `030` | 2.048 B | `func_080BCFAC` |
| `gUnk_0873BF48` | `73BF48` | 168 | lzss-0x70 | 168 B · `030` | 2.048 B | `func_080BCFAC` |
| `gUnk_0873BFF0` | `73BFF0` | 3.076 | lzss-0x70 | 3.076 B · `020` | 31.714 B | `func_080BCFAC` |
| `gUnk_0873CBF4` | `73CBF4` | 192 | mentah | – | – | `func_080BCFAC` |
| `gUnk_0873CCB4` | `73CCB4` | 504 | mentah | – | – | `func_0805806C` |
| `gUnk_0873CEAC` | `73CEAC` | 228 | mentah | – | – | `func_080B3CC8` |
| `gUnk_0873CF90` | `73CF90` | 676 | mentah | – | – | `func_0805806C` |
| `gUnk_0873D234` | `73D234` | 968 | mentah | – | – | `func_0805806C` |
| `gUnk_0873D5FC` | `73D5FC` | 220 | mentah | – | – | `func_080C0DCC` |
| `gUnk_0873D6D8` | `73D6D8` | 1.900 | mentah | – | – | `func_080522F8`, `func_080ADF6C`, `func_080BC938`, +1 |
| `gUnk_0873DE44` | `73DE44` | 1.900 | mentah | – | – | `func_080522F8`, `func_0805806C`, `func_080ADF6C`, +3 |
| `gUnk_0873E5B0` | `73E5B0` | 1.900 | mentah | – | – | `func_080522F8`, `func_080ADF6C`, `func_080BC938`, +1 |
| `gUnk_0873ED1C` | `73ED1C` | 1.708 | mentah | – | – | `func_080522F8`, `func_0805806C` |
| `gUnk_0873F3C8` | `73F3C8` | 524 | lzss-0x70 | 524 B · `020` | 2.048 B | `func_080C160C` |
| `gUnk_0873F5D4` | `73F5D4` | 216 | lzss-0x70 | 216 B · `030` | 2.048 B | `func_080C160C` |
| `gUnk_0873F6AC` | `73F6AC` | 2.616 | lzss-0x70 | 2.616 B · `020` | 3.712 B | `func_080C160C` |
| `gUnk_087400E4` | `7400E4` | 192 | mentah | – | – | `func_080C160C` |
| `gUnk_087401A4` | `7401A4` | 688 | mentah | – | – | `func_0805806C` |
| `gUnk_08740454` | `740454` | 332 | mentah | – | – | `func_080522F8` |
| `gUnk_087405A0` | `7405A0` | 872 | mentah | – | – | `func_080ADF6C`, `func_080BC938`, `func_080C0DCC` |
| `gUnk_08740908` | `740908` | 220 | mentah | – | – | `func_080C0DCC` |
| `gUnk_087409E4` | `7409E4` | 9.844 | mentah | – | – | `func_080B3CC8` |
| `gUnk_08743058` | `743058` | 18.876 | lzss-0x70 | 18.876 B · `020` | 28.160 B | `func_0805FBB8` |
| `gUnk_08747A14` | `747A14` | 96 | mentah | – | – | `func_0805FBB8` |
| `gUnk_08747A74` | `747A74` | 12.108 | lzss-0x70 | 5 stream · 12.108 B · format 130, 220 | 35.852 B | `func_08000914` |
| `gUnk_0874A9C0` | `74A9C0` | 14.704 | lzss-0x70 | 14.704 B · `230` | 32.768 B | `func_080019D8` |
| `gUnk_0874E330` | `74E330` | 512 | mentah | – | – | `func_080019D8` |
| `gUnk_0874E530` | `74E530` | 280 | mentah | – | – | `func_08000914` |
| `gUnk_0874E648` | `74E648` | 1.272 | lzss-0x70 | 1.272 B · `230` | 11.234 B | `func_08000F5C`, `func_08077810` |
| `gUnk_0874EB40` | `74EB40` | 32 | mentah | – | – | `func_08000F5C`, `func_08077810` |
| `gUnk_0874EB60` | `74EB60` | 364 | lzss-0x70 | 364 B · `100` | 1.280 B | `func_08000F5C` |
| `gUnk_0874ECCC` | `74ECCC` | 364 | lzss-0x70 | 364 B · `130` | 4.096 B | `func_08077810` |
| `gUnk_0874EE38` | `74EE38` | 220 | mentah | – | – | `func_0808268C` |
| `gUnk_0874EF14` | `74EF14` | 40 | lzss-0x70 | 40 B · `030` | 1.280 B | `func_080A2BA4` |
| `gUnk_0874EF3C` | `74EF3C` | 176 | lzss-0x70 | 176 B · `020` | 1.280 B | `func_080A2BA4` |
| `gUnk_0874EFEC` | `74EFEC` | 100 | lzss-0x70 | 100 B · `020` | 1.280 B | `func_080A2BA4` |
| `gUnk_0874F050` | `74F050` | 668 | lzss-0x70 | 668 B · `020` | 5.120 B | `func_080A2BA4` |
| `gUnk_0874F2EC` | `74F2EC` | 96 | mentah | – | – | `func_080A2BA4` |
| `gUnk_0874F34C` | `74F34C` | 5.012 | mentah | – | – | `func_080A220C` |
| `gUnk_087506E0` | `7506E0` | 1.388 | mentah | – | – | `func_080A220C` |
| `gUnk_08750C4C` | `750C4C` | 32 | mentah | – | – | `func_080645F0`, `func_0806644C`, `sub_08065B14` |
| `gUnk_08750C6C` | `750C6C` | 32 | mentah | – | – | `func_080645F0`, `func_0806644C`, `sub_08065B14` |
| `gUnk_08750C8C` | `750C8C` | 448 | mentah | – | – | `func_0806644C`, `func_0809800C`, `func_0809964C`, +2 |
| `gUnk_08750E4C` | `750E4C` | 288 | mentah | – | – | `func_080645F0` |
| `gUnk_08750F6C` | `750F6C` | 32 | mentah | – | – | `func_080645F0` |
| `gUnk_08750F8C` | `750F8C` | 288 | mentah | – | – | `func_080645F0` |
| `gUnk_087510AC` | `7510AC` | 288 | mentah | – | – | `func_0806644C` |
| `gUnk_087511CC` | `7511CC` | 288 | mentah | – | – | `func_08068344` |
| `gUnk_087512EC` | `7512EC` | 32 | mentah | – | – | `func_08068344` |
| `gUnk_0875130C` | `75130C` | 288 | mentah | – | – | `func_08068344` |
| `gUnk_0875142C` | `75142C` | 288 | mentah | – | – | `func_08068344` |
| `gUnk_0875154C` | `75154C` | 288 | mentah | – | – | `func_08068344` |
| `gUnk_0875166C` | `75166C` | 288 | mentah | – | – | `func_0806644C` |
| `gUnk_0875178C` | `75178C` | 32 | mentah | – | – | `func_0806644C` |
| `gUnk_087517AC` | `7517AC` | 288 | mentah | – | – | `func_080645F0` |
| `gUnk_087518CC` | `7518CC` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875194C` | `75194C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875196C` | `75196C` | 128 | mentah | – | – | 2×`func_0808586C`, `func_08059FE0`, `func_0805FF14`, +3 |
| `gUnk_087519EC` | `7519EC` | 32 | mentah | – | – | 2×`func_0808586C`, `func_08059FE0`, `func_0805FF14`, +3 |
| `gUnk_08751A0C` | `751A0C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_08751A8C` | `751A8C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_08751AAC` | `751AAC` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_08751B2C` | `751B2C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_08751B4C` | `751B4C` | 128 | mentah | – | – | `func_080643DC`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_08751BCC` | `751BCC` | 32 | mentah | – | – | `func_080643DC`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_08751BEC` | `751BEC` | 128 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751C6C` | `751C6C` | 32 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751C8C` | `751C8C` | 128 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751D0C` | `751D0C` | 32 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751D2C` | `751D2C` | 128 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751DAC` | `751DAC` | 32 | mentah | – | – | `func_080643DC`, `func_0806A1F4` |
| `gUnk_08751DCC` | `751DCC` | 128 | mentah | – | – | `func_080643DC` |
| `gUnk_08751E4C` | `751E4C` | 32 | mentah | – | – | `func_080643DC` |
| `gUnk_08751E6C` | `751E6C` | 128 | mentah | – | – | `func_080722DC`, `sub_08061E00` |
| `gUnk_08751EEC` | `751EEC` | 32 | mentah | – | – | `func_080722DC`, `sub_08061E00` |
| `gUnk_08751F0C` | `751F0C` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_08751F8C` | `751F8C` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_08751FAC` | `751FAC` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875202C` | `75202C` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875204C` | `75204C` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_087520CC` | `7520CC` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_087520EC` | `7520EC` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875216C` | `75216C` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875218C` | `75218C` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875220C` | `75220C` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875222C` | `75222C` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_087522AC` | `7522AC` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_087522CC` | `7522CC` | 128 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875234C` | `75234C` | 32 | mentah | – | – | `gUnk_080FC024`, `sub_08065B14` |
| `gUnk_0875236C` | `75236C` | 128 | mentah | – | – | `sub_08061E00` |
| `gUnk_087523EC` | `7523EC` | 32 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875240C` | `75240C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875248C` | `75248C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_087524AC` | `7524AC` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875252C` | `75252C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875254C` | `75254C` | 128 | mentah | – | – | `func_0805FF14`, `func_08062E9C`, `func_080645F0`, +3 |
| `gUnk_087525CC` | `7525CC` | 32 | mentah | – | – | `func_0805FF14`, `func_08062E9C`, `func_080645F0`, +3 |
| `gUnk_087525EC` | `7525EC` | 128 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875266C` | `75266C` | 32 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875268C` | `75268C` | 128 | mentah | – | – | `func_08064320`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_0875270C` | `75270C` | 32 | mentah | – | – | `func_08064320`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_0875272C` | `75272C` | 128 | mentah | – | – | `func_08064320`, `func_0806A1F4` |
| `gUnk_087527AC` | `7527AC` | 32 | mentah | – | – | `func_08064320`, `func_0806A1F4` |
| `gUnk_087527CC` | `7527CC` | 128 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875284C` | `75284C` | 32 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875286C` | `75286C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_087528EC` | `7528EC` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875290C` | `75290C` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_0875298C` | `75298C` | 32 | mentah | – | – | `func_080645F0` |
| `gUnk_087529AC` | `7529AC` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_08752A2C` | `752A2C` | 128 | mentah | – | – | `func_08068344` |
| `gUnk_08752AAC` | `752AAC` | 32 | mentah | – | – | `func_08068344` |
| `gUnk_08752ACC` | `752ACC` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_08752B4C` | `752B4C` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_08752BCC` | `752BCC` | 128 | mentah | – | – | `func_08068344` |
| `gUnk_08752C4C` | `752C4C` | 128 | mentah | – | – | `func_08068344` |
| `gUnk_08752CCC` | `752CCC` | 128 | mentah | – | – | `func_08068344` |
| `gUnk_08752D4C` | `752D4C` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_08752DCC` | `752DCC` | 128 | mentah | – | – | `func_080645F0` |
| `gUnk_08752E4C` | `752E4C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_08752ECC` | `752ECC` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_08752EEC` | `752EEC` | 128 | mentah | – | – | `sub_08061E00` |
| `gUnk_08752F6C` | `752F6C` | 32 | mentah | – | – | `sub_08061E00` |
| `gUnk_08752F8C` | `752F8C` | 128 | mentah | – | – | `func_08059FE0`, `func_0805FF14`, `func_0806644C`, +1 |
| `gUnk_0875300C` | `75300C` | 32 | mentah | – | – | `func_08059FE0`, `func_0805FF14`, `func_0806644C`, +1 |
| `gUnk_0875302C` | `75302C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_087530AC` | `7530AC` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_087530CC` | `7530CC` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875314C` | `75314C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875316C` | `75316C` | 128 | mentah | – | – | `sub_08061E00` |
| `gUnk_087531EC` | `7531EC` | 32 | mentah | – | – | `sub_08061E00` |
| `gUnk_0875320C` | `75320C` | 128 | mentah | – | – | `func_080644F0`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_0875328C` | `75328C` | 32 | mentah | – | – | `func_080644F0`, `func_0806A1F4`, `func_080722DC`, +2 |
| `gUnk_087532AC` | `7532AC` | 128 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_0875332C` | `75332C` | 32 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_0875334C` | `75334C` | 128 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_087533CC` | `7533CC` | 32 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_087533EC` | `7533EC` | 128 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_0875346C` | `75346C` | 32 | mentah | – | – | `func_080644F0`, `func_0806A1F4` |
| `gUnk_0875348C` | `75348C` | 128 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875350C` | `75350C` | 32 | mentah | – | – | `func_0805FF14` |
| `gUnk_0875352C` | `75352C` | 220 | mentah | – | – | `func_0808268C` |
| `gUnk_08753608` | `753608` | 220 | mentah | – | – | `func_08080E68` |
| `gUnk_087536E4` | `7536E4` | 236 | mentah | – | – | `func_080C7F58` |
| `gUnk_087537D0` | `7537D0` | 3.748 | mentah | – | – | `func_080701BC`, `func_0807865C` |
| `gUnk_08754674` | `754674` | 1.432 | mentah | – | – | `func_08094AC0` |
| `gUnk_08754C0C` | `754C0C` | 1.352 | mentah | – | – | `func_08094AC0`, `func_080CD578`, `func_080CEC00` |
| `gUnk_08755154` | `755154` | 220 | mentah | – | – | `func_0808268C` |
| `gUnk_08755230` | `755230` | 780 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875553C` | `75553C` | 780 | mentah | – | – | `func_08077EC0` |
| `gUnk_08755848` | `755848` | 8.856 | lzss-0x70 | 8.856 B · `220` | 32.768 B | `func_08077EC0` |
| `gUnk_08757AE0` | `757AE0` | 192 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757BA0` | `757BA0` | 12 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757BAC` | `757BAC` | 32 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757BCC` | `757BCC` | 12 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757BD8` | `757BD8` | 32 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757BF8` | `757BF8` | 20 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757C0C` | `757C0C` | 8 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757C14` | `757C14` | 780 | mentah | – | – | `func_08077EC0` |
| `gUnk_08757F20` | `757F20` | 780 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875822C` | `75822C` | 8.492 | lzss-0x70 | 8.492 B · `230` | 32.768 B | `func_08077EC0` |
| `gUnk_0875A358` | `75A358` | 192 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875A418` | `75A418` | 12 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875A424` | `75A424` | 20 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875A438` | `75A438` | 8 | mentah | – | – | `func_08077EC0` |
| `gUnk_0875A440` | `75A440` | 4.100 | mentah | – | – | 4×`func_0803CD4C`, 3×`func_0803D0F0`, 2×`func_0803D240`, +4 |
| `gUnk_0875B444` | `75B444` | 1.460 | mentah | – | – | `func_0803C5B0` |

## Kandidat header BIOS yang gugur

Byte tipe kebetulan berbentuk header BIOS, tetapi stream-nya tidak valid (atau menunjuk ukuran yang mustahil). Semuanya tetap dihitung `mentah`.

| simbol | alamat | byte tipe | ukuran deklarasi |
|---|---|---|---|
| `gUnk_0875236C` | `75236C` | `0x30 RLE` | 0 |
| `gUnk_08752ECC` | `752ECC` | `0x10 LZ77` | 13.042.656 |
| `gUnk_08757BAC` | `757BAC` | `0x10 LZ77` | 2.035.742 |
| `gUnk_08757BD8` | `757BD8` | `0x10 LZ77` | 2.035.742 |

