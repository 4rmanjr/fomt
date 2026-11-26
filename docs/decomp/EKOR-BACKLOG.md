# Backlog blocker rantai ekor (modul tail-only)

Snapshot **2026-11-26** — **dihasilkan otomatis**, jangan disunting tangan: `python3 tools/scripts/ekor_snapshot.py` (tabel + angka) lalu commit. Angka berubah setiap ada MATCH/migrasi; yang dijaga hanya strukturnya.

Modul tail-only = modul yang tidak dipecah per-section oleh splitter (`is_split_module() == false`), sehingga satu-satunya cara memindahkan sebuah fungsi ke `src/` adalah mencabut **seluruh ekor** dari fungsi itu sampai ujung berkas. Karena itu urutan kerja selalu dari **ujung** berkas ke atas, dan satu fungsi gagal di ujung memblokir semua `promoted` di atasnya.

## Cara memperbarui

```sh
python3 tools/scripts/ekor_snapshot.py           # tulis dokumen ini
python3 tools/scripts/ekor_snapshot.py --check   # gate: exit 1 bila basi
```

Detail per modul tetap bisa dilihat langsung:

```sh
python3 tools/scripts/tail_chain.py --module <stem>.s [--json]
```

## Ringkasan

| modul | tersisa di asm | promoted terkunci | blocker terakhir | status rantai |
|---|---|---|---|---|
| `code_linkonce.s` | 428 | 168 | `func_080E5664` (439B, `failed`) | terbuka, ujung belum MATCH |
| `code_actor_0809BFE8.s` | 51 | 27 | `func_0809DA00` (1323B, `failed`) | terbuka, ujung belum MATCH |
| `hardware.s` | 34 | 10 | `func_080087C8` (239B, `failed`) | terbuka, ujung belum MATCH |

Modul tail-only lain sudah kosong di `asm/` (tidak punya blocker ekor lagi): `code_iwram`, `game_scene`, `interrupt`, `main`, `more_items`, `scene`, `sram_proxy_1`, `vtables`.

## `code_linkonce.s`

Sisa **428** fungsi (168 `promoted`, 260 `failed`). Tabel = 12 entri terakhir; 416 fungsi lain di bawahnya juga belum di `src/`.

