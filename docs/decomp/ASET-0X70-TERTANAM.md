# Bank stream `0x70` tertanam

**Dihasilkan otomatis**, jangan disunting tangan: `python3 tools/assets/embedded_streams.py`. Sumbernya manifest `assets/0x70/embedded_manifest.json`.

## Cara memperbarui

```sh
python3 tools/assets/embedded_streams.py          # ekstrak + dokumen ini
python3 tools/assets/embedded_streams.py --check  # verifikasi tanpa ROM
```

`--check` merender ulang PNG dari `extern/*.bin` dan membandingkan hash-nya dengan manifest serta berkas PNG di repo; tidak membaca `baserom.gba`.

## Ringkasan

- bank: **3**
- stream tertanam: **147**

| kelas | stream |
|---|---|
| palet | 21 |
| tile | 15 |
| peta | 111 |
| layar | 0 |
| lain | 0 |

| simbol | offset | ukuran | prefix | stream |
|---|---|---|---|---|
| `gUnk_0869B284` | `0x69B284` | 238212 | 308 B | 119 |
| `gUnk_086D74F8` | `0x6D74F8` | 20172 | 96 B | 25 |
| `gUnk_086DC3F4` | `0x6DC3F4` | 344 | 12 B | 3 |

Offset awal bank dihitung dari rantai stream yang berakhir tepat di ujung blob; byte sebelum offset itu adalah prefix (palet/header/stempel) dan disimpan sebagai `prefix_sha256`.

## `gUnk_0869B284`

