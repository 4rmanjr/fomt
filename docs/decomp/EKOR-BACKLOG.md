# Backlog blocker rantai ekor (modul tail-only)

Snapshot **2026-11-27** — **dihasilkan otomatis**, jangan disunting tangan: `python3 tools/scripts/ekor_snapshot.py` (tabel + angka) lalu commit. Angka berubah setiap ada MATCH/migrasi; yang dijaga hanya strukturnya.

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

Modul tail-only lain sudah kosong di `asm/` (tidak punya blocker ekor lagi): `code_iwram`, `game_scene`, `interrupt`, `main`, `more_items`, `scene`, `sram_proxy_1`, `vtables`.

## Penjadwalan

| kelas | ukuran | arti | sisa |
|---|---|---|---|
| S | ≤100B | satu judge biasanya cukup; residual umumnya regalloc kecil |  |
| M | 101–300B | perlu 2–3 varian; perhatikan tekanan register |  |
| L | >300B | **pekerjaan tersendiri**, bukan sela-sela |  |

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

