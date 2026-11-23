# Backlog blocker rantai ekor (modul tail-only)

Snapshot **2026-11-22**. Ini dokumen arsip, bukan dokumen hidup: angkanya berubah setiap ada MATCH
atau migrasi baru. Yang perlu dijaga hanya strukturnya (kolom + cara regenerasi), bukan angkanya.

Modul tail-only = modul yang tidak dipecah per-section oleh splitter (`is_split_module() == false`),
sehingga satu-satunya cara memindahkan sebuah fungsi ke `src/` adalah mencabut **seluruh ekor** dari
fungsi itu sampai ujung berkas. Karena itu urutan kerja selalu dari **ujung** berkas ke atas, dan satu
fungsi gagal di ujung memblokir semua `promoted` di atasnya.

## Cara memperbarui

```sh
# 1. urutan ekor + NEXT/blocker per modul
python3 tools/scripts/tail_chain.py --module <stem>.s
# 2. status + catatan residual per fungsi
python3 -c "import json;d=json.load(open('decomp/state/modules/<stem>.json'));print(d['<func>']['status'], d['<func>']['ref_len'], d['<func>'].get('note','')[:120])"
# 3. modul yang masih tail-only
python3 -c "import sys;sys.path.insert(0,'decomp');import migrate,pathlib;print([p.stem for p in sorted(pathlib.Path('asm').glob('*.s')) if not migrate.is_split_module(p.stem)])"
```

## Ringkasan

| modul | fungsi masih di asm | ekor failed | promoted terkunci | blocker terakhir | status rantai |
|---|---|---|---|---|---|
| `code_actor_0809BFE8.s` | 51 | 9 | 3 | `func_0809DA00` (1323B, failed) | terkunci di ujung |
| `code_linkonce.s` | 428 | 9 | 3 | `func_080E5664` (439B, failed) | terkunci di ujung |
| `hardware.s` | 73 | 28 | 38 | `func_08008D2C` (8B, pending) | terbuka |

Delapan modul tail-only lain (`code_iwram`, `game_scene`, `interrupt`, `main`, `more_items`, `scene`,
`sram_proxy_1`, `vtables`) sudah kosong di `asm/` — tidak punya blocker ekor lagi.

## `code_actor_0809BFE8.s`

Fungsi tersisa di asm: **51** (semua belum di `src/`). Blocker terakhir menurut `tail_chain.py`: `func_0809DA00` (1323B, status `failed`).

Tabel di bawah hanya **12 entri terakhir** (batas keluaran `tail_chain.py`): itu bagian yang menentukan urutan cabut. `code_actor_0809BFE8.s` masih menyisakan **39** fungsi lain di bawahnya yang juga belum di `src/` — daftar penuhnya lewat `--json` atau shard state.

