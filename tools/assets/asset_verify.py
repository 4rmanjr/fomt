#!/usr/bin/env python3
"""asset_verify.py — gate per-aset: schema + hash ROM + encoder + source.

Memeriksa `assets/manifest.json` terhadap `tools/assets/manifest_schema.json`,
lalu untuk setiap aset:

1. slice `baserom.gba[offset:offset+size]` punya sha256 yang sama dengan
   `rom.sha256` di manifest;
2. modul encoder yang tercatat (`encoder.tool`) dipanggil ulang dari source
   kanonik (`source.json` -> `pal`/`png`) dan byte hasilnya sama dengan slice
   ROM. Bila `build/assets/<symbol>.bin` sudah ada, lebih baru daripada semua
   input encoder, dan byte-nya sama dengan slice ROM, encode ulang dilewati
   (`--force-encode` memaksa jalur lambat);
3. setiap berkas `source` ada;
4. `.incbin "baserom.gba", <offset>, <size>` yang masih tersisa di
   `asm/data/*.s` dilaporkan sebagai catatan (Fase 0 belum mengubah build);
   dengan `--require-switched` catatan itu menjadi kegagalan;
5. untuk `kind: palette`, `evidence` yang menyebut tapak salinan
   (`<berkas>.s:<baris>`) harus cocok dengan asm: tapak yang menambah indeks
   slot sebelum salinan wajib menulis basis + slot, sedangkan tapak bertujuan
   tetap wajib menyebut konstanta tujuannya. Tujuannya mencegah evidence
   menulis `0x05000200` padahal byte-nya masuk ke `0x05000200 + slot*0x20`;
6. untuk `kind: tiles4bpp`, setiap kutipan `<berkas>.s:<baris>` harus menunjuk
   baris `bl` salinan/loader dan simbol aset harus dimuat sebagai argumennya
   (literal `@ =gUnk_...` terdekat). Kutipan fungsi yang tidak menyalin atau
   yang memuat simbol lain ditolak. Bila evidence mengklaim panjang `<n> B`,
   register panjang (`r3` untuk `func_08008F0C`, `r2` untuk
   `func_08008E64`/`memcpy`) harus terlacak dan nilainya sama, jadi nomor
   baris benar tetapi panjang salah tetap gagal.

  python3 tools/assets/asset_verify.py                  # semua aset
  python3 tools/assets/asset_verify.py --symbol gUnk_08731940
  python3 tools/assets/asset_verify.py --json
  python3 tools/assets/asset_verify.py --require-switched
  python3 tools/assets/asset_verify.py --force-encode

Tidak menjalankan build dan tidak menulis berkas.
"""
import argparse
import hashlib
import importlib.util
import json
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "assets"
MANIFEST = REPO / "assets" / "manifest.json"
SCHEMA = TOOLS / "manifest_schema.json"
ROM = REPO / "baserom.gba"
ASM_DATA = REPO / "asm" / "data"
sys.path.insert(0, str(TOOLS))
import asset_manifest  # noqa: E402 - helper jalur cepat bin build

INCBIN = re.compile(
    r'\.incbin\s+"baserom\.gba"\s*,\s*(0x[0-9A-Fa-f]+)\s*,\s*(0x[0-9A-Fa-f]+)')
# Penjaga evidence palet: tapak salinan ke palette RAM.
PALETTE_RAM = (0x05000000, 0x05000400)
COPY_CALL = re.compile(
    r'\bbl\s+(Unpack|func_08008E64|func_08008EB8|func_08008F0C)\b')
# func_08008F0C(obj, src, dst, len) menaruh tujuan di r2, yang lain di r1.
COPY_DST_REG = {"func_08008F0C": "r2"}
EVIDENCE_CITE = re.compile(r'([\w./-]+\.s):(\d+)')
REG_ALIAS = {"sb": "r9", "sl": "r10", "fp": "r11", "ip": "r12"}
# Penjaga evidence tiles4bpp: baris yang dikutip harus salinan/loader, dan
# simbol aset harus dimuat di jendela sebelum baris itu.
TILE_LOAD_CALL = re.compile(
    r'\bbl\s+(Unpack|func_08008E64|func_08008EB8|func_08008F0C|'
    r'func_0805E6CC|memcpy)\b')
