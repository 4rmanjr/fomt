# Decompile fomt: satu perintah

```bash
python3 decomp/run.py [N] [modul ...]
python3 decomp/run.py [N] [modul ...] --agent <nama>
```

- `N` = jumlah fungsi per jalan (default 20).
- Contoh: `python3 decomp/run.py 10 more_items.s`
- Tanpa argumen modul = antre seluruh `asm/*.s` dari yang terkecil.
- **Ctrl-C kapan saja**, jalankan lagi perintah yang sama untuk lanjut.
- Tidak butuh ROM, tidak butuh argumen lain, tidak butuh venv manual.
  Semua tool (agbcc, arm-none-eabi, m2c, decompnet, pyelftools/capstone)
  sudah di-vendor di `tools/`; cukup `python3` 3.12+ (lihat `tools/VENDORED.md`).

## Multi-agent (dua agent bersamaan)

Boleh jalan paralel di repo yang sama, mis. OpenCode dan VSCode:

```bash
fomt 20 --agent opencode
fomt 20 --agent vscode
```

- Tiap fungsi **diklam** dulu (`claimed_by`, `claimed_at` di `progress.json`),
  jadi tidak ada fungsi yang digarap dua kali.
- Semua baca-ubah-tulis state di bawah `flock` (`decomp/state/progress.lock`);
  kerja m2c/agbcc di luar lock supaya tetap paralel.
- Log judge dipisah: `decomp/logs/judge_<nama>/<agent>/`.
- Klaim yang tertinggal (proses mati/Ctrl-C paksa) diambil alih setelah
  `FOMT_CLAIM_TTL` detik (default 1800).
- Identitas agent: `--agent`, lalu `$FOMT_AGENT`, lalu `$DECOMP_AGENT_NAME`,
  lalu `host:pid`.

## Yang terjadi per fungsi

`scan` → `draft` (m2c) → `judge` (agbcc `-O2`, byte-identik vs asm) →
`promote` (tampung di `decomp/promoted/<modul>.cc` untuk cek manusia).

## Status (tersimpan di `decomp/state/progress.json`)

| status | arti | tindak lanjut |
|---|---|---|
| `pending` | baru ketemu saat scan | otomatis di-draft |
| `drafted` | draf tersimpan di `decomp/drafts/` | otomatis di-judge |
| `matched`→`promoted` | byte-identik | cek `decomp/promoted/`, lalu pindah manual ke `src/` |
| `failed` | butuh tangan manusia | buka `decomp/drafts/<nama>.c` + `decomp/logs/judge_<nama>/<agent>/`, perbaiki, jalan ulang |

Draf m2c disimpan ke `decomp/drafts/<nama>.c` sebelum di-judge (tidak menimpa
draf yang sudah ada).

Lihat ringkasan kapan saja: `python3 decomp/run.py 0` (tidak kerjakan apa-apa).

## Yang sudah terbukti

`more_items.s`: `func_0800FFD0`, `func_0800FFD4` → MATCH → `decomp/promoted/more_items.cc`.

## Batasan jujur

- Fungsi yang baca global (`gUnk_*`) atau panggil modul lain (`bl func_08...`)
  hampir selalu DIFF pada percobaan pertama: literal pool di objek rakitan
  mentah bernilai 0 tanpa link penuh, dan draf m2c menebak tipe argumen.
  Itu antrean perbaikan manual, bukan kegagalan workflow.
- `code_lib_syscall.s` (svc), `code_iwram.s`, `vtables.s`, `.incbin` = lewati.
- C++ (`agbcp`) belum tersedia di toolchain ini → modul C++ antre belakangan.
- Pindah ke `src/` + hapus blok asm tetap manual dan wajib `make compare`
  (butuh `baserom.gba` + agbcc/agbcp di `tools/`).
