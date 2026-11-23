#!/usr/bin/env python3
"""extract_assets.py — buka semua stream format `0x70` jadi berkas + PNG.

Sumber daftar stream adalah `asset_inventory.analyze()` (satu sumber dengan
inventaris), jadi offset/ukuran tidak diketik manual. Setiap stream ditulis
sebagai `.bin`, lalu dikelompokkan dari ukuran + isi:

- `palet`  — 480 B, semua u16 < 0x8000: 15 bank x 16 warna. Bukti kode:
             `Unpack(..., 0x05000000)` menulis langsung ke palette RAM.
- `tile`   — kelipatan 32 B, bukan peta: 4bpp 8x8 (satu tile 32 B).
- `peta`   — 16-bit tilemap: entri didominasi satu nilai (tile kosong/fill),
             mis. 0x03FF; lebar ditebak dari jumlah entri.
- `lain`   — tidak kelipatan tile/peta (mis. data intro): tidak dirender.

PNG yang dihasilkan:

- palet  -> kartu swatch 16 warna/baris;
- tile   -> lembar tile 4bpp 16 kolom, abu-abu indeks (tanpa palet);
- peta   -> render berwarna kalau header peta (tabel `gUnk_08105EDC`)
             menyebut tileset + palet untuk stream itu; kalau tidak, grid indeks.
             Pasangan diambil dari pointer header (bukan stream terdekat):
             +0x00 tileset, +0x04 palet, +0x0C/+0x10/+0x14 tiga lapis peta.
             Tileset/palet yang bukan bagian dari 53 simbol tetap dibuka dari
             ROM (keduanya juga stream 0x70) selama ukurannya masuk akal.

Output default `assets/0x70/` (bin/, png/, manifest.json; bisa dibuat ulang):

  python3 tools/scripts/extract_assets.py [--out DIR] [--quiet]

Tidak menjalankan build dan tidak menulis ke `baserom.gba`/`fomt.gba`.
"""
import argparse
import json
import re
import struct
import sys
import zlib
from collections import Counter
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "scripts"
sys.path.insert(0, str(TOOLS))
import asset_inventory as inv  # noqa: E402
import decompress  # noqa: E402

DEFAULT_OUT = REPO / "assets" / "0x70"
MAP_DOC = REPO / "docs" / "decomp" / "ASET-0X70-PETA-BERKAS.md"
PALETTE_SIZE = 480          # 15 bank x 16 warna
MAP_WIDTHS = (64, 32, 30, 60, 46, 40, 36, 28, 24, 20, 16, 56, 48)
MAP_HEADER_SYMBOL = "gUnk_08105EDC"
MAP_HEADER_BYTES = 40       # 10 word: tileset, palet, palet2, 3 peta, ...
MAP_LAYER_WORDS = (3, 4, 5)  # +0x0C, +0x10, +0x14
GBA_BASE = 0x08000000


def gba_rgb(v):
    return ((v & 31) * 255 // 31, ((v >> 5) & 31) * 255 // 31,
            ((v >> 10) & 31) * 255 // 31)


def write_png(path, width, height, rgb):
    """PNG truecolor 8-bit tanpa dependensi (zlib + struct)."""
    rows = b"".join(b"\x00" + bytes(rgb[y * width * 3:(y + 1) * width * 3])
                    for y in range(height))

    def chunk(tag, data):
        return (struct.pack(">I", len(data)) + tag + data
                + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF))

    ihdr = struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0)
    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", ihdr)
                     + chunk(b"IDAT", zlib.compress(rows, 9))
                     + chunk(b"IEND", b""))


def u16_list(data):
    return [int.from_bytes(data[i:i + 2], "little")
            for i in range(0, len(data) - 1, 2)]