SYMBOL_LOAD = re.compile(r'@\s*=\s*(gUnk_[0-9A-Fa-f]+)\b')
TILE_SYMBOL_WINDOW = 24
# Register panjang argumen salinan; None = loader tanpa panjang yang terbaca.
COPY_LEN_REG = {"func_08008F0C": "r3", "func_08008E64": "r2",
                "func_08008EB8": "r2", "memcpy": "r2"}
LENGTH_CLAIM = re.compile(r'(?<![\w.])(0x[0-9A-Fa-f]+|\d+)\s*B\b')

_TYPES = {"object": dict, "array": list, "string": str, "integer": int,
          "null": type(None), "boolean": bool, "number": (int, float)}


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def load_module(name):
    spec = importlib.util.spec_from_file_location(name[:-3], TOOLS / name)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def validate(node, schema, path="$"):
    """Validator JSON Schema subset (type/required/properties/items/enum/
    pattern/minimum/minItems). Cukup untuk schema manifest ini."""
    errs = []
    want = schema.get("type")
    if want:
        wants = want if isinstance(want, list) else [want]
        ok = False
        for name in wants:
            py = _TYPES.get(name)
            if py and isinstance(node, py) and not (
                    name == "integer" and isinstance(node, bool)):
                ok = True
        if not ok:
            errs.append(f"{path}: tipe {type(node).__name__}, skema minta {want}")
            return errs
    if isinstance(node, dict):
        for key in schema.get("required", []):
            if key not in node:
                errs.append(f"{path}: field wajib '{key}' hilang")
        props = schema.get("properties", {})
        for key, value in node.items():
            if key in props:
                errs += validate(value, props[key], f"{path}.{key}")
    if isinstance(node, list):
        if len(node) < schema.get("minItems", 0):
            errs.append(f"{path}: {len(node)} item < minItems "
                        f"{schema['minItems']}")
        if "items" in schema:
            for i, value in enumerate(node):
                errs += validate(value, schema["items"], f"{path}[{i}]")
    if isinstance(node, str):
        if "enum" in schema and node not in schema["enum"]:
            errs.append(f"{path}: {node!r} tidak ada di enum {schema['enum']}")
        if "pattern" in schema and not re.search(schema["pattern"], node):
            errs.append(f"{path}: {node!r} tidak cocok pola "
                        f"{schema['pattern']}")
    if isinstance(node, int) and not isinstance(node, bool):
        if "minimum" in schema and node < schema["minimum"]:
            errs.append(f"{path}: {node} < minimum {schema['minimum']}")
    return errs


def incbin_offsets():
    """offset ROM -> daftar (berkas, baris) yang masih `.incbin baserom`."""
    found = {}
    for path in sorted(ASM_DATA.glob("*.s")):
        for i, line in enumerate(path.read_text().splitlines(), 1):
            m = INCBIN.search(line)
            if m:
                found.setdefault(int(m.group(1), 16), []).append(
                    (path.name, i, int(m.group(2), 16)))
    return found


def _reg(text):
    return REG_ALIAS.get(text.strip(), text.strip())


def _imm(text):
    """'#0xa0' -> 0xA0; None bila bukan literal."""
    match = re.fullmatch(r'#(-?0x[0-9A-Fa-f]+|-?\d+)', text.strip())
    if not match:
        return None
    return int(match.group(1), 0) & 0xFFFFFFFF


