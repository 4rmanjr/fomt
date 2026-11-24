#!/usr/bin/env python3
"""sprite2gba.py — sprite/OBJ 4bpp: PNG terindeks + palet JASC + metadata frame.

Pola yang diadopsi dari pret/pokeemerald (`gbagfx` + `graphics/`): PNG adalah
source yang dibuka editor, palet disimpan sebagai `.pal` teks JASC, dan byte
GBA adalah hasil generate. Bedanya di sini PNG **terindeks 8-bit dengan PLTE**
(palet GBA 16 warna), jadi indeks piksel tidak pernah ambigu walau dua entri
palet punya warna sama — hal yang bisa terjadi pada GBA (slot transparan
`0x0000` sering berulang).

Metadata per-sprite menyimpan:

- `rom`: offset/ukuran/sha256 tile 4bpp;
- `palette.rom`: offset/ukuran/sha256 palet pasangan (ikut digerbang);
- `source`: PNG + `.pal` + `tiles_wide`/`tile_count`;
- `frame`: `width_tiles`/`height_tiles`/`count`, urutan kiri-ke-kanan lalu
  baris berikutnya; total tile wajib `count * width_tiles * height_tiles`;
- `encoder`: tool/versi/urutan tile & nibble;
- `pair`: bagaimana palet pasangan ditetapkan (`adjacent`/`asm-load`/
  `asm-branch`), jarak baris load, dan alasan bila lintas cabang.

`encode_source(meta_path)` dipakai `asset_manifest.py`/`asset_verify.py`.
`.incbin` tidak pernah disentuh tool ini.

  python3 tools/assets/sprite2gba.py decode --rom baserom.gba \\
      --offset 0x7518CC --size 128 --pal-offset 0x75194C --pal-size 32 \\
      --tiles-wide 2 --frame-width 2 --frame-height 2 \\
      --png assets/gfx/sprites/gUnk_087518CC.png \\
      --pal assets/gfx/sprites/gUnk_087518CC.pal \\
      --json assets/gfx/sprites/gUnk_087518CC.json \\
      --id gfx/sprites/gunk_087518cc --symbol gUnk_087518CC
  python3 tools/assets/sprite2gba.py encode --json assets/gfx/sprites/x.json \\
      --out build/assets/gUnk_087518CC.bin
  python3 tools/assets/sprite2gba.py verify --json assets/gfx/sprites/x.json
"""
import argparse
import hashlib
import re
import importlib.util
import json
import struct
import sys
import zlib
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = Path(__file__).resolve().parent

TILE_BYTES = 32
TILE_SIZE = 8


def _load(name):
    spec = importlib.util.spec_from_file_location(name, TOOLS / f"{name}.py")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


tile4bpp = _load("tile4bpp")
pal2gba = _load("pal2gba")


def sha256(data):
    return hashlib.sha256(data).hexdigest()


# ---------------------------------------------------------------- PNG indeks

def _chunk(tag, data):
    return (struct.pack(">I", len(data)) + tag + data
            + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF))


