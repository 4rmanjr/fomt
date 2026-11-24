#!/usr/bin/env python3
"""raw_assets.py — inventaris + kelompok + render 231 blob mentah.

Sumber daftar tetap `asset_inventory.analyze()` (satu sumber dengan
`ASET-INVENTARIS.md`), tetapi hanya blob yang **bukan** format `0x70`.
Tujuannya supaya cakupan aset tidak berhenti di 53 blob terkompresi.

Kelompok (heuristik isi, bukan nama simbol):

- `palet`     — <= 1024 B, kelipatan 32 B, semua u16 < 0x8000 (bit 15 kosong),
                **dan** bukan tile jarang: word non-nol yang isinya paling
                banyak satu nibble harus < 15%. Warna BGR555 mengisi beberapa
                nibble sekaligus, sedangkan tile 4bpp jarang menyisakan satu
                piksel berisi per word, jadi rasio ini memisahkan keduanya
                (palet sah <= 6%, tile jarang 22-100%).
                Dirender sebagai kartu swatch.
- `sprite/OBJ`— kelipatan 32 B (satu tile 4bpp = 32 B), bukan palet/tilemap.
                Blob non-32 B yang menyisakan 1-31 B header/ekor juga masuk
                sini bila sisa tile-nya padat indeks 0 dan sedikit warna.
                Dirender sebagai lembar tile abu-abu indeks.
- `tilemap`   — entri 16-bit dengan bit 10-15 konsisten (>= 40% modal) dan
                jumlah entri masuk akal untuk lebar tilemap. Dirender sebagai
                grid indeks.
- `gambar terkompresi` — **hanya** blob yang bank stream `0x70`-nya
                terbukti dari penunjuk kode/tabel (`VERIFIED_LAYOUT`); tidak
                dirender mentah. Bukan deteksi isi: rantai `0x70` yang berakhir
                tepat di ujung blob juga muncul di blob yang justru terbukti
                container (`gUnk_087409E4`), jadi rantai valid saja belum bukti.
                Supaya daftar bank tidak berhenti di contoh yang diingat,
                setiap generate memindai rantai `0x70` di semua blob non-32 B
                dan menabelkannya di dokumen generate (bagian "Rantai `0x70`
                valid di blob non-32 B") dengan status bank/container/belum
                terbukti. `assets/0x70/` memuat blob berformat `0x70` plus bank
                tertanam tadi (`ASET-0X70-TERTANAM.md`).
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
# `tilemap` = array u16 yang ditulis ke peta; `gambar terkompresi` = blob yang
# bank stream `0x70`-nya terbukti dari call site (bukan dari isi: rantai `0x70`
# valid bisa muncul di blob container, mis. `gUnk_087409E4`). Jangan menambah
# entri hanya dari nama symbol;
# setiap entri harus punya bukti call site/stream di komentar nilainya.
VERIFIED_LAYOUT = {
    "gUnk_08523290": (
        "tabel", None,
        "tabel glyph int16; func_080D0D28 memakai ldrsh, 0xffff = sentinel",
    ),
    "gUnk_0869B284": (
        "gambar terkompresi", None,
        "palet 0x00-0x7f; bank 119 stream 0x70 tertanam (mulai 0x134) sudah "
        "diekstrak ke assets/0x70/extern",
    ),
    "gUnk_086D74F8": (
        "gambar terkompresi", None,
        "25 stream 0x70 tertanam (mulai 0x60); palet di 0x20; sudah "
        "diekstrak ke assets/0x70/extern",
    ),
    "gUnk_086DC3F4": (
        "gambar terkompresi", None,
        "stempel 3x2 12 B (func_080AA540 menyalin 12 B); sisa 332 B = 3 "
        "stream 0x70 tertanam (1560 B) ditunjuk tabel descriptor 0x08106860 "
        "(086DC400/4C4/4D0, dims 30x26); sudah diekstrak ke "
        "assets/0x70/extern",
    ),
    "gUnk_08752D4C": (
        "sprite/OBJ", None,
        "4 tile 8x8 berisi; func_080645F0 menyalin 0x80 B ke VRAM slot 0x73; "
        "BG map tile 0x73 ditulis func_0804E9F4 dengan indeks palet 2 -> "
        "gUnk_0875298C (bank 0x40)",
    ),
    "gUnk_08752DCC": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B "
        "ke VRAM slot 0x70; BG map tile 0x70 ditulis func_0804E9F4 dengan "
        "indeks palet 2 -> gUnk_0875298C (bank 0x40)",
    ),
    "gUnk_087529AC": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B "
        "ke VRAM slot 0x72; BG map tile 0x72 ditulis func_0804E9F4 dengan "
        "indeks palet 2 -> gUnk_0875298C (bank 0x40)",
    ),
    "gUnk_08752B4C": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x20 B "
        "ke VRAM slot 0x71; BG map tile 0x71 ditulis func_0804E9F4 dengan "
        "indeks palet 2 -> gUnk_0875298C (bank 0x40)",
    ),
    "gUnk_08752ACC": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_080645F0 menyalin 0x80 B "
        "(tile + padding) ke VRAM slot 0x77; BG map tile 0x77 ditulis "
        "func_0804E9F4 dengan indeks palet 2 -> gUnk_0875298C (bank 0x40)",
    ),
    "gUnk_08752CCC": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B "
        "ke VRAM slot 0x59; BG map tile 0x59 ditulis func_0804E9F4 dengan "
        "indeks palet 1 -> gUnk_08752AAC (bank 0x20)",
    ),
    "gUnk_08752BCC": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B "
        "ke VRAM slot 0x5A; BG map tile 0x5A ditulis func_0804E9F4 dengan "
        "indeks palet 1 -> gUnk_08752AAC (bank 0x20)",
    ),
    "gUnk_08752C4C": (
        "sprite/OBJ", None,
        "1 tile 8x8 berisi + 0x60 padding nol; func_08068344 menyalin 0x20 B "
        "ke VRAM slot 0x5B; BG map tile 0x5B ditulis func_0804E9F4 dengan "
        "indeks palet 1 -> gUnk_08752AAC (bank 0x20)",
    ),
    "gUnk_087510AC": (
        "sprite/OBJ", None,
        "9 tile 4bpp: func_0806644C menyalin 0x120 B ke VRAM 0x060014A0 "
        "(func_08008F0C); klasifikasi isi menyebut palet 144 warna, call "
        "site membuktikannya tile",
    ),
    "gUnk_087511CC": (
        "sprite/OBJ", None,
        "9 tile 4bpp: func_08068344 menyalin 0x120 B ke VRAM 0x06001380 "
        "(func_08008F0C); klasifikasi isi menyebut palet 144 warna, call "
        "site membuktikannya tile",
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
        "container func_0805E6CC: A27/B27/C6/D106/E1/F0/T27; tile 4bpp "
        "hanya D+E (107 tile), sisa tabel",
    ),
    "gUnk_0875352C": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A1/B1/C1/D4/E1/F0/T1; func_08082264 "
        "(baris 133363 -> 132394) meneruskannya ke func_0805E6CC, bukan "
        "tile datar",
    ),
    "gUnk_08753608": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A1/B1/C1/D4/E1/F0/T1; func_0805E6CC "
        "dipanggil langsung di baris 130129, bukan tile datar",
    ),
    "gUnk_087536E4": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A2/B4/C3/D2/E1/F0/T4; func_0805E6CC "
        "dipanggil langsung di code_809E804.s baris 84854, bukan tile datar",
    ),
    "gUnk_087537D0": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A20/B40/C11/D73/E13/F0/T40; "
        "func_0805E6CC dipanggil langsung di baris 96720 dan 113849, "
        "bukan tile datar",
    ),
    "gUnk_08754674": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A1/B3/C3/D40/E1/F0/T4; func_0805E6CC "
        "dipanggil langsung di baris 166592 (func_08094AC0), bukan tile datar",
    ),
    "gUnk_08754C0C": (
        "sprite/OBJ", "container",
        "container func_0805E6CC: A2/B4/C2/D36/E2/F0/T5; func_0805E6CC "
        "dipanggil langsung di baris 166585, code_809E804.s 95889/98781, "
        "bukan tile datar",
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
    "gUnk_086DCC88": (
        "tabel", None,
        "1284 entri u16; func_080AA9C8 memakai 16 entri pertama sebagai stamp "
        "4x4 (sl=4, 4 baris); sisa tabel tak terbukti persegi (80,25 blok)",
    ),
    "gUnk_086DDDEC": (
        "tabel", None,
        "1284 entri u16; func_080AA9C8 memakai 16 entri pertama sebagai stamp "
        "4x4 (sl=4, 4 baris); sisa tabel tak terbukti persegi (80,25 blok)",
    ),
    "gUnk_086DC57C": (
        "tabel", None,
        "902 entri u16; func_080AA9C8 memakai 4 entri pertama sebagai stamp "
        "2x2 (sl=2, 2 baris); 902 entri bukan persegi",
    ),
    "gUnk_086DD6E0": (
        "tabel", None,
        "902 entri u16; func_080AA9C8 memakai 4 entri pertama sebagai stamp "
        "2x2 (sl=2, 2 baris); 902 entri bukan persegi",
    ),
    "gUnk_086EAD8C": (
        "tabel", None,
        "16656 entri u16 = 1041 blok 4x4; func_080AA9C8 memakai 16 entri "
        "pertama sebagai stamp 4x4 (sl=4, 4 baris), bukan 1041 tile 4bpp",
    ),
    "gUnk_086DE7F4": (
        "tabel", None,
        "tabel 16-bit; func_080AA9C8 (kasus 21) memakai 16 entri sebagai blok "
        "4x4 (sl=4 kolom, 4 baris) yang dicap ke lapis, bukan lapis peta; "
        "25204 entri tak punya lebar persegi dan header peta gUnk_08105EDC "
        "tidak menunjuk blob ini",
    ),
}

# `func_080AA9C8` mengambil potongan peta (stamp) dari tabel u16: ia membaca
# `sl` kolom x 4 baris (atau 2x2) berurutan dan menuliskannya ke peta tujuan.
# Kalau seluruh blob tepat satu stamp, lebar yang benar adalah `sl` dari asm —
# heuristik pembagi memilih 8 sehingga grid-nya salah. Kunci = symbol,
# nilai = (kolom, baris, keterangan blok). Hanya untuk blob yang ukurannya
# tepat kolom*baris entri; sisanya tetap `tabel` lewat VERIFIED_LAYOUT.
VERIFIED_MAP_STAMP = {
    "gUnk_086DC54C": (6, 4, "sl=6, 4 baris"),
    "gUnk_086DD6B0": (6, 4, "sl=6, 4 baris"),
    "gUnk_086DD690": (4, 4, "sl=4, 4 baris"),
    "gUnk_086EAD64": (4, 4, "sl=4, 4 baris"),
    "gUnk_086EACDC": (2, 2, "sl=2, 2 baris"),
    "gUnk_086EAD84": (2, 2, "sl=2, 2 baris"),
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


def scan_chain(rom, offset, size):
    """-> kandidat rantai `0x70` yang berakhir tepat di ujung blob, atau None.

    Pemeriksa silang kelompok `gambar terkompresi`, **bukan** penentu
    kelompok: rantai valid juga muncul di blob yang terbukti container
    (`gUnk_087409E4`). Yang dipindai hanya blob non-32 B karena jalur tile
    tidak bisa menjelaskan sisanya.
    """
    if size % 32 == 0:
        return None
    end = offset + size
    best = None
    for rel in range(size - 4):
        if rom[offset + rel] != 0x70:
            continue
        cur, count, packed = offset + rel, 0, 0
        while cur < end:
            got = inv.decode_popuri(rom, cur, end)
            if not got:
                break
            count += 1
            packed += got[0]
            cur += got[0]
        if count >= 2 and cur == end:
            if best is None or count > best["streams"]:
                best = {"start": rel, "streams": count, "packed": packed}
    return best


PALETTE_MAX_SINGLE_NIBBLE = 0.15


def single_nibble_fraction(u):
    """Fraksi word non-nol yang punya <= 1 nibble non-nol.

    Palet berisi warna BGR555: nibble adalah komponen warna, jadi warna gelap
    pun masih mengisi beberapa nibble. Tile 4bpp berisi indeks piksel, jadi
    word empat-piksel pada gambar jarang sering menyisakan satu piksel saja
    (0x0003, 0x0030, ...). Nilai tinggi = data tile, bukan palet.
    """
    nz = [v for v in u if v]
    if not nz:
        return 0.0
    return sum(1 for v in nz
               if sum(1 for shift in (0, 4, 8, 12) if (v >> shift) & 0xF) <= 1
               ) / len(nz)


def classify(data, name=None):
    """-> (kelompok, catatan, (start, ekor) atau None).

    `name` hanya dipakai untuk override hasil verifikasi call site; tanpa nama,
    classifier tetap murni berbasis isi agar fixture kecil tetap deterministik.
    Kelompok `gambar terkompresi` **tidak** punya jalur deteksi isi: satu-satunya
    sumbernya adalah override `VERIFIED_LAYOUT` yang punya bukti call site,
    karena rantai `0x70` yang valid bisa juga berada di dalam blob lain.
    """
    if name in VERIFIED_MAP_STAMP:
        cols, rows, block = VERIFIED_MAP_STAMP[name]
        return ("tilemap", f"stamp {cols}x{rows} ({cols * rows} entri u16) "
                f"dibaca func_080AA9C8 ({block}); lebar = kolom loader", None)
    if name in VERIFIED_LAYOUT:
        group, _layout, note = VERIFIED_LAYOUT[name]
        return group, note, None
    n = len(data)
    u = u16s(data)
    sparse = single_nibble_fraction(u) if u else 0.0
    if (n and n <= 1024 and n % 32 == 0 and u
            and all(v < 0x8000 for v in u)
            and sparse < PALETTE_MAX_SINGLE_NIBBLE):
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
        if sparse >= PALETTE_MAX_SINGLE_NIBBLE:
            return ("sprite/OBJ",
                    f"{n // 32} tile 4bpp (bukan palet: "
                    f"{sparse:.0%} word satu-nibble)", None)
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
        width = entry.get("map_width") or tilemap_width(count)
        # Lebar fallback tidak boleh dipakai untuk render: kalau jumlah entri
        # tidak habis dibagi lebar tebakan, blob itu bukan tilemap persegi dan
        # gridnya menyesatkan. Lebih baik tidak dirender sama sekali.
        if width < 1 or count % width:
            return None
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
        stamp = VERIFIED_MAP_STAMP.get(entry.name)
        if stamp:
            row["map_width"] = stamp[0]
        chain = scan_chain(rom, entry.offset, entry.size)
        if chain:
            row["chain_0x70"] = chain
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
    out.append("Kelompok ditentukan dari isi, bukan nama simbol, kecuali "
               "`gambar terkompresi` (lihat di bawah): palet = semua "
               "u16 < 0x8000 dan <= 1 KB; sprite/OBJ = kelipatan 32 B (tile "
               "4bpp), ditambah blob non-32 B yang setelah header/ekor <= 31 B "
               "menyisakan tile dengan >= 13% nibble nol dan <= 12 indeks/tile; "
               "tilemap = entri 16-bit dengan bit 10-15 konsisten; sisanya "
               "tabel/struct dan tidak dirender. Kelompok `gambar "
               "terkompresi` **bukan** hasil deteksi isi: hanya blob yang bank "
               "stream `0x70`-nya terbukti dari call site (daftar override di "
               "`VERIFIED_LAYOUT`) yang masuk ke sana, karena rantai `0x70` "
               "yang berakhir tepat di ujung blob juga muncul di blob lain "
               "yang terbukti container. Offset/ekor yang dipotong "
               "dicatat di manifest (`tile_offset`/`tile_trim`). Override "
               "`layout: container` menandai wadah font/objek yang sudah "
               "diverifikasi dari call site; isinya bukan tile 4bpp datar dan "
               "tidak dirender sebagai lembar tile. Untuk stamp peta, field "
               "`map_width` di manifest berisi lebar kolom dari loader "
               "(`func_080AA9C8`), bukan tebakan pembagi; hash PNG memakai "
               "lebar itu. Batas ini heuristik, bukan "
               "bukti format; override call-site adalah bukti terpisah.")
    out.append("")
    chain = [r for r in rows if r.get("chain_0x70")]
    non32 = sum(1 for r in rows if r["size"] % 32)

    def chain_status(row):
        if row["group"] == "gambar terkompresi":
            return "bank terbukti"
        if row.get("layout") == "container":
            return "container terbukti"
        return "belum terbukti"

    status = collections.Counter(chain_status(r) for r in chain)
    out.append("## Rantai `0x70` valid di blob non-32 B")
    out.append("")
    out.append(f"Pemeriksa silang untuk kelompok `gambar terkompresi`: {non32} "
               "blob non-32 B diuji apakah memuat rantai stream `0x70` yang "
               "berakhir tepat di ujung blob, lalu hasilnya dibandingkan "
               "dengan kelompoknya. Tabel ini **bukan** penentu kelompok "
               "(lihat alasannya di atas); gunanya memastikan tidak ada bank "
               "tertanam yang lolos dari kelompok.")
    out.append("")
    out.append(f"- blob non-32 B: **{non32}**")
    out.append(f"- dengan rantai `0x70` berakhir di ujung: **{len(chain)}**")
    out.append(f"- bank terbukti: **{status['bank terbukti']}**, container "
               f"terbukti: **{status['container terbukti']}**, belum "
               f"terbukti: **{status['belum terbukti']}**")
    out.append("")
    if chain:
        out.append("| simbol | ukuran | sisa %32 | kelompok | awal | stream "
                   "| packed | status |")
        out.append("|---|---:|---:|---|---:|---:|---:|---|")
        for r in sorted(chain, key=lambda x: -x["size"]):
            c = r["chain_0x70"]
            out.append(f"| `{r['symbol']}` | {r['size']} | {r['size'] % 32} | "
                       f"{r['group']} | {c['start']} | {c['streams']} | "
                       f"{c['packed']} | {chain_status(r)} |")
        out.append("")
    out.append("`belum terbukti` = rantai valid tetapi belum ada call "
               "site/tabel descriptor yang menunjuknya: telusuri dulu, jangan "
               "langsung memasukkannya ke kelompok."
               if status["belum terbukti"] else
               "Tidak ada kandidat `belum terbukti`: setiap rantai sudah "
               "dijelaskan penunjuk kode/tabel (bank atau container).")
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
            out.append("Dirender sebagai grid indeks; lebar diambil dari "
                       "`map_width` (call site) bila ada, sisanya ditebak dari "
                       "jumlah entri dan dicantumkan di nama berkas.")
        elif g == "gambar terkompresi":
            names = ", ".join(f"`{x['symbol']}`" for x in sorted(
                sel, key=lambda x: x["offset"]))
            out.append("Tidak dirender mentah: berisi bank stream `0x70` "
                       "tertanam. `assets/0x70/` memuat blob berformat `0x70` "
                       f"dan bank tertanam {names} (lihat "
                       "`ASET-0X70-TERTANAM.md`).")
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
