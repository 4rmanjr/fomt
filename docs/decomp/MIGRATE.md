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
| `data asing NB menempel ekor` | blok diakhiri `.byte`/pool dan `ref_len > ukuran kode`. **Bukan otomatis permanen**: modul tail-only menyalin ekor itu verbatim ke blok C (§28a, §34) dan modul split membawanya bila ada data-chunk pemiliknya (data-join). SKIP-permanen hanya bila tak ada yang mengklaim byte itu (grup solo tanpa data-chunk berikutnya). Contoh yang benar-benar tak terselamatkan: `func_0802C210` (180B), `func_080A6420` (56B), `func_080390D0` (88B), `func_080202C8` (68B) |
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

1. Buang blok promoted lama kalau drafnya berubah: `promote()` melewati
   penulisan bila marker `// DECOMP-MATCHED <fn>` sudah ada di berkas
   (`run.py:_promote_in_shard`), jadi blok LAMA yang tetap dipakai gate —
   bukan blok kedua. Blok kedua hanya muncul kalau marker-nya berbeda
   (mis. teks modul berubah).
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
  `promoted/<stem>.cc` (lihat §2), dan statistik `berhasil` (termasuk
  `promote-only`) ikut salah.

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

## 12. State basi `promoted` tanpa blok (dulu `[GAGAL]`, sekarang SKIP)

Gejala: `python3 decomp/migrate.py --module <mod>.s` berhenti di fungsi
pertama dengan
`[GAGAL] blok DECOMP-MATCHED tidak ditemukan di decomp/promoted/<mod>.cc`,
padahal fungsi itu **sudah** ada di `src/` (marker `DECOMP-MATCHED`).
Dulu 166 entri state seperti ini memblokir seluruh batch modul.

Sebab: setelah pindah, blok dicabut dari `decomp/promoted/` tetapi status
state tetap `promoted`; `migrate_one()` dulu memanggil `extract_block()`
sebelum cek "sudah ada di src", jadi keluar sebagai GAGAL.

Perbaikan (2026-11-11, `decomp/migrate.py:_already_in_src`): cek
marker di semua varian `src/<stem>{,_c,_v,_migrated}.{cc,c}` dijalankan
**sebelum** `extract_block()`. Entri basi jadi SKIP yang tidak memblokir
batch. Kalau audit masih bilang `tidak ditemukan (asm/promoted)`, jalankan
`python3 tools/scripts/migrate_audit.py` untuk klasifikasi ulang.

## 13. Definisi fungsi membawa tipe sendiri, pemanggil punya extern usang

Kasus nyata `func_08092640` (`code_0803EE94`, 2026-11-11): blok definisi
mendeklarasikan `void *func_08092640(GenObj *arg0)` (hanya baca r0),
sedangkan blok pemanggilnya (`func_080931B0`, sudah di `src/`) memakai
extern m2c `i32 func_08092640(i32, i32)` dan memanggil dengan 2 argumen
(r1 = `arg2` dimuat di asm walau callee mengabaikannya). Gate menolak:
`definisi ... vs extern usang di src ... butuh penyatuan manual`.

Resep yang terbukti byte-identik + `make compare` HIJAU:

1. Pindahkan blok definisi apa adanya ke `src/<stem>.cc` (dengan
   `__attribute__((section(".text.<stem>.<addr>")))`), typedef-nya masuk
   area `// === MIGRATED TYPES ===` dengan nama `GenObj__func_<addr>`.
2. Tambahkan **parameter kedua yang tidak dipakai** pada definisi supaya
   signature-nya sah untuk call-site yang mengirim r1:
   `void *func_08092640(GenObj__func_08092640 *arg0, i32 unused_arg1)`.
   Parameter tak terpakai tidak menghasilkan kode — layout prolog tetap.
3. Samakan extern di blok pemanggil ke signature itu dan cast eksplisit
   di call-site:
   `arg0->unk4 = (i32)func_08092640((GenObj__func_08092640 *)__builtin_new(0x10C), arg2);`
   Cast pointer/return tidak menghasilkan instruksi, jadi asm pemanggil
   (termasuk pemuatan r1) tidak berubah.
4. Buang blok definisi dari `decomp/promoted/`, biarkan status state
   `promoted`, lalu `make compare` sebagai bukti.

Jangan membuang argumen dari call-site: itu menghapus pemuatan r1 dan
mengubah byte pemanggil. Jangan juga mengubah tipe return menjadi pointer
di call-site tanpa cast — field tujuan bertipe `i32`.
## 14. Gate [GAGAL] `slo' undeclared` di src/game_state.cc (workaround manual)

Gejala (2026-11-11, `func_080123A4`):

```text
[GAGAL] src/game_state.cc: In function `void func_080123A4(struct GenObj__func_080123A4 *)':
src/game_state.cc:2311: `slo' undeclared (first use this function)
```

`--explain` dan `--dry-run` bilang gate OK, blok di `promoted/` bersih (tidak
ada token `slo`), dan `_already_in_src()`/`translate_types()` mengeluarkan
teks yang benar — jadi mangle terjadi di tahap sisip/penamaan struct di
dalam `migrate_one()`. Akar bug BELUM ditemukan; jangan buang waktu
menebak, pakai workaround.

Workaround yang terbukti (`func_080123A4`, `make compare` HIJAU):

1. Sisip blok ke `src/<stem>.cc` manual, urut alamat: titik sisip = marker
   `// DECOMP-MATCHED func_XXXXXXXX` pertama yang alamatnya > alamat fungsi.
2. Blok manual harus C++-aman (MIGRATE §11) dan nama typedef di-deconflict
   ke `<Tipe>__func_<addr>` (mis. `GenObj__func_080123A4`,
   `Vt__func_080123A4`) karena `src/game_state.cc` sudah punya `GenObj`/`Vt`.
3. `__attribute__((section(".text.<stem>.<addr>")))` di atas definisi.
4. Hapus blok yang sama dari `decomp/promoted/<stem>.cc`; status state
   dibiarkan `promoted`.
5. `make compare` + `audit_consistency.py` sebagai bukti.

Kalau nanti mau memperbaiki gate-nya: bandingkan teks blok hasil
`wrap_block()`/`insert_ordered()` dengan yang benar-benar ditulis ke
`src/`, cari token `slo` (bukan `slot`) di sana.

## 15. Blok MATCH dengan tipe lokal sendiri: nama unik + cast pointer

Pembukti: `func_08033800` (code_entities_080320DC).

Draf judge boleh memakai `typedef struct Vtbl/Obj/Res` dan memanggil fn-ptr
`Res *(*unk44)(void **, s32)` dengan `arg1` bertipe `Vtbl **` (agbcc hanya
memberi warning, asm identik). `src/` dibangun dengan tanda tangan ketat,
jadi `migrate.py` gagal:

```text
src/code_entities_080320DC.cc:136: argument passing to `void **' from
`Vtbl__func_08033800 **'  -> direvert, berhenti.
```

Resep (tanpa mengubah codegen sama sekali, keduanya nol-biaya):

- beri akhiran nama fungsi pada tipe lokal (`Vtbl_08033800`, `Obj_08033800`)
  supaya tidak bentrok dengan `Vtbl`/`Obj` konteks bersama;
- ubah parameter fn-ptr jadi `void *` dan panggil dengan
  `((void *) arg1)`.

Kalau blok sudah terlanjur promoted: buang bloknya, set state
`status=failed`, `judged_mtime=0`, lalu judge ulang sebelum migrate —
jangan menyunting blok promoted langsung (verify menilainya apa adanya).

