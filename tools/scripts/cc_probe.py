#!/usr/bin/env python3
"""cc_probe.py - kompilasi cuplikan C dengan agbcc lalu cetak asm hasilnya.

Alat "form hunting": sebelum menghabiskan kuota judge, cek apakah sebuah bentuk
C memang bisa menghasilkan pola instruksi tertentu.

  python3 tools/scripts/cc_probe.py potongan.c
  echo 'int f(unsigned x){ return x < 0u; }' | python3 tools/scripts/cc_probe.py -
  python3 tools/scripts/cc_probe.py potongan.c --compiler old_agbcc
  python3 tools/scripts/cc_probe.py potongan.c --grep 'bcc|cmp.*#0x0' -C 1

Memakai pipeline yang sama dengan judge (cpp -> agbcc -> .s), hanya berhenti
sebelum assembling. Read-only: tidak menyentuh state/draf.
"""
import argparse
import pathlib
import re
import subprocess
import sys
import tempfile

ROOT = pathlib.Path(__file__).resolve().parents[2]
TOOLS = ROOT / "tools"
CPP = TOOLS / "arm-gnu" / "bin" / "arm-none-eabi-cpp"
AGINC = TOOLS / "agbcc" / "include"
COMPILERS = {"agbcc": TOOLS / "agbcc" / "bin" / "agbcc",
             "old_agbcc": TOOLS / "agbcc" / "bin" / "old_agbcc"}


def compile_asm(src, compiler="agbcc", keep=None):
    with tempfile.TemporaryDirectory() as td:
        work = pathlib.Path(keep) if keep else pathlib.Path(td)
        work.mkdir(parents=True, exist_ok=True)
        c, i, s = work / "probe.c", work / "probe.i", work / "probe.s"
        c.write_text(src)
        r = subprocess.run([str(CPP), "-nostdinc", "-undef", f"-I{AGINC}",
                            f"-I{work}", str(c), "-o", str(i)],
                           capture_output=True, text=True)
        if r.returncode != 0:
            raise SystemExit("cpp gagal:\n" + (r.stdout + r.stderr)[-2000:])
        r = subprocess.run([str(COMPILERS[compiler]), "-mthumb-interwork", "-O2",
                            "-fhex-asm", str(i), "-o", str(s)],
                           capture_output=True, text=True)
        if r.returncode != 0:
            raise SystemExit("agbcc gagal:\n" + (r.stdout + r.stderr)[-2000:])
        return s.read_text(), (r.stdout + r.stderr)


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("source", help="file .c, atau - untuk stdin")
    ap.add_argument("--compiler", choices=sorted(COMPILERS), default="agbcc")
    ap.add_argument("--grep", help="hanya cetak baris yang cocok (regex)")
    ap.add_argument("-C", "--context", type=int, default=0,
                    help="baris konteks sebelum/sesudah hasil grep")
    a = ap.parse_args(argv)
    src = sys.stdin.read() if a.source == "-" else pathlib.Path(a.source).read_text()
    asm, warn = compile_asm(src, a.compiler)
    if warn.strip():
        print(warn.strip(), file=sys.stderr)
    if a.grep:
        lines = asm.splitlines()
        pat = re.compile(a.grep)
        out = set()
        for idx, line in enumerate(lines):
            if pat.search(line):
                for k in range(max(0, idx - a.context), min(len(lines), idx + a.context + 1)):
                    out.add(k)
        for idx in sorted(out):
            print(lines[idx])
        if not out:
            print(f"(tidak ada baris cocok untuk {a.grep!r})", file=sys.stderr)
        return 0
    print(asm)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
