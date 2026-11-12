# Rencana translasi asm → C

Dokumen kerja untuk memindahkan seluruh kode game dari `asm/*.s` ke `src/*.cc`
(C++ bergaya C, sesuai `Makefile`), dengan ROM tetap **byte-identik**.

Aturan invarian ada di [`AGENTS.md`](../AGENTS.md); pola perbaikan draf di
[`decomp/POLA-DIFF.md`](./decomp/POLA-DIFF.md); gerbang migrasi di
[`decomp/MIGRATE.md`](./decomp/MIGRATE.md); perintah harian di
[`ops/COMMANDS.md`](./ops/COMMANDS.md). Dokumen ini **tidak** menyimpan angka
progres — angka selalu diambil dengan perintah di §2.

---

## 1. Tujuan dan definisi selesai

**Tujuan:** semua kode yang saat ini berbentuk asm dapat dibaca dan diubah
sebagai C, lalu di-build ulang menjadi ROM GBA yang identik byte-per-byte
dengan referensi.

**Definisi selesai proyek** (semua harus benar sekaligus):

1. Tidak ada lagi blok kode di `asm/*.s`; sisanya hanya `asm/data/*.s`
   (tabel/rodata yang belum dinyatakan sebagai C) atau sejumlah kecil
   pengecualian yang tercatat di §4.
2. Setiap fungsi tercatat `matched`/`promoted` di
   `decomp/state/modules/<stem>.json` dan bloknya ada di `src/<stem>.cc`
   dengan marker `DECOMP-MATCHED`.
3. `make compare` HIJAU dari tree bersih.
4. `python3 tools/scripts/audit_consistency.py` → masalah struktural 0 dan
   `python3 tools/scripts/check_docs.py` → 0 masalah.
5. `fomt verify` (bila diminta) melaporkan 0 DIFF.

**Definisi selesai per fungsi:** judge MATCH (byte-identik vs slice asm ref)
→ `migrate` HIJAU (masuk `src/`) → `make compare` HIJAU → commit.

---

## 2. Kondisi awal (cara mengukur, bukan angka statis)

```bash
fomt status                              # total / berhasil (src + promote-only) / sisa
python3 tools/scripts/migratable_failed.py   # failed yang lolos gerbang migrasi
python3 tools/scripts/audit_consistency.py   # konsistensi state vs src/ vs promoted/
git log --oneline -20                    # laju commit sesi terakhir
```

Ukuran pekerjaan yang tersisa diukur per modul (jumlah fungsi **dan** byte),
karena distribusinya sangat miring: sedikit fungsi besar mendominasi byte,
banyak fungsi kecil mendominasi jumlah. Prioritaskan berdasarkan **byte** bila
targetnya "modul selesai", berdasarkan **jumlah** bila targetnya menambah
kepercayaan pola.

---

## 3. Prinsip kerja

1. **MATCH adalah satu-satunya gerbang.** C yang "kelihatan benar" tetapi tidak
   byte-identik tidak boleh masuk `src/`, karena ROM tidak bisa dibangun ulang.
2. **asm tetap jadi referensi**, bukan sumber yang diedit. Blok `src/`
   menggantikan blok asm lewat mekanisme modul split / rantai ekor.
3. **Satu fungsi satu commit-note.** Setiap commit menyebut fungsi, alasan
   bentuk C-nya, dan bukti (compare/audit). Aturan R6 di `AGENTS.md`.
4. **Cap 5 judge per fungsi.** Setelah itu parkir + regenerasi draf m2c murni +
   catat di `note` shard. Jangan mengulang fungsi tanpa perubahan struktur.
5. **Temuan masuk dokumen yang ada** (R8), bukan laporan sesi baru.

---

## 4. Taksonomi fungsi dan perlakuan

