#!/usr/bin/env python3
"""raw_assets.py — inventaris + kelompok + render 231 blob mentah.

Sumber daftar tetap `asset_inventory.analyze()` (satu sumber dengan
`ASET-INVENTARIS.md`), tetapi hanya blob yang **bukan** format `0x70`.
Tujuannya supaya cakupan aset tidak berhenti di 53 blob terkompresi.

Kelompok (heuristik isi, bukan nama simbol):

- `palet`     — <= 1024 B, kelipatan 32 B, semua u16 < 0x8000 (bit 15 kosong).
                Dirender sebagai kartu swatch.
- `sprite/OBJ`— kelipatan 32 B (satu tile 4bpp = 32 B), bukan palet/tilemap.
                Dirender sebagai lembar tile abu-abu indeks.
- `tilemap`   — entri 16-bit dengan bit 10-15 konsisten (>= 40% modal) dan
                jumlah entri masuk akal untuk lebar tilemap. Dirender sebagai
                grid indeks.
- `tabel`     — sisanya: tabel angka/struct, termasuk data besar yang tidak
                kelipatan 32 B. Tidak dirender.

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


def classify(data):
    """-> (kelompok, catatan) dari isi blob mentah."""
    n = len(data)
    u = u16s(data)
    if n and n <= 1024 and n % 32 == 0 and u and all(v < 0x8000 for v in u):
        return "palet", f"{len(u)} warna (semua u16 < 0x8000)"
    nz = [v for v in u if v]
    if n >= 32 and n % 2 == 0 and nz:
        top = collections.Counter(v >> 10 for v in nz).most_common(1)[0][1]
        modal = collections.Counter(u).most_common(1)[0][1]
        if (top / len(nz) >= 0.4 and len(nz) / len(u) >= 0.8
                and modal / len(u) < 0.9 and plausible_tilemap(len(u))):
            width = tilemap_width(len(u))
            return "tilemap", (f"{len(u)} entri 16-bit; "
                               f"bit 10-15 modal {top / len(nz):.0%}")
    if n % 32 == 0:
        return "sprite/OBJ", f"{n // 32} tile 4bpp (32 B/tile)"
    words = [int.from_bytes(data[i:i + 4], "little")
             for i in range(0, n - 3, 4)]
    ptr = sum(1 for w in words if 0x08000000 <= w < 0x09000000)
    note = f"{n} B, bukan kelipatan 32 B"
    if ptr:
        note += f"; {ptr}/{max(1, len(words))} word menunjuk ROM"
    return "tabel", note


def render(entry, data, out, group, note):
    """Tulis PNG untuk kelompok yang bisa dirender; -> path relatif atau None."""
    name = entry["symbol"]
    if group == "palet":
        png = f"png/{name}_{entry['size']}_palet.png"
        fx.render_palette(data, out / png)
        return f"assets/raw/{png}"
    if group == "sprite/OBJ":
        tiles = len(data) // 32
        png = f"png/{name}_{entry['size']}_sprite.png"
        fx.render_tiles(data, out / png, tiles_wide=16 if tiles <= 512 else 32,
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
        group, note = classify(data)
        rows.append({"symbol": entry.name, "offset": f"0x{entry.offset:06X}",
                     "size": entry.size, "group": group, "note": note,
                     "data": data})
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
    for g in ("palet", "sprite/OBJ", "tilemap", "tabel"):
        out.append(f"| {g} | {groups[g]} | "
                   f"{sum(1 for r in rows if r['group'] == g and r['renderable'])} |")
    out.append(f"| **total** | **{len(rows)}** | **{rendered}** |")
    out.append("")
    out.append("Kelompok ditentukan dari isi, bukan nama simbol: palet = semua "
               "u16 < 0x8000 dan <= 1 KB; sprite/OBJ = kelipatan 32 B (tile "
               "4bpp); tilemap = entri 16-bit dengan bit 10-15 konsisten; "
               "sisanya tabel/struct dan tidak dirender. Batas ini heuristik: "
               "blob yang tidak kelipatan 32 B tidak dipaksakan jadi tile.")
    out.append("")
    for g in ("palet", "sprite/OBJ", "tilemap", "tabel"):
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
                       "(tanpa palet; warna asli butuh palet OBJ terpisah).")
        elif g == "tilemap":
            out.append("Dirender sebagai grid indeks; lebar ditebak dari "
                       "jumlah entri dan dicantumkan di nama berkas.")
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
        for g in ("palet", "sprite/OBJ", "tilemap", "tabel"):
            print(f"  {g:11s} {groups[g]:3d}")
        print(f"  dirender    "
              f"{sum(1 for r in manifest['blobs'] if r['renderable']):3d}")
        print(f"  dokumen: {DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
