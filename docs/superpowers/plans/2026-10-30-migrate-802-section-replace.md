# Migrate 802 Fungsi: Section-Replace Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Migrasikan ~802 fungsi MATCH/promoted tersisa dari `asm/*.s` ke `src/*.cc` dengan `make compare` tetap HIJAU, memakai section-replace (fungsi non-tail dimigrasi tanpa menggeser alamat fungsi lain).

**Architecture:** Ubah `decomp/migrate.py` dari tail-only (hapus blok asm + andalkan urutan `.text`) menjadi section-replace: emit fungsi C dengan `__attribute__((section(".text.<stem>.<addr8>")))` + hapus section asm bernama sama dari build. Linker script sudah memakai `*(SORT_BY_NAME(.text.<stem>.*))`, jadi section src menempati posisi persis section asm yang dicabut.

**Tech Stack:** Python 3 (migrate.py, split_asm_sections.py), GNU ld linker script, agbcc/arm-none-eabi-as, GBA ROM (`make compare` = SHA1 vs `baserom.gba`).

---

## Fakta fondasi (sudah terverifikasi di repo)

- Split per-fungsi HIJAU: `make compare` OK, `fomt verify` 873/873 MATCH (commit `e64b685b`).
- `tools/scripts/split_asm_sections.py` adalah sumber kebenaran section: `--migratable` = fungsi yang boleh pindah sendirian (grup 1-fungsi); grup gabungan (PC-ref lintas-chunk / data-ekor / berakhir-2-mod-4) TIDAK boleh pindah sendirian.
- Jumlah migratable-promoted per modul (terukur): new_game 46/46, game_state 260/260, code_entities_08034CEC 200/200, code_entities_080320DC 27/27, code_0803A8A4 91/91, code_0803EE94 575/603, code_809E804 512/539, code_0803A8A4 91/91, code_entities 144/151, code_lib_sram 2/2, sram_proxy_2 3/3, hardware ~62, code_actor_0809BFE8 28 (src-before-asm), intro_scene 5/8, code_linkonce 0 (file dikecualikan splitter), code_entities grup raksasa 7-fungsi (bl-chain, tak migratable).
- Lekerjakan TERBUKTI: prototype `func_0800063C` + `func_08000640` (sram_proxy_2) migrate via section + compare HIJAU.
- Aturan: fungsi promoted berstatus di `decomp/state/modules/<stem>.json`; blok C di `decomp/promoted/<stem>.cc`; src tujuan `src/<stem>.cc`; pengecualian lds: hardware+code_actor (src SEBELUM asm), code_linkonce (section manual).

---

### Task 1: Section-name resolver + migratable gate di migrate.py

**Files:**
- Modify: `decomp/migrate.py:38-70` (tambah import sys.path ke tools/scripts, fungsi `asm_section_of(stem, func, addr)`, `is_migratable(stem, func)`)
- Test: `python3 decomp/migrate.py --module sram_proxy_2.s --func func_080006E4 --dry-run` (harus SKIP informatif: grup gabungan dgn 08000728, BUKAN "tidak ditemukan")

- [ ] **Step 1: Tambah resolver yang memanggil analyze() splitter**

```python
sys.path.insert(0, str(REPO / "tools" / "scripts"))
from split_asm_sections import analyze as split_analyze

def asm_section_of(stem, func, addr):
    """Nama section asm utk fungsi, atau None bila modul tak di-split."""
    try:
        text = (REPO / "asm" / f"{stem}.s").read_text(errors="replace")
    except OSError:
        return None
    _pre, groups = split_analyze(text, stem, migrated=set())
    if not groups:
        return None  # modul tak di-split (linkonce/actor/hardware/syscall)
    want = f"{addr:08X}"
    for chs in groups:
        funcs = [c for c in chs if c["kind"] == "func"]
        if len(funcs) == 1 and funcs[0]["name"] == func:
            return chs[0]["secname"]
    return None  # grup gabungan / tak ketemu

def migratable_set(stem):
    try:
        text = (REPO / "asm" / f"{stem}.s").read_text(errors="replace")
    except OSError:
        return set()
    from split_asm_sections import migratable as split_migratable
    return set(split_migratable(text, stem))
```

- [ ] **Step 2: Verifikasi resolver via dry-run**

Run: `python3 decomp/migrate.py --module sram_proxy_2.s --func func_080006E4 --dry-run`
Expected: SKIP dengan detail menyebut grup gabungan (belum implementasi gate — langkah ini hanya pastikan import tak error)

