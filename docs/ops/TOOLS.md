# Tool bantu (`tools/scripts/`)

Katalog tool + flag. Kalau perilaku tool berubah, ubah **berkas ini** (bukan
`AGENTS.md`) dan rujuk dari sana. Aturan invarian: [`AGENTS.md`](../../AGENTS.md).

## Read-only (audit/diagnosa)

- `audit_consistency.py` — audit cepat state ↔ promoted ↔ src: blok duplikat,
  blok kurung rusak, state yatim, status basi, status di luar enum, `i32`,
  drift promoted vs draf, symlink skill, dan **note basi** (fungsi sudah di
  src tapi note masih berbunyi `Nmissing/Nextra`, `vs ref`, `promote-only`,
  `menunggu`, `belum`, atau `parkir` tanpa penanda selesai; juga status
  `promoted` dengan note "belum bisa dipromosikan"). `--json` untuk agent,
  `--strict` sebagai gate, `--fix` hanya untuk entri yang marker-nya benar ada
  di src — note basi diberi prefix `[SELESAI …]`/`[SUDAH promoted …]` dan teks
  lama disimpan sebagai riwayat (idempoten).
- `migrate_audit.py` — klasifikasi semua blok promoted: bisa migrasi vs alasan
  SKIP (`--json`).
- `tail_chain.py --module <stem>.s` — urutan ekor + NEXT/blocker untuk modul
  tail-only. Blok yang `ref_len`-nya memuat lebih dari satu prolog
  `push {…, lr}` (blob `.byte` berisi beberapa fungsi) ditandai MULTI-FUNGSI:
  barisnya diberi catatan, dan kalau blok itu jatuh di ekor, output berhenti
  dengan `BUNTU` alih-alih merekomendasikan NEXT (satu fungsi C tak mungkin
  menutup beberapa fungsi). Deteksi butuh `fomt.gba`; tanpa ROM, kolom prolog
  kosong. Heuristik ini tidak menangkap blob yang fungsi keduanya leaf (tanpa
  `push {…, lr}`).
  Peta semua blocker ekor (fungsi failed, ukuran, residual terakhir) ada di
  `docs/decomp/EKOR-BACKLOG.md`.
- `ekor_snapshot.py` — **regenerasi**   `docs/decomp/EKOR-BACKLOG.md`: ringkasan
  per modul tail-only, tabel 12 entri ekor, kelas S/M/L, dan **peta gerbang**
  (tiap fungsi non-`promoted` + daftar `promoted` yang baru terbuka setelah
  fungsi itu MATCH dan dicabut — urutan kerja wajib dari ujung), semuanya dari
  `tail_chain.py --json` + shard state. Kolom residual per fungsi = ringkasan
  note shard, **kecuali fungsi ujung**: sel itu diambil dari verdict
  `decomp/state/migrate_last.json` (ditulis `migrate.record_verdict()` pada
  setiap percobaan migrate, termasuk `TOLAK` saat fungsi belum MATCH). Dry-run tidak dicatat: `migrate_audit.py`
  menyapu semua fungsi sekaligus dan verdict "DRY-*" bukan percobaan nyata
  (tanpa aturan ini berkas verdict membengkak ribuan baris). Note
  ujung yang masih memuat klaim lama (`penerus`, `MULTI-FUNGSI`, `blob`,
  `bukan fungsi terakhir`) tidak dipakai sebagai residual: verdict migrate
  yang menang, dan klaim itu dilaporkan sebagai peringatan di dokumen +
  stderr. Bagian naratif setelah penanda
  `<!-- manual:catatan-per-modul -->` disalin apa adanya. `--check` exit 1 kalau
  dokumen di disk basi, `--stdout` untuk melihat hasil tanpa menulis. Baris
  `Snapshot **tanggal**` **tidak** ikut dibandingkan (pergantian hari bukan
  perubahan data), dan tanggalnya diturunkan dari mtime input terbaru
  (`asm/<stem>.s` + shard), bukan jam dinding — jadi regenerate tanpa perubahan
  data menghasilkan dokumen identik. Jalankan setiap habis MATCH/migrasi yang
  mengubah ujung rantai.
  **Gate-nya otomatis**: `check_docs.py` membandingkan dokumen dengan hasil
  generate lewat `ekor_snapshot.is_stale()` (tanggal diabaikan) dan
  menjadikannya masalah (exit 1) bila basi,
  jadi lupa meregenerasi tidak bisa lewat diam-diam di tutup sesi; `--check`
  manual hanya untuk gerbang cepat tanpa memuat seluruh pemeriksaan dokumen.
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
  alasan, attempt (`N/5`), dan modulnya. Keluarannya **dipisah dua kelas**:
  `== WALL AKTIF ==` (masih bisa dikejar dengan ide baru) di atas, lalu
  `== SKIP PERMANEN ==` (note menyatakan parkirnya permanen: ekor data asing,
  grup gabungan, fragmen epilog bersama). Kelas permanen berasal dari deteksi
  frasa di note, bukan daftar nama manual: `SKIP permanen`, `SKIP-permanen`,
  `SKIP-migrasi permanen` (bentuk yang dipakai note migrasi; pola lama
  `skip\s+permanen` tidak menangkapnya), dan sinonim `tidak/tak bisa
  dimigrasi`, `tidak mungkin dimigrasi`. Baris permanen boleh tidak memakai
  kata "parkir" — note `SKIP-migrasi permanen: ...` tetap masuk registry.
  Ringkasan menyebut `(aktif N, permanen M)`.
  **Pengaman gejala permanen:** note yang hanya *menyebut* gejala (`data asing`,
  `ekor data asing`, `grup gabungan`, `tak-split`, `epilog bersama`) tanpa frasa
  baku **tidak dipindah kelas** (tetap `aktif`), tapi ditandai `tanda`, muncul di
  bagian `== AKTIF TAPI BERTANDA PERMANEN ==`, menambah `bertanda permanen S` di
  ringkasan dan kunci `suspek` di `--json`, serta memicu peringatan di stderr.
  Bila `--kind permanen` kosong, tool mencetak `[PERINGATAN]` berisi jumlah note
  permanen di state dan jumlah blok SKIP permanen menurut `migrate_audit.py`
  (best-effort, gagal audit tidak menggagalkan tool) — jadi permanen yang lolos
  frasa baku tetap ketahuan. Flag: `--module`, `--kind aktif|permanen`,
  `--grep`, `--full`, `--width`, `--json` (`walls` + `total` + `aktif` +
  `permanen` + `suspek`, dan `kind`/`tanda` per baris). Cegah mencoba ulang wall
  tanpa ide baru, dan jangan sampai blok SKIP permanen terlihat setara dengan
  target hidup.
