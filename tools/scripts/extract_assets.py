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
- `layar`  — tilemap layar statis (logo/HUD) yang dimuat scene tetap; bukan
             lapis peta dan tidak masuk hitungan peta berwarna.
- `lain`   — tidak kelipatan tile/peta (mis. data intro): tidak dirender.

PNG yang dihasilkan:

- palet  -> kartu swatch 16 warna/baris;
- tile   -> lembar tile 4bpp 16 kolom, abu-abu indeks (tanpa palet);
- peta   -> render berwarna kalau pasangannya terbukti; kalau tidak, grid.
- layar  -> render berwarna untuk tilemap scene logo/HUD, terpisah dari peta.
             Keduanya memakai bukti pertama: call site `Unpack`/salin di `asm/`
             yang menulis
             peta ke 0x0600C000-0x0600FFFF, palet ke 0x05000000-0x050001FF,
             dan tileset ke 0x06000000-0x0600BFFF dalam fungsi yang sama.
             Stream container tidak punya simbol statis (dialamatkan lewat
             pointer header), jadi untuk itu dipakai entri `gUnk_08105EDC`:
             +0x00 tileset, +0x04 palet, +0x0C/+0x10/+0x14 tiga lapis peta.
             Tileset/palet yang bukan bagian dari 53 simbol tetap dibuka dari
             ROM (keduanya juga stream 0x70) selama ukurannya masuk akal.

Output default `assets/0x70/` (bin/, png/, manifest.json; bisa dibuat ulang):

  python3 tools/scripts/extract_assets.py [--out DIR] [--quiet]

