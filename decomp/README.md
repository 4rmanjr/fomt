# Decompile fomt: satu perintah

```bash
python3 decomp/run.py [N] [modul ...]
python3 decomp/run.py [N] [modul ...] --agent <nama>
fomt verify [--agent <nama>]
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

## Statistik progres

Setiap fungsi yang selesai (MATCH maupun DIFF) langsung diikuti statistik
global, jadi progres kelihatan tanpa menunggu batch habis:

```text
[opencode] mulai 2 fungsi | total 2626 | berhasil 47 (1.8%) | sisa 2579 | pending 2522, drafted 0, failed 57, promoted 47, matched 0
[opencode] [1/2] func_080040A0: DIFF (func.c:83: request for member `unk8C' in something not a structure or union) | batch 0M/1D | total 2626 | berhasil 47 (1.8%) | sisa 2579 | pending 2521, ...
[opencode] [2/2] func_080041DC: DIFF (func.c:224: request for member `unk8' in something not a structure or union) | batch 0M/2D | total 2626 | berhasil 47 (1.8%) | sisa 2579 | pending 2520, ...
Selesai [opencode]: batch MATCH 0, DIFF 2 | total 2626 | berhasil 47 (1.8%) | sisa 2579 | pending 2520, drafted 0, failed 59, promoted 47, matched 0
```

- **berhasil** = `promoted + matched` (byte-identik dan sudah ditampung).
- **sisa** = `total - berhasil`.
- `batch <M>M/<D>D` = hitungan MATCH/DIFF khusus jalan ini.

## Autopush hasil MATCH

Setiap fungsi MATCH langsung di-commit dan di-push ke remote oleh `run.py`
(tidak perlu commit manual setelah decomp):

```text
[opencode] [3/20] func_0800FFD4: MATCH -> .../decomp/promoted/more_items.cc | batch 1M/2D | ...
[opencode] autopush: decomp: promote func_0800FFD4
```

- Hanya jalan bila ada perubahan, dan hanya setelah MATCH — run yang DIFF
  semua tidak menghasilkan push.
- Yang di-commit: seluruh `decomp/` (state, draf, log, promoted).
- `FOMT_AUTOPUSH=0` mematikan autopush untuk sementara.
- Kalau push gagal (offline), commit tetap lokal, run lanjut, dan peringatan
  dicetak; push manual nanti.
- Commit/push diserialisasi antar-agent lewat `decomp/state/git.lock`.

## Audit hasil (`fomt verify`)

`fomt verify` menjalankan ulang pipeline judge untuk **semua** fungsi
`promoted`/`matched`, dari nol, tanpa mengubah state:

```bash
fomt verify
fomt verify --agent opencode
```

Yang dicek per fungsi:

- draf C dikompilasi ulang dengan agbcc `-O2` lalu dirakit, dan
- byte + daftar relokasi harus sama dengan `asm/<modul>.s` asli, dan
- isi draf harus benar-benar ada di `decomp/promoted/<modul>.cc`.

Log audit ditulis terpisah di `decomp/logs/judge_<nama>/verify_<agent>/`,
jadi log judge asli tidak tertimpa. Exit code `0` = semua lolos, `1` = ada
yang tidak MATCH atau isi promoted tidak cocok dengan draf.

Contoh:

```text
[opencode] verify 191 fungsi | log decomp/logs/judge_<nama>/verify_opencode/
[opencode] [1/191] func_08022B58: MATCH ()
...
[opencode] verify selesai: 191/191 MATCH, 0 DIFF | promoted != draft: 0
```

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
