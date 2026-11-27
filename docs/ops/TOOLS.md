# Tool bantu (`tools/scripts/`)

Katalog tool + flag. Kalau perilaku tool berubah, ubah **berkas ini** (bukan
`AGENTS.md`) dan rujuk dari sana. Aturan invarian: [`AGENTS.md`](../../AGENTS.md).

Tool aset di bawah masih **inventaris/export**, bukan source build. Arah
source asset, encoder, profil `match`/`mod`, dan gate byte ada di
[`ARSITEKTUR-ASET.md`](../decomp/ARSITEKTUR-ASET.md).

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
- `migratable_failed.py` — antrean migrasi hemat token: `failed` di modul
  migratable (`decomp/migrate.MIGRATABLE_MODULES`) yang belum ada di `src/`,
  beserta alasan SKIP-nya. `LIMIT=<n>` membatasi baris (default 15). Read-only.
- `pick_targets.py [--limit N]` — pemilah kandidat migrasi tiga grup, termurah
  dulu per grup: **A** compile-error (pasti bisa maju), **B** pola-lolos (note
  cocok resep terbukti: vtable-ret+ret-dipakai, call-chain fold, arg-dibuang
  r2, epilog-return, mask-hoist), **C** hindari (gejala wall tercatat, jangan
  bakar judge). Read-only; tidak menyentuh state/draf.
- `brief.py <func> [--siblings N]` — paket kerja satu fungsi dalam satu
  perintah: status/`ref_len`/`in_src`/budget judge dari shard state, `note`,
  draf (maks 40 baris), blok asm ref (maks 45 baris, pool `.byte`/`.4byte`
  dipotong), dan saudara modul dengan status + `note` sama (maks N, default
  5). Budget judge diskalakan dari `ref_len`: <=32 -> 3, <=64 -> 4, <=128 ->
  6, <=256 -> 8, di atas itu -> 10. Read-only.
- `judge_summary.py <func>` — ringkas log judge terakhir
  (`decomp/logs/judge_<func>/*/func.s`) + `note` jadi diagnosis siap kerja:
  lokasi residual pertama, skor, pasangan instruksi, klasifikasi
  COMPILE-ERROR vs DIFF kodegen, dugaan pola dari katalog `PATTERNS` (maks
  3, mis. epilog `pop {r1}` = return value, argumen `_call_via_r2` yang
  dibuang m2c), dan saran aksi. Read-only; tidak menyentuh state/draf.
- `tail_chain.py --module <stem>.s` — urutan ekor + NEXT/blocker untuk modul
  tail-only. Blok yang `ref_len`-nya memuat lebih dari satu prolog
  `push {…, lr}` (blob `.byte` berisi beberapa fungsi) ditandai MULTI-FUNGSI:
  barisnya diberi catatan, dan kalau blok itu jatuh di ekor, output berhenti
  dengan `BUNTU` alih-alih merekomendasikan NEXT (satu fungsi C tak mungkin
  menutup beberapa fungsi). Deteksi butuh `baserom.gba` (fallback `fomt.gba`;
  referensi tracked supaya dokumen reproducible dari checkout bersih); tanpa ROM, kolom prolog
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

