#!/usr/bin/env python3
"""audit_consistency.py — audit konsistensi state ↔ promoted ↔ src.

Read-only (tidak mengubah apa pun kecuali `--fix`). Dipakai untuk audit
menyeluruh / pemeriksaan sebelum sesi:

  python3 tools/scripts/audit_consistency.py [--max N] [--fix] [--json] [--strict]

Cek yang dilakukan:
  1. DUPLIKAT blok `// DECOMP-MATCHED <fn>` di setiap decomp/promoted/*.cc
     (gejala: `fomt --migratable` mem-"MATCH" fungsi yang sudah ada di src).
  2. State `promoted` TAPI bloknya tidak ada di promoted/*.cc dan fungsinya
     tidak ada di src (state basi / blok keburu di-revert).
  3. Blok promoted TAPI fungsinya belum ada di varian src mana pun
     (kandidat migrasi / tertahan SKIP).
  4. Fungsi sudah di src TAPI status state masih failed/drafted
     (state basi; lihat juga decomp/audit_sync.py).
  5. Blok promoted tanpa `}` penutup seimbang (indikasi sisip manual rusak).
  6. Status di luar enum `pending/drafted/failed/promoted/matched`
     (mis. `migrated`: run.py tidak mengenalnya, fungsi hilang dari
     statistik & verify).
  7. `i32` di decomp/drafts atau decomp/promoted (harness judge hanya punya
     s32; `i32` di posisi return = hard error saat verify).
  8. Drift isi blok promoted vs draf (normalisasi komentar/whitespace).
     Ini INFO; dengan `--strict` dihitung sebagai masalah. Drift yang
     pernah nyata: blok diedit manual (tipe balik/arg) tanpa re-judge.
  9. Symlink `.agents/skills/gba-decomp` harus ada, berupa symlink (bukan
     salinan), menunjuk `skills/gba-decomp`, dan targetnya punya SKILL.md.
     Loader skill (Freebuff/Codebuff/Claude) hanya memindai .agents/skills
     dan .claude/skills, jadi tanpa symlink ini skill tidak pernah dimuat.

Exit code: 0 = tidak ada masalah struktural; 1 = duplikat / blok rusak /
state yatim / status liar / i32 / symlink skill rusak (atau drift bila
`--strict`).
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
PROMOTED = REPO / "decomp" / "promoted"
DRAFTS = REPO / "decomp" / "drafts"
SRC = REPO / "src"
MODULES = REPO / "decomp" / "state" / "modules"
SKILL_LINK = REPO / ".agents" / "skills" / "gba-decomp"
SKILL_DIR = REPO / "skills" / "gba-decomp"
MARK = re.compile(r"^// DECOMP-MATCHED (\w+)", re.M)
SRC_SUFFIX = ("", "_c", "_v", "_migrated")
SRC_EXT = ("cc", "c")
ALLOWED_STATUS = ("pending", "drafted", "failed", "promoted", "matched")
I32_RE = re.compile(r"\bi32\b")


def src_text(stem):
    out = {}
    for suf in SRC_SUFFIX:
        for ext in SRC_EXT:
            p = SRC / f"{stem}{suf}.{ext}"
            if p.exists():
                out[p] = p.read_text(errors="ignore")
    return out


def check_skill_link():
    """(ok, detail) untuk symlink loader -> skills/gba-decomp.

    Dipisah dari audit state supaya bisa dipakai ulang di test. Loader hanya
    memindai .agents/skills, jadi symlink ini satu-satunya jalur discovery.
    """
    if not SKILL_LINK.is_symlink():
        if SKILL_LINK.exists():
            return False, "ada tapi BUKAN symlink (salinan bisa drift)"
        return False, "tidak ada (loader tidak akan menemukan skill)"
    try:
        resolved = SKILL_LINK.resolve(strict=True)
    except OSError as exc:
        return False, f"dangling: {exc}"
    if resolved != SKILL_DIR.resolve():
        return False, f"menunjuk {resolved} (harus {SKILL_DIR})"
    if not (resolved / "SKILL.md").is_file():
        return False, "target tidak punya SKILL.md"
    def rel(p):
        try:
            return str(p.relative_to(REPO))
        except ValueError:
            return str(p)
    return True, f"{rel(SKILL_LINK)} -> {rel(resolved)}"


def _norm(s):
    """Normalisasi untuk membandingkan blok promoted dengan draf."""
    s = re.sub(r"//[^\n]*", "", s)
    return re.sub(r"\s+", " ", s).strip()


def _promoted_blocks(text):
    """[(fungsi, body)] dari isi satu file promoted."""
    out = []
    parts = re.split(r"(?m)^(?=// DECOMP-MATCHED )", text)
    for part in parts:
        m = re.match(r"// DECOMP-MATCHED (\w+)", part)
        if not m:
            continue
        out.append((m.group(1), part.split("\n", 1)[1] if "\n" in part else ""))
    return out


def main(argv):
    mx = 5
    if "--max" in argv:
        mx = int(argv[argv.index("--max") + 1])
    fix = "--fix" in argv
    as_json = "--json" in argv
    strict = "--strict" in argv

    problems = 0
    dup_report, orphan_state, unmigrated, stale = [], [], [], []
    broken_blocks, bad_status, i32_hits, drift = [], [], [], []

    for pf in sorted(PROMOTED.glob("*.cc")):
        stem = pf.stem
        text = pf.read_text(errors="ignore")
        names = MARK.findall(text)

        # 1. duplikat dalam satu file
        dup = [n for n, c in Counter(names).items() if c > 1]
        if dup:
            problems += 1
            dup_report.append((stem, dup))

        # 5. blok tanpa penutup (hanya hitung kasar: kurung kurawal file)
        if text.count("{") != text.count("}"):
            problems += 1
            broken_blocks.append((stem, text.count("{") - text.count("}")))

        # 8. drift promoted vs draf (info / --strict = masalah)
        for n, body in _promoted_blocks(text):
            d = DRAFTS / f"{n}.c"
            if not d.exists():
                continue
            db = _norm(d.read_text(errors="ignore"))
            nb = _norm(body)
            if db and db not in nb and nb not in db:
                drift.append((stem, n))
                if strict:
                    problems += 1

        # state modul
        mp = MODULES / f"{stem}.json"
        state = json.loads(mp.read_text()) if mp.exists() else {}
        sfiles = src_text(stem)
        in_src = set()
        for t in sfiles.values():
            in_src |= set(MARK.findall(t))

        for n in names:
            st = (state.get(n) or {}).get("status")
            if n not in in_src:
                unmigrated.append((stem, n, st))

        # 2. state promoted tapi blok hilang dan tak ada di src
        for n, v in state.items():
            if not isinstance(v, dict) or v.get("status") != "promoted":
                continue
            if n not in names and n not in in_src:
                orphan_state.append((stem, n))

        # 4. sudah di src tapi state masih failed/drafted
        # 6. status di luar enum
        for n, v in state.items():
            if not isinstance(v, dict):
                continue
            if v.get("status") not in ALLOWED_STATUS:
                bad_status.append((stem, n, v.get("status")))
        for n in in_src:
            st = (state.get(n) or {}).get("status")
            if st in ("failed", "drafted", "pending"):
                stale.append((stem, n, st))

    # 6b. status liar ikut dihitung masalah
    problems += len(bad_status)

    # 7. i32 di draf/promoted (harness judge hanya punya s32)
    for folder in (DRAFTS, PROMOTED):
        for p in sorted(folder.glob("*")):
            if p.suffix not in (".c", ".cc"):
                continue
            try:
                hit = I32_RE.search(p.read_text(errors="ignore"))
            except OSError:
                continue
            if hit:
                i32_hits.append(str(p.relative_to(REPO)))
    problems += len(i32_hits)

    # 9. symlink loader skill
    skill_ok, skill_detail = check_skill_link()
    if not skill_ok:
        problems += 1

    total_blocks = sum(len(MARK.findall(p.read_text(errors="ignore")))
                       for p in PROMOTED.glob("*.cc"))
    total_src = 0
    for p in SRC.iterdir():
        if p.suffix in (".cc", ".c") and not p.name.startswith("rt"):
            total_src += len(MARK.findall(p.read_text(errors="ignore")))

    if as_json:
        print(json.dumps({
            "problems": problems,
            "strict": strict,
            "duplicate_blocks": dup_report,
            "broken_blocks": broken_blocks,
            "orphan_state": orphan_state,
            "unmigrated_blocks": unmigrated,
            "stale_src_status": stale,
            "bad_status": bad_status,
            "i32": i32_hits,
            "skill_symlink": {"ok": skill_ok, "detail": skill_detail},
            "promoted_draft_drift": drift,
            "total_promoted_blocks": total_blocks,
            "total_src_markers": total_src,
        }, indent=1))
    else:
        def show(title, rows, fmt=lambda r: r):
            print(f"\n## {title}: {len(rows)}")
            for r in rows[:mx]:
                print("   ", fmt(r))
            if len(rows) > mx:
                print(f"    ... {len(rows) - mx} lagi (pakai --max N)")

        print("=== AUDIT state ↔ promoted ↔ src ===")
        show("DUPLIKAT blok promoted (MASALAH)", dup_report,
             lambda r: f"{r[0]}: {len(r[1])} dobel -> {r[1][:4]}")
        show("Blok kurung tidak seimbang (MASALAH)", broken_blocks,
             lambda r: f"{r[0]}: selisih {r[1]:+d} kurung")
        show("State promoted tapi blok & src hilang (MASALAH)", orphan_state)
        show("Status di luar enum (MASALAH)", bad_status)
        show("i32 di draf/promoted (MASALAH)", i32_hits)
        show("Symlink skill .agents/skills/gba-decomp (MASALAH)",
             [] if skill_ok else [skill_detail])
        show("Blok promoted belum di src (info)", unmigrated)
        show("Sudah di src tapi state failed/drafted (info)", stale)
        show("Drift promoted vs draf (info, --strict = masalah)", drift)
        print(f"\nTotal blok promoted: {total_blocks} | marker di src/: {total_src}")
        print("MASALAH struktural:", problems)

    if fix:
        # Hanya kelas "status basi": fungsi PUNYA marker DECOMP-MATCHED di src
        # (= benar-benar dipindah migrate) tapi state-nya failed/drafted.
        # Status dijadikan "promoted" (status kelas satu; run.py tak mengenal
        # "migrated", jadi memakai "migrated" akan menghilangkan fungsi dari
        # statistik & verify). Tidak menyentuh draf/promoted/note.
        changed = 0
        per = {}
        for stem, n, _st in stale:
            per.setdefault(stem, []).append(n)
        for stem, names in per.items():
            mp = MODULES / f"{stem}.json"
            st = json.loads(mp.read_text())
            for n in names:
                st[n]["status"] = "promoted"
                changed += 1
            mp.write_text(json.dumps(st, indent=1))
        print(f"[fix] {changed} status basi -> promoted di {len(per)} shard")

    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