Tidak menjalankan build dan tidak menulis ke `baserom.gba`/`fomt.gba`.
"""
import argparse
import hashlib
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
# Jejak loader untuk 59 peta ber-header. Tidak ada call site `Unpack` yang
# menulis field lapis header langsung ke 0x0600xxxx: loader lapis menulis ke
# buffer milik objek. Bukti ini dicatat di manifest dan dokumen, bukan
# dinaikkan menjadi "callsite".
MAP_LOADER = {
    "header_table": MAP_HEADER_SYMBOL,
    "header_getter": "GetMapData",
    "header_getter_address": "0x080A4698",
    "header_stride": MAP_HEADER_BYTES,
    "layer_loader": "func_080A5CC0",
    "layer_loader_address": "0x080A5CC0",
    "layer_loader_callers": ["func_080A6660", "func_080CFBAC"],
    "layer_fields": ["+0x0C", "+0x10", "+0x14"],
    "layer_destinations": "arg0+0x10/+0x14/+0x18",
    "layer_dest_kind": "buffer objek (dialokasikan func_080A4A94), bukan 0x0600xxxx",
    "tileset_loader": "func_080A5EA0",
    "tileset_loader_address": "0x080A5EA0",
    "tileset_source": "+0x00",
    "tileset_dest": "0x06000000",
    "vram_layer_callsite": None,
    "conclusion": "header-only: tidak ada call site Unpack field lapis peta "
                  "ke 0x0600xxxx; loader lapis memakai buffer objek",
}
GBA_BASE = 0x08000000
# Tilemap layar statis: bukan lapis peta dan tidak boleh masuk hitungan peta.
# Buktinya fungsi pemuat scene, bukan tebakan dari gambar: logo Natsume dimuat
# scene intro/boot, panel HUD dimuat fungsi panel tiga-lapis.
SCREEN_SCENES = {
    ("intro_scene.s", "func_08000F5C"): {
        "kind": "logo",
        "label": "logo Natsume (intro)",
        "reason": "scene intro memuat latar logo, bukan lapis peta",
    },
    ("code_0803EE94.s", "func_08077810"): {
        "kind": "logo",
        "label": "logo Natsume (boot)",
        "reason": "scene boot memuat latar logo, bukan lapis peta",
    },
    ("code_809E804.s", "func_080A2BA4"): {
        "kind": "hud",
        "label": "HUD/panel tetap",
        "reason": "tiga lapis panel layar, bukan lapis peta",
    },
}
PALETTE_RAM = (0x05000000, 0x05000200)
TILE_RAM = (0x06000000, 0x0600C000)
MAP_RAM = (0x0600C000, 0x06010000)


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
                        "palette2": w[2], "interior": bool(w[9] & 1),
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
    """(simbol, stream) -> entri header yang memuatnya sebagai lapis peta.

    +0x08 selalu palet kedua (480 B); tiga lapis peta ada di
    +0x0C/+0x10/+0x14. Flag interior/eksterior (+0x24) tidak mengubah bentuk
    header, hanya menandai jenis peta.
    """
    ev = {}
    for h in headers:
        for pos, word in enumerate(MAP_LAYER_WORDS, 1):
            key = index.get(h["maps"][pos - 1])
            if key:
                ev.setdefault(key, []).append({
                    "entry": h["entry"], "field": word * 4,
                    "layer": pos, "layers": len(MAP_LAYER_WORDS),
                    "interior": h["interior"],
                    "width": h["width"], "height": h["height"],
                    "tileset": h["tileset"], "palette": h["palette"],
                    "palette2": h["palette2"]})
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
                                  "unpacked": len(data), "format": fmt,
                                  "sha256": hashlib.sha256(data).hexdigest()})
    if cache[addr] is None:
        return None, None
    return cache[addr]


ASM = REPO / "asm"
_CONST = re.compile(r"ldr r(\d+), \.\w+ @ =0x([0-9A-Fa-f]+)")
_MOVS = re.compile(r"movs r(\d+), #(0x[0-9A-Fa-f]+|\d+)")
_LSL = re.compile(r"lsls r(\d+), r\1, #(0x[0-9A-Fa-f]+|\d+)")
_MOV = re.compile(r"mov (r\d+|sb|sl|fp|ip), (r\d+|sb|sl|fp|ip)")
_ADD3 = re.compile(r"adds? (r\d+|sb|sl|fp|ip), (r\d+|sb|sl|fp|ip), "
                   r"#(0x[0-9A-Fa-f]+|\d+)")
_ADD2 = re.compile(r"adds? (r\d+|sb|sl|fp|ip), #(0x[0-9A-Fa-f]+|\d+)")
_LD0 = re.compile(r"ldr r0, \.\w+ @ =([A-Za-z_]\w*)")
_LD0NUM = re.compile(r"ldr r0, \.\w+ @ =0x[0-9A-Fa-f]+")
_WRITE = re.compile(r"\s*(?:ldr|ldrb|ldrh|ldrsb|ldrsh|mov|movs|adds|adcs|subs|"
                    r"sbcs|lsls|lsrs|asrs|ands|orrs|eors|muls|bics|mvn|"
                    r"rors)\s+(r\d+|sb|sl|fp|ip)\b")
_ALIAS = {"sb": 9, "sl": 10, "fp": 11, "ip": 12}


def _reg(tok):
    return _ALIAS.get(tok, int(tok[1:]) if tok.startswith("r") else tok)


def _num(tok):
    return int(tok, 16) if tok.startswith("0x") else int(tok)


def unpack_sites():
    """Call site `Unpack`/salin palet: simbol sumber, offset, dan RAM tujuan.

    Register tujuan dilacak sepanjang fungsi (`ldr r1,=0x0600E800`,
    `mov r1,r8`, `adds r1,r4,#0`). Tulisan yang tidak dikenali mengosongkan
    konstanta register itu, supaya tujuan tidak diambil dari nilai basi.
    """
    sites, fn = [], None
    for path in sorted(ASM.glob("*.s")):
        const, symbol, off = {}, None, 0
        for line_no, line in enumerate(path.read_text().splitlines(), 1):
            m = re.match(r"\s*thumb_func_start\s+(\w+)", line)
            if m:
                fn, const, symbol, off = m.group(1), {}, None, 0
                continue
            explicit = set()
            m = _CONST.search(line)
            if m:
                const[int(m.group(1))] = int(m.group(2), 16)
                explicit.add(int(m.group(1)))
            m = _MOVS.search(line)
            if m:
                const[int(m.group(1))] = _num(m.group(2))
                explicit.add(int(m.group(1)))
            m = _LSL.search(line)
            if m:
                r = int(m.group(1))
                const[r] = const.get(r, 0) << _num(m.group(2))
                explicit.add(r)
            m = _MOV.search(line)
            if m:
                d = _reg(m.group(1))
                if _reg(m.group(2)) in const:
                    const[d] = const[_reg(m.group(2))]
                else:
                    const.pop(d, None)
                explicit.add(d)
            m = _ADD3.search(line)
            if m:
                d, s = _reg(m.group(1)), _reg(m.group(2))
                if s in const:
                    const[d] = const[s] + _num(m.group(3))
                else:
                    const.pop(d, None)
                explicit.add(d)
            m = _ADD2.search(line)
            if m:
                d = _reg(m.group(1))
                const[d] = const.get(d, 0) + _num(m.group(2))
                explicit.add(d)
            for w in _WRITE.findall(line):
                if _reg(w) not in explicit:
                    const.pop(_reg(w), None)

            m = _LD0.search(line)
            if m:
                symbol, off = m.group(1), 0
            elif _LD0NUM.search(line):
                symbol = None
            elif _ADD2.search(line) and _reg(_ADD2.search(line).group(1)) == 0:
                off += _num(_ADD2.search(line).group(2))
            elif 0 in {_reg(w) for w in _WRITE.findall(line)}:
                symbol = None

            if not symbol:
                continue
            if "bl Unpack" in line:
                sites.append({"kind": "unpack", "file": path.name,
                              "function": fn, "line": line_no,
                              "symbol": symbol, "offset": off,
                              "dest": const.get(1)})
            elif "bl func_08008E64" in line:
                sites.append({"kind": "copy", "file": path.name,
                              "function": fn, "line": line_no,
                              "symbol": symbol, "offset": off,
                              "dest": const.get(1), "size": const.get(2)})
    return sites


def _ram(dest):
    if dest is None:
        return None
    if PALETTE_RAM[0] <= dest < PALETTE_RAM[1]:
        return "palet"
    if TILE_RAM[0] <= dest < TILE_RAM[1]:
        return "tile"
    if MAP_RAM[0] <= dest < MAP_RAM[1]:
        return "peta"
    return None


def callsite_evidence(sites, index):
    """(simbol, stream) -> pasangan dari fungsi yang memuat peta ke layar.

    Hanya berlaku bila call site menunjuk tepat stream itu (alamat simbol +
    offset). Stream container yang dialamatkan lewat pointer header tidak
    punya call site statis dan tetap memakai bukti header.
    """
    by_fn = {}
    for s in sites:
        by_fn.setdefault((s["file"], s["function"]), []).append(s)
    evidence = {}
    for (path, fn), group in by_fn.items():
        group.sort(key=lambda s: s["line"])
        for i, s in enumerate(group):
            if s["kind"] != "unpack" or _ram(s["dest"]) != "peta":
                continue
            pal = next((p for p in reversed(group[:i])
                        if _ram(p["dest"]) == "palet"), None)
            tiles = next((p for p in reversed(group[:i])
                          if p["kind"] == "unpack"
                          and _ram(p["dest"]) == "tile"), None)
            if pal is None:
                pal = next((p for p in group if _ram(p["dest"]) == "palet"),
                           None)
            if tiles is None:
                tiles = next((p for p in group if p["kind"] == "unpack"
                              and _ram(p["dest"]) == "tile"), None)
            if pal is None or tiles is None:
                continue
            try:
                at = rom_region(s["symbol"])[0] + s["offset"]
            except SystemExit:
                continue
            key = index.get(GBA_BASE + at)
            if not key:
                continue
            evidence.setdefault(key, []).append({
                "source": "callsite", "file": path, "function": fn,
                "line": s["line"], "dest": s["dest"],
                "palette": {"symbol": pal["symbol"], "line": pal["line"],
                            "dest": pal["dest"], "kind": pal["kind"],
                            "size": pal.get("size")},
                "tiles": {"symbol": tiles["symbol"],
                          "line": tiles["line"], "dest": tiles["dest"]},
                "order": ("peta dimuat setelah palet dan tile"
                          if pal["line"] < s["line"]
                          and tiles["line"] < s["line"]
                          else "peta dimuat lebih dulu")})
    return evidence


def callsite_pair(ev, rom, index, records):
    """Byte palet/tileset dari call site; palet mentah dibaca sesuai ukuran salin."""
    pal, til = ev["palette"], ev["tiles"]
    shift = pal["dest"] - PALETTE_RAM[0]
    if shift < 0 or shift % 32 or shift >= PALETTE_SIZE:
        return None, None, ("tujuan palet call site di luar palette RAM "
                            f"(0x{pal['dest']:08X})")
    key = index.get(GBA_BASE + rom_region(pal["symbol"])[0])
    pref = None
    if key and (key[0], key[1]) in records:
        pdata = records[(key[0], key[1])]["data"]
        pref = {"blob": key[0], "stream": key[1]}
    else:
        try:
            base, _ = rom_region(pal["symbol"])
        except SystemExit:
            return None, None, "simbol palet call site tidak ada"
        n = min(pal.get("size") or PALETTE_SIZE, PALETTE_SIZE - shift)
        if n < 32 or n % 32:
            return None, None, "ukuran salin palet call site tidak jelas"
        raw = rom[base:base + n]
        pdata = (b"\x00" * shift + raw
                 + b"\x00" * (PALETTE_SIZE - shift - n))
        pref = {"address": f"0x{GBA_BASE + base:08X}",
                "dest": f"0x{pal['dest']:08X}", "raw_bytes": n,
                "sha256": hashlib.sha256(raw).hexdigest()}
    if len(pdata) != PALETTE_SIZE:
        return None, None, "palet call site tidak valid"

    tkey = index.get(GBA_BASE + rom_region(til["symbol"])[0])
    if not tkey or (tkey[0], tkey[1]) not in records:
        return None, None, "tileset call site bukan stream 0x70"
    tdata = records[(tkey[0], tkey[1])]["data"]
    # beberapa stream membawa 2 byte penutup setelah tile terakhir
    if len(tdata) % 32 not in (0, 2) or len(tdata) < 32 * 8:
        return None, None, "tileset call site tidak valid"
    tdata = tdata[:len(tdata) // 32 * 32]
    return pdata, tdata, {"source": "callsite", "file": ev["file"],
                          "function": ev["function"], "line": ev["line"],
                          "dest": ev["dest"], "order": ev["order"],
                          "palette": pref,
                          "tiles": {"blob": tkey[0], "stream": tkey[1]}}


def screen_scene(key, calls):
    """-> metadata layar statis bila semua call site stream ini scene layar.

    Hanya scene yang punya bukti pemuat tetap (logo/HUD) yang dipisahkan dari
    peta; call site biasa ke 0x0600C000 tetap dianggap lapis peta.
    """
    hits = calls.get(key, [])
    scenes = {(c.get("file"), c.get("function")) for c in hits}
    if len(scenes) != 1:
        return None
    file, fn = next(iter(scenes))
    meta = SCREEN_SCENES.get((file, fn))
    if not meta:
        return None
    c = hits[0]
    return {"kind": meta["kind"], "label": meta["label"],
            "reason": meta["reason"], "file": file, "function": fn,
            "line": c.get("line")}


def pair_from_evidence(key, calls, evidence, rom, index, records, cache):
    """(status, palet, tileset, bukti) untuk satu stream peta.

    Call site `Unpack` ke 0x0600xxxx adalah bukti pertama; entri header
    `gUnk_08105EDC` dipakai untuk stream container yang dialamatkan lewat
    pointer header (tidak ada simbol statis di asm).
    """
    cs = calls.get(key)
    if cs:
        pairs = {(c["palette"]["symbol"], c["tiles"]["symbol"]) for c in cs}
        if len(pairs) == 1:
            pdata, tdata, ev = callsite_pair(cs[0], rom, index, records)
            if pdata is not None:
                hdr = _header_pair(key, evidence, rom, index, records, cache)

                def same(a, b):
                    return ((a.get("blob"), a.get("stream"))
                            == (b.get("blob"), b.get("stream"))
                            or a.get("address") == b.get("address"))

                if hdr[0] in ("verified", "header-only") and (
                        not same(hdr[3]["palette"], ev["palette"])
                        or not same(hdr[3]["tiles"], ev["tiles"])):
                    ev["conflict"] = "header dan call site berbeda"
                return "verified", pdata, tdata, ev
            reason = ev
        else:
            reason = "call site berbeda antar fungsi"
        hdr = _header_pair(key, evidence, rom, index, records, cache)
        if hdr[0] in ("verified", "header-only"):
            return hdr
        return "unproven", None, None, {"reason": reason}
    return _header_pair(key, evidence, rom, index, records, cache)


def _header_pair(key, evidence, rom, index, records, cache):
    evs = evidence.get(key, [])
    if not evs:
        return "unproven", None, None, {"reason": "tidak ada call site atau header"}
    if len({(e["tileset"], e["palette"]) for e in evs}) > 1:
        return "unproven", None, None, {"reason": "entri header berbeda"}
    ev = evs[0]
    pdata, pref = read_asset(ev["palette"], rom, index, records, cache)
    tdata, tref = read_asset(ev["tileset"], rom, index, records, cache)
    if pdata is None or len(pdata) != PALETTE_SIZE:
        return "unproven", None, None, {"reason": "palet pasangan tidak valid"}
    if tdata is None or len(tdata) % 32 or len(tdata) < 32 * 8:
        return "unproven", None, None, {"reason": "tileset pasangan tidak valid"}
    return "header-only", pdata, tdata, {
        "source": "header-only", "entry": ev["entry"],
        "field": ev["field"], "layer": ev["layer"],
        "layers": ev["layers"], "interior": ev["interior"],
        "width": ev["width"], "height": ev["height"],
        "palette2": ev["palette2"], "loader": MAP_LOADER["layer_loader"],
        "dest": MAP_LOADER["layer_destinations"],
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
           "python3 tools/scripts/extract_assets.py --check-external  # hash aset luar",
           "```", "",
           "## Ringkasan", "",
           "| kelas | stream |", "|---|---|"]
    for key in ("palet", "tile", "peta", "layar", "lain"):
        out.append(f"| {key} | {groups[key]} |")
    out.append("")
    maps = [s for b in blobs for s in b["streams"]
            if s.get("group") == "peta"]
    screens = [(b["blob"], s) for b in blobs for s in b["streams"]
               if s.get("group") == "layar"]
    valid = sum(1 for s in maps
                if s.get("pair_status") in ("verified", "header-only"))
    calls = sum(1 for s in maps
                if s.get("pair_status") == "verified"
                and s["pair_evidence"].get("source") == "callsite")
    header_only = sum(1 for s in maps
                      if s.get("pair_status") == "header-only")
    inner = sum(1 for s in maps
                if s.get("pair_status") == "header-only"
                and s["pair_evidence"].get("interior"))
    unproven = sum(1 for s in maps
                   if s.get("pair_status") == "unproven")
    screen_valid = sum(1 for _, s in screens
                       if s.get("pair_status") in ("verified", "header-only"))
    order = ["swatch palet", "lembar tile 4bpp (abu-abu indeks)",
             "peta berwarna", "layar berwarna",
             "grid indeks (pasangan tidak ada)",
             "grid indeks (pasangan tidak terbukti)"]
    parts = [f"{k} {kinds[k]}" for k in order if kinds.get(k)]
    if kinds.get("-"):
        parts.append(f"tanpa PNG {kinds['-']}")
    out.append("PNG: " + ", ".join(parts)
               + f". Total {stream_count} stream dari {len(blobs)} simbol "
               "yang punya stream 0x70.")
    out.append("")
    out.append(f"Pasangan peta: {valid} pasangan byte-valid: {calls} call site "
               f"`Unpack`, {header_only} header-only (bukan call site; "
               f"{inner} interior, {header_only - inner} eksterior), "
               f"{unproven} tidak terbukti (jadi grid indeks).")
    out.append("")
    out.append(f"Layar statis: {len(screens)} tilemap kelas `layar` "
               f"({screen_valid} berpasangan) — bukan peta dan tidak dihitung "
               "di `peta berwarna`; call site-nya juga tidak masuk angka call "
               "site peta di atas.")
    out.append("")
    out.append("## Bukti loader 59 peta header-only")
    out.append("")
    out.append("Tidak ada call site `Unpack` yang menulis field lapis peta dari "
               "header langsung ke `0x0600xxxx`. Penelusuran jalur yang ada:")
    out.append("")
    out.append("1. [`GetMapData`](../../asm/code_809E804.s#L11699) "
               "(`0x080A4698`) menghitung entri `gUnk_08105EDC` dengan stride "
               "40 B; field `+0x0C`, `+0x10`, `+0x14` adalah tiga lapis peta.")
    out.append("2. [`func_080A5CC0`](../../asm/code_809E804.s#L14504) "
               "(`0x080A5CC0`) membaca ketiga field itu lalu memanggil "
               "[`Unpack`](../../asm/code_809E804.s#L14522) dengan tujuan "
               "`arg0+0x10`, `+0x14`, `+0x18` — buffer milik objek, bukan "
               "`0x0600xxxx`. Pemanggilnya `func_080A6660` dan "
               "`func_080CFBAC`; tidak ada tabel tujuan statis, tujuan berasal "
               "dari field objek.")
    out.append("3. Buffer itu dialokasikan "
               "[`func_080A4A94`](../../asm/code_809E804.s#L12283) lewat "
               "`__builtin_vec_new`, jadi tujuannya heap/RAM; tidak ada "
               "konstanta VRAM pada call site ini.")
    out.append("4. [`func_080A5EA0`](../../asm/code_809E804.s#L14751) "
               "(`0x080A5EA0`) memang menulis ke `0x06000000`, tetapi sumbernya "
               "field `+0x00` (tileset), bukan salah satu field lapis peta.")
    out.append("")
    out.append("| field header | loader | tujuan |")
    out.append("|---|---|---|")
    out.append("| `+0x0C`, `+0x10`, `+0x14` | `func_080A5CC0` (`0x080A5CC0`) | "
               "`arg0+0x10/+0x14/+0x18` (buffer objek) |")
    out.append("| `+0x00` | `func_080A5EA0` (`0x080A5EA0`) | "
               "`0x06000000` (tileset) |")
    out.append("")
    out.append(f"Karena itu {header_only} pasangan ber-header ditandai "
               "`pair_status: header-only`; bukti header tetap dipakai untuk "
               "memilih palet/tileset, tetapi tidak diklaim sebagai bukti call "
               "site ke VRAM. Angka 41/59 adalah distribusi interior/eksterior, "
               "bukan tingkat bukti.")
    out.append("")
    out.append("## Layar statis (bukan peta)")
    out.append("")
    out.append("Kelas `layar` memisahkan tilemap layar tetap dari peta. "
               "Pemisahnya fungsi pemuat scene, bukan kemiripan gambar: "
               "scene intro/boot memuat logo, dan panel HUD dimuat sebagai "
               "tiga lapis layar. Tilemap ini tetap punya palet/tileset, tetapi "
               "tidak masuk hitungan peta berwarna.")
    out.append("")
    out.append("| simbol | jenis | pemuat | PNG |")
    out.append("|---|---|---|---|")
    for symbol, s in screens:
        sc = s.get("screen", {})
        png = f"[png](../../{s['png']})" if s.get("png") else "-"
        out.append(f"| `{symbol}` | {sc.get('label', sc.get('kind', '?'))} | "
                   f"`{sc.get('function', '?')}` "
                   f"({sc.get('file', '?')}:{sc.get('line', '?')}) | {png} |")
    out.append("")
    out.append("## Simbol -> stream -> berkas")
    out.append("")
    out.append("Path berkas relatif terhadap root repo. `stream` = urutan stream "
               "di dalam simbol (0 = paling awal). Pasangan palet/tileset "
               "diambil berurutan: (1) call site `Unpack`/salin di `asm/` yang "
               "menulis peta ke 0x0600C000-0x0600FFFF, dengan palet di "
               "0x05000000 dan tileset di 0x06000000-0x0600BFFF dalam fungsi "
               "yang sama; (2) untuk stream container yang dialamatkan lewat "
               "pointer (tidak ada simbol statis), entri `gUnk_08105EDC` yang "
               "memuatnya sebagai lapis peta: +0x00 tileset, +0x04 palet, "
               "+0x08 palet kedua, +0x0C/+0x10/+0x14 peta, +0x20 lebar/tinggi, "
               "+0x24 flag interior/eksterior. Flag +0x24 hanya jenis peta, "
               "bukan tingkat bukti. Pasangan header-only tetap harus lolos "
               "pemeriksaan palet 480 B, tileset 32768 B, dimensi header, dan "
               "indeks tile di dalam tileset sebelum dirender. Eksterior "
               "memakai +0x08 sebagai varian palet musim (render memakai "
               "+0x04), interior memakai +0x08 sebagai palet kedua biasa. "
               "Kolom status menyebut `header-only` dan nama loader, bukan "
               "\"terbukti call site\". Pasangan berupa alamat `0x08xxxxxx` "
               "adalah stream 0x70 di luar 53 simbol yang dibuka dari ROM saat "
               "render, bukan berkas hasil ekstraksi. Aset eksternal itu "
               "dicatat di `external_assets` manifest dengan "
               "`unpacked`/`raw_bytes` dan `sha256`, sehingga bisa diverifikasi "
               "ulang lewat `--check-external` tanpa menebak alamat.")
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
            if status in ("verified", "header-only"):
                ev = s["pair_evidence"]
                if s.get("group") == "layar":
                    sc = s.get("screen", {})
                    status_cell = (f"layar {sc.get('kind', '?')} "
                                   f"`{sc.get('function', '?')}` (bukan peta)")
                elif ev.get("source") == "callsite":
                    status_cell = (f"terbukti call site `{ev['function']}` "
                                   f"0x{ev['dest']:08X}")
                else:
                    status_cell = (f"header-only peta#{ev['entry']} "
                                   f"+0x{ev['field']:02X} "
                                   f"({'interior' if ev['interior'] else 'eksterior'}"
                                   f" {ev['layer']}/{ev['layers']}; "
                                   f"loader `{ev.get('loader', 'func_080A5CC0')}`)")
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
    ap.add_argument("--check-external", action="store_true",
                    help="exit 1 bila hash aset pasangan eksternal tidak cocok")
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

    if args.check_external:
        manifest_path = args.out / "manifest.json"
        if not manifest_path.exists():
            print("MASALAH: manifest tidak ada", file=sys.stderr)
            return 1
        ext = json.loads(manifest_path.read_text()).get("external_assets", [])
        if not ext:
            print("tidak ada aset pasangan eksternal")
            return 0
        rom = inv.DEFAULT_ROM.read_bytes()
        bad = []
        for e in ext:
            addr = int(e["address"], 16) - GBA_BASE
            if "raw_bytes" in e:
                data = rom[addr:addr + e["raw_bytes"]]
            else:
                try:
                    data, _, _ = decompress.unpack(rom, addr)
                except decompress.UnpackException:
                    bad.append((e["address"], "gagal dibuka"))
                    continue
            if hashlib.sha256(data).hexdigest() != e.get("sha256"):
                bad.append((e["address"], "sha256 beda"))
        for addr, why in bad:
            print(f"MASALAH {addr}: {why}", file=sys.stderr)
        print(f"aset pasangan eksternal: {len(ext) - len(bad)}/{len(ext)} cocok")
        return 1 if bad else 0

    rom = inv.DEFAULT_ROM.read_bytes()
    _, inventory, _ = inv.analyze()
    index = stream_index(inventory)
    evidence = header_evidence(map_headers(rom), index)
    calls = callsite_evidence(unpack_sites(), index)
    external = {}

    bindir = args.out / "bin"
    pngdir = args.out / "png"
    bindir.mkdir(parents=True, exist_ok=True)
    pngdir.mkdir(parents=True, exist_ok=True)
    for stale in pngdir.glob("*.png"):
        stale.unlink()

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
            screen = (screen_scene((name, rec["index"]), calls)
                      if group == "peta" else None)
            if screen:
                group = "layar"
                note = f"layar {screen['kind']}: {screen['reason']}"
            groups[group] += 1
            base = f"{name}_{rec['index']:02d}_{rec['unpacked']}_0x{rec['format']}"
            (bindir / f"{base}.bin").write_bytes(data)
            datas.append(data)
            info = {"index": rec["index"], "offset": rec["at"],
                    "packed": rec["packed"],
                    "unpacked": rec["unpacked"],
                    "format": rec["format"],
                    "group": group, "note": note,
                    "bin": f"bin/{base}.bin"}
            if screen:
                info["screen"] = screen
            infos.append(info)
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
            elif info["group"] in ("peta", "layar"):
                is_screen = info["group"] == "layar"
                status, pdata, tdata, ev = pair_from_evidence(
                    (name, i), calls, evidence, rom, index, by_key, external)
                entries = len(data) // 2
                if ev.get("width"):
                    width, height = ev["width"], ev["height"]
                elif ev.get("source") == "callsite":
                    # peta call site menempati screenblock 32 tile per baris
                    width = 32 if entries % 32 == 0 else map_width(entries)
                    height = entries // width
                else:
                    width = map_width(entries)
                    height = entries // width
                cells = struct.unpack(f"<{len(data) // 2}H", data)
                # 0x03FF adalah tile kosong/transparan, bukan indeks tileset
                used = [c & 0x3FF for c in cells if (c & 0x3FF) != 0x3FF]
                tiles_ok = (tdata is not None
                            and (not used or max(used) < len(tdata) // 32))
                fits = (status in ("verified", "header-only") and height > 0
                        and width * height * 2 == len(data) and tiles_ok)
                if fits:
                    prefix = "layar" if is_screen else "peta"
                    png = (f"png/{name}_{i:02d}_{prefix}_{width}x"
                           f"{height}.png")
                    render_map(data, args.out / png, width, pdata, tdata)
                    info["png_kind"] = ("layar berwarna" if is_screen
                                        else "peta berwarna")
                    info["pair_status"] = status
                    info["pair"] = {"palette": ev["palette"],
                                    "tiles": ev["tiles"]}
                    info["pair_evidence"] = ev
                    if ev.get("conflict"):
                        info["pair_conflict"] = ev["conflict"]
                else:
                    reason = (ev.get("reason") if status == "unproven"
                              else ("indeks tile di luar tileset" if not tiles_ok
                                    else "dimensi pasangan tidak cocok"))
                    prefix = "layar" if is_screen else "peta"
                    png = f"png/{name}_{i:02d}_{prefix}_indeks_{width}.png"
                    render_map(data, args.out / png, width)
                    info["png_kind"] = (
                        "grid indeks (layar tanpa pasangan)" if is_screen
                        else "grid indeks (pasangan tidak terbukti)")
                    info["pair_status"] = "unproven"
                    info["pair_reason"] = reason
                info["map_width"] = width
            if png:
                info["png"] = str(args.out.relative_to(REPO) / png)
        manifest.append({"blob": name, "size": entry.size, "streams": infos})

    external = {}
    for blob in manifest:
        for s in blob["streams"]:
            for ref in (s.get("pair", {}).get("palette"),
                        s.get("pair", {}).get("tiles")):
                if not ref or "address" not in ref or "blob" in ref:
                    continue
                item = {"address": ref["address"]}
                for key in ("unpacked", "raw_bytes", "format", "dest",
                            "sha256"):
                    if key in ref:
                        item[key] = ref[key]
                external[ref["address"]] = item
    manifest_doc = {"map_loader": MAP_LOADER,
                    "screen_scenes": [
                        {"file": file, "function": fn, **meta}
                        for (file, fn), meta in SCREEN_SCENES.items()],
                    "streams": manifest,
                    "external_assets": [external[a] for a in sorted(external)]}
    (args.out / "manifest.json").write_text(
        json.dumps(manifest_doc, indent=1) + "\n")
    MAP_DOC.parent.mkdir(parents=True, exist_ok=True)
    MAP_DOC.write_text(render_map_doc(manifest_doc))
    if not args.quiet:
        print(f"output: {args.out.relative_to(REPO)}")
        for key in ("palet", "tile", "peta", "layar", "lain"):
            print(f"  {key:6s} {groups[key]:3d}")
        rendered = sum(1 for b in manifest for s in b["streams"]
                       if s.get("png_kind") == "peta berwarna")
        screens = sum(1 for b in manifest for s in b["streams"]
                      if s.get("png_kind") == "layar berwarna")
        print(f"  png peta berwarna: {rendered}")
        print(f"  png layar berwarna: {screens}")
        print(f"  dokumen: {MAP_DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
