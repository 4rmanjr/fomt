# AGENTS.md

Panduan untuk agent AI yang bekerja di repo ini (Harvest Moon: Friends of
Mineral Town, decomp GBA).

## Aturan penting

1. **Decomp satu perintah.** Pakai `fomt`, jangan `python3 decomp/run.py`
   langsung dan jangan pakai `decomp/workflow.py` (legacy).
2. **Jangan menimpa hasil MATCH.** `matched`/`promoted` tidak pernah diulang
   otomatis; jangan mengubah draf/berkas promoted-nya tanpa alasan.
3. **Autopush MATI (default).** Commit + push ditangani manual per sesi oleh
   agent — kumpulkan migrasi/MATCH lalu commit (hanya file milik pekerjaan)
   dan push di akhir sesi. Jangan `git add -A` sembarangan.
   - Aktifkan kembali sementara dengan `FOMT_AUTOPUSH=1`
     (`run.py:autopush` utk batch MATCH, `migrate.py:autopush_migrate`
     utk migrasi src).
   - Yang layak commit per sesi: draf MATCH + blok promoted + shard state
     `modules/`, file src hasil migrasi; artefak biner judge di-ignore.
4. **Jangan force-push** ke `main`.
5. **Multi-agent:** pakai `--agent <nama>` yang unik per sesi. Jangan pakai
   nama sama di dua sesi yang jalan bersamaan.
6. **Pesan commit harus terkait pekerjaan aktual.** Judul menyebut fungsi
   yang dikerjakan; badan menjelaskan KENAPA begitu (bukan template):
   jalur otomatis MERAH karena apa, pola manual apa yang dipakai, bukti
   HIJAU apa. Contoh yang patuh:
   ```text
   decomp: migrate func_08077C40 func_0807F5F0 func_080804CC (3 funcs, compare hijau)

   Manual (edit diizinkan). Jalur .cc MERAH: insert memicu rewrite
   self-ref yg merusak extern blok lama (080931B0/08093A58). TU .c
   terpisah: draf verbatim K&R (callee failed tetap sah dideklarasi),
   codegen judge-identik. Lds tak berubah (entri _c.o sudah ada).
   ```
   Dilarang: pesan generik ("update", "fix", "migrasi beberapa fungsi"),
   klaim tanpa bukti (tulis `compare hijau` hanya bila `make compare`
   benar-benar HIJAU di sesi itu), menyebut file/fungsi yang tidak
   disentuh commit tersebut. Sebelum commit manual, cek
   `git status`/`git diff --cached`: hanya stage file milik pekerjaan
   ini (draf/state/log milik batch lain JANGAN ikut).