- `decomp/migrate.py ... --explain` — beda signature blok vs `src/`, tanpa
  menulis apa pun.
- `decomp/srcmarkers.py` — daftar fungsi yang punya marker `DECOMP-MATCHED`
  di `src/`; dipakai `fomt status` dan `plan_stats.py` untuk membedakan
  migrasi `src/` dari promote-only.
- `asset_inventory.py` — inventaris read-only blob `.incbin` di
  `asm/data/data_0813B288.s`: alamat, ukuran, kelas format, stream, dan
  pemakai pointer. Format `0x70` (dekoder `decompress.py`) hanya diterima
  kalau seluruh blob habis terurai; header BIOS LZ77/RLE divalidasi dengan
  mendekode stream, kandidat gagal dicatat sebagai header kebetulan. Huffman
  BIOS (`0x24`/`0x28`) belum punya dekoder, jadi hanya ditandai kandidat.
  Pemakai pointer = kata 32-bit sejajar di ROM yang bernilai alamat awal blob;
  pemiliknya simbol terdekat dari `asm/` (tanpa ELF). Menulis
  `docs/decomp/ASET-INVENTARIS.md` (hasil generate, jangan disunting tangan);
  `--stdout` untuk melihat, `--check` exit 1 bila dokumen basi, `--json` untuk
  data mentah. `check_docs.py` membandingkan dokumen itu dengan
  `asset_inventory.document()` (gate otomatis seperti `EKOR-BACKLOG.md`), jadi
  pemecahan `data_0813B288.s` tanpa regenerasi menggagalkan tutup sesi; kalau
  `baserom.gba` atau berkas `.s` sumbernya tidak ada, gate dilewati dengan
  catatan. Tidak menjalankan build dan tidak menyentuh `fomt.gba`.

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
  objdump mencetak `rN`). Daftar itu sumber kebenarannya tabel
  `NORMALIZATIONS` di `decomp_engine.py` (nama, contoh baris, hasil `norm()`,
  kata kunci dokumen): menambah normalisasi baru wajib menambah entri di sana,
  karena `check_docs.py` memakai tabel itu untuk menolak dokumen yang masih
  menulis "belum dinormalkan". Klasifikasi:
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
