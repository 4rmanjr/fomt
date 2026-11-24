#!/usr/bin/env python3
"""font_palettes.py — telusuri palet font/objek dari call site, tanpa klaim.

Untuk `gUnk_0875A440` dan 12 wadah font/objek, tool ini mengumpulkan:

- **call site**: setiap fungsi asm yang memuat simbol itu (`ldr rX, =simbol`);
- **bukti palet**: fungsi call site yang sekaligus memuat simbol palet
  (kelompok `palet` di `assets/raw/manifest.json`) *dan* menulis palet RAM
  (`0x05000xxx`). Hanya kombinasi itu yang boleh berstatus `terbukti`;
- **petunjuk posisi**: blob tepat sebelum simbol di `data_0813B288.s` yang
  isinya palet. Ini **bukan** bukti pasangan — hanya kandidat untuk diperiksa
  (dicatat beserta pemuatnya, kalau ada).

Hasilnya `assets/gfx/fonts/palettes.json` + dokumen generate
`docs/decomp/PALET-FONT.md`. `--check` exit 1 bila salah satunya basi.

Alasan struktural yang ikut dicatat: vtable wadah (`0x080E79C8`, 5 entri)
hanya mengembalikan pointer glyph/tile (func_0805E760, func_0805E790) dan
destruktor (func_080E1984); tidak ada metode palet. Tile 4bpp tidak membawa
palet, jadi palet ditentukan palet RAM saat gambar, bukan isi wadah.

  python3 tools/assets/font_palettes.py
  python3 tools/assets/font_palettes.py --check
"""
import argparse
import glob
import json
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
RAW = REPO / "assets" / "raw" / "manifest.json"
O70 = REPO / "assets" / "0x70" / "manifest.json"
DATA_ASM = REPO / "asm" / "data" / "data_0813B288.s"
OUT = REPO / "assets" / "gfx" / "fonts" / "palettes.json"
DOC = REPO / "docs" / "decomp" / "PALET-FONT.md"

# 12 wadah font/objek + font jam (tile datar). Urutan = urutan di data asm.
FONT_SYMBOLS = (
    "gUnk_084F90CC", "gUnk_084FA9A0", "gUnk_0852D984", "gUnk_0858BA28",
    "gUnk_086F2FAC", "gUnk_0871D51C", "gUnk_08728320", "gUnk_08729460",
    "gUnk_0872DE44", "gUnk_08731B40", "gUnk_087409E4", "gUnk_0874F34C",
    "gUnk_0875A440",
)
PALETTE_RAM = re.compile(r"0x0?5[0-9A-Fa-f]{6}")
RE_FUNC = re.compile(r"\s*thumb_func_start\s+(\w+)")


def sha_assets():
    return {b["symbol"]: b for b in json.loads(RAW.read_text())["blobs"]}


def streams_0x70():
    return {b["blob"]: b for b in json.loads(O70.read_text())["streams"]}


def asm_functions():
    """-> [(file_rel, line_no, func, body)] untuk semua asm/*.s."""
    out = []
    for path in sorted(glob.glob(str(REPO / "asm" / "*.s"))):
        lines = Path(path).read_text(errors="replace").splitlines()
        starts = [i for i, ln in enumerate(lines) if RE_FUNC.match(ln)]
        starts.append(len(lines))
        for a, b in zip(starts, starts[1:]):
            name = RE_FUNC.match(lines[a]).group(1)
            out.append((Path(path).relative_to(REPO).as_posix(), a + 1, name,
                        "\n".join(lines[a:b])))
    return out


def data_order():
    order = []
    for ln in DATA_ASM.read_text().splitlines():
        m = re.match(r"\s*\.global\s+(\w+)", ln)
        if m:
            order.append(m.group(1))
    return order


def symbol_refs(body, symbol):
    return re.search(r"=\s*" + re.escape(symbol) + r"\b", body) is not None


def analyse():
    raw = sha_assets()
    streams = streams_0x70()
    palette_symbols = {s for s, b in raw.items() if b["group"] == "palet"}
    funcs = asm_functions()
    order = data_order()
    entries = []
    for symbol in FONT_SYMBOLS:
        sites, proven = [], []
        for rel, line, fn, body in funcs:
            if not symbol_refs(body, symbol):
                continue
            sites.append({"file": rel, "line": line, "function": fn})
            found = sorted(s for s in palette_symbols if symbol_refs(body, s))
            if found and PALETTE_RAM.search(body):
                proven.append({"function": fn, "file": rel,
                               "palette_symbols": found,
                               "rom": f"{rel}:{line}"})
        # Petunjuk posisi: blob tepat sebelumnya yang isinya palet.
        candidates = []
        if symbol in order:
            i = order.index(symbol)
            if i > 0:
                prev = order[i - 1]
                why = None
                blob = raw.get(prev)
                if blob and blob["group"] == "palet":
                    why = (f"blob sebelumnya {blob['offset']} ({blob['size']} B), "
                           "klasifikasi isi: palet")
                stream = streams.get(prev)
                if not why and stream:
                    s0 = stream["streams"][0]
                    if s0.get("group") == "palet":
                        where = (f"{blob['offset']} ({blob['size']} B)" if blob
                                 else "berformat 0x70")
                        why = (f"blob sebelumnya {where}, "
                               f"stream 0: palet {s0['unpacked']} B")
                if why:
                    loaders = [{"file": rel, "line": line, "function": fn}
                               for rel, line, fn, body in funcs
                               if symbol_refs(body, prev)]
                    candidates.append({"symbol": prev, "reason": why,
                                       "loaders": loaders})
        entries.append({
            "symbol": symbol,
            "container": symbol != "gUnk_0875A440",
            "call_sites": sites,
            "palette_status": "terbukti" if proven else "belum terbukti",
            "proof": proven,
            "positional_candidates": candidates,
        })
    return {"symbols": entries}