- `readme_stats.py` — **regenerasi blok statistik `README.md`** di antara
  penanda `<!-- README-STATS:BEGIN -->`/`END`: tabel MATCH/src/promote-only,
  byte ROM dari C, dan **cakupan aset** per kelas (rom-exact / populasi blob
  `.incbin` yang terinventaris, dipetakan lewat grup aset di
  `assets/raw/manifest.json`; baris total memakai union blob agar kelas yang
  berbagi grup tidak dihitung ganda). Ditambah tabel **cakupan per grup blob**
  yang non-overlap: satu blob hanya dihitung di grupnya sendiri, jadi 100%
  berarti seluruh blob grup itu rom-exact. Sumbernya `plan_stats.py` dan manifest
  aset, jadi angkanya tidak diketik tangan. `--check` (exit 1 bila
  blok basi) dipanggil `check_docs.py`; `--stdout` mencetak blok tanpa menulis.
  Jangan menyunting angka di dalam penanda — ubah datanya lalu jalankan ulang.
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
  pemakai pointer. Entri yang `.incbin`-nya sudah diganti binary hasil
  encoder wajib menulis komentar `@ rom: 0xOFFSET 0xSIZE` di bawah simbol;
  inventaris memakai provenance itu sebagai ganti `.incbin "baserom.gba"`. Format `0x70` (dekoder `decompress.py`) hanya diterima
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
- `extract_assets.py` — buka semua stream format `0x70` (daftar dari
  `asset_inventory.analyze()`) ke `assets/0x70/bin/`, kelompokkan dari ukuran +
  isi (`palet` 480 B/15 bank, `tile` 4bpp kelipatan 32 B, `peta` 16-bit,
  `layar` tilemap scene statis, `lain`), lalu render PNG: swatch palet, lembar
  tile indeks, peta berwarna, dan layar berwarna hanya kalau pasangannya
  terbukti. Bukti pertama adalah call site
  `Unpack`/salin di `asm/`: tujuan ditulis peta ke `0x0600C000-0x0600FFFF`,
  palet ke `0x05000000-0x050001FF`, tileset ke `0x06000000-0x0600BFFF` dalam
  fungsi yang sama (register tujuan dilacak lewat `ldr`/`mov`/`adds`, tulisan
  tak dikenal mengosongkan nilai basi). Stream container tidak punya simbol
  statis karena dialamatkan lewat pointer, jadi untuk itu dipakai entri header
  `gUnk_08105EDC` (40 B, dipakai `GetMapData`): +0x00 tileset, +0x04 palet,
  +0x08 palet kedua, +0x0C/+0x10/+0x14 tiga lapis peta, +0x20 lebar/tinggi,
  +0x24 flag interior/eksterior. Flag itu hanya jenis peta, bukan tingkat
  bukti; eksterior memakai +0x08 sebagai varian palet musim, render memakai
  +0x04. Dimensi header atau layar harus cocok dengan ukuran stream dan indeks
  tile (selain 0x03FF = kosong) harus di dalam jumlah tile tileset; kalau tidak
  ada bukti, bukti ganda berbeda, atau aset pasangan tidak masuk akal, stream
  jadi grid indeks dan
  `manifest.json` mencatat `pair_status: unproven` + alasannya. Tilemap yang
  dimuat scene logo/HUD/panel (`func_08000F5C`, `func_08077810`,
  `func_080A2BA4`, `func_080AE7D0`, `func_080B55D0`, `func_080B7164`)
  dikelompokkan `layar`, bukan `peta`; syaratnya semua call site stream itu
  ada di satu fungsi `SCREEN_SCENES` yang memuat tilemap langsung ke
  screenblock BG (`0x0600C000-0x0600FFFF`) plus palet, tanpa header peta.
  Manifest mencatat `screen` (jenis,
  fungsi, baris), PNG-nya `layar berwarna`, dan stream itu tidak dihitung di
  pasangan/peta berwarna. Pasangan yang
  hanya punya entri header ditandai `pair_status: header-only`, bukan
  `verified`; loader lapis `func_080A5CC0` menulis field +0x0C/+0x10/+0x14 ke
  buffer objek, bukan ke `0x0600xxxx`, dan tileset `func_080A5EA0` menulis
  field +0x00 ke `0x06000000`. Jejak lengkapnya ada di `map_loader` manifest
  dan bagian "Bukti loader" dokumen generate. Pasangan bukan
  "palet/tileset terdekat di blob". Tileset/palet yang bukan bagian dari
  53 simbol tetap dibuka dari `baserom.gba` (keduanya stream 0x70 juga) dan
  hanya dipakai saat render, tidak ditulis ulang. `manifest.json` mencatat
  grup, catatan, pasangan + bukti entri, status, dan lebar peta. Label `peta`
  diputuskan per ukuran (mayoritas stream seukuran itu), bukan per stream,
  supaya lapisan peta yang bank/flip-nya beragam tidak pecah kelas.
  `--out DIR` untuk lokasi lain, `--quiet` untuk ringkasan saja. Selain
  `manifest.json`, tool menulis `docs/decomp/ASET-0X70-PETA-BERKAS.md` (peta
  simbol -> stream -> bin/PNG, hasil generate). Pasangan di luar inventaris
  disalin ke `assets/0x70/extern/*.bin`; rujukan pasangan dan
  `external_assets` menyimpan `bin` + `sha256` (alamat hanya provenance),
  dan `--check-external` memeriksa berkas itu, bukan membuka ROM
  (exit 1 bila hilang/beda). Setiap PNG menyimpan `png_sha256`;
  `--check-png` merender ulang PNG dari `bin` + `extern` **tanpa ROM** ke
  direktori sementara, membandingkan hash render dengan manifest, lalu
  memeriksa file PNG di repo (exit 1 bila beda/hilang). Render ulang itu
  puluhan detik; `--check-png --quick` melewatinya bila input render
  (manifest + `bin/` + `extern/`) sama dengan render terakhir yang lolos —
  sidik jari input disimpan di `build/png_check.stamp.json` (gitignored) —
  dan tetap memeriksa hash berkas. Gate `check_docs.py` memakai jalur `quick`
  itu, jadi PNG peta yang rusak menggagalkan tutup sesi/pre-commit tanpa
  membayar render tiap commit (render penuh hanya sekali setelah clone/clean
  atau saat bin berubah).
  `--check-map` exit 1 bila
  dokumen itu basi terhadap manifest, dan `check_docs.py` memanggil renderer
  yang sama sebagai gate (dokumen basi menggagalkan tutup sesi, bukan lolos
  diam-diam). Saat menulis ulang, hanya berkas yang tercatat di manifest lama
  yang dihapus — `png/` dan `extern/` dipakai bersama `embedded_streams.py`
  (`extern_stream_*.png`, `stream_*.bin`), jadi glob-hapus akan menghapus
  keluaran tool lain. `pair_evidence.source` mencatat `callsite` atau `header-only`;
  `header-only` tidak boleh disebut terbukti dari call site. Seluruh stream dirender dalam hitungan
  puluhan detik; tidak menjalankan build dan tidak menulis ROM.
- `raw_assets.py` — inventaris blob **mentah** (bukan `0x70`) dari
  `asset_inventory.analyze()`, kelompokkan dari isi: `palet` (<=1 KB, semua u16
  < 0x8000), `sprite/OBJ` (kelipatan 32 B = tile 4bpp, atau non-32 B dengan
  header/ekor <=31 B yang menyisakan tile >=13% nibble nol dan <=12
  indeks/tile), `tilemap` (entri 16-bit, bit 10-15 konsisten), `gambar
  terkompresi` (**hanya** blob yang bank stream `0x70`-nya terbukti dari
  penunjuk kode/tabel di `VERIFIED_LAYOUT`; daftar bank ada di dokumen
  generate), `tabel` (sisanya, tidak dirender).
  Kelompok `gambar terkompresi` tidak punya jalur deteksi isi: scan rantai
  `0x70` yang berakhir tepat di ujung blob memang menemukan rantai di blob
  lain, tetapi sebagian blob itu justru terbukti container (mis.
  `gUnk_087409E4`), jadi rantai valid saja bukan bukti dan kandidat baru wajib
  ditelusuri kode/tabel dulu. Supaya daftar bank tidak berhenti di contoh yang
  diingat, setiap generate memindai rantai `0x70` di semua blob non-32 B dan
  menulis tabel "Rantai `0x70` valid di blob non-32 B" dengan status
  bank/container/belum terbukti (scan itu menambah puluhan detik dan tetap
  bukan penentu kelompok). Menulis
  `assets/raw/png/` + `assets/raw/manifest.json` + dokumen generate
  `docs/decomp/ASET-MENTAH-BERKAS.md`; `--check` exit 1 bila dokumen basi,
  dan `check_docs.py` memanggil renderer yang sama sebagai gate (dokumen basi
  menggagalkan tutup sesi, bukan lolos diam-diam). `--out DIR`/`--quiet`
  seperti `extract_assets.py`. Kelompok ditentukan dari
  isi, bukan nama simbol. Blob non-32 B diuji dengan memotong sisa 1-31 B di
  depan (header kecil) atau belakang (ekor kecil); bila sisa tile lolos ambang
  di atas, blob dirender sebagai `sprite/OBJ` dan `tile_offset`/`tile_trim`
  dicatat di manifest. Ambang ini heuristik, bukan bukti format. `VERIFIED_LAYOUT`
  adalah override kecil yang berasal dari call site, bukan dari nama: entri
  `layout: container` (glyph/font/objek dengan count+tabel) tetap di kelompok
  `sprite/OBJ` tetapi tidak punya `tile_offset` dan tidak dirender sebagai
  lembar tile; `gUnk_086DE7F4` dikoreksi menjadi `tabel` karena
  `func_080AA9C8` (kasus 21) memakai 16 entri-nya sebagai blok 4x4 yang dicap
  ke lapis, bukan lapis peta (25204 entri juga tak punya lebar persegi dan
  header peta `gUnk_08105EDC` tidak menunjuknya). Empat tabel stamp lain
  (`gUnk_086DCC88`, `gUnk_086DDDEC`, `gUnk_086DC57C`, `gUnk_086DD6E0`) dan
  `gUnk_086EAD8C` juga `tabel` dengan catatan yang sama; yang terakhir dulu
  salah sebagai `sprite/OBJ` 1041 tile 4bpp padahal 16656 entri u16 = 1041
  blok 4x4. `VERIFIED_MAP_STAMP` memberi `map_width` dari loader untuk blob
  yang ukurannya tepat satu stamp: `gUnk_086DC54C`/`gUnk_086DD6B0` 6x4,
  `gUnk_086DD690`/`gUnk_086EAD64` 4x4, `gUnk_086EACDC`/`gUnk_086EAD84` 2x2
  (heuristik pembagi dulu memilih 8, atau `sprite/OBJ` untuk yang 32 B).
  Bukti untuk sprite kecil: `func_08008F0C(src, dst, size)` menyusun
  deskriptor DMA dengan kontrol `0x84000000 | size/4`, jadi `size` dalam
  byte (32-bit transfer). Contoh: `gUnk_0875196C` 128 B dengan `r3=0x80` ke
  `0x06000A80`, palet 32 B-nya tepat di +0x80; `gUnk_08750E4C` 288 B dengan
  `r3=0x120` ke `0x060015C0`. Blob 128/288 B yang dipakai dengan pola itu
  memang tile 4bpp, tetapi entri yang tak punya bukti sekadar heuristik.
  Render `tilemap` menolak
  lebar fallback: bila jumlah entri tidak habis dibagi lebar terpilih, blob
  tidak dirender;   `gUnk_0869B284`/`gUnk_086D74F8`/`gUnk_086DC3F4`
  menjadi `gambar terkompresi` karena isinya bank stream `0x70` tertanam.
  `assets/0x70/manifest.json` tetap hanya memuat blob yang seluruhnya
  berformat `0x70`; ketiga bank tertanam diekstrak terpisah ke
  `assets/0x70/extern/` (`embedded_streams.py`).
  Setiap entri override harus punya bukti fungsi/alamat/stream di komentar.
  Tidak menjalankan build dan tidak menulis ROM.
