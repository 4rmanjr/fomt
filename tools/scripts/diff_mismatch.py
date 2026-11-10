#!/usr/bin/env python3
"""diff_mismatch.py — hitung mismatch diff.py setelah target branch dinormalkan.

Alamat target cabang selalu berbeda antar-build, jadi baris cabang yang hanya
beda tujuan tidak dihitung. Skrip memakai output `diff.py --format json` lalu
membandingkan teks instruksi tiap baris (alamat/flag/`~>` dibuang, komentar
`@ ...` dibuang, target cabang diganti `TGT`).

  python3 tools/scripts/diff_mismatch.py func_0809DA00
  python3 tools/scripts/diff_mismatch.py func_0809DA00 --json
  python3 tools/scripts/diff_mismatch.py --diff-json /tmp/da.json
  python3 tools/scripts/diff_mismatch.py func_0809DA00 --strict   # exit 1 bila beda

Tanpa `--our-o`, objek dirakit dari log judge terbaru
(`decomp/logs/judge_<fn>/<agent>/func.s`). Tanpa `--ref-o`, objek ref diambil
dari `build/asm/<stem>.o` (stem dari shard state modul fungsi itu).
"""
import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
SCRIPTS = Path(__file__).resolve().parent

# Fragmen penanda diff.py: alamat, panah rotasi, penanda kolom, flag 1 huruf.
DROP = re.compile(r"^(?:[0-9a-f]{1,8}:|~>|[|<>]|[risRIS])$")
ADDR = re.compile(r"^[0-9a-f]{1,8}:\s*")
COMMENT = re.compile(r"\s+@.*$")
BRANCH = re.compile(
    r"^((?:b|bl|bx|blx|beq|bne|bgt|bhi|bls|bcc|bcs|ble|blt|bge|bvs|bvc|bmi|bpl|bal)"
    r"(?:\.[nw])?)\s+\S+$"
)


def norm_side(side):
    """Teks instruksi satu sisi baris diff, tanpa alamat/flag/komentar."""
    if not side:
        return ""
    parts = [
        f.get("text", "")
        for f in side.get("text", [])
        if not DROP.match(f.get("text", "").strip())
    ]
    s = "".join(parts).strip()
    s = ADDR.sub("", s)
    s = COMMENT.sub("", s)
    return re.sub(r"\s+", " ", s).strip()


def analyze(rows):
    out = {"rows": len(rows), "missing": 0, "extra": 0, "operand": 0,
           "branch_target": 0, "mismatch": 0}
    for r in rows:
        base = norm_side(r.get("base"))
        cur = norm_side(r.get("current"))
        if base == cur:
            continue
        if base and cur:
            # Cabang dengan mnemonic sama: beda target saja => bukan mismatch.
            mb = BRANCH.match(base)
            mc = BRANCH.match(cur)
            if mb and mc and mb.group(1) == mc.group(1):
                out["branch_target"] += 1
                continue
            out["operand"] += 1
        elif base:
            out["missing"] += 1
        else:
            out["extra"] += 1
    out["mismatch"] = out["missing"] + out["extra"] + out["operand"]
    return out


def module_of(fn):
    for shard in sorted((REPO / "decomp" / "state" / "modules").glob("*.json")):
        try:
            data = json.loads(shard.read_text())
        except (OSError, ValueError):
            continue
        if fn in data:
            return data[fn].get("module") or shard.stem + ".s"
    return None


def latest_judge_asm(fn):
    logs = REPO / "decomp" / "logs" / f"judge_{fn}"
    cands = sorted(logs.glob("*/func.s"), key=lambda p: p.stat().st_mtime)
    if not cands:
        return None
    return cands[-1]


def build_our_o(asm_src, out_o):
    subprocess.run(
        ["arm-none-eabi-as", "-mcpu=arm7tdmi", str(asm_src), "-o", str(out_o)],
        check=True,
    )
    return out_o


def run_diff(fn, our_o, ref_o):
    cmd = [
        sys.executable, str(REPO / "tools" / "asm-differ" / "diff.py"),
        "-o", "--no-pager", "--format", "json",
        "-f", str(our_o), "-F", str(ref_o), fn,
    ]
    res = subprocess.run(cmd, capture_output=True, text=True)
    if res.returncode != 0:
        raise SystemExit(f"diff.py gagal: {res.stderr.strip()[:400]}")
    return json.loads(res.stdout)


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("func", nargs="?", help="nama fungsi, mis. func_0809DA00")
    ap.add_argument("--our-o", type=Path, help="objek build kita (default: rakit log judge terbaru)")
    ap.add_argument("--ref-o", type=Path, help="objek ref (default: build/asm/<stem>.o)")
    ap.add_argument("--diff-json", type=Path, help="analisis JSON diff.py yang sudah ada")
    ap.add_argument("--json", action="store_true", help="cetak hasil sebagai JSON")
    ap.add_argument("--strict", action="store_true", help="exit 1 bila ada mismatch")
    args = ap.parse_args(argv)

    fn = args.func
    if args.diff_json:
        data = json.loads(args.diff_json.read_text())
    else:
        if not fn:
            ap.error("butuh nama fungsi atau --diff-json")
        our_o = args.our_o
        tmp = None
        if our_o is None:
            asm_src = latest_judge_asm(fn)
            if asm_src is None:
                raise SystemExit(f"tidak ada log judge untuk {fn}; pakai --our-o")
            tmp = Path(f"/tmp/{fn}.diffmismatch.o")
            our_o = build_our_o(asm_src, tmp)
        ref_o = args.ref_o
        if ref_o is None:
            mod = module_of(fn)
            if not mod:
                raise SystemExit(f"modul {fn} tidak ada di state; pakai --ref-o")
            ref_o = REPO / "build" / "asm" / (mod[:-2] + ".o" if mod.endswith(".s") else mod)
        if not Path(ref_o).exists():
            raise SystemExit(f"objek ref tidak ada: {ref_o}")
        data = run_diff(fn, our_o, ref_o)

    res = analyze(data.get("rows", []))
    name = fn or "<diff-json>"
    if res["rows"] and res["extra"] == res["rows"]:
        raise SystemExit(
            f"sisi TARGET kosong untuk {name}: simbol ref tidak ada atau berukuran 0 "
            f"(umum pada fungsi terakhir objek modul); pakai --ref-o lain"
        )
    if args.json:
        print(json.dumps({"func": fn, **res}, sort_keys=True))
    else:
        print(f"{name}: mismatch {res['mismatch']} "
              f"(missing {res['missing']}, extra {res['extra']}, operand {res['operand']}) "
              f"| branch-target ignored {res['branch_target']} | rows {res['rows']}")
    return 1 if args.strict and res["mismatch"] else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