def _trace_constant(lines, reg):
    """Nilai konstan `reg` setelah `lines`, atau None bila tak terlacak.

    Hanya melacak bentuk yang dipakai pemuat palet (movs/ldr @=konstanta,
    lsls, adds, mov, dan tambah register). Tulis lain ke register tujuan
    membuat nilainya None — artinya tujuan tidak terbukti tetap.
    """
    vals = {}
    for line in lines:
        text = line.strip()
        if not text or text.startswith('@') or text.endswith(':'):
            continue
        match = re.fullmatch(r'movs?\s+(\w+),\s*(#\S+)', text)
        if match:
            vals[_reg(match.group(1))] = _imm(match.group(2))
            continue
        match = re.fullmatch(r'ldr\s+(\w+),\s*\.L[0-9A-Fa-f]+\s*@\s*=\s*(0x[0-9A-Fa-f]+)',
                             text)
        if match:
            vals[_reg(match.group(1))] = int(match.group(2), 16)
            continue
        match = re.fullmatch(r'lsls\s+(\w+),\s*(\w+),\s*#(\S+)', text)
        if match:
            base = vals.get(_reg(match.group(2)))
            shift = _imm('#' + match.group(3))
            vals[_reg(match.group(1))] = (None if base is None or shift is None
                                          else (base << shift) & 0xFFFFFFFF)
            continue
        match = re.fullmatch(r'adds?\s+(\w+),\s*(\w+),\s*#(\S+)', text)
        if match:
            base = vals.get(_reg(match.group(2)))
            value = _imm('#' + match.group(3))
            vals[_reg(match.group(1))] = (None if base is None or value is None
                                          else (base + value) & 0xFFFFFFFF)
            continue
        match = re.fullmatch(r'adds?\s+(\w+),\s*#(\S+)', text)
        if match:
            dst = _reg(match.group(1))
            base = vals.get(dst)
            value = _imm('#' + match.group(2))
            vals[dst] = (None if base is None or value is None
                         else (base + value) & 0xFFFFFFFF)
            continue
        match = re.fullmatch(r'adds?\s+(\w+),\s*(\w+),\s*(\w+)', text)
        if match:
            left = vals.get(_reg(match.group(2)))
            right = vals.get(_reg(match.group(3)))
            vals[_reg(match.group(1))] = (None if left is None or right is None
                                          else (left + right) & 0xFFFFFFFF)
            continue
        match = re.fullmatch(r'adds?\s+(\w+),\s*(\w+)', text)
        if match:
            dst = _reg(match.group(1))
            left, right = vals.get(dst), vals.get(_reg(match.group(2)))
            vals[dst] = (None if left is None or right is None
                         else (left + right) & 0xFFFFFFFF)
            continue
        match = re.fullmatch(r'movs?\s+(\w+),\s*(\w+)', text)
        if match:
            vals[_reg(match.group(1))] = vals.get(_reg(match.group(2)))
            continue
        written = re.match(r'(?:ldr|ldrb|ldrh|ldrsb|ldrsh|ldmia|pop)\s+(\w+)', text)
        if written:
            vals[_reg(written.group(1))] = None
        if re.search(r'\bbl\s+\w+', text):
            for clobbered in ('r0', 'r1', 'r2', 'r3', 'r12'):
                vals[clobbered] = None
    return vals.get(_reg(reg))


def palette_evidence_problems(asset, repo=None):
    """Evidence palet yang menyebut tujuan tetap padahal tapak menambah slot.

    `evidence` dikutip sebagai `<berkas>.s:<baris>`; baris itu harus `bl`
    salinan. Tujuan dihitung dari instruksi sebelumnya: bila hasilnya konstanta
    palette RAM, evidence wajib menyebut konstanta itu dan tidak boleh menyebut
    slot; bila hasilnya tak terlacak (mis. basis + register slot), evidence
    wajib menyebut slot/indeks.
    """
    if asset.get('kind') != 'palette':
        return []
    evidence = asset.get('evidence') or ''
    if not evidence:
        return []
    root = Path(repo) if repo is not None else REPO
    for match in EVIDENCE_CITE.finditer(evidence):
        path = root / 'asm' / Path(match.group(1)).name
        if not path.exists():
            continue
        lines = path.read_text().splitlines()
        index = int(match.group(2)) - 1
        if not 0 <= index < len(lines):
            continue
        call = COPY_CALL.search(lines[index])
        if not call:
            continue
        tool = call.group(1)
        reg = COPY_DST_REG.get(tool, 'r1')
        value = _trace_constant(lines[max(0, index - 16):index], reg)
        where = f"{match.group(1)}:{match.group(2)}"
        claims_slot = re.search(r'\bslot\b', evidence, re.I) is not None
        if value is not None and PALETTE_RAM[0] <= value < PALETTE_RAM[1]:
            if claims_slot:
                return [f"evidence menyebut slot, padahal {tool} di {where} "
                        f"memakai tujuan tetap 0x{value:08X}"]
            if f"0x{value:08X}".upper() not in evidence.upper():
                return [f"evidence tidak menyebut tujuan tetap 0x{value:08X} "
                        f"yang dipakai {tool} di {where}"]
            return []
        if not claims_slot:
            return [f"{tool} di {where} menambah indeks slot sebelum salinan, "
                    "tetapi evidence menyebut tujuan tetap; tulis basis + slot"]
        return []
    return []


