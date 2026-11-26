# Verifikasi & tutup sesi

Aturan invarian: [`AGENTS.md`](../../AGENTS.md). Perintah: [`COMMANDS.md`](./COMMANDS.md).
Tool: [`TOOLS.md`](./TOOLS.md).

## Kapan apa dijalankan

| perubahan | bukti minimal |
|---|---|
| skrip Python | `python3 -m py_compile <skrip>` + `make test-tools` |
| aset source (`assets/gfx/**`, `assets/manifest.json`) | `python3 tools/assets/asset_manifest.py --check` + `python3 tools/assets/asset_verify.py` (sha256 encoder == slice ROM; evidence palet harus cocok dengan tapak salinan: tujuan tetap vs basis + slot) |
| encoder stream `0x70` | `python3 tools/assets/lz70.py probe` — exit 1 berarti ada stream P0 (`000`) yang belum byte-identik dan **harus** tetap `opaque`; status per format (termasuk atom0/lzss2) diperiksa `stream_audit.py --check` |
| `assets/0x70/reencode_manifest.json` / `ASET-0X70-REENCODE.md` | otomatis oleh `check_docs.py`: laporan dibandingkan dengan `stream_audit.build()` dari slice ROM + bin (blob utuh dan bank tertanam), jadi hash stream yang basi = masalah |
| edit src manual / `migrate.py` | `make compare` HIJAU (`fomt.gba: OK`) |
| judge, regen draf, parkir draf | tidak mengubah tree build → **tidak** perlu compare |
| MATCH/migrasi yang mengubah ujung rantai (fungsi di ujung berkas asm pindah atau promosi ekor baru) | `python3 tools/scripts/ekor_snapshot.py` lalu `check_docs.py` (basi = masalah, exit 1) |
| tutup sesi | `make compare` + `python3 tools/scripts/audit_consistency.py` + `check_docs.py` (+ regenerasi `ekor_snapshot.py` bila ujung rantai berubah) |
| `fomt verify` | **hanya bila user meminta** |

`fomt verify` mengaudit ulang semua fungsi promoted/matched dari nol tanpa
mengubah state (exit 0 = semua masih MATCH). Blok yang dibaca dari `src/`
(fungsi sudah dimigrasi) dinormalkan dulu ke bentuk C: typedef per-fungsi yang
di-hoist `migrate.py` disertakan kembali, `i32` dipetakan ke `s32`, dan
pembungkus `extern "C" { ... }` dilepas — byte hasil judge tidak berubah,
hanya agar harness agbcc bisa mengompilasi potongan blok itu. Mahal (~7 mnt) —
jangan dijalankan rutin di akhir sesi. Bila diminta, pakai `--module <stem>` atau `--since` dulu,
dan baca baris per fungsi (`func_X: MATCH () | gagal 0`) — exit code modul
gagal bila ADA fungsi lain di modul itu yang gagal.

`audit_consistency.py` (read-only) adalah pengganti rutin: exit 1 = ada masalah
struktural (blok duplikat/kurung rusak/state yatim/status basi/`i32`/drift/
symlink). Pelengkap khusus status basi: `python3 decomp/audit_sync.py`.

## Regresi `tools/tests`

Semua test di `tools/tests/` (termasuk `test_raw_assets.py`, yang mengunci
kelas/lebar blob mentah) dijalankan satu perintah:

```sh
make test-tools
```

Isinya `python3 -m unittest discover -s tools/tests -p 'test_*.py'`; tidak
menjalankan build dan tidak menulis ROM. Beberapa test membaca berkas repo
(`baserom.gba`, `assets/raw/manifest.json`), jadi jalankan dari root repo.
Exit 0 = semua lulus; exit 1 = ada yang gagal (`FAILED (failures=…)` /
`errors=…`). Karena outputnya >20 baris, arahkan ke `/tmp/test-tools.log` bila
ingin hemat konteks lalu baca `tail -5` (R7); durasinya sekitar satu menit.

## Jangan klaim tanpa output

- Jangan pernah bilang "selesai" tanpa output perintah yang mendukung.
- `make compare` HIJAU = sha1 cocok dengan `fomt.sha1`; jangan klaim build ROM
  berhasil tanpa itu.
- MATCH yang dijawab SKIP migrator bukan migrasi: `sudah ada di src/`,
  `data asing ... ekor` yang tak-diselamatkan, `bukan fungsi terakhir`, grup
  gabungan → kontribusi DELTA = 0. Sebut "promoted, bukan migrasi". Ekor
  `.byte` yang disalin verbatim (modul tail-only) atau dibawa data-chunk tetap
  `pindah: 1` — jangan dihitung nol.
- Jangan menyebut angka dari ingatan/log lama; ambil segar dari `fomt status`
  dan hitungan marker `DECOMP-MATCHED` di `src/`.

## Tutup sesi

