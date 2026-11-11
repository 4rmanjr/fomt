# Verifikasi & tutup sesi

Aturan invarian: [`AGENTS.md`](../../AGENTS.md). Perintah: [`COMMANDS.md`](./COMMANDS.md).
Tool: [`TOOLS.md`](./TOOLS.md).

## Kapan apa dijalankan

| perubahan | bukti minimal |
|---|---|
| skrip Python | `python3 -m py_compile <skrip>` |
| edit src manual / `migrate.py` | `make compare` HIJAU (`fomt.gba: OK`) |
| judge, regen draf, parkir draf | tidak mengubah tree build → **tidak** perlu compare |
| tutup sesi | `make compare` + `python3 tools/scripts/audit_consistency.py` |
| `fomt verify` | **hanya bila user meminta** |

`fomt verify` mengaudit ulang semua fungsi promoted/matched dari nol tanpa
mengubah state (exit 0 = semua masih MATCH). Mahal (~7 mnt) — jangan dijalankan
rutin di akhir sesi. Bila diminta, pakai `--module <stem>` atau `--since` dulu,
dan baca baris per fungsi (`func_X: MATCH () | gagal 0`) — exit code modul
gagal bila ADA fungsi lain di modul itu yang gagal.

`audit_consistency.py` (read-only) adalah pengganti rutin: exit 1 = ada masalah
struktural (blok duplikat/kurung rusak/state yatim/status basi/`i32`/drift/
symlink). Pelengkap khusus status basi: `python3 decomp/audit_sync.py`.

## Jangan klaim tanpa output

- Jangan pernah bilang "selesai" tanpa output perintah yang mendukung.
- `make compare` HIJAU = sha1 cocok dengan `fomt.sha1`; jangan klaim build ROM
  berhasil tanpa itu.
- MATCH yang dijawab SKIP migrator bukan migrasi: `sudah ada di src/`,
  `data asing ... ekor`, `bukan fungsi terakhir`, grup gabungan → kontribusi
  DELTA = 0. Sebut "promoted, bukan migrasi".
- Jangan menyebut angka dari ingatan/log lama; ambil segar dari `fomt status`
  dan hitungan marker `DECOMP-MATCHED` di `src/`.

## Tutup sesi

1. `make compare` HIJAU.
2. `python3 tools/scripts/audit_consistency.py` → masalah struktural 0.
3. Tulis log sesi **baru** `docs/SESI-<tanggal>.md` (arsip bertanggal: jangan
   mengedit angka sesi lama). Isi: gejala, akar masalah, perbaikan, bukti
   (output tool), sisa/next.
4. Commit hanya file milik pekerjaan (lihat AGENTS.md R3) dan push.
5. Laporan total ringkas ke chat (angka saja, `y` = dikerjakan sesi ini):

```text
decomp total <T> fungsi
berhasil <B>+<y> (<persen>%)
failed <F>-<y>
pending <P>+0
src <S>+<y>
```

Angka `B/F/P/S` harus dari data segar sesi itu (state + marker `src/`), bukan
dari ingatan atau output batch lama.

## Hemat token (dipakai di semua perintah)

Perintah apa pun dengan output >20 baris atau durasi >30 detik diarahkan ke
`/tmp/<nama>.log` (bukan ke repo), dan chat hanya menerima exit code +
ringkasan (`grep -c`, baris ERROR/DIFF/FAIL via `grep ... | head -20`, `tail -5`).
Log penuh tidak pernah ditempel ke chat; sebut path `/tmp/*.log` bila perlu.
Ukur biaya dalam byte (`wc -c`): biaya dominan biasanya akumulasi riwayat
percakapan, bukan output perintah — karena itu sesi pendek + log lebih murah.