| idx | fungsi | ukuran | status | residual terakhir | catatan |
|---|---|---|---|---|---|
| 39 | `func_0809D418` | 88B | failed | len 100 vs ref 88 | - |
| 40 | `func_0809D470` | 144B | failed | len 144 vs ref 142 | - |
| 41 | `func_0809D500` | 664B | failed | kompilasi gagal (tipe/arity) | - |
| 42 | `func_0809D79C` | 60B | failed | byte +0x2: 0x1 vs ref 0x8 | - |
| 43 | `func_0809D7D8` | 200B | failed | kompilasi gagal (belum ada bentuk C) | - |
| 44 | `func_0809D8A0` | 4B | promoted | - | MATCH, menunggu giliran cabut |
| 45 | `func_0809D8A4` | 20B | promoted | - | MATCH, menunggu giliran cabut |
| 46 | `func_0809D8B8` | 28B | promoted | - | MATCH, menunggu giliran cabut |
| 47 | `func_0809D8D4` | 20B | failed | kompilasi gagal (lihat log judge) | - |
| 48 | `func_0809D8E8` | 204B | failed | kompilasi gagal (tipe/arity) | - |
| 49 | `func_0809D9B4` | 76B | failed | byte +0x1a: 0xf vs ref 0x10 [1missing,2extra,2operand @i bne #0x3e / bne #0x3c] | - |
| 50 | `func_0809DA00` | 1323B | failed | len 1310 vs ref 1322 [11missing,5extra,117operand,40regalloc,1stack,3different] | - |

## `code_linkonce.s`

Fungsi tersisa di asm: **428** (semua belum di `src/`). Blocker terakhir menurut `tail_chain.py`: `func_080E5664` (439B, status `failed`).

Tabel di bawah hanya **12 entri terakhir** (batas keluaran `tail_chain.py`): itu bagian yang menentukan urutan cabut. `code_linkonce.s` masih menyisakan **416** fungsi lain di bawahnya yang juga belum di `src/` — daftar penuhnya lewat `--json` atau shard state.

| idx | fungsi | ukuran | status | residual terakhir | catatan |
|---|---|---|---|---|---|
| 416 | `func_080E4D50` | 484B | failed | kompilasi gagal (tipe/arity) | - |
| 417 | `func_080E4F34` | 188B | failed | kompilasi gagal (tipe/arity) | - |
| 418 | `func_080E4FF0` | 688B | failed | kompilasi gagal (tipe/arity) | - |
| 419 | `func_080E52A0` | 132B | failed | kompilasi gagal (tipe/arity) | - |
| 420 | `func_080E5324` | 244B | failed | kompilasi gagal (tipe/arity) | - |
| 421 | `func_080E5418` | 20B | promoted | - | MATCH, menunggu giliran cabut |
| 422 | `func_080E542C` | 76B | promoted | - | MATCH, menunggu giliran cabut |
| 423 | `func_080E5478` | 76B | failed | byte +0x22: 0x60 vs ref 0xa0 [6extra,1different @/ ldrh r0, [r4, #4] | - |
| 424 | `func_080E54C4` | 44B | promoted | - | MATCH, menunggu giliran cabut |
| 425 | `func_080E54F0` | 192B | failed | byte +0x6: 0x1d vs ref 0x5 [25missing,25extra,8operand,1stack @>  / adds r5, r3, | - |
| 426 | `func_080E55B0` | 180B | failed | len 172 vs ref 178 [9missing,6extra,7operand,29regalloc,4stack,5different @s sub | - |
| 427 | `func_080E5664` | 439B | failed | [PARKIR ulang 2026-11-22: draf ditulis ulang 1:1 dari asm (goto per label), 210  | - |

## `hardware.s`

Fungsi tersisa di asm: **73** (semua belum di `src/`) — 28 `failed`, 38 `promoted` menunggu giliran.
Blocker terakhir menurut `tail_chain.py`: `func_08008D2C` (8B, status `pending`, harus MATCH dulu).

Tabel di bawah hanya **12 entri terakhir** (batas keluaran `tail_chain.py`): itu bagian yang menentukan urutan cabut.

| idx | fungsi | ukuran | status | catatan |
|---|---|---|---|---|
| 61 | `func_08008C70` | 28B | promoted | - |
| 62 | `func_08008C8C` | 28B | promoted | - |
| 63 | `func_08008CA8` | 28B | promoted | - |
| 64 | `func_08008CC4` | 12B | promoted | - |
| 65 | `func_08008CD0` | 12B | failed | - |
| 66 | `func_08008CDC` | 8B | pending | - |
| 67 | `func_08008CE4` | 8B | pending | - |
| 68 | `func_08008CEC` | 8B | pending | - |
| 69 | `func_08008CF4` | 8B | pending | - |
| 70 | `func_08008CFC` | 20B | pending | - |
| 71 | `func_08008D10` | 28B | pending | - |
| 72 | `func_08008D2C` | 8B | pending | - |

## Penjadwalan

Ukuran menentukan cara kerja, bukan hanya prioritas:

| kelas | ukuran | artinya | fungsi |
|---|---|---|---|
| S | ≤ 100B | satu judge biasanya cukup; residual umumnya regalloc kecil | lihat tabel di bawah |
| M | 101–300B | perlu 2–3 varian; perhatikan tekanan register | lihat tabel di bawah |
| L | > 300B | **jadwalkan sebagai pekerjaan tersendiri**, bukan sela-sela | lihat tabel di bawah |

- **(S) ≤100B**: `func_0809D418` (88B, code_actor_0809BFE8), `func_0809D79C` (60B, code_actor_0809BFE8), `func_0809D8D4` (20B, code_actor_0809BFE8), `func_0809D9B4` (76B, code_actor_0809BFE8), `func_080E5478` (76B, code_linkonce), `func_08008D3C` (72B, hardware), `func_08008E64` (84B, hardware)
- **(M) 101–300B**: `func_0809D470` (144B, code_actor_0809BFE8), `func_0809D7D8` (200B, code_actor_0809BFE8), `func_0809D8E8` (204B, code_actor_0809BFE8), `func_080E4F34` (188B, code_linkonce), `func_080E52A0` (132B, code_linkonce), `func_080E5324` (244B, code_linkonce), `func_080E54F0` (192B, code_linkonce), `func_080E55B0` (180B, code_linkonce), `func_08008CD0` (108B, hardware)
- **(L) >300B**: `func_0809D500` (664B, code_actor_0809BFE8), `func_0809DA00` (1323B, code_actor_0809BFE8), `func_080E4D50` (484B, code_linkonce), `func_080E4FF0` (688B, code_linkonce), `func_080E5664` (439B, code_linkonce)

Prioritas praktis:

1. **Promoted yang sudah di ujung** — tinggal `migrate.py` (tidak perlu judge). Ini yang membuka rantai
   untuk semua `promoted` di atasnya, dan biayanya paling kecil.
2. **Kelas S yang residualnya hanya regalloc** — kandidat MATCH cepat.
3. **Kelas L** — jadwalkan terpisah; satu fungsi kelas L biasanya menghabiskan satu sesi penuh
   (contoh: `func_080E5664` 439B, draf m2c 394B → translasi 1:1 440B, sisa 97 regalloc).

## Catatan khusus per modul

### `hardware.s` — blob `.byte` di ujung sudah dipecah

Blob `.L08008CDC` (96B, sebelumnya menempel di `ref_len` `func_08008CD0` sehingga blok itu
terbaca 108B) kini dipecah jadi 8 entri `thumb_func_start` (`func_08008CDC`…`func_08008D34`) dengan
instruksi hasil decode; byte ROM tidak berubah (`make compare` HIJAU sesudah pemecahan). `ref_len`
`func_08008CD0` turun ke 12B, dan kedelapan entri baru terdaftar lewat scan modul.
`func_08008D34` (8B, `void f(s32 *p) { p[0] -= 0x40; }`) sudah MATCH + pindah ke
`src/hardware_migrated.cc`; link berikutnya `func_08008D2C` (8B, tambah 0x40) masih `pending`.
Catatan historis: blob `func_08008FE4` (56B + 120B ekor) sudah lebih dulu MATCH/dicabut, jadi bukan
blob yang menyandera ujung berkas lagi.

### `code_linkonce.s` — blocker 439B

`func_080E5664` (idx 427) adalah ujung berkas. Struktur drafnya sudah identik dengan ref (210 vs 211
instruksi) dan sisa bedanya murni alokasi register (97 dari 210 instruksi), jadi pekerjaan lanjutannya
adalah menurunkan tekanan register — bukan menulis ulang logika. Lihat `POLA-DIFF.md` §56. Di atasnya
`func_080E5418`/`080E542C`/`080E54C4` sudah `promoted` dan menunggu giliran cabut.

### `code_actor_0809BFE8.s` — ujung 1323B

`func_0809DA00` (idx 50) adalah fungsi terbesar di seluruh backlog. Dua penerus di bawahnya
(`func_0809D9B4` 76B, `func_0809D8E8` 204B) masih `failed`, dan tiga `promoted` kecil
(`func_0809D8A0` 4B, `func_0809D8A4` 20B, `func_0809D8B8` 28B) terkunci di belakangnya. Urutan kerja:
`0809DA00` → `0809D9B4` → `0809D8E8` → `0809D8D4` → baru tiga `promoted` itu bisa dicabut.

Dokumen ini sengaja tidak memuat hitungan MATCH/promoted global — ambil angka terkini dengan
`fomt status` supaya tidak basi.
