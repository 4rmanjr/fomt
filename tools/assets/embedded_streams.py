#!/usr/bin/env python3
"""embedded_streams.py — bank stream `0x70` tertanam -> `extern/` + manifest.

Tiga blob mentah di `data_0813B288.s` bukan blob berformat `0x70`, tetapi
isinya bank stream `0x70` tertanam. Buktinya penunjuk di kode/tabel plus
rantai stream yang berakhir **tepat** di ujung blob:

| simbol | offset ROM | ukuran | prefix | stream |
|---|---|---:|---:|---:|
| `gUnk_0869B284` | `0x69B284` | 238212 | 308 B | 119 |
| `gUnk_086D74F8` | `0x6D74F8` | 20172 | 96 B | 25 |
| `gUnk_086DC3F4` | `0x6DC3F4` | 344 | 12 B | 3 |

Dua yang pertama ditunjuk `func_080A95A4` sebagai satu bank. Yang ketiga tidak:
12 B pertamanya stempel 3x2 yang disalin `func_080AA540` (`memcpy` 12 B per
stempel), sedangkan 332 B sisanya adalah tiga stream yang ditunjuk satu per
satu oleh tabel descriptor `0x08106860` (`0x086DC400`, `0x086DC4C4`,
`0x086DC4D0`, dengan `0x001A001E` = 30x26 entri u16 = 1560 B decoded per
stream, sama dengan ukuran hasil decode). Simbol asm 0x158 B karena itu memuat
stempel + bank sekaligus; offset bank dihitung dari rantai, bukan daftar tangan.

Offset awal bank **dihitung**: offset pertama (dengan byte `0x70`) yang
rantai decode-nya berakhir tepat di ujung blob. Byte sebelum offset itu
(palet/header) disimpan sebagai `prefix_sha256`, bukan dianggap stream.

Output:

- `assets/0x70/extern/stream_<addr>_<unpacked>_<sha8>.bin` — byte decoded;
  `addr` = alamat GBA stream packed (provenance, bukan alamat hasil decode);
- `assets/0x70/png/extern_<addr>_<unpacked>_<sha8>.png` — render per kelas;
- `assets/0x70/embedded_manifest.json` — hash bin + PNG, kelas, dan geometri;
- `docs/decomp/ASET-0X70-TERTANAM.md` — tabel hasil generate.

  python3 tools/assets/embedded_streams.py           # ekstrak dari ROM
  python3 tools/assets/embedded_streams.py --check   # verifikasi tanpa ROM

`--check` merender ulang setiap PNG dari bin `extern/` lalu membandingkan
hash-nya dengan manifest dan dengan berkas PNG di repo; tidak membaca
`baserom.gba`. Tidak menyentuh `asm/data/*.s`.
"""
import argparse
import hashlib
import json
import struct
import sys
import tempfile
from collections import Counter
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "scripts"
sys.path.insert(0, str(TOOLS))
import asset_inventory as inv  # noqa: E402
import decompress  # noqa: E402
import extract_assets as fx  # noqa: E402

GBA_BASE = 0x08000000
OUT = REPO / "assets" / "0x70"
MANIFEST = OUT / "embedded_manifest.json"
DOC = REPO / "docs" / "decomp" / "ASET-0X70-TERTANAM.md"

# Blob mentah yang isinya bank stream 0x70 tertanam. Setiap entri harus punya
# bukti dari kode/tabel, bukan dari nama atau dari rantai saja:
#   gUnk_0869B284, gUnk_086D74F8 — func_080A95A4 menunjuk simbol sebagai bank;
#   gUnk_086DC3F4 — tabel descriptor 0x08106860 menunjuk tiga stream mulai
#     +0x0C (086DC400/4C4/4D0, 30x26 = 1560 B), prefix 12 B-nya stempel 3x2
#     yang disalin func_080AA540.
# Offset bank tidak ditulis di sini; dihitung dari rantai.
EMBEDDED_BANKS = ("gUnk_0869B284", "gUnk_086D74F8", "gUnk_086DC3F4")


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def discover(rom, offset, size):
    """-> (prefix_len, streams) untuk bank tertanam di satu blob.

    `streams` = [(at, packed, unpacked, format)] dengan `at` relatif blob.
    Offset awal = offset pertama ber-byte 0x70 yang rantainya berakhir tepat
    di ujung blob; ValueError kalau tidak ada (jangan menebak).
    """
    end = offset + size
    for rel in range(size - 4):
        if rom[offset + rel] != 0x70:
            continue
        cur, got = offset + rel, []
        while True:
            d = inv.decode_popuri(rom, cur, end)
            if not d:
                break
            got.append((cur - offset,) + d)
            cur += d[0]
        if got and cur == end:
            return rel, got
    raise ValueError(
        f"blob 0x{offset:X}+0x{size:X}: tidak ada rantai stream 0x70 yang "
        "berakhir tepat di ujung blob")