- `tools/assets/asset_manifest.py` — indeks aset source di
  `assets/manifest.json` (satu tempat untuk hash + status + encoder). Sumber
  datanya metadata per-aset di `assets/gfx/fonts/*.json`,
  `assets/gfx/palettes/*.json`, `assets/gfx/sprites/*.json`, dan
  `assets/gfx/tiles/*.json` — direktori `tiles/` untuk blob tile 4bpp tanpa
  palet pasangan (mis. tile yang di-DMA mentah ke VRAM; `tile4bpp.py decode`
  menulis `status: rom-exact` di sini) (berkas tanpa
  `rom`/`kind` dilewati). Generator menjalankan encoder yang dideklarasikan
  (`tiles4bpp` → `tile4bpp.py`, `font_container` → `font_container.py`,
  `glyph_font` → `glyph_font.py`, `glyph_index` → `glyph_index.py`,
  `palette` → `pal2gba.py`, `sprite` → `sprite2gba.py`),
  membandingkan byte dan SHA-256 hasilnya dengan slice `baserom.gba` dan
  dengan `rom.sha256` metadata, lalu menolak entri yang statusnya bukan
  `rom-exact`. Bila `build/assets/<symbol>.bin` lebih baru daripada
  JSON/PNG/PAL + tool encoder (termasuk modul bersama `lz70.py`,
  `decompress.py`, `asset_inventory.py`, `tile4bpp.py`) dan byte-nya sama
  dengan slice ROM, encode ulang dilewati; helper yang sama dipakai
  `asset_verify.py`. `--check` exit 1 bila manifest basi (gate yang sama
  dipanggil `check_docs.py`). Tidak menjalankan build dan tidak menyentuh
  `asm/data/*.s`.
- `tools/assets/gfx_rules.py` — hasilkan `gfx_rules.mk`, aturan konversi
  graphics bergaya `graphics_file_rules.mk` pret tetapi **digenerate** dari
  metadata `assets/gfx/**/*.json`. Isinya variabel `ASSET_BINS` (satu target
  `build/assets/<symbol>.bin` per aset `rom-exact`) + satu aturan build per
  aset (dependensi JSON, PNG, palet, dan berkas encoder). Makefile
  meng-include berkas itu, jadi menambah aset tidak perlu menyunting Makefile
  dan aset yang belum `rom-exact` tidak punya aturan (`.incbin`-nya tetap ROM).
  `--check` exit 1 bila basi; gate yang sama dipanggil `check_docs.py`.
- `tools/assets/sprite2gba.py` — codec sprite/OBJ 4bpp (pola `gbagfx`): source
  PNG **terindeks 8-bit + PLTE** (warna palet terlihat, indeks tidak ambigu
  walau ada entri palet kembar) dan `.pal` JASC, hasilnya byte tile GBA.
  Metadata menyimpan `rom` tile, `palette.rom` (offset/ukuran/sha256 palet
  pasangan, ikut digerbang), `source.tiles_wide`/`tile_count`, dan `frame`
  (`width_tiles`/`height_tiles`/`count`; total tile wajib cocok). `decode`
  menulis PNG+`.pal`+JSON dari slice ROM, `encode` membalik, `verify`
  membandingkan byte/hash tile **dan** hash palet terhadap ROM. Dipakai
  `asset_manifest.py`/`asset_verify.py` lewat `kind: sprite`. Pemasangan
  sprite+palet eksplisit lewat `--pair-rule adjacent|asm-load|asm-branch`
  (+`--pair-lines tile/palet`, `--pair-asm` untuk memverifikasi baris asm,
  `--pair-reason` untuk lintas cabang); hasilnya dicatat di JSON sebagai blok
  `pair`. `--semantics proven|unidentified` (default `unidentified`)
  menentukan aturan id §6: placeholder `gunk_<alamat>` hanya sah bila
  semantiknya belum terbukti. Baris `--pair-lines` harus memuat `@ =<symbol>`
  dan merupakan rujukan pertama simbol itu, jadi nomornya tidak bisa asal
  diketik. Bukti BG map diverifikasi mesin lewat `--pair-bg-line` (baris
  `bl func_0804E9F4`), `--pair-bg-branch` (baris `movs r1, #tile` /
  `lsrs r1, rX, #0x10`), `--pair-bg-tile`, dan `--pair-bg-palette`; tool
  menolak bila baris bukan `bl func_0804E9F4`, tile tidak ditetapkan di
  branch, indeks palet di `[sp]` berbeda, atau palet tidak di-DMA ke
  `0x05000000 + palette*0x20` (literal `@ =0x0500xxxx` maupun `+ sl`).
  Hasilnya blok `pair.bg_map` (`asm`, `line`, `branch`, `tile`, `palette`,
  `palette_dma`, `bank`) yang dicek ulang `verify`.
  Contoh: `python3 tools/assets/sprite2gba.py verify --json
  assets/gfx/sprites/gUnk_087518CC.json`.