| Kelas | Ciri | Perlakuan |
|---|---|---|
| **A. Straight-line** | tanpa panggilan/cabang, store/load berurutan | target utama; perbaiki lebar akses (`width_mismatch.py`) lalu judge |
| **B. Pola berulang** | konstruktor vtable, loop `ldm/stm` + mask, salinan blok | buat resep di `POLA-DIFF.md`, transfer ke fungsi bersaudara tanpa judge berulang |
| **C. Wall agbcc** | sisa diff hanya regalloc/scheduling: rumah register, `push` save-set, hoist konstanta, layout `beq/bne` | coba 2–3 varian struktur; bila tetap, pin `__asm__("rN")`; bila pin tidak menutup, parkir |
| **D. SKIP permanen** | `data asing ... ekor`, grup gabungan, modul tail-only (`hardware.s`, `code_linkonce.s`, `code_actor_0809BFE8.s`), `butuh tulis manual callee` | tidak dikejar. Untuk tail-only: pindahkan **berurutan dari ekor**. Untuk data asing: tunggu pemilik datanya dipindah |
| **E. Data/rodata** | tabel, string, jump table di `asm/data/*.s` | fase terpisah; ubah ke C (`const` array/struct) dengan gate byte-hash, bukan judge fungsi |

Catatan penting dari sesi-sesi sebelumnya: kelas C adalah **penyebab paling
umum** kegagalan berulang. Tanda-tandanya: diff tinggal 1–3 instruksi yang
berpindah register, `push` berbeda satu register, atau konstanta yang
dimaterialisasi di tempat berbeda. Hentikan lebih cepat; jangan sapu varian.

---

## 5. Fase pengerjaan

### Fase 0 — instrumentasi (1 sesi)

- [x] Skrip `tools/scripts/plan_stats.py`: tabel per modul (failed/match,
      byte failed/byte match, total, distribusi ukuran) + `--json`.
- [x] Skrip `tools/scripts/wall_registry.py`: kumpulkan `note` berisi
      "parkir" dari semua shard → daftar wall + alasan + attempt + `--json`.
- [ ] Pastikan `make compare`, `audit_consistency.py`, `check_docs.py` hijau
      sebagai baseline sesi.

**Exit:** dua skrip di atas bisa dijalankan dan keluarannya dipakai memilih
target hari itu.

### Fase 1 — habiskan kelas A (per modul prioritas)

- [ ] Urutkan modul berdasarkan byte failed; ambil 2 modul per sesi.
- [ ] Untuk setiap fungsi: `fomt 10 --migratable`, baca diff, perbaiki lebar
      akses/tipe balik, judge, `migrate`, `make compare`, commit.
- [ ] Setiap pola baru yang terbukti → tambahkan entri bernomor di
      `POLA-DIFF.md` beserta fungsi pembuktinya.

**Exit:** tidak ada lagi fungsi ≤128B tanpa wall di modul yang dipilih.

### Fase 2 — pola berulang (skala)

- [ ] Kelompokkan sisa fungsi per kemiripan asm (konstruktor vtable,
      `ldm/stm` + mask, salinan struct, akses tabel).
- [ ] Tulis satu "resep" per kelompok + contoh pembukti; gunakan
      `cc_probe.py`/`try.sh` untuk menguji varian tanpa memakai kuota judge.
- [ ] Transfer resep ke fungsi bersaudara; judge hanya versi final.

**Exit:** biaya per fungsi kelas B turun (satu resep melayani banyak fungsi).

### Fase 3 — serang kelas C secara sistematis

- [ ] Untuk setiap wall: catat pola diff persisnya (register mana, instruksi
      mana) di `POLA-DIFF.md` §wall, plus apakah pin/permuter/urutan statement
      sudah dicoba.
- [ ] Bila wall berhasil ditembus satu kali, cari semua fungsi dengan pola
      sama dan terapkan serentak.
- [ ] Bila tidak: parkir permanen dengan alasan tertulis.

**Exit:** semua wall punya status jelas (tertembus / parkir), tidak ada yang
"menggantung".

### Fase 4 — modul tail-only