| # | offset | alamat | packed | buka | format | kelas | berkas | PNG |
|---|---|---|---|---|---|---|---|---|
| 0 | 308 | `0x0869B3B8` | 340 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_0869B3B8_1680_fc892305.bin) | [png](../../assets/0x70/png/extern_stream_0869B3B8_1680_fc892305_peta_indeks_30.png) |
| 1 | 648 | `0x0869B50C` | 336 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_0869B50C_1680_7a6f5bbe.bin) | [png](../../assets/0x70/png/extern_stream_0869B50C_1680_7a6f5bbe_peta_indeks_30.png) |
| 2 | 984 | `0x0869B65C` | 212 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_0869B65C_1680_463f4be0.bin) | [png](../../assets/0x70/png/extern_stream_0869B65C_1680_463f4be0_peta_indeks_30.png) |
| 3 | 1196 | `0x0869B730` | 15280 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_0869B730_32768_83790715.bin) | [png](../../assets/0x70/png/extern_stream_0869B730_32768_83790715_tile.png) |
| 4 | 16476 | `0x0869F2E0` | 244 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_0869F2E0_480_722d328e.bin) | [png](../../assets/0x70/png/extern_stream_0869F2E0_480_722d328e_palet.png) |
| 5 | 16720 | `0x0869F3D4` | 1964 | 22528 | `230` | peta | [bin](../../assets/0x70/extern/stream_0869F3D4_22528_d063e290.bin) | [png](../../assets/0x70/png/extern_stream_0869F3D4_22528_d063e290_peta_indeks_64.png) |
| 6 | 18684 | `0x0869FB80` | 1160 | 22528 | `134` | peta | [bin](../../assets/0x70/extern/stream_0869FB80_22528_27231c6b.bin) | [png](../../assets/0x70/png/extern_stream_0869FB80_22528_27231c6b_peta_indeks_64.png) |
| 7 | 19844 | `0x086A0008` | 144 | 22528 | `024` | peta | [bin](../../assets/0x70/extern/stream_086A0008_22528_af35b632.bin) | [png](../../assets/0x70/png/extern_stream_086A0008_22528_af35b632_peta_indeks_64.png) |
| 8 | 19988 | `0x086A0098` | 244 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086A0098_480_7fc344d3.bin) | [png](../../assets/0x70/png/extern_stream_086A0098_480_7fc344d3_palet.png) |
| 9 | 20232 | `0x086A018C` | 15804 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086A018C_32768_91d751ae.bin) | [png](../../assets/0x70/png/extern_stream_086A018C_32768_91d751ae_tile.png) |
| 10 | 36036 | `0x086A3F48` | 228 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086A3F48_480_fe9ea280.bin) | [png](../../assets/0x70/png/extern_stream_086A3F48_480_fe9ea280_palet.png) |
| 11 | 36264 | `0x086A402C` | 2340 | 22528 | `230` | peta | [bin](../../assets/0x70/extern/stream_086A402C_22528_22fdba65.bin) | [png](../../assets/0x70/png/extern_stream_086A402C_22528_22fdba65_peta_indeks_64.png) |
| 12 | 38604 | `0x086A4950` | 1204 | 22528 | `134` | peta | [bin](../../assets/0x70/extern/stream_086A4950_22528_85cd2d3c.bin) | [png](../../assets/0x70/png/extern_stream_086A4950_22528_85cd2d3c_peta_indeks_64.png) |
| 13 | 39808 | `0x086A4E04` | 148 | 22528 | `024` | peta | [bin](../../assets/0x70/extern/stream_086A4E04_22528_c33f635b.bin) | [png](../../assets/0x70/png/extern_stream_086A4E04_22528_c33f635b_peta_indeks_64.png) |
| 14 | 39956 | `0x086A4E98` | 212 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086A4E98_480_2ee6d955.bin) | [png](../../assets/0x70/png/extern_stream_086A4E98_480_2ee6d955_palet.png) |
| 15 | 40168 | `0x086A4F6C` | 14716 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086A4F6C_32768_2c4f1b76.bin) | [png](../../assets/0x70/png/extern_stream_086A4F6C_32768_2c4f1b76_tile.png) |
| 16 | 54884 | `0x086A88E8` | 204 | 480 | `000` | palet | [bin](../../assets/0x70/extern/stream_086A88E8_480_fd88c1b1.bin) | [png](../../assets/0x70/png/extern_stream_086A88E8_480_fd88c1b1_palet.png) |
| 17 | 55088 | `0x086A89B4` | 2688 | 16384 | `230` | peta | [bin](../../assets/0x70/extern/stream_086A89B4_16384_43688575.bin) | [png](../../assets/0x70/png/extern_stream_086A89B4_16384_43688575_peta_indeks_64.png) |
| 18 | 57776 | `0x086A9434` | 1784 | 16384 | `134` | peta | [bin](../../assets/0x70/extern/stream_086A9434_16384_491313fe.bin) | [png](../../assets/0x70/png/extern_stream_086A9434_16384_491313fe_peta_indeks_64.png) |
| 19 | 59560 | `0x086A9B2C` | 1352 | 16384 | `134` | peta | [bin](../../assets/0x70/extern/stream_086A9B2C_16384_307d57a2.bin) | [png](../../assets/0x70/png/extern_stream_086A9B2C_16384_307d57a2_peta_indeks_64.png) |
| 20 | 60912 | `0x086AA074` | 188 | 480 | `130` | palet | [bin](../../assets/0x70/extern/stream_086AA074_480_e99b1e0c.bin) | [png](../../assets/0x70/png/extern_stream_086AA074_480_e99b1e0c_palet.png) |
| 21 | 61100 | `0x086AA130` | 14680 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086AA130_32768_c9c71ced.bin) | [png](../../assets/0x70/png/extern_stream_086AA130_32768_c9c71ced_tile.png) |
| 22 | 75780 | `0x086ADA88` | 200 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086ADA88_480_a72810b2.bin) | [png](../../assets/0x70/png/extern_stream_086ADA88_480_a72810b2_palet.png) |
| 23 | 75980 | `0x086ADB50` | 2956 | 16384 | `230` | peta | [bin](../../assets/0x70/extern/stream_086ADB50_16384_250706b0.bin) | [png](../../assets/0x70/png/extern_stream_086ADB50_16384_250706b0_peta_indeks_64.png) |
| 24 | 78936 | `0x086AE6DC` | 1632 | 16384 | `134` | peta | [bin](../../assets/0x70/extern/stream_086AE6DC_16384_aa594174.bin) | [png](../../assets/0x70/png/extern_stream_086AE6DC_16384_aa594174_peta_indeks_64.png) |
| 25 | 80568 | `0x086AED3C` | 1336 | 16384 | `134` | peta | [bin](../../assets/0x70/extern/stream_086AED3C_16384_adfdf4ff.bin) | [png](../../assets/0x70/png/extern_stream_086AED3C_16384_adfdf4ff_peta_indeks_64.png) |
| 26 | 81904 | `0x086AF274` | 184 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086AF274_480_90a6af0d.bin) | [png](../../assets/0x70/png/extern_stream_086AF274_480_90a6af0d_palet.png) |
| 27 | 82088 | `0x086AF32C` | 500 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086AF32C_1680_8f637709.bin) | [png](../../assets/0x70/png/extern_stream_086AF32C_1680_8f637709_peta_indeks_30.png) |
| 28 | 82588 | `0x086AF520` | 444 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086AF520_1680_01fdf31e.bin) | [png](../../assets/0x70/png/extern_stream_086AF520_1680_01fdf31e_peta_indeks_30.png) |
| 29 | 83032 | `0x086AF6DC` | 204 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086AF6DC_1680_dafa7612.bin) | [png](../../assets/0x70/png/extern_stream_086AF6DC_1680_dafa7612_peta_indeks_30.png) |
| 30 | 83236 | `0x086AF7A8` | 460 | 3024 | `130` | peta | [bin](../../assets/0x70/extern/stream_086AF7A8_3024_6473470b.bin) | [png](../../assets/0x70/png/extern_stream_086AF7A8_3024_6473470b_peta_indeks_36.png) |
| 31 | 83696 | `0x086AF974` | 448 | 3024 | `023` | peta | [bin](../../assets/0x70/extern/stream_086AF974_3024_0ba7993a.bin) | [png](../../assets/0x70/png/extern_stream_086AF974_3024_0ba7993a_peta_indeks_36.png) |
| 32 | 84144 | `0x086AFB34` | 212 | 3024 | `134` | peta | [bin](../../assets/0x70/extern/stream_086AFB34_3024_e1528dc5.bin) | [png](../../assets/0x70/png/extern_stream_086AFB34_3024_e1528dc5_peta_indeks_36.png) |
| 33 | 84356 | `0x086AFC08` | 5900 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086AFC08_32768_8ae69b58.bin) | [png](../../assets/0x70/png/extern_stream_086AFC08_32768_8ae69b58_tile.png) |
| 34 | 90256 | `0x086B1314` | 440 | 480 | `000` | palet | [bin](../../assets/0x70/extern/stream_086B1314_480_85774b29.bin) | [png](../../assets/0x70/png/extern_stream_086B1314_480_85774b29_palet.png) |
| 35 | 90696 | `0x086B14CC` | 616 | 3024 | `133` | peta | [bin](../../assets/0x70/extern/stream_086B14CC_3024_765e9070.bin) | [png](../../assets/0x70/png/extern_stream_086B14CC_3024_765e9070_peta_indeks_36.png) |
| 36 | 91312 | `0x086B1734` | 480 | 3024 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B1734_3024_e330aa28.bin) | [png](../../assets/0x70/png/extern_stream_086B1734_3024_e330aa28_peta_indeks_36.png) |
| 37 | 91792 | `0x086B1914` | 276 | 3024 | `033` | peta | [bin](../../assets/0x70/extern/stream_086B1914_3024_26c29553.bin) | [png](../../assets/0x70/png/extern_stream_086B1914_3024_26c29553_peta_indeks_36.png) |
| 38 | 92068 | `0x086B1A28` | 744 | 2352 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B1A28_2352_bda0030a.bin) | [png](../../assets/0x70/png/extern_stream_086B1A28_2352_bda0030a_peta_indeks_28.png) |
| 39 | 92812 | `0x086B1D10` | 180 | 2352 | `030` | peta | [bin](../../assets/0x70/extern/stream_086B1D10_2352_4e0272c5.bin) | [png](../../assets/0x70/png/extern_stream_086B1D10_2352_4e0272c5_peta_indeks_28.png) |
| 40 | 92992 | `0x086B1DC4` | 160 | 2352 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B1DC4_2352_ce195791.bin) | [png](../../assets/0x70/png/extern_stream_086B1DC4_2352_ce195791_peta_indeks_28.png) |
| 41 | 93152 | `0x086B1E64` | 628 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B1E64_1680_36d3930c.bin) | [png](../../assets/0x70/png/extern_stream_086B1E64_1680_36d3930c_peta_indeks_30.png) |
| 42 | 93780 | `0x086B20D8` | 144 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B20D8_1680_43a3c72f.bin) | [png](../../assets/0x70/png/extern_stream_086B20D8_1680_43a3c72f_peta_indeks_30.png) |
| 43 | 93924 | `0x086B2168` | 148 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B2168_1680_6a02075d.bin) | [png](../../assets/0x70/png/extern_stream_086B2168_1680_6a02075d_peta_indeks_30.png) |
| 44 | 94072 | `0x086B21FC` | 388 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B21FC_1680_7567d6be.bin) | [png](../../assets/0x70/png/extern_stream_086B21FC_1680_7567d6be_peta_indeks_30.png) |
| 45 | 94460 | `0x086B2380` | 236 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B2380_1680_db720aea.bin) | [png](../../assets/0x70/png/extern_stream_086B2380_1680_db720aea_peta_indeks_30.png) |
| 46 | 94696 | `0x086B246C` | 132 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B246C_1680_85861cd2.bin) | [png](../../assets/0x70/png/extern_stream_086B246C_1680_85861cd2_peta_indeks_30.png) |
| 47 | 94828 | `0x086B24F0` | 848 | 3864 | `133` | peta | [bin](../../assets/0x70/extern/stream_086B24F0_3864_c7408b14.bin) | [png](../../assets/0x70/png/extern_stream_086B24F0_3864_c7408b14_peta_indeks_46.png) |
| 48 | 95676 | `0x086B2840` | 484 | 3864 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B2840_3864_55a96600.bin) | [png](../../assets/0x70/png/extern_stream_086B2840_3864_55a96600_peta_indeks_46.png) |
| 49 | 96160 | `0x086B2A24` | 376 | 3864 | `134` | peta | [bin](../../assets/0x70/extern/stream_086B2A24_3864_a27f8cd4.bin) | [png](../../assets/0x70/png/extern_stream_086B2A24_3864_a27f8cd4_peta_indeks_46.png) |
| 50 | 96536 | `0x086B2B9C` | 588 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B2B9C_3864_f9f19282.bin) | [png](../../assets/0x70/png/extern_stream_086B2B9C_3864_f9f19282_peta_indeks_46.png) |
| 51 | 97124 | `0x086B2DE8` | 588 | 3864 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B2DE8_3864_f60a2b27.bin) | [png](../../assets/0x70/png/extern_stream_086B2DE8_3864_f60a2b27_peta_indeks_46.png) |
| 52 | 97712 | `0x086B3034` | 332 | 3864 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B3034_3864_7c139176.bin) | [png](../../assets/0x70/png/extern_stream_086B3034_3864_7c139176_peta_indeks_46.png) |
| 53 | 98044 | `0x086B3180` | 14332 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086B3180_32768_47cfccf1.bin) | [png](../../assets/0x70/png/extern_stream_086B3180_32768_47cfccf1_tile.png) |
| 54 | 112376 | `0x086B697C` | 376 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086B697C_480_a75cad2f.bin) | [png](../../assets/0x70/png/extern_stream_086B697C_480_a75cad2f_palet.png) |
| 55 | 112752 | `0x086B6AF4` | 768 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B6AF4_3864_c45881de.bin) | [png](../../assets/0x70/png/extern_stream_086B6AF4_3864_c45881de_peta_indeks_46.png) |
| 56 | 113520 | `0x086B6DF4` | 512 | 3864 | `133` | peta | [bin](../../assets/0x70/extern/stream_086B6DF4_3864_16079b21.bin) | [png](../../assets/0x70/png/extern_stream_086B6DF4_3864_16079b21_peta_indeks_46.png) |
| 57 | 114032 | `0x086B6FF4` | 300 | 3864 | `133` | peta | [bin](../../assets/0x70/extern/stream_086B6FF4_3864_51fbc770.bin) | [png](../../assets/0x70/png/extern_stream_086B6FF4_3864_51fbc770_peta_indeks_46.png) |
| 58 | 114332 | `0x086B7120` | 776 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B7120_3864_082fc41f.bin) | [png](../../assets/0x70/png/extern_stream_086B7120_3864_082fc41f_peta_indeks_46.png) |
| 59 | 115108 | `0x086B7428` | 772 | 3864 | `023` | peta | [bin](../../assets/0x70/extern/stream_086B7428_3864_384d2f8f.bin) | [png](../../assets/0x70/png/extern_stream_086B7428_3864_384d2f8f_peta_indeks_46.png) |
| 60 | 115880 | `0x086B772C` | 300 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B772C_3864_3084ce88.bin) | [png](../../assets/0x70/png/extern_stream_086B772C_3864_3084ce88_peta_indeks_46.png) |
| 61 | 116180 | `0x086B7858` | 764 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B7858_3864_bf0daec8.bin) | [png](../../assets/0x70/png/extern_stream_086B7858_3864_bf0daec8_peta_indeks_46.png) |
| 62 | 116944 | `0x086B7B54` | 564 | 3864 | `024` | peta | [bin](../../assets/0x70/extern/stream_086B7B54_3864_571eca74.bin) | [png](../../assets/0x70/png/extern_stream_086B7B54_3864_571eca74_peta_indeks_46.png) |
| 63 | 117508 | `0x086B7D88` | 244 | 3864 | `130` | peta | [bin](../../assets/0x70/extern/stream_086B7D88_3864_4b0f989c.bin) | [png](../../assets/0x70/png/extern_stream_086B7D88_3864_4b0f989c_peta_indeks_46.png) |
| 64 | 117752 | `0x086B7E7C` | 13764 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086B7E7C_32768_1323d433.bin) | [png](../../assets/0x70/png/extern_stream_086B7E7C_32768_1323d433_tile.png) |
| 65 | 131516 | `0x086BB440` | 348 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086BB440_480_67b2670d.bin) | [png](../../assets/0x70/png/extern_stream_086BB440_480_67b2670d_palet.png) |
| 66 | 131864 | `0x086BB59C` | 6752 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086BB59C_32768_63a2576b.bin) | [png](../../assets/0x70/png/extern_stream_086BB59C_32768_63a2576b_tile.png) |
| 67 | 138616 | `0x086BCFFC` | 276 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086BCFFC_480_80a20cfd.bin) | [png](../../assets/0x70/png/extern_stream_086BCFFC_480_80a20cfd_palet.png) |
| 68 | 138892 | `0x086BD110` | 440 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086BD110_1680_1ed175ec.bin) | [png](../../assets/0x70/png/extern_stream_086BD110_1680_1ed175ec_peta_indeks_30.png) |
| 69 | 139332 | `0x086BD2C8` | 256 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086BD2C8_1680_5c70669a.bin) | [png](../../assets/0x70/png/extern_stream_086BD2C8_1680_5c70669a_peta_indeks_30.png) |
| 70 | 139588 | `0x086BD3C8` | 288 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086BD3C8_1680_ac38c072.bin) | [png](../../assets/0x70/png/extern_stream_086BD3C8_1680_ac38c072_peta_indeks_30.png) |
| 71 | 139876 | `0x086BD4E8` | 408 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086BD4E8_1680_53bd1609.bin) | [png](../../assets/0x70/png/extern_stream_086BD4E8_1680_53bd1609_peta_indeks_30.png) |
| 72 | 140284 | `0x086BD680` | 280 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086BD680_1680_8ff7934d.bin) | [png](../../assets/0x70/png/extern_stream_086BD680_1680_8ff7934d_peta_indeks_30.png) |
| 73 | 140564 | `0x086BD798` | 168 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086BD798_1680_0648533d.bin) | [png](../../assets/0x70/png/extern_stream_086BD798_1680_0648533d_peta_indeks_30.png) |
| 74 | 140732 | `0x086BD840` | 380 | 1680 | `133` | peta | [bin](../../assets/0x70/extern/stream_086BD840_1680_81f54e91.bin) | [png](../../assets/0x70/png/extern_stream_086BD840_1680_81f54e91_peta_indeks_30.png) |
| 75 | 141112 | `0x086BD9BC` | 240 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086BD9BC_1680_5a361764.bin) | [png](../../assets/0x70/png/extern_stream_086BD9BC_1680_5a361764_peta_indeks_30.png) |
| 76 | 141352 | `0x086BDAAC` | 224 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086BDAAC_1680_4ee2ebf7.bin) | [png](../../assets/0x70/png/extern_stream_086BDAAC_1680_4ee2ebf7_peta_indeks_30.png) |
| 77 | 141576 | `0x086BDB8C` | 244 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086BDB8C_1680_c791cfd7.bin) | [png](../../assets/0x70/png/extern_stream_086BDB8C_1680_c791cfd7_peta_indeks_30.png) |
| 78 | 141820 | `0x086BDC80` | 256 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086BDC80_1680_4169aff3.bin) | [png](../../assets/0x70/png/extern_stream_086BDC80_1680_4169aff3_peta_indeks_30.png) |
| 79 | 142076 | `0x086BDD80` | 132 | 1680 | `033` | peta | [bin](../../assets/0x70/extern/stream_086BDD80_1680_f2a6cc5c.bin) | [png](../../assets/0x70/png/extern_stream_086BDD80_1680_f2a6cc5c_peta_indeks_30.png) |
| 80 | 142208 | `0x086BDE04` | 11480 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086BDE04_32768_6bc8eb52.bin) | [png](../../assets/0x70/png/extern_stream_086BDE04_32768_6bc8eb52_tile.png) |
| 81 | 153688 | `0x086C0ADC` | 364 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086C0ADC_480_cff00b9c.bin) | [png](../../assets/0x70/png/extern_stream_086C0ADC_480_cff00b9c_palet.png) |
| 82 | 154052 | `0x086C0C48` | 4348 | 32768 | `220` | tile | [bin](../../assets/0x70/extern/stream_086C0C48_32768_4c8572dd.bin) | [png](../../assets/0x70/png/extern_stream_086C0C48_32768_4c8572dd_tile.png) |
| 83 | 158400 | `0x086C1D44` | 260 | 480 | `123` | palet | [bin](../../assets/0x70/extern/stream_086C1D44_480_52e4b2ee.bin) | [png](../../assets/0x70/png/extern_stream_086C1D44_480_52e4b2ee_palet.png) |
| 84 | 158660 | `0x086C1E48` | 424 | 1680 | `124` | peta | [bin](../../assets/0x70/extern/stream_086C1E48_1680_a3c9d61b.bin) | [png](../../assets/0x70/png/extern_stream_086C1E48_1680_a3c9d61b_peta_indeks_30.png) |
| 85 | 159084 | `0x086C1FF0` | 360 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086C1FF0_1680_0f85bbdf.bin) | [png](../../assets/0x70/png/extern_stream_086C1FF0_1680_0f85bbdf_peta_indeks_30.png) |
| 86 | 159444 | `0x086C2158` | 248 | 1680 | `133` | peta | [bin](../../assets/0x70/extern/stream_086C2158_1680_7de9666a.bin) | [png](../../assets/0x70/png/extern_stream_086C2158_1680_7de9666a_peta_indeks_30.png) |
| 87 | 159692 | `0x086C2250` | 452 | 1680 | `020` | peta | [bin](../../assets/0x70/extern/stream_086C2250_1680_387f105e.bin) | [png](../../assets/0x70/png/extern_stream_086C2250_1680_387f105e_peta_indeks_30.png) |
| 88 | 160144 | `0x086C2414` | 356 | 1680 | `023` | peta | [bin](../../assets/0x70/extern/stream_086C2414_1680_6d5cd298.bin) | [png](../../assets/0x70/png/extern_stream_086C2414_1680_6d5cd298_peta_indeks_30.png) |
| 89 | 160500 | `0x086C2578` | 184 | 1680 | `133` | peta | [bin](../../assets/0x70/extern/stream_086C2578_1680_191b6afe.bin) | [png](../../assets/0x70/png/extern_stream_086C2578_1680_191b6afe_peta_indeks_30.png) |
| 90 | 160684 | `0x086C2630` | 10040 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086C2630_32768_c0dfe66c.bin) | [png](../../assets/0x70/png/extern_stream_086C2630_32768_c0dfe66c_tile.png) |
| 91 | 170724 | `0x086C4D68` | 264 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086C4D68_480_c40f1a66.bin) | [png](../../assets/0x70/png/extern_stream_086C4D68_480_c40f1a66_palet.png) |
| 92 | 170988 | `0x086C4E70` | 388 | 3304 | `130` | peta | [bin](../../assets/0x70/extern/stream_086C4E70_3304_6a918466.bin) | [png](../../assets/0x70/png/extern_stream_086C4E70_3304_6a918466_peta_indeks_28.png) |
| 93 | 171376 | `0x086C4FF4` | 260 | 3304 | `023` | peta | [bin](../../assets/0x70/extern/stream_086C4FF4_3304_2aadc31a.bin) | [png](../../assets/0x70/png/extern_stream_086C4FF4_3304_2aadc31a_peta_indeks_28.png) |
| 94 | 171636 | `0x086C50F8` | 204 | 3304 | `133` | peta | [bin](../../assets/0x70/extern/stream_086C50F8_3304_38007cab.bin) | [png](../../assets/0x70/png/extern_stream_086C50F8_3304_38007cab_peta_indeks_28.png) |
| 95 | 171840 | `0x086C51C4` | 352 | 2520 | `130` | peta | [bin](../../assets/0x70/extern/stream_086C51C4_2520_abdb632f.bin) | [png](../../assets/0x70/png/extern_stream_086C51C4_2520_abdb632f_peta_indeks_30.png) |
| 96 | 172192 | `0x086C5324` | 256 | 2520 | `024` | peta | [bin](../../assets/0x70/extern/stream_086C5324_2520_be6587b7.bin) | [png](../../assets/0x70/png/extern_stream_086C5324_2520_be6587b7_peta_indeks_30.png) |
| 97 | 172448 | `0x086C5424` | 192 | 2520 | `134` | peta | [bin](../../assets/0x70/extern/stream_086C5424_2520_a1f3407a.bin) | [png](../../assets/0x70/png/extern_stream_086C5424_2520_a1f3407a_peta_indeks_30.png) |
| 98 | 172640 | `0x086C54E4` | 332 | 1680 | `130` | peta | [bin](../../assets/0x70/extern/stream_086C54E4_1680_5143daca.bin) | [png](../../assets/0x70/png/extern_stream_086C54E4_1680_5143daca_peta_indeks_30.png) |
| 99 | 172972 | `0x086C5630` | 232 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086C5630_1680_4d32eeab.bin) | [png](../../assets/0x70/png/extern_stream_086C5630_1680_4d32eeab_peta_indeks_30.png) |
| 100 | 173204 | `0x086C5718` | 168 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086C5718_1680_315e2f93.bin) | [png](../../assets/0x70/png/extern_stream_086C5718_1680_315e2f93_peta_indeks_30.png) |
| 101 | 173372 | `0x086C57C0` | 1216 | 6144 | `230` | peta | [bin](../../assets/0x70/extern/stream_086C57C0_6144_bae7f9b1.bin) | [png](../../assets/0x70/png/extern_stream_086C57C0_6144_bae7f9b1_peta_indeks_64.png) |
| 102 | 174588 | `0x086C5C80` | 564 | 6144 | `133` | peta | [bin](../../assets/0x70/extern/stream_086C5C80_6144_c00560ae.bin) | [png](../../assets/0x70/png/extern_stream_086C5C80_6144_c00560ae_peta_indeks_64.png) |
| 103 | 175152 | `0x086C5EB4` | 472 | 6144 | `033` | peta | [bin](../../assets/0x70/extern/stream_086C5EB4_6144_fae66d36.bin) | [png](../../assets/0x70/png/extern_stream_086C5EB4_6144_fae66d36_peta_indeks_64.png) |
| 104 | 175624 | `0x086C608C` | 1204 | 6144 | `230` | peta | [bin](../../assets/0x70/extern/stream_086C608C_6144_c0f4260a.bin) | [png](../../assets/0x70/png/extern_stream_086C608C_6144_c0f4260a_peta_indeks_64.png) |
| 105 | 176828 | `0x086C6540` | 544 | 6144 | `133` | peta | [bin](../../assets/0x70/extern/stream_086C6540_6144_243ee180.bin) | [png](../../assets/0x70/png/extern_stream_086C6540_6144_243ee180_peta_indeks_64.png) |
| 106 | 177372 | `0x086C6760` | 448 | 6144 | `033` | peta | [bin](../../assets/0x70/extern/stream_086C6760_6144_04395e79.bin) | [png](../../assets/0x70/png/extern_stream_086C6760_6144_04395e79_peta_indeks_64.png) |
| 107 | 177820 | `0x086C6920` | 19724 | 32768 | `220` | tile | [bin](../../assets/0x70/extern/stream_086C6920_32768_cbe0003b.bin) | [png](../../assets/0x70/png/extern_stream_086C6920_32768_cbe0003b_tile.png) |
| 108 | 197544 | `0x086CB62C` | 308 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086CB62C_480_0078dbaf.bin) | [png](../../assets/0x70/png/extern_stream_086CB62C_480_0078dbaf_palet.png) |
| 109 | 197852 | `0x086CB760` | 4224 | 30976 | `130` | peta | [bin](../../assets/0x70/extern/stream_086CB760_30976_02d1b7e1.bin) | [png](../../assets/0x70/png/extern_stream_086CB760_30976_02d1b7e1_peta_indeks_64.png) |
| 110 | 202076 | `0x086CC7E0` | 4248 | 30976 | `130` | peta | [bin](../../assets/0x70/extern/stream_086CC7E0_30976_7a760b52.bin) | [png](../../assets/0x70/png/extern_stream_086CC7E0_30976_7a760b52_peta_indeks_64.png) |
| 111 | 206324 | `0x086CD878` | 1600 | 30976 | `130` | peta | [bin](../../assets/0x70/extern/stream_086CD878_30976_9f5e7e19.bin) | [png](../../assets/0x70/png/extern_stream_086CD878_30976_9f5e7e19_peta_indeks_64.png) |
| 112 | 207924 | `0x086CDEB8` | 308 | 480 | `130` | palet | [bin](../../assets/0x70/extern/stream_086CDEB8_480_f360fceb.bin) | [png](../../assets/0x70/png/extern_stream_086CDEB8_480_f360fceb_palet.png) |
| 113 | 208232 | `0x086CDFEC` | 20140 | 32768 | `220` | tile | [bin](../../assets/0x70/extern/stream_086CDFEC_32768_45ad7476.bin) | [png](../../assets/0x70/png/extern_stream_086CDFEC_32768_45ad7476_tile.png) |
| 114 | 228372 | `0x086D2E98` | 252 | 480 | `030` | palet | [bin](../../assets/0x70/extern/stream_086D2E98_480_053f87f7.bin) | [png](../../assets/0x70/png/extern_stream_086D2E98_480_053f87f7_palet.png) |
| 115 | 228624 | `0x086D2F94` | 3880 | 30976 | `230` | peta | [bin](../../assets/0x70/extern/stream_086D2F94_30976_c73425f8.bin) | [png](../../assets/0x70/png/extern_stream_086D2F94_30976_c73425f8_peta_indeks_64.png) |
| 116 | 232504 | `0x086D3EBC` | 4120 | 30976 | `130` | peta | [bin](../../assets/0x70/extern/stream_086D3EBC_30976_00edf3ec.bin) | [png](../../assets/0x70/png/extern_stream_086D3EBC_30976_00edf3ec_peta_indeks_64.png) |
| 117 | 236624 | `0x086D4ED4` | 1364 | 30976 | `134` | peta | [bin](../../assets/0x70/extern/stream_086D4ED4_30976_0699ead3.bin) | [png](../../assets/0x70/png/extern_stream_086D4ED4_30976_0699ead3_peta_indeks_64.png) |
| 118 | 237988 | `0x086D5428` | 224 | 480 | `130` | palet | [bin](../../assets/0x70/extern/stream_086D5428_480_7dbb0a71.bin) | [png](../../assets/0x70/png/extern_stream_086D5428_480_7dbb0a71_palet.png) |