- `tools/assets/pal2gba.py` — codec palet: `.pal` JASC (8 bit/kanal, source
  kanonik) ⇄ u16 GBA BGR555 little endian. `decode` menulis `.pal` (+PNG
  swatch dari `render_palette`), `encode --json <metadata> --out <bin>`
  dipakai `asset_manifest.py`, `--check` menguji round-trip 5 bit eksak.
  `coverage()` menghitung total dari jumlah warna `.pal` (butuh path JSON)
  dan hanya range `padding` terdokumentasi (mis. warna setelah jumlah yang
  disalin call-site) yang dihitung raw; `asset_verify` menolak blok
  `coverage` yang tidak sama dengan hitungan itu.
- `tools/assets/asset_verify.py` — gate per-aset Fase 0: validasi
  `assets/manifest.json` terhadap `tools/assets/manifest_schema.json`, cek
  sha256 slice ROM, jalankan encoder dari source (byte + hash harus sama),
  pastikan berkas source ada, dan laporkan `.incbin "baserom.gba"` yang
  belum dialihkan sebagai catatan (`--require-switched` membuatnya gagal).
  Bila `build/assets/<symbol>.bin` lebih baru daripada JSON/PNG/PAL + tool
  encoder (termasuk `lz70.py`, `decompress.py`, `asset_inventory.py`) dan
  byte-nya sama dengan slice ROM, encode ulang dilewati; `--force-encode`
  memaksa encoder jalan untuk audit independen. `--symbol X` untuk satu aset,
  `--json` untuk laporan mesin, exit 1 bila ada masalah. Khusus `kind: palette`, `evidence` yang mengutip tapak
  salinan (`<berkas>.s:<baris>`) dicocokkan dengan asm: tapak yang menambah
  indeks slot sebelum salinan wajib menyebut basis + slot, dan tapak bertujuan
  tetap wajib menyebut konstanta tujuannya — evidence yang menulis
  `0x05000200` padahal byte-nya masuk ke `0x05000200 + slot*0x20` ditolak.
  Untuk `kind: tiles4bpp`, setiap kutipan `<berkas>.s:<baris>` wajib menunjuk
  baris `bl` salinan/loader (`Unpack`, `func_08008E64`, `func_08008EB8`,
  `func_08008F0C`, `func_0805E6CC`, atau `memcpy`) dan literal
  `@ =gUnk_...` terdekat wajib simbol aset itu; kutipan baris non-salinan
  atau simbol lain ditolak. Panjang `<n> B` yang diklaim juga dicocokkan
  dengan register panjang asm (`r3` untuk `func_08008F0C`, `r2` untuk
  `func_08008E64`/`memcpy`); panjang yang tidak terlacak atau berbeda gagal.
- `tools/assets/lz70.py` — encoder `0x70` untuk format `000`
  (atom0/lzss0/diff0), atom0/lzss2 (`020`/`023`/`024`), atom0/lzss3
  (`030`/`033`), serta huffman4/huffman8 (`1xx`/`2xx`, termasuk lzss0/2/3
  dan diff 0..4): header `(size<<8)|0x70`, format byte di dalam bitstream.
  Huffman memakai pohon header asli (`parse_huffman` -> `counts`/`leaves`)
  seperti decoder membacanya, lalu `encode_huffman` menurunkan ulang token
  LZSS dan mengodekan literal dengan pohon itu; run lzss0 tetap byte mentah.
  Pohon diperlakukan sebagai header, sama seperti tangga LZSS, bukan
  diturunkan dari frekuensi.
  Lzss0 memakai tangga jarak 2 entri dengan perintah literal/run-length/lookup;
  lzss2 memakai tangga 7 entri, literal tunggal, dan escape VLI untuk blok
  literal >=9 B atau match >18 B; lzss3 memakai tangga 3 entri dan unit 2 B
  (match minimal 2 unit, escape literal >=9 pasang). API: `parse_lzss2`/
  `encode_lzss2` dan `parse_lzss3`/`encode_lzss3` (`diff_encode` membalik
  filter diff 1..4). `encode` (greedy),
  `encode --optimal` (dynamic programming biaya bit), atau `encode --parity`:
  aturan tokenisasi encoder asli yang terbukti byte-identik untuk stream
  format `000` — match **terpanjang** di seluruh jendela (seri → jarak
  terdekat), match jarak 1 tidak dipakai (byte berulang ditangani run), run menang bila
  panjang utuhnya >= match (run 127 B dihitung utuh walau token dipotong 65 B),
  literal berhenti sebelum run>=2 atau match
  berikutnya. Indeks match mencakup byte di dalam literal
  yang sedang berjalan, jadi match boleh menunjuk ke awal literal itu. `probe`
  menguji stream P0 terhadap `baserom.gba`: replay token asli, roundtrip
  decode, dan byte-identik greedy/optimal/parity. `--sweep` mencoba tangga
  1..12. `--write-report` menulis `assets/0x70/encoder_probe.md`. Exit 1 bila
  ada stream yang belum byte-identik; tool ini tidak mengubah status manifest —
  keputusan itu tetap di `stream_audit.py`, yang memakai encoder `parity`
  untuk `000`, `encode_lzss2` untuk atom0/lzss2, `encode_lzss3` untuk
  atom0/lzss3, dan `encode_huffman` untuk `1xx`/`2xx`, dan hanya menaikkan
  status bila compressed byte-identik. Aturan
  lzss2: match terpanjang (seri -> terdekat), match 3 B di tiga byte terakhir
  tidak dipakai, literal escape mulai 9 B, match >18 B lewat escape. Aturan
  lzss3 sama tetapi per unit 2 B: match minimal 4 B, pendek 4..18 B, literal
  escape mulai 18 B.
