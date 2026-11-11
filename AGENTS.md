# AGENTS.md

Harvest Moon: Friends of Mineral Town — decomp GBA. Berkas ini **hanya** aturan
invarian + peta rute; detail per topik ada di berkas rujukan, baca yang relevan.

## Peta baca (buka sesuai gejala)

| Situasi | Berkas |
|---|---|
| perintah `fomt`, `--loop`, letak state/draf/log, provenance draf | `docs/ops/COMMANDS.md` |
| tool bantu (engine, probe, width, audit, thunks) + flag | `docs/ops/TOOLS.md` |
| verifikasi, `make compare`, tutup sesi, format laporan | `docs/ops/VERIFIKASI.md` |
| judge DIFF / gagal kompilasi (pola codegen + pembukti) | `docs/decomp/POLA-DIFF.md` |
| migrate SKIP/GAGAL, signature, blok duplikat, drift | `docs/decomp/MIGRATE.md` |
| urutan kerja, jebakan proses, cap judge, parkir | `skills/gba-decomp/SKILL.md` |
| angka progres per sesi (arsip, jangan diedit) | `docs/SESI-<tanggal>.md` |
| build/instalasi toolchain, proot, qemu wrapper | `INSTALL.md` |

## R1. Satu perintah decomp

Pakai `fomt`; jangan `python3 decomp/run.py` langsung, jangan
`decomp/workflow.py` (legacy). Daftar perintah: `docs/ops/COMMANDS.md`.

## R2. Jangan menimpa hasil MATCH

`matched`/`promoted` tidak pernah diulang otomatis; jangan mengubah draf/berkas
promoted-nya tanpa alasan. Re-judge: `docs/decomp/MIGRATE.md` §6.

## R3. Autopush MATI (default); commit dikumpulkan per sesi

- Aktifkan sementara: `FOMT_AUTOPUSH=1` (`run.py:autopush` /
  `migrate.py:autopush_migrate`).
- Layak commit: draf MATCH, blok promoted, shard `decomp/state/modules/`,
  `src/` hasil migrasi, `decomp/engine/knowledge.json`. JANGAN `git add -A`,
  jangan commit `promoted/*.cc` milik batch lain.
- Tutup sesi: commit file milik pekerjaan + push.

## R4. Jangan force-push ke `main`

## R5. Multi-agent: `--agent <nama>` unik per sesi

Jangan pakai nama sama di dua sesi bersamaan (klaim per-batch; TTL di
`docs/ops/COMMANDS.md`).

## R6. Pesan commit menyatakan pekerjaan aktual

Judul menyebut fungsi/perkara yang dikerjakan; badan menjelaskan **KENAPA**
begitu (jalur otomatis MERAH karena apa, pola manual yang dipakai, bukti HIJAU
apa). Dilarang: pesan generik, klaim tanpa bukti (tulis `compare hijau` hanya
bila `make compare` HIJAU sesi itu), menyebut file/fungsi yang tidak disentuh.
Stage hanya file milik pekerjaan ini (`git status`/`git diff --cached`).

## R7. Hemat token di SEMUA perintah berisik

Output >20 baris atau >30 detik (`fomt`, `verify`, `--loop`, `make`,
`make compare`, `git log`, `grep -r`) WAJIB ke `/tmp/<nama>.log` (bukan repo);
chat hanya exit code + ringkasan (`grep -c`, baris ERROR/DIFF, `tail -5`).
Jangan menempel log penuh. Gabungkan perintah independen dalam satu panggilan,
jangan `cat` ulang file yang sudah tampil, dan edit draf + judge dalam SATU
command (syarat mtime resanitize). Format laporan: `docs/ops/VERIFIKASI.md`.

## R8. Temuan baru masuk dokumen yang sudah ada

Pola codegen → `POLA-DIFF.md` (bernomor + fungsi pembukti); jebakan gate →
`MIGRATE.md`; perilaku CLI/state/tool → `docs/ops/` + pointer singkat di
`skills/gba-decomp/`; angka progres → `docs/SESI-<tanggal>.md`.

