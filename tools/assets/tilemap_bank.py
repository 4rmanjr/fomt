#!/usr/bin/env python3
"""tilemap_bank.py — bank layer peta: banyak grid u16 di satu simbol.

Format `0x18` B yang dibaca `func_080A5BD8`:

```text
+0x00 u8 width
+0x01 u8 height
+0x04 void *layer[3]
+0x10 u8 *blockmap
+0x14 void *blocktable
```

Setiap pointer layer menunjuk `width*height` entri u16 di dalam blob, dan
fungsi menyalinnya baris demi baris ke lapis peta. Jadi satu simbol bisa
memuat banyak layer berukuran berbeda, bukan tabel blok seragam.

Source kanonik aset ini tetap satu JSON per simbol, tetapi isinya segmen
eksplisit:

```json
{"kind": "tilemap_bank",
 "layers": [{"offset": 32, "width": 2, "height": 3,
             "descriptor": "0x106D94", "slot": 1,
             "entries": [37749, ...]}],
 "raw": [{"offset": 0, "hex": "0000..."}]}
```

`layers` mencatat offset/lebar/tinggi tiap layer yang dirujuk descriptor;
`payload_segments` mencatat rentang yang dimulai pointer table, dan `raw`
menutup byte yang tidak dirujuk (padding, data lain). Encoder menolak source
yang tidak menutup seluruh `rom.size`, tumpang tindih, atau jumlah entri tidak
sama dengan `width*height`, lalu menulis byte little endian. Dengan begitu
round-trip bisa byte-identik tanpa mengarang format untuk byte yang belum
terbukti.

Tiap `payload_segments` wajib punya `kind`, dan byte-nya ditulis dari field
semantik kind itu (bukan dari hex mentah):

```json
{"offset": 8420, "size": 32, "kind": "palette",
 "pointer_sources": ["0x107224"], "colors": [31775, ...]}
{"offset": 8452, "size": 48, "kind": "tilemap", "width": 6, "height": 4,
 "pointer_sources": ["0x107208"], "entries": [37329, ...]}
{"offset": 7456, "size": 964, "kind": "packed", "codec": "unpack",
 "format": 19, "ladder": [1, 4, 8], "unpack_size": 2048,
 "unpack_flags": 112, "tokens": "l:343333;m:1,32,8;...",
 "unpacked_sha256": "..."}
{"offset": 17156, "size": 2308, "kind": "frames4bpp",
 "header": [18, 4], "tiles_per_frame": 18, "frames": 4,
 "tiles_png": "assets/gfx/maps/gUnk_086EAD8C/payload_0x4304.png",
 "tiles_wide": 12}
```

`coverage()` menghitung ulang `proven_bytes` dari field yang benar-benar
direkonstruksi (layer + palet + entri tilemap payload), dan `asset_verify`
membandingkannya dengan blok `coverage` di JSON.

  python3 tools/assets/tilemap_bank.py decode --rom baserom.gba \\
      --offset 0x6EAD8C --size 33312 \\
      --descriptor-start 0x10692C --descriptor-end 0x1070DC \\
      --json assets/gfx/maps/gUnk_086EAD8C.json \\
      --id gfx/maps/gunk_086ead8c --symbol gUnk_086EAD8C
  python3 tools/assets/tilemap_bank.py encode --json x.json --out x.bin
  python3 tools/assets/tilemap_bank.py verify --json x.json
"""
import argparse
import hashlib
import importlib.util
import json
import struct
import sys
from pathlib import Path

ENTRY = 2
DESCRIPTOR = 0x18


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def bytes_from_entries(entries):
    out = bytearray()
    for value in entries:
        if not isinstance(value, int) or not 0 <= value <= 0xFFFF:
            raise ValueError(f"entri {value!r} di luar u16")
        out += value.to_bytes(ENTRY, "little")
    return bytes(out)


PAYLOAD_KINDS = ("palette", "tilemap", "frames4bpp", "packed")
REPO = Path(__file__).resolve().parents[2]

_POPURI = None
_TILE4BPP = None


def popuri():
    """Modul codec `Unpack` di sebelah berkas ini (dimuat sekali)."""
    global _POPURI
    if _POPURI is None:
        path = Path(__file__).with_name("popuri.py")
        spec = importlib.util.spec_from_file_location("popuri", path)
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        _POPURI = module
    return _POPURI


def tile4bpp():
    """Codec PNG indeks 16 warna di sebelah berkas ini (dimuat sekali)."""
    global _TILE4BPP
    if _TILE4BPP is None:
        path = Path(__file__).with_name("tile4bpp.py")
        spec = importlib.util.spec_from_file_location("tile4bpp", path)
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        _TILE4BPP = module
    return _TILE4BPP