def tiles4bpp_evidence_problems(asset, repo=None):
    """Evidence tiles4bpp harus mengutip baris salinan/loader simbol itu.

    Setiap `<berkas>.s:<baris>` dicek langsung: baris yang dikutip wajib `bl`
    ke salinan/loader yang dikenal, dan literal `@ =gUnk_...` terdekat dalam
    jendela sebelumnya wajib simbol aset ini. Bila teks setelah kutipan
    menyebut panjang `<angka> B`, angka itu harus sama dengan register panjang
    yang dilacak dari instruksi sebelumnya (r3 untuk `func_08008F0C`, r2 untuk
    `func_08008E64`/`memcpy`). Jadi kutipan tidak bisa menempel pada baris yang
    kebetulan berdekatan, memakai simbol lain, atau mengklaim panjang lain.
    """
    if asset.get('kind') != 'tiles4bpp':
        return []
    evidence = asset.get('evidence') or ''
    if not evidence:
        return []
    root = Path(repo) if repo is not None else REPO
    symbol = asset.get('symbol')
    for match in EVIDENCE_CITE.finditer(evidence):
        path = root / 'asm' / Path(match.group(1)).name
        if not path.exists():
            return [f"evidence mengutip {match.group(1)} yang tidak ada"]
        lines = path.read_text().splitlines()
        index = int(match.group(2)) - 1
        where = f"{match.group(1)}:{match.group(2)}"
        if not 0 <= index < len(lines):
            return [f"evidence mengutip {where} di luar berkas"]
        call = TILE_LOAD_CALL.search(lines[index])
        if not call:
            return [f"{where} bukan baris salinan/loader tile "
                    f"(harus bl ke Unpack/func_08008E64/func_08008EB8/"
                    f"func_08008F0C/func_0805E6CC/memcpy)"]
        loaded = None
        for line in reversed(lines[max(0, index - TILE_SYMBOL_WINDOW):index + 1]):
            hit = SYMBOL_LOAD.search(line)
            if hit:
                loaded = hit.group(1)
                break
        if loaded != symbol:
            return [f"{call.group(1)} di {where} memuat "
                    f"{loaded or 'tanpa simbol'}, bukan {symbol}"]
        tool = call.group(1)
        later = evidence[match.end():]
        following = EVIDENCE_CITE.search(later)
        claim_text = later[:following.start()] if following else later
        claim = LENGTH_CLAIM.search(claim_text)
        if not claim:
            continue
        reg = COPY_LEN_REG.get(tool)
        if reg is None:
            return [f"evidence mengklaim panjang {claim.group(1)} B di {where}, "
                    f"tetapi {tool} tidak punya register panjang yang terlacak"]
        length = _trace_constant(
            lines[max(0, index - TILE_SYMBOL_WINDOW):index], reg)
        claimed = int(claim.group(1), 0)
        if length is None:
            return [f"panjang {claim.group(1)} B diklaim di {where}, tetapi "
                    f"{reg} untuk {tool} tidak terlacak"]
        if claimed != length:
            return [f"evidence mengklaim {claim.group(1)} B di {where}, "
                    f"padahal {tool} menyalin 0x{length:X} B"]
    return []


def check_asset(asset, rom, incbins, repo=None, force_encode=False):
    """-> (masalah: list[str], catatan: list[str])."""
    problems, notes = [], []
    symbol = asset.get("symbol", "?")
    offset = int(str(asset["rom"]["offset"]), 0)
    size = int(asset["rom"]["size"])
    declared = asset["rom"]["sha256"]

    slice_ = rom[offset:offset + size]
    if len(slice_) != size:
        problems.append(f"slice ROM {len(slice_)} B, manifest bilang {size} B "
                        f"(offset 0x{offset:X})")
    elif sha256(slice_) != declared:
        problems.append(f"sha256 slice ROM {sha256(slice_)[:12]}… != "
                        f"manifest {declared[:12]}…")

    source = asset["source"]
    meta_path = REPO / source["json"]
    if not meta_path.exists():
        problems.append(f"source.json tidak ada: {source['json']}")
    for key in ("png", "pal"):
        if source.get(key):
            path = REPO / source[key]
            if not path.exists():
                problems.append(f"source.{key} tidak ada: {source[key]}")

    tool = asset["encoder"]["tool"]
    if not (TOOLS / tool).exists():
        problems.append(f"encoder tidak ada: tools/assets/{tool}")
    elif meta_path.exists() and asset["status"] == "rom-exact":
        encoded = None
        if force_encode or not asset_manifest.built_bin_matches(
                meta_path, asset, slice_):
            try:
                encoded = load_module(tool).encode_source(meta_path)
            except SystemExit as e:
                problems.append(f"encoder gagal: {e}")
            except Exception as e:  # noqa: BLE001 - laporkan semua kegagalan
                problems.append(f"encoder error: {type(e).__name__}: {e}")
        if encoded is not None:
            if len(encoded) != size:
                problems.append(f"hasil encoder {len(encoded)} B != {size} B")
            if sha256(encoded) != declared:
                problems.append(f"sha256 encoder {sha256(encoded)[:12]}… != "
                                f"manifest {declared[:12]}…")
            if len(slice_) == size and encoded != slice_:
                problems.append("byte encoder != byte ROM walau hash sama")

    problems += palette_evidence_problems(asset, repo)
    problems += tiles4bpp_evidence_problems(asset, repo)

    hit = incbins.get(offset)
    if hit and asset["status"] == "rom-exact":
        where = ", ".join(f"{f}:{n}" for f, n, _sz in hit)
        notes.append(f"masih .incbin baserom ({where}) — penggantian di Fase 1")
    return problems, notes