| idx | fungsi | ukuran | status | residual terakhir |
|---|---|---|---|---|
| 416 | `func_080E4D50` | 484B | failed | kompilasi: dereferencing `void *' pointer |
| 417 | `func_080E4F34` | 188B | failed | kompilasi: passing arg 2 of `func_08007C28' makes integer from… |
| 418 | `func_080E4FF0` | 688B | failed | kompilasi: dereferencing `void *' pointer |
| 419 | `func_080E52A0` | 132B | failed | kompilasi: dereferencing `void *' pointer |
| 420 | `func_080E5324` | 244B | failed | kompilasi: passing arg 2 of `func_08007C28' makes integer from… |
| 421 | `func_080E5418` | 20B | promoted | - |
| 422 | `func_080E542C` | 76B | promoted | - |
| 423 | `func_080E5478` | 76B | promoted | MATCH, menunggu giliran cabut |
| 424 | `func_080E54C4` | 44B | promoted | - |
| 425 | `func_080E54F0` | 192B | failed | byte +0x6: 0x1d vs ref 0x5 |
| 426 | `func_080E55B0` | 180B | failed | len 172 vs ref 178 |
| 427 | `func_080E5664` | 439B | failed | BASELINE judge 7m/7e/20o/55r (m+e+o 34), lokal dif4 27m/26e/42o (dari note, belum ada catatan migrate) |

Peta gerbang: urutan kerja wajib dari ujung, jadi tiap baris menyebut satu fungsi non-`promoted` dan `promoted` yang baru bisa dicabut setelah fungsi itu MATCH + dicabut.

| dari ujung | fungsi gerbang | ukuran | membuka |
|---|---|---|---|
| 0 | `func_080E5664` | 439B | - |
| 1 | `func_080E55B0` | 180B | - |
| 2 | `func_080E54F0` | 192B | `func_080E54C4`, `func_080E5478`, `func_080E542C`, `func_080E5418` |
| 7 | `func_080E5324` | 244B | - |
| 8 | `func_080E52A0` | 132B | - |
| 9 | `func_080E4FF0` | 688B | - |
| 10 | `func_080E4F34` | 188B | - |
| 11 | `func_080E4D50` | 484B | - |
| 12 | `func_080E4940` | 1040B | - |
| 13 | `func_080E4860` | 224B | - |
| 14 | `func_080E4564` | 764B | `func_080E4544`, `func_080E4510`, `func_080E44E4`, `func_080E44B8` |
| 19 | `func_080E4438` | 128B | - |
| 20 | `func_080E43FC` | 60B | - |
| 21 | `func_080E43B8` | 68B | - |
| 22 | `func_080E4304` | 180B | - |
| 23 | `func_080E4244` | 192B | `func_080E4238` |
| 25 | `func_080E4210` | 40B | - |
| 26 | `func_080E41E8` | 40B | - |
| 27 | `func_080E41B0` | 56B | `func_080E4190` |
| 29 | `func_080E40A0` | 232B | - |
| 30 | `func_080E3F40` | 352B | - |
| 31 | `func_080E3E9C` | 164B | `func_080E3E28`, `func_080E3DB4`, `func_080E3D94` |
| 35 | `func_080E3C3C` | 336B | - |
| 36 | `func_080E3B80` | 188B | `func_080E3B60` |
| 38 | `func_080E3A9C` | 196B | `func_080E3A8C`, `func_080E3A80` |
| 41 | `func_080E3A6C` | 20B | `func_080E3A5C`, `func_080E3A50`, `func_080E3A44` |
| 45 | `func_080E39EC` | 88B | - |
| 46 | `func_080E3994` | 88B | - |
| 47 | `func_080E3938` | 92B | `func_080E392C`, `func_080E3920`, `func_080E3914`, `func_080E3910`, `func_080E38E0` |
| 53 | `func_080E38B0` | 48B | - |
| 54 | `func_080E3874` | 60B | `func_080E3868`, `func_080E385C`, `func_080E3858` |
| 58 | `func_080E37DC` | 124B | - |
| 59 | `func_080E379C` | 64B | `func_080E3774`, `func_080E375C`, `func_080E3734`, `func_080E3730` |
| 64 | `func_080E36B4` | 124B | `func_080E3678`, `func_080E3650`, `func_080E3628`, `func_080E3610`, `func_080E35E8`, `func_080E35DC` |
| 71 | `func_080E3504` | 212B | - |
| 72 | `func_080E34DC` | 40B | - |
| 73 | `func_080E3494` | 72B | - |
| 74 | `func_080E3398` | 252B | - |
| 75 | `func_080E3054` | 836B | - |
| 76 | `func_080E2F74` | 224B | - |
| 77 | `func_080E2EA4` | 208B | `func_080E2E78` |
| 79 | `func_080E2DC8` | 176B | - |
| 80 | `func_080E2BB4` | 532B | `func_080E2B88`, `func_080E2B5C` |
| 83 | `func_080E2B28` | 52B | - |
| 84 | `func_080E2970` | 440B | - |
| 85 | `func_080E28BC` | 180B | - |
| 86 | `func_080E27FC` | 192B | - |
| 87 | `func_080E25FC` | 512B | - |
| 88 | `func_080E2444` | 440B | - |
| 89 | `func_080E2390` | 180B | - |
| 90 | `func_080E2354` | 60B | - |
| 91 | `func_080E2294` | 192B | - |
| 92 | `func_080E21E0` | 180B | - |
| 93 | `func_080E21A8` | 56B | - |
| 94 | `func_080E2170` | 56B | - |
| 95 | `func_080E211C` | 84B | `func_080E2110`, `func_080E2104`, `func_080E20F8`, `func_080E20C0` |
| 100 | `func_080E2094` | 44B | - |
| 101 | `func_080E2018` | 124B | - |
| 102 | `func_080E1FAC` | 108B | - |
| 103 | `func_080E1E28` | 388B | - |
| 104 | `func_080E1DD4` | 84B | `func_080E1DC8`, `func_080E1DBC`, `func_080E1DB0`, `func_080E1DA4`, `func_080E1D98`, `func_080E1D8C` |
| 111 | `func_080E1D54` | 56B | - |
| 112 | `func_080E1C70` | 228B | - |
| 113 | `func_080E1C18` | 88B | - |
| 114 | `func_080E1A70` | 424B | `func_080E1A54`, `func_080E1A48`, `func_080E1A28`, `func_080E19F8` |
| 119 | `func_080E19A4` | 84B | `func_080E1984`, `func_080E1964` |
| 122 | `func_080E18A4` | 184B | - |
| 123 | `func_080E1844` | 96B | `func_080E1824` |
| 125 | `func_080E15C0` | 604B | - |
| 126 | `func_080E14B8` | 264B | `func_080E1498` |
| 128 | `func_080E11EC` | 676B | - |
| 129 | `func_080E118C` | 96B | - |
| 130 | `func_080E1148` | 68B | `func_080E1128` |
| 132 | `func_080E10F8` | 48B | `func_080E10EC`, `func_080E10E0` |
| 135 | `func_080E105C` | 128B | `func_080E103C`, `func_080E1030`, `func_080E1024`, `func_080E1018` |
| 140 | `func_080E0F90` | 136B | `func_080E0F48`, `func_080E0EFC`, `func_080E0EF0` |
| 144 | `func_080E0E80` | 51B | `func_080E0D70`, `func_080E0D64`, `func_080E0D50` |
| 148 | `func_080E0C38` | 276B | - |
| 149 | `func_080E0A94` | 420B | `func_080E0A88`, `func_080E0A7C` |
| 152 | `func_080E0A08` | 116B | `func_080E09E4` |
| 154 | `func_080E09BC` | 40B | `func_080E09B0` |
| 156 | `func_080E0908` | 156B | - |
| 157 | `func_080E0094` | 2164B | - |
| 158 | `sub_080DFE84` | 528B | - |
| 159 | `func_080DE298` | 7148B | `func_080DE28C`, `func_080DE280` |
| 162 | `func_080DE220` | 96B | - |
| 163 | `func_080DE1B4` | 104B | `func_080DE184` |
| 165 | `func_080DE134` | 80B | `func_080DE128` |
| 167 | `func_080DE0AC` | 124B | - |
| 168 | `func_080DE080` | 44B | - |
| 169 | `func_080DE05C` | 36B | `func_080DE050` |
| 171 | `func_080DE00C` | 68B | - |
| 172 | `func_080DDFE0` | 44B | - |
| 173 | `func_080DDFBC` | 36B | `func_080DDFB0` |
| 175 | `func_080DDF68` | 72B | - |
| 176 | `func_080DDF3C` | 44B | - |
| 177 | `func_080DDF18` | 36B | `func_080DDF0C` |
| 179 | `func_080DDEC4` | 72B | - |
| 180 | `func_080DDE98` | 44B | - |
| 181 | `func_080DDE74` | 36B | `func_080DDE68` |
| 183 | `func_080DDC78` | 496B | - |
| 184 | `func_080DDC48` | 48B | - |
| 185 | `func_080DDC24` | 36B | `func_080DDC18` |
| 187 | `func_080DD9CC` | 588B | - |
| 188 | `func_080DD994` | 56B | - |
| 189 | `func_080DD944` | 80B | `func_080DD938` |
| 191 | `func_080DD8BC` | 124B | - |
| 192 | `func_080DD890` | 44B | - |
| 193 | `func_080DD86C` | 36B | `func_080DD860` |
| 195 | `func_080DD7E4` | 124B | - |
| 196 | `func_080DD7B8` | 44B | - |
| 197 | `func_080DD794` | 36B | `func_080DD788` |
| 199 | `func_080DD5E4` | 420B | - |
| 200 | `func_080DD5B8` | 44B | - |
| 201 | `func_080DD594` | 36B | `func_080DD588` |
| 203 | `func_080DD540` | 72B | - |
| 204 | `func_080DD514` | 44B | - |
| 205 | `func_080DD4F0` | 36B | `func_080DD4E4` |
| 207 | `func_080DD460` | 132B | - |
| 208 | `func_080DD434` | 44B | - |
| 209 | `func_080DD410` | 36B | `func_080DD404` |
| 211 | `func_080DD3D4` | 48B | - |
| 212 | `func_080DD3A8` | 44B | - |
| 213 | `func_080DCFE0` | 968B | `func_080DCFCC`, `func_080DCF4C`, `func_080DCF20`, `func_080DCEEC`, `func_080DCEC0`, `func_080DCE94`, `func_080DCE60` |
| 221 | `func_080DCDB0` | 176B | - |
| 222 | `func_080DCD2C` | 132B | - |
| 223 | `func_080DCB7C` | 432B | `func_080DCB70`, `func_080DCB64`, `func_080DCB58`, `func_080DCB4C`, `func_080DCB40`, `func_080DCB34`, `func_080DCB28`, `func_080DCB1C`, `func_080DCB10`, `func_080DCB04`, `func_080DCAF8`, `func_080DCAEC`, `func_080DCAE0`, `func_080DCAD4`, `func_080DCAC8`, `func_080DCABC`, `func_080DCAB0`, `func_080DCAA4`, `func_080DCA98`, `func_080DCA8C`, `func_080DCA80`, `func_080DCA74`, `func_080DCA68`, `func_080DCA5C`, `func_080DCA50`, `func_080DCA44`, `func_080DCA38`, `func_080DCA2C`, `func_080DCA20`, `func_080DCA14`, `func_080DCA08`, `func_080DC9FC`, `func_080DC9F0`, `func_080DC9E4`, `func_080DC9D8`, `func_080DC9CC`, `func_080DC9C0` |
| 261 | `func_080DC96C` | 84B | - |
| 262 | `func_080DC840` | 300B | - |
| 263 | `func_080DC764` | 220B | - |
| 264 | `func_080DC724` | 64B | - |
| 265 | `func_080DC67C` | 168B | - |
| 266 | `func_080DC57C` | 256B | - |
| 267 | `func_080DC554` | 40B | - |
| 268 | `func_080DC50C` | 72B | - |
| 269 | `func_080DC4E4` | 40B | - |
| 270 | `func_080DC49C` | 72B | - |
| 271 | `func_080DC474` | 40B | - |
| 272 | `func_080DC42C` | 72B | - |
| 273 | `func_080DC404` | 40B | - |
| 274 | `func_080DC3A0` | 100B | - |
| 275 | `func_080DC360` | 64B | - |
| 276 | `func_080DC2B4` | 172B | `func_080DC294`, `func_080DC288` |
| 279 | `func_080DC244` | 68B | - |
| 280 | `func_080DC21C` | 40B | - |
| 281 | `func_080DC1D4` | 72B | `func_080DC1C8` |
| 283 | `func_080DC1A0` | 40B | - |
| 284 | `func_080DC158` | 72B | - |
| 285 | `func_080DC130` | 40B | - |
| 286 | `func_080DC0E8` | 72B | - |
| 287 | `func_080DC0C0` | 40B | - |
| 288 | `func_080DC068` | 88B | - |
| 289 | `func_080DC040` | 40B | - |
| 290 | `func_080DBFF8` | 72B | - |
| 291 | `func_080DBFD0` | 40B | - |
| 292 | `func_080DBF88` | 72B | - |
| 293 | `func_080DBF60` | 40B | - |
| 294 | `func_080DBF18` | 72B | - |
| 295 | `func_080DBEF0` | 40B | - |
| 296 | `func_080DBEA8` | 72B | - |
| 297 | `func_080DBE80` | 40B | - |
| 298 | `func_080DBE38` | 72B | - |
| 299 | `func_080DBE10` | 40B | - |
| 300 | `func_080DBDC8` | 72B | - |
| 301 | `func_080DBDA0` | 40B | - |
| 302 | `func_080DBD58` | 72B | - |
| 303 | `func_080DBD30` | 40B | - |
| 304 | `func_080DBCE8` | 72B | - |
| 305 | `func_080DBCC0` | 40B | - |
| 306 | `func_080DBC78` | 72B | - |
| 307 | `func_080DBC50` | 40B | - |
| 308 | `func_080DBC0C` | 68B | - |
| 309 | `func_080DBBE4` | 40B | - |
| 310 | `func_080DBB9C` | 72B | - |
| 311 | `func_080DBB74` | 40B | - |
| 312 | `func_080DBB2C` | 72B | - |
| 313 | `func_080DBB04` | 40B | - |
| 314 | `func_080DBABC` | 72B | - |
| 315 | `func_080DBA94` | 40B | - |
| 316 | `func_080DBA4C` | 72B | - |
| 317 | `func_080DBA24` | 40B | - |
| 318 | `func_080DB9DC` | 72B | - |
| 319 | `func_080DB9B4` | 40B | - |
| 320 | `func_080DB96C` | 72B | - |
| 321 | `func_080DB944` | 40B | - |
| 322 | `func_080DB8FC` | 72B | - |
| 323 | `func_080DB8D4` | 40B | - |
| 324 | `func_080DB88C` | 72B | - |
| 325 | `func_080DB864` | 40B | - |
| 326 | `func_080DB81C` | 72B | - |
| 327 | `func_080DB7F4` | 40B | - |
| 328 | `func_080DB7AC` | 72B | - |
| 329 | `func_080DB784` | 40B | - |
| 330 | `func_080DB73C` | 72B | `func_080DB714` |
| 332 | `func_080DB6CC` | 72B | - |
| 333 | `func_080DB6A4` | 40B | - |
| 334 | `func_080DB658` | 76B | - |
| 335 | `func_080DB630` | 40B | - |
| 336 | `func_080DB3DC` | 596B | - |
| 337 | `func_080DB394` | 72B | - |
| 338 | `func_080DB36C` | 40B | - |
| 339 | `func_080DB320` | 76B | `func_080DB314` |
| 341 | `func_080DB2EC` | 40B | - |
| 342 | `func_080DB238` | 180B | - |
| 343 | `func_080DB1E4` | 84B | - |
| 344 | `func_080DB0EC` | 248B | - |
| 345 | `sub_080DA76C` | 2399B | - |
| 346 | `sub_080D8178` | 9716B | - |
| 347 | `func_080D7F9C` | 476B | `func_080D7F88`, `func_080D7F74`, `func_080D7F60` |
| 351 | `func_080D7F3C` | 36B | - |
| 352 | `func_080D7F08` | 52B | - |
| 353 | `func_080D7ECC` | 60B | - |
| 354 | `func_080D7E64` | 104B | `func_080D7B44`, `func_080D7B38`, `func_080D7B2C` |
| 358 | `func_080D7B04` | 32B | - |
| 359 | `func_080D7AD4` | 40B | `func_080D7AAC` |
| 361 | `func_080D79CC` | 224B | - |
| 362 | `func_080D7944` | 136B | - |
| 363 | `func_080D78F8` | 76B | - |
| 364 | `func_080D78E0` | 24B | - |
| 365 | `func_080D7880` | 96B | `func_080D7874`, `func_080D7868`, `func_080D782C`, `func_080D781C`, `func_080D780C` |
| 371 | `func_080D772C` | 224B | `func_080D770C` |
| 373 | `func_080D76C0` | 76B | - |
| 374 | `func_080D7678` | 72B | - |
| 375 | `func_080D7634` | 68B | - |
| 376 | `func_080D75E0` | 84B | `func_080D7568` |
| 378 | `func_080D74F0` | 120B | - |
| 379 | `func_080D7480` | 112B | - |
| 380 | `func_080D73E4` | 156B | - |
| 381 | `func_080D734C` | 152B | - |
| 382 | `func_080D72C4` | 136B | - |
| 383 | `func_080D7240` | 132B | - |
| 384 | `func_080D71AC` | 148B | - |
| 385 | `func_080D7118` | 148B | - |
| 386 | `func_080D7094` | 132B | - |
| 387 | `func_080D7014` | 128B | - |
| 388 | `func_080D6F7C` | 152B | `func_080D6F5C`, `func_080D6F3C`, `func_080D6F1C`, `func_080D6F0C`, `func_080D6EEC`, `func_080D6ECC`, `func_080D6EAC`, `func_080D6E98` |
| 397 | `func_080D6DB8` | 224B | `func_080D6D98`, `func_080D6D8C` |
| 400 | `func_080D6C58` | 304B | - |
| 401 | `func_080D6C08` | 80B | - |
| 402 | `func_080D6B40` | 200B | - |
| 403 | `func_080D6B00` | 64B | - |
| 404 | `func_080D6A80` | 128B | - |
| 405 | `func_080D68C0` | 448B | - |
| 406 | `func_080D67C8` | 131B | - |
| 407 | `func_080D66A4` | 292B | - |
| 408 | `func_080D657C` | 296B | - |
| 409 | `func_080D64C8` | 180B | - |
| 410 | `func_080D60B0` | 1048B | - |
| 411 | `func_080D44D4` | 7132B | - |
| 412 | `func_080D4480` | 84B | - |
| 413 | `func_080D4178` | 776B | - |
| 414 | `func_080D4130` | 72B | - |
| 415 | `func_080D40CC` | 100B | - |
| 416 | `func_080D406C` | 96B | `func_080D404C`, `func_080D4040` |
| 419 | `func_080D4004` | 60B | - |
| 420 | `func_080D3EF4` | 272B | `func_080D3ED4` |
| 422 | `func_080D3C78` | 604B | `func_080D3C6C`, `func_080D3C60` |
| 425 | `func_080D3C24` | 60B | - |
| 426 | `func_080D3BE8` | 60B | - |
| 427 | `func_080D3BC0` | 40B | - |

## `code_actor_0809BFE8.s`

Sisa **51** fungsi (27 `promoted`, 24 `failed`). Tabel = 12 entri terakhir; 39 fungsi lain di bawahnya juga belum di `src/`.

| idx | fungsi | ukuran | status | residual terakhir |
|---|---|---|---|---|
| 39 | `func_0809D418` | 88B | failed | len 100 vs ref 88 |
| 40 | `func_0809D470` | 144B | failed | len 144 vs ref 142 |
| 41 | `func_0809D500` | 664B | failed | kompilasi: dereferencing `void *' pointer |
| 42 | `func_0809D79C` | 60B | failed | byte +0x2: 0x1 vs ref 0x8 |
| 43 | `func_0809D7D8` | 200B | failed | case label not within a switch statement |
| 44 | `func_0809D8A0` | 4B | promoted | - |
| 45 | `func_0809D8A4` | 20B | promoted | - |
| 46 | `func_0809D8B8` | 28B | promoted | - |
| 47 | `func_0809D8D4` | 20B | promoted | MATCH, menunggu giliran cabut |
| 48 | `func_0809D8E8` | 204B | failed | kompilasi: dereferencing `void *' pointer |
| 49 | `func_0809D9B4` | 76B | failed | byte +0x1a: 0xf vs ref 0x10 |
| 50 | `func_0809DA00` | 1323B | failed | len 1310 vs ref 1322 [11missing,5extra,117operand,40regalloc,1s… (dari note, belum ada catatan migrate) |

Peta gerbang: urutan kerja wajib dari ujung, jadi tiap baris menyebut satu fungsi non-`promoted` dan `promoted` yang baru bisa dicabut setelah fungsi itu MATCH + dicabut.

| dari ujung | fungsi gerbang | ukuran | membuka |
|---|---|---|---|
| 0 | `func_0809DA00` | 1323B | - |
| 1 | `func_0809D9B4` | 76B | - |
| 2 | `func_0809D8E8` | 204B | `func_0809D8D4`, `func_0809D8B8`, `func_0809D8A4`, `func_0809D8A0` |
| 7 | `func_0809D7D8` | 200B | - |
| 8 | `func_0809D79C` | 60B | - |
| 9 | `func_0809D500` | 664B | - |
| 10 | `func_0809D470` | 144B | - |
| 11 | `func_0809D418` | 88B | - |
| 12 | `func_0809D168` | 684B | - |
| 13 | `func_0809CF34` | 564B | - |
| 14 | `func_0809CE8C` | 168B | `func_0809CE7C`, `func_0809CE30`, `func_0809CE24`, `func_0809CE1C`, `func_0809CDEC`, `func_0809CDCC`, `func_0809CD98` |
| 22 | `func_0809CD78` | 32B | - |
| 23 | `func_0809C6BC` | 1724B | `func_0809C6B0`, `func_0809C6AC`, `func_0809C694`, `func_0809C644` |
| 28 | `func_0809C600` | 68B | `func_0809C5F4`, `func_0809C5EC`, `func_0809C5D0`, `func_0809C5B4` |
| 33 | `func_0809C510` | 160B | - |
| 34 | `func_0809C4E4` | 44B | `func_0809C4B4`, `func_0809C474`, `func_0809C444` |
| 38 | `func_0809C420` | 36B | - |
| 39 | `func_0809C3E0` | 64B | - |
| 40 | `func_0809C3BC` | 36B | `func_0809C38C` |
| 42 | `func_0809C32C` | 96B | - |
| 43 | `func_0809C304` | 40B | - |
| 44 | `func_0809C22C` | 216B | - |
| 45 | `func_0809C144` | 232B | - |
| 46 | `func_0809C0D4` | 112B | `func_0809C0C8`, `func_0809C0BC`, `func_0809C0AC`, `func_0809C0A0` |

## `hardware.s`

Sisa **34** fungsi (10 `promoted`, 24 `failed`). Tabel = 12 entri terakhir; 22 fungsi lain di bawahnya juga belum di `src/`.

| idx | fungsi | ukuran | status | residual terakhir |
|---|---|---|---|---|
| 22 | `func_08007F84` | 156B | failed | kompilasi: assignment makes pointer from integer without a cast |
| 23 | `func_08008020` | 128B | promoted | - |
| 24 | `func_080080A0` | 700B | failed (byte ekor) (MULTI-FUNGSI 3 prolog) | kompilasi: assignment makes pointer from integer without a cast |
| 25 | `func_0800835C` | 8B | promoted | - |
| 26 | `func_08008364` | 108B | failed | kompilasi: dereferencing `void *' pointer |
| 27 | `func_080083D0` | 116B | failed | kompilasi: passing arg 2 of `func_08007CD8' makes integer from… |
| 28 | `func_08008444` | 152B | failed | byte +0x2: 0x6 vs ref 0x81 |
| 29 | `func_080084DC` | 152B | failed | len 160 vs ref 152 |
| 30 | `func_08008574` | 328B | failed (byte ekor) (MULTI-FUNGSI 2 prolog) | byte +0x6: 0x6 vs ref 0x81 |
| 31 | `func_080086BC` | 104B | failed | byte +0x6: 0x14 vs ref 0x16 |
| 32 | `func_08008724` | 164B | failed (byte ekor) (MULTI-FUNGSI 2 prolog) | byte +0x2: 0x81 vs ref 0x84 |
| 33 | `func_080087C8` | 239B | failed | migrate TOLAK: tidak ada kandidat: status di shard bukan promoted (butuh MATCH… |

Peta gerbang: urutan kerja wajib dari ujung, jadi tiap baris menyebut satu fungsi non-`promoted` dan `promoted` yang baru bisa dicabut setelah fungsi itu MATCH + dicabut.

| dari ujung | fungsi gerbang | ukuran | membuka |
|---|---|---|---|
| 0 | `func_080087C8` | 239B | - |
| 1 | `func_08008724` | 164B | - |
| 2 | `func_080086BC` | 104B | - |
| 3 | `func_08008574` | 328B | - |
| 4 | `func_080084DC` | 152B | - |
| 5 | `func_08008444` | 152B | - |
| 6 | `func_080083D0` | 116B | - |
| 7 | `func_08008364` | 108B | `func_0800835C` |
| 9 | `func_080080A0` | 700B | `func_08008020` |
| 11 | `func_08007F84` | 156B | `func_08007EE8`, `func_08007EC8`, `func_08007EA8` |
| 15 | `func_08007E24` | 132B | - |
| 16 | `func_08007DB8` | 108B | - |
| 17 | `func_08007D4C` | 108B | - |
| 18 | `func_08007CD8` | 116B | - |
| 19 | `func_08007C28` | 176B | - |
| 20 | `func_08007B54` | 212B | - |
| 21 | `func_08007A28` | 300B | - |
| 22 | `func_080079E8` | 64B | - |
| 23 | `func_08007874` | 372B | `func_08007844`, `func_080077DC`, `func_08007770`, `func_08007714`, `func_0800770C` |
| 29 | `func_08007510` | 508B | - |
| 30 | `func_080074C0` | 80B | - |
| 31 | `func_0800745C` | 100B | - |
| 32 | `func_080073E0` | 124B | - |
| 33 | `func_0800736C` | 116B | - |

## Penjadwalan

| kelas | ukuran | arti | sisa / linkonce / actor_0809BFE8 / hardware |
|---|---|---|---|
| S | ≤100B | satu judge biasanya cukup; residual umumnya regalloc kecil | 316 / 38 / 9 |
| M | 101–300B | perlu 2–3 varian; perhatikan tekanan register | 77 / 8 / 21 |
| L | >300B | **pekerjaan tersendiri**, bukan sela-sela | 35 / 5 / 4 |

Angka kelas dihitung dari fungsi yang masih punya label di `asm/` dan punya `ref_len` di shard (label tanpa entri state tidak ikut kelas, tetapi tetap dihitung di kolom "tersisa di asm").

1. **Promoted di ujung** — cukup `migrate.py`, tanpa judge; biaya terkecil dan membuka rantai di atasnya.
2. **Kelas S dengan residual regalloc/operand kecil** — kandidat MATCH cepat.
3. **Kelas L** dijadwalkan terpisah; satu fungsi biasanya menghabiskan satu sesi.

<!-- manual:catatan-per-modul -->
## Catatan khusus per modul

### `hardware.s` — ujung pindah ke `func_08008D10`

Blob `.L08008CDC` (96B) sudah lama dipecah jadi 8 entri `thumb_func_start`; `func_08008D34` (8B) dan
`func_08008D2C` (8B, `p[0] += 0x40`) sudah MATCH + pindah ke `src/hardware_migrated.cc`, sehingga ujung
berkas kini `func_08008D10` (28B) — **dinding**, lihat `POLA-DIFF.md` §64: ref memuat konstanta 5 lewat pool
(`ldr r1,=5; lsls #0x18; lsrs #0x18`) sedangkan agbcc selalu melipat jadi `movs r1,#5` (20B), dan 322 bentuk
C sudah diuji tanpa hasil. Tetangganya `func_08008B24` memakai pola pool yang sama untuk `u16` dan draf C
naturalnya pun tidak mereproduksi ROM, jadi bagian sound modul ini berasal dari asm tangan atau toolchain
lama. Karena `hardware.s` tail-only, ujung ini mengunci seluruh `pending` di atasnya sampai ada keputusan
kebijakan (mis. blok asm verbatim diizinkan bertahan untuk fungsi asm-tangan). `func_08008E64`/`08008F0C`/`08008EB8`/`08008F60` sudah lebih dulu pindah.

### `code_linkonce.s` — blocker 439B

`func_080E5664` (idx 427) adalah ujung berkas. Struktur draf sudah identik dengan ref (210 vs 211
instruksi); sisa bedanya murni alokasi register. Tiga arah penurunan tekanan sudah diuji dan gagal
(pecah `L571E`, satu variabel flag, pin `fl`→`sb`/`n`→`r2`), dan mencabut pin `a0`→`r7` justru
memunculkan spill arg0 — lihat `POLA-DIFF.md` §56. Di atasnya `080E5418`/`080E542C`/`080E5478`/`080E54C4`
sudah `promoted` dan menunggu giliran cabut.

### `code_actor_0809BFE8.s` — ujung 1323B

`func_0809DA00` (idx 50) adalah fungsi terbesar di backlog. Urutan kerja: `0809DA00` → `0809D9B4` →
`0809D8E8` → `0809D8D4` → baru tiga `promoted` kecil (`0809D8A0` 4B, `0809D8A4` 20B, `0809D8B8` 28B)
bisa dicabut.

Dokumen ini sengaja tidak memuat hitungan MATCH/promoted global — ambil angka terkini dengan
`fomt status` supaya tidak basi.