- `tools/assets/compressed_bank.py` — container `0x70` bertingkat: prefix
  mentah yang terbukti (stempel/palet) + beberapa stream. Metadata menyimpan
  prefix hex, entri u16 per stream, dan header kompresi asli (tangga LZSS atau
  pohon huffman), lalu `encode` menyusun ulang prefix + stream dan menolak
  bila panjang packed tidak cocok. `decode` menemukan batas prefix/stream dari
  rantai yang berakhir tepat di ujung blob; `verify` membandingkan byte dengan
  slice ROM. Dipakai `gUnk_086DC3F4` (stempel 3x2 + stream 134/030/023).
- `tools/assets/tile4bpp.py` — codec minimal tile/font 4bpp untuk pilot aset.
  `decode` mengubah slice ROM menjadi PNG truecolor 8-bit (16 warna indeks
  grayscale) + JSON berisi `tile_offset`/`tile_trim`, header/ekor sebagai
  `header_words`/`tail_words` (u32) atau `*_bytes` (u8), symbol, offset/ukuran,
  dan SHA-256 ROM. `encode` membalik PNG indeks dan menulis header/ekor dari
  field itu; `header_hex`/`tail_hex` ditolak. `padding` di manifest tetap
  dokumentasi "tanpa pembaca", sedangkan `coverage()` menghitung tile PNG +
  header/tail eksplisit sebagai proven (rasio 1.0); nibble rendah untuk piksel
  x genap. `verify`
  membandingkan byte dan SHA-256 hasil encode dengan slice ROM dan exit 1 bila
  beda. Tool ini **tidak** menyunting `asm/data/*.s`; penggantian `.incbin`
  hanya boleh dilakukan setelah gate ini HIJAU (dan `make compare` HIJAU).
  Contoh: `python3 tools/assets/tile4bpp.py verify --json
  assets/gfx/fonts/clock.json`. Source pilot `tiles4bpp` ada di
  `assets/gfx/fonts/` (`clock`); `unk_0872de44` memakai `font_container.py`.
- `tools/assets/map2bin.py` — codec **tilemap BG 16-bit** (`kind: tilemap`):
  source kanoniknya grid entri u16 di JSON (`entries` + `tilemap`
  `width`/`height`, default urut baris; `tilemap.order="column"` bila sumber
  disalin kolom demi kolom, `tilemap.padding` untuk ekor u16 nol), bukan PNG — menggambar peta butuh tileset pasangan yang
  belum tentu terbukti, sedangkan yang dibuktikan call site adalah grid dan
  tujuan salinnya. `encode` menolak grid yang jumlah entrinya tidak sama
  dengan `width*height + padding` **atau** dengan `rom.size`, jadi lebar
  tebakan tidak bisa lolos. `decode` memotong slice ROM menjadi metadata
  (`--width/--height` wajib, bukan heuristik; `--padding`/`--order` opsional),
  `verify` membandingkan byte + SHA-256 hasil encode
  dengan slice ROM. Tidak menyentuh `asm/data/*.s`. Contoh: `python3
  tools/assets/map2bin.py verify --json assets/gfx/maps/gUnk_08755230.json`
  (30x13 entri, 780 B).
- `tools/assets/tilemap_bank.py` — codec **bank layer peta** (`kind:
  tilemap_bank`) untuk simbol yang memuat banyak grid u16 berukuran berbeda,
  dirujuk descriptor `0x18` B `func_080A5BD8` (u8 lebar/tinggi, tiga pointer
  layer di `+4/+8/+0xc`, blockmap `+0x10`, blocktable `+0x14`). Source kanonik
  tetap satu JSON per simbol, tetapi memuat `layers` (`offset`, `width`,
  `height`, `descriptor`, `slot`, `entries` urut baris), `payload_segments`
  (rentang yang dimulai pointer table), dan `raw` (hex byte yang tidak
  dirujuk); semuanya harus bersama-sama menutup `rom.size`. Tiap segmen
  payload wajib punya `kind` konkret dan byte-nya ditulis dari field kind itu:
  `palette` (`colors` BGR555 < 0x8000), `tilemap` (`width`/`height`/`entries`
  u16; ekor setelah grid wajib `tail: {kind: alignment, size: n}` — hanya
  padding nol yang membuat pointer berikutnya 4-byte aligned, bukan `tail_hex`),
  `frames4bpp` (`header` `[tile/frame, frame]`, `tiles_per_frame`, `frames`,
  `tiles_png` + `tiles_wide`: PNG indeks 0..15 dengan `R=G=B=indeks*17`,
  path relatif repo, tile urut baris; `tiles_hex` ditolak; blok
  `tile_animations` memakai field yang sama), dan `packed` (`codec: unpack`, `format`, `ladder`,
  `huffman` bila ada, `unpack_size`/`unpack_flags`, `tokens`,
  `unpacked_sha256`). Segmen `packed` **tidak** menyimpan byte terkompresi:
  token LZ-nya yang disimpan, lalu `tools/assets/popuri.py` menulis ulang byte
  terkompresi dari token itu (`l:<hex>` literal, `m:`/`M:` match) dan decoder
  `decompress.py` dijalankan untuk memeriksa panjang + SHA-256 hasil
  dekompresi. `encode` menulis tiap segmen pada offset-nya, sedangkan
  `asset_verify` merekonstruksi tiap segmen dari field semantiknya dan menolak
  bila byte hasilnya != ROM, kind asing, header `packed` tidak cocok, `hex`
  mentah muncul lagi, ekor tilemap bukan padding alignment, atau hasil
  dekompresi tidak cocok dengan `unpack_size`/`unpacked_sha256`.
  Setiap alamat di `pointer_sources` harus menunjuk tepat ke awal segmen, tanpa
  celah atau tumpang tindih. `coverage` dihitung `tilemap_bank.coverage()` dari
  byte yang benar-benar direkonstruksi: entri layer, palet, entri tilemap,
  `frames4bpp`, blok `tile_animations`, dan segmen `packed` yang punya
  `tokens` (byte terkompresi ditulis dari token, hasil dekompresinya dicek
  hash). Yang tetap `raw_bytes`: padding alignment, tail tilemap, dan byte
  tanpa pemilik. Segmen `packed` ber-`hex` dan tile 4bpp ber-`tiles_hex`
  ditolak `coverage()`, jadi blob buram tidak bisa menaikkan angka proven.
  `asset_verify` menolak blok `coverage` yang tidak sama dengan hitungan itu. `decode` memindai
  tabel descriptor (`--descriptor-start/--descriptor-end`, record `0x18`) dan
  menolak layer yang tumpang tindih; `encode` menolak celah, tumpang tindih,
  atau jumlah entri tidak sama dengan `width*height`; `verify` membandingkan
  byte + SHA-256 dengan slice ROM. Contoh: `gUnk_086EAD8C` (58 layer) dan
  `gUnk_086DE7F4` (45 layer) di `assets/gfx/maps/`.