def read_png_indexed(path):
    """PNG terindeks 8-bit non-interlaced -> (w, h, indeks, warna PLTE)."""
    raw = path.read_bytes()
    if not raw.startswith(b"\x89PNG\r\n\x1a\n"):
        raise ValueError(f"{path}: bukan PNG")
    pos, idat = 8, bytearray()
    width = height = None
    plte = b""
    while pos < len(raw):
        if pos + 8 > len(raw):
            raise ValueError(f"{path}: chunk terpotong")
        length = struct.unpack(">I", raw[pos:pos + 4])[0]
        tag = raw[pos + 4:pos + 8]
        data = raw[pos + 8:pos + 8 + length]
        pos += 12 + length
        if tag == b"IHDR":
            (width, height, depth, color_type, _c, _f,
             interlace) = struct.unpack(">IIBBBBB", data)
            if depth != 8 or color_type != 3 or interlace != 0:
                raise ValueError(
                    f"{path}: butuh PNG terindeks 8-bit non-interlaced "
                    f"(depth={depth} color_type={color_type})")
        elif tag == b"PLTE":
            plte = data
        elif tag == b"IDAT":
            idat.extend(data)
        elif tag == b"IEND":
            break
    if width is None or not plte:
        raise ValueError(f"{path}: IHDR/PLTE tidak ada")
    if len(plte) % 3:
        raise ValueError(f"{path}: PLTE {len(plte)} B bukan kelipatan 3")
    colors = [tuple(plte[i:i + 3]) for i in range(0, len(plte), 3)]
    stream = zlib.decompress(bytes(idat))
    stride = width
    rows, prev, p = [], bytearray(stride), 0
    for _ in range(height):
        if p + 1 + stride > len(stream):
            raise ValueError(f"{path}: data piksel terpotong")
        kind = stream[p]
        cur = bytearray(stream[p + 1:p + 1 + stride])
        p += 1 + stride
        for i in range(stride):
            left = cur[i - 1] if i >= 1 else 0
            up = prev[i]
            up_left = prev[i - 1] if i >= 1 else 0
            if kind == 1:
                cur[i] = (cur[i] + left) & 0xFF
            elif kind == 2:
                cur[i] = (cur[i] + up) & 0xFF
            elif kind == 3:
                cur[i] = (cur[i] + ((left + up) // 2)) & 0xFF
            elif kind == 4:
                cur[i] = (cur[i] + tile4bpp._paeth(left, up, up_left)) & 0xFF
            elif kind != 0:
                raise ValueError(f"{path}: filter PNG {kind} tidak didukung")
        rows.append(bytes(cur))
        prev = cur
    return width, height, b"".join(rows), colors


def write_png_indexed(path, width, height, indices, colors):
    """(indeks, palet) -> PNG terindeks 8-bit dengan PLTE."""
    rows = b"".join(b"\x00" + indices[y * width:(y + 1) * width]
                    for y in range(height))
    plte = b"".join(bytes(c) for c in colors)
    path.write_bytes(
        b"\x89PNG\r\n\x1a\n"
        + _chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 3, 0, 0, 0))
        + _chunk(b"PLTE", plte)
        + _chunk(b"IDAT", zlib.compress(rows, 9))
        + _chunk(b"IEND", b""))


# ------------------------------------------------------------------- codec

