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

Dua resep penyamaan tanda tangan yang **codegen-netral** dan terbukti
membersihkan SKIP (2026-11-06):

1. **Return type pembawa pointer.** `src/` mendeklarasikan
   `void* __builtin_new(i32)`; blok menulis `s32 __builtin_new(s32)` →
   guard menolak (return type ikut dibandingkan). Samakan: blok jadi
   `void *__builtin_new(s32);` — argumen/return tetap word, codegen sama.
   Ini membuka belasan blok di `code_entities_08034CEC` sekaligus.
2. **Callee punya parameter yang tak diset pemanggil.** Blok menulis
   `s32 calleeX();` tapi `src/` punya `i32 calleeX(i32)` → guard menolak.
   Kalau ref memang tak menyiapkan argumen (register sudah berisi nilai
   yang diinginkan, mis. `adds r4,r0,#0; bl calleeX`), deklarasikan
   `s32 calleeX(s32);` dan **teruskan nilai itu** (`calleeX(arg0);`) —
   zero codegen karena r0 sudah berisi arg0. Bukti: `func_08035CD4`,
   `func_08036154` (keduanya migrasi HIJAU setelah ini).
   Kalau ref benar-benar tak menyiapkan apa pun dan nilainya tak penting,
   tetap harus ada argumen konkret (mis. `0`) — cek dulu asm-nya, jangan
   mengarang.

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
tanda tangan extern) tidak butuh re-judge — buktinya `make compare` HIJAU
setelah migrate (opsional: `fomt verify --module <stem>`, hanya bila
diminta).

## 7. Status "sudah di src tapi state masih failed"

Kelas buku catatan yang paling sering menyebabkan kerja sia-sia: fungsi
sudah punya blok `// DECOMP-MATCHED <fn>` di `src/` (berarti ROM hijau
lewat `make compare`), tetapi state-nya masih `failed`/`drafted`. Akibat:

- `fomt`/`--migratable` mengantrekannya ulang → judge melihat
  “no ref symbol” → MATCH → `promote()` menambah blok **DUPLIKAT** ke
  `promoted/<stem>.cc` (lihat §2), dan statistik “berhasil” ikut salah.

Penanganan:

```bash
python3 tools/scripts/audit_consistency.py            # lihat daftar
python3 tools/scripts/audit_consistency.py --fix      # failed/drafted -> promoted
```

`--fix` hanya menyentuh entri yang **marker-nya benar-benar ada di src**,
dan mengisi `promoted_to` yang kosong (tanpa itu `_judge` verify bisa
membaca direktori repo — sudah ditambal dengan `is_file()`).

**Jangan pakai status `"migrated"`** (dipakai `decomp/audit_sync.py`):
`decomp/run.py` hanya mengenal `pending/drafted/failed/promoted/matched`,
jadi `"migrated"` menghilangkan fungsi dari statistik sekaligus dari
verify. Status yang benar untuk “selesai & ada di src” adalah `promoted`.

## 8. Verifikasi

- `migrate.py` sudah menjalankan `make compare` (baseline + target);
  `[OK] sha1sum -c fomt.sha1` = HIJAU.
- Setelah beberapa migrasi: `make compare` sekali lagi sebelum commit.
- **Audit konsistensi state ↔ promoted ↔ src:**
  `python3 tools/scripts/audit_consistency.py` (read-only; cek blok
  duplikat, blok kurung rusak, `state` promoted tanpa blok/src, blok
  promoted yang belum di src, dan status basi `failed` yang fungsinya
  sudah di src). Exit 1 = ada masalah struktural.
  Pelengkap: `python3 decomp/audit_sync.py` (khusus status basi).
- **`fomt verify` JANGAN dijalankan rutin** — hanya bila user memintanya
  (mahal, ~7 mnt untuk seluruh proyek). Penutup sesi cukup
  `make compare` (HIJAU) + `audit_consistency.py`. Bila verify **diminta**,
  pakai `fomt verify --module <stem>` dulu. Dua pengecualian yang sudah
  dibangun ke dalam verify (2026-11-06):
  - cek `promoted != draft` melewati fungsi yang **sudah punya blok di
    src** (blok promoted boleh sudah dicabut);
  - pengadilan blok dilewati (dicatat `migrated to src (blok di src;
    diawasi make compare)`) hanya bila blok promoted-nya sudah **tidak
    ada**. Kalau bloknya masih ada, verify tetap mengadili apa adanya.
  Jadi verify hijau ≠ blok promoted lengkap — pelengkapnya tetap
  `audit_consistency.py` + `make compare`.
