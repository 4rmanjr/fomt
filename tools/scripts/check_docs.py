#!/usr/bin/env python3
"""check_docs.py — guard dokumen hidup (ukuran, rujukan, klaim basi).

Masalah yang dicegah: `AGENTS.md` tumbuh tiap sesi sampai aturan penting
terkubur (agent kehilangan konteks di tengah berkas), rujukan antar-dokumen
patah karena bagian dipindah, dan dokumen hidup menyimpan angka progres yang
cepat basi.

Yang diperiksa:

1. **Batas ukuran** `AGENTS.md` (default 130 baris, `--max-agents N`): berkas
   itu hanya boleh memuat aturan invarian + peta rute; detail pindah ke
   `docs/ops/`.
2. **Rujukan berkas**: setiap path repo yang ditulis sebagai link markdown atau
   dalam backtick dengan ekstensi `.md` harus ada.
3. **Rujukan aturan**: `AGENTS.md rule N` / `AGENTS.md R N` harus punya heading
   `## RN.` di AGENTS.md (nomor aturan stabil, jangan direnomori).
4. **Angka basi** di dokumen hidup: pola progres (`berhasil <n> (`, `total <n>
   fungsi`, `src <n>+`) dilarang — tulis perintah pengambil angkanya.
5. **Klaim normalisasi basi**: kalimat "belum/tidak dinormalkan|mengalias ..."
   untuk sebuah pola di dokumen hidup ditolak bila `decomp_engine.NORMALIZATIONS`
   menyatakan `norm()` sudah menanganinya. Tabel itu juga diverifikasi
   terhadap perilaku `norm()` sungguhan, jadi menambah normalisasi di engine
   tanpa memperbarui tabel akan gagal di sini.
6. **Backlog ekor basi** (`docs/decomp/EKOR-BACKLOG.md`): dokumen itu dihasilkan
   `tools/scripts/ekor_snapshot.py`, jadi isinya dibandingkan dengan hasil
   generate saat ini. MATCH/migrasi yang mengubah ujung rantai tanpa regenerasi
   akan menggagalkan gate ini, bukan lewat diam-diam. Baris `Snapshot **tanggal**`
   tidak ikut dibandingkan (ditangani `ekor_snapshot.is_stale`), jadi dokumen
   tidak dianggap basi hanya karena pergantian hari.
7. **Inventaris aset basi** (`docs/decomp/ASET-INVENTARIS.md`): dokumen itu
   dihasilkan `tools/scripts/asset_inventory.py`, jadi isinya dibandingkan
   dengan `asset_inventory.document()` saat ini. Pemecahan
   `asm/data/data_0813B288.s` (blob baru atau ukuran berubah) mengubah tabel
   tanpa perlu ada yang ingat meregenerasinya. Kalau `baserom.gba` atau berkas
   `.s` sumbernya tidak ada, gate dilewati dengan catatan (bukan masalah),
   karena tanpa keduanya dokumen tidak bisa dihitung ulang.
8. **Peta berkas 0x70 basi** (`docs/decomp/ASET-0X70-PETA-BERKAS.md`):
   dokumen itu dihasilkan `tools/scripts/extract_assets.py` dari
   `assets/0x70/manifest.json`. Gate membandingkannya dengan
   `extract_assets.render_map_doc(manifest)` yang sama dengan `--check-map`,
   jadi manifest berubah (pasangan/status/berkas) tanpa regenerasi dokumen
   langsung menggagalkan pemeriksaan, bukan lolos diam-diam.
9. **Aset mentah basi** (`docs/decomp/ASET-MENTAH-BERKAS.md`): dokumen itu
   dihasilkan `tools/scripts/raw_assets.py` dari `assets/raw/manifest.json`.
   Gate memanggil `raw_assets.render_doc(manifest)` yang sama dengan
   `--check`, jadi kelompok/ukuran/PNG berubah tanpa regenerasi dokumen
   langsung terlihat.
10. **Manifest aset source basi** (`assets/manifest.json`): dibandingkan
   dengan `asset_manifest.build()` yang menjalankan encoder tiap aset, jadi
   klaim `rom-exact` yang tidak lagi cocok hash langsung gagal. Dilewati
   dengan catatan bila `baserom.gba` tidak ada.
11. **PNG 0x70 rusak** (`assets/0x70/png/`): gate memakai jalur `quick` dari
   dua pemeriksa: `extract_assets.png_problems(..., quick=True)` untuk PNG
   stream/pasangan dan `embedded_streams.problems(..., quick=True)` untuk PNG
   bank tertanam. Setiap berkas PNG selalu diperiksa terhadap `png_sha256`
   manifestnya (murah, dan inilah yang menangkap PNG rusak); render ulang
   penuh hanya dijalankan bila sidik jari input (manifest + bin) berbeda dari
   render terakhir yang lolos (`build/*_check.stamp.json`) — jadi render besar
   terjadi sekali setelah clone/clean atau saat bin berubah, bukan tiap commit.
12. **Laporan reencode 0x70 basi** (`docs/decomp/ASET-0X70-REENCODE.md` dan
   `assets/0x70/reencode_manifest.json`): keduanya dihasilkan
   `tools/assets/stream_audit.py` dari slice ROM + `assets/0x70/bin/` dan
   `assets/0x70/extern/` (bank tertanam). Gate membandingkan keduanya dengan
   `stream_audit.build()`/`render_doc()` saat ini, jadi hash semua stream
   tidak bisa berubah (atau laporan tertinggal) tanpa terdeteksi. Dilewati
   dengan catatan bila `baserom.gba` tidak ada.
13. **Katalog tool lengkap**: setiap `tools/**/*.py` milik repo harus disebut
    namanya di `docs/ops/TOOLS.md`. Tool yang lahir tanpa entri katalog hanya
    diketahui dari riwayat sesi, dan pemakaian/jebakannya hilang untuk agent
    berikutnya. Folder yang di-vendor (`tools/VENDORED.md`: `m2c`,
    `decompnet`, `python`, `asm-differ`) dikecualikan karena katalognya berkas
    itu, bukan katalog tool repo.
14. **Klaim status aset basi**: `assets/manifest.json` adalah sumber
    kebenaran status. Dokumen hidup (termasuk `ARSITEKTUR-ASET.md`) tidak
    boleh lagi menyebut simbol `rom-exact` masih dibuka dari
    `.incbin "baserom.gba"` atau masih diparkir; kalimat dari sesi lama
    menyesatkan agent berikutnya setelah migrasi. Bentuk penyangkalan
    ("tidak lagi parkir") tetap lolos. Klaim tingkat kelas ("palet",
    "sprite", "tilemap", "font") juga ditolak bila menyebut kelas itu
    masih mentah/opaque/parkir padahal seluruh aset kelas itu di manifest
    sudah `rom-exact`.

Read-only; exit 1 bila ada masalah (`--json` untuk agent, `--strict` sama
dengan default).

  python3 tools/scripts/check_docs.py [--json] [--max-agents N]
"""
import argparse
import json
import os
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]