- [ ] **Step 3: Commit**

```bash
git add decomp/migrate.py
git commit -m "migrate: tambah section resolver via split_asm_sections.analyze"
```

### Task 2: Ganti tail-only gate dengan migratable gate + section-replace

**Files:**
- Modify: `decomp/migrate.py:652-692` (hapus cek "bukan fungsi terakhir" + cek addr%4; ganti gate migratable; hapus section asm via filter, bukan potong teks)
- Modify: `decomp/migrate.py` `insert_ordered` (tambah param `section`: bungkus `__attribute__((section("...")))`)

**Keputusan desain (final, jangan diubah):**
- Syarat pindah: `func in migratable_set(stem)` (grup 1-fungsi). BUKAN tail-only, BUKAN addr%4.
- Cara cabut asm: JANGAN edit `asm/*.s` (biarkan utuh selamanya). Splitter (`tools/scripts/split_asm_sections.py::split`) SUDAH menghilangkan section fungsi yang ada di `src_section_names()` — jadi cukup emit section dari src, splitter otomatis meng-omit yang asm.
- Blok C dibungkus: `__attribute__((section(".text.<stem>.<addr8>")))` + `extern "C"`. Nama section = `asm_section_of()`.
- `remove_asm_func`/`_shared_local_labels`/tail-verbatim/asm_tail path DIHAPUS dari alur (tak perlu lagi — file asm tak disentuh). Hapus fungsinya atau biarkan tak terpakai dengan komentar.
- LDS: tidak ada perubahan per fungsi (blok SORT_BY_NAME sudah ada). `ensure_lds` dipertahankan tapi untuk modul split harus no-op (entri sudah ada) — jika melempar RuntimeError, tangkap sebagai SKIP informatif.
- Urutan migrasi: alamat MENAIK per modul (bukan menurun — tak ada geseran lagi).

- [ ] **Step 1: Tulis gate + emit section**

```python
    secname = asm_section_of(stem, func, addr)
    if secname is None:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"{func} grup gabungan/tak-split "
                "(lihat split_asm_sections.py --migratable), dilewati"}
```

dan pada penyisipan src, bungkus tiap fungsi:

```python
wrapped = (marker_line + 'extern "C" {\n'
           + f'__attribute__((section("{secname}")))\n'
           + body.rstrip() + "\n}\n")
```

(Catatan: `__attribute__` harus menempel pada definisi fungsi, bukan pada `extern "C" {` — letakkan tepat sebelum baris definisi pertama body. Jika body diawali deklarasi extern/struct sisa, sisipkan atribut sebelum baris yang mengandung `(` definisi. Implementasi paling sederhana yang terbukti pada prototype sram_proxy_2: prepend atribut tepat sebelum body bila body diawali definisi fungsi; bila body diawali struct/extern sisa, cari baris pertama yang tampak seperti definisi (`^\w.*\(.*\)\s*(\{|$)`) dan sisipkan di sana.)

- [ ] **Step 2: Uji pada satu fungsi kecil termigratable (dry-run lalu real)**

Run: `python3 decomp/migrate.py --module sram_proxy_2.s --func func_080006E4 --dry-run`
Expected: rencana OK (bukan SKIP grup — 080006E4 grup solo? verifikasi: jika ternyata grup gabungan, pilih fungsi solo lain dari `--migratable` modul kecil, mis. new_game)

- [ ] **Step 3: Migrasi real 1 fungsi + compare**

Run: `python3 decomp/migrate.py --module new_game.s --func <satu-fungsi-solo-dari---migratable> --no-baseline`
Expected: OK + `make compare` HIJAU di dalam run tersebut

- [ ] **Step 4: Commit**

```bash
git add decomp/migrate.py src/<stem>.cc
git commit -m "migrate: section-replace untuk fungsi non-tail (gate migratable)"
```

### Task 3: Batch migrasi modul kecil utuh (validasi massal)

**Files:**
- Modify: `src/new_game.cc`, `src/game_state.cc`, `src/code_entities_080320DC.cc`, `src/code_0803A8A4.cc`, `src/code_lib_sram.cc`, `src/sram_proxy_2.cc` (hasil migrasi)
- Test: `make compare` HIJAU tiap batch + `fomt verify` tetap 873/873

- [ ] **Step 1: Migrasi new_game utuh (46 fungsi)**