def build(rom=None, out=OUT):
    """Ekstrak bank -> (manifest, jumlah per kelas)."""
    rom = rom if rom is not None else inv.DEFAULT_ROM.read_bytes()
    _, inventory, _ = inv.analyze()
    entries = {e.name: e for e in inventory}
    extdir = out / "extern"
    pngdir = out / "png"
    extdir.mkdir(parents=True, exist_ok=True)
    pngdir.mkdir(parents=True, exist_ok=True)

    banks, records = [], []
    for name in EMBEDDED_BANKS:
        entry = entries.get(name)
        if entry is None:
            raise SystemExit(f"{name}: simbol tidak ada di inventaris")
        prefix, streams = discover(rom, entry.offset, entry.size)
        for i, (at, packed, unpacked, fmt) in enumerate(streams):
            data, _, _ = decompress.unpack(rom, entry.offset + at)
            if len(data) != unpacked:
                raise SystemExit(
                    f"{name}#{i}: ukuran {len(data)} != {unpacked}")
            nz, hi = fx.stream_stats(data)
            records.append({"bank": name, "index": i, "at": at,
                            "packed": packed, "unpacked": unpacked,
                            "format": fmt, "data": data, "nz": nz, "hi": hi})
        banks.append({"blob": name, "offset": f"0x{entry.offset:06X}",
                      "size": entry.size, "prefix_bytes": prefix,
                      "prefix_sha256": sha256(
                          rom[entry.offset:entry.offset + prefix]),
                      "stream_count": len(streams)})

    labels = fx.decide_labels(records)
    groups = Counter()
    for bank in banks:
        infos = []
        for rec in (r for r in records if r["bank"] == bank["blob"]):
            data = rec["data"]
            group, note = fx.classify(data, labels)
            if group == "layar":
                group, note = "peta", note
            groups[group] += 1
            addr = GBA_BASE + int(bank["offset"], 16) + rec["at"]
            digest = sha256(data)
            base = f"stream_{addr:08X}_{rec['unpacked']}_{digest[:8]}"
            (extdir / f"{base}.bin").write_bytes(data)
            info = {"index": rec["index"], "offset": rec["at"],
                    "address": f"0x{addr:08X}", "packed": rec["packed"],
                    "unpacked": rec["unpacked"], "format": rec["format"],
                    "group": group, "note": note,
                    "bin": f"extern/{base}.bin", "sha256": digest}
            png = None
            if group == "palet":
                png = f"png/extern_{base}_palet.png"
                fx.render_palette(data, out / png)
                info["png_kind"] = "swatch palet"
            elif group == "tile":
                png = f"png/extern_{base}_tile.png"
                fx.render_tiles(data, out / png)
                info["png_kind"] = "lembar tile 4bpp (abu-abu indeks)"
            elif group == "peta":
                entries_n = len(data) // 2
                width = fx.map_width(entries_n)
                height = entries_n // width
                png = f"png/extern_{base}_peta_indeks_{width}.png"
                fx.render_map(data, out / png, width)
                info["png_kind"] = "grid indeks (pasangan tidak terbukti)"
                info["pair_status"] = "unproven"
                info["pair_reason"] = ("stream di dalam bank tertanam; "
                                       "tidak ada bukti pasangan palet/tileset")
                info["map_width"], info["map_height"] = width, height
            if png:
                info["png"] = f"assets/0x70/{png}"
                info["png_sha256"] = sha256((out / png).read_bytes())
            infos.append(info)
        bank["streams"] = infos
    return {"banks": banks}, groups


