#!/usr/bin/env python3
"""check_docs.py — guard dokumen hidup (ukuran, rujukan, klaim basi).

Masalah yang dicegah: `AGENTS.md` tumbuh tiap sesi sampai aturan penting
terkubur (agent kehilangan konteks di tengah berkas), rujukan antar-dokumen
patah karena bagian dipindah, dan dokumen hidup menyimpan angka progres yang
cepat basi.

Yang diperiksa:

1. **Batas ukuran** `AGENTS.md` (default 130 baris, `--max-agents N`): berkas
   itu hanya boleh memuat aturan invarian + peta rute; detail pindah ke
   `docs/ops/`.
2. **Rujukan berkas**: setiap path repo yang ditulis sebagai link markdown atau
   dalam backtick dengan ekstensi `.md` harus ada.
3. **Rujukan aturan**: `AGENTS.md rule N` / `AGENTS.md R N` harus punya heading
   `## RN.` di AGENTS.md (nomor aturan stabil, jangan direnomori).
4. **Angka basi** di dokumen hidup: pola progres (`berhasil <n> (`, `total <n>
   fungsi`, `src <n>+`) dilarang — tulis perintah pengambil angkanya.

Read-only; exit 1 bila ada masalah (`--json` untuk agent, `--strict` sama
dengan default).

  python3 tools/scripts/check_docs.py [--json] [--max-agents N]
"""
import argparse
import json
import re
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]

LIVING = ["AGENTS.md", "docs/decomp/POLA-DIFF.md", "docs/decomp/MIGRATE.md",
          "docs/ops/COMMANDS.md", "docs/ops/TOOLS.md", "docs/ops/VERIFIKASI.md",
          "skills/gba-decomp/SKILL.md", "skills/gba-decomp/PANDUAN.md",
          "INSTALL.md"]

# angka progres yang tidak boleh dipatok di dokumen hidup
STALE = [re.compile(r"berhasil\s+\d+\s*\("),
         re.compile(r"total\s+\d+\s+fungsi"),
         re.compile(r"src\s+\d+\s*\+")]
LINK = re.compile(r"\[[^\]]*\]\(([^)]+)\)")
MD_TICK = re.compile(r"`([\w./-]+\.md)(?:#[^`]*)?`")


def check(max_agents):
    problems = []
    notes = []

    agents = REPO / "AGENTS.md"
    if not agents.exists():
        return {"problems": [("AGENTS.md", "berkas tidak ada")], "stats": {}}
    text = agents.read_text()
    lines = len(text.splitlines())
    if lines > max_agents:
        problems.append(("AGENTS.md",
                         f"{lines} baris > batas {max_agents}: pindahkan detail "
                         f"ke docs/ops/ (lihat peta rute)"))
    else:
        notes.append(f"AGENTS.md {lines} baris (batas {max_agents})")

    # heading aturan stabil R1..Rn
    rules = set(re.findall(r"^##\s+R(\d+)\.", text, re.M))
    for src in [agents] + [REPO / p for p in LIVING[1:] if (REPO / p).exists()]:
        body = src.read_text()
        for m in re.finditer(r"AGENTS\.md\s+(?:rule|R)\s*(\d+)", body):
            if m.group(1) not in rules:
                problems.append((str(src.relative_to(REPO)),
                                 f"merujuk AGENTS.md rule {m.group(1)} yang "
                                 f"tidak ada (heading `## R{m.group(1)}.`)"))
        for target in LINK.findall(body):
            if target.startswith(("http://", "https://", "#", "mailto:")):
                continue
            p = (src.parent / target.split("#")[0]).resolve()
            if not p.exists() and not target.startswith("../.."):
                problems.append((str(src.relative_to(REPO)),
                                 f"link patah: {target}"))

    for rel in LIVING:
        p = REPO / rel
        if not p.exists():
            problems.append((rel, "dokumen hidup hilang"))
            continue
        for i, line in enumerate(p.read_text().splitlines(), 1):
            for rx in STALE:
                if rx.search(line):
                    problems.append((f"{rel}:{i}",
                                     f"angka progres dipatok: {line.strip()[:70]}"))
            for m in MD_TICK.findall(line):
                if (REPO / m).exists() or (p.parent / m).exists():
                    continue
                # nama pendek di prosa (`MIGRATE.md`) boleh, asal unik di docs/
                if "/" not in m:
                    hits = list(REPO.glob(f"**/{m}"))
                    if len(hits) == 1:
                        continue
                    problems.append((f"{rel}:{i}",
                                     f"rujukan .md ambigu/tidak ada: {m} "
                                     f"({len(hits)} kandidat)"))
                    continue
                problems.append((f"{rel}:{i}", f"rujukan .md tidak ada: {m}"))

    return {"problems": problems, "stats": {"agents_lines": lines,
                                            "rules": sorted(rules, key=int),
                                            "notes": notes}}


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--max-agents", type=int, default=130)
    a = ap.parse_args(argv)
    res = check(a.max_agents)
    if a.json:
        print(json.dumps(res, indent=1))
    else:
        for n in res["stats"].get("notes", []):
            print(f"  {n}")
        for where, why in res["problems"]:
            print(f"  MASALAH {where}: {why}")
        print(f"MASALAH dokumen: {len(res['problems'])}")
    return 1 if res["problems"] else 0


if __name__ == "__main__":
    raise SystemExit(main(__import__("sys").argv[1:]))