1. `make compare` HIJAU.
2. `python3 tools/scripts/audit_consistency.py` → masalah struktural 0.
2b. `python3 tools/scripts/check_docs.py` → masalah dokumen 0 (termasuk gate
   backlog ekor: `EKOR-BACKLOG.md` basi = masalah, dan gate PNG
   `assets/0x70/png/` terhadap `png_sha256` manifestnya — baik PNG stream
   (`extract_assets`) maupun PNG bank tertanam (`embedded_streams`); render
   ulang hanya dijalankan bila sidik jari input beda dari render terakhir yang
   lolos, jadi PNG rusak tetap tertangkap tanpa perintah manual dan tanpa
   biaya render tiap sesi). Gate yang sama juga membandingkan
   `assets/0x70/reencode_manifest.json` + `docs/decomp/ASET-0X70-REENCODE.md`
   dengan `stream_audit.build()` (hash compressed/decoded semua stream yang
   sudah diekstrak — blob utuh + bank tertanam — dan status `opaque`), jadi
   laporan hash tidak bisa basi tanpa terdeteksi. Gate yang sama juga
   memeriksa klaim status aset di dokumen hidup: simbol yang sudah
   `rom-exact` tidak boleh disebut masih `.incbin "baserom.gba"` atau masih
   diparkir (bentuk penyangkalan seperti "tidak lagi parkir" tetap lolos),
   jadi kalimat basi setelah migrasi menggagalkan tutup sesi.
3. `python3 tools/scripts/ekor_snapshot.py` → tulis ulang
   `docs/decomp/EKOR-BACKLOG.md` **bila sesi ini mengubah ujung rantai**: fungsi
   terakhir sebuah modul tail-only pindah/promosi, ekor dipromosikan jadi fungsi,
   atau daftar blocker berubah. Gerbangnya sudah otomatis di
   `check_docs.py` (langkah 2b): dokumen yang tidak sama dengan hasil generate
   dihitung sebagai masalah, jadi lupa meregenerasi menggagalkan tutup sesi
   alih-alih menyisakan backlog basi; `ekor_snapshot.py --check` tetap ada
   sebagai gerbang cepat satu perintah. Baris `Snapshot **tanggal**` tidak ikut
   dibandingkan dan tanggalnya diturunkan dari mtime input, jadi dokumen tidak
   dianggap basi hanya karena pergantian hari.
4. Tulis log sesi **baru** `docs/SESI-<tanggal>.md` (arsip bertanggal: jangan
   mengedit angka sesi lama). Isi: gejala, akar masalah, perbaikan, bukti
   (output tool), sisa/next.
5. Commit hanya file milik pekerjaan (lihat AGENTS.md R3) dan push.
6. Laporan total ringkas ke chat (angka saja, `y` = dikerjakan sesi ini):

```text
decomp total <T> fungsi
berhasil <B>+<y> (<persen>%)
failed <F>-<y>
pending <P>+0
src <S>+<y>
```

Angka `B/F/P/S` harus dari data segar sesi itu (state + marker `src/`), bukan
dari ingatan atau output batch lama. `B` boleh memuat promote-only, tetapi
`S` hanya yang bermarker `DECOMP-MATCHED` di `src/`; selisih `B - S` adalah
promote-only dan tidak boleh dilaporkan sebagai kemajuan ROM.

## Guard dokumen (pre-commit)

`tools/hooks/pre-commit` menjalankan `tools/scripts/check_docs.py` bila ada
`.md` yang di-stage; commit ditolak kalau AGENTS.md melebihi batas baris,
`AGENTS.md rule N` menunjuk aturan yang tidak ada, rujukan `.md` patah,
dokumen hidup mematok angka progres, atau dokumen mengklaim sebuah normalisasi
engine **belum** ada padahal `decomp_engine.NORMALIZATIONS` sudah
menanganinya (tabel itu ikut diverifikasi terhadap `norm()` sungguhan, jadi
engine yang berubah tanpa update tabel juga gagal di sini). Hook ini ter-track, tapi `core.hooksPath`
konfigurasi lokal — pasang sekali per clone:

```bash
git config core.hooksPath tools/hooks
```

`git commit --no-verify` tetap mungkin (untuk kasus yang memang disengaja),
tapi jangan dipakai untuk melewati batas ukuran — pindahkan detailnya ke
`docs/ops/` sesuai R8.

## Hemat token (dipakai di semua perintah)

Perintah apa pun dengan output >20 baris atau durasi >30 detik diarahkan ke
`/tmp/<nama>.log` (bukan ke repo), dan chat hanya menerima exit code +
ringkasan (`grep -c`, baris ERROR/DIFF/FAIL via `grep ... | head -20`, `tail -5`).
Log penuh tidak pernah ditempel ke chat; sebut path `/tmp/*.log` bila perlu.
Ukur biaya dalam byte (`wc -c`): biaya dominan biasanya akumulasi riwayat
percakapan, bukan output perintah — karena itu sesi pendek + log lebih murah.
