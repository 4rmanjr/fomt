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

Sebab: `promote()` menambah blok baru tanpa membuang blok lama, jadi dua
fungsi di modul yang sama bisa mendeklarasikan callee yang sama dengan tanda
tangan berbeda (satu dari blok lama). Gate mengumpulkan SEMUA deklarasi di
modul, bukan hanya milik fungsi yang dimigrasi.

Penanganan: samakan semua deklarasi callee di modul ke tanda tangan `src/`,
buang blok duplikat (`promoted` hanya boleh punya satu blok per fungsi), lalu
judge ulang fungsi yang bloknya ditulis ulang. Cek cepat:
`grep -cE "^(void|s32|i32) func_<nama>\\(" decomp/promoted/<modul>.cc` harus 1
(jangan `^void` saja — blok duplikat bisa berbeda tipe kembali).

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
