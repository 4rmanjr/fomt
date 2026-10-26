---
name: fomt-decomp
description: Decompile Harvest Moon FoMT GBA assembly (asm/*.s) to readable C, one batch at a time. Use when the user says "decomp", "lanjut decomp", "decompile fomt", or wants asm functions converted to C with byte-identical verification.
---

# FoMT Decompile

Satu perintah, idempoten, tanpa ROM. Kerja di `/home/armanjr/gitproject/fomt`.

## Perintah

```bash
fomt            # kerjakan 20 fungsi berikutnya (default)
fomt 10         # kerjakan 10 fungsi berikutnya
fomt 5 sram_proxy_2.s   # 5 fungsi dari modul itu
fomt status     # lihat progres saja
fomt 10 --agent opencode   # multi-agent: pakai identitas agent ini
fomt --loop     # ulangi batch sampai antrean habis (foreground, Ctrl-C berhenti)
fomt --loop 10 --wait 2    # batch 10 per putaran, jeda 2 detik antar batch
```

Butuh jalan panjang yang berkesinambungan (mis. puluhan batch tanpa
mengetik ulang)? Pakai `--loop`: batch diulang sampai pending/drafted habis.
Tetap foreground — tiap fungsi dan ringkasan `batch#N` dicetak langsung,
tidak jalan di background. Berhenti dengan Ctrl-C, `--until HH:MM`, atau
saat antrean kosong. `failed` yang drafnya tidak diubah tidak ikut antre lagi
(hanya draf yang diperbaiki manual yang di-judge ulang); `--retry` memaksa
semua failed diulang — gabungkan dengan `--loop` hanya bersama filter modul.

Jangan pakai `python3 decomp/run.py` langsung — selalu lewat `fomt`.
Jangan pakai perintah lama (`workflow.py scan/draft/judge/promote`) — sudah diganti `run.py`.

## Multi-agent (dua agent sekaligus)

Aman dijalankan bersamaan, mis. OpenCode dan VSCode di repo yang sama:

```bash
fomt 20 --agent opencode    # terminal A
fomt 20 --agent vscode      # terminal B (atau $FOMT_AGENT / $DECOMP_AGENT_NAME)
```

Tiap fungsi **diklam** dulu di `decomp/state/progress.json` (`claimed_by`,
`claimed_at`), jadi tidak ada fungsi yang digarap dua kali. State ditulis di
bawah `flock` (`decomp/state/progress.lock`); kerja m2c/agbcc di luar lock.
Log judge dipisah per agent: `decomp/logs/judge_<nama>/<agent>/`.
Klaim yang tertinggal (proses mati) diambil alih setelah `FOMT_CLAIM_TTL`
detik (default 1800). Ctrl-C melepas klaim fungsi yang sedang dikerjakan.

## Yang terjadi

Per fungsi: draft (m2c) → judge (agbcc `-O2`, byte-identik vs asm via
`match_arm`) → promote ke `decomp/promoted/<modul>.cc` untuk cek manusia.
Draf m2c disimpan ke `decomp/drafts/<nama>.c` sebelum di-judge.
Ctrl-C kapan saja; jalankan lagi perintah yang sama untuk lanjut.
Hasil `matched`/`promoted` tidak pernah ditimpa.

## Kalau DIFF

Buka `decomp/drafts/<nama>.c` + `decomp/logs/judge_<nama>/<agent>/`, perbaiki C-nya
sampai byte-identik, jalankan `fomt` lagi — fungsi itu otomatis di-judge ulang.
Fungsi yang baca `gUnk_*`/panggil modul lain biasanya butuh perbaikan manual.
`code_lib_syscall.s` (svc), `code_iwram.s`, `vtables.s`, `.incbin` = lewati.

## Pindah ke src (manual, jarang)

Hanya untuk fungsi `promoted`: salin C dari `decomp/promoted/` ke `src/`,
hapus blok asm terkait, lalu `make compare` (butuh `baserom.gba` + agbcc di `tools/`).
