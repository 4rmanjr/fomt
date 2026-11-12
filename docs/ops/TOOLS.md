# Tool bantu (`tools/scripts/`)

Katalog tool + flag. Kalau perilaku tool berubah, ubah **berkas ini** (bukan
`AGENTS.md`) dan rujuk dari sana. Aturan invarian: [`AGENTS.md`](../../AGENTS.md).

## Read-only (audit/diagnosa)

- `audit_consistency.py` — audit cepat state ↔ promoted ↔ src: blok duplikat,
  blok kurung rusak, state yatim, status basi, status di luar enum, `i32`,
  drift promoted vs draf, symlink skill. `--json` untuk agent, `--strict`
  sebagai gate, `--fix` hanya untuk entri yang marker-nya benar ada di src.
- `migrate_audit.py` — klasifikasi semua blok promoted: bisa migrasi vs alasan
  SKIP (`--json`).
- `tail_chain.py --module <stem>.s` — urutan ekor + NEXT/blocker untuk modul
  tail-only.
- `diff_mismatch.py <func>` — hitung mismatch `diff.py` setelah target branch
  dinormalkan (`--json`/`--strict`, `--diff-json` untuk output yang sudah ada).
- `width_mismatch.py` — lebar akses asm (`ldrb/strb/ldrh/strh/ldr/str`) vs tipe
  field draf per offset; default hanya |len-ref| <= 4, `--func`/`--module`/
  `--json`. Offset dihitung per angka, bukan per register basis → wajib
  dikonfirmasi ke asm (akses harus memakai register argumen).
- `plan_stats.py` — tabel sisa pekerjaan per modul: jumlah `failed`/`match`,
  byte masing-masing, total, plus distribusi ukuran fungsi failed. Kolom
  `match` dipecah `src` (blok sudah di `src/`, byte ROM berubah) dan `promo`
  (promote-only di `decomp/promoted/`); `%byte-src` dihitung dari `src`, bukan
  dari MATCH. Pembedanya dari `decomp/srcmarkers.py` (marker `DECOMP-MATCHED`).
  `--sort bytes|count|name`, `--module`, `--limit`, `--json`. Dipakai memilih
  target sesi (lihat `docs/RENCANA-TRANSLASI.md` §5 Fase 0).
- `wall_registry.py` — rekap fungsi yang `note`-nya menyebut "parkir" beserta
  alasan, attempt (`N/5`), dan modulnya; `--module`, `--grep`, `--full`,
  `--width`, `--json`. Cegah mencoba ulang wall tanpa ide baru.
- `decomp/migrate.py ... --explain` — beda signature blok vs `src/`, tanpa
  menulis apa pun.
- `decomp/srcmarkers.py` — daftar fungsi yang punya marker `DECOMP-MATCHED`
  di `src/`; dipakai `fomt status` dan `plan_stats.py` untuk membedakan
  migrasi `src/` dari promote-only.

## Engine kerja (`decomp_engine.py`)

```bash
python3 tools/scripts/decomp_engine.py queue --limit 12 [--kind copy] [--module X]
python3 tools/scripts/decomp_engine.py diff <func> [--max-lines N]
python3 tools/scripts/decomp_engine.py attempt <func> --draft f [--migrate] [--force]
python3 tools/scripts/decomp_engine.py learn | hint <func> | sectors
```

- `queue` — kandidat `failed` |len-ref| <= 4, skor
  `prior/(1+ops) * (1 + 40/max(ref_len,40))`; wall (`identik`,
  `hanya-register`) selalu di belakang.
- `diff` — diff judge-vs-ref setelah `norm()`: alias `adds`/`add`, `stmia`→`stm`,
  alias kondisi, label, `.Lpool+N`, target cabang numerik, immediate negatif
  pada `add`/`sub`, `negs rX, rY` = `rsbs rX, rY, #0`, dan alias APCS
  `sb`/`sl`/`fp`/`ip` = `r9`/`r10`/`r11`/`r12` (asm repo memakai nama APCS,
  objdump mencetak `rN`). Klasifikasi:
  `identik`, `hanya-register`, `zero-reload`, `copy`, `sign/width`,
  `width-offset`, `ptr-scale`, `cabang`, `instruksi`.
- `attempt` — tulis draf, reset state (`status=failed`, `judged_mtime=0`,
  `draft_src=manual`), jalankan judge, rekam verdict ke
  `decomp/engine/attempts/<func>.json`, tolak percobaan ke-6 (cap 5; `--force`
  hanya untuk draf yang sudah berubah + bentuknya diverifikasi probe), dan
  dengan `--migrate` lanjut `migrate.py` + `make compare`.
- Label pola percobaan: DIFF memakai klasifikasi diff **setelah** judge; MATCH
  memakai pola **percobaan pertama** kandidat (pola pemicu).
- `learn` — bangun ulang `knowledge.json` dari `attempts/` **di mesin itu**.
  Riwayat `attempts/` tidak di-commit, jadi `learn` tanpa riwayat lengkap akan
  menyusutkan basis prior lintas sesi. `knowledge.json` yang di-commit adalah
  artefak durable-nya.
- `hint <func>` — resep historis yang pernah MATCH untuk pola itu; `sectors` —
  progres + pola sisa per modul.

## Generator draf

- `cc_probe.py <file.c>` — form hunting: kompilasi cuplikan C dengan
  agbcc/old_agbcc lalu cetak asm (`--compiler old_agbcc`, `--grep` untuk pola).
  Pakai sebelum menghabiskan kuota judge.
- `gen_thunks.py` — draf untuk fungsi thunk (`push {lr}; bl X; pop {r0}; bx r0`
  → `void f(void) { X(); }`); `--module`/`--limit`/`--json` untuk melihat
  kandidat, `--write` menulis draf. Simbol bermangle C++ (`_._10ANpcEntity`)
  dideklarasikan lewat `__asm__("...")`. `pop {r0}` = epilog void
  (POLA-DIFF §2.1). Hanya menulis draf; penilaian byte tetap `fomt`.
- `synth_types.py` — sintesis typedef dari offset asm (v3: 0/10 MATCH, 7/10
  compile pada pilot); heuristik typing bukan jalan MATCH, lanjutkan dengan
  diff byte.

## Prasyarat lingkungan

`fomt` wrapper di PATH men-set env judge; kalau tidak ada, lihat
[`../../skills/gba-decomp/PANDUAN.md`](../../skills/gba-decomp/PANDUAN.md)
bagian prasyarat ( `unset LD_PRELOAD`, `LIBCAPSTONE_PATH`, `FOMT_AGENT`,
`FOMT_AGBCC`, `FOMT_AS`, `FOMT_CPP` ).
