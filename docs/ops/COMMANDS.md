# Perintah & state (`fomt`, shard, draf)

Referensi operasional. Aturan invarian ada di [`AGENTS.md`](../../AGENTS.md);
pola perbaikan draf di [`../decomp/POLA-DIFF.md`](../decomp/POLA-DIFF.md);
gerbang migrasi di [`../decomp/MIGRATE.md`](../decomp/MIGRATE.md).

Aturan penting: **satu perintah decomp** — pakai `fomt` (jangan `python3
decomp/run.py` langsung, jangan `decomp/workflow.py` yang legacy).

```bash
fomt                      # 20 fungsi berikutnya
fomt --migratable         # hanya fungsi yg BISA migrate ke src:
                          # modul migratable dulu (0803EE94/809E804/
                          # entities/34CEC/0803A8A4/new_game/game_state/
                          # main), SKIP-permanen dilewati (grup gabungan,
                          # data-asing ekor, modul tail-only/linkonce)
fomt 10 --migratable      # 10 fungsi migratable
fomt 10                   # 10 fungsi berikutnya
fomt 5 sram_proxy_1.s     # 5 fungsi dari modul itu
fomt status               # progres (total/berhasil = src + promote-only/sisa)
fomt verify               # audit ulang promoted/matched — HANYA bila diminta
fomt 10 --agent opencode  # identitas agent untuk klaim
fomt --loop               # ulangi batch 20 sampai antrean habis (foreground)
fomt --loop 10            # sama, batch 10 per putaran
fomt --loop 20 --wait 2 code_linkonce.s --retry  # loop modul itu + ulangi failed
```

Statistik (`total`, `berhasil` yang dipecah `src` + `promote-only`, `sisa`,
sebaran status, `batch M/D`) dicetak
setiap fungsi selesai dan di akhir tiap batch. Mode `--loop` mengulangi batch
sampai pending/drafted habis — tetap foreground, tiap fungsi dan ringkasan
`batch#N` dicetak langsung; berhenti dengan Ctrl-C atau saat antrean kosong.

Catatan loop:

- failed yang drafnya tidak disentuh TIDAK ikut antre lagi (tidak macet di
  fungsi gagal yang sama); hanya draf yang diperbaiki manual yang di-judge
  ulang otomatis.
- `--retry` memaksa semua failed diulang — gabungkan dengan `--loop` hanya
  bersama filter modul, kalau tidak ditolak (akan berputar selamanya).
- Klaim per-batch dilepas di akhir tiap batch (`release_all`), jadi agent lain
  bisa mengambil alih di jeda `--wait S` (default 5 detik).
- `--migratable` hanya mengantrekan fungsi yg lolos `migrate_gate`
  (`decomp/migrate.py`: grup solo + bukan data-asing-tak-selamat + modul
  split). Prioritas: kerjakan MATCH yg langsung bisa `migrate` ke `src/`
  (compare HIJAU) — bukan fungsi yg MATCH tapi SKIP-permanen (grup gabungan,
  pool yatim, `__builtin_new`, tail-blokir). Default (tanpa flag) tak berubah:
  semua modul terantre seperti semula.

## Alur per fungsi

`scan` -> `draft` (m2c) -> `judge` (agbcc `-O2`, byte-identik vs asm) ->
`promote` (ke `decomp/promoted/<modul>.cc`) -> `autopush`.

## Letak state & artefak

- State: `decomp/state/modules/<stem>.json` (shard per modul) +
  `decomp/state/index.json` (peta nama→modul); ditulis atomik di bawah
  `flock`. File lama `decomp/state/progress.json` sudah dipecah otomatis
  (tersisa sebagai `.bak`), jangan dipakai lagi.
- Draf: `decomp/drafts/<nama>.c`.
- Log judge: `decomp/logs/judge_<nama>/<agent>/` (ramping: hanya
  `func.c`/`func.s`; artefak `.o`/`.i`/`ref.o`/`common.h` dihapus otomatis
  tiap judge selesai — butuh lengkap? `FOMT_KEEP_ARTIFACTS=1`).
- Engine: `decomp/engine/knowledge.json` (di-commit), `attempts/` + `cache/`
  (lokal, tidak di-commit).

## Provenance draf

State menyimpan `draft_src` (`m2c`/`manual`) + `m2c_hash`. `resanitize_stale`
hanya menimpa draf yang isinya masih keluaran tool (hash cocok, atau penanda
`typedef struct GenObj` untuk entri lama); draf manual dikunci
`draft_src=manual` dan tidak pernah diregenerasi. Jangan andalkan mtime:
setelah judge, `judged_mtime` = mtime draf itu sendiri.

Klaim basi diambil alih setelah `FOMT_CLAIM_TTL` detik (default 1800).
`FOMT_CLAIM_TTL=0` hanya bila tidak ada agent lain yang jalan.