def unpack_tiles(blob, tiles_wide=2):
    """Tile 4bpp -> (indeks, lebar, tinggi) peta piksel."""
    if not blob:
        raise ValueError("blob tile kosong")
    if len(blob) % TILE_BYTES:
        raise ValueError(f"blob {len(blob)} B bukan kelipatan {TILE_BYTES}")
    count = len(blob) // TILE_BYTES
    rows = (count + tiles_wide - 1) // tiles_wide
    width, height = tiles_wide * TILE_SIZE, rows * TILE_SIZE
    out = bytearray(width * height)
    for t in range(count):
        tx = (t % tiles_wide) * TILE_SIZE
        ty = (t // tiles_wide) * TILE_SIZE
        for y in range(TILE_SIZE):
            for x in range(TILE_SIZE):
                b = blob[t * TILE_BYTES + y * 4 + x // 2]
                out[(ty + y) * width + tx + x] = (
                    (b & 15) if x % 2 == 0 else (b >> 4))
    return out, width, height


def pack_tiles(indices, width, height, tiles_wide, count):
    """Peta piksel -> tile 4bpp (nibble rendah = piksel x genap)."""
    if width != tiles_wide * TILE_SIZE:
        raise ValueError(f"lebar {width} bukan {tiles_wide} tile")
    rows = (count + tiles_wide - 1) // tiles_wide
    if height != rows * TILE_SIZE:
        raise ValueError(f"tinggi {height}, harus {rows * TILE_SIZE}")
    out = bytearray()
    for t in range(count):
        tx = (t % tiles_wide) * TILE_SIZE
        ty = (t // tiles_wide) * TILE_SIZE
        for y in range(TILE_SIZE):
            for x in range(0, TILE_SIZE, 2):
                lo = indices[(ty + y) * width + tx + x]
                hi = indices[(ty + y) * width + tx + x + 1]
                if lo > 15 or hi > 15:
                    raise ValueError(f"indeks {max(lo, hi)} > 15 di tile {t}")
                out.append(lo | (hi << 4))
    return bytes(out)


def check_frames(meta, tile_count):
    """Validasi metadata frame; -> (width_tiles, height_tiles, count)."""
    frame = meta.get("frame")
    if not frame:
        return 1, 1, tile_count
    try:
        fw = int(frame["width_tiles"])
        fh = int(frame["height_tiles"])
        fc = int(frame["count"])
    except (KeyError, TypeError, ValueError):
        raise ValueError(f"frame tidak lengkap: {frame!r}")
    if min(fw, fh, fc) < 1:
        raise ValueError(f"frame harus >= 1: {frame!r}")
    if fw * fh * fc != tile_count:
        raise ValueError(
            f"frame {fw}x{fh}x{fc} = {fw * fh * fc} tile, "
            f"sheet punya {tile_count} tile")
    return fw, fh, fc


def encode_source(meta_path):
    """JSON + PNG terindeks + `.pal` -> byte tile 4bpp."""
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    if meta.get("kind") != "sprite":
        raise ValueError(f"{meta_path}: kind bukan sprite")
    source = meta["source"]
    tile_count = int(source["tile_count"])
    tiles_wide = int(source["tiles_wide"])
    check_frames(meta, tile_count)

    png_path = meta_path.parent / source["png"]
    width, height, indices, colors = read_png_indexed(png_path)
    expected = (tiles_wide * TILE_SIZE,
                ((tile_count + tiles_wide - 1) // tiles_wide) * TILE_SIZE)
    if (width, height) != expected:
        raise ValueError(f"{png_path}: ukuran {width}x{height}, harus "
                         f"{expected[0]}x{expected[1]}")

    pal_ref = source.get("pal")
    if pal_ref:
        pal_path = meta_path.parent / pal_ref
        pal_colors = pal2gba.read_pal(pal_path)
        if len(pal_colors) != len(colors):
            raise ValueError(
                f"{pal_path}: {len(pal_colors)} warna, PLTE {len(colors)}")
        quant = [tuple(pal2gba.from5(pal2gba.to5(v)) for v in c)
                 for c in pal_colors]
        if [tuple(c) for c in colors] != quant:
            raise ValueError(f"{png_path}: PLTE != palet {pal_path.name}")
    else:
        raise ValueError(f"{meta_path}: source.pal wajib untuk sprite")

    return pack_tiles(indices, width, height, tiles_wide, tile_count)



# ------------------------------------------------- pasangan sprite + palet
#
# Palet tidak selalu dimuat persis setelah tile di asm: kadang di cabang lain
# dari fungsi yang sama. Aturan pemasangan karenanya eksplisit, bukan asumsi.
PAIR_RULES = ("adjacent", "asm-load", "asm-branch")
DEFAULT_PAIR_MAX_DISTANCE = 40


def _asm_ref_lines(asm_lines, symbol):
    """Nomor baris (1-based) yang memuat `@ =<symbol>` di berkas asm."""
    pat = re.compile(r"@\s*=\s*" + re.escape(symbol) + r"\b")
    return [i for i, line in enumerate(asm_lines, 1) if pat.search(line)]


def check_pair(offset, size, pal_offset, rule="adjacent", lines="",
               reason="", max_distance=DEFAULT_PAIR_MAX_DISTANCE,
               asm_path="", symbol="", pal_symbol=""):
    """Validasi + catat cara pasangan sprite+palet ditetapkan.

    - ``adjacent``  : palet tepat setelah tile di ROM (urutan blob `.incbin`).
    - ``asm-load``  : palet dirujuk load asm berdekatan (<= max_distance baris).
    - ``asm-branch``: load berjauhan karena cabang berbeda; wajib `reason`.

    `adjacent` tetap dicatat pada semua aturan supaya pembaca JSON tahu apakah
    urutan blob ROM mendukung pasangan ini.
    """
    if rule not in PAIR_RULES:
        raise SystemExit(f"--pair-rule {rule!r} tidak dikenal; pilih "
                         + ", ".join(PAIR_RULES))
    adjacent = pal_offset == offset + size
    pair = {"rule": rule, "rom_adjacent": adjacent}
    if rule == "adjacent":
        if not adjacent:
            raise SystemExit(
                f"--pair-rule adjacent: palet 0x{pal_offset:X} bukan tepat "
                f"setelah tile 0x{offset:X}+0x{size:X} = 0x{offset + size:X}")
        return pair
    m = re.fullmatch(r"\s*(\d+)\s*[/:]\s*(\d+)\s*", lines or "")
    if not m:
        raise SystemExit(f"--pair-rule {rule} butuh "
                         "--pair-lines <baris-load-tile>/<baris-load-palet>")
    lines_tile, lines_pal = int(m.group(1)), int(m.group(2))
    distance = abs(lines_tile - lines_pal)
    if not asm_path:
        raise SystemExit(f"--pair-rule {rule} butuh --pair-asm <berkas .s> "
                         "supaya nomor baris bisa diverifikasi")
    if not (symbol and pal_symbol):
        raise SystemExit(f"--pair-rule {rule} butuh --symbol dan "
                         "--pal-symbol untuk verifikasi baris asm")
    asm_file = Path(asm_path)
    if not asm_file.exists():
        raise SystemExit(f"--pair-asm: berkas {asm_path} tidak ada")
    asm_lines = asm_file.read_text(errors="replace").splitlines()
    refs = {}
    for role, sym, want in (("tile", symbol, lines_tile),
                            ("palet", pal_symbol, lines_pal)):
        hits = _asm_ref_lines(asm_lines, sym)
        if not hits:
            raise SystemExit(f"--pair-asm: {sym} tidak dirujuk di {asm_path}")
        if want not in hits:
            raise SystemExit(
                f"--pair-asm: baris {want} di {asm_path} tidak memuat "
                f"`@ ={sym}` (rujukan ada di baris {hits[0]}"
                + (f", {len(hits)} tempat" if len(hits) > 1 else "") + ")")
        if want != hits[0]:
            raise SystemExit(
                f"--pair-asm: baris {want} bukan rujukan pertama {sym}; "
                f"pakai baris {hits[0]} (kanonik)")
        refs[role] = want
    pair.update({"source": "asm", "asm": asm_path,
                 "load_lines": [refs["tile"], refs["palet"]],
                 "distance": distance})
    if rule == "asm-load" and distance > max_distance:
        raise SystemExit(
            f"--pair-rule asm-load: jarak load {distance} > {max_distance} "
            "baris; kalau palet memang dimuat di cabang lain, pakai "
            "--pair-rule asm-branch --pair-reason <alasan>")
    if rule == "asm-branch":
        if not (reason or "").strip():
            raise SystemExit("--pair-rule asm-branch wajib --pair-reason "
                             "(kenapa palet dimuat di cabang lain)")
        pair["reason"] = reason.strip()
    return pair


BG_MAP_TOOL = "func_0804E9F4"


def _sp_slots(asm_lines):
    """slot stack -> nilai `movs rX,#imm; lsls rX,rX,#0x10; str rX,[sp,#slot]`."""
    slots = {}
    for i in range(len(asm_lines) - 2):
        m = re.fullmatch(r"\tmovs r(\d), #(0x[0-9a-f]+)", asm_lines[i])
        if not m:
            continue
        reg, imm = m.group(1), int(m.group(2), 16)
        if not re.fullmatch(rf"\tlsls r{reg}, r{reg}, #0x10", asm_lines[i + 1]):
            continue
        m3 = re.fullmatch(rf"\tstr r{reg}, \[sp, #(0x[0-9a-f]+)\]",
                          asm_lines[i + 2])
        if m3:
            slots[m3.group(1)] = imm
    return slots


def _bg_tile(asm_lines, branch_line, slots):
    """Tile yang ditulis `movs r1,#tile` atau `lsrs r1,rX,#0x10` di branch."""
    text = asm_lines[branch_line - 1].strip()
    m = re.fullmatch(r"movs r1, #(0x[0-9a-f]+)", text)
    if m:
        return int(m.group(1), 16)
    m = re.fullmatch(r"lsrs r1, r(\d+), #0x10", text)
    if not m:
        raise SystemExit(
            f"--pair-bg-branch baris {branch_line} bukan `movs r1, #tile` "
            f"atau `lsrs r1, rX, #0x10` ({text!r})")
    reg = m.group(1)
    for line in reversed(asm_lines[max(0, branch_line - 9):branch_line - 1]):
        m2 = re.fullmatch(rf"\tldr r{reg}, \[sp, #(0x[0-9a-f]+)\]", line)
        if m2:
            slot = m2.group(1)
            if slot not in slots:
                raise SystemExit(
                    f"--pair-bg-branch baris {branch_line}: konstanta slot "
                    f"{slot} tidak ditemukan")
            return slots[slot]
    raise SystemExit(
        f"--pair-bg-branch baris {branch_line}: `ldr r{reg}, [sp, ...]` "
        "tidak ditemukan")


def _bg_palette(asm_lines, branch_line, bg_line):
    """Argumen ke-5 (`[sp]`) pemanggilan BG map di antara branch dan bl."""
    found = None
    for i in range(branch_line - 1, bg_line - 1):
        m = re.fullmatch(r"\tstr r(\d), \[sp\]", asm_lines[i])
        if not m:
            continue
        reg = m.group(1)
        value = None
        for k in range(i - 1, max(i - 60, 0), -1):
            m2 = re.fullmatch(rf"\tmovs r{reg}, #(\d+)", asm_lines[k])
            if m2:
                value = int(m2.group(1))
                break
            if re.match(rf"\t(mov|ldr|add|sub|lsl|lsr)s? r{reg}\b",
                        asm_lines[k]):
                break
        if value is None:
            continue
        if found is not None and found != value:
            raise SystemExit(
                f"--pair-bg-line {bg_line}: indeks palet di jendela "
                f"branch..bl tidak konsisten ({found} vs {value})")
        found = value
    if found is None:
        raise SystemExit(
            f"--pair-bg-line {bg_line}: `str rX, [sp]` dengan nilai "
            f"`movs rX, #N` (argumen indeks palet) tidak ditemukan")
    return found


def _palette_dma_offset(asm_lines, pal_line):
    """Offset palet di palette RAM (0x05000000 + offset) dari baris load-nya."""
    window = range(pal_line - 1, min(pal_line + 8, len(asm_lines)))
    for i in window:
        m = re.search(r"@ =0x0500([0-9a-fA-F]{4})", asm_lines[i])
        if m:
            return int(m.group(1), 16)
    for i in window:
        m = re.fullmatch(r"\tmovs r(\d), #0xa0", asm_lines[i])
        if not m:
            continue
        reg = m.group(1)
        if i + 1 >= len(asm_lines) or not re.fullmatch(
                rf"\tlsls r{reg}, r{reg}, #0x13", asm_lines[i + 1]):
            continue
        for j in range(i + 2, min(i + 6, len(asm_lines))):
            m2 = re.fullmatch(rf"\tadd r{reg}, (sl|r\d+)", asm_lines[j])
            if not m2:
                continue
            reg2, base = m2.group(1), j
            if reg2 == "sl":
                m3 = next((k for k in range(base - 1, max(base - 250, 0), -1)
                           if re.fullmatch(r"\tmov sl, r\d+", asm_lines[k])),
                          None)
                if m3 is None:
                    break
                reg2 = re.fullmatch(r"\tmov sl, (r\d+)", asm_lines[m3]).group(1)
                base = m3
            for k in range(base - 1, max(base - 9, -1), -1):
                m4 = re.fullmatch(rf"\tmovs {reg2}, #(\d+)", asm_lines[k])
                if m4:
                    value = int(m4.group(1))
                    if any(re.fullmatch(
                            rf"\tlsls {reg2}, {reg2}, #5", asm_lines[q])
                           for q in range(k + 1, base)):
                        value <<= 5
                    return value
            break
    raise SystemExit(
        f"--pair-asm: offset palette RAM untuk baris load palet {pal_line} "
        "tidak bisa dibaca (literal 0x0500xxxx maupun 0x05000000+sl)")


def check_bg_map(asm_path, pal_line, branch_line, bg_line, tile, palette):
    """Verifikasi mesin bukti BG map: baris `bl func_0804E9F4` + indeks palet.

    Bukti yang dikutip di JSON tidak boleh diketik manual: baris branch harus
    benar-benar menetapkan tile itu di r1, baris `bl` harus memanggil
    `func_0804E9F4`, indeks palet di jendela branch..bl harus sama dengan
    `palette`, dan palet pasangan harus di-DMA ke bank `palette`
    (`0x05000000 + palette*0x20`).
    """
    asm_file = Path(asm_path)
    if not asm_file.exists():
        raise SystemExit(f"--pair-asm: berkas {asm_path} tidak ada")
    asm_lines = asm_file.read_text(errors="replace").splitlines()
    if not 0 < branch_line < bg_line <= len(asm_lines):
        raise SystemExit(
            f"--pair-bg-branch {branch_line} / --pair-bg-line {bg_line} "
            "di luar berkas atau urutannya terbalik")
    if asm_lines[bg_line - 1].strip() != f"bl {BG_MAP_TOOL}":
        raise SystemExit(
            f"--pair-bg-line {bg_line} bukan `bl {BG_MAP_TOOL}` "
            f"({asm_lines[bg_line - 1].strip()!r})")
    got_tile = _bg_tile(asm_lines, branch_line, _sp_slots(asm_lines))
    if got_tile != tile:
        raise SystemExit(
            f"--pair-bg-branch {branch_line} menetapkan tile "
            f"0x{got_tile:02X}, bukan 0x{tile:02X}")
    got_pal = _bg_palette(asm_lines, branch_line, bg_line)
    if got_pal != palette:
        raise SystemExit(
            f"--pair-bg-line {bg_line} memakai indeks palet {got_pal}, "
            f"bukan {palette}")
    offset = _palette_dma_offset(asm_lines, pal_line)
    bank = offset // 32
    if bank != palette:
        raise SystemExit(
            f"palet baris {pal_line} di-DMA ke 0x05000000+0x{offset:X} "
            f"(bank {bank}), bukan bank {palette}; bukti BG map dan tujuan "
            "DMA palet tidak cocok")
    return {"asm": asm_path, "line": bg_line, "branch": branch_line,
            "tile": f"0x{tile:02X}", "palette": palette,
            "palette_dma": f"0x{0x05000000 + offset:08X}", "bank": bank}


# ------------------------------------------------------------------ perintah

def decode(args):
    rom = Path(args.rom).read_bytes()
    tiles = rom[args.offset:args.offset + args.size]
    if len(tiles) != args.size:
        raise SystemExit(f"slice tile hanya {len(tiles)} B")
    pal = rom[args.pal_offset:args.pal_offset + args.pal_size]
    if len(pal) != args.pal_size:
        raise SystemExit(f"slice palet hanya {len(pal)} B")
    pair = check_pair(args.offset, args.size, args.pal_offset,
                      getattr(args, "pair_rule", "adjacent"),
                      getattr(args, "pair_lines", ""),
                      getattr(args, "pair_reason", ""),
                      getattr(args, "pair_max_distance",
                              DEFAULT_PAIR_MAX_DISTANCE),
                      getattr(args, "pair_asm", ""), args.symbol,
                      args.pal_symbol)
    bg_line = getattr(args, "pair_bg_line", None)
    if bg_line:
        if "load_lines" not in pair:
            raise SystemExit("--pair-bg-line butuh --pair-rule asm-load/"
                             "asm-branch beserta --pair-lines")
        for name in ("pair_bg_branch", "pair_bg_tile", "pair_bg_palette"):
            if getattr(args, name, None) is None:
                raise SystemExit(f"--pair-bg-line butuh --{name.replace('_', '-')}")
        pair["bg_map"] = check_bg_map(
            getattr(args, "pair_asm", ""), pair["load_lines"][1],
            args.pair_bg_branch, bg_line, args.pair_bg_tile,
            args.pair_bg_palette)
    colors = pal2gba.decode_bytes(pal)
    indices, width, height = unpack_tiles(tiles, args.tiles_wide)
    tile_count = args.size // TILE_BYTES

    png, pal_path = Path(args.png), Path(args.pal)
    png.parent.mkdir(parents=True, exist_ok=True)
    write_png_indexed(png, width, height, indices,
                      [tuple(pal2gba.from5(pal2gba.to5(v)) for v in c)
                       for c in colors])
    pal2gba.write_pal(pal_path, colors)

    meta = {
        "id": args.id,
        "symbol": args.symbol,
        "kind": "sprite",
        "status": "rom-exact",
        "rom": {"offset": f"0x{args.offset:X}", "size": len(tiles),
                "sha256": sha256(tiles)},
        "palette": {
            "symbol": args.pal_symbol,
            "rom": {"offset": f"0x{args.pal_offset:X}", "size": len(pal),
                    "sha256": sha256(pal)},
        },
        "source": {"png": png.name, "pal": pal_path.name,
                   "tiles_wide": args.tiles_wide,
                   "tile_count": tile_count},
        "frame": {"width_tiles": args.frame_width,
                  "height_tiles": args.frame_height,
                  "count": tile_count // (args.frame_width
                                          * args.frame_height),
                  "order": "row-major"},
        "semantics": getattr(args, "semantics", "unidentified"),
        "encoder": {"tool": "sprite2gba.py", "version": 1,
                    "tile_order": "row-major", "nibble_order": "low-first",
                    "png_format": "indexed-8-plte"},
        "pair": pair,
    }
    if args.evidence:
        meta["evidence"] = args.evidence
    if args.note:
        meta["note"] = args.note
    check_frames(meta, tile_count)
    js = Path(args.json)
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {tile_count} tile, {width}x{height} px, "
          f"sha256={meta['rom']['sha256']}")


def verify(meta_path, rom_path="baserom.gba"):
    meta_path = Path(meta_path)
    meta = json.loads(meta_path.read_text())
    encoded = encode_source(meta_path)
    declared = meta["rom"]["sha256"]
    problems = []
    if sha256(encoded) != declared:
        problems.append(f"sha256 encoder {sha256(encoded)[:12]}… != {declared[:12]}…")
    rom = Path(rom_path)
    pal = meta.get("palette")
    if rom.exists():
        raw = rom.read_bytes()
        offset = int(str(meta["rom"]["offset"]), 0)
        size = int(meta["rom"]["size"])
        if raw[offset:offset + size] != encoded:
            problems.append("byte encoder != byte ROM")
        if pal:
            poff = int(str(pal["rom"]["offset"]), 0)
            psize = int(str(pal["rom"]["size"]), 0)
            if sha256(raw[poff:poff + psize]) != pal["rom"]["sha256"]:
                problems.append("sha256 palet ROM != metadata (pasangan berubah)")
    bg = (meta.get("pair") or {}).get("bg_map")
    if bg:
        try:
            check_bg_map(bg["asm"], meta["pair"]["load_lines"][1],
                         bg["branch"], bg["line"],
                         int(bg["tile"], 16), bg["palette"])
        except SystemExit as exc:
            problems.append(f"bukti BG map: {exc}")
    print(f"symbol={meta.get('symbol', '?')} size={len(encoded)} "
          f"sha256={sha256(encoded)}")
    for problem in problems:
        print(f"MASALAH {problem}", file=sys.stderr)
    print(f"status={'MATCH' if not problems else 'MISMATCH'}")
    return 0 if not problems else 1


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)

    d = sub.add_parser("decode", help="slice ROM -> PNG terindeks + .pal + JSON")
    d.add_argument("--rom", default="baserom.gba")
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--pal-offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--pal-size", type=int, default=32)
    d.add_argument("--pal-symbol", required=True)
    d.add_argument("--tiles-wide", type=int, default=2)
    d.add_argument("--frame-width", type=int, default=2)
    d.add_argument("--frame-height", type=int, default=2)
    d.add_argument("--png", required=True)
    d.add_argument("--pal", required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--evidence", default="")
    d.add_argument("--note", default="")
    d.add_argument("--pair-rule", choices=PAIR_RULES, default="adjacent",
                   help="aturan pemasangan sprite+palet (default: adjacent)")
    d.add_argument("--pair-lines", default="",
                   metavar="TILE/PAL",
                   help="nomor baris load tile dan palet di asm "
                        "(wajib untuk asm-load/asm-branch)")
    d.add_argument("--pair-reason", default="",
                   help="alasan palet dimuat di cabang lain "
                        "(wajib untuk asm-branch)")
    d.add_argument("--pair-bg-line", type=int,
                   help="baris `bl func_0804E9F4` yang menulis tile ini di BG map")
    d.add_argument("--pair-bg-branch", type=int,
                   help="baris yang menetapkan tile di r1 (movs r1,#tile / "
                        "lsrs r1,rX,#0x10)")
    d.add_argument("--pair-bg-tile", type=lambda s: int(s, 0),
                   help="nomor tile BG map yang diharapkan (mis. 0x73)")
    d.add_argument("--pair-bg-palette", type=int,
                   help="indeks palet BG map yang diharapkan (0-15)")
    d.add_argument("--pair-max-distance", type=int,
                   default=DEFAULT_PAIR_MAX_DISTANCE,
                   help="batas jarak baris load untuk asm-load")
    d.add_argument("--semantics", choices=("proven", "unidentified"),
                   default="unidentified",
                   help="proven bila id semantik sudah terbukti, "
                        "unidentified untuk placeholder gunk_<alamat>")
    d.add_argument("--pair-asm", default="",
                   metavar="BERKAS",
                   help="berkas .s untuk memverifikasi --pair-lines "
                        "(wajib untuk asm-load/asm-branch)")
    d.set_defaults(func=decode)

    e = sub.add_parser("encode", help="JSON + PNG -> binary")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    e.set_defaults(func=lambda a: _encode(a))

    v = sub.add_parser("verify", help="gate hash/byte tile + palet")
    v.add_argument("--json", required=True)
    v.add_argument("--rom", default="baserom.gba")
    v.set_defaults(func=lambda a: sys.exit(verify(a.json, a.rom)))

    args = ap.parse_args(argv)
    args.func(args)
    return 0


def _encode(args):
    data = encode_source(args.json)
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print(f"{out}: {len(data)} B sha256={sha256(data)}")


if __name__ == "__main__":
    raise SystemExit(main())