## 16. Extern usang di src/ dengan tipe parameter pertama berbeda

Gejala gate: `definisi <func> di body vs extern usang di src
(['i32 (i32, i32, u16, i32)'])`, migrasi SKIP walau bloknya MATCH.

Kasus pembukti: `func_08050424` — blok `void func_08050424(GenObj *, s32,
u16, s32)`, sedangkan `src/code_0803EE94.cc` sudah mendeklarasikan
`i32 func_08050424(i32, i32, u16, i32);` (dipakai call-site `func(*arg0,
...)`). Guard membandingkan string tipe, jadi `GenObj *` vs `i32` tidak
pernah cocok.

Jangan "perbaiki" dengan memaksa signature blok ke `s32`/`i32` + cast di
dalam badan: codegen berubah (`obj = (GenObj *) arg0` menambah `adds r5,
r0, #0`; cast inline memindahkan `movs #4` ke register lain) dan MATCH
hilang. Perbaikan yang benar adalah menyatukan signature + call-site secara
manual (cast pointer di setiap call-site, atau ubah extern src ke tipe
pointernya), lalu jalankan `migrate.py` lagi. Selama belum, biarkan
promoted-only dan catat sebagai SKIP manual.

## 17. Gate SKIP karena dua varian extern di promoted yang sama

Gejala: `[SKIP] extern func_XXXX beda tanda tangan (['i32 (void *, i32, i32, i32)',
'i32 (void *, i32, u8, i32)'] vs [...])` padahal draf cuma punya satu deklarasi.

Sebab: `promote()` menambah blok baru tanpa membuang blok lama (§27), jadi dua
fungsi di modul yang sama bisa mendeklarasikan callee yang sama dengan tanda
tangan berbeda (satu dari blok lama). Gate mengumpulkan SEMUA deklarasi di
modul, bukan hanya milik fungsi yang dimigrasi. Blok basi yang membuat satu
fungsi berhenti di cek tanda tangannya dibahas di §35.

Penanganan: samakan semua deklarasi callee di modul ke tanda tangan `src/`,
buang blok duplikat (`promoted` hanya boleh punya satu blok per fungsi), lalu
judge ulang fungsi yang bloknya ditulis ulang. Cek cepat:
`grep -cE "^[a-z0-9]+ ?\\**? ?func_<nama>\\(.*\\) \\{" decomp/promoted/<modul>.cc` harus 1
(pola itu hitung **definisi** saja: tipe balik apa pun — `void`, `s32`, juga
`s16`/`u32` seperti `func_080094A4`. Tanpa akhiran `) {` deklarasi extern milik
blok lain ikut terhitung, mis. `s32 func_080094A4(void *, s32);` -> angka 3
padahal definisinya satu).

SKIP lain yang mirip bentuknya: `call-site ... tak konversi implisit ke
parameter i32` berarti deklarasi di blok masih `func_XXXX()` tanpa parameter
sementara `src/` punya parameter — salin deklarasi `src/` apa adanya (termasuk
`i32`; gate menerjemahkan `s32`↔`i32` otomatis).
`promote()` tidak menimpa blok yang sudah ada, jadi urutan yang benar untuk
menulis ulang blok: **hapus dulu** semua blok + baris `// DECOMP-MATCHED` milik
fungsi itu, baru judge ulang. Kalau tidak, blok lama tetap dipakai gate
(mis. masih memanggil `func_080338F0()` tanpa argumen) dan pemotongan manual
bisa menyisakan fragmen badan tanpa pembuka -> audit melaporkan
"blok kurung tidak seimbang". Setelah setiap pemotongan jalankan
`audit_consistency.py` dan cek `depth akhir == 0`.

## 18. GAGAL karena C++ menolak `void *` implisit

Gejala: `src/<modul>.cc: ANSI C++ forbids implicit conversion from 'void *' in
initialization` saat migrate. Draf `.c` memakai `u8 *d = dst;`, sedangkan
`src/*.cc` dikompilasi sebagai C++. Perbaiki **di draf** dengan cast eksplisit
(`u8 *d = (u8 *) dst;`, codegen tidak berubah), hapus blok promoted lama
(promote tidak menimpa, lihat §17), judge ulang, lalu migrate lagi.

## 19. Gate SKIP `argumen (tak ada argumen) ... parameter void`

Gejala: blok mendeklarasikan callee tanpa parameter sebagai
`void func_X(void);` lalu memanggil `func_X();`, dan migrate berhenti dengan
`[SKIP] call-site func_X: argumen (tak ada argumen) (void) ... parameter void`
(laporan `pindah: 0`). Penyebab: gate membaca `(void)` sebagai SATU parameter
(`sig == ['void']`), sedangkan panggilan 0-arg dianggap arity-mismatch — jadi
bukan soal tipe, murni bentuk deklarasi.

Perbaikan: tulis deklarasi K&R kosong `void func_X();` di blok (hanya
deklarasi, byte asm tidak berubah), cabut blok promoted lama (§17), judge ulang,
lalu migrate. Bukti: `func_080A6640` (code_809E804, migrasi HIJAU).

Kalau blok itu BELUM pernah masuk `src/`, cukup ubah deklarasinya di blok
promoted lalu `migrate` lagi — tak perlu judge ulang, karena deklarasi tidak
mengubah byte dan migrate tetap memverifikasi dengan `make compare`
(bukti: `func_0803E780`).

Gate kedua yang sering menyusul di blok yang sama: callee punya DUA varian
extern di `src/` (mis. `u32 GetRivalEventCount__C12Bachelorette(i32)` dan
`(void *)`). Seragamkan blok ke salah satu varian yang sudah ada (jangan
menambah varian ketiga), lalu migrate lagi. Catatan: blok promoted wajib
`s32`, bukan `i32` — audit melaporkan `i32 di draf/promoted` sebagai MASALAH
(migrate yang mengubahnya jadi `i32` di `src/`).

### Gerbang urutan: penerus "promoted tapi tak pernah di src"

Gejala: MATCH pada fungsi ekor-rantai tetap SKIP dengan
`bukan fungsi terakhir di <mod>.s (N penerus belum pindah)`, padahal penerus
itu berstatus `promoted`. Status `promoted` berarti blok sudah di
`decomp/promoted/`, BUKAN sudah di `src/` — urutan migrasi melihat teks
`asm/`, bukan status. Tindakan: pindahkan penerusnya dulu (dari yang
tertinggi), baru fungsi target.

Kalau penerus itu GAGAL compile saat dipindah karena definisinya memakai tipe
sendiri (`InnerX **arg0`) sementara `src/` sudah punya extern `(void *, s32)`,
seragamkan signature blok ke bentuk extern yang ada + cast di badan
(codegen sama, `make compare` yang membuktikan). Bukti: rantai
`func_080094AC` -> `func_080094A4` -> `func_080093AC` (hardware.s).

### Gerbang arity: callee 4 parameter vs pemanggil yatim 2 argumen

Gejala: migrate berhenti `too few arguments to function '<callee>(void *, short
int, int, int)'` karena blok pemanggil mendeklarasikan callee 2 argumen
(`void func_X(void *, i32);`) sementara definisi yang baru pindah ber-4
parameter. Kalau pemanggil itu yatim (tidak ada call site lain) dan di ref ia
hanya `b <callee>` dengan r0/r1 terisi, r2/r3 adalah nilai pemanggilnya
sendiri — bukan milik pembungkus.

