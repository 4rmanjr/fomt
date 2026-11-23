#!/usr/bin/env python3
"""raw_assets.py — inventaris + kelompok + render 231 blob mentah.

Sumber daftar tetap `asset_inventory.analyze()` (satu sumber dengan
`ASET-INVENTARIS.md`), tetapi hanya blob yang **bukan** format `0x70`.
Tujuannya supaya cakupan aset tidak berhenti di 53 blob terkompresi.

Kelompok (heuristik isi, bukan nama simbol):

- `palet`     — <= 1024 B, kelipatan 32 B, semua u16 < 0x8000 (bit 15 kosong).
                Dirender sebagai kartu swatch.
- `sprite/OBJ`— kelipatan 32 B (satu tile 4bpp = 32 B), bukan palet/tilemap.
                Blob non-32 B yang menyisakan 1-31 B header/ekor juga masuk
                sini bila sisa tile-nya padat indeks 0 dan sedikit warna.
                Dirender sebagai lembar tile abu-abu indeks.
- `tilemap`   — entri 16-bit dengan bit 10-15 konsisten (>= 40% modal) dan
                jumlah entri masuk akal untuk lebar tilemap. Dirender sebagai
                grid indeks.
- `gambar terkompresi` — blob berisi satu atau beberapa stream `0x70` yang
                terverifikasi; tidak dirender mentah (dekompresi ada di
                `assets/0x70`).
- `tabel`     — sisanya: tabel angka/struct, termasuk data non-32 B yang
                tidak lolos uji tile. Tidak dirender.

PNG ditulis ke `assets/raw/png/`, metadata ke `assets/raw/manifest.json`, dan
laporan ke `docs/decomp/ASET-MENTAH-BERKAS.md` (hasil generate).

  python3 tools/scripts/raw_assets.py [--out DIR] [--quiet]
  python3 tools/scripts/raw_assets.py --check   # exit 1 bila dokumen basi

Tidak menjalankan build dan tidak menulis `baserom.gba`/`fomt.gba`.
"""
import argparse
import collections
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "scripts"
sys.path.insert(0, str(TOOLS))
import asset_inventory as inv  # noqa: E402
import extract_assets as fx  # noqa: E402

DEFAULT_OUT = REPO / "assets" / "raw"
DOC = REPO / "docs" / "decomp" / "ASET-MENTAH-BERKAS.md"
RAW_WIDTHS = (64, 32, 30, 60, 46, 40, 36, 28, 24, 20, 16, 56, 48,
              80, 96, 128, 8, 12, 14, 18, 22, 26, 34, 38, 42, 44,
              50, 52, 54, 58, 62, 66, 68, 70, 72, 76)

