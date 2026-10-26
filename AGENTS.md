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
fomt --loop               # ulangi batch 20 sampai antrean habis (foreground)
fomt --loop 10            # sama, batch 10 per putaran
fomt --loop 20 --wait 2 code_linkonce.s --retry  # loop modul itu + ulangi failed
```

Statistik (`total`, `berhasil`, `sisa`, sebaran status, `batch M/D`) dicetak
setiap fungsi selesai dan di akhir tiap batch. Mode `--loop` mengulangi batch
sampai pending/drafted habis — tetap foreground (bukan background), tiap fungsi
dan ringkasan `batch#N` dicetak langsung; berhenti dengan Ctrl-C atau saat
antrean kosong. Catatan loop:

- failed yang drafnya tidak disentuh TIDAK ikut antre lagi (tidak macet di
  fungsi gagal yang sama); hanya draf yang diperbaiki manual yang di-judge
  ulang otomatis.
- `--retry` memaksa semua failed diulang — gabungkan dengan `--loop` hanya
  bersama filter modul, kalau tidak ditolak (akan berputar selamanya).
- Klaim per-batch dilepas di akhir tiap batch (`release_all`), jadi agent lain
  bisa mengambil alih di jeda `--wait S` (default 5 detik).

## Alur per fungsi

`scan` -> `draft` (m2c) -> `judge` (agbcc `-O2`, byte-identik vs asm) ->
`promote` (ke `decomp/promoted/<modul>.cc`) -> `autopush`.

- State: `decomp/state/progress.json` (ditulis atomik di bawah `flock`).
- Draf: `decomp/drafts/<nama>.c`.
- Log judge: `decomp/logs/judge_<nama>/<agent>/`.
- Klaim basi diambil alih setelah `FOMT_CLAIM_TTL` detik (default 1800).
  `FOMT_CLAIM_TTL=0` hanya bila tidak ada agent lain yang jalan.

## Kalau DIFF (perbaikan manual draf)

DIFF jarang kesalahan logika — mayoritas draf m2c mentah yang tidak
dikompilasi agbcc apa adanya. Buka `decomp/drafts/<nama>.c` + log di
`decomp/logs/judge_<nama>/<agent>/`, kenali polanya, perbaiki, jalankan
`fomt` lagi (draf yang mtime-nya lebih baru dari `judged_mtime` otomatis
ikut antre judge ulang):

1. **`request for member 'unk*' in something not a structure or union`**
   (paling sering; fungsi C++ `intro_scene.s`/`new_game.s`): argumen masih
   `void *` tapi dipakai `arg->unkX`. Sanitizer biasanya sudah membuatkan
   `typedef struct GenObj` — kalau draf belum memilikinya, jalankan `fomt`
   sekali lagi (resanitasi otomatis menulis ulang draf mentah). Kalau masih
   gagal: ganti nama `GenObj` menjadi tipe bersama dari fungsi MATCH
   (`Vtbl`/`Obj` di `decomp/promoted/code_linkonce.cc`), atau tulis struct
   sendiri dari offset akses + lebar (`ldrb`=u8, `ldrh`=u16, `ldr`=s32/ptr).
   Virtual-call `t->unkA->unkB(...)`: cast eksplisit
   `((void (*)(void *,...))(t->unkA->unkB))(t, ...)`.
2. **`extern s32 .Lxxxxxx` / `syntax error before '.'`**: label literal-pool
   bocor ke C. Sanitizer `_label_addrs` menggantinya dengan nilai heksa dari
   blok asm — kalau draf masih memilikinya, jalankan `fomt` lagi untuk
   resanitasi; kalau nilai tak ketemu (label lompatan), ganti manual dengan
   konstanta dari ekor blok asm.
3. **`unksp0 undeclared` / `sp +` di badan**: m2c salah merekonstruksi stack
   (umum di fungsi dekompresi `Unpack`). Tulis ulang rangka stack manual
   dari asm, betulkan tipe parameter.
4. **Byte-DIFF (`byte +0xN: 0xAA vs ref 0xBB`)**: sudah kompilasi, tinggal
   codegen. Pecah kondisi `||`/`&&` satu baris jadi `if` bertingkat sesuai
   urutan asm; samakan urutan/tipe local stack.
5. **`M2C_ERROR` di draf**: kontrol aliran m2c gagal total — regenerasi
   tidak membantu. Tulis ulang fungsi dari asm.

Aturan berhenti: jangan mengulang fungsi yang sama tanpa perubahan draf
(`_queueable` juga tidak akan mengantrekannya lagi). Tulis catatan spesifik
di `note` via draf: apa yang dicoba, sisa diff, kecurigaan — agar jalan
berikutnya mulai dari attempt terbaik, bukan dari nol.

Konteks bersama: struct bernama yang terbukti dari fungsi MATCH (mis.
`Vtbl`, `Obj`, `S_*`) otomatis di-include saat judge
(`decomp/run.py:_shared_context`, dari `decomp/promoted/*.cc`; nama konflik
atau `GenObj` per-fungsi dikecualikan). Draf yang memakai nama tipe yang
sama ikut terbantu; draf yang mendefinisikan sendiri tipe bernama sama
tetap menang (C menolak redefinisi — judge yang menentukan).

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
