#!/usr/bin/env python3
"""readme_stats.py — isi bagian statistik `README.md` dari state & manifest.

Blok di antara penanda

    <!-- README-STATS:BEGIN -->
    ...
    <!-- README-STATS:END -->

selalu ditulis ulang dari data, jadi persentase di README tidak bisa basi tanpa
ketahuan. Sumbernya sama dengan perintah yang dicantumkan README:

- fungsi/byte  : `decomp/state/modules/*.json` + marker `DECOMP-MATCHED` di
                 `src/` (lewat `tools/scripts/plan_stats.py`);
- aset         : `assets/manifest.json` (aset source rom-exact) dan
                 `assets/raw/manifest.json` (populasi blob per kelas).

Tidak menjalankan build dan tidak menyentuh ROM.

  python3 tools/scripts/readme_stats.py            # tulis blok README
  python3 tools/scripts/readme_stats.py --check     # exit 1 bila blok basi
  python3 tools/scripts/readme_stats.py --stdout    # cetak blok saja
"""
import argparse
import importlib.util
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = Path(__file__).resolve().parent
README = REPO / "README.md"
PLAN_STATS = TOOLS / "plan_stats.py"
ASSET_MANIFEST = REPO / "assets" / "manifest.json"
RAW_MANIFEST = REPO / "assets" / "raw" / "manifest.json"

BEGIN = "<!-- README-STATS:BEGIN -->"
END = "<!-- README-STATS:END -->"
BAR_WIDTH = 20
# Label tampilan per `kind` metadata aset.
KIND_LABEL = {
    "sprite": "Sprite/OBJ",
    "palette": "Palet",
    "tiles4bpp": "Tiles 4bpp",
    "tilemap": "Tilemap",
    "font_container": "Container font",
}
KIND_ORDER = ["sprite", "palette", "tiles4bpp", "tilemap", "font_container"]