7. **Hemat token untuk SEMUA perintah berisik.** Berlaku untuk perintah
   APAPUN yang outputnya >20 baris atau jalan >30 detik: `fomt`, `fomt
   verify`, `fomt --loop`, `make`, `ninja`, `make compare`, `git log`,
   `grep -r`, dsb. WAJIB redirect ke `/tmp/` (bukan ke repo, biar
   tidak ikut git):
   `<perintah> > /tmp/<nama>.log 2>&1; echo "exit:$?"`.
   Ke chat hanya: exit code + ringkasan (`grep -c`/hitung + baris
   ERROR/DIFF/FAIL via `grep ... | head -20` + `tail -5`). Dilarang
   print full log ke chat; full log tetap di `/tmp/*.log` bila diminta.
   Contoh pola per perintah:
   - `fomt ... > /tmp/fomt.log 2>&1; echo "exit:$?"; tail -5 /tmp/fomt.log`
   - `fomt verify > /tmp/verify.log 2>&1; echo "exit:$?"; grep -c MATCH
     /tmp/verify.log; grep DIFF /tmp/verify.log | head -20`
   - `make compare > /tmp/build.log 2>&1; echo "exit:$?";
     grep -iE "error|fail|diff" /tmp/build.log | head -20; tail -5 /tmp/build.log`
   Untuk audit cepat pakai inkremental: `fomt verify --since HEAD~5`
   atau `fomt verify --module <stem>` (bukan verify penuh >7 mnt).

   **Format laporan wajib ke chat (maks 5 baris):**
   - 1 baris: `exit:<kode> | MATCH:<n> | DIFF:<n>`
   - 1 baris: status ringkas (`total/berhasil (%) | sisa | failed`)
   - maks 3 baris: hanya fungsi MATCH baru atau DIFF penting (nama +
     satu frasa alasan); sisanya tetap di log.
   - Log penuh tidak pernah ditempel ke chat; sebut path `/tmp/*.log`
     bila perlu.

   **Aturan tambahan hemat token:**
   - Jangan dump source tooling (`sed -n` rentang besar `run.py`,
     `migrate.py`); pakai `grep -n "<pola>"` untuk menemukan bagian.
   - Jangan `cat` ulang file setelah edit — diff dari tool edit sudah
     cukup; baca file hanya untuk konteks yang belum pernah dilihat.
   - File yang sudah tampil di konteks sesi ini JANGAN dibaca ulang —
     untuk delta pakai `grep`/`sed -n` baris spesifik saja.
   - Gabungkan perintah independen dalam satu pemanggilan shell
     (`cmd1; cmd2`) agar tidak ada round-trip terpisah.
   - Edit draf + judge dalam SATU command (wajib): hemat round-trip dan
     memenuhi syarat mtime resanitize (edit hilang bila batch jalan di
     antaranya).
   - Untuk diagnosis fungsi: `grep -n` baris error di draf/log dulu;
     buka asm hanya di sekitar offset yang berbeda.
   - Skrip > heredoc: butuh query/queue/dump lebih dari 1x, tulis ke
     `tools/scripts/` sekali, pakai ulang — jangan heredoc ad-hoc tiap
     sesi.
   - Cap 5 judge per fungsi: di atas itu hampir selalu wall struktural;
     parkir + regenerasi draf (regenerasi = draf murni m2c agar tak
     mengantre ulang), catat di log sesi, pindah fungsi.
   - Transfer verbatim antar-saudara pola sama tanpa re-diagnosis (pin/
     offset sesuai asm ref masing-masing terbukti MATCH langsung).
   - Verify parsial dulu: 1 fungsi disentuh cukup `judge` + `make
     compare`; `verify` penuh HANYA di akhir sesi (paling mahal —
     ~991 fungsi; jangan pernah mid-sesi).
   - `make compare` hanya setelah perubahan build (src/asm/lds via
     migrate atau edit manual src): judge MATCH / regen / parkir draf
     tak mengubah tree build → tak perlu compare. migrate.py sudah
     compare otomatis 2x (baseline + target).
   - Sesi pendek: maks 3 migrasi lalu TUTUP dengan log sesi + commit +
     push. Sesi panjang menumpuk konteks kumulatif (penyebab #1 token
     boros — output turn lama dibayar ulang tiap turn).

## Perintah

```bash
fomt                      # 20 fungsi berikutnya
fomt --migratable        # hanya fungsi yg BISA migrate ke src:
                          # modul migratable dulu (0803EE94/809E804/
                          # entities/34CEC/0803A8A4/new_game/game_state/
                          # main), SKIP-permanen dilewati (grup gabungan,
                          # data-asing ekor, modul tail-only/linkonce)
fomt 10 --migratable     # 10 fungsi migratable
fomt 10                   # 10 fungsi berikutnya
fomt 5 sram_proxy_1.s     # 5 fungsi dari modul itu
fomt status               # progres saja (total/berhasil/sisa)
fomt verify               # audit ulang semua promoted/matched (tanpa ubah state)
fomt 10 --agent opencode  # identitas agent untuk klaim
fomt --loop               # ulangi batch 20 sampai antrean habis (foreground)
fomt --loop 10            # sama, batch 10 per putaran
fomt --loop 20 --wait 2 code_linkonce.s --retry  # loop modul itu + ulangi failed
```

Statistik (`total`, `berhasil`, `sisa`, sebaran status, `batch M/D`) dicetak
setiap fungsi selesai dan di akhir tiap batch. Mode `--loop` mengulangi batch
sampai pending/drafted habis — tetap foreground (bukan background), tiap fungsi
dan ringkasan `batch#N` dicetak langsung; berhenti dengan Ctrl-C atau saat
antrean kosong. Catatan loop:

- failed yang drafnya tidak disentuh TIDAK ikut antre lagi (tidak macet di
  fungsi gagal yang sama); hanya draf yang diperbaiki manual yang di-judge
  ulang otomatis.
- `--retry` memaksa semua failed diulang — gabungkan dengan `--loop` hanya
  bersama filter modul, kalau tidak ditolak (akan berputar selamanya).
- Klaim per-batch dilepas di akhir tiap batch (`release_all`), jadi agent lain
  bisa mengambil alih di jeda `--wait S` (default 5 detik).
- `--migratable` hanya mengantrekan fungsi yg lolos `migrate_gate`
  (`decomp/migrate.py`: grup solo + bukan data-asing-tak-selamat +
  modul split). Prioritas: kerjakan MATCH yg langsung bisa `migrate` ke
  `src/` (compare HIJAU) — bukan fungsi yg MATCH tapi SKIP-permanen
  (grup gabungan, pool yatim, `__builtin_new`, tail-blokir). Default
  (tanpa flag) tak berubah: semua modul terantre seperti semula.

## Alur per fungsi

`scan` -> `draft` (m2c) -> `judge` (agbcc `-O2`, byte-identik vs asm) ->
`promote` (ke `decomp/promoted/<modul>.cc`) -> `autopush`.

- State: `decomp/state/progress.json` (ditulis atomik di bawah `flock`).
- Draf: `decomp/drafts/<nama>.c`.
- Log judge: `decomp/logs/judge_<nama>/<agent>/` (ramping: hanya
  `func.c`/`func.s`; artefak `.o`/`.i`/`ref.o`/`common.h` dihapus otomatis
  tiap judge selesai — butuh lengkap? `FOMT_KEEP_ARTIFACTS=1`).
- Klaim basi diambil alih setelah `FOMT_CLAIM_TTL` detik (default 1800).
  `FOMT_CLAIM_TTL=0` hanya bila tidak ada agent lain yang jalan.

## Kalau DIFF (perbaikan manual draf)

DIFF jarang kesalahan logika — mayoritas draf m2c mentah yang tidak
dikompilasi agbcc apa adanya. Buka `decomp/drafts/<nama>.c` + log di
`decomp/logs/judge_<nama>/<agent>/`, kenali polanya, perbaiki, jalankan
`fomt` lagi (draf yang mtime-nya lebih baru dari `judged_mtime` otomatis
ikut antre judge ulang):

1. **`request for member 'unk*' in something not a structure or union`**
   (paling sering; fungsi C++ `intro_scene.s`/`new_game.s`): argumen masih
   `void *` tapi dipakai `arg->unkX`. Sanitizer biasanya sudah membuatkan
   `typedef struct GenObj` — kalau draf belum memilikinya, jalankan `fomt`
   sekali lagi (resanitasi otomatis menulis ulang draf mentah). Kalau masih
   gagal: ganti nama `GenObj` menjadi tipe bersama dari fungsi MATCH
   (`Vtbl`/`Obj` di `decomp/promoted/code_linkonce.cc`), atau tulis struct
   sendiri dari offset akses + lebar (`ldrb`=u8, `ldrh`=u16, `ldr`=s32/ptr).
   Virtual-call `t->unkA->unkB(...)`: cast eksplisit
   `((void (*)(void *,...))(t->unkA->unkB))(t, ...)`.
2. **`extern s32 .Lxxxxxx` / `syntax error before '.'`**: label literal-pool
   bocor ke C. Sanitizer `_label_addrs` menggantinya dengan nilai heksa dari
   blok asm — kalau draf masih memilikinya, jalankan `fomt` lagi untuk
   resanitasi; kalau nilai tak ketemu (label lompatan), ganti manual dengan
   konstanta dari ekor blok asm.
3. **`unksp0 undeclared` / `sp +` di badan**: m2c salah merekonstruksi stack
   (umum di fungsi dekompresi `Unpack`). Tulis ulang rangka stack manual
   dari asm, betulkan tipe parameter.