LIVING = ["AGENTS.md", "docs/decomp/POLA-DIFF.md", "docs/decomp/MIGRATE.md",
          "docs/ops/COMMANDS.md", "docs/ops/TOOLS.md", "docs/ops/VERIFIKASI.md",
          "skills/gba-decomp/SKILL.md", "skills/gba-decomp/PANDUAN.md",
          "INSTALL.md"]

# angka progres yang tidak boleh dipatok di dokumen hidup
STALE = [re.compile(r"berhasil\s+\d+\s*\("),
         re.compile(r"total\s+\d+\s+fungsi"),
         re.compile(r"src\s+\d+\s*\+")]
LINK = re.compile(r"\[[^\]]*\]\(([^)]+)\)")
# klaim "normalisasi belum ada" — subjeknya dicocokkan lewat kata kunci tabel
NEG_NORM = re.compile(
    r"\b(belum|tidak)\b[^\n]{0,60}?\b(alias(?:kan|-kannya)?|dinormalkan"
    r"|dinormalisasi|di-alias|mengalias\w*|normalisasi)\b", re.I)
MD_TICK = re.compile(r"`([\w./-]+\.md)(?:#[^`]*)?`")

EKOR_DOC = "docs/decomp/EKOR-BACKLOG.md"
EKOR_TOOL = REPO / "tools/scripts/ekor_snapshot.py"
EKOR_TAIL = 12  # default --tail ekor_snapshot.py
README_STATS_TOOL = REPO / "tools/scripts/readme_stats.py"


ASET_DOC = "docs/decomp/ASET-INVENTARIS.md"
ASET_TOOL = REPO / "tools/scripts/asset_inventory.py"
ASET_INPUTS = [REPO / "asm" / "data" / "data_0813B288.s", REPO / "baserom.gba"]

PALET_DOC = "docs/decomp/PALET-FONT.md"
PALET_TOOL = REPO / "tools/assets/font_palettes.py"
PALET_MANIFEST = REPO / "assets" / "gfx" / "fonts" / "palettes.json"

EMBED_DOC = "docs/decomp/ASET-0X70-TERTANAM.md"
EMBED_TOOL = REPO / "tools/assets/embedded_streams.py"
EMBED_MANIFEST = REPO / "assets" / "0x70" / "embedded_manifest.json"

MAP_DOC = "docs/decomp/ASET-0X70-PETA-BERKAS.md"
MAP_TOOL = REPO / "tools/scripts/extract_assets.py"
MAP_MANIFEST = REPO / "assets" / "0x70" / "manifest.json"

RAW_DOC = "docs/decomp/ASET-MENTAH-BERKAS.md"
RAW_TOOL = REPO / "tools/scripts/raw_assets.py"
RAW_MANIFEST = REPO / "assets" / "raw" / "manifest.json"