def require_png(obj, label):
    """Tile 4bpp wajib punya source PNG, bukan hex."""
    if "tiles_hex" in obj:
        raise ValueError(
            f"{label}: tiles_hex sudah tidak dipakai; simpan tiles_png")
    if not isinstance(obj.get("tiles_png"), str) or not obj["tiles_png"]:
        raise ValueError(f"{label}: tiles_png wajib path PNG")
    if not isinstance(obj.get("tiles_wide"), int) or obj["tiles_wide"] < 1:
        raise ValueError(f"{label}: tiles_wide wajib >= 1")
    if not (REPO / obj["tiles_png"]).is_file():
        raise ValueError(f"{label}: tiles_png {obj['tiles_png']} tidak ada")


def tiles_from_png(rel, count, tiles_wide, label):
    """PNG indeks 0..15 (R=G=B=idx*17) -> body 4bpp GBA, nibble rendah dulu."""
    tool = tile4bpp()
    path = REPO / rel
    width, height, rgb = tool.read_png(path)
    rows = (count + tiles_wide - 1) // tiles_wide
    if width != tiles_wide * 8 or height != rows * 8:
        raise ValueError(
            f"{label}: {path.name} {width}x{height}, harus "
            f"{tiles_wide * 8}x{rows * 8} untuk {count} tile")
    body = bytearray()
    for tile in range(count):
        tx = (tile % tiles_wide) * 8
        ty = (tile // tiles_wide) * 8
        for y in range(8):
            for x in range(0, 8, 2):
                pair = []
                for xx in (x, x + 1):
                    dst = ((ty + y) * width + tx + xx) * 3
                    color = tuple(rgb[dst:dst + 3])
                    if color not in tool.RGB_TO_INDEX:
                        raise ValueError(
                            f"{label}: warna {color} di tile {tile} bukan "
                            "indeks 0..15")
                    pair.append(tool.RGB_TO_INDEX[color])
                body.append(pair[0] | (pair[1] << 4))
    return bytes(body)


def u16_list(values, label, limit=0xFFFF):
    """-> little-endian u16; `limit` mempersempit (palet BGR555: 0x7FFF)."""
    out = bytearray()
    for value in values:
        if (not isinstance(value, int) or isinstance(value, bool)
                or not 0 <= value <= limit):
            raise ValueError(f"{label}: {value!r} di luar 0..{limit:#x}")
        out += value.to_bytes(ENTRY, "little")
    return bytes(out)


def payload_bytes(seg):
    """Satu segmen payload -> byte, ditulis dari field semantiknya.

    Tidak ada kind yang menyimpan blob buram: `palette` = warna BGR555,
    `tilemap` = entri u16, `frames4bpp`/`tile_animations` = PNG indeks 0..15
    (`tiles_png`), dan `packed` = token LZ yang ditulis ulang `popuri`.
    """
    offset = seg.get("offset")
    label = f"payload {offset:#x}" if isinstance(offset, int) else "payload ?"
    kind = seg.get("kind")
    if kind == "palette":
        colors = seg.get("colors")
        if not isinstance(colors, list) or not colors:
            raise ValueError(f"{label}: palette wajib daftar colors")
        data = u16_list(colors, label, 0x7FFF)
    elif kind == "tilemap":
        width, height = seg.get("width"), seg.get("height")
        entries = seg.get("entries")
        if not isinstance(width, int) or not isinstance(height, int) \
                or width < 1 or height < 1:
            raise ValueError(f"{label}: tilemap wajib width/height >= 1")
        if not isinstance(entries, list) or len(entries) != width * height:
            raise ValueError(
                f"{label}: {len(entries or [])} entri != {width}x{height}")
        if "tail_hex" in seg:
            raise ValueError(
                f"{label}: tail_hex sudah tidak dipakai; pakai tail "
                "{kind: alignment, size: n}")
        tail = seg.get("tail")
        if tail:
            if (not isinstance(tail, dict) or tail.get("kind") != "alignment"
                    or not isinstance(tail.get("size"), int)
                    or tail["size"] < 1):
                raise ValueError(
                    f"{label}: tail wajib objek kind 'alignment' + size >= 1")
            data = u16_list(entries, label) + bytes(tail["size"])
        else:
            data = u16_list(entries, label)
    elif kind == "frames4bpp":
        header = seg.get("header")
        tpf, frames = seg.get("tiles_per_frame"), seg.get("frames")
        if (not isinstance(tpf, int) or not isinstance(frames, int)
                or tpf < 1 or frames < 1):
            raise ValueError(f"{label}: tiles_per_frame/frames wajib >= 1")
        if header != [tpf, frames]:
            raise ValueError(
                f"{label}: header {header!r} != [{tpf}, {frames}]")
        require_png(seg, label)
        tiles = tiles_from_png(seg["tiles_png"], tpf * frames,
                               seg["tiles_wide"], label)
        data = struct.pack("<2H", tpf, frames) + tiles
    elif kind == "packed":
        if "hex" in seg:
            raise ValueError(
                f"{label}: hex sudah tidak dipakai; simpan format/ladder/"
                "huffman/tokens dan biarkan popuri.assemble menulis byte-nya")
        data = popuri().assemble(seg)
    else:
        raise ValueError(
            f"{label}: kind {kind!r} tidak dikenal (pilih salah satu "
            f"{PAYLOAD_KINDS})")
    if len(data) != seg.get("size"):
        raise ValueError(f"{label}: {len(data)} B != size {seg.get('size')}")
    return data


def _anim_bytes(anim):
    """Blok `tile_animations` -> header 2 u16 + body dari PNG tile."""
    offset = int(str(anim.get("offset", 0)), 0)
    label = f"tile_animation {offset:#x}"
    header = anim.get("header")
    tpf, frames = anim.get("tiles_per_frame"), anim.get("frames")
    if not isinstance(header, list) or len(header) != 2:
        raise ValueError(f"{label}: header wajib 2 u16")
    if (not isinstance(tpf, int) or not isinstance(frames, int)
            or tpf < 1 or frames < 1):
        raise ValueError(f"{label}: tiles_per_frame/frames wajib >= 1")
    if header != [tpf, frames]:
        raise ValueError(f"{label}: header {header!r} != [{tpf}, {frames}]")
    require_png(anim, label)
    body = tiles_from_png(anim["tiles_png"], tpf * frames,
                          anim["tiles_wide"], label)
    return struct.pack("<2H", *header) + body


def coverage(meta, meta_path=None):
    """-> coverage dari field yang direkonstruksi (bukan hex mentah).

    Yang dihitung hanya byte yang nilainya ditentukan field semantik: entri
    layer (`layers`), segmen payload `palette`/`tilemap`/`frames4bpp`,
    `tile_animations`, dan segmen `packed` (byte terkompresi ditulis dari
    `tokens`, hasil dekompresinya dicek `unpacked_sha256`). Yang masih membawa
    hex (`hex` pada packed, `tiles_hex` pada tile 4bpp) atau tanpa source PNG
    ditolak, bukan dihitung. Padding dan byte `raw` tetap `raw_bytes`.
    """
    total = int(meta["rom"]["size"])
    proven = 0
    for layer in meta.get("layers", []):
        proven += layer["width"] * layer["height"] * ENTRY
    for seg in meta.get("payload_segments", []):
        if seg.get("kind") == "palette":
            proven += seg["size"]
        elif seg.get("kind") == "tilemap":
            proven += seg["width"] * seg["height"] * ENTRY
        elif seg.get("kind") == "packed":
            if "hex" in seg or not seg.get("tokens"):
                raise ValueError(
                    f"packed +{seg.get('offset')}: butuh tokens tanpa hex "
                    "sebelum boleh dihitung proven")
            proven += seg["size"]
        elif seg.get("kind") == "frames4bpp":
            require_png(seg, f"payload +{seg.get('offset')}")
            proven += seg["size"]
    for anim in meta.get("tile_animations", []):
        label = f"tile_animation {int(str(anim.get('offset', 0)), 0):#x}"
        header = anim.get("header")
        tpf, frames = anim.get("tiles_per_frame"), anim.get("frames")
        if (not isinstance(header, list) or header != [tpf, frames]
                or not isinstance(tpf, int) or tpf < 1
                or not isinstance(frames, int) or frames < 1):
            raise ValueError(f"{label}: header/tiles_per_frame/frames rusak")
        require_png(anim, label)
        proven += 4 + tpf * frames * 32
    return {
        "total_bytes": total,
        "proven_bytes": proven,
        "raw_bytes": total - proven,
        "proven_ratio": round(proven / total, 4),
    }


def _segments(meta, size):
    """-> daftar (offset, bytes, label); menolak tumpang tindih dan celah."""
    segments = []
    for layer in meta.get("layers", []):
        width, height = layer.get("width"), layer.get("height")
        entries = layer.get("entries")
        if not width or not height:
            raise ValueError("layer.width/height wajib ada")
        if not isinstance(entries, list) or len(entries) != width * height:
            raise ValueError(
                f"layer {layer.get('offset')}: {len(entries or [])} entri "
                f"!= {width}x{height}")
        offset = int(str(layer["offset"]), 0)
        label = f"layer {offset:#x} {width}x{height}"
        segments.append((offset, bytes_from_entries(entries), label))
    for anim in meta.get("tile_animations", []):
        offset = int(str(anim["offset"]), 0)
        label = f"tile_animation {offset:#x}"
        segments.append((offset, _anim_bytes(anim), label))
    for seg in meta.get("payload_segments", []):
        offset = int(str(seg["offset"]), 0)
        data = payload_bytes(seg)
        segments.append((offset, data, f"payload {offset:#x} ({seg['kind']})"))
    for chunk in meta.get("raw", []):
        offset = int(str(chunk["offset"]), 0)
        if "hex" in chunk:
            raise ValueError(
                f"raw {offset:#x}: hex sudah tidak dipakai; pakai u16")
        label = f"raw {offset:#x}"
        values = chunk.get("u16")
        if not isinstance(values, list) or not values:
            raise ValueError(f"{label}: u16 wajib daftar")
        segments.append((offset, u16_list(values, label), label))
    segments.sort()
    covered = bytearray(size)
    for offset, data, label in segments:
        end = offset + len(data)
        if offset < 0 or end > size:
            raise ValueError(f"{label}: {offset:#x}..{end:#x} di luar {size} B")
        for index in range(offset, end):
            if covered[index]:
                raise ValueError(f"{label}: tumpang tindih di {index:#x}")
            covered[index] = 1
    gaps = [i for i, flag in enumerate(covered) if not flag]
    if gaps:
        raise ValueError(
            f"source tidak menutup {len(gaps)} B, celah pertama {gaps[0]:#x}")
    return segments


def _load_meta(meta_path):
    try:
        meta = json.loads(Path(meta_path).read_text())
    except (OSError, UnicodeDecodeError, json.JSONDecodeError) as exc:
        raise SystemExit(f"{meta_path}: JSON tidak valid: {exc}")
    if not isinstance(meta, dict):
        raise SystemExit(f"{meta_path}: JSON wajib objek")
    if not isinstance(meta.get("rom"), dict):
        raise SystemExit(f"{meta_path}: field rom wajib objek")
    return meta


def encode_source(meta_path):
    meta = _load_meta(meta_path)
    size = int(meta["rom"]["size"])
    buf = bytearray(size)
    for offset, data, _label in _segments(meta, size):
        buf[offset:offset + len(data)] = data
    return bytes(buf)


def _parse_descriptors(rom, start, end):
    """-> [(descriptor, width, height, layer_ptrs)] untuk rentang tabel."""
    if (end - start) % DESCRIPTOR:
        raise SystemExit("rentang descriptor bukan kelipatan 0x18")
    out = []
    for address in range(start, end, DESCRIPTOR):
        dims = struct.unpack_from("<H", rom, address)[0]
        width, height = dims & 0xFF, dims >> 8
        if not (1 <= width <= 64 and 1 <= height <= 64):
            raise SystemExit(f"descriptor {address:#x}: ukuran {width}x{height} tidak masuk akal")
        ptrs = struct.unpack_from("<5I", rom, address + 4)
        out.append((address, width, height, ptrs[0:3]))
    return out


def decode_blob(data, rom, offset, size, descriptors):
    """Slice ROM -> metadata layer/raw; menolak layer yang tumpang tindih."""
    lo = 0x08000000 + offset
    hi = lo + size
    layers = []
    seen = {}
    for address, width, height, ptrs in descriptors:
        for slot, pointer in enumerate(ptrs):
            if not lo <= pointer < hi:
                continue
            layer_offset = pointer - lo
            length = width * height * ENTRY
            if layer_offset + length > size:
                raise SystemExit(
                    f"descriptor {address:#x} slot {slot}: layer melewati blob")
            key = (layer_offset, width, height)
            if key in seen:
                continue
            seen[key] = (address, slot)
            entries = list(struct.unpack_from(
                f"<{width * height}H", data, layer_offset))
            layers.append({
                "offset": layer_offset,
                "width": width,
                "height": height,
                "descriptor": f"0x{address:X}",
                "slot": slot,
                "entries": entries,
            })
    layers.sort(key=lambda layer: layer["offset"])
    covered = bytearray(size)
    for layer in layers:
        start = layer["offset"]
        end = start + layer["width"] * layer["height"] * ENTRY
        for index in range(start, end):
            if covered[index]:
                raise SystemExit(f"layer {start:#x} tumpang tindih di {index:#x}")
            covered[index] = 1
    raw = []
    index = 0
    while index < size:
        if covered[index]:
            index += 1
            continue
        start = index
        while index < size and not covered[index]:
            index += 1
        raw.append({"offset": start,
                    "hex": data[start:index].hex()})
    return layers, raw


def decode_meta(blob, rom, offset, size, descriptors, args):
    layers, raw = decode_blob(blob, rom, offset, size, descriptors)
    return {
        "id": args.id,
        "symbol": args.symbol,
        "kind": "tilemap_bank",
        "status": "rom-exact",
        "semantics": args.semantics,
        "rom": {
            "offset": f"0x{offset:X}",
            "size": size,
            "sha256": sha256(blob),
        },
        "source": {"json": Path(args.json).name},
        "encoder": {"tool": "tilemap_bank.py", "version": 1},
        "descriptor_table": {
            "start": f"0x{args.descriptor_start:X}",
            "end": f"0x{args.descriptor_end:X}",
            "record_size": DESCRIPTOR,
        },
        "layers": layers,
        "raw": raw,
        "note": args.note,
        "evidence": args.evidence,
    }


def verify(json_path, rom_path, out_path=None):
    meta = json.loads(Path(json_path).read_text())
    encoded = encode_source(json_path)
    offset = int(str(meta["rom"]["offset"]), 0)
    size = int(meta["rom"]["size"])
    expected = Path(rom_path).read_bytes()[offset:offset + size]
    actual_hash = sha256(encoded)
    ok = (len(expected) == size and encoded == expected
          and actual_hash == meta["rom"]["sha256"])
    if out_path is not None:
        out = Path(out_path)
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(encoded)
    print(f"symbol={meta.get('symbol', '?')} layers={len(meta.get('layers', []))} "
          f"raw={len(meta.get('raw', []))} size={len(encoded)}")
    print(f"encoded_sha256={actual_hash}")
    print(f"status={'MATCH' if ok else 'MISMATCH'}")
    return 0 if ok else 1


def cmd_decode(args):
    rom = Path(args.rom).read_bytes()
    blob = rom[args.offset:args.offset + args.size]
    if len(blob) != args.size:
        raise SystemExit(f"slice ROM hanya {len(blob)} B, bukan {args.size} B")
    descriptors = _parse_descriptors(rom, args.descriptor_start,
                                     args.descriptor_end)
    meta = decode_meta(blob, rom, args.offset, args.size, descriptors, args)
    js = Path(args.json)
    js.parent.mkdir(parents=True, exist_ok=True)
    js.write_text(json.dumps(meta, indent=1) + "\n")
    print(f"{js}: {len(meta['layers'])} layer, {len(meta['raw'])} segmen raw, "
          f"{len(blob)} B, sha256={sha256(blob)}")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)
    d = sub.add_parser("decode", help="slice ROM -> layer + raw")
    d.add_argument("--rom", default="baserom.gba")
    d.add_argument("--offset", type=lambda s: int(s, 0), required=True)
    d.add_argument("--size", type=int, required=True)
    d.add_argument("--descriptor-start", type=lambda s: int(s, 0), required=True)
    d.add_argument("--descriptor-end", type=lambda s: int(s, 0), required=True)
    d.add_argument("--json", required=True)
    d.add_argument("--id", required=True)
    d.add_argument("--symbol", required=True)
    d.add_argument("--note", default="")
    d.add_argument("--evidence", default="")
    d.add_argument("--semantics", choices=("proven", "unidentified"),
                   default="unidentified")
    d.set_defaults(func=cmd_decode)
    e = sub.add_parser("encode", help="metadata JSON -> bin")
    e.add_argument("--json", required=True)
    e.add_argument("--out", required=True)
    e.set_defaults(func=lambda a: _encode(a, out=a.out))
    v = sub.add_parser("verify", help="bandingkan hasil encode dengan slice ROM")
    v.add_argument("--json", required=True)
    v.add_argument("--rom", default="baserom.gba")
    v.add_argument("--out", default=None)
    v.set_defaults(func=lambda a: sys.exit(verify(a.json, a.rom, a.out)))
    args = ap.parse_args(argv)
    args.func(args)
    return 0


def _encode(args, out):
    data = encode_source(args.json)
    Path(out).parent.mkdir(parents=True, exist_ok=True)
    Path(out).write_bytes(data)
    print(f"{out}: {len(data)} B sha256={sha256(data)}")


if __name__ == "__main__":
    raise SystemExit(main())