def render_doc(manifest):
    banks = manifest["banks"]
    total = sum(len(b["streams"]) for b in banks)
    groups = Counter(s["group"] for b in banks for s in b["streams"])
    out = ["# Bank stream `0x70` tertanam", "",
           "**Dihasilkan otomatis**, jangan disunting tangan: "
           "`python3 tools/assets/embedded_streams.py`. Sumbernya manifest "
           "`assets/0x70/embedded_manifest.json`.", "",
           "## Cara memperbarui", "", "```sh",
           "python3 tools/assets/embedded_streams.py          # ekstrak + dokumen ini",
           "python3 tools/assets/embedded_streams.py --check  # verifikasi tanpa ROM",
           "```", "",
           "`--check` merender ulang PNG dari `extern/*.bin` dan membandingkan "
           "hash-nya dengan manifest serta berkas PNG di repo; tidak membaca "
           "`baserom.gba`.", "",
           "## Ringkasan", "",
           f"- bank: **{len(banks)}**",
           f"- stream tertanam: **{total}**", "",
           "| kelas | stream |", "|---|---|"]
    for key in ("palet", "tile", "peta", "layar", "lain"):
        out.append(f"| {key} | {groups[key]} |")
    out += ["", "| simbol | offset | ukuran | prefix | stream |",
            "|---|---|---|---|---|"]
    for b in banks:
        out.append(f"| `{b['blob']}` | `{b['offset']}` | {b['size']} | "
                   f"{b['prefix_bytes']} B | {len(b['streams'])} |")
    out += ["", "Offset awal bank dihitung dari rantai stream yang berakhir "
            "tepat di ujung blob; byte sebelum offset itu adalah prefix "
            "(palet/header/stempel) dan disimpan sebagai `prefix_sha256`.", ""]
    for b in banks:
        out += [f"## `{b['blob']}`", "",
                "| # | offset | alamat | packed | buka | format | kelas | "
                "berkas | PNG |", "|---|---|---|---|---|---|---|---|---|"]
        for s in b["streams"]:
            png = f"[png](../../{s['png']})" if s.get("png") else "-"
            out.append(
                f"| {s['index']} | {s['offset']} | `{s['address']}` | "
                f"{s['packed']} | {s['unpacked']} | `{s['format']}` | "
                f"{s['group']} | [bin](../../assets/0x70/{s['bin']}) | {png} |")
        out.append("")
    return "\n".join(out) + "\n"


STAMP = REPO / "build" / "embedded_check.stamp.json"


def _signature(out, manifest):
    """Sidik jari input render: isi manifest + (bin, ukuran, mtime)."""
    sig = {"manifest": sha256((out / "embedded_manifest.json").read_bytes()),
           "sources": []}
    for bank in manifest.get("banks", []):
        for s in bank["streams"]:
            try:
                st = (out / s["bin"]).stat()
            except OSError:
                sig["sources"].append([s["bin"], -1, -1])
                continue
            sig["sources"].append([s["bin"], st.st_size, st.st_mtime_ns])
    return sig


def _stamp_matches(sig):
    try:
        return json.loads(STAMP.read_text()) == sig
    except (OSError, ValueError):
        return False


def _stamp_write(sig):
    try:
        STAMP.parent.mkdir(parents=True, exist_ok=True)
        STAMP.write_text(json.dumps(sig) + "\n")
    except OSError:
        pass  # gate tetap benar tanpa cache


