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
# Kelas bukan-sprite yang jalurnya sudah terbukti end-to-end.
NON_SPRITE_KINDS = ("palette", "tiles4bpp", "font_container")


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


def asset_totals():
    """-> dict aset source rom-exact per kelas + populasi blob sprite/OBJ."""
    assets = json.loads(ASSET_MANIFEST.read_text())["assets"]
    by_kind = {}
    for asset in assets:
        if asset.get("status") != "rom-exact":
            continue
        by_kind[asset["kind"]] = by_kind.get(asset["kind"], 0) + 1
    raw = json.loads(RAW_MANIFEST.read_text())["blobs"]
    sprite_blobs = [b for b in raw if b.get("group") == "sprite/OBJ"]
    return {
        "kinds": by_kind,
        "sprite_done": by_kind.get("sprite", 0),
        "sprite_total": len(sprite_blobs),
        "sprite_renderable": sum(1 for b in sprite_blobs if b.get("renderable")),
        "nonsprite_done": sum(by_kind.get(k, 0) for k in NON_SPRITE_KINDS),
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
        "| Kelas | Rom-exact | Populasi | Progres |",
        "|---|---:|---:|---|",
    ]
    sp = pct(a["sprite_done"], a["sprite_total"])
    lines.append(f"| Sprite/OBJ (PNG + `.pal` + JSON) | {num(a['sprite_done'])} | "
                 f"{num(a['sprite_total'])} blob | `{bar(sp)}` {dec(sp)}% |")
    proven = len([k for k in NON_SPRITE_KINDS if a["kinds"].get(k)])
    cls = pct(proven, len(NON_SPRITE_KINDS))
    lines.append(f"| Palet, tiles 4bpp, container font | "
                 f"{num(a['nonsprite_done'])} | {num(proven)} pipeline terbukti | "
                 f"`{bar(cls)}` {dec(cls)}% |")
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