- [ ] Pindahkan fungsi dari **ekor** modul (`hardware.s`,
      `code_actor_0809BFE8.s`, `code_linkonce.s`) satu per satu; setiap
      pemindahan harus membuat ekor baru tetap bisa dirakit.
- [ ] Verifikasi `make compare` setiap langkah; jangan pindah dua fungsi
      sekaligus.

**Exit:** modul tail-only habis atau tersisa blok yang memang SKIP permanen.

### Fase 5 — data & rodata

- [ ] Inventaris `asm/data/*.s`: mana yang sudah dirujuk C, mana yang belum.
- [ ] Ubah tabel ke C (`const` array/struct) bila pemiliknya sudah ada di
      `src/`; gate-nya hash byte, bukan judge.
- [ ] Jangan menyentuh data yang belum jelas pemiliknya (risiko drift).

**Exit:** hanya `asm/data/*.s` yang belum punya pemilik C yang tersisa.

### Fase 6 — penutupan

- [ ] `fomt verify` penuh, `make compare`, audit, docs check.
- [ ] Hapus/arsipkan `asm/*.s` yang sudah kosong; perbarui `Makefile` bila
      perlu.
- [ ] Catat pengecualian final (kalau ada) di §4 dokumen ini.

**Exit:** definisi selesai §1 terpenuhi.

---

## 6. Irama kerja per sesi

1. Tarik baseline: `make compare`, `audit_consistency.py`, `check_docs.py`.
2. Pilih target dari `plan_stats.py` (2 modul) + `wall_registry.py` (hindari
   yang sudah parkir).
3. Kerjakan 3–6 fungsi: draf → judge → migrate → compare; commit per
   kelompok yang logis (bukan `git add -A`).
4. Setiap temuan pola: tulis di `POLA-DIFF.md` pada commit yang sama.
5. Tutup sesi: `fomt status`, commit sisa pekerjaan, push setelah diminta.

---

## 7. Tooling yang perlu ditambah (bertahap)

| Alat | Kegunaan | Prioritas |
|---|---|---|
| `plan_stats.py` | tabel byte/fungsi per modul untuk prioritas | Fase 0 |
| `wall_registry.py` | rekap parkir + alasan, cegah pengulangan | Fase 0 |
| `pattern_scan.py` | cari fungsi dengan pola asm tertentu (mis. `ldm/stm` 8×) | Fase 2 |
| `judge_batch.sh` | jalankan judge per modul dengan log ringkas (R7) | Fase 1 |
| dashboard `fomt plan` | ringkasan target + sisa per modul | Fase 3 |

Semua alat baru wajib: keluarannya ringkas (R7), tidak menulis di dalam repo
selain state/draf, dan didokumentasikan di `ops/TOOLS.md` pada commit yang sama.

---

## 8. Risiko dan mitigasi

| Risiko | Mitigasi |
|---|---|
| Wall agbcc menelan waktu | cap 5 judge, pin maksimal 2 varian, parkir + catat |
| Draf manual hilang karena batch berikutnya | edit + judge dalam satu perintah; regenerasi eksplisit saat parkir |
| Blok duplikat di `promoted/` | selalu `git diff decomp/promoted/` setelah batch; rujuk `MIGRATE.md` §2 |
| `src/` dan asm berbeda tanda tangan | samakan string tanda tangan (MIGRATE §1), bukan cast liar |
| Dokumen usang | angka hanya lewat perintah; `check_docs.py` menjaga ukuran + rujukan |
| Dua agent bentrok | `--agent <nama>` unik per sesi (R5) |

---

## 9. Definition of done per tingkat

- **Fungsi:** MATCH + migrate HIJAU + `make compare` HIJAU + commit dengan
  alasan dan bukti.
- **Modul:** tidak ada fungsi `failed` tanpa catatan wall; blok `src/<stem>.cc`
  memuat semua fungsi modul; `asm/<stem>.s` tinggal data/pengecualian.
- **Proyek:** §1 terpenuhi dan `fomt verify` penuh 0 DIFF.