Dokumen hidup (`AGENTS.md`, `POLA-DIFF.md`, `MIGRATE.md`, `docs/ops/*`,
`SKILL.md`, `PANDUAN.md`, `INSTALL.md`) tidak boleh memuat angka MATCH/path
yang cepat basi — tulis perintah pengambilnya. Perubahan perilaku tool = update
dokumen + skill di commit yang SAMA. Klaim usang dianggap bug dokumentasi
(`tools/scripts/check_docs.py` memeriksa batas ukuran + rujukan patah).
**Jangan menambah narasi baru ke AGENTS.md**: kalau satu bagian membengkak,
pindahkan detailnya ke berkas di peta rute.

## Alur per fungsi

`scan` -> `draft` (m2c) -> `judge` (agbcc `-O2`, byte-identik) -> `promote` ->
`autopush`. State: `decomp/state/modules/<stem>.json`; draf
`decomp/drafts/<nama>.c`; log judge `decomp/logs/judge_<nama>/<agent>/`.

## Kalau DIFF (triage cepat)

Detail + pembukti di `POLA-DIFF.md`; empat tersering:

1. `request for member 'unk*'` — argumen masih `void *`; tulis struct dari
   operand asm (`ldrb`=u8, `ldrh`=u16, `ldr`=s32/ptr), cast virtual-call.
2. `[regalloc @r pop {r1} | pop {r0}]` — ref `pop {r1}; bx r1` ⇒ fungsi
   **mengembalikan** `s32` (bukan wall).
3. `_call_via_r1` vs `r2` — ada argumen ke-2 yang dibuang m2c; teruskan.
4. `M2C_ERROR` — tulis ulang dari asm.

Berhenti: cap 5 judge per fungsi → parkir + regen draf murni m2c, catat di log
sesi, pindah fungsi. Jangan ulangi fungsi tanpa perubahan draf; catatan per
fungsi masuk `note` state shard.

## Migrasi ke `src/` — ringkas

Gerbang lengkap di `MIGRATE.md`:

- Tanda tangan extern blok wajib sama string dengan `src/<stem>.cc` (`s32`→`i32`
  auto; `u32` vs `s32` tidak).
- Hanya fungsi MATCH boleh masuk `src/` (TU `.cc` = C++: `i32`, `new`, tanpa
  keyword C++).
- SKIP permanen jangan diulang: `data asing ... ekor`, grup gabungan/tak-split,
  `bukan fungsi terakhir` (tail-only: `hardware.s`, `code_actor_0809BFE8.s`,
  `code_linkonce.s`), `butuh tulis manual callee`. Modul split (`game_state`,
  `code_809E804`, `code_entities*`, `code_0803EE94`) boleh pindah di tengah.
- `promote()` tidak menimpa blok lama: hapus blok + baris `DECOMP-MATCHED`
  dulu, baru judge ulang (`MIGRATE.md` §17).
- MATCH yang hanya promote (blocked penerus) bukan migrasi — DELTA 0.

## Batasan build

Tool di-vendor di `tools/` (`tools/VENDORED.md`); `make compare` HIJAU juga di
proot-distro (`INSTALL.md`). Jangan passing `CC1`/`OLD_CC1` di command line make
— menimpa override `OLD_CC1` untuk `src/m4a.o`, compare merah +24B.

## Verifikasi

`py_compile` untuk skrip, `make compare` HIJAU untuk perubahan build,
`audit_consistency.py` untuk state; `fomt verify` **hanya bila diminta**.
Urutan + format laporan: `docs/ops/VERIFIKASI.md`.

## Skill agent

Skill `gba-decomp` ada di repo (`skills/gba-decomp/`), sumber kebenaran untuk
agent — jangan menyalinnya ke direktori global. Loader hanya memindai
`.agents/skills/` + `.claude/skills/`, jadi `.agents/skills/gba-decomp` adalah
symlink ke `../../skills/gba-decomp` yang ikut di-track (negasi `.gitignore`).