Run: `python3 decomp/migrate.py --module new_game.s --no-baseline`
Expected: semua OK/SKIP terdokumentasi, compare HIJAU di tiap fungsi (migrate_one menjalankan compare per fungsi dan revert saat MERAH)

- [ ] **Step 2: Migrasi game_state (260), code_entities_080320DC (27), code_0803A8A4 (91), code_lib_sram (2), sram_proxy_2 sisa**

Run tiap modul satu perintah seperti Step 1. Setiap modul selesai → `make compare` manual sekali + catat.
Expected: HIJAU semua; fungsi non-migratable ter-SKIP dengan alasan jelas

- [ ] **Step 3: Verifikasi + commit per modul**

```bash
fomt verify 2>&1 | tail -2   # harus 873/873 MATCH
git add src/new_game.cc src/game_state.cc src/code_entities_080320DC.cc src/code_0803A8A4.cc src/code_lib_sram.cc src/sram_proxy_2.cc
git commit -m "migrate: modul new_game/game_state/080320DC/0803A8A4/lib_sram/sram_proxy_2 via section-replace"
```

### Task 4: Modul besar (code_0803EE94, code_809E804, code_entities_08034CEC, code_entities)

**Files:**
- Modify: `src/code_0803EE94.cc`, `src/code_809E804.cc`, `src/code_entities_08034CEC.cc`, `src/code_entities.cc`

- [ ] **Step 1: Migrasi code_entities_08034CEC (200 fungsi, 1 nonmig)**

Run: `python3 decomp/migrate.py --module code_entities_08034CEC.s --no-baseline`
Expected: 199 OK + 1 SKIP (func_0803A798 grup gabungan)

- [ ] **Step 2: Migrasi code_0803EE94 (575 migratable) dan code_809E804 (512)**

Run per modul. Jika MERAH di tengah: migrate_one sudah revert fungsi itu dan berhenti — laporkan fungsi + diff, JANGAN lanjut paksa. Kembali ke analisis (kemungkinan: struct_conflict/extern-signature — butuh penyatuan manual seperti alur lama).
Expected: HIJAU; SKIP = grup gabungan yang sudah dipetakan (7 + 11 fungsi)

- [ ] **Step 3: Migrasi code_entities (144 migratable; 7-fungsi grup bl-chain tetap di asm)**

Run: `python3 decomp/migrate.py --module code_entities.s --no-baseline`
Expected: 144 OK; func_0803205C/func_08032090/sub_08031E0A dkk dalam grup raksasa ter-SKIP (tetap di asm, compare tetap HIJAU karena section grup utuh)

- [ ] **Step 4: Verifikasi + commit**

```bash
make compare 2>&1 | tail -2
fomt verify 2>&1 | tail -2
git add src/code_0803EE94.cc src/code_809E804.cc src/code_entities_08034CEC.cc src/code_entities.cc
git commit -m "migrate: modul besar via section-replace"
```

### Task 5: Kasus khusus — hardware, code_actor_0809BFE8, intro_scene, code_linkonce, sisa nonmig

**Files:**
- Modify: `src/hardware_migrated.cc` atau `src/hardware.cc`, `src/code_actor_0809BFE8.cc`, `src/intro_scene.cc`, `src/code_linkonce.cc` sesuai hasil
- Modify: `fomt.lds` HANYA bila perlu (dengan alasan tertulis); default: jangan sentuh

Aturan per kasus (final):
- **hardware** (src SEBELUM asm, splitter me-skip modul ini → asm utuh `.text`): pertahankan alur LAMA tail-only ke `src/hardware_migrated.cc`. Jangan section-replace (section asm tak ada).
- **code_actor_0809BFE8** (sama: src SEBELUM asm, asm utuh): alur LAMA tail-only. 28 promoted → migratable 28/28 via tail.
- **intro_scene**: 5/8 migratable (3 dalam grup dgn sub_080010BE). Migrasikan 5 solo via section-replace; 3 sisanya (func_080035C0/36F8/371C/374C — 4 promoted, cek irisan) tetap di asm.
- **code_linkonce**: splitter me-skip (punya `.section` sendiri). JANGAN migrasi otomatis. Tetap di asm. Catat sebagai pengecualian permanen (133 fungsi).
- **sub_08031E0A** (2-mod-4, grup raksasa code_entities): tetap di asm (sudah benar di posisi grup).
- **Sisa nonmig per modul** (code_0803EE94: 7, code_809E804: 11, dll.): tetap di asm, catat daftar di laporan akhir.

- [ ] **Step 1: hardware + actor via alur lama tail-only**