- `tools/assets/stream_bank.py` — codec **kontainer `0x70` utuh**
  (`kind: stream_bank`): blob yang seluruh isinya stream `0x70` bersambung
  tanpa celah, jadi tidak ada prefix mentah seperti `compressed_bank`.
  Source kanoniknya payload hasil decode per stream (`assets/0x70/bin/*.bin`)
  + header kompresi asli (tangga LZSS / pohon huffman) yang diturunkan dari
  byte ROM; `encode` menulis ulang tiap stream dengan `lz70` (parity untuk
  format `000`, `lzss2`/`lzss3` untuk `02x`/`03x`, `encode_huffman` untuk
  `1xx`/`2xx`) lalu menyambungnya, dan menolak panjang packed yang berbeda.
  `coverage()` menghitung semua byte sebagai proven (tidak ada raw), dan
  `verify` membandingkan byte + SHA-256 dengan slice ROM. `decode` mengambil
  layout stream dari `assets/0x70/manifest.json` dan menolak celah antar
  stream. CLI: `python3 tools/assets/stream_bank.py decode --symbol S
  --offset 0x... --size 0x... --json assets/gfx/streams/<id>.json`, `encode`,
  `verify`. Dipakai 53 simbol kontainer `0x70` yang dulu masih
  `.incbin "baserom.gba"`.
- `tools/assets/popuri.py` — codec **Unpack** (`format popuri`) dua arah:
  `parse_bytes()` membaca stream terkompresi menjadi `format`, `ladder`,
  tabel `huffman`, dan `tokens`; `assemble()` menulis byte terkompresi dari
  field itu (byte-identik dengan ROM); `decode()` memanggil decoder
  `tools/scripts/decompress.py` yang sudah ada. Dipakai segmen payload
  `packed` di `tilemap_bank.py`. CLI: `python3 tools/assets/popuri.py verify
  --rom baserom.gba --offset 0x6EAD20` (parse + assemble + dekompresi),
  `parse` untuk melihat ringkasan. Format token: `l:<hex>` literal run,
  `m:<idx>,<dist>,<len>` match pendek, `M:...` match panjang; `idx` adalah
  cabang ladder dan ikut disimpan karena decoder menerima dua bentuk untuk
  panjang yang sama.
- `tools/assets/table.py` — codec `kind: table` untuk tabel/struct yang belum
  punya codec domain. Source JSON berisi `segments` dengan `format` `u8`,
  `u16le`, `u32le`, atau `tiles4bpp` (`png` + `tiles_wide` + `tiles`, PNG
  indeks 0..15 dengan aturan warna yang sama seperti tile peta); `format:
  hex` ditolak. `encode` menolak celah, tumpang tindih, nilai di luar
  rentang, atau source yang tidak menutup seluruh `rom.size`. Tulis
  `evidence`/`note` tentang bagian yang terbukti dari call site; arti tabel
  tetap `unidentified` sampai call site membuktikannya. `coverage()`
  menghitung semua byte dari field (u8/u16/u32/PNG), jadi rasio 1.0 selama
  tidak ada `hex`. Contoh: `assets/gfx/tables/gUnk_08529994.json` (header u16
  + blok gaya PNG) dan `gUnk_08698B00.json` (0x80 B pertama disalin ke lapis).
- `tools/assets/font_container.py` — codec container font/objek
  `func_0805E6CC` (bukan tile datar). `decode` mengikuti pembacaan fungsi:
  enam tabel berhitung — A 4 B, B 16 B, C 8 B, D 32 B, E 32 B, F 8 B — lalu
  ekor T (u16 count + count×u32); tiap tabel diawali 4 B (u16 count + 2 B pad).
  Kalau slice punya byte sesudah ekor T (mis. palet 32 B atau payload yang
  dibaca pemanggil lain), sisa itu disimpan `source.tail_words` (u32) atau
  `tail_bytes` (u8), bukan hex; framing “header + tile datar” tetap ditolak
  karena tabel T tidak berakhir di dalam prefix container. Tabel berentri
  32 B dirender ke PNG; tabel lain menyimpan `values` (baris u32 sesuai
  `entry_size`) dan `pad` u16 eksplisit, bukan hex. `coverage()` menghitung
  tabel/tile dan `tail_words` sebagai proven (rasio 1.0) karena semuanya
  ditulis dari field. `verify`
  menuntut byte dan SHA-256
  hasil encode sama dengan slice ROM. Tool ini **tidak** menyunting
  `asm/data/*.s`. Contoh: `python3 tools/assets/font_container.py verify
  --json assets/gfx/fonts/unk_0872de44.json`. Container 0x75352C, 0x753608,
  0x7536E4, 0x7537D0, 0x754674, 0x754C0C, 0x755154, 0x752D984, 0x76F2FAC,
  0x7409E4 juga memakai codec ini
  (`unk_08753*.json`, `unk_08754*.json`, `unk_08755154.json`); semuanya lolos
  `verify` MATCH dan `.incbin`-nya sudah dialihkan.
- `tools/assets/glyph_font.py` — codec font glyph 8x12 untuk blob yang dibaca
  `func_080D0D28` (record tetap, bukan container `func_0805E6CC`). `--bpp 1`:
  12 B/record, 1 byte per baris, bit MSB = piksel kiri. `--bpp 2`: 24 B/record,
  2 byte per baris = bitplane 0 lalu bitplane 1 (piksel = `p0 | p1<<1`); bitplane
  terpisah karena glyph blok asli memuat nibble 0xF yang mustahil untuk 2bpp
  ber-nibble. PNG kanonik menyimpan indeks sebagai grayscale `indeks*17`, jadi
  `encode` menolak piksel yang bukan kelipatan 17 atau melebihi `2**bpp`.
  `source.bpp`/`columns`/`count` di JSON menentukan ukuran PNG yang sah. Contoh:
  `python3 tools/assets/glyph_font.py verify --json
  assets/gfx/fonts/glyph_084f90cc.json`. Dipakai blob 0x4F90CC (487 glyph 1bpp)
  dan 0x4FA9A0 (6922 glyph 2bpp).