def padding_problems(asset, rom):
    """Setiap raw/tail wajib punya range padding dengan kind + alasan + bukti."""
    problems = []
    source = asset.get("source", {}).get("json")
    meta = {}
    if source and (REPO / source).exists():
        try:
            meta = json.loads((REPO / source).read_text())
        except (OSError, ValueError) as exc:
            return [f"metadata {source}: {exc}"]
    if asset.get("opaque") or meta.get("opaque"):
        problems.append("field 'opaque' tidak boleh ada; ubah ke 'padding'")
    ranges = asset.get("padding") or meta.get("padding") or []
    raw = meta.get("raw") or []
    tail = len(meta.get("source", {}).get("tail_hex", "")) // 2
    if (raw or tail) and not ranges:
        problems.append("raw/tail tanpa padding: tambahkan kind+reason+evidence")
    spans = []
    for i, item in enumerate(ranges):
        if not isinstance(item, dict):
            problems.append(f"padding[{i}] bukan objek")
            continue
        for key in ("offset", "size", "kind", "reason", "evidence"):
            if not item.get(key):
                problems.append(f"padding[{i}] wajib {key}")
        off, size = item.get("offset"), item.get("size")
        if not isinstance(off, int) or not isinstance(size, int) or size < 1:
            problems.append(f"padding[{i}] offset/size tidak valid")
            continue
        if off < 0 or off + size > len(rom):
            problems.append(f"padding[{i}] {off:#x}..{off+size:#x} di luar ROM")
        spans.append((off, off + size, i))
    spans.sort()
    for (a0, a1, ai), (b0, b1, bi) in zip(spans, spans[1:]):
        if b0 < a1:
            problems.append(f"padding[{ai}] dan padding[{bi}] tumpang tindih")
    for j, item in enumerate(raw):
        off = int(str(item.get("offset", 0)), 0)
        size = len(item.get("hex", "")) // 2
        if size and not any(a <= off and off + size <= b for a, b, _ in spans):
            problems.append(f"raw[{j}] {off:#x}..{off+size:#x} tidak punya padding")
    payload = []
    for i, seg in enumerate(meta.get("payload_segments", [])):
        if not isinstance(seg, dict):
            problems.append(f"payload[{i}] bukan objek")
            continue
        for key in ("offset", "size", "hex", "pointer_sources"):
            if not seg.get(key):
                problems.append(f"payload[{i}] wajib {key}")
        off, size = seg.get("offset"), seg.get("size")
        if not isinstance(off, int) or not isinstance(size, int) or size < 1:
            problems.append(f"payload[{i}] offset/size tidak valid")
            continue
        if len(seg.get("hex", "")) // 2 != size:
            problems.append(f"payload[{i}] hex != size")
        if off < 0 or off + size > len(rom):
            problems.append(f"payload[{i}] {off:#x}..{off+size:#x} di luar ROM")
        payload.append((off, off + size, i))
    payload.sort()
    for (a0, a1, ai), (b0, b1, bi) in zip(payload, payload[1:]):
        if b0 < a1:
            problems.append(f"payload[{ai}] dan payload[{bi}] tumpang tindih")
    for a, b, i in payload:
        if any(x < b and a < y for x, y, _ in spans):
            problems.append(f"payload[{i}] tumpang tindih dengan padding")
    if meta.get("kind") == "tilemap_bank":
        named = [(a, b) for a, b, _ in payload]
        for layer in meta.get("layers", []):
            start = int(str(layer["offset"]), 0)
            named.append((start, start + layer["width"] * layer["height"] * 2))
        for anim in meta.get("tile_animations", []):
            start = int(str(anim["offset"]), 0)
            named.append((start, start + 4 + len(anim.get("tiles_hex", "")) // 2))
        for a, b, i in spans:
            if any(x < b and a < y for x, y in named):
                problems.append(f"padding[{i}] tumpang tindih dengan layer/animasi/payload")
    return problems


def verify(manifest_path=MANIFEST, schema_path=SCHEMA, rom_path=ROM,
           symbol=None, require_switched=False, force_encode=False):
    """-> (masalah, catatan, ringkasan). Tidak mencetak apa pun."""
    if not manifest_path.exists():
        return [f"{manifest_path}: manifest tidak ada"], [], {}
    if not schema_path.exists():
        return [f"{schema_path}: schema tidak ada"], [], {}
    manifest = json.loads(Path(manifest_path).read_text())
    schema = json.loads(Path(schema_path).read_text())
    problems = [f"schema: {e}" for e in validate(manifest, schema)]
    assets = manifest.get("assets", [])
    if symbol:
        assets = [a for a in assets if a.get("symbol") == symbol]
        if not assets:
            problems.append(f"symbol {symbol} tidak ada di manifest")
    rom_path = Path(rom_path)
    if not rom_path.exists():
        problems.append(f"{rom_path}: ROM referensi tidak ada")
        return problems, [], {}
    rom = rom_path.read_bytes()
    incbins = incbin_offsets()

    seen_symbol, seen_offset = {}, {}
    notes = []
    rows = []
    for asset in assets:
        if not isinstance(asset, dict):
            continue
        key = asset.get("symbol")
        if key in seen_symbol:
            problems.append(f"{key}: symbol duplikat di manifest")
        seen_symbol[key] = True
        off = asset.get("rom", {}).get("offset")
        if off in seen_offset:
            problems.append(f"{key}: offset {off} juga dipakai "
                            f"{seen_offset[off]}")
        seen_offset[off] = key
        found, asset_notes = check_asset(asset, rom, incbins,
                                         force_encode=force_encode)
        found += padding_problems(asset, rom)
        if require_switched:
            found += [n for n in asset_notes if n.startswith("masih .incbin")]
        problems += [f"{key}: {p}" for p in found]
        notes += [f"{key}: {n}" for n in asset_notes]
        rows.append({"symbol": key, "status": asset.get("status"),
                     "ok": not found, "problems": found,
                     "notes": asset_notes})
    summary = {"assets": len(assets),
               "ok": sum(1 for r in rows if r["ok"]), "rows": rows}
    return problems, notes, summary


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--symbol", help="hanya satu simbol")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--manifest", type=Path, default=MANIFEST)
    ap.add_argument("--schema", type=Path, default=SCHEMA)
    ap.add_argument("--rom", type=Path, default=ROM)
    ap.add_argument("--require-switched", action="store_true",
                    help=".incbin baserom untuk aset rom-exact = kegagalan")
    ap.add_argument("--force-encode", action="store_true",
                    help="abaikan bin build dan jalankan ulang semua encoder")
    args = ap.parse_args(argv)
    problems, notes, summary = verify(args.manifest, args.schema, args.rom,
                                      args.symbol, args.require_switched,
                                      args.force_encode)
    if args.json:
        print(json.dumps({"problems": problems, "notes": notes,
                          "summary": summary}, indent=1))
    else:
        for row in summary.get("rows", []):
            mark = "OK" if row["ok"] else "GAGAL"
            print(f"{row['symbol']}: {mark} {row['status']}")
        for note in notes:
            print(f"  catatan: {note}")
        for problem in problems:
            print(f"MASALAH {problem}", file=sys.stderr)
        total = summary.get("assets", 0)
        ok = summary.get("ok", 0)
        print(f"aset terverifikasi: {ok}/{total} cocok")
    return 1 if problems else 0


if __name__ == "__main__":
    raise SystemExit(main())
