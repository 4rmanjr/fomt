# AGENTS.md

Panduan untuk agent AI yang bekerja di repo ini (Harvest Moon: Friends of
Mineral Town, decomp GBA).

## Aturan penting

1. **Decomp satu perintah.** Pakai `fomt`, jangan `python3 decomp/run.py`
   langsung dan jangan pakai `decomp/workflow.py` (legacy).
2. **Jangan menimpa hasil MATCH.** `matched`/`promoted` tidak pernah diulang
   otomatis; jangan mengubah draf/berkas promoted-nya tanpa alasan.
3. **Autopush sudah otomatis.** Setiap fungsi MATCH langsung di-commit dan
   di-push oleh `run.py` (`decomp/run.py:autopush`). Tidak perlu commit/push
   manual setelah decomp; jangan lakukan `git add -A` sembarangan untuk hal
   lain.
   - Hanya jalan bila ada perubahan dan hanya setelah MATCH (batch DIFF semua
     tidak di-push).
   - Matikan sementara dengan `FOMT_AUTOPUSH=0`.
   - Kalau push gagal (offline), commit tetap lokal dan run lanjut; push
     manual nanti.
4. **Jangan force-push** ke `main`.
5. **Multi-agent:** pakai `--agent <nama>` yang unik per sesi. Jangan pakai
   nama sama di dua sesi yang jalan bersamaan.

## Perintah

```bash
fomt                      # 20 fungsi berikutnya
fomt 10                   # 10 fungsi berikutnya
fomt 5 sram_proxy_1.s     # 5 fungsi dari modul itu
fomt status               # progres saja (total/berhasil/sisa)
fomt verify               # audit ulang semua promoted/matched (tanpa ubah state)
fomt 10 --agent opencode  # identitas agent untuk klaim
```

Statistik (`total`, `berhasil`, `sisa`, sebaran status, `batch M/D`) dicetak
setiap fungsi selesai dan di akhir run.

## Alur per fungsi

`scan` -> `draft` (m2c) -> `judge` (agbcc `-O2`, byte-identik vs asm) ->
`promote` (ke `decomp/promoted/<modul>.cc`) -> `autopush`.

- State: `decomp/state/progress.json` (ditulis atomik di bawah `flock`).
- Draf: `decomp/drafts/<nama>.c`.
- Log judge: `decomp/logs/judge_<nama>/<agent>/`.
- Klaim basi diambil alih setelah `FOMT_CLAIM_TTL` detik (default 1800).
  `FOMT_CLAIM_TTL=0` hanya bila tidak ada agent lain yang jalan.

## Batasan build

- Semua tool decomp di-vendor di `tools/` (lihat `tools/VENDORED.md`).
- `make compare` belum bisa penuh: `agbcp` (C++) belum ada, `baserom.gba`
  tidak disertakan (copyright), dan binutils beberapa masih dari sistem.
- Jangan mengklaim build ROM berhasil tanpa menjalankan `make compare` dan
  melihat SHA1 cocok.

## Verifikasi sebelum selesai

- `python3 -m py_compile decomp/run.py` untuk perubahan skrip.
- `fomt status` untuk memastikan state konsisten.
- `fomt verify` untuk audit ulang semua fungsi promoted/matched dari nol
  (tidak mengubah state; exit 0 = semua masih MATCH).
- Jangan pernah bilang "selesai" tanpa output perintah yang mendukung.