- `tools/assets/glyph_index.py` — codec **tabel indeks glyph s16**
  (`kind: glyph_index`) yang dibaca `func_080D0D28` sebelum record glyph:
  array `int16` little-endian, nilai < 0 berarti karakter tanpa glyph (pemanggil
  mengosongkan sel 8x12 dengan `memset 0x80`). `source.entries` di metadata
  JSON adalah source kanonik (satu nilai per baris, urut indeks); `encode`
  menolak jumlah entri yang tidak sama dengan `source.count` maupun
  `rom.size/2`, dan nilai di luar rentang s16. `--encoding byte` untuk tabel
  256 entri kode `0x00`–`0xFF` (indeks `kode*2`); `--encoding shift-jis` untuk
  tabel 7938 entri kode 2-byte yang dipetakan `func_080D0CD4` menjadi
  `189*lead + (trail - 0x40)`. Contoh: `python3 tools/assets/glyph_index.py
  verify --json assets/gfx/fonts/glyph_index_08523290.json`. Dipakai
  0x4FA7A0 (256 entri) dan 0x523290 (7938 entri).
- `tools/assets/stream_audit.py` — audit seluruh stream `0x70` yang sudah
  diekstrak: blob utuh (`assets/0x70/manifest.json`) **dan** bank tertanam
  (`assets/0x70/embedded_manifest.json`). Hash compressed dihitung dari slice
  ROM (`offset` blob + `offset` stream, panjang `packed`), hash decoded dari
  `assets/0x70/bin/` atau `assets/0x70/extern/`; stream bank tertanam dicek
  ulang terhadap sha256 `embedded_manifest.json`, lalu setiap stream diberi
  status dan kolom `sumber` (`blob 0x70`/`bank tertanam`).
  Status `ok` hanya diberikan bila encoder menghasilkan byte compressed yang
  sama; semua format yang sudah diekstrak (atom0 dan huffman4/8) kini punya
  encoder, jadi `opaque` tinggal penanda stream yang encoder-nya gagal/berbeda.
  Prioritas `P0`–`P3` (atom0/lzss0 → atom0/lzss → huffman4 → huffman8) hanya
  urutan kandidat implementasi, bukan izin mengganti `.incbin`. Hasil reencode di-cache di
  `build/.cache/stream_reencode.json` dengan kunci hash input + hash
  `lz70.py`/`decompress.py`/tool ini: run pertama membayar encode penuh, run
  berikutnya hanya verifikasi hash (detik), dan perubahan encoder otomatis
  membatalkan cache. Menulis `assets/0x70/reencode_manifest.json` dan
  `docs/decomp/ASET-0X70-REENCODE.md`; `--check` exit 1 bila laporan basi.
  Gate yang sama dipasang di `check_docs.py`, jadi hash semua stream tidak
  bisa basi tanpa ketahuan walau tidak ada yang ingat menjalankan `--check`.
- `tools/assets/font_palettes.py` — telusur palet `gUnk_0875A440` + 12
  wadah font/objek dari call site. Status `terbukti` hanya bila di fungsi
  call site itu ada pemanggilan `func_08008E64`/`func_08008EB8`/`Unpack`
  yang **argumen sumbernya** (r0, dilacak mundur sampai penugasan
  terakhirnya) adalah simbol palet dan **tujuannya** (r1) di
  `0x05000000`-`0x050003FF`. Memuat simbol palet + menulis palet RAM di
  fungsi yang sama tidak cukup; register yang ditimpa (termasuk seluruh
  daftar `pop`/`ldm`, bentuk rentang `rX-rY` ikut dikosongkan) atau lewat
  `bl` lain dianggap tidak diketahui. Selain itu `belum terbukti`. Blob palet yang kebetulan
  berdekatan dicatat terpisah sebagai `positional_candidates` (bukan bukti).
  Menulis `assets/gfx/fonts/palettes.json` + dokumen generate
  `docs/decomp/PALET-FONT.md`; `--check` exit 1 bila basi.
- `tools/assets/embedded_streams.py` — bank stream `0x70` yang **tertanam**
  di blob mentah (`gUnk_0869B284`, `gUnk_086D74F8`, `gUnk_086DC3F4`)
  diekstrak ke
  `assets/0x70/extern/stream_<alamat>_<buka>_<sha8>.bin` + PNG di
  `assets/0x70/png/`, dicatat di `assets/0x70/embedded_manifest.json`, dan
  ditabelkan di dokumen generate `docs/decomp/ASET-0X70-TERTANAM.md`. Offset
  awal bank dihitung dari rantai stream yang berakhir tepat di ujung blob,
  bukan daftar offset tangan; byte sebelumnya disimpan sebagai
  `prefix_sha256`. Bank ketiga tidak ditunjuk satu call site bank:
  tabel descriptor `0x08106860` menunjuk tiga stream-nya satu per satu
  (`0x086DC400`/`4C4`/`4D0`, 30x26 = 1560 B tiap stream) dan prefix 12 B-nya
  stempel 3x2 yang disalin `func_080AA540`, jadi simbol asm 0x158 B memuat
  stempel + bank sekaligus. `--check` merender ulang PNG dari bin `extern/` dan
  memeriksa sha256 bin + PNG **tanpa membaca ROM**; `--check --quick`
  melewati render bila sidik jari input sama dengan render terakhir yang lolos
  (`build/embedded_check.stamp.json`) dan tetap memeriksa hash berkas.
  `check_docs.py` memanggil jalur `quick` itu (bersama jalur `quick`
  `extract_assets.py`) sebagai gate PNG tutup sesi.

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

## Build dan lingkungan

- `split_asm_sections.py ASM OUT` — pecah `asm/<stem>.s` menjadi section per
  fungsi/chunk data (`.text.<stem>.<addr8>`, chunk tanpa label alamat jadi
  `.<funcaddr>.zz`) supaya linker script bisa menyelipkan `src/<stem>.o` tepat
  di posisi fungsi asm yang dicabut. Dipanggil otomatis oleh Makefile untuk
  setiap `.o` asm; menjalankannya manual hanya untuk memeriksa hasil pecahan
  (OUT harus di luar `asm/`, mis. `build/`).