TOOLS_DOC = "docs/ops/TOOLS.md"
# Folder tool yang di-vendor (`tools/VENDORED.md`): katalognya berkas itu,
# bukan bagian katalog tool repo di `docs/ops/TOOLS.md`.
VENDORED_TOOLS = {"m2c", "decompnet", "python", "asm-differ"}


def tools_katalog():
    """-> (masalah|None, catatan|None) katalog tool vs berkas `tools/`.

    Katalog hanya berguna bila lengkap: skrip baru tanpa entri di `TOOLS.md`
    membuat pemakaian dan jebakannya hanya diketahui dari riwayat sesi. Gate
    ini memeriksa **nama berkas** setiap `tools/**/*.py` milik repo muncul di
    dokumen itu; folder vendored dilewati.
    """
    doc = REPO / TOOLS_DOC
    if not doc.exists():
        return (TOOLS_DOC, "katalog tool hilang"), None
    listed = {Path(m).name for m in
              re.findall(r"[\w./-]+\.py", doc.read_text())}
    checked = 0
    missing = []
    for path in sorted((REPO / "tools").rglob("*.py")):
        rel = path.relative_to(REPO)
        if len(rel.parts) > 2 and rel.parts[1] in VENDORED_TOOLS:
            continue
        checked += 1
        if path.name not in listed:
            missing.append(rel.as_posix())
    if missing:
        shown = ", ".join(missing[:4])
        more = f" (+{len(missing) - 4} lain)" if len(missing) > 4 else ""
        return (TOOLS_DOC,
                f"{len(missing)} skrip tools belum dirujuk katalog: {shown}"
                f"{more} — tambahkan entri di {TOOLS_DOC}"), None
    return None, f"katalog tool lengkap ({checked} skrip dirujuk)"