4. **Byte-DIFF (`byte +0xN: 0xAA vs ref 0xBB`)**: sudah kompilasi, tinggal
   codegen. Pecah kondisi `||`/`&&` satu baris jadi `if` bertingkat sesuai
   urutan asm; samakan urutan/tipe local stack.
5. **`M2C_ERROR` di draf**: kontrol aliran m2c gagal total — regenerasi
   tidak membantu. Tulis ulang fungsi dari asm.
6. **`byte +0x1a: 0x1 vs ref 0x2 [regalloc @r pop {r1} | pop {r0}]`**
   (beda HANYA di epilog): ref berakhir `pop {r1}; bx r1` ⇒ fungsinya
   MENGEMBALIKAN nilai (`s32`), bukan `void`. Draf m2c menulis
   `void f(...) { call(...); }`. Perbaikan: `s32 f(...) { return
   call(...); }` — terbukti func_08014234/func_08014D7C/func_08015950/
   func_080ADB78/func_080AAF3C. Varian ekor `ldr r1,[r0,#N]; asrs
   r0,r1,#0x10` ⇒ `return a >> 16;` dengan `s32 a = 0;` ditulis SETELAH
   call (kalau sebelum, gcc menyimpannya di r4 + `push {r4}` = 2 byte
   beda).
7. **Target indirect call di `r2` walau `r1` bebas** (residual tetap
   `byte +0x8: 0x1 vs ref 0x2`): fungsi punya ARGUMEN KE-2 yang
   diteruskan apa adanya ke call; m2c membuangnya karena tak dipakai di
   badan. Tambahkan `s32 arg1` lalu teruskan (`fn(t, arg1)`) — zero
   codegen untuk passthrough, target pindah ke r2, dan `movs r1,#0` di
   ref = inisialisasi variabel hasil. Terbukti func_080120A4/080120C4
   (dua-duanya MATCH hanya karena ini).
8. **`byte +0x4/+0x8: 0x8x vs ref 0xa8`**: offset field struct salah →
   hitung ulang padding (`_padN` sebelum field berikutnya) dari offset
   asm; jangan tambal di ekspresi pemakaian.

Aturan berhenti: jangan mengulang fungsi yang sama tanpa perubahan draf
(`_queueable` juga tidak akan mengantrekannya lagi). Tulis catatan spesifik
di `note` via draf: apa yang dicoba, sisa diff, kecurigaan — agar jalan
berikutnya mulai dari attempt terbaik, bukan dari nol.

Konteks bersama: struct bernama yang terbukti dari fungsi MATCH (mis.
`Vtbl`, `Obj`, `S_*`) otomatis di-include saat judge
(`decomp/run.py:_shared_context`, dari `decomp/promoted/*.cc`; nama konflik
atau `GenObj` per-fungsi dikecualikan). Nama tipe yang didefinisikan draf
sendiri DIKECUALIKAN dari konteks (tidak duplikat). `fomt verify` menilai
BLOK PROMOTED apa adanya (tanpa konteks, tanpa draf kerja) — cermin kondisi
saat MATCH.

**Blok promoted harus mandiri.** `promote()` otomatis menyalin definisi
tipe konteks (`Vtbl`/`Obj`/`S_*`) yang dipakai draf ke depan blok
(`decomp/run.py:_expand_ctx`, beserta dependensinya), supaya blok tetap
kompilasi saat `verify` menilainya tanpa konteks — dan tetap kompilasi bila
konteks berubah (tipe dihapus/konflik di kemudian hari). Jangan mengandalkan
tipe dari blok fungsi lain.

## Migrasi ke src (`migrate.py`) — jebakan yang terbukti

- **Tanda tangan extern di blok harus SAMA dengan yang sudah ada di
  `src/<stem>.cc`.** Guard membandingkan string tanda tangan (translasi
  `s32`→`i32` otomatis; `u32` vs `s32` TIDAK ditranslasi). Contoh nyata:
  src punya `void *GetMapData(i32)`, draf menulis `MapData *GetMapData()`
  → `[SKIP] extern GetMapData beda tanda tangan`. Solusi codegen-netral:
  pakai tanda tangan src, simpan nilai balik call sebelumnya ke satu
  variabel sekali-pakai lalu lewatkan sebagai argumen (`t = func_0803A8A4(...);
  return ((MapData *) GetMapData(t))->unk20 << 3;`) — r0 sudah berisi `t`
  sehingga tak ada `mov` tambahan dan judge tetap byte-identik.