Run: `python3 decomp/migrate.py --module hardware.s --no-baseline` lalu `--module code_actor_0809BFE8.s --no-baseline`
Expected: OK bertahap tail-first; compare HIJAU

- [ ] **Step 2: intro_scene 5 solo via section-replace**

Run: `python3 decomp/migrate.py --module intro_scene.s --no-baseline`
Expected: 5 OK (atau sesuai irisan promoted), sisanya SKIP grup

- [ ] **Step 3: Verifikasi akhir + commit + laporan sisa**

```bash
make compare 2>&1 | tail -2
fomt verify 2>&1 | tail -2
python3 -m py_compile decomp/migrate.py tools/scripts/split_asm_sections.py
git add -A && git status --short   # periksa hanya file migrasi yang berubah
git commit -m "migrate: kasus khusus hardware/actor/intro_scene; sisa nonmig terdokumentasi"
```

Laporan akhir (tulis di pesan commit atau `docs/`): daftar fungsi yang TETAP di asm + alasan (grup gabungan / linkonce / tail-only tersisa).

---

## Sisa SKIP manual (2026-11-01, hasil Task 4 migrate-sisa-580 — compare HIJAU, pindah: 0)

Nol fungsi pindah di Task 4: semua sisa TERBLOKIR by-design di bawah. Butuh
`fomt`-decomp (judge/draf) atau penyatuan manual manusia, BUKAN `migrate`.

- `hardware.s` (62 promoted sisa): tail-only legacy; ekor-asm
  `func_08009908/3940/9968/9984` (4) + `func_080098AC` (1) = 5 FAILED
  memblokir semua promoted di depannya (`remaining.index != terakhir`).
  Butuh judge MATCH-kan 5 ekor dulu (kerjaan `fomt`, bukan migrate).
- `code_actor_0809BFE8.s` (28 promoted): sama; ekor-asm
  `func_0809E1A4` (1 FAILED) memblokir `func_0809E194` dkk (1 penerus).
- `new_game.s`: 4 grup gabungan (`08007078/0A4/D4/7110`) + sisanya sudah
  pindah; 3 sisa (`04B58/04B94/0598C`) = SKIP extern `__builtin_new`
  beda-tanda (butuh penyatuan manual manusia).
- `code_0803A8A4.s`: 7 sisa = sudah pindah semua (SKIP sudah-ada); 7 dlm
  rencana = extern-beda-tanda/definisi-vs-extern (penyatuan manual).
- `game_state.s`: 1 sisa (`0801FD...` grup gabungan) + sudah-pindah.
- `main.s`: `func_08000240` + `AgbMain` sudah pindah (tak di asm).
- `code_entities_08034CEC.s` (43 SKIP-permanen, Task 3): 42
  `extern __builtin_new s32-vs-void*` (operator new, callee tak-MATCH —
  SKIP-PERMANEN by-design) + 1 data-asing (`func_080390D0`, 88B).
- `code_entities.s` (Task 3): 1 data-asing (`func_080202C8`, pool yatim
  68B di ekor chunk solo) + 7 extern-beda-tanda + 1 grup
  (`sub_08031E0A`) — SKIP by-design.

---

## Self-Review

**1. Spec coverage:**
- "802 sisanya cari sambungannya agar migrate" → Task 2 (mekanisme), Task 3-4 (massal ~770 migratable), Task 5 (kasus khusus). ✅
- "make compare tetap hijau" → compare per fungsi + revert otomatis (sudah ada di migrate_one) + verifikasi tiap task. ✅
- "jangan overwrite MATCH" → hanya baca promoted/state, tak sentuh JSON/draf. ✅
- code_linkonce (133) → eksplisit dikecualikan Task 5. ✅
- Grup gabungan → gate migratable Task 2 + daftar nonmig Task 5. ✅

**2. Placeholder scan:** semua step berisi perintah persis + expected output konkret. Tidak ada "TBD/penyatuan manual tanpa batas" — penyatuan manual struct/extern sudah ditangani kode lama (`struct_conflict` SKIP); bila MERAH codegen, berhenti + lapor (bukan fix buta).

**3. Type consistency:** `asm_section_of` → string section penuh (dipakai verbatim di `__attribute__`); `migratable_set` → set nama (dipakai untuk gate). `secname` dari `chs[0]["secname"]` konsisten dengan yang dipakai linker (`SORT_BY_NAME`) dan yang di-omit splitter (`src_section_names`). ✅