- Commit hanya file pekerjaan: `src/<stem>.cc`, `decomp/promoted/<stem>.cc`,
  `decomp/drafts/*` yang diedit, `decomp/state/modules/<stem>.json`.
  JANGAN `git add -A`; jangan commit `promoted/*.cc` milik batch lain.
- Jangan klaim “migrasi” untuk MATCH yang SKIP atau yang cuma promote.

## 9. Menyamakan signature callee yang sudah ada di `src/`

Gejala saat migrate:

- `passing 'i32' to argument N of 'callee(GenObj *, GenObj *)' lacks a cast`
- `type 'X' is not a base type for type 'Y'`
- `ANSI C++ forbids implicit conversion from 'void *' in argument passing`

Resep (terbukti pada 6 migrasi tail `hardware.s`, 2026-11-10):

1. Ambil nama typedef **persis** dari `src/` (mis.
   `GenObj__func_080099B0`) beserta definisi field-nya.
2. Salin typedef identik ke dalam blok promoted (blok harus mandiri).
3. Deklarasikan callee dengan signature `src/`:
   `void callee(GenObj__func_080099B0 *, GenObj__func_080099B0 *);`
4. Cast argumen eksplisit ke tipe itu:
   `callee((GenObj__func_080099B0 *) arg0, (GenObj__func_080099B0 *) a1);`

Jangan hanya `(void *)`: guard akan menulis ulang extern ke tipe struct
`src/`, sehingga cast `void *` menjadi implicit conversion error. Kalau
callee **belum** ada di `src/`, pilih tipe yang nanti dipakai definisinya
(mis. `void *`) dan samakan saat callee migrasi.

Untuk diagnosis cepat, pakai `python3 decomp/migrate.py --module <mod>.s
--func <fn> --explain`: ia mencetak signature blok vs **semua** deklarasi
`src/` (sama/BEDA) plus verdict gate, tanpa menulis apa pun.

## 10. Blok promoted ≠ draf hasil judge (drift)

Blok promoted hanya boleh diedit **codegen-netral** setelah MATCH, dan
drafnya wajib disinkronkan. Kasus nyata: `func_0805E860` blok promoted
diedit manual (`s32`/`i32*`) sehingga bukan blok yang diadili judge —
`make compare` MERAH dan bentuk `i32` di posisi return akan menggagalkan
verify.

Deteksi: `python3 tools/scripts/audit_consistency.py` (drift = info;
`--strict` menjadikannya masalah) atau `--explain` saat migrate. Audit
juga menolak `i32` di draf/promoted dan status di luar enum
`pending/drafted/failed/promoted/matched`.

## 11. Hanya fungsi MATCH yang boleh masuk `src/` (TU `.cc` = C++)

Kasus nyata `func_080124D0` (2026-11-10, commit `5db762cc` → dibalik):
fungsi **DIFF** (280 vs 282 byte) ditempel apa adanya ke `src/game_state.cc`
dan state diubah `failed` → `promoted`. Akibatnya `make compare` MERAH:

- `src/game_state.cc` dikompilasi `agbcp` (C++), sedangkan blok itu masih
  C m2c mentah: `s32` (file ini pakai `i32`), typedef `GenObj`/`Vt` yang
  tak ada di TU itu, `__builtin_new` (bukan C++), dan variabel bernama
  `new` (keyword C++).
- Selain itu, byte-nya sendiri tidak identik dengan ref, jadi sha1 compare
  tetap MERAH walau sempat kompilasi.

Dua syarat sebelum memindahkan blok ke `src/`:

1. **Judge MATCH** (byte-identik). Status `failed`/`DIFF` → jangan pindah;
   cukup catat di `note` state shard (lokasi catatan yang benar untuk
   temuan/status per fungsi).
2. **Blok harus kompilasi sebagai C++** pada TU tujuan: pakai `i32`
   (bukan `s32`), typedef lokal yang memang ada di `src/<stem>.cc`,
   `new`/`delete` (bukan `__builtin_new`), dan nama variabel bukan
   keyword C++.

Bila blok sudah terlanjur ditempel dan build merah: buang blok dari
`src/<stem>.cc` (chunk asm-nya otomatis kembali di-emit karena
splitter meng-omit chunk asm hanya bila `src/` punya section
`.text.<stem>.<addr>` yang sama) + kembalikan status state shard ke
`failed` dengan `judged_mtime` 0, lalu `make compare` untuk bukti hijau.