def render_doc(manifest):
    entries = manifest["symbols"]
    unproven = sum(1 for e in entries
                   if e["palette_status"] != "terbukti")
    out = ["# Palet font/objek: status bukti", "",
           "**Dihasilkan otomatis**, jangan disunting tangan: "
           "`python3 tools/assets/font_palettes.py`. Sumbernya "
           "`assets/gfx/fonts/palettes.json`.", "",
           "## Metode", "",
           "Status `terbukti` hanya diberikan bila **satu fungsi** yang memuat "
           "simbol font juga memuat simbol palet (kelompok `palet` di "
           "`assets/raw/manifest.json`) **dan** menulis palet RAM "
           "(`0x05000xxx`). Selain itu statusnya `belum terbukti`, berapa pun "
           "miripnya render atau dekatnya letak di ROM.", "",
           "Dua alasan struktural yang membuat pasangan tidak otomatis ada:",
           "",
           "- vtable wadah font (`0x080E79C8`, 5 entri) hanya berisi "
           "`0x00000000`, `0x00000000`, destruktor `func_080E1984`, "
           "`func_0805E760` (pointer glyph), `func_0805E790` (record glyph). "
           "Tidak ada metode palet; tile 4bpp juga tidak membawa palet.",
           "- palet ditentukan isi palet RAM (BG `0x05000000`, OBJ "
           "`0x05000200`) saat gambar; yang perlu dibuktikan adalah loader "
           "yang mengisi palet itu untuk font tersebut, bukan isi wadah.",
           "",
           "## Ringkasan", "",
           f"- simbol diperiksa: **{len(entries)}**",
           f"- berstatus `terbukti`: **{len(entries) - unproven}**",
           f"- berstatus `belum terbukti`: **{unproven}**", "",
           "| simbol | jenis | call site | status palet |",
           "|---|---|---:|---|"]
    for e in entries:
        kind = "wadah font/objek" if e["container"] else "tile datar (font jam)"
        out.append(f"| `{e['symbol']}` | {kind} | {len(e['call_sites'])} | "
                   f"**{e['palette_status']}** |")
    out += ["", "## Call site per simbol", ""]
    for e in entries:
        out.append(f"### `{e['symbol']}` ({e['palette_status']})")
        out.append("")
        if not e["call_sites"]:
            out.append("- tidak ada referensi kode")
        for s in e["call_sites"]:
            out.append(f"- `{s['function']}` — {s['file']}:{s['line']}")
        if e["proof"]:
            out.append("")
            out.append("Bukti palet:")
            for p in e["proof"]:
                out.append(f"- `{p['function']}` memuat "
                           f"{', '.join(f'`{x}`' for x in p['palette_symbols'])} "
                           f"dan menulis palet RAM ({p['rom']})")
        out.append("")
    out += ["## Petunjuk posisi (bukan bukti)", "",
            "Blob tepat sebelum simbol di `data_0813B288.s` yang isinya palet. "
            "Letak berdekatan hanya kandidat: tidak ada call site yang "
            "memuat palet itu bersama fontnya, jadi pasangan ini **tidak** "
            "dinaikkan menjadi `terbukti`.", ""]
    any_cand = False
    for e in entries:
        for c in e["positional_candidates"]:
            any_cand = True
            loaders = (", ".join(f"`{l['function']}` ({l['file']}:{l['line']})"
                                 for l in c["loaders"]) or "tidak ada")
            out.append(f"- `{e['symbol']}` ← kandidat `{c['symbol']}`: "
                       f"{c['reason']}; pemuat: {loaders}")
    if not any_cand:
        out.append("- tidak ada kandidat berdekatan")
    out.append("")
    return "\n".join(out) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila manifest/dokumen basi")
    args = ap.parse_args(argv)
    manifest = analyse()
    text = json.dumps(manifest, indent=1) + "\n"
    doc = render_doc(manifest)
    if args.check:
        bad = []
        if not OUT.exists() or OUT.read_text() != text:
            bad.append(str(OUT.relative_to(REPO)))
        if not DOC.exists() or DOC.read_text() != doc:
            bad.append(str(DOC.relative_to(REPO)))
        for path in bad:
            print(f"BASI: {path} — jalankan "
                  "python3 tools/assets/font_palettes.py", file=sys.stderr)
        return 1 if bad else 0
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(text)
    DOC.parent.mkdir(parents=True, exist_ok=True)
    DOC.write_text(doc)
    counts = {}
    for e in manifest["symbols"]:
        counts[e["palette_status"]] = counts.get(e["palette_status"], 0) + 1
    print(f"{OUT.relative_to(REPO)}: {len(manifest['symbols'])} simbol "
          f"({counts})")
    print(f"dokumen: {DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
