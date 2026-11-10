# PANDUAN gba-decomp — untuk AI lain

Skill ini dipakai untuk proyek decomp GBA gaya-pret (contoh: Harvest Moon FoMT):
fungsi asm di-draf dari machine code (m2c), diuji byte-identik lawan ROM asli
(agbcc -O2, disebut "judge"), lalu dimigrasi ke `src/` di balik gate
`make compare` (SHA1 vs baserom). Perintah project-spesifik milik repo
(`AGENTS.md` repo); skill ini milik urutan kerja + jebakan yang buang sesi.
Kalau konflik, `AGENTS.md` repo menang.

## Isi paket

- `SKILL.md` — skill penuh: prosedur 5 langkah + daftar pitfalls (wajib baca).
- `references/fast-local-iteration.md` — iterasi varian lokal (detik, bukan judge run).
- `references/permuter.md` — resep decomp-permuter-arm untuk residu regalloc 1–2 byte.
- `scripts/list_migratable_failed.py` — antrean failed di modul migratable, terkecil dulu.
- `templates/vtable_call.c.tmpl` — skeleton draf virtual-call (offset build).
- `templates/vtable_call_folded.c.tmpl` — skeleton draf virtual-call folded (satu ldr).

## Prasyarat lingkungan (wajib sebelum judge/migrate)

```bash
unset LD_PRELOAD
export LIBCAPSTONE_PATH=/usr/lib/aarch64-linux-gnu
export FOMT_AGENT=<nama-unik-agen>
export FOMT_AGBCC=$HOME/x86sys/wrap/agbcc
export FOMT_AS=$(command -v arm-none-eabi-as)
export FOMT_CPP=$HOME/bin/clang-cpp-arm
```

Tanpa ini judge gagal dengan error `libcapstone.so` palsu. `fomt` wrapper di
PATH men-set ini otomatis; kalau tidak ada, pakai `python3 decomp/run.py`
langsung dengan env di atas. Jangan pernah passing `CC1`/`OLD_CC1` di command
line make (merusak override compiler per-target → compare merah palsu).

## Alur kerja ringkas

1. **Status dulu** — angka fresh total/berhasil/sisa dari entry point status
   proyek, catat sebagai baseline sesi (OLD). Jangan kutip angka dari ingatan.
2. **Antrean migrasi** — `LIMIT=<n> python3 tools/scripts/migratable_failed.py`
   dari root repo (salinan bundled: `skills/gba-decomp/scripts/
   list_migratable_failed.py`).
   Hanya modul di `decomp.migrate.MIGRATABLE_MODULES`. Coret yang sudah di
   `src/` (`grep "DECOMP-MATCHED <func>" src/*.cc`) dan fragmen epilog
   (draf ≤6 baris, ref tanpa prolog/tanpa return normal).
   Tool bantu read-only: `tools/scripts/migrate_audit.py` (klasifikasi
   bisa-migrasi vs SKIP + `--json`), `tools/scripts/tail_chain.py --module
   <stem>.s` (urutan ekor + NEXT/blocker), `tools/scripts/audit_consistency.py
   --json` (status liar, `i32`, drift promoted vs draf), dan
   `decomp/migrate.py --explain` (beda signature blok vs `src/`).
3. **Satu fungsi satu waktu** — baca judge note + draf + asm LENGKAP kedua sisi,
   edit tersempit, judge ulang modul itu saja. Kalau pola sama pindah ke
   saudara: sapu satu keluarga sekaligus (grep bentuk khas di asm modul,
   contoh `_call_via_r` untuk keluarga vtable-call), pakai template verbatim,
   hanya pin/offset diganti per fungsi (baca dari asm ref masing-masing).
4. **Gate** — `make compare` HARUS hijau setelah tiap migrasi/edit src manual.
   Jangan klaim migrasi tanpa output HIJAU/OK tool-nya. `verify` penuh HANYA
   bila user memintanya; validasi per fungsi = judge + compare.
5. **Tutup bersih** — revert edit src yang tak perlu; commit hanya file kerja
   sendiri (src + state shard + draf; JANGAN `git add -A`, jangan
   `promoted/*.cc` borongan). Lapor OLD+DELTA (DELTA = migrasi sesi ini saja,
   terverifikasi via git). Tulis log sesi ke log repo lalu push.

## Template vtable-call (keluarga tersering MATCH)

Generate dengan `str.replace` pada marker `{V}` `{O}` `{VR}` `{OR}` —
JANGAN `.format` (`{{ }}`-nya mendarat literal di draf = syntax error).
Baca file hasil tulis sebelum judge. `V`=alamat fungsi, `O`=offset vtable,
`VR`/`OR`=register pin (WAJIB baca dari asm ref fungsi itu; saudara se-bentuk
sering beda, mis. r1/r2 vs r2/r3). `off` butuh fence
(`__asm__ volatile("" : "+r"(off))`) kalau tidak pin-nya fold. `fn` boleh
berbagi register dengan `vt` (hidup tak overlap). Callee ber-argumen: beri
arity asli ke `fn` DAN field `Vt`. Varian stack-arg (`[sp]`/`[sp+4]`) = WALL,
parkir.

## Aturan hemat token (pengalaman sesi panjang)

- Cap 5 judge per fungsi → parkir + regenerasi draf murni m2c, pindah fungsi.
- Edit draf + judge dalam SATU command (syarat mtime resanitize).
- Output berisik (>20 baris/30 dtk) selalu redirect ke `/tmp/<nama>.log`;
  chat hanya exit code + ringkasan grep.
- Jangan `cat` ulang file yang sudah tampil di konteks; delta via grep/sed.
- Skrip permanen > heredoc ad-hoc. Sesi maks ~3 migrasi lalu tutup + log
  (konteks menumpuk = biaya dominan).
- Verifikasi: per fungsi cukup judge + `make compare`; `verify` penuh
  HANYA bila user memintanya (bukan rutin akhir sesi). `make compare` hanya setelah perubahan build (migrate/edit src),
  bukan setelah judge/regen/parkir.