- `tools/migrate_proot.py` — jalur migrasi di proot/Termux saat `make compare`
  belum bisa hijau: gate-nya zero-diff old-vs-new (link tidak menggeser satu
  byte) + judge MATCH per fungsi, hanya untuk modul pre-m4a
  (`interrupt`/`main`/`sram_*`). `migrate_one` me-revert otomatis bila gate
  MERAH. Modul pasca-m4a-shift tetap butuh baseline hijau penuh. Tidak
  menyentuh state JSON.

## Alat data/ROM (ad-hoc)

Utilitas kecil untuk membaca/menamai data ROM. Tiga di antaranya **menulis
ulang berkas asm di tempat** — jalankan hanya pada berkas yang sedang
dikerjakan, lalu periksa `git diff` (tool ini tidak punya `--check`).

- `symbols.py` — pustaka, bukan CLI: `from_elf(f)` menghasilkan pasangan
  `(alamat, nama)` untuk simbol `STB_GLOBAL` di `.symtab` ELF. Dipakai
  `dump_pointers.py`/`finddata.py`/`findiwrams.py`/`vtnames.py`; butuh
  pyelftools yang di-vendor di `python/`.
- `dump_pointers.py ELF ROM OFFSET COUNT` — cetak array pointer C
  (`void * gUnk_<alamat>[] = { ... };`) untuk COUNT u32 di ROM mulai OFFSET,
  setiap alamat dipetakan ke nama simbol ELF atau tetap literal. Read-only.
- `finddata.py ELF ASM...` — pindai baris `_08xxxxxx: .4byte 0x08xxxxxx`,
  cetak peta alamat -> simbol, lalu **tulis ulang asm**: literal
  `0x08xxxxxx` yang punya simbol diganti namanya. Verifikasi lewat
  `make compare`, bukan lewat tool.
- `findiwrams.py ELF ASM...` — sama untuk pointer IWRAM `0x03xxxxxx` di bawah
  `0x03007E00`; yang tidak ada di ELF dinamai `gUnk_<alamat>`. Juga
  **menulis ulang asm**.
- `vtnames.py ASM...` — ganti `gUnk_08xxxxxx` di rentang vtable
  `0x080E59EC-0x080E85E8` menjadi `vtable_unk_08xxxxxx`; tidak butuh ELF.
  Juga **menulis ulang asm**.
- `dump_item_tables.py ROM` — cetak tabel item game sebagai makro `o(...)`:
  TOOL 81 entri @`0x080EAB0C` (12 B: pointer nama, icon, pointer deskripsi),
  FOOD 171 @`0x080EDCD8` (16 B: nama, `is_drink`, stamina, fatigue, icon,
  deskripsi), ARTICLE 95 @`0x080EFED4` (12 B), PRODUCT 103 @`0x080F0348`
  (harga 15 bit + bit FOOD/ARTICLE, indeks item). Teks dibaca cp932; `tag` =
  nama di-uppercase dengan karakter non-alfanumerik jadi `_`. Read-only.
- `dump_schedule.py ROM ADDR` — decode `ScheduleInfo` di ADDR ke JSON:
  pointer `select_schedule`, daftar schedule (entri `{time, path}`; `time`
  dikonversi ke `HH:MM` mulai 06:00), dan daftar path (x/y awal, bitfield
  location/facing, titik 8 B tipe A `{instant, x|y}` atau tipe B
  `{x|y, speed, unk_04, facing}`). Path yang dipakai bersama diberi id dari
  alamat terurut. Read-only.
- `data_analysis.py` — pustaka, bukan CLI: `ROM.u8/u16/u32` (mask
  `0x1FFFFFF`) dan `ROMAnalyzer` yang menelusuri tipe berlapis (`T[n]`,
  `T*`, typedef terdaftar di `register_types`) sampai daun data. Dipakai
  `dump_schedule.py`.
- `schedule_to_c.py` — stdin JSON dari `dump_schedule.py` -> C: deklarasi +
  definisi `ScheduleInfo`, `Schedule const * const[]`, `Schedule`,
  `ScheduleEntry`, `PathInfo`, dan `PathPointA/B` (tipe titik dipilih dari ada/
  tidaknya `facing`); urutan emit tetap `si, sl, sc, se, pi, pp`, dan waktu
  `HH:MM` dikembalikan ke menit mentah. Tanpa argumen CLI.

## Regresi tool (`tools/tests/`)

`make test-tools` menjalankan semua modul lewat `tools/tests/run_parallel.py`:
tiap modul di proses terpisah (default sampai 6 worker, atur dengan
`FOMT_TEST_WORKERS`), jadi modul lambat tidak menahan modul lain. Hasil dan
exit code tetap `unittest` yang sama; `make test-tools-serial` menjalankan
`unittest discover` satu proses bila perlu membandingkan. Tidak menyentuh
build dan tidak menulis ROM. Berkas yang ada:
`run_parallel.py`, `test_cli.py`, `test_asset_manifest.py`, `test_asset_verify.py`,
`test_check_docs_aset.py`, `test_compressed_bank.py`, `test_embedded_streams.py`, `test_font_container.py`, `test_font_palettes.py`,
`test_glyph_font.py`, `test_glyph_index.py`, `test_lz70.py`, `test_map2bin.py`, `test_table.py`, `test_tilemap_bank.py`,
`test_raw_assets.py`, `test_split_asm_sections.py` (pengelompokan section asm:
pool/runa kontigu, `DECOMP-ABSORB`, rujukan label `.L*`),
`test_readme_stats.py`,
`test_sprite2gba.py`, `test_stream_audit.py`, `test_stream_bank.py`, `test_tile4bpp.py`.
`check_docs.py` menolak skrip `tools/**/*.py` yang belum disebut di berkas ini
(folder vendored dikecualikan), jadi tes baru tanpa entri menggagalkan gate.

## Prasyarat lingkungan

`fomt` wrapper di PATH men-set env judge; kalau tidak ada, lihat
[`../../skills/gba-decomp/PANDUAN.md`](../../skills/gba-decomp/PANDUAN.md)
bagian prasyarat ( `unset LD_PRELOAD`, `LIBCAPSTONE_PATH`, `FOMT_AGENT`,
`FOMT_AGBCC`, `FOMT_AS`, `FOMT_CPP` ).