def _module(path, name):
    spec = importlib.util.spec_from_file_location(name, path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def func_totals():
    """-> dict total/matched/src/promo/failed + byte, dari plan_stats."""
    rows = _module(PLAN_STATS, "plan_stats").module_rows()
    total = lambda key: sum(r.get(key, 0) for r in rows)
    return {
        "modules": len(rows),
        "total": total("total"),
        "matched": total("matched"),
        "src": total("src"),
        "promo": total("promo"),
        "failed": total("failed"),
        "bytes_total": total("bytes_failed") + total("bytes_matched"),
        "bytes_matched": total("bytes_matched"),
        "bytes_src": total("bytes_src"),
    }


def _raw_blobs():
    """-> {symbol: group} untuk blob `.incbin` yang terinventaris."""
    raw = json.loads(RAW_MANIFEST.read_text())["blobs"]
    return {b["symbol"]: b.get("group") for b in raw}


def asset_totals():
    """Cakupan aset source terhadap populasi blob inventaris.

    Pembilang = aset `rom-exact` per kelas (kind). Penyebut = jumlah blob
    `.incbin` yang terinventaris di grup kelas itu, dipetakan lewat `group`
    milik simbol aset di `assets/raw/manifest.json`. Jadi angkanya mengukur
    seberapa banyak populasi nyata yang sudah punya source, bukan perbandingan
    himpunan dengan dirinya sendiri.

    Konsekuensi yang disengaja: beberapa kelas bisa berbagi grup (mis. sprite,
    tiles 4bpp font, dan container font semuanya terinventaris sebagai
    `sprite/OBJ`), sehingga baris per kelas memakai penyebut grup yang sama.
    Baris total memakai **union simbol** supaya tidak menghitung ganda.
    """
    assets = json.loads(ASSET_MANIFEST.read_text())["assets"]
    blobs = _raw_blobs()
    group_size = {}
    for group in blobs.values():
        group_size[group] = group_size.get(group, 0) + 1
    kind_done, kind_groups, unknown = {}, {}, []
    for asset in assets:
        if asset.get("status") != "rom-exact":
            continue
        kind = asset["kind"]
        kind_done[kind] = kind_done.get(kind, 0) + 1
        group = blobs.get(asset["symbol"])
        if group is None:
            unknown.append(asset["symbol"])
            continue
        kind_groups.setdefault(kind, set()).add(group)
    symbols_in = lambda groups: {s for s, g in blobs.items() if g in groups}
    rows = []
    order = lambda k: (KIND_ORDER.index(k) if k in KIND_ORDER
                       else len(KIND_ORDER), k)
    for kind in sorted(kind_done, key=order):
        groups = kind_groups.get(kind, set())
        rows.append({"kind": kind, "done": kind_done[kind],
                     "denominator": len(symbols_in(groups)),
                     "groups": sorted(groups)})
    mapped = [r for r in rows if r["denominator"]]
    all_groups = {g for r in mapped for g in r["groups"]}
    return {
        "rows": rows,
        "total_done": sum(r["done"] for r in mapped),
        "total_denominator": len(symbols_in(all_groups)),
        "unknown": unknown,
        "sprite_done": kind_done.get("sprite", 0),
        "sprite_total": group_size.get("sprite/OBJ", 0),
    }


def pct(part, whole):
    return (100.0 * part / whole) if whole else 0.0


def num(n):
    """1234567 -> '1.234.567' (pemisah ribuan gaya Indonesia)."""
    return f"{n:,}".replace(",", ".")


def dec(value, digits=1):
    """51.3 -> '51,3' (koma desimal, tanpa nol sia-sia di belakang)."""
    text = f"{value:.{digits}f}".rstrip("0").rstrip(".")
    return (text or "0").replace(".", ",")


def bar(percent):
    filled = int(round(percent / 100.0 * BAR_WIDTH))
    filled = max(0, min(BAR_WIDTH, filled))
    return "█" * filled + "░" * (BAR_WIDTH - filled)


def render(totals=None, assets=None):
    """Blok statistik lengkap (tanpa penanda)."""
    t = totals or func_totals()
    a = assets or asset_totals()
    total = t["total"] or 1

    rows = [
        ("**MATCH** (byte-identik dengan ROM)", t["matched"]),
        ("**Dipindah ke `src/`** (bukti migrasi)", t["src"]),
        ("Promote-only (MATCH, tertahan rantai ekor)", t["promo"]),
        ("Sisa (belum MATCH)", t["failed"]),
    ]
    lines = [
        "### Translasi asm -> C",
        "",
        "| Tahap | Selesai | Total | Progres |",
        "|---|---:|---:|---|",
    ]
    for label, value in rows:
        p = pct(value, total)
        lines.append(f"| {label} | {num(value)} | {num(t['total'])} | "
                     f"`{bar(p)}` {dec(p)}% |")
    lines += [
        "",
        f"Byte ROM yang sudah dihasilkan dari C: **{num(t['bytes_src'])} / "
        f"{num(t['bytes_total'])} B ({dec(pct(t['bytes_src'], t['bytes_total']))}%)** "
        f"— persentase fungsi lebih tinggi karena fungsi yang sudah selesai "
        f"kebanyakan kecil.",
        "",
        "### Translasi aset ROM -> source",
        "",
        "| Kelas | Rom-exact | Populasi blob | Cakupan |",
        "|---|---:|---:|---|",
    ]
    for row in a["rows"]:
        p = pct(row["done"], row["denominator"])
        den = num(row["denominator"]) if row["denominator"] else "tak terinventaris"
        lines.append(f"| {KIND_LABEL.get(row['kind'], row['kind'])} | "
                     f"{num(row['done'])} | {den} | "
                     f"`{bar(p)}` {dec(p)}% |")
    tp = pct(a["total_done"], a["total_denominator"])
    lines.append(f"| **Total (blob unik)** | {num(a['total_done'])} | "
                 f"{num(a['total_denominator'])} | `{bar(tp)}` {dec(tp)}% |")
    if a["unknown"]:
        lines.append("")
        lines.append("Aset rom-exact tanpa blob inventaris (tak dihitung di "
                     "penyebut): " + ", ".join(f"`{s}`" for s in a["unknown"]) + ".")
    lines.append("")
    return "\n".join(lines)


def split_block(text):
    """-> (sebelum+penanda begin, isi lama, penanda end+sisa)."""
    if BEGIN not in text or END not in text:
        raise SystemExit(f"README.md tidak memuat penanda {BEGIN} / {END}")
    head, rest = text.split(BEGIN, 1)
    body, tail = rest.split(END, 1)
    return head + BEGIN, body, END + tail


def updated_readme(text, block=None):
    head, _old, tail = split_block(text)
    block = render() if block is None else block
    return f"{head}\n{block.rstrip()}\n{tail}"


def is_stale(text, block=None):
    _head, old, _tail = split_block(text)
    block = render() if block is None else block
    return old.strip() != block.strip()


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    group = ap.add_mutually_exclusive_group()
    group.add_argument("--check", action="store_true",
                       help="exit 1 bila blok README basi")
    group.add_argument("--stdout", action="store_true",
                       help="cetak blok hasil generate, jangan tulis README")
    args = ap.parse_args(argv)

    if args.stdout:
        print(render())
        return 0
    text = README.read_text()
    if args.check:
        if is_stale(text):
            print("BASI: bagian statistik README.md — jalankan "
                  "python3 tools/scripts/readme_stats.py", file=sys.stderr)
            return 1
        return 0
    README.write_text(updated_readme(text))
    totals, assets = func_totals(), asset_totals()
    print(f"README.md: statistik diperbarui "
          f"({num(totals['matched'])}/{num(totals['total'])} MATCH, "
          f"sprite {assets['sprite_done']}/{assets['sprite_total']})")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