- **`fomt --migratable` bisa “MATCH” fungsi yang SUDAH ada di src**
  (state shard basi; judge melihat “no ref symbol” lalu promote). Akibatnya
  blok DUPLIKAT ditambahkan ke `decomp/promoted/<stem>.cc`. Selalu periksa
  `git diff decomp/promoted/` sesudah batch; buang blok dobel
  (`git checkout` file promoted) dan JANGAN hitung sebagai migrasi baru —
  `migrate.py` akan menjawab `sudah ada di src/... (dilewati)`.
- **Insert ke `src/*.cc` yang punya blok `extern "C" {` bisa MERAH**
  (`syntax error before 0x5F0`) karena titik sisip jatuh di dalam blok itu
  (terbukti func_080AAF3C di `code_809E804.cc`). migrate sudah revert
  otomatis; solusinya sisip manual pada batas `extern "C"` yang benar
  lalu `make compare`.
- **SKIP permanen — jangan diulang:** `data asing NB menempel ekor` (blok
  berakhir `.byte`/pool; ref_len > ukuran kode), `grup gabungan/tak-split`,
  `bukan fungsi terakhir` (modul tail-only: `hardware.s`,
  `code_actor_0809BFE8.s`, `code_linkonce.s`), `butuh tulis manual callee`
  (callee tak-MATCH & beda tanda tangan).
- **Modul split boleh pindah di TENGAH** (`game_state`, `code_809E804`,
  `code_entities*`, `code_0803EE94`); batasan “fungsi terakhir” hanya
  berlaku untuk modul tail-only legacy.
- **Mengulang judge setelah draf diedit padahal state `promoted`:**
  `fomt` tak mengantrekannya lagi. Reset `status`→`failed` +
  `judged_mtime`=0 di `decomp/state/modules/<stem>.json` DAN buang dulu
  blok promoted lamanya, kalau tidak `promote()` menambah blok kedua.
- Kunci MATCH yang sudah terbukti transfer antar-saudara: lihat bagian
  “Kalau DIFF” butir 6–8 (return-type epilog, argumen ke-2 untuk target
  call r2, padding struct).

## Batasan build

- Semua tool decomp di-vendor di `tools/` (lihat `tools/VENDORED.md`).
- `make compare` HIJAU di proot-distro juga (lihat INSTALL.md bagian
  proot): `agbcp` sudah ter-install via `tools/install_agbcp.sh` dan semua
  binary x86-64 di `tools/agbcc/bin/` dibungkus wrapper qemu
  (`<nama>.x86` + script). Jangan mem-passing `CC1`/`OLD_CC1` di command
  line make — itu menimpa override `OLD_CC1` untuk `src/m4a.o` dan bikin
  compare merah +24B.
- Jangan mengklaim build ROM berhasil tanpa menjalankan `make compare` dan
  melihat SHA1 cocok.

## Verifikasi sebelum selesai

- `python3 -m py_compile decomp/run.py` untuk perubahan skrip.
- `fomt status` untuk memastikan state konsisten.
- `fomt verify` untuk audit ulang semua fungsi promoted/matched dari nol
  (tidak mengubah state; exit 0 = semua masih MATCH).
- Jangan pernah bilang "selesai" tanpa output perintah yang mendukung.
- Tutup sesi decomp/migrasi dengan LAPORAN TOTAL ringkas (angka saja,
  tanpa rincian per fungsi). Format baku — `y` = yang dikerjakan sesi ini:
  ```text
  decomp total 2626 fungsi
  berhasil 904+4 (34.6%)
  failed 1722-4
  pending 0+0
  src 689+4
  ```
  Angka harus dari data segar sesi itu (baca ulang state + hitung marker
  `DECOMP-MATCHED` di `src/`), bukan dari ingatan atau output batch lama.
