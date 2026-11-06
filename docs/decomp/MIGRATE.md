# Migrasi ke `src/` (`migrate.py`) — jebakan yang terbukti

Referensi untuk `python3 decomp/migrate.py --module <mod>.s --func <nama>`
(atau `--limit N`). Pola perbaikan draf ada di
[`POLA-DIFF.md`](./POLA-DIFF.md); dokumen ini soal **gerbang migrasi**
(apa yang membuat `[SKIP]`/`[GAGAL]` dan bagaimana menyelesaikannya).

Aturannya: `--no-baseline` hanya kalau `make compare` sudah HIJAU di sesi
itu; sebelum commit tetap jalankan `make compare`.

---

## 1. Guard tanda tangan extern (SKIP `beda tanda tangan`)

Blok promoted **harus** memakai tanda tangan yang sama dengan deklarasi
yang sudah ada di `src/<stem>.cc` — guard membandingkan **string**.

- Translasi otomatis hanya `s32`→`i32`. **`u32` vs `s32` tidak** ikut
  ditranslasi: `func_0803A8A4(u32, ...)` di src vs `(s32, ...)` di blok =
  SKIP.
- Tipe hasil juga dibandingkan: src `void *GetMapData(i32)` vs blok
  `MapData *GetMapData()` = SKIP walaupun pemakaiannya lewat cast.

**Resep** (codegen-netral): samakan tanda tangan blok dengan src, dan
lewatkan nilai balik call sebelumnya lewat satu variabel sekali-pakai
supaya argumen sudah di r0 (tanpa `mov` tambahan):

```c
void *GetMapData(i32);                     /* = tanda tangan src */

t = func_0803A8A4(...);                    /* hasil di r0 */
return ((MapData *) GetMapData(t))->unk20 << 3;
```

Pembukti: `func_08019F7C`, `func_08019FE8` (dua-duanya sempat SKIP).

Cabang lain di guard: kalau callee-nya **belum** MATCH dan tanda
tangannya beda, hasilnya `butuh tulis manual callee` = SKIP permanen →
tulis dulu callee-nya, atau pilih fungsi lain.

## 2. Blok DUPLIKAT di `promoted/` (state shard basi)

`fomt --migratable` bisa menjawab **MATCH** untuk fungsi yang **sudah ada
di `src/`**: state shard tidak tahu, judge melihat “no ref symbol”, lalu
`promote()` menambahkan blok baru ke `decomp/promoted/<stem>.cc`.

Akibat: blok dobel di promoted (verify/berikutnya membingungkan) dan
hitungan “MATCH” menyesatkan.

- Selalu `git diff decomp/promoted/` sesudah batch.
- Blok dobel ⇒ `git checkout -- decomp/promoted/<stem>.cc` (atau hapus
  bloknya manual), lalu periksa `decomp/state/modules/<stem>.json`.
- `migrate.py` akan menjawab `sudah ada di src/... (dilewati)` — artinya
  **bukan migrasi baru**, jangan dilaporkan sebagai hasil sesi.
- Cek cepat sebelum memperbaiki draf “failed”:
  `grep -n "DECOMP-MATCHED <func>" src/<stem>*.c*`.

## 3. `[GAGAL]` karena insert ke blok `extern "C" {`

Gejala: `src/<stem>.cc:NNNN: syntax error before 0x5F0` (atau serupa)
saat build, migrate otomatis revert.

Sebab: titik sisip jatuh **di dalam** blok `extern "C" { ... }` yang sudah
ada di file, sehingga blok baru memecah deklarasi.

Solusi: sisipkan blok manual pada batas `extern "C"` yang benar (setelah
`}` penutup atau sebelum `extern "C" {` pembuka yang baru), lalu
`make compare`. Jangan mengandalkan migrate untuk file seperti ini.

Pembukti: `func_080AAF3C` (`code_809E804.cc`) — draf sudah MATCH, hanya
penempatan yang menghalangi.

## 4. SKIP permanen (jangan difix ulang)

| Pesan | Arti |
|---|---|
| `data asing NB menempel ekor` | blok diakhiri `.byte`/pool; `ref_len > ukuran kode`. Byte itu milik fungsi lain → tak bisa dibawa. Contoh: `func_0802C210` (180B), `func_080A6420` (56B), `func_080390D0`, `func_080202C8`, `func_08023400` |
| `grup gabungan/tak-split` | hasil splitter bukan grup 1-fungsi (`migratable` tak memuatnya) |
| `bukan fungsi terakhir di <mod>.s (N penerus belum pindah)` | modul **tail-only legacy** (`hardware.s`, `code_actor_0809BFE8.s`, `code_linkonce.s`) → wajib pindah dari ekor |
| `butuh tulis manual callee` | callee belum MATCH & tanda tangan beda |

## 5. Modul split vs tail-only

- **Split** (`game_state`, `code_809E804`, `code_entities*`,
  `code_0803EE94`, …): section-replace per fungsi ⇒ **boleh pindah di
  tengah**, tak ada syarat “fungsi terakhir”.
- **Tail-only legacy**: hanya fungsi **terakhir** di `asm/<mod>.s` yang
  boleh dicabut (mencabut blok tengah menggeser semua penerusnya). Modul
  ini praktis butuh rantai pindah dari ekor.
- Modul `code_linkonce.s` = gabungan (`migratable_set` kosong) → SKIP
  permanen.

## 6. Re-judge draf yang state-nya sudah `promoted`

`fomt` tidak mengantrekan fungsi berstatus `promoted`, walaupun draf baru
diedit. Untuk mengulang judge (mis. setelah membetulkan tanda tangan):

1. Pastikan blok promoted lamanya sudah dibuang (kalau tidak, `promote()`
   menambah blok kedua).
2. Di `decomp/state/modules/<stem>.json`: set `status` → `failed` dan
   `judged_mtime` → `0`.
3. Jalankan `fomt <func>`.

Lakukan hanya kalau memang perlu: mengedit **blok promoted** langsung
(codegen-netral, mis. ganti `s32`→`i32`, ubah padding komentar, samakan
tanda tangan extern) tidak butuh re-judge — cukup dibuktikan dengan
`fomt verify --module <stem>` sebelum migrate.

## 7. Verifikasi

- `migrate.py` sudah menjalankan `make compare` (baseline + target);
  `[OK] sha1sum -c fomt.sha1` = HIJAU.
- Setelah beberapa migrasi: `make compare` sekali lagi sebelum commit.
- Commit hanya file pekerjaan: `src/<stem>.cc`, `decomp/promoted/<stem>.cc`,
  `decomp/drafts/*` yang diedit, `decomp/state/modules/<stem>.json`.
  JANGAN `git add -A`; jangan commit `promoted/*.cc` milik batch lain.
- Jangan klaim “migrasi” untuk MATCH yang SKIP atau yang cuma promote.