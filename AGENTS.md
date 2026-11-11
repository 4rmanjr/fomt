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
     (pola redirect ini hanya berlaku **bila** verify diminta — lihat
     aturan: verify tidak dijalankan rutin)
   - `make compare > /tmp/build.log 2>&1; echo "exit:$?";
     grep -iE "error|fail|diff" /tmp/build.log | head -20; tail -5 /tmp/build.log`
   Bila verify **diminta**, pakai inkremental: `fomt verify --since HEAD~5`
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
     compare`; `fomt verify` **tidak** dijalankan rutin — hanya bila
     user memintanya (aturan di bagian verifikasi).
   - `make compare` hanya setelah perubahan build (src/asm/lds via
     migrate atau edit manual src): judge MATCH / regen / parkir draf
     tak mengubah tree build → tak perlu compare. migrate.py sudah
     compare otomatis 2x (baseline + target).
   - Sesi pendek: maks 3 migrasi lalu TUTUP dengan log sesi + commit +
     push. Sesi panjang menumpuk konteks kumulatif (penyebab #1 token
     boros — output turn lama dibayar ulang tiap turn).

8. **Pelajaran/pola baru WAJIB dicatat di dokumentasi yang sudah ada**,
   bukan dibiarkan di chat atau log sesi:
   - pola codegen / diff m2c→agbcc → `docs/decomp/POLA-DIFF.md`
     (bagian bernomor + fungsi pembukti);
   - jebakan gate migrate, SKIP, signature, drift →
     `docs/decomp/MIGRATE.md`;
   - perilaku CLI/state/tool baru → bagian operasional di AGENTS.md ini,
     plus pointer singkat di `skills/gba-decomp/` (jangan duplikat isi
     dokumen pola);
   - angka progres/sesi → `docs/SESI-<tanggal>.md` (arsip bertanggal:
     jangan diedit angkanya, cukup tulis log baru).
   Dokumen hidup (`AGENTS.md`, `POLA-DIFF.md`, `MIGRATE.md`, `SKILL.md`,
   `PANDUAN.md`, `INSTALL.md`) tidak boleh memuat angka MATCH/path
   hardcode yang cepat basi — tulis perintah pengambilnya. Kalau perilaku
   tool/CLI/state berubah, perbarui dokumen + skill di commit yang SAMA;
   klaim usang (perintah yang sudah diganti, path lama, angka lama)
   dianggap bug dokumentasi.

## Skill & panduan agent

Skill `gba-decomp` ada **di dalam repo**: `skills/gba-decomp/` (`SKILL.md`,
`PANDUAN.md`, `references/`, `templates/`, `scripts/`). Itu sumber
kebenaran untuk agent; jangan menyimpan salinan di direktori global
(`~/.claude`, dst).

Loader skill (Freebuff/Codebuff/Claude Code) **hanya** memindai
`.agents/skills/` dan `.claude/skills/` — `skills/` di root tidak
ditemukan otomatis. Karena itu `.agents/skills/gba-decomp` adalah symlink
ke `../../skills/gba-decomp` yang **ikut di-track** (lihat negasi di
`.gitignore`): clone baru tetap menemukan skill tanpa menduplikasi isi.
Jangan menggantinya dengan salinan file; jangan pula menganggap `skills/`
root terbaca tanpa symlink itu.

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
fomt verify               # audit ulang promoted/matched — HANYA bila diminta
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

- State: `decomp/state/modules/<stem>.json` (shard per modul) +
  `decomp/state/index.json` (peta nama→modul); ditulis atomik di bawah
  `flock`. File lama `decomp/state/progress.json` sudah dipecah otomatis
  (tersisa sebagai `.bak`), jangan dipakai lagi.
- Draf: `decomp/drafts/<nama>.c`.
- Provenance draf: state menyimpan `draft_src` (`m2c`/`manual`) + `m2c_hash`.
  `resanitize_stale` hanya menimpa draf yang isinya masih keluaran tool (hash
  cocok, atau penanda `typedef struct GenObj` untuk entri lama); draf manual
  dikunci `draft_src=manual` dan tidak pernah diregenerasi. Jangan andalkan
  mtime: setelah judge, `judged_mtime` = mtime draf itu sendiri.
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

Ringkas 4 yang paling sering (detail + pembukti: `docs/decomp/POLA-DIFF.md`):

1. **`request for member 'unk*' ...`** — argumen masih `void *`. Tulis
   struct dari operand asm (`ldrb`=u8, `ldrh`=u16, `ldr`=s32/ptr) dan
   cast virtual-call eksplisit.
2. **`[regalloc @r pop {r1} | pop {r0}]`** — ref berakhir
   `pop {r1}; bx r1` ⇒ fungsi **mengembalikan** `s32`, bukan `void`
   (`s32 f(){ return g(); }`). Bukan wall.
3. **`byte +0x8: 0x1 vs ref 0x2`, `_call_via_r1` vs `_call_via_r2`** —
   fungsi punya **argumen ke-2** yang m2c buang; tambahkan + teruskan
   (`fn(t, arg1)`), zero-codegen.
4. **`M2C_ERROR`** — m2c gagal total, tulis ulang fungsi dari asm.

> **ATURAN ANTI-MENUMPUK:** pola/temuan BARU **JANGAN** ditulis di
> AGENTS.md. Tulis ke `docs/decomp/POLA-DIFF.md` (pola codegen) atau
> `docs/decomp/MIGRATE.md` (jebakan migrate). AGENTS.md hanya aturan
> operasional + pointer.

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

## Migrasi ke src (`migrate.py`) — ringkas

Detail lengkap + tabel SKIP permanen: `docs/decomp/MIGRATE.md`. Minimum:

- **Tanda tangan extern di blok wajib sama dengan `src/<stem>.cc`**
  (guard membandingkan string; `s32`→`i32` auto, `u32` vs `s32` tidak).
  Samakan ke src, lewatkan nilai balik call lewat satu variabel
  sekali-pakai (r0 sudah berisi).
- **`fomt --migratable` bisa “MATCH” fungsi yang SUDAH ada di src**
  (state basi) dan menambah blok DUPLIKAT di `decomp/promoted/`. Cek
  `git diff decomp/promoted/` sesudah batch, revert, dan jangan hitung
  sebagai migrasi (`migrate.py` → `sudah ada di src/...`).
- **`[GAGAL] ... syntax error before 0x...`** = titik sisip jatuh di
  dalam blok `extern "C" {`; sisip manual di batas blok lalu compare.
- **SKIP permanen jangan diulang:** `data asing ... ekor`, grup
  gabungan/tak-split, `bukan fungsi terakhir` (modul tail-only:
  `hardware.s`/`code_actor_0809BFE8.s`/`code_linkonce.s`), `butuh tulis
  manual callee`. Modul split (`game_state`, `code_809E804`,
  `code_entities*`, `code_0803EE94`) boleh pindah di tengah.
- **Re-judge draf yang state-nya `promoted`:** buang blok promoted lama,
  lalu `status`→`failed` + `judged_mtime`=0 di state shard.

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
- `python3 tools/scripts/audit_consistency.py` untuk audit cepat read-only
  state ↔ promoted ↔ src (blok duplikat, state yatim, status basi, status
  di luar enum, `i32`, drift promoted vs draf, symlink skill). `--json`
  untuk agent, `--strict` bila dipakai sebagai gate.
- Tool diagnosa read-only lain: `tools/scripts/migrate_audit.py`
  (klasifikasi semua blok promoted: bisa migrasi vs alasan SKIP; `--json`),
  `tools/scripts/tail_chain.py --module <stem>.s` (urutan ekor + NEXT/blocker),
  `tools/scripts/diff_mismatch.py <func>` (hitung mismatch `diff.py`;
  target branch dinormalkan, `--json`/`--strict`, `--diff-json` untuk
  output yang sudah ada),
  `tools/scripts/width_mismatch.py` (lebar akses asm `ldrb/strb/ldrh/strh/ldr/str`
  vs tipe field draf per offset; default hanya |len-ref| <= 4, `--func`/`--module`/
  `--json`; offset dihitung per angka jadi wajib dikonfirmasi ke register argumen),
  `decomp/migrate.py ... --explain` (beda signature blok vs `src/`, tanpa
  menulis apa pun).
- `fomt status` untuk memastikan state konsisten.
- `fomt verify` HANYA bila diminta user — jangan dijalankan rutin di akhir
  sesi (mahal, ~7 mnt). Penggantinya untuk tutup sesi: `make compare`
  (HIJAU) + `python3 tools/scripts/audit_consistency.py`.
- `fomt verify` manual (bila diminta) mengaudit ulang semua fungsi
  promoted/matched dari nol (tanpa ubah state; exit 0 = semua masih MATCH).
- Jangan pernah bilang "selesai" tanpa output perintah yang mendukung.
- Tutup sesi decomp/migrasi dengan LAPORAN TOTAL ringkas (angka saja,
  tanpa rincian per fungsi). Format baku — `y` = yang dikerjakan sesi ini:
  ```text
  decomp total <T> fungsi
  berhasil <B>+<y> (<persen>%)
  failed <F>-<y>
  pending <P>+0
  src <S>+<y>
  ```
  Angka harus dari data segar sesi itu (baca ulang state + hitung marker
  `DECOMP-MATCHED` di `src/`), bukan dari ingatan atau output batch lama.
