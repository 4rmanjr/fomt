# GOAL

Dua jalur translasi berjalan berdampingan, dan keduanya dibuktikan dengan byte:

1. **Asm -> C.** Fungsi `asm/*.s` diterjemahkan ke C, dinyatakan selesai hanya
   bila MATCH byte-identik **dan** bloknya pindah ke `src/` (bukan sekadar
   `promote-only`).
2. **Asset ROM -> source yang bisa diedit.** Blob grafis di
   `asm/data/data_0813B288.s` diterjemahkan menjadi source (PNG terindeks +
   `.pal` JASC + metadata JSON) yang di-encode ulang oleh tool repo, dengan
   gate `sha256(encoded) == sha256(ROM slice)`. Sprite/OBJ adalah kelas pertama
   yang jalurnya sudah end-to-end.

Invarian:

- **`make compare` HIJAU setiap saat.** Build ROM tidak pernah membaca PNG:
  yang masuk `.incbin` hanya `build/assets/<symbol>.bin` hasil encoder yang
  lolos gate hash. Menambah aset tidak boleh menggeser satu byte pun.
- **Status jujur.** Aset `rom-exact` wajib punya hash cocok + aturan build;
  aset yang belum lolos tetap `.incbin` ROM, bukan diklaim selesai.
- **Mudah dirawat.** Menambah aset kelas yang sudah ada = taruh PNG/`.pal` +
  JSON, regenerasi aturan, build. Tanpa menyunting Makefile dan tanpa
  menyentuh state decomp.
- Perubahan perilaku tool = perbarui dokumen + tes di commit yang sama.

Rujukan: `docs/decomp/ARSITEKTUR-ASET.md` (arsitektur + alur),
`docs/decomp/MIGRATE.md` (gerbang migrasi C), `AGENTS.md` (aturan kerja).