Jangan tambah argumen dummy (`0, 0` menambah `movs`), dan jangan cast ke
function pointer 2-arg (butuh deklarasi tambahan, arity tetap bohong). Solusi:
jadikan pembungkusnya pass-through 4 parameter yang meneruskan `arg2`/`arg3`
apa adanya — agbcc tidak menyalin apa pun, jadi byte tetap `b`. Aman hanya
setelah dipastikan tidak ada call site lain:
`grep -rn '<nama>' src/ asm/*.s`. Bukti: `func_0800951C` -> `func_08009378`
dan `func_0800952C` -> `func_0800934C` (hardware.s).

Catatan cast (dalam blok yang sama): `(i16) arg1` pada argumen call-site BUKAN no-op. Ia yang
menghasilkan `lsls r1,#0x10; asrs r1,#0x10` sebelum `bl` (terlihat di
`func_08009508`); menghapusnya membuat compare merah. Kebalikannya, cast pada
nilai balik (`return (i16) func_X(...)` saat fungsi mengembalikan `i32`) memang
mubazir — konversi implisit menghasilkan byte yang sama.

## Gerbang urutan: hanya fungsi beralamat tertinggi yang bisa dipindah

`migrate.py` menolak fungsi yang masih punya penerus di berkas `.s` ("bukan
fungsi terakhir ... N penerus belum pindah"). Artinya kemajuan per modul
berbentuk **rantai dari ekor**: fungsi pertama yang bisa masuk adalah fungsi
gagal dengan alamat tertinggi, lalu berikutnya, dst.

Konsekuensi praktis:

- MATCH pada fungsi yang bukan kepala rantai tetap **dipromosikan** ke
  `decomp/promoted/<stem>.cc`. Di `fomt status`/`plan_stats` ia masuk
  `berhasil` tetapi dihitung sebagai **promote-only**, bukan `src`: `src/`
  tidak bertambah (DELTA src = 0) dan `make compare` tetap HIJAU karena
  berkas `.s` masih merakit byte-nya. Contoh: `func_080DC9C0` (12B, tertahan
  260 penerus). Jangan laporkan promote-only sebagai kemajuan ROM.
- Saat memilih target, urutkan kandidat per modul menurut alamat menurun dan
  kerjakan yang teratas; sisanya baru terbuka setelahnya.
- Kepala rantai bisa saja **mustahil di C** (contoh `func_080D10F0`: membaca
  `r4`, `r7`, `r12` sebagai masukan, tampil sebagai `saved_reg_*` /
  `M2C_ERROR` di draf). Modul seperti itu rantainya berhenti di gerbang —
  deteksi dini lewat `saved_reg_`/`M2C_ERROR` di draf sebelum menjajal.

### Gerbang fragmen: `ref_len` yang membentang ke `.byte` mentah

Sebagian gerbang rantai **tidak mungkin** MATCH karena yang dianggap satu
fungsi sebenarnya fragmen + data asing di ekornya. Contoh (sudah teratasi
2026-11-12, lihat akhir bagian ini): `func_08009514` (gerbang `hardware`,
`ref_len` 87).

```asm
.L080094E0:
    .byte 0x00, 0xB5, ...      # push {lr}; adds r0,#0xC; lsls/asrs; bl
    thumb_func_start func_08009514
func_08009514:
    lsls r0, r0, #0x10          # 0x8009514: TANPA push
    asrs r0, r0, #0x10
    pop {r1}                    # epilog milik fragmen sebelumnya
    bx r1
```

Ciri: fungsi diawali tanpa prolog tapi diakhiri `pop {r1}; bx r1`, dan
`ref_len` melompati blok `.byte` berikutnya (di sini sampai `0x800956B`,
termasuk thunk `bl`+0xC dan ctor `vtable_080E5B80` yang tak punya
`thumb_func_start`).

Tindakan: jangan judge (draf C apa pun akan kekurangan puluhan instruksi),
parkir dengan `note`, dan laporkan modul itu rantainya buntu. Satu-satunya
jalan keluar adalah **simbolisasi manual** `asm/<stem>.s` (memecah blob
`.byte` menjadi `thumb_func_start` per fungsi; byte ROM tidak berubah) —
keputusan manusia, bukan langkah otomatis.

Sudah dilakukan untuk `hardware.s` (2026-11-12): blob `0x80094E0`..`0x800956B`
dipecah menjadi 7 fungsi (`func_080094E0`, `094F8`, `09508`, `0951C`, `0952C`,
`0953C`, `09548`). `func_08009514` (fragmen di tengah `func_08009508`) hilang
sebagai simbol dan entri state-nya dihapus. Efek samping: `ref_len`
`func_080094B8` turun 92 -> 36 karena ekor asingnya tidak lagi menempel.
Verifikasi wajib setelah simbolisasi: `make compare` HIJAU, lalu rescan
(`scan(['<stem>.s'])`) supaya `ref_len`/entri baru terdaftar.

### Blok promote-only: dipertahankan sebagai staging (keputusan 2026-11-12)

Blok MATCH yang tertahan penerus **tidak dibuang** dari
`decomp/promoted/<stem>.cc`. Statusnya staging: nol byte ROM, bukan progres.
Alasannya, untuk 34 thunk `_._10ANpcEntity`/`_._13AScriptEngine` di
`code_linkonce`:

1. **Rantainya hidup, bukan buntu.** `src/code_linkonce.cc` sudah berisi 6
   fungsi beralamat tertinggi (`0x80E581C`..`0x80E59C0`); promote-only berhenti
   di `0x80E54C4`, dan thunk 12B paling tinggi `0x80E4238`. Artinya blok itu
   terserap sendiri begitu fungsi di antaranya pindah — bukan SKIP permanen.
2. **Sudah byte-identik.** Judge MATCH 1/5; membuang lalu menulis ulang hanya
   mengulang kerja.
3. **Inflasi sudah dimitigasi.** `fomt status`/`plan_stats` memisahkan `src`
   dari `promote-only` (`decomp/srcmarkers.py`), jadi angka tidak menyesatkan.
4. **Konsisten dengan praktik repo.** `decomp/promoted/code_linkonce.cc` berisi
   169 blok blocked, 0 duplikat, tak satu pun bentrok dengan `src/`; seluruh
   thunk masih ada di `.s`.

Guard rails:

- Jangan laporkan promote-only sebagai migrasi/kemajuan ROM; yang dihitung
  hanya `src`.
- Jangan judge ulang fungsi yang sudah berblok (R2). Perlu mengubah blok?
  Hapus blok + baris `DECOMP-MATCHED` dulu, baru judge ulang (§17).
- Hapus blok bila: fungsinya tak lagi ada di `.s`, muncul blok duplikat,
  signature melenceng (`migrate.py --explain`), atau modulnya diputuskan tidak
  akan dimigrasi.

Cek cepat:

```bash
python3 tools/scripts/plan_stats.py --module code_linkonce   # src vs promo
grep -c 'DECOMP-MATCHED' decomp/promoted/code_linkonce.cc    # jumlah blok
python3 decomp/srcmarkers.py                                 # yang sudah di src/
```

### Pembungkus C++ mangled (`_._...`)

Thunk 12B berbentuk `push {lr}; bl _._10ANpcEntity; pop {r0}; bx r0` tidak bisa
ditulis m2c (nama `_._10ANpcEntity` bukan identifier C). Pola yang MATCH 1/5:

```c
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

void func_080DC9C0(void) {
    NpcEntityDtor();
}
```

Idiom `asm("<simbol>")` sama dengan `src/game_scene.cc` (`ScriptEngineDtor`).
Kembalikan `u32` agar `pop {r0}` + `bx r0` terbentuk; `void` menghasilkan
`pop {r1}`.

## 20. Arity beda antar call-site: deklarasi variadik

Gejala: `[SKIP] extern X beda tanda tangan` saat callee dipanggil **1 argumen**
di blok `src/` yang sudah ada dan **2 argumen** di blok baru, padahal ref
memang meneruskan register kedua (`r1`) apa adanya — dua bentuk call-site itu
sama-sama sah menurut byte ROM.

Perbaikan byte-netral: deklarasikan callee variadik di `src/`
(`i32 func_08009300(void *, ...);`). Deklarasi varargs menerima call 1 argumen
maupun 2 argumen tanpa mengubah urutan register, jadi blok lama dan baru
sama-sama kompilasi dan tetap byte-identik. Blok baru memakai deklarasi yang
sama persis supaya lolos gerbang signature (gate membandingkan string, jadi
variadik harus ada di KEDUA sisi). Jalankan `make compare` setelah mengubah
deklarasi di `src/` — bukti bahwa edit deklarasi tidak menggeser byte.

Bukti: `func_08003BB4` (new_game.s) migrasi HIJAU 2026-11-22 dengan
`func_08009300` dideklarasikan variadik di `src/hardware_migrated.cc`.

## 21. MATCH di judge (agbcc/C) tapi MERAH setelah masuk `src/` (agbcp/C++)

Gejala: `pindah: 0` dengan `[GAGAL] fomt.gba: FAILED` — build-nya sendiri sukses
(tidak ada error compiler), jadi bedanya murni codegen front-end C++ (`agbcp`)
vs C (`agbcc`) yang dipakai judge.

Contoh nyata (`func_08009324`, hardware.s): `if (1 & arg1)` menghasilkan
`movs r0, #1; ands r0, r4` di ref/agbcc, tetapi `movs r1, #1; ands r1, r4` di
agbcp, dengan epilog `pop {r1}; bx r1` — akibat definisi ber-`return i32`
membuat agbcp mempertahankan `r0` untuk nilai balik.

Perbaikan: samakan tipe hasil definisi dengan yang dipakai `src/`. Di kasus itu
deklarasi `src/` diubah jadi `void func_X(void *, i32);` (pemanggilnya tidak
memakai nilai balik) dan blok didefinisikan `void` → agbcp kembali memilih
`r0`.

Cara cepat memastikan sebelum satu siklus migrate penuh:

```
make build/src/<stem>.o
arm-none-eabi-objdump -d build/src/<stem>.o | sed -n '/<func_X>:/,/^$/p'
```

Bandingkan urutan instruksinya dengan `asm/<modul>.s`. Ingat `s32` hanya ada di
draf (C); sisipan `src/` wajib `i32`, kalau tidak muncul `syntax error before
')'`.

## 22. Extern variadik di `src/` vs definisi fixed-arity

Lanjutan §20: variadik (`i32 func_X(void *, ...);`) memang meloloskan call-site
1 argumen dan 2 argumen, tetapi sebuah **definisi** 2 parameter tidak bisa
berdampingan dengan deklarasi variadik di TU yang sama (`conflicting
declaration`).

Perbaikan byte-netral (TERBUKTI `func_08009300`, hardware.s):

1. Ganti deklarasi `src/` jadi fixed-arity: `void *func_X(void *, i32);`.
2. Call-site yang hanya mengirim 1 argumen diubah menjadi cast pointer-fungsi:
   `((void *(*)(void *)) func_X)((u8 *) arg0 + 0xC);` — tetap satu `bl`, tidak
   menambah instruksi.
3. Buktikan dengan `make compare` **sebelum** migrate (di kasus itu HIJAU), baru
   migrasi.

## 23. Signature callee runtime harus sama dengan `src/` target, bukan dengan src lain

`__builtin_delete` dideklarasikan `void (void *)` di `src/hardware_migrated.cc`
tetapi `i32 (i32 *)` di beberapa `src/` lain. Gate membandingkan **string**
terhadap tanda tangan yang terlihat di file target, jadi blok hardware harus
memakai `void __builtin_delete(void *);` + cast `(void *)` di call-site
(byte-netral) walaupun draf m2c lama memakai `s32 *`.

## 24. Migrasi modul tail-only: urut dari ekor, satu per satu

`tools/scripts/tail_chain.py --module <stem>.s` mencetak `NEXT` = fungsi yang
boleh dicabut sekarang; fungsi sebelumnya akan menjawab `[SKIP] bukan fungsi
terakhir di <modul> (N penerus belum pindah)`. Setelah satu migrasi ekor,
`asm/<modul>.s` terpotong (baris fungsi hilang) — itu memang mekanismenya,
bukan drift.

Daftar target per modul (fungsi ekor yang masih `failed`, ukurannya, residual
terakhir, dan mana yang `promoted` menunggu cabut) ada di
`docs/decomp/EKOR-BACKLOG.md` — pakai itu untuk memilih target, bukan menebak. Bukti sesi: `func_08009324` → `func_08009300` → `func_080092FC` →
`func_080092C8`, semuanya `pindah: 1` + `HIJAU ... fomt.gba: OK`.

## 25. Dua jebakan CLI saat memindahkan satu fungsi hasil `promote`

- `migrate.py --func X` tanpa `--module` hanya memindai `PILOT_MODULES`, jadi
  fungsi modul lain (mis. `new_game.s`) dilaporkan `tidak ada kandidat` walau
  statusnya `promoted` dan `promoted_to` sudah terisi. Pakai
  `--module <modul>.s --func X`.
- `python3 -m decomp.workflow promote X` melempar `KeyError` untuk modul yang
  state-nya ber-shard; jalur yang bekerja `python3 -c "import decomp.run as r;
  r.promote('X')"`, yang mengembalikan path `decomp/promoted/<stem>.cc`.

Bukti sesi: `func_08006C60` -> `promote` -> `migrate.py --module new_game.s
--func func_08006C60` -> `pindah: 1`, baseline HIJAU + pasca-insert
`fomt.gba: OK`.

## 26. `pop {r2}` yang hanya bisa diproduksi `old_agbcc`: jangan paksa compare

Gejala: badan fungsi sudah byte-identik, sisa diff cuma `pop {r2}; bx r2` vs
`pop {r0}`/`pop {r1}`, dan semua tipe balik 32-bit gagal menggesernya.

Penyebabnya tipe balik **dua register** (`long long`) tanpa `return`
(`POLA-DIFF.md` §7.3). `old_agbcc` mengompilasi bentuk itu persis seperti ref
(terukur: `func_08037470` MATCH dengan `FOMT_AGBCC=tools/agbcc/bin/old_agbcc`),
sedangkan `agbcc` dan `agbcp` memesan r0:r1 sejak awal sehingga `push`/badan
bergeser (`[2extra,2operand,13regalloc]`), dan bentuk ber-`return 0;` menambah
`movs r0,#0; mov r1,#0`.

Konsekuensi gate:

- Jangan paksa migrasi: `src/*.cc` dikompilasi `agbcp` (`CC1PLUS`), jadi blok
  dengan tipe balik 64-bit akan MERAH di `make compare` walau judge-nya MATCH
  di `old_agbcc`. Itu bukan kandidat `migrate.py`.
- Status judge default tetap `failed`; catat di `note` shard sebagai parkir
  (alasan: compiler, bukan regalloc) supaya `wall_registry.py` menampilkannya.
- Satu-satunya jalur bila user memutuskan mengejar: objek `src` terpisah
  ber-`.c` + override `CC1 := $(OLD_CC1)` untuk objek itu (preseden
  `$(BUILD_DIR)/src/m4a.o` di Makefile). Ini perubahan build-system, bukan
  migrasi standar, jadi butuh keputusan eksplisit.

## 27. `promote` idempoten per marker; menghapus blok membuat gate GAGAL

`_promote_in_shard` langsung `return` bila `status == "promoted"`, dan menambah blok hanya bila
marker `// DECOMP-MATCHED <func>` belum ada di `decomp/promoted/<modul>.cc`. Konsekuensinya:

- Draf diperbaiki lalu `promote` dijalankan ulang → **tidak ada** yang berubah; blok lama tetap dipakai
  oleh `migrate.py`. Akibatnya tanda tangan extern lama (`u8 *(void *)`) tetap menempel dan gate SKIP
  walau draf sudah benar — gejala serta penyatuannya di §17, audit blok basi di §35.
- Menghapus blok promoted tanpa mengubah status → `migrate.py` berhenti dengan
  `[GAGAL] blok DECOMP-MATCHED tidak ditemukan`.

Prosedur mengulang promote dengan badan baru: potong blok `DECOMP-MATCHED <func>` (sampai akhir file
bila di ekor), set `status` shard kembali ke `matched` dan hapus `promoted_to`, baru jalankan
`python3 -c "import decomp.run as r; r.promote('X')"` lalu `migrate.py`.

Catatan `new_game.s`: modul ini ada di daftar `migrate.py` yang blok asm-nya **tidak** dipotong
(`# 3 sisa (grup + extern manual)`), jadi `asm/new_game.s` tetap utuh setelah `pindah: 1` dan
`git status` tidak menampilkannya — bukan tanda migrasi gagal; cek `pindah: N` + `make compare`.

## 28. Ekor `.byte` bukan penghalang; tanda tangan usang harus disatukan

Dua koreksi terhadap vonis lama di rantai ekor `hardware.s`.

**a. Data `.byte` di ekor blok tetap bisa dimigrasikan.** `func_080091E8` punya 68 byte `.byte`
(fungsi tanpa label di 0x08009224) setelah badannya. `trailing_data_len` membuang data itu dari
perbandingan instruksi (28 vs 28 → identik), dan saat memotong blok, `migrate.py` menyalinnya
**verbatim** ke blok C sebagai string inline asm (`.L08009224:` + `.byte …`). Hasilnya `pindah: 1`
dengan `make compare` HIJAU. Jadi catatan "SKIP permanen — data asing ekor" untuk fungsi ini salah:
yang benar adalah "ekor data disalin apa adanya, badan fungsi tetap MATCH".

**b. Extern usang di `src/` memblokir dengan pesan yang membingungkan.** Gejalanya
`[SKIP] definisi X di body vs extern usang di src (['i32 ()'])` — daftar itu dicetak dari deklarasi
lama, bukan dari definisi baru, sehingga kedua sisi terlihat sama. Prosedur yang terbukti:

1. ubah draf jadi bentuk skalar yang setara byte: `s32 f(s32 arg0)` + cast `((GenObj *)arg0)` di badan
   (menggantikan `void *f(GenObj *)`);
2. judge ulang sampai MATCH (biasanya tetap MATCH karena cast tidak menghasilkan instruksi);
3. samakan `src/<stem>.cc`: extern `i32 f(i32);` dan call-site `f((i32) arg0);` — argumen pertama
   hampir selalu sudah ada di r0 saat `bl`, jadi byte tidak berubah (diverifikasi `make compare`);
4. potong blok `DECOMP-MATCHED f`, set `status=matched` + hapus `promoted_to`, promote, migrate.

Bila definisi membawa parameter yang **dipakai** (mis. `void g(s16 *p, s16 v)`), call-site wajib
meneruskan argumen kedua; sering nilainya sudah berada di r1 dari pemanggil sehingga penerusan itu
gratis. Rantai seperti ini dikerjakan berurutan dari pemanggil terluar; untuk `func_08009154`
rantai itu sudah tuntas (9154 → 917C → 91E8, §36) — kalimat lama di sini yang menyebutnya "masih
tertahan" sudah usang.

## 29. Jalur build kedua untuk keluarga `pop {r2}` (CC1 := OLD_CC1)

Fungsi yang epilognya `pop {r2}; bx r2` mengembalikan nilai 64-bit lewat r0/r1, dan bentuk itu hanya
diproduksi **old_agbcc**; `src/*.cc` dikompilasi `agbcp`, jadi migrasi normal mustahil (gate menolak,
judge baru MATCH di old_agbcc). Jalur yang terbukti HIJAU:

1. satu TU **C** (bukan C++) berisi fungsi-fungsi itu, mis. `src/pop_r2.c`;
2. override Makefile di samping preseden `src/m4a.o`:

   ```make
   $(BUILD_DIR)/src/pop_r2.o: CC1 := $(OLD_CC1)
   $(BUILD_DIR)/src/pop_r2.o: CFLAGS += -w
   ```

3. setiap fungsi diberi `__attribute__((section(".text.<stem>.<hex8>")))` sehingga linker script
   `*(SORT_BY_NAME(.text.<stem>.*))` menempatkannya tepat di posisi asm yang dicabut — tanpa baris
   lds baru;
4. blok `thumb_func_start` di asm dihapus (pemecah section tidak lagi memancarkannya);
5. `make compare` HIJAU sebagai bukti tunggal.

Dua jebakan yang muncul:
- **`-Werror` + cpp host.** `arm-none-eabi-cpp` di lingkungan ini `gcc -E`, yang menyisipkan
  `<stdc-predef.h>` dan marker `#line`; old_agbcc 2.9 menganggapnya warning, dan `-Werror` membuatnya
  jadi error (`old_agbcc.x86: warnings being treated as errors`). Untuk TU ini tambahkan `-w`.
- **Header modern.** `prelude.h` menarik `<stdint.h>` yang tak bisa diparse old_agbcc; tipe dasar
  (`u8`/`i16`/`i32`) ditulis lokal di TU tersebut, bukan `#include`.

Pembukti: `func_080202A0` + `func_08037470` di `src/pop_r2.c` (dua stem berbeda, satu objek),
`make compare` HIJAU. Susulan 2026-11-22: `func_08037ED0` + `func_0803834C` (32B, stem
`code_entities_08034CEC`) masuk TU yang sama dengan section attribute masing-masing — blok asm
dicabut, `make compare` HIJAU. Catatan: fungsi seperti ini **tidak** lewat `promote`/`migrate.py`, jadi state
diisi manual (`status: promoted`, `promoted_to: src/pop_r2.c`) dan kemajuan dihitung dari marker
`// DECOMP-MATCHED` yang wajib ditulis sendiri.

## 30. Signature: tiga batas sekaligus (gate, rename tipe blok, codegen)

`func_08050424` (code_0803EE94) tampak seperti kasus MIGRATE §23 biasa — definisi `void (...)`
vs extern usang `i32 (i32, i32, u16, i32)` — tetapi penyatuannya dibatasi tiga hal sekaligus,
dan salah satunya bukan soal tanda tangan:

1. **Arah penyatuan ditentukan ref.** Epilog ref `pop {r0}; bx r0` = fungsi void; `pop {r1}`
   hanya muncul pada nilai balik 64-bit. Jadi extern `i32` di `src/` yang usang, bukan definisinya.
   Memaksa definisi jadi `i32` bukan sekadar gagal gate: agbcc lalu memilih epilog `pop {r1}` dan
   menata ulang prolog → MERAH.
2. **Tipe param bukan kosmetik.** `void (GenObj *, s32, u16, s32)` MATCH; `void (s32, ...)` maupun
   `void (void *, ...)` (dengan cast di badan) menghasilkan prolog berbeda: ref menyalin arg0 ke
   register callee-saved lebih dulu (`adds r5, r0, #0` di instruksi ke-3), versi skalar
   menundanya sampai pemakaian pertama. MATCH hanya dengan pointer bertipe struct.
3. **Rename tipe lokal blok menabrak gate.** Gate membandingkan sig definisi (setelah tipe lokal
   blok di-rename `GenObj` → `GenObj__func_08050424`) dengan extern di `src/`. Blok yang membawa
   `typedef struct GenObj {...}` sendiri karena itu selalu `[gate SKIP] ... butuh penyatuan
   manual` walau teks sig-nya identik. Solusi: buang typedef lokal dari **blok promoted** dan
   pakai `GenObj` file-scope `src/` (draft tetap boleh punya typedef agar judge bisa berdiri
   sendiri — `_shared_context()` memang mengecualikan `GenObj`).

Bukti sesi: `--explain` berubah dari `[gate SKIP]` ke `[gate OK]` setelah typedef lokal dibuang,
lalu `migrate.py --module code_0803EE94.s --func func_08050424` → `pindah: 1`,
`[baseline] compare HIJAU` + target `fomt.gba: OK`.

### 30b. MERAH palsu dari cpp host (shim `-P`)

Migrasi pertama dilaporkan `MERAH ... fomt.gba: FAILED` padahal tidak ada beda byte: build
sebenarnya **gagal** di TU lain. Modul split punya TU pendamping `src/<stem>_c.c`; begitu `make`
memutuskan membangunnya ulang, `agbcc 2.9 + -Werror` menolak marker `#line` yang disisipkan cpp
host untuk `<stdc-predef.h>` (`unrecognized text at end of #line`). Perbaikan yang benar: shim cpp
memakai `gcc -E -P` (tanpa line marker) — byte-identik, dibuktikan `make compare` HIJAU setelah TU
itu dikompilasi ulang. Tanpa `-P`, setiap TU C yang perlu rebuild di lingkungan ini gagal dan
`migrate.py` melaporkannya sebagai MERAH.

### 30c. `s32` vs `i32`: blok promote butuh `s32`, TU src butuh alias

`include/types.h` hanya mendefinisikan `i32`; `s32` cuma ada di harness judge dan di draf m2c.
Padahal audit melarang `i32` di `drafts/`/`promoted/` (harness judge tak punya `i32`), dan gate
membandingkan teks tanda tangan apa adanya. Jadi untuk blok yang pindah ke TU `src/*.cc`:
tulis tanda tangannya dengan `s32` di draf/blok promoted **dan** di `src/`, lalu tambahkan satu
baris `typedef i32 s32;` di TU src itu (bukan di `types.h`, supaya tak mengubah header bersama).
Tanpa alias, TU gagal kompilasi (`type specifier omitted for parameter`) dan migrate melaporkan
MERAH.

## 31. Rantai ekor K&R: register-var + seragamkan extern callee

Blocker ekor `hardware.s` yang tersisa (`func_08009154`, 4 byte) bukan soal cocokkan instruksi:
badannya cuma `strh r1, [r0]; bx lr`, tapi **pemanggilnya di `src/` memanggil K&R** —
`func_08009154()` tanpa argumen, mengandalkan r0/r1 sisa register pemanggil. Memberi parameter
biasa membuat pemanggil gagal kompilasi (atau butuh instruksi tambahan untuk mengisi r1) → MERAH.

Pola yang MATCH (dibuktikan sesi ini): daftar parameter **kosong** + register var.

```c
void func_08009154() {
    register s16 *p asm("r0");
    register s16 v asm("r1");
    *p = v;
}
```

Dua hal yang menyertainya:

- **Extern di `src/` ikut diseragamkan** (`i32 f()` → `void f()`); call-site K&R yang sudah ada
  tetap sah, jadi tidak ada perubahan byte.
- **Callee bersama harus satu tanda tangan di seluruh `src/`.** `func_08009140` tertahan karena
  `func_0800912C` punya dua extern berbeda (`i16 ()` dan `i32 ()`); gate menolak selama daftar itu
  tidak konsisten. Seragamkan ke `i32`/`s32` di semua blok (lebarnya tak mengubah byte: nilainya
  0..0x3FF), lalu beri pemanggil argumen eksplisit bila r0 memang sudah berisi nilai itu
  (`func_08009140((i16 *) (void *) arg0)` — byte-netral, dibuktikan `make compare` HIJAU).

Sesudah tiga link pindah (`func_08009154`, `func_08009140`, `func_0800912C`), rantai berhenti di
`func_08009094` yang masih `failed` (DIFF regalloc) — jadi sisa blok promote-only di atasnya masih
butuh MATCH baru, bukan migrasi.

## 32. Jalur `CC1 := OLD_CC1` tidak menggeneralisasi ke semua `pop {r2}`

Percobaan sesi ini: 7 fungsi `pop {r2}` sisa (08024BFC, 0802AB98, 0804EA94, 0805E760, 080A3E90,
08037ED0, 0803834C) dicoba lewat jalur build kedua (`src/pop_r2.c` + `CC1 := $(OLD_CC1)`,
preseden `src/m4a.c`/`m4a.o`), satu per satu di TU kecil dengan `old_agbcc` lalu dibandingkan
byte-per-byte ke ROM.

Hasil:

- **Berhasil (byte-identik):** `func_08037ED0` dan `func_0803834C` (32B) — keluarga "tulis 4 field
  `Out` ke arg0, tanpa `return`", persis seperti dua fungsi yang sudah ada di `src/pop_r2.c`.
- **Gagal:** `func_0805E760` (48B) dan varian besar lain. Penyebabnya bukan sekadar tipe balik:
  ref berakhir `adds r0, r4, #0` (r0 = arg0) **tanpa** ekstensi tanda, sedangkan C apa pun yang
  menghasilkan `adds r0,…` lewat `return arg0;` pada fungsi bertipe balik 64-bit menambah
  `asrs r1, r4, #31` (+2B, panjang jadi 52); tanpa `return`, `adds r0,…` hilang (48B tapi beda).
  Selain itu urutan load ref (`ldrh r1,[r0,#2]` lalu `ldrh r2,[r0]`) tidak tereproduksi dari
  bentuk C langsung — gcc selalu memuat `unk0` lebih dulu.

Kesimpulan: `OLD_CC1` hanya menolong **keluarga codegen**-nya (epilog `pop {r2}` + nilai balik
r0:r1 yang tak dipakai), bukan semua fungsi berepilog itu. Batch 9 fungsi dibatalkan; yang boleh
masuk jalur ini hanya fungsi yang sudah terbukti byte-identik di TU kecil.

Tindak lanjut 2026-11-22: dua yang terbukti (`func_08037ED0`, `func_0803834C`, 32B) sudah masuk
`src/pop_r2.c` + blok asm-nya dicabut, `make compare` HIJAU. Sisa lima anggota keluarga tetap
failed — `func_08024BFC` (88B), `func_0802AB98` (148B), `func_0804EA94` (496B), `func_0805E760`
(48B), `func_080A3E90` (188B): masalahnya bentuk C-nya (mis. `adds r0,r4,#0` tanpa sign-extend
pada fungsi balik 64-bit, urutan load `ldrh` yang tak tereproduksi), bukan jalur build, jadi
jangan diulang lewat `OLD_CC1` tanpa bentuk C baru yang terbukti byte-identik di TU kecil.

**Percobaan ulang 2026-11-22 (matriks bentuk C, `old_agbcc` langsung).** Bentuk terdekat:
`Out *f(Out *, Args *, u32)` + `return arg0;` menghasilkan **48B dengan badan persis ref**, hanya
epilognya `pop {r1}; bx r1` (ref `pop {r2}; bx r2`) — inilah sisa `2regalloc` di diff. Begitu tipe
balik dibuat 64-bit supaya epilog jadi r2 (`long long` + `return (long long)(void *)arg0;`, atau
`return arg0;` implisit), gcc menambah tepat satu instruksi ekstensi: `asr r1, r4, #0x1f` (atau
`mov r1, #0` bila lewat `u32`) → 50B. Satu-satunya bentuk yang memberi `pop {r2}` **dan**
`adds r0, r4` tanpa instruksi tambahan adalah **sret** (tipe balik struct 8 byte), tetapi sret
menggeser parameter (hidden pointer di r0 → `arg0` jadi r1, `arg1` jadi r2, indeks r3) dan gcc
membangun struct lewat stack/mask, bukan `strh` langsung.

Ref memakai `str r1,[r4]` + `strh r2,[r4,#4]` (tulis lewat pointer, bukan salin struct) dengan
parameter di r0/r1/r2. Dari ~15 bentuk C yang dicoba di kedua front end (`agbcc` dan `old_agbcc`),
tidak ada yang memenuhi ketiganya. `func_0805E760` tetap `failed`; jangan ulangi tanpa ide baru
(varian flag/compiler yang belum dicoba), dan jangan "menambal" dengan inline asm.

**Percobaan ulang 2026-11-23 (batas keras, tanpa bentuk baru).** Ref `func_0805E760` didisasm
ulang byte-per-byte: `push {r4, lr}; adds r4, r0` → r0 adalah `Out *arg0` (parameter C, bukan hidden
sret), `adds r3, r1` → args, `cmp r2, r0` → indeks; ekor `adds r0, r4; pop {r4}; pop {r2}; bx r2`.
Yang diuji ulang: (a) `-freg-struct-return` + tipe balik `Out` + `return *(Out *)arg0;` → tetap
salin struct (load 2 word + `str`, +4B) dan epilog `pop {r2}`; (b) `agbcp` (C++) dan `agbcc` baru
untuk `return (long long)(u32)arg0;` → `adds r0, r4; mov r1, #0` (50B) lawan `asr r1, r4, #31` di
`old_agbcc` — keduanya +2B; (c) sret 2 parameter (`Out f(Args *, u32)`) tetap tak bisa menulis
`strh` lewat pointer ke slot balik; compound literal menulis langsung ke sret tetapi butuh
`push {r4, r5, r6, lr}`, mask padding, dan `str` word (bukan `strh`). Kesimpulan: kombinasi
`adds r0, r4` + `pop {r2}` + parameter r0/r1/r2 + tulis `strh` lewat pointer **tidak punya bentuk C**
di toolchain ini; `pop {r2}` semata penanda nilai balik 64-bit, dan setiap bentuk 64-bit menambah
satu instruksi ekstensi. Jangan diulang tanpa toolchain/front end baru.

**Sisir penuh keluarga `pop {r2}` (2026-11-23).** `grep "pop {r2}" asm/*.s` **tidak** cukup: banyak
fungsi kecil di `asm/` masih berupa blob `.byte`/komentar disassembly, jadi epilognya tak terlihat
sebagai teks. Cara yang benar: pola byte `04 BC 10 47` (`pop {r2}; bx r2`) discan langsung ke
`fomt.gba`, lalu tiap alamat dipetakan ke entri shard lewat `addr`+`ref_len`.

Hasil (13 titik): 9 anggota keluarga yang sudah tercatat — 4 pindah lewat `src/pop_r2.c`
(`func_080202A0`, `func_08037470`, `func_08037ED0`, `func_0803834C`) dan 5 masih `failed`
(`func_08024BFC`, `func_0802AB98`, `func_0804EA94`, `func_0805E760`, `func_080A3E90`); 3 kembaran
yang tertelan blok lebih besar dan sudah ikut tereproduksi (`0x08022B38` di blok
`func_080229A4`, `0x080329DC` di blok `func_08032934`, keduanya promoted; `0x080215FC` di blok
`func_0802151C` yang masih failed); dan 1 (`0x0803240C`) sudah ada sebagai fungsi C++
`EC Box func_0803240C(AActorEntity &)` di `src/entity_actor.cc` — bukan bagian jalur `pop_r2.c`,
jangan dimigrasikan ulang.


## 33. Draf berlabel (`goto`): bersihkan label sebelum migrate

Gejala: `fomt <f>` MATCH, tetapi `migrate.py` menjawab
`extern <callee> beda tanda tangan (['i32 (...)', 'tail: (a, b, c)'] vs ['i32 (...)'])`
walaupun deklarasi di blok dan di `src` sudah disamakan. Penyebab: `extern_decls()` membaca
`label:` + panggilan sesudahnya sebagai deklarasi (entri `tail: (...)`), sedangkan teks `src`
tidak punya entri itu — jadi gate selalu melihat "beda".

Tindakan: ganti `goto`-nya dengan alur tanpa label (`if (k) continue;` + satu panggilan bersama di
luar `if`), judge ulang, baru migrate. Terbukti `func_08009094` (150B): MATCH → `pindah: 1` HIJAU.
Jangan "menambal" dengan mengubah deklarasi callee; tanda tangannya sudah benar.

Bukti kedua (2026-11-22, `func_08050D8C`): blok staging-nya mendeklarasikan callee
`func_08050424` dengan tanda tangan m2c lama `s32 (s32, s32, s32, s32)` padahal definisi di
`src/code_0803EE94.cc` sudah `void (GenObj *, i32, u16, i32)`. Disamakan + cast
`(GenObj *)(*arg0)` di call-site; draf memakai forward `typedef struct GenObj GenObj;` (jangan
menyalin struct src — `i32` di draf ditolak `audit_consistency.py`). Judge ulang MATCH, jadi
`func_08050D8C` tidak lagi menabrak gate kelas ini saat giliran migrate-nya. Gate menormalkan
`s32`→`i32`, jadi blok promoted tetap ditulis `s32` seperti blok lain di berkas itu.

## 34. Parkir "blob dua fungsi" bisa dibuka: `ref_len` terakhir termasuk data ekor

Catatan parkir lama untuk `func_08008FE4` (`hardware.s`) menyebut "ref 176B = dua fungsi dalam satu
blok `.byte`, C satu fungsi mustahil mencapainya". Itu keliru: 56B pertama adalah fungsi asm biasa dan
120B sisanya adalah **data ekor** (fungsi tanpa label di `0x0800901C`) yang tetap di `ref_len`.
Gate memotong data ekor dari perbandingan instruksi dan menyalinnya verbatim ke blok C, jadi fungsi
terakhir sebuah modul tetap bisa MATCH + `migrate` selama badan fungsinya sendiri bisa ditulis di C.
Yang perlu diperiksa hanya apakah sisanya benar-benar data/tak-terpanggil-langsung, bukan panjangnya.

Bukti: MATCH 56B lalu `pindah: 1`, baseline + target `fomt.gba: OK`; setelah migrasi, `asm/hardware.s`
berakhir di blob `.byte` 44B milik fungsi sebelumnya (`0x08008FB8`).

## 35. Blok promoted basi: tanda tangannya bisa menyembunyikan fungsi yang sudah MATCH

`promote()` tidak menimpa blok yang sudah ada (§17, mekanismenya §27), jadi blok hasil judge lama (tanda tangan m2c
usang) tetap tinggal walau draf sudah di-judge ulang. Selama fungsinya belum pindah, gate membandingkan
blok **basi** itu dengan `src/`, bukan draf terbaru — fungsi yang sebenarnya sudah MATCH bisa berhenti
permanen di `promoted` tanpa pernah dicoba migrate.

Cara memeriksa (murah, tanpa kompilasi) — jangan menebak dari `--explain` satu fungsi:

1. Kumpulkan semua marker `// DECOMP-MATCHED func_...` di `decomp/promoted/*.cc`.
2. Untuk tiap fungsi panggil `migrate_one(<stem>.s, func, dry_run=True)` (jalankan dari `decomp/`,
   `sys.path`-nya sudah memuat `run.py`); kumpulkan `detail` yang memuat `tanda tangan`, `usang`,
   atau `penyatuan`.
3. `python3 decomp/migrate.py --module <mod>.s --func <fn> --explain` hanya untuk kandidat itu
   (mencetak blok vs **semua** deklarasi di TU tujuan).

Klasifikasi hasil (audit 2026-11-22 atas seluruh blok promoted — angka di `SESI-2026-11-22.md`):

- **Konflik di TU tujuan** (`src/<stem>.cc`; modul tail-only berlayout `before` →
  `src/<stem>_migrated.cc`) — inilah yang memblokir migrate. Perbaiki tanda tangan di draf
  (codegen-netral: cast pointer, parameter tak terpakai, `s32`↔`i32` via gate), judge ulang, lalu
  buang blok + baris marker (§15/§17) dan promote lagi. Contoh yang masih terbuka: `new_game.s
  func_080050F8` (blok `s32 *(s32 *, GenObj *)` vs src `void (void *, i32)`, plus lima extern callee
  usang); `func_080390D0` (blok `u32 (GenObj *)` vs src `s32 ()`) tetap parkir karena data asing 88B.
- **Konflik lintas TU** (extern pemanggil di `src/<lain>.cc`) — gate hanya membaca TU tujuan, jadi ini
  **tidak** memblokir migrate dan tak perlu re-promote; yang usang adalah extern di sisi pemanggil.
  Kelas `func_08008920`: blok `hardware.s` menulis `s32 (s32 *)`, pemanggil `src/new_game.cc`
  `i32 (i32)`, `src/intro_scene.cc` `i32 (void *)` — ABI sama-sama satu kata, tapi draf pemanggil baru
  wajib memakai tanda tangan kanonik `src/` + cast (lihat §13).
- **Blok yang fungsinya sudah pindah** — boleh beda tanda tangan (typedef di-rename
  `GenObj__func_<addr>`, §15); `_already_in_src()` melompatinya lebih dulu, jadi tak menghalangi
  apa pun. Hapus saja bila mengganggu pembacaan.

Jangan menyunting blok promoted langsung: `verify` menilainya apa adanya, dan blok itu yang akan
dibandingkan gate (bukan draf). Satu-satunya jalan adalah draf → judge → hapus blok → promote.

## 36. Hack K&R + register var dicabut dengan menaikkan parameter ke rantai pemanggil

Kasus `func_08009154` (`hardware.s`, 4B: `strh r1,[r0]; bx lr`). Migrasi pertamanya memakai
`void f()` + `register s16 *p asm("r0"); register s16 v asm("r1");` karena pemanggil terdekat
(`func_0800917C`) tidak menyiapkan r1 — nilainya warisan register dari pemanggil 917C. Byte-nya benar,
tapi kontrak fungsinya tersembunyi dan gate/audit tanda tangan membacanya sebagai K&R.

Resep (tanpa mengubah byte):

1. Definisi jadi dua parameter: `void f(i16 *arg0, i32 arg1) { *arg0 = arg1; }`.
   Parameter kedua **`i32`**, bukan `i16`: cast `(i16)` di call-site membuat agbcc menyisipkan
   `lsl r1,#0x10; asr r1,#0x10` dan byte berubah.
2. Pemanggil langsung: `i32 g(i32 arg0, i32 arg1)` + `f((i16 *) arg0, arg1)` — r0/r1 sudah berisi,
   jadi nol instruksi pada `g`.
3. Naikkan terus sampai call-site yang memang sudah mengisi r1. Kalau ujungnya masih di `asm/`,
   berhenti di situ: call-site asm tidak perlu diubah (r1 sudah disetel olehnya).

Pembukti: `func_08009154` → `func_0800917C` → `func_080091E8` (`src/hardware_migrated.cc`),
`make compare` HIJAU (`fomt.gba: OK`). Hanya fungsi yang benar-benar membaca/meneruskan r1 yang perlu
parameter tambahan — `func_08009168` kembarannya tidak (memanggil `func_08009140` satu argumen),
jadi tanda tangannya tetap satu parameter.

## 37. MATCH di judge (`agbcc`/C) belum tentu MATCH di `src/` (`agbcp`/C++)

`func_08008E64` (`hardware.s`, 84B) MATCH di judge dengan bentuk m2c apa adanya, tetapi `make compare`
MERAH setelah migrate: badan yang sama dikompilasi `agbcp` menghasilkan instruksi berbeda —
`push {r4, r5, lr}` + `adds r4, r1, #0` di awal (arg1 di-spill) dan `eors r0, r1; ands r0, r1` untuk
uji `!(t & 1)`, karena front end C++ menurunkan `!` pada mask dan comma-expression secara lain.

Bentuk yang terbukti byte-identik di **kedua** front end:

1. jangan memakai `!` pada uji mask: tulis `(t & 1) == 0`, bukan `!(t & 1)`;
2. jangan menaruh penugasan `t` di dalam kondisi (comma-expression); hitung `t` sebagai statement
   di cabang `if (arg2 != 0)`, lalu uji `(t & 1) == 0` di dalamnya;
3. dua early-return `if (arg0 == 0) return;` / `if (arg1 == 0) return;`, baru `a = arg0;` — itulah
   yang menaruh `adds r4, r0, #0` tepat setelah kedua cek null seperti ref;
4. blok `v = 0` dipakai bersama oleh cabang `arg2 == 0` dan `t & 1` (satu `movs r2, #0` + `b`).

Sebelum migrate, probe cepat harus memakai jalur C++ (preprocess lalu `agbcp -O2 -fhex-asm`), bukan
`agbcc`: `tools/scripts/try.sh` memakai `agbcc` (C), jadi hasilnya tidak menjamin `src/*.cc`.

**Prototipe pemanggil ikut menjadi bagian gate.** Dua blok pemanggil di `src/hardware_migrated.cc`
mendeklarasikan `i32 func_08008E64(i32, i32, i32);`; definisi baru `void` membuat `agbcp` gagal
compile ("conflicts with previous declaration"). Build tidak diperbarui, `compare` MERAH, dan pesan
yang tercetak hanya baris assembler yang menyesatkan. Samakan prototipe pemanggil ke `void` (nilai
balik tidak dipakai; byte call-site tidak berubah).