def aset_inventaris():
    """-> (masalah|None, catatan|None) untuk dokumen inventaris aset.

    Sama seperti backlog ekor: dokumen itu hasil generate, jadi satu-satunya
    sumber kebenaran isinya adalah `asset_inventory.document()`. Gate ini
    membuat pemecahan `data_0813B288.s` yang tidak disertai regenerasi
    terlihat, bukan lewat diam-diam.
    """
    import importlib.util

    out = REPO / ASET_DOC
    if not out.exists():
        return (ASET_DOC, "dokumen inventaris aset hilang — jalankan "
                "tools/scripts/asset_inventory.py"), None
    missing = [str(p.relative_to(REPO)) for p in ASET_INPUTS if not p.exists()]
    if missing:
        return None, ("gate aset dilewati: input tidak ada ("
                      + ", ".join(missing) + ")")
    try:
        spec = importlib.util.spec_from_file_location(
            "asset_inventory", ASET_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.document()
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (ASET_DOC,
                f"gate aset gagal dijalankan: {type(e).__name__}: {e}"), None
    if out.read_text() != text:
        return (ASET_DOC, "BASI terhadap hasil generate — jalankan "
                "python3 tools/scripts/asset_inventory.py"), None
    return None, "inventaris aset sinkron"


def aset_0x70():
    """-> (masalah|None, catatan|None) untuk dokumen peta berkas 0x70.

    Dokumen itu hasil generate dari manifest, dan `extract_assets.py
    --check-map` memakai renderer yang sama. Gate ini memanggil renderer itu
    langsung supaya manifest yang berubah tanpa regenerasi dokumen terlihat.
    """
    import importlib.util
    import json

    out = REPO / MAP_DOC
    if not out.exists():
        return (MAP_DOC, "dokumen peta berkas 0x70 hilang — jalankan "
                "tools/scripts/extract_assets.py"), None
    if not MAP_MANIFEST.exists():
        return (MAP_DOC, "manifest 0x70 hilang — jalankan "
                "tools/scripts/extract_assets.py"), None
    try:
        spec = importlib.util.spec_from_file_location(
            "extract_assets", MAP_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render_map_doc(
            json.loads(MAP_MANIFEST.read_text()))
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (MAP_DOC,
                f"gate peta 0x70 gagal dijalankan: {type(e).__name__}: {e}"), None
    if out.read_text() != text:
        return (MAP_DOC, "BASI terhadap manifest — jalankan "
                "python3 tools/scripts/extract_assets.py"), None
    return None, "peta berkas 0x70 sinkron"


ASSET_MANIFEST_DOC = "assets/manifest.json"
ASSET_MANIFEST_TOOL = REPO / "tools" / "assets" / "asset_manifest.py"
ASSET_MANIFEST_ROM = REPO / "baserom.gba"
# Dokumen yang tidak boleh menyimpan klaim status aset yang sudah basi.
ASSET_CLAIM_DOCS = LIVING + ["docs/decomp/ARSITEKTUR-ASET.md"]
ROM_INCBIN = re.compile(r'\.incbin\s+"?baserom\.gba')
PARKIR_CLAIM = re.compile(r"\b(?:di|ter)?parkir\w*\b", re.I)
NEGASI = re.compile(r"\b(?:tidak|bukan|sudah|kini|sekarang)\b", re.I)

# Kelas aset = kumpulan `kind` manifest yang dibaca sebagai satu kelas.
# Klaim "kelas X masih mentah/opaque/parkir" baru basi bila SEMUA aset
# kelas itu di manifest sudah `rom-exact`.
ASSET_CLASS_KINDS = {
    "palet": {"palette"},
    "sprite": {"sprite"},
    "tilemap": {"tilemap", "tilemap_bank"},
    "font": {"font_container", "glyph_font", "glyph_index"},
}
ASSET_CLASS_WORDS = {
    "palet": r"\b(?:palet|palette)s?\b",
    "sprite": r"\b(?:sprite|sprites)\b",
    "tilemap": r"\btilemaps?\b",
    "font": r"\b(?:font|fonts|glyph|glyphs)\b",
}
KELAS_BASI = re.compile(
    r"\b(?:masih|tetap)\s+(?:mentah|raw|opaque|parkir\w*)"
    r"|\bbelum\s+(?:di|ter)migrasi\w*", re.I)
BUKAN_KLAIM = re.compile(r"\b(?:tidak ada|bukan|tidak lagi)\b", re.I)


def kelas_selesai(assets):
    """-> {kelas: jumlah aset} untuk kelas yang seluruh asetnya rom-exact."""
    total, done = {}, {}
    for a in assets:
        for kelas, kinds in ASSET_CLASS_KINDS.items():
            if a.get("kind") not in kinds:
                continue
            total[kelas] = total.get(kelas, 0) + 1
            if a.get("status") == "rom-exact":
                done[kelas] = done.get(kelas, 0) + 1
    return {k: total[k] for k in total
            if total[k] and done.get(k) == total[k]}


def paragraf(teks):
    """-> (baris_awal, teks_gabung) per paragraf/bulir markdown.

    Klaim kelas bisa terlipat antar-baris, jadi pemeriksaan dilakukan per
    paragraf, bukan per baris; nomor baris awalnya tetap dilaporkan.
    """
    buf, awal = [], 1
    for i, line in enumerate(teks.splitlines(), 1):
        strip = line.strip()
        if not strip:
            if buf:
                yield awal, " ".join(buf)
                buf = []
            continue
        if buf and strip.startswith(("- ", "* ", "|", "#")):
            yield awal, " ".join(buf)
            buf = []
        if not buf:
            awal = i
        buf.append(strip)
    if buf:
        yield awal, " ".join(buf)


def klaim_parkir(line):
    """True bila `line` menyatakan parkir tanpa penyangkalan di klausanya."""
    for m in PARKIR_CLAIM.finditer(line):
        start = max(line.rfind(c, 0, m.start()) for c in ";:.")
        if not NEGASI.search(line[start + 1:m.end() + 40]):
            return True
    return False


def aset_sumber():
    """-> (masalah|None, catatan|None) untuk `assets/manifest.json`.

    Manifest itu hasil `asset_manifest.build()` (menjalankan encoder tiap
    aset source). Gate ini mencegah manifest basi/berisi klaim yang tidak
    lolos hash tanpa ada yang ingat menjalankan `--check`.
    """
    import importlib.util

    path = REPO / ASSET_MANIFEST_DOC
    if not ASSET_MANIFEST_TOOL.exists():
        return (ASSET_MANIFEST_DOC, "tool asset_manifest.py hilang"), None
    if not path.exists():
        return (ASSET_MANIFEST_DOC,
                "manifest aset source hilang — jalankan "
                "tools/assets/asset_manifest.py"), None
    if not ASSET_MANIFEST_ROM.exists():
        return None, "manifest aset source: gate dilewati (tanpa baserom.gba)"
    try:
        spec = importlib.util.spec_from_file_location(
            "asset_manifest", ASSET_MANIFEST_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render(mod.build())
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (ASSET_MANIFEST_DOC,
                f"gate manifest aset gagal dijalankan: {type(e).__name__}: {e}"), \
            None
    if path.read_text() != text:
        return (ASSET_MANIFEST_DOC,
                "BASI terhadap encoder/source — jalankan "
                "python3 tools/assets/asset_manifest.py"), None
    count = len(json.loads(text)["assets"])
    return None, f"manifest aset sinkron ({count} aset rom-exact)"


def aset_klaim():
    """-> (masalah|None, catatan|None) klaim status aset di dokumen.

    Manifest adalah sumber kebenaran status: begitu satu simbol `rom-exact`,
    dokumen tidak boleh lagi menyebutnya dibuka dari `baserom.gba` atau
    diparkir. Tanpa gate ini kalimat dari sesi lama bertahan setelah migrasi
    dan menyesatkan agent berikutnya; bentuk penyangkalan ("tidak lagi
    parkir") tetap lolos.
    """
    path = REPO / ASSET_MANIFEST_DOC
    if not path.exists():
        return (ASSET_MANIFEST_DOC,
                "manifest aset source hilang — jalankan "
                "tools/assets/asset_manifest.py"), None
    try:
        assets = json.loads(path.read_text())["assets"]
    except Exception as e:  # gate tidak boleh lolos diam-diam saat manifest rusak
        return (ASSET_MANIFEST_DOC,
                f"gate klaim aset gagal membaca manifest: {type(e).__name__}: {e}"), \
            None
    rom_exact = sorted(a["symbol"] for a in assets
                       if a.get("status") == "rom-exact" and a.get("symbol"))
    selesai = kelas_selesai(assets)
    found = []
    for rel in ASSET_CLAIM_DOCS:
        doc = REPO / rel
        if not doc.exists():
            continue
        teks = doc.read_text()
        for i, line in enumerate(teks.splitlines(), 1):
            hits = [s for s in rom_exact if s in line]
            if not hits:
                continue
            if ROM_INCBIN.search(line):
                found.append((f"{rel}:{i}",
                              f"klaim basi `{hits[0]}` masih dibuka dari "
                              f"`.incbin \"baserom.gba\"` padahal manifest "
                              f"`rom-exact`"))
            elif klaim_parkir(line):
                found.append((f"{rel}:{i}",
                              f"klaim basi `{hits[0]}` masih diparkir "
                              f"padahal manifest `rom-exact`"))
        for awal, blok in paragraf(teks):
            for clause in re.split(r"(?<=[.;])\s+", blok):
                for kelas, kata in ASSET_CLASS_WORDS.items():
                    if kelas not in selesai or not re.search(kata, clause, re.I):
                        continue
                    m = KELAS_BASI.search(clause)
                    if not m or BUKAN_KLAIM.search(clause):
                        continue
                    found.append((f"{rel}:{awal}",
                                  f"klaim kelas basi: {kelas} disebut "
                                  f"\"{m.group(0)}\" padahal semua aset kelas "
                                  f"itu `rom-exact`"))
                    break
    if found:
        where, why = found[0]
        more = f" (+{len(found) - 1} lain)" if len(found) > 1 else ""
        return (where, why + more + " — perbarui dokumen, jangan biarkan "
                "klaim lama"), None
    return None, (f"klaim status aset sinkron ({len(rom_exact)} rom-exact "
                  f"di {len(ASSET_CLAIM_DOCS)} dokumen, kelas selesai: "
                  f"{', '.join(sorted(selesai)) or '-'})")


GFX_RULES = "gfx_rules.mk"
GFX_RULES_TOOL = REPO / "tools" / "assets" / "gfx_rules.py"


def aset_aturan_gfx():
    """-> (masalah|None, catatan|None) untuk aturan build `gfx_rules.mk`.

    Berkas itu dihasilkan `gfx_rules.py` dari metadata `assets/gfx/**/*.json`
    dan di-include Makefile. Gate ini membuat aset `rom-exact` baru yang
    lupa diregenerasi terlihat: tanpa aturan, `.incbin` bisa menunjuk bin
    yang tidak pernah dibangun.
    """
    import importlib.util

    if not GFX_RULES_TOOL.exists():
        return (GFX_RULES, "tool gfx_rules.py hilang"), None
    out = REPO / GFX_RULES
    if not out.exists():
        return (GFX_RULES, "aturan gfx hilang — jalankan "
                "python3 tools/assets/gfx_rules.py"), None
    try:
        spec = importlib.util.spec_from_file_location("gfx_rules",
                                                     GFX_RULES_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render(mod.collect())
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (GFX_RULES,
                f"gate aturan gfx gagal dijalankan: {type(e).__name__}: {e}"), \
            None
    if out.read_text() != text:
        return (GFX_RULES, "BASI terhadap metadata assets/gfx — jalankan "
                "python3 tools/assets/gfx_rules.py"), None
    return None, ("aturan build gfx sinkron "
                  f"({text.count('.bin: \\')} aset rom-exact)")


REENCODE_DOC = "docs/decomp/ASET-0X70-REENCODE.md"
REENCODE_MANIFEST = "assets/0x70/reencode_manifest.json"
REENCODE_TOOL = REPO / "tools" / "assets" / "stream_audit.py"


SCAN_SKIP = {".git", "build", "node_modules", "__pycache__", ".venv",
             "venv", "decomp/logs"}


def named_files(name):
    """Cari berkas bernama `name` tanpa menelusuri build/vendor.

    `REPO.glob("**/name")` ikut memindai `build/` dan cache lain yang bisa
    puluhan ribu berkas; gate dokumen jadi lambat tanpa menambah akurasi,
    karena rujukan pendek hanya sah bila unik di sumber repo.
    """
    hits = []
    for root, dirs, files in os.walk(REPO):
        rel = os.path.relpath(root, REPO)
        dirs[:] = [d for d in dirs
                   if d not in SCAN_SKIP and f"{rel}/{d}".lstrip("./") not in SCAN_SKIP]
        if name in files:
            hits.append(Path(root) / name)
    return hits


def aset_reencode():
    """-> (masalah|None, catatan|None) untuk laporan reencode stream 0x70.

    Laporan itu memuat hash compressed/decoded tiap stream dan status
    `opaque`/`ok`. Tanpa gate ini, stream yang hash-nya berubah (atau klaim
    `ok` lama yang tidak lagi benar) hanya tertangkap bila ada yang ingat
    menjalankan `stream_audit.py --check`.
    """
    import importlib.util

    if not REENCODE_TOOL.exists():
        return (REENCODE_DOC, "tool stream_audit.py hilang"), None
    if not (REPO / "baserom.gba").exists():
        return None, "laporan reencode: gate dilewati (tanpa baserom.gba)"
    for rel in (REENCODE_MANIFEST, REENCODE_DOC):
        if not (REPO / rel).exists():
            return (rel, "laporan reencode hilang — jalankan "
                    "python3 tools/assets/stream_audit.py"), None
    try:
        spec = importlib.util.spec_from_file_location(
            "stream_audit", REENCODE_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        result = mod.build()
        data = json.dumps(result, indent=1) + "\n"
        doc = mod.render_doc(result)
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (REENCODE_DOC,
                f"gate reencode gagal dijalankan: {type(e).__name__}: {e}"), None
    if (REPO / REENCODE_MANIFEST).read_text() != data:
        return (REENCODE_MANIFEST,
                "BASI terhadap slice ROM/bin — jalankan "
                "python3 tools/assets/stream_audit.py"), None
    if (REPO / REENCODE_DOC).read_text() != doc:
        return (REENCODE_DOC,
                "BASI terhadap slice ROM/bin — jalankan "
                "python3 tools/assets/stream_audit.py"), None
    return None, (f"laporan reencode sinkron ({result['total']} stream, "
                  f"{result['opaque']} opaque)")


def aset_png():
    """-> (masalah|None, catatan|None) untuk PNG `assets/0x70/`.

    Jalur cepat `--check-png`: hash setiap PNG ke `png_sha256` manifest selalu
    diperiksa, render ulang hanya bila bin sumber lebih baru (mtime). Tanpa
    gate ini PNG peta yang rusak hanya tertangkap bila ada yang ingat
    menjalankan perintah manual.
    """
    import importlib.util

    if not MAP_MANIFEST.exists():
        return ("assets/0x70/png", "manifest 0x70 hilang — jalankan "
                "tools/scripts/extract_assets.py"), None
    problems = []
    totals = {}
    notes = []
    for name, path in (("peta", MAP_TOOL), ("tertanam", EMBED_TOOL)):
        try:
            spec = importlib.util.spec_from_file_location(name, path)
            mod = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(mod)
            if name == "peta":
                found, note, total = mod.png_problems(mod.DEFAULT_OUT,
                                                     quick=True)
            else:
                found, note, total = mod.problems(mod.OUT, quick=True)
        except Exception as e:  # gate tidak boleh lolos diam-diam
            return ("assets/0x70/png",
                    f"gate PNG 0x70 ({name}) gagal dijalankan: "
                    f"{type(e).__name__}: {e}"), None
        totals[name] = total
        if note:
            notes.append(note)
        for item in found:
            problems.append(item if isinstance(item, str)
                            else f"{item[0]}: {item[1]}")
    if problems:
        shown = "; ".join(problems[:3])
        more = f" (+{len(problems) - 3} lain)" if len(problems) > 3 else ""
        return ("assets/0x70/png",
                f"{len(problems)} PNG bermasalah: {shown}{more} — jalankan "
                "extract_assets.py / embedded_streams.py"), None
    total = sum(totals.values())
    note = notes[0] if len(notes) == 1 else None
    if len(notes) == 2:
        note = ("render ulang PNG dilewati untuk kedua manifest (stamp cocok); "
                "hash berkas tetap diperiksa")
    return None, note or f"PNG 0x70: {total} cocok dengan manifest"


def aset_mentah():
    """-> (masalah|None, catatan|None) untuk dokumen aset mentah.

    `raw_assets.py --check` membandingkan dokumen dengan renderer yang sama;
    gate ini memanggilnya langsung supaya manifest yang berubah tanpa
    regenerasi dokumen menggagalkan tutup sesi, bukan lolos diam-diam.
    """
    import importlib.util
    import json

    out = REPO / RAW_DOC
    if not out.exists():
        return (RAW_DOC, "dokumen aset mentah hilang — jalankan "
                "tools/scripts/raw_assets.py"), None
    if not RAW_MANIFEST.exists():
        return (RAW_DOC, "manifest aset mentah hilang — jalankan "
                "tools/scripts/raw_assets.py"), None
    try:
        spec = importlib.util.spec_from_file_location("raw_assets", RAW_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render_doc(json.loads(RAW_MANIFEST.read_text()))
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (RAW_DOC,
                f"gate aset mentah gagal dijalankan: {type(e).__name__}: {e}"), None
    if out.read_text() != text:
        return (RAW_DOC, "BASI terhadap manifest — jalankan "
                "python3 tools/scripts/raw_assets.py"), None
    return None, "aset mentah sinkron"


def aset_tertanam():
    """-> (masalah|None, catatan|None) untuk dokumen bank stream tertanam.

    Dokumen itu hasil generate `embedded_streams.render_doc()`; gate ini
    memanggil renderer yang sama supaya manifest berubah tanpa regenerasi
    dokumen menggagalkan tutup sesi.
    """
    import importlib.util

    out = REPO / EMBED_DOC
    if not out.exists():
        return (EMBED_DOC, "dokumen bank tertanam hilang — jalankan "
                "python3 tools/assets/embedded_streams.py"), None
    if not EMBED_MANIFEST.exists():
        return (EMBED_DOC, "manifest bank tertanam hilang — jalankan "
                "python3 tools/assets/embedded_streams.py"), None
    try:
        spec = importlib.util.spec_from_file_location(
            "embedded_streams", EMBED_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render_doc(json.loads(EMBED_MANIFEST.read_text()))
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (EMBED_DOC,
                f"gate bank tertanam gagal dijalankan: {type(e).__name__}: {e}"), None
    if out.read_text() != text:
        return (EMBED_DOC, "BASI terhadap manifest — jalankan "
                "python3 tools/assets/embedded_streams.py"), None
    return None, "bank stream tertanam sinkron"


def palet_font():
    """-> (masalah|None, catatan|None) untuk dokumen status palet font.

    Dokumen itu hasil generate `font_palettes.render_doc()`; gate memanggil
    renderer yang sama supaya manifest berubah tanpa regenerasi dokumen
    menggagalkan tutup sesi.
    """
    import importlib.util

    out = REPO / PALET_DOC
    if not out.exists():
        return (PALET_DOC, "dokumen status palet font hilang — jalankan "
                "python3 tools/assets/font_palettes.py"), None
    if not PALET_MANIFEST.exists():
        return (PALET_DOC, "manifest status palet font hilang — jalankan "
                "python3 tools/assets/font_palettes.py"), None
    try:
        spec = importlib.util.spec_from_file_location(
            "font_palettes", PALET_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        text = mod.render_doc(json.loads(PALET_MANIFEST.read_text()))
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (PALET_DOC,
                f"gate status palet font gagal dijalankan: {type(e).__name__}: {e}"), None
    if out.read_text() != text:
        return (PALET_DOC, "BASI terhadap manifest — jalankan "
                "python3 tools/assets/font_palettes.py"), None
    return None, "status palet font sinkron"


def ekor_backlog():
    """-> (masalah|None, catatan|None) untuk dokumen backlog ekor.

    Dokumen itu hasil generate, jadi satu-satunya sumber kebenaran isinya
    adalah `ekor_snapshot.build()`. Regenerasi manual hanya terjadi kalau
    seseorang ingat; gate ini membuat kelalaian itu terlihat.
    """
    import importlib.util

    out = REPO / EKOR_DOC
    if not out.exists():
        return (EKOR_DOC, "dokumen backlog ekor hilang — jalankan "
                "tools/scripts/ekor_snapshot.py"), None
    try:
        spec = importlib.util.spec_from_file_location("ekor_snapshot", EKOR_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        existing = out.read_text()
        manual, _ = mod.split_manual(existing)
        text = mod.build(EKOR_TAIL, manual) + "\n"
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return (EKOR_DOC, f"gate ekor gagal dijalankan: {type(e).__name__}: {e}"), None
    if mod.is_stale(existing, text):
        return (EKOR_DOC, "BASI terhadap hasil generate — jalankan "
                "python3 tools/scripts/ekor_snapshot.py"), None
    return None, "backlog ekor sinkron"



def readme_stats():
    """-> (masalah|None, catatan|None) untuk blok statistik README.

    Blok `README-STATS` di README.md adalah hasil generate
    `tools/scripts/readme_stats.py`. Tanpa gate ini persentase di README akan
    basi diam-diam setiap kali ada MATCH/migrasi/aset baru.
    """
    import importlib.util

    readme = REPO / "README.md"
    if not readme.exists():
        return ("README.md", "README hilang"), None
    try:
        spec = importlib.util.spec_from_file_location("readme_stats",
                                                      README_STATS_TOOL)
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        if mod.is_stale(readme.read_text()):
            return ("README.md", "statistik BASI terhadap state/manifest — "
                    "jalankan python3 tools/scripts/readme_stats.py"), None
    except Exception as e:  # gate tidak boleh lolos diam-diam saat tool rusak
        return ("README.md",
                f"gate statistik gagal dijalankan: {type(e).__name__}: {e}"), None
    return None, "statistik README sinkron"

def engine_normalizations():
    """(problems, keyword -> nama pola) dari decomp_engine.NORMALIZATIONS.

    Tabel itu sumber kebenaran dokumen, jadi ia sendiri diverifikasi: setiap
    entri harus benar-benar dihasilkan `norm()`. Kalau engine berubah dan tabel
    tidak diperbarui, cek ini gagal (bukan lolos diam-diam).
    """
    problems = []
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    try:
        import decomp_engine
    except Exception as exc:  # pragma: no cover - lingkungan rusak
        return ([("decomp_engine.py", f"tak bisa dimuat: {exc}")], {})
    kwmap = {}
    for name, sample, want, keywords in decomp_engine.NORMALIZATIONS:
        got = decomp_engine.norm(sample)
        if got != want:
            problems.append(("decomp_engine.py",
                             f"tabel NORMALIZATIONS basi: {name} "
                             f"{sample!r} -> {got!r}, tabel bilang {want!r}"))
        for kw in keywords:
            kwmap.setdefault(kw.lower(), set()).add(name)
    return problems, kwmap


def check(max_agents):
    problems = []
    notes = []
    norm_problems, kwmap = engine_normalizations()
    problems.extend(norm_problems)
    notes.append(f"normalisasi engine terverifikasi: {len(kwmap)} kata kunci")

    agents = REPO / "AGENTS.md"
    if not agents.exists():
        return {"problems": [("AGENTS.md", "berkas tidak ada")], "stats": {}}
    text = agents.read_text()
    lines = len(text.splitlines())
    if lines > max_agents:
        problems.append(("AGENTS.md",
                         f"{lines} baris > batas {max_agents}: pindahkan detail "
                         f"ke docs/ops/ (lihat peta rute)"))
    else:
        notes.append(f"AGENTS.md {lines} baris (batas {max_agents})")

    # heading aturan stabil R1..Rn
    rules = set(re.findall(r"^##\s+R(\d+)\.", text, re.M))
    for src in [agents] + [REPO / p for p in LIVING[1:] if (REPO / p).exists()]:
        body = src.read_text()
        for m in re.finditer(r"AGENTS\.md\s+(?:rule|R)\s*(\d+)", body):
            if m.group(1) not in rules:
                problems.append((str(src.relative_to(REPO)),
                                 f"merujuk AGENTS.md rule {m.group(1)} yang "
                                 f"tidak ada (heading `## R{m.group(1)}.`)"))
        for target in LINK.findall(body):
            if target.startswith(("http://", "https://", "#", "mailto:")):
                continue
            p = (src.parent / target.split("#")[0]).resolve()
            if not p.exists() and not target.startswith("../.."):
                problems.append((str(src.relative_to(REPO)),
                                 f"link patah: {target}"))

    for rel in LIVING:
        p = REPO / rel
        if not p.exists():
            problems.append((rel, "dokumen hidup hilang"))
            continue
        for i, line in enumerate(p.read_text().splitlines(), 1):
            if NEG_NORM.search(line):
                low = line.lower()
                hits = {name for kw, names in kwmap.items()
                        if (kw in low if " " in kw
                            else re.search(rf"\b{re.escape(kw)}\b", low))
                        for name in names}
                if hits:
                    problems.append((f"{rel}:{i}",
                                     f"klaim normalisasi basi untuk "
                                     f"{', '.join(sorted(hits))}: norm() sudah "
                                     f"melakukannya — {line.strip()[:70]}"))
            for rx in STALE:
                if rx.search(line):
                    problems.append((f"{rel}:{i}",
                                     f"angka progres dipatok: {line.strip()[:70]}"))
            for m in MD_TICK.findall(line):
                if (REPO / m).exists() or (p.parent / m).exists():
                    continue
                # nama pendek di prosa (`MIGRATE.md`) boleh, asal unik di docs/
                if "/" not in m:
                    hits = named_files(m)
                    if len(hits) == 1:
                        continue
                    problems.append((f"{rel}:{i}",
                                     f"rujukan .md ambigu/tidak ada: {m} "
                                     f"({len(hits)} kandidat)"))
                    continue
                problems.append((f"{rel}:{i}", f"rujukan .md tidak ada: {m}"))

    prob, note = ekor_backlog()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = readme_stats()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_inventaris()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_0x70()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_mentah()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_sumber()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_klaim()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_aturan_gfx()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_reencode()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_png()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = aset_tertanam()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = palet_font()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    prob, note = tools_katalog()
    if prob:
        problems.append(prob)
    elif note:
        notes.append(note)

    return {"problems": problems, "stats": {"agents_lines": lines,
                                            "norm_keywords": sorted(kwmap),
                                            "rules": sorted(rules, key=int),
                                            "notes": notes}}


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--max-agents", type=int, default=130)
    a = ap.parse_args(argv)
    res = check(a.max_agents)
    if a.json:
        print(json.dumps(res, indent=1))
    else:
        for n in res["stats"].get("notes", []):
            print(f"  {n}")
        for where, why in res["problems"]:
            print(f"  MASALAH {where}: {why}")
        print(f"MASALAH dokumen: {len(res['problems'])}")
    return 1 if res["problems"] else 0


if __name__ == "__main__":
    raise SystemExit(main(__import__("sys").argv[1:]))