# Blob yang lolos uji tile secara statistik, tetapi call site membuktikan
# bahwa isinya bukan tile 4bpp datar. Kunci ini berasal dari penelusuran asm:
# `container` = wadah font/objek (header count + tabel, atau record glyph);
# `tilemap` = array u16 yang ditulis ke peta; `gambar terkompresi` = blob with
# valid embedded `0x70` streams. Jangan menambah entri hanya dari nama symbol;
# setiap entri harus punya bukti call site/stream di komentar nilainya.
VERIFIED_LAYOUT = {
    "gUnk_08523290": (
        "tabel", None,
        "tabel glyph int16; func_080D0D28 memakai ldrsh, 0xffff = sentinel",
    ),
    "gUnk_0869B284": (
        "gambar terkompresi", None,
        "palet 0x00-0x7f; bank 37 stream 0x70 valid (mulai 0x4ac); contoh decode menghasilkan gambar UI",
    ),
    "gUnk_086D74F8": (
        "gambar terkompresi", None,
        "2 stream 0x70 valid (0x890, 0x3ad4); palet di 0x20",
    ),
    "gUnk_084F90CC": (
        "sprite/OBJ", "container",
        "glyph 12 B; func_080D0D28 indeks r5*12 -> func_0300085C",
    ),
    "gUnk_084FA9A0": (
        "sprite/OBJ", "container",
        "glyph 24 B; func_080D0D28 indeks r5*24 -> func_03000714",
    ),
    "gUnk_0852D984": (
        "sprite/OBJ", "container",
        "count 184 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_0858BA28": (
        "sprite/OBJ", "container",
        "count 2551 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_086F2FAC": (
        "sprite/OBJ", "container",
        "count 4 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_0871D51C": (
        "sprite/OBJ", "container",
        "count 11 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_08728320": (
        "sprite/OBJ", "container",
        "count 7 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_08729460": (
        "sprite/OBJ", "container",
        "count 1 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_0872DE44": (
        "sprite/OBJ", "container",
        "count 27 + tabel; func_080522F8 -> func_0805E6CC, bukan tile datar",
    ),
    "gUnk_08731B40": (
        "sprite/OBJ", "container",
        "count 20 + tabel; @ChickenPortraits, func_0805E6CC, bukan tile datar",
    ),
    "gUnk_087409E4": (
        "sprite/OBJ", "container",
        "count 1 + tabel; func_0805E6CC (font/objek), bukan tile datar",
    ),
    "gUnk_0874F34C": (
        "sprite/OBJ", "container",
        "count 22 + tabel; func_080A220C -> func_0805E6CC, bukan tile datar",
    ),
    "gUnk_086DE7F4": (
        "tilemap", None,
        "25204 entri u16; func_080AA9C8 memilihnya sebagai layer peta",
    ),
}


def u16s(data):
    return [int.from_bytes(data[i:i + 2], "little")
            for i in range(0, len(data) - 1, 2)]


def tilemap_width(count):
    """Lebar tilemap: pembagi lazim dengan 2-512 baris dan rasio wajar."""
    for w in RAW_WIDTHS:
        if count % w:
            continue
        rows = count // w
        if 2 <= rows <= 512 and 0.2 <= rows / w <= 2.5:
            return w
    for w in RAW_WIDTHS:
        if count % w == 0 and count // w >= 2:
            return w
    return 32


def plausible_tilemap(count):
    return any(count % w == 0 and 2 <= count // w <= 512
               for w in RAW_WIDTHS)


def tile_prefix(data):
    """-> (start, ekor, stats) bila blob non-32 B berisi tile 4bpp.

    Header/ekor paling banyak 31 B. Header kecil (u32 awal < 0x10000)
    dilewati di depan; bila justru u32 akhir yang kecil, sisanya dipotong
    di belakang. Sisa harus didominasi nibble nol dan hanya memakai sedikit
    indeks per tile; tabel angka/pointer tidak lolos.
    """
    n = len(data)
    if n < 4096 or n % 32 == 0:
        return None
    cut = n % 32
    head = int.from_bytes(data[:4], "little")
    tail = int.from_bytes(data[-4:], "little")
    if head >= 0x10000 and tail < 0x10000:
        start, tail_cut = 0, cut
    else:
        start, tail_cut = cut, 0
    body = data[start:n - tail_cut]
    tiles = [body[i:i + 32] for i in range(0, len(body) // 32 * 32, 32)]
    if not tiles:
        return None
    zero = 0.0
    colors = 0.0
    for tile in tiles:
        ns = [v for b in tile for v in (b & 15, b >> 4)]
        zero += sum(1 for v in ns if v == 0) / 64
        colors += len(set(ns))
    zero, colors = zero / len(tiles), colors / len(tiles)
    if zero >= 0.13 and colors <= 12:
        return start, tail_cut, (zero, colors)
    return None


def classify(data, name=None):
    """-> (kelompok, catatan, (start, ekor) atau None).

    `name` hanya dipakai untuk override hasil verifikasi call site; tanpa nama,
    classifier tetap murni berbasis isi agar fixture kecil tetap deterministik.
    """
    if name in VERIFIED_LAYOUT:
        group, _layout, note = VERIFIED_LAYOUT[name]
        return group, note, None
    n = len(data)
    u = u16s(data)
    if n and n <= 1024 and n % 32 == 0 and u and all(v < 0x8000 for v in u):
        return "palet", f"{len(u)} warna (semua u16 < 0x8000)", None
    nz = [v for v in u if v]
    if n >= 32 and n % 2 == 0 and nz:
        top = collections.Counter(v >> 10 for v in nz).most_common(1)[0][1]
        modal = collections.Counter(u).most_common(1)[0][1]
        if (top / len(nz) >= 0.4 and len(nz) / len(u) >= 0.8
                and modal / len(u) < 0.9 and plausible_tilemap(len(u))):
            width = tilemap_width(len(u))
            return ("tilemap", f"{len(u)} entri 16-bit; "
                    f"bit 10-15 modal {top / len(nz):.0%}", None)
    if n % 32 == 0:
        return "sprite/OBJ", f"{n // 32} tile 4bpp (32 B/tile)", None
    window = tile_prefix(data)
    if window:
        start, tail_cut, (zero, colors) = window
        tiles = (n - start - tail_cut) // 32
        part = (f"setelah {start} B header" if start
                else f"dipotong {tail_cut} B ekor")
        return ("sprite/OBJ", f"{tiles} tile 4bpp {part}; "
                f"{zero:.0%} nibble nol, {colors:.1f} indeks/tile",
                (start, tail_cut))
    words = [int.from_bytes(data[i:i + 4], "little")
             for i in range(0, n - 3, 4)]
    ptr = sum(1 for w in words if 0x08000000 <= w < 0x09000000)
    note = f"{n} B, bukan kelipatan 32 B"
    if ptr:
        note += f"; {ptr}/{max(1, len(words))} word menunjuk ROM"
    return "tabel", note, None


def render(entry, data, out, group, note):
    """Tulis PNG untuk kelompok yang bisa dirender; -> path relatif atau None."""
    name = entry["symbol"]
    if group == "palet":
        png = f"png/{name}_{entry['size']}_palet.png"
        fx.render_palette(data, out / png)
        return f"assets/raw/{png}"
    if group == "sprite/OBJ":
        if entry.get("layout") == "container":
            return None
        start = entry.get("tile_offset", 0)
        tail = entry.get("tile_trim", 0)
        body = data[start:len(data) - tail] if tail else data[start:]
        tiles = len(body) // 32
        png = f"png/{name}_{entry['size']}_sprite.png"
        fx.render_tiles(body, out / png,
                        tiles_wide=16 if tiles <= 512 else 32,
                        scale=3 if tiles <= 64 else (2 if tiles <= 512 else 1))
        return f"assets/raw/{png}"
    if group == "tilemap":
        count = len(data) // 2
        width = tilemap_width(count)
        png = f"png/{name}_{entry['size']}_tilemap_{width}.png"
        fx.render_map(data, out / png, width)
        return f"assets/raw/{png}"
    return None


def build(rom, entries):
    rows = []
    for entry in entries:
        if entry.kind == "lzss-0x70":
            continue
        data = rom[entry.offset:entry.offset + entry.size]
        group, note, window = classify(data, entry.name)
        layout = VERIFIED_LAYOUT.get(entry.name, (None, None, None))[1]
        row = {"symbol": entry.name, "offset": f"0x{entry.offset:06X}",
               "size": entry.size, "group": group, "note": note}
        if layout:
            row["layout"] = layout
        if window:
            row["tile_offset"], row["tile_trim"] = window
        row["data"] = data
        rows.append(row)
    return rows


def write_outputs(rows, out):
    (out / "png").mkdir(parents=True, exist_ok=True)
    for row in rows:
        png = render(row, row.pop("data"), out, row["group"], row["note"])
        row["renderable"] = png is not None
        if png:
            row["png"] = png
    manifest = {"blobs": rows}
    (out / "manifest.json").write_text(json.dumps(manifest, indent=1) + "\n")
    return manifest


def render_doc(manifest):
    rows = manifest["blobs"]
    groups = collections.Counter(r["group"] for r in rows)
    rendered = sum(1 for r in rows if r["renderable"])
    out = ["# Aset mentah `data_0813B288.s`", "",
           "**Dihasilkan otomatis**, jangan disunting tangan: "
           "`python3 tools/scripts/raw_assets.py`. Sumber daftar dan offset: "
           "`asset_inventory.analyze()` (`ASET-INVENTARIS.md`); yang dicakup "
           "di sini hanya blob yang bukan format `0x70` (lihat "
           "`ASET-0X70-PETA-BERKAS.md` untuk yang terkompresi).", "",
           "## Cara memperbarui", "", "```sh",
           "python3 tools/scripts/raw_assets.py           # tulis PNG + manifest + dokumen",
           "python3 tools/scripts/raw_assets.py --check   # exit 1 bila dokumen basi",
           "```", "", "## Ringkasan", "",
           "| kelompok | blob | bisa dirender |", "|---|---|---|"]
    for g in ("palet", "sprite/OBJ", "tilemap", "gambar terkompresi", "tabel"):
        out.append(f"| {g} | {groups[g]} | "
                   f"{sum(1 for r in rows if r['group'] == g and r['renderable'])} |")
    out.append(f"| **total** | **{len(rows)}** | **{rendered}** |")
    out.append("")
    out.append("Kelompok ditentukan dari isi, bukan nama simbol: palet = semua "
               "u16 < 0x8000 dan <= 1 KB; sprite/OBJ = kelipatan 32 B (tile "
               "4bpp), ditambah blob non-32 B yang setelah header/ekor <= 31 B "
               "menyisakan tile dengan >= 13% nibble nol dan <= 12 indeks/tile; "
               "tilemap = entri 16-bit dengan bit 10-15 konsisten; "
               "gambar terkompresi = blob dengan stream 0x70 valid; sisanya "
               "tabel/struct dan tidak dirender. Offset/ekor yang dipotong "
               "dicatat di manifest (`tile_offset`/`tile_trim`). Override "
               "`layout: container` menandai wadah font/objek yang sudah "
               "diverifikasi dari call site; isinya bukan tile 4bpp datar dan "
               "tidak dirender sebagai lembar tile. Batas ini heuristik, bukan "
               "bukti format; override call-site adalah bukti terpisah.")
    out.append("")
    for g in ("palet", "sprite/OBJ", "tilemap", "gambar terkompresi", "tabel"):
        sel = [r for r in rows if r["group"] == g]
        if not sel:
            continue
        out.append(f"## {g} ({len(sel)} blob)")
        out.append("")
        if g == "palet":
            out.append("Dirender sebagai kartu swatch 16 warna per baris, "
                       "warna GBA 5-5-5.")
        elif g == "sprite/OBJ":
            out.append("Dirender sebagai lembar tile 4bpp abu-abu indeks "
                       "(tanpa palet; warna asli butuh palet OBJ terpisah). "
                       "Entri `layout: container` adalah wadah font/objek "
                       "terverifikasi call-site dan sengaja tidak dirender.")
        elif g == "tilemap":
            out.append("Dirender sebagai grid indeks; lebar ditebak dari "
                       "jumlah entri dan dicantumkan di nama berkas.")
        elif g == "gambar terkompresi":
            out.append("Tidak dirender mentah: berisi stream `0x70`; "
                       "dekompresi/ekstraksi ada di `assets/0x70`.")
        else:
            out.append("Tidak dirender: data angka/struct, bukan piksel atau "
                       "tilemap 16-bit.")
        out.append("")
        out.append("| simbol | offset | ukuran | catatan | bisa dirender | PNG |")
        out.append("|---|---|---|---|---|---|")
        for r in sorted(sel, key=lambda x: -x["size"]):
            png = (f"[png](../../{r['png']})" if r.get("png") else "-")
            out.append(f"| `{r['symbol']}` | `{r['offset']}` | {r['size']} | "
                       f"{r['note']} | {'ya' if r['renderable'] else 'tidak'} | "
                       f"{png} |")
        out.append("")
    return "\n".join(out) + "\n"


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--out", type=Path, default=DEFAULT_OUT)
    ap.add_argument("--quiet", action="store_true")
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila dokumen aset mentah basi")
    args = ap.parse_args(argv)

    if args.check:
        path = args.out / "manifest.json"
        if not path.exists() or not DOC.exists():
            print("MASALAH: manifest atau dokumen aset mentah tidak ada",
                  file=sys.stderr)
            return 1
        text = render_doc(json.loads(path.read_text()))
        if DOC.read_text() != text:
            print(f"BASI: {DOC.relative_to(REPO)} — jalankan "
                  f"python3 tools/scripts/raw_assets.py", file=sys.stderr)
            return 1
        print("dokumen aset mentah sinkron")
        return 0

    rom = inv.DEFAULT_ROM.read_bytes()
    _, entries, _ = inv.analyze()
    rows = build(rom, entries)
    manifest = write_outputs(rows, args.out)
    DOC.parent.mkdir(parents=True, exist_ok=True)
    DOC.write_text(render_doc(manifest))
    if not args.quiet:
        groups = collections.Counter(r["group"] for r in manifest["blobs"])
        print(f"output: {args.out.relative_to(REPO)}")
        for g in ("palet", "sprite/OBJ", "tilemap", "gambar terkompresi", "tabel"):
            print(f"  {g:17s} {groups[g]:3d}")
        print(f"  dirender    "
              f"{sum(1 for r in manifest['blobs'] if r['renderable']):3d}")
        print(f"  dokumen: {DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