def problems(out=OUT, quick=False):
    """-> (bad: list[(alamat, sebab)], catatan|None, total).

    Selalu diperiksa: berkas bin ada dan sha256-nya cocok dengan manifest,
    berkas PNG ada dan png_sha256-nya cocok dengan manifest (ini menangkap
    PNG rusak/diedit).

    Render ulang setiap PNG hanya dijalankan bila `quick=False` atau bila
    sidik jari input (manifest + bin `extern/`) berbeda dari render terakhir
    yang lolos (`build/embedded_check.stamp.json`), karena render penuh untuk
    semua stream butuh puluhan detik.

    Hasil render ulang dibandingkan **piksel**-nya dengan berkas PNG di repo
    (bukan hash byte-nya), sehingga beda versi zlib container yang tidak
    mengubah piksel tidak dilaporkan sebagai masalah; perbandingan byte akan
    gagal di lingkungan dengan encoder zlib berbeda.
    """
    path = out / "embedded_manifest.json"
    if not path.exists():
        return [("-", "embedded_manifest.json tidak ada")], None, 0
    manifest = json.loads(path.read_text())
    total = sum(len(b["streams"]) for b in manifest.get("banks", []))
    sig = _signature(out, manifest) if quick else None
    do_render = not quick or not _stamp_matches(sig)
    note = None
    if do_render:
        render_tmp = Path(tempfile.mkdtemp(prefix="fomt-embedded-"))
    else:
        note = ("render ulang PNG tertanam dilewati: input sama dengan render "
                "terakhir yang lolos (`build/embedded_check.stamp.json`); hash "
                "berkas tetap diperiksa")
    bad = []
    fresh = {}
    if do_render:
        for bank in manifest.get("banks", []):
            for s in bank["streams"]:
                bin_path = out / s["bin"]
                if not bin_path.exists():
                    bad.append((s["address"], "bin hilang"))
                    continue
                data = bin_path.read_bytes()
                if len(data) != s["unpacked"]:
                    bad.append((s["address"], "ukuran bin beda"))
                    continue
                if sha256(data) != s["sha256"]:
                    bad.append((s["address"], "sha256 bin beda"))
                    continue
                if not s.get("png"):
                    continue
                fresh_png = render_tmp / f"{s['address']}.png"
                try:
                    if s["group"] == "palet":
                        fx.render_palette(data, fresh_png)
                    elif s["group"] == "tile":
                        fx.render_tiles(data, fresh_png)
                    else:
                        fx.render_map(data, fresh_png, s["map_width"])
                except (OSError, ValueError) as e:
                    bad.append((s["address"], f"render ulang gagal: {e}"))
                    continue
                fresh[s["address"]] = fresh_png
        # Bandingkan piksel sebelum temporary directory dihapus.
        for bank in manifest.get("banks", []):
            for s in bank["streams"]:
                if not s.get("png"):
                    continue
                png_path = Path(s["png"])
                if not png_path.is_absolute():
                    png_path = REPO / png_path
                if not png_path.exists():
                    bad.append((s["address"], "PNG hilang"))
                    continue
                file_hash = sha256(png_path.read_bytes())
                if file_hash != s.get("png_sha256"):
                    bad.append((s["address"], "sha256 PNG di repo beda"))
                    continue
                if s["address"] not in fresh:
                    continue
                try:
                    from PIL import Image
                    a = Image.open(png_path).convert("RGB")
                    b = Image.open(fresh[s["address"]]).convert("RGB")
                except Exception as e:
                    bad.append((s["address"], f"gagal baca PNG untuk perbandingan: {e}"))
                    continue
                if a.size != b.size:
                    bad.append((s["address"], "ukuran render ulang beda"))
                elif list(a.getdata()) != list(b.getdata()):
                    bad.append((s["address"], "piksel render ulang beda"))
        if not bad:
            _stamp_write(sig)
        try:
            import shutil
            shutil.rmtree(render_tmp, ignore_errors=True)
        except Exception:
            pass
    else:
        for bank in manifest.get("banks", []):
            for s in bank["streams"]:
                if not s.get("png"):
                    continue
                png_path = Path(s["png"])
                if not png_path.is_absolute():
                    png_path = REPO / png_path
                if not png_path.exists():
                    bad.append((s["address"], "PNG hilang"))
                    continue
                file_hash = sha256(png_path.read_bytes())
                if file_hash != s.get("png_sha256"):
                    bad.append((s["address"], "sha256 PNG di repo beda"))
                    continue
    return bad, note, total


def check(out=OUT, quick=False):
    """Verifikasi tanpa ROM: bin + PNG dari manifest dan berkas di repo."""
    bad, note, total = problems(out, quick)
    for addr, why in bad:
        print(f"MASALAH {addr}: {why}", file=sys.stderr)
    print(f"stream tertanam: {total - len(bad)}/{total} cocok")
    if note:
        print(note)
    return 1 if bad else 0


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--check", action="store_true",
                    help="verifikasi dari extern/ tanpa membaca ROM")
    ap.add_argument("--quick", action="store_true",
                    help="dengan --check: lewati render ulang bila input sama "
                         "dengan render terakhir yang lolos; hash berkas tetap "
                         "diperiksa")
    args = ap.parse_args(argv)
    if args.check:
        return check(quick=args.quick)
    manifest, groups = build()
    MANIFEST.write_text(json.dumps(manifest, indent=1) + "\n")
    DOC.parent.mkdir(parents=True, exist_ok=True)
    DOC.write_text(render_doc(manifest))
    total = sum(len(b["streams"]) for b in manifest["banks"])
    print(f"output: {MANIFEST.relative_to(REPO)}")
    print(f"  stream tertanam {total}")
    for key in ("palet", "tile", "peta", "layar", "lain"):
        print(f"  {key:6s} {groups[key]:3d}")
    print(f"  dokumen: {DOC.relative_to(REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
