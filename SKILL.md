---
name: fomt-decomp
description: Decompile Harvest Moon FoMT GBA assembly (asm/*.s) to readable C, one batch at a time. Use when the user says "decomp", "lanjut decomp", "decompile fomt", or wants asm functions converted to C with byte-identical verification.
---

# FoMT Decompile

Satu perintah, idempoten, tanpa ROM. Jalankan dari root repo ini (yang
memuat `AGENTS.md`). Sumber kebenaran: `AGENTS.md` (aturan operasional),
`docs/decomp/POLA-DIFF.md` (pola codegen), `docs/decomp/MIGRATE.md`
(gerbang migrate), dan `skills/gba-decomp/` (skill workflow lengkap).

## Perintah

```bash
fomt                      # kerjakan 20 fungsi berikutnya (default)
fomt 10                   # kerjakan 10 fungsi berikutnya
fomt 5 sram_proxy_2.s     # 5 fungsi dari modul itu
fomt --migratable         # hanya fungsi yang bisa dipindah ke src/
fomt status               # progres saja (baca-saja)
fomt 10 --agent opencode  # multi-agent: identitas agent ini
fomt --loop               # ulangi batch sampai antrean habis (foreground)
fomt --loop 10 --wait 2   # batch 10 per putaran, jeda 2 detik
fomt --help               # usage saja, tanpa menjalankan batch
```

Butuh jalan panjang yang berkesinambungan (mis. puluhan batch tanpa
mengetik ulang)? Pakai `--loop`: batch diulang sampai pending/drafted habis.
Tetap foreground — tiap fungsi dan ringkasan `batch#N` dicetak langsung,
tidak jalan di background. Berhenti dengan Ctrl-C, `--until HH:MM`, atau
saat antrean kosong. `failed` yang drafnya tidak diubah tidak ikut antre lagi
(hanya draf yang diperbaiki manual yang di-judge ulang); `--retry` memaksa
semua failed diulang — gabungkan dengan `--loop` hanya bersama filter modul.

Jangan pakai `python3 decomp/run.py` langsung — selalu lewat `fomt`
(di lingkungan tanpa wrapper: `FOMT_AGENT=<nama> python3 decomp/run.py`).
Jangan pakai perintah lama (`workflow.py scan/draft/judge/promote`) — sudah
diganti `run.py`.

## Perintah agen (`/decomp`, `/decomp n`)

Custom command OpenCode (lihat `~/.config/opencode/command/decomp.md`,
di luar repo agar repo tetap bersih) — pintasan bahasa alami:

- `/decomp` → "decomp sampai migrasi, edit manual diizinkan, dilarang
  halusinasi, minimal 1 target migrasi ke src"
- `/decomp n` → sama, dengan target minimal `n` migrasi
  (mis. `/decomp 3` = minimal 3 migrasi)

Setiap agen AI yang membaca repo ini WAJIB mengenali pola ini: jika user
mengetik `decomp` (atau `decomp n`), kerjakan alur penuh decomp → judge →
promote → migrate ke `src/` dengan target minimal tersebut, patuh
AGENTS.md butir 6 (pesan commit terkait aktual) + tutup dengan LAPORAN
TOTAL format baku. Tanpa argumen = target 1.

## Multi-agent (dua agent sekaligus)

Aman dijalankan bersamaan, mis. OpenCode dan VSCode di repo yang sama:

```bash
fomt 20 --agent opencode    # terminal A
fomt 20 --agent vscode      # terminal B (atau $FOMT_AGENT / $DECOMP_AGENT_NAME)
```

Tiap fungsi **diklam** dulu di shard `decomp/state/modules/<stem>.json`
(`claimed_by`, `claimed_at`), jadi tidak ada fungsi yang digarap dua kali.
State ditulis di bawah `flock` (`decomp/state/progress.lock`);
`decomp/state/index.json` memetakan nama fungsi → modul. `progress.json`
lama hanya arsip (`.bak`), jangan dipakai. Kerja m2c/agbcc di luar lock.
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

## Pindah ke src

MATCH baru bisa dipindah lewat `python3 decomp/migrate.py --module <mod>.s
--func <nama>` (atau batch `fomt --migratable`). Gate-nya: tanda tangan extern
harus sama dengan `src/`, dan pada modul **tail-only** hanya fungsi terakhir
yang boleh dicabut (`bukan fungsi terakhir` = tunggu penerusnya pindah).
Detail + SKIP permanen: `docs/decomp/MIGRATE.md`. Diagnosa cepat tanpa
menulis: `python3 decomp/migrate.py --module <mod>.s --func <nama> --explain`.

Sebelum memperbaiki draf “failed”, cek dulu `grep "DECOMP-MATCHED <fn>"
src/*.c*` dan `python3 tools/scripts/migrate_audit.py` — fungsi yang sudah
di src tidak boleh dikerjakan ulang (akan menambah blok duplikat).

## Verifikasi & tutup sesi

- `make compare` HIJAU setelah tiap migrate/edit `src/`; jangan klaim
  migrasi tanpa output `[OK] sha1sum -c fomt.sha1`.
- `python3 tools/scripts/audit_consistency.py` (read-only) untuk state ↔
promoted ↔ src; `--json` untuk agent, `--strict` untuk gate.
- `fomt verify` HANYA bila user memintanya (mahal); validasi per fungsi =
  judge + `make compare`.
- Tutup dengan LAPORAN TOTAL format baku (angka fresh dari state + marker
  `DECOMP-MATCHED`), commit hanya file pekerjaan, lalu push.