def stream_stats(data):
    """(share entri bukan-nol, share bit 10-15 modus di antara entri itu).

    Entri tilemap memakai bit 10-15 untuk flip + bank palet, jadi sebagian
    besar entri bukan-nol berbagi bit atas yang sama. Data 4bpp tidak punya
    struktur itu, sehingga share-nya rendah.
    """
    u = u16_list(data)
    nz = [v for v in u if v]
    if not nz:
        return 0.0, 0.0
    top = Counter(v >> 10 for v in nz).most_common(1)[0][1]
    return len(nz) / len(u), top / len(nz)


def plausible_map(count):
    return any(count % w == 0 and 4 <= count // w <= 256 for w in MAP_WIDTHS)


def decide_labels(records):
    """Label per ukuran: peta kalau mayoritas stream seukuran itu bertanda peta.

    Satu stream saja tidak cukup: lapisan peta berisi banyak bank/flip sehingga
    share bit atasnya bisa rendah, sedangkan ukuran yang sama di blob lain tetap
    peta. Label per ukuran menjaga hasil konsisten untuk satu tipe aset.
    """
    counts, votes = Counter(), Counter()
    for r in records:
        counts[r["unpacked"]] += 1
        if (r["unpacked"] % 2 == 0 and r["nz"] >= 0.9
                and r["hi"] >= 0.4 and plausible_map(r["unpacked"] // 2)):
            votes[r["unpacked"]] += 1
    labels = {}
    for n, total in counts.items():
        if votes[n] / total >= 0.6:
            labels[n] = "peta"
        elif n % 32 == 0:
            labels[n] = "tile"
        else:
            labels[n] = "lain"
    return labels


def classify(data, labels):
    """-> (grup, catatan) dari ukuran + isi."""
    n = len(data)
    u = u16_list(data)
    if n == PALETTE_SIZE and u and all(v < 0x8000 for v in u):
        return "palet", "15 bank x 16 warna (0x1E0)"
    label = labels[n]
    if label == "peta":
        dom, domn = Counter(u).most_common(1)[0]
        return "peta", (f"{len(u)} entri 16-bit; entri terbanyak "
                         f"0x{dom:04X} ({domn / len(u):.0%})")
    if label == "tile":
        return "tile", f"{n // 32} tile 4bpp"
    return "lain", f"{n} B, bukan kelipatan tile dan bukan peta 16-bit"


def map_width(count):
    """Lebar tilemap: lebar GBA lazim yang membagi habis jumlah entri.

    Kandidat dicoba berurutan (64, 32, 30, 60, 46, ...) dan hanya diterima
    kalau rasio baris/lebar masuk akal (0,4-1,6); tanpa syarat itu peta 840
    entri bisa salah jadi 40x21. Fallback: pembagi pertama, lalu 32.
    """
    for w in MAP_WIDTHS:
        if count % w:
            continue
        rows = count // w
        if 4 <= rows <= 256 and 0.4 <= rows / w <= 1.6:
            return w
    for w in MAP_WIDTHS:
        if count % w == 0 and count // w >= 4:
            return w
    return 32


def render_palette(data, path):
    n = len(data) // 2
    cols, cell = 16, 12
    rows = (n + cols - 1) // cols
    rgb = bytearray(cols * cell * rows * cell * 3)
    for k in range(n):
        v = int.from_bytes(data[k * 2:k * 2 + 2], "little")
        r, g, b = gba_rgb(v)
        x0, y0 = (k % cols) * cell, (k // cols) * cell
        for y in range(y0, y0 + cell):
            for x in range(x0, x0 + cell):
                o = (y * cols * cell + x) * 3
                rgb[o:o + 3] = bytes((r, g, b))
    write_png(path, cols * cell, rows * cell, rgb)


def render_tiles(data, path, tiles_wide=16, scale=2):
    n = len(data) // 32
    rows = (n + tiles_wide - 1) // tiles_wide
    w, h = tiles_wide * 8 * scale, rows * 8 * scale
    rgb = bytearray(w * h * 3)
    for t in range(n):
        tx, ty = (t % tiles_wide) * 8 * scale, (t // tiles_wide) * 8 * scale
        for y in range(8):
            for x in range(8):
                b = data[t * 32 + y * 4 + x // 2]
                v = (b & 15) if x % 2 == 0 else (b >> 4)
                c = v * 17
                for sy in range(scale):
                    for sx in range(scale):
                        o = (((ty + y * scale + sy) * w) + tx + x * scale + sx) * 3
                        rgb[o:o + 3] = bytes((c, c, c))
    write_png(path, w, h, rgb)


def render_map(data, path, width, palette=None, tiles=None, scale=2):
    """Render 16-bit tilemap; berwarna bila palet+tileset tersedia."""
    u = u16_list(data)
    rows = max(1, len(u) // width)
    w, h = width * 8 * scale, rows * 8 * scale
    rgb = bytearray(w * h * 3)
    banks = len(palette) // 32 if palette else 0
    for k, v in enumerate(u):
        bx, by = k % width, k // width
        idx, bank = v & 0x3FF, (v >> 12) & 0xF
        hf, vf = (v >> 10) & 1, (v >> 11) & 1
        for y in range(8):
            for x in range(8):
                if palette and tiles and idx * 32 + 7 * 4 < len(tiles):
                    xx = 7 - x if hf else x
                    yy = 7 - y if vf else y
                    b = tiles[idx * 32 + yy * 4 + xx // 2]
                    ci = (b & 15) if xx % 2 == 0 else (b >> 4)
                    use = bank if bank < banks else 0
                    off = use * 32 + ci * 2
                    r, g, bcol = gba_rgb(int.from_bytes(
                        palette[off:off + 2], "little"))
                else:
                    c = ((v & 0x3FF) * 255) // 1023
                    r = g = bcol = c
                for sy in range(scale):
                    for sx in range(scale):
                        o = (((by * 8 + y) * scale + sy) * w
                             + (bx * 8 + x) * scale + sx) * 3
                        rgb[o:o + 3] = bytes((r, g, bcol))
    write_png(path, w, h, rgb)


def rom_region(symbol):
    """(offset, ukuran) dari `.incbin` milik simbol di `asm/data/*.s`."""
    pattern = re.compile(
        rf"^{symbol}:\s*(?:@[^\n]*)?\n\s*\.incbin\s+\"baserom\.gba\",\s*"
        r"0x([0-9A-Fa-f]+),\s*0x([0-9A-Fa-f]+)", re.M)
    for path in sorted((REPO / "asm" / "data").glob("*.s")):
        m = pattern.search(path.read_text())
        if m:
            return int(m.group(1), 16), int(m.group(2), 16)
    raise SystemExit(f"{symbol}: .incbin tidak ditemukan di asm/data/")


def map_headers(rom):
    """Entri header peta: tileset, palet, palet kedua, tiga lapis peta, dimensi."""
    base, size = rom_region(MAP_HEADER_SYMBOL)
    headers = []
    for k in range(size // MAP_HEADER_BYTES):
        w = struct.unpack_from("<10I", rom, base + k * MAP_HEADER_BYTES)
        headers.append({"entry": k, "tileset": w[0], "palette": w[1],
                        "palette2": w[2],
                        "maps": [w[i] for i in MAP_LAYER_WORDS],
                        "width": w[8] & 0xFFFF, "height": w[8] >> 16})
    return headers


def stream_index(inventory):
    """alamat ROM -> (simbol, indeks stream) untuk stream 0x70 yang diekstrak."""
    idx = {}
    for entry in inventory:
        for j, (at, _packed, _size, _fmt) in enumerate(entry.streams):
            idx[GBA_BASE + entry.offset + at] = (entry.name, j)
    return idx


def header_evidence(headers, index):
    """(simbol, stream) -> entri header yang memuatnya sebagai lapis peta."""
    ev = {}
    for h in headers:
        for word in MAP_LAYER_WORDS:
            key = index.get(h["maps"][word - MAP_LAYER_WORDS[0]])
            if key:
                ev.setdefault(key, []).append({
                    "entry": h["entry"], "field": word * 4,
                    "width": h["width"], "height": h["height"],
                    "tileset": h["tileset"], "palette": h["palette"]})
    return ev


def read_asset(addr, rom, index, records, cache):
    """Byte aset pasangan: stream inventaris, atau stream 0x70 lain di ROM."""
    if not addr:
        return None, None
    if addr in index:
        name, j = index[addr]
        return records[(name, j)]["data"], {"blob": name, "stream": j,
                                           "address": f"0x{addr:08X}"}
    if addr not in cache:
        try:
            data, fmt, _ = decompress.unpack(rom, addr - GBA_BASE)
        except decompress.UnpackException:
            cache[addr] = None
        else:
            cache[addr] = (data, {"address": f"0x{addr:08X}",
                                  "unpacked": len(data), "format": fmt})
    if cache[addr] is None:
        return None, None
    return cache[addr]


def pair_from_header(key, evidence, rom, index, records, cache):
    """(status, palet, tileset, bukti) untuk satu stream peta."""
    evs = evidence.get(key, [])
    if not evs:
        return "unproven", None, None, {"reason": "tidak ada entri header"}
    if len({(e["tileset"], e["palette"]) for e in evs}) > 1:
        return "unproven", None, None, {"reason": "entri header berbeda"}
    ev = evs[0]
    pdata, pref = read_asset(ev["palette"], rom, index, records, cache)
    tdata, tref = read_asset(ev["tileset"], rom, index, records, cache)
    if pdata is None or len(pdata) != PALETTE_SIZE:
        return "unproven", None, None, {"reason": "palet pasangan tidak valid"}
    if tdata is None or len(tdata) % 32 or len(tdata) < 32 * 8:
        return "unproven", None, None, {"reason": "tileset pasangan tidak valid"}
    return "verified", pdata, tdata, {
        "entry": ev["entry"], "field": ev["field"],
        "width": ev["width"], "height": ev["height"],
        "palette": pref, "tiles": tref}


def render_map_doc(manifest):
    """Markdown simbol -> stream -> berkas, dari isi manifest."""
    blobs = manifest["streams"]
    stream_count = sum(len(b["streams"]) for b in blobs)
    groups = Counter(s["group"] for b in blobs for s in b["streams"])
    kinds = Counter(s.get("png_kind", "-") for b in blobs for s in b["streams"])
    out = ["# Peta simbol aset `0x70` ke berkas", "",
           "**Dihasilkan otomatis**, jangan disunting tangan: "
           "`python3 tools/scripts/extract_assets.py`. Sumbernya manifest "
           "`assets/0x70/manifest.json` dari ekstraksi stream 0x70.", "",
           "## Cara memperbarui", "", "```sh",
           "python3 tools/scripts/extract_assets.py              # ekstrak + dokumen ini",
           "python3 tools/scripts/extract_assets.py --check-map  # exit 1 bila dokumen basi",
           "```", "",
           "## Ringkasan", "",
           "| kelas | stream |", "|---|---|"]
    for key in ("palet", "tile", "peta", "lain"):
        out.append(f"| {key} | {groups[key]} |")
    out.append("")
    verified = sum(1 for b in blobs for s in b["streams"]
                   if s.get("pair_status") == "verified")
    unproven = sum(1 for b in blobs for s in b["streams"]
                   if s.get("pair_status") == "unproven")
    order = ["swatch palet", "lembar tile 4bpp (abu-abu indeks)",
             "peta berwarna", "grid indeks (pasangan tidak ada)",
             "grid indeks (pasangan tidak terbukti)"]
    parts = [f"{k} {kinds[k]}" for k in order if kinds.get(k)]
    if kinds.get("-"):
        parts.append(f"tanpa PNG {kinds['-']}")
    out.append("PNG: " + ", ".join(parts)
               + f". Total {stream_count} stream dari {len(blobs)} simbol "
               "yang punya stream 0x70.")
    out.append("")
    out.append(f"Pasangan peta: {verified} terbukti dari header peta, "
               f"{unproven} tidak terbukti (jadi grid indeks).")
    out.append("")
    out.append("## Simbol -> stream -> berkas")
    out.append("")
    out.append("Path berkas relatif terhadap root repo. `stream` = urutan stream "
               "di dalam simbol (0 = paling awal). Pasangan palet/tileset "
               "diambil dari entri `gUnk_08105EDC` yang memuat stream itu sebagai "
               "lapis peta: +0x00 tileset, +0x04 palet, +0x0C/+0x10/+0x14 peta. "
               "Kolom bukti menyebut nomor entri dan fieldnya. Pasangan berupa "
               "alamat `0x08xxxxxx` adalah stream 0x70 di luar 53 simbol yang "
               "dibuka dari ROM saat render, bukan berkas hasil ekstraksi.")
    out.append("")
    out.append("| simbol | ukuran | # | offset | packed | buka | format | "
               "kelas | berkas | PNG | status | pasangan |")
    out.append("|---|---|---|---|---|---|---|---|---|---|---|---|")

    def ref(r):
        if not r:
            return "-"
        if "blob" in r:
            return f"{r['blob']}#{r['stream']}"
        return r["address"]

    for blob in blobs:
        for s in blob["streams"]:
            bin_link = (f"[bin](../../assets/0x70/{s['bin']})")
            png = s.get("png")
            png_link = f"[png](../../{png})" if png else "-"
            status = s.get("pair_status")
            if status == "verified":
                ev = s["pair_evidence"]
                status_cell = f"terbukti peta#{ev['entry']} +0x{ev['field']:02X}"
                pair = s["pair"]
                pair_cell = (f"palet {ref(pair['palette'])}, "
                             f"tile {ref(pair['tiles'])}")
            elif status == "unproven":
                status_cell = f"tak terbukti: {s.get('pair_reason', '?')}"
                pair_cell = "-"
            else:
                status_cell = pair_cell = "-"
            out.append(
                f"| `{blob['blob']}` | {blob['size']} | {s['index']} | "
                f"0x{s['offset']:04X} | {s['packed']} | {s['unpacked']} | "
                f"`0x{s['format']}` | {s['group']} | {bin_link} | {png_link} | "
                f"{status_cell} | {pair_cell} |")
    out.append("")
    return "\n".join(out) + "\n"


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--out", type=Path, default=DEFAULT_OUT)
    ap.add_argument("--quiet", action="store_true")
    ap.add_argument("--check-map", action="store_true",
                    help="exit 1 bila dokumen peta berkas basi terhadap manifest")
    args = ap.parse_args(argv)

    if args.check_map:
        manifest_path = args.out / "manifest.json"
        if not manifest_path.exists() or not MAP_DOC.exists():
            print("MASALAH: manifest atau dokumen peta berkas tidak ada",
                  file=sys.stderr)
            return 1
        text = render_map_doc(json.loads(manifest_path.read_text()))
        if MAP_DOC.read_text() != text:
            print(f"BASI: {MAP_DOC.relative_to(REPO)} — jalankan "
                  f"python3 tools/scripts/extract_assets.py", file=sys.stderr)
            return 1
        print("dokumen peta berkas sinkron")
        return 0

    rom = inv.DEFAULT_ROM.read_bytes()
    _, inventory, _ = inv.analyze()
    index = stream_index(inventory)
    evidence = header_evidence(map_headers(rom), index)
    external = {}

    bindir = args.out / "bin"
    pngdir = args.out / "png"
    bindir.mkdir(parents=True, exist_ok=True)
    pngdir.mkdir(parents=True, exist_ok=True)

    records = []
    for entry in inventory:
        for i, (at, packed, unpacked, fmt) in enumerate(entry.streams):
            data, _, _ = decompress.unpack(rom, entry.offset + at)
            if len(data) != unpacked:
                raise SystemExit(f"{entry.name}#{i}: ukuran {len(data)} != {unpacked}")
            nz, hi = stream_stats(data)
            records.append({"blob": entry.name, "index": i, "at": at,
                            "packed": packed, "unpacked": unpacked,
                            "format": fmt, "data": data, "nz": nz, "hi": hi})
    labels = decide_labels(records)
    by_key = {(r["blob"], r["index"]): r for r in records}

    manifest, groups = [], Counter()
    for entry in inventory:
        if not entry.streams:
            continue
        name = entry.name
        recs = [r for r in records if r["blob"] == name]
        infos, datas = [], []
        for rec in recs:
            data = rec["data"]
            group, note = classify(data, labels)
            groups[group] += 1
            base = f"{name}_{rec['index']:02d}_{rec['unpacked']}_0x{rec['format']}"
            (bindir / f"{base}.bin").write_bytes(data)
            datas.append(data)
            infos.append({"index": rec["index"], "offset": rec["at"],
                          "packed": rec["packed"],
                          "unpacked": rec["unpacked"],
                          "format": rec["format"],
                          "group": group, "note": note,
                          "bin": f"bin/{base}.bin"})
        for i, info in enumerate(infos):
            data = datas[i]
            png = None
            if info["group"] == "palet":
                png = f"png/{name}_{i:02d}_palet.png"
                render_palette(data, args.out / png)
                info["png_kind"] = "swatch palet"
            elif info["group"] == "tile":
                png = f"png/{name}_{i:02d}_tile.png"
                render_tiles(data, args.out / png)
                info["png_kind"] = "lembar tile 4bpp (abu-abu indeks)"
            elif info["group"] == "peta":
                status, pdata, tdata, ev = pair_from_header(
                    (name, i), evidence, rom, index, by_key, external)
                width = ev.get("width") or map_width(len(data) // 2)
                if (status == "verified"
                        and ev["width"] * ev["height"] * 2 == len(data)):
                    png = (f"png/{name}_{i:02d}_peta_{width}x"
                           f"{ev['height']}.png")
                    render_map(data, args.out / png, width, pdata, tdata)
                    info["png_kind"] = "peta berwarna"
                    info["pair_status"] = "verified"
                    info["pair"] = {"palette": ev["palette"],
                                    "tiles": ev["tiles"]}
                    info["pair_evidence"] = {"entry": ev["entry"],
                                             "field": ev["field"]}
                else:
                    reason = (ev.get("reason") if status == "unproven"
                              else "dimensi header tidak cocok")
                    png = f"png/{name}_{i:02d}_peta_indeks_{width}.png"
                    render_map(data, args.out / png, width)
                    info["png_kind"] = (
                        "grid indeks (pasangan tidak terbukti)")
                    info["pair_status"] = "unproven"
                    info["pair_reason"] = reason
                info["map_width"] = width
            if png:
                info["png"] = str(args.out.relative_to(REPO) / png)
        manifest.append({"blob": name, "size": entry.size, "streams": infos})

    manifest_doc = {"streams": manifest}
    (args.out / "manifest.json").write_text(
        json.dumps(manifest_doc, indent=1) + "\n")
    MAP_DOC.parent.mkdir(parents=True, exist_ok=True)
    MAP_DOC.write_text(render_map_doc(manifest_doc))
    if not args.quiet:
        print(f"output: {args.out.relative_to(REPO)}")
        for key in ("palet", "tile", "peta", "lain"):
            print(f"  {key:6s} {groups[key]:3d}")
        rendered = sum(1 for b in manifest for s in b["streams"]
                       if s.get("png_kind") == "peta berwarna")
        print(f"  png peta berwarna: {rendered}")
        print(f"  dokumen: {MAP_DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
