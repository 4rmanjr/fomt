# Backlog blocker rantai ekor (modul tail-only)

Snapshot **2026-11-23** — **dihasilkan otomatis**, jangan disunting tangan: `python3 tools/scripts/ekor_snapshot.py` (tabel + angka) lalu commit. Angka berubah setiap ada MATCH/migrasi; yang dijaga hanya strukturnya.

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
| `code_linkonce.s` | 428 | 165 | `func_080E5664` (439B, `failed`) | terbuka, ujung belum MATCH |
| `hardware.s` | 72 | 40 | `func_08008D10` (28B, `pending`) | terkunci: ujung dinding (lihat note) |
| `code_actor_0809BFE8.s` | 51 | 26 | `func_0809DA00` (1323B, `failed`) | terbuka, ujung belum MATCH |

Modul tail-only lain sudah kosong di `asm/` (tidak punya blocker ekor lagi): `code_iwram`, `game_scene`, `interrupt`, `main`, `more_items`, `scene`, `sram_proxy_1`, `vtables`.

## `code_linkonce.s`

Sisa **428** fungsi (165 `promoted`, 263 `failed`). Tabel = 12 entri terakhir; 416 fungsi lain di bawahnya juga belum di `src/`.

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
| 427 | `func_080E5664` | 439B | failed | PARKIR: draf 1:1 (440B/210 instr, judge 15missing/15extra/36ope… |

## `hardware.s`

Sisa **72** fungsi (40 `promoted`, 26 `failed`, 6 `pending`). Tabel = 12 entri terakhir; 60 fungsi lain di bawahnya juga belum di `src/`.

| idx | fungsi | ukuran | status | residual terakhir |
|---|---|---|---|---|
| 60 | `func_08008C54` | 28B | promoted | - |
| 61 | `func_08008C70` | 28B | promoted | - |
| 62 | `func_08008C8C` | 28B | promoted | - |
| 63 | `func_08008CA8` | 28B | promoted | - |
| 64 | `func_08008CC4` | 12B | promoted | - |
| 65 | `func_08008CD0` | 12B | failed | kompilasi: dereferencing `void *' pointer |
| 66 | `func_08008CDC` | 8B | pending | - |
| 67 | `func_08008CE4` | 8B | pending | - |
| 68 | `func_08008CEC` | 8B | pending | - |
| 69 | `func_08008CF4` | 8B | pending | - |
| 70 | `func_08008CFC` | 20B | pending | - |
| 71 | `func_08008D10` | 28B | pending | DINDING toolchain: ref memuat konstanta 5 lewat literal pool la… |

## `code_actor_0809BFE8.s`

Sisa **51** fungsi (26 `promoted`, 25 `failed`). Tabel = 12 entri terakhir; 39 fungsi lain di bawahnya juga belum di `src/`.

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
| 47 | `func_0809D8D4` | 20B | failed | In function `func_0809D8D4': invalid type argument of `->' |
| 48 | `func_0809D8E8` | 204B | failed | kompilasi: dereferencing `void *' pointer |
| 49 | `func_0809D9B4` | 76B | failed | byte +0x1a: 0xf vs ref 0x10 |
| 50 | `func_0809DA00` | 1323B | failed | len 1310 vs ref 1322 [11missing,5extra,117operand,40regalloc,1s… |

## Penjadwalan

| kelas | ukuran | arti | sisa / linkonce / hardware / actor_0809BFE8 |
|---|---|---|---|
| S | ≤100B | satu judge biasanya cukup; residual umumnya regalloc kecil | 316 / 45 / 38 |
| M | 101–300B | perlu 2–3 varian; perhatikan tekanan register | 77 / 23 / 8 |
| L | >300B | **pekerjaan tersendiri**, bukan sela-sela | 35 / 4 / 5 |

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