## `gUnk_086D74F8`

| # | offset | alamat | packed | buka | format | kelas | berkas | PNG |
|---|---|---|---|---|---|---|---|---|
| 0 | 96 | `0x086D7558` | 476 | 1680 | `124` | peta | [bin](../../assets/0x70/extern/stream_086D7558_1680_ed282f8b.bin) | [png](../../assets/0x70/png/extern_stream_086D7558_1680_ed282f8b_peta_indeks_30.png) |
| 1 | 572 | `0x086D7734` | 364 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086D7734_1680_5c97de7d.bin) | [png](../../assets/0x70/png/extern_stream_086D7734_1680_5c97de7d_peta_indeks_30.png) |
| 2 | 936 | `0x086D78A0` | 232 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086D78A0_1680_31c55235.bin) | [png](../../assets/0x70/png/extern_stream_086D78A0_1680_31c55235_peta_indeks_30.png) |
| 3 | 1168 | `0x086D7988` | 472 | 1680 | `024` | peta | [bin](../../assets/0x70/extern/stream_086D7988_1680_dc50294d.bin) | [png](../../assets/0x70/png/extern_stream_086D7988_1680_dc50294d_peta_indeks_30.png) |
| 4 | 1640 | `0x086D7B60` | 300 | 1680 | `134` | peta | [bin](../../assets/0x70/extern/stream_086D7B60_1680_56994806.bin) | [png](../../assets/0x70/png/extern_stream_086D7B60_1680_56994806_peta_indeks_30.png) |
| 5 | 1940 | `0x086D7C8C` | 252 | 1680 | `033` | peta | [bin](../../assets/0x70/extern/stream_086D7C8C_1680_3bb96864.bin) | [png](../../assets/0x70/png/extern_stream_086D7C8C_1680_3bb96864_peta_indeks_30.png) |
| 6 | 2192 | `0x086D7D88` | 12576 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086D7D88_32768_0a40677c.bin) | [png](../../assets/0x70/png/extern_stream_086D7D88_32768_0a40677c_tile.png) |
| 7 | 14768 | `0x086DAEA8` | 292 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086DAEA8_480_7dacf7a7.bin) | [png](../../assets/0x70/png/extern_stream_086DAEA8_480_7dacf7a7_palet.png) |
| 8 | 15060 | `0x086DAFCC` | 3512 | 32768 | `231` | tile | [bin](../../assets/0x70/extern/stream_086DAFCC_32768_6eace27f.bin) | [png](../../assets/0x70/png/extern_stream_086DAFCC_32768_6eace27f_tile.png) |
| 9 | 18572 | `0x086DBD84` | 160 | 480 | `133` | palet | [bin](../../assets/0x70/extern/stream_086DBD84_480_04dc687d.bin) | [png](../../assets/0x70/png/extern_stream_086DBD84_480_04dc687d_palet.png) |
| 10 | 18732 | `0x086DBE24` | 152 | 1560 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DBE24_1560_3f318d0e.bin) | [png](../../assets/0x70/png/extern_stream_086DBE24_1560_3f318d0e_peta_indeks_30.png) |
| 11 | 18884 | `0x086DBEBC` | 12 | 1560 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DBEBC_1560_ad7a09f4.bin) | [png](../../assets/0x70/png/extern_stream_086DBEBC_1560_ad7a09f4_peta_indeks_30.png) |
| 12 | 18896 | `0x086DBEC8` | 172 | 1560 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DBEC8_1560_641842a0.bin) | [png](../../assets/0x70/png/extern_stream_086DBEC8_1560_641842a0_peta_indeks_30.png) |
| 13 | 19068 | `0x086DBF74` | 124 | 8400 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DBF74_8400_a09d3c56.bin) | [png](../../assets/0x70/png/extern_stream_086DBF74_8400_a09d3c56_peta_indeks_60.png) |
| 14 | 19192 | `0x086DBFF0` | 12 | 8400 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DBFF0_8400_77cea345.bin) | [png](../../assets/0x70/png/extern_stream_086DBFF0_8400_77cea345_peta_indeks_60.png) |
| 15 | 19204 | `0x086DBFFC` | 92 | 8400 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DBFFC_8400_e1583f98.bin) | [png](../../assets/0x70/png/extern_stream_086DBFFC_8400_e1583f98_peta_indeks_60.png) |
| 16 | 19296 | `0x086DC058` | 140 | 2520 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DC058_2520_b7f11d8b.bin) | [png](../../assets/0x70/png/extern_stream_086DC058_2520_b7f11d8b_peta_indeks_30.png) |
| 17 | 19436 | `0x086DC0E4` | 12 | 2520 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DC0E4_2520_ae88e92d.bin) | [png](../../assets/0x70/png/extern_stream_086DC0E4_2520_ae88e92d_peta_indeks_30.png) |
| 18 | 19448 | `0x086DC0F0` | 96 | 2520 | `023` | peta | [bin](../../assets/0x70/extern/stream_086DC0F0_2520_5bfe17dd.bin) | [png](../../assets/0x70/png/extern_stream_086DC0F0_2520_5bfe17dd_peta_indeks_30.png) |
| 19 | 19544 | `0x086DC150` | 128 | 1560 | `023` | peta | [bin](../../assets/0x70/extern/stream_086DC150_1560_39799ff5.bin) | [png](../../assets/0x70/png/extern_stream_086DC150_1560_39799ff5_peta_indeks_30.png) |
| 20 | 19672 | `0x086DC1D0` | 12 | 1560 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DC1D0_1560_ad7a09f4.bin) | [png](../../assets/0x70/png/extern_stream_086DC1D0_1560_ad7a09f4_peta_indeks_30.png) |
| 21 | 19684 | `0x086DC1DC` | 92 | 1560 | `023` | peta | [bin](../../assets/0x70/extern/stream_086DC1DC_1560_96dcbce4.bin) | [png](../../assets/0x70/png/extern_stream_086DC1DC_1560_96dcbce4_peta_indeks_30.png) |
| 22 | 19776 | `0x086DC238` | 180 | 1200 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DC238_1200_447dedbd.bin) | [png](../../assets/0x70/png/extern_stream_086DC238_1200_447dedbd_peta_indeks_30.png) |
| 23 | 19956 | `0x086DC2EC` | 44 | 1200 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DC2EC_1200_424a504c.bin) | [png](../../assets/0x70/png/extern_stream_086DC2EC_1200_424a504c_peta_indeks_30.png) |
| 24 | 20000 | `0x086DC318` | 172 | 1200 | `024` | peta | [bin](../../assets/0x70/extern/stream_086DC318_1200_5f5cddeb.bin) | [png](../../assets/0x70/png/extern_stream_086DC318_1200_5f5cddeb_peta_indeks_30.png) |

## `gUnk_086DC3F4`

| # | offset | alamat | packed | buka | format | kelas | berkas | PNG |
|---|---|---|---|---|---|---|---|---|
| 0 | 12 | `0x086DC400` | 196 | 1560 | `134` | peta | [bin](../../assets/0x70/extern/stream_086DC400_1560_0864c9f5.bin) | [png](../../assets/0x70/png/extern_stream_086DC400_1560_0864c9f5_peta_indeks_30.png) |
| 1 | 208 | `0x086DC4C4` | 12 | 1560 | `030` | peta | [bin](../../assets/0x70/extern/stream_086DC4C4_1560_ad7a09f4.bin) | [png](../../assets/0x70/png/extern_stream_086DC4C4_1560_ad7a09f4_peta_indeks_30.png) |
| 2 | 220 | `0x086DC4D0` | 124 | 1560 | `023` | peta | [bin](../../assets/0x70/extern/stream_086DC4D0_1560_2caf6322.bin) | [png](../../assets/0x70/png/extern_stream_086DC4D0_1560_2caf6322_peta_indeks_30.png) |

