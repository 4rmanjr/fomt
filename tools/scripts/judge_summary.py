#!/usr/bin/env python3
"""Peringkas log judge (tangan mekanis): note + asm kita-vs-ref -> diagnosis siap kerja.

Pakai:  python3 tools/scripts/judge_summary.py <func>

Output (~10 baris): status + skor + lokasi residual pertama + pasangan
instruksi (kita vs ref di sekitar lokasi) + dugaan pola dari katalog +
saran aksi. Read-only; tidak menyentuh state/draf.
"""
import glob
import json
import os
import re
import sys

sys.path.insert(0, ".")

PATTERNS = [
    (re.compile(r"push \{lr\}.*extra|push \{r4, r5, r6, lr\}.*extra|push \{r4, r5.*extra"), "pin saved-reg (r2/r3/r8): kompilator menolak simpan reg yang dipin -> coba fence-after-use atau parkir (wall #6 POLA-DIFF)"),
    (re.compile(r"movs? r\d+, #0.*menempel|mov r\d+, sb|mov .*r8"), "urutan-init saved-reg: init pin menempel di posisi salah -> pindah init ke prolog SEBELUM komputasi pertama (0803AE58, 08038EB8)"),
    (re.compile(r"sub sp, #0x10 \| sub sp, #0xc|sub sp.*stack"), "slot stack ekstra: kalkulasi ganda / u8 ganda -> gabung ke satu variabel, satu load (080CB9DC)"),
    (re.compile(r"_call_via_r2.*free|with-free-r1|residual.*\br2\b"), "argumen dibuang m2c (call via r2 + r1 bebas): tambah s32 arg1 teruskan ke call (resep 12/12)"),
    (re.compile(r"beq .* bne|bhi .*bne|polaritas"), "polaritas cabang: balik if (x==0 return) vs (x!=0 ...) sesuai bne/beq ref (08012114)"),
    (re.compile(r"adds r(\d), r(\d).*adds r\2, r\1"), "urutan operand adds terbalik: tulis `off += base` vs `off = base +` sesuai urutan ref (0807D1DC)"),
    (re.compile(r"pop \{r1\}|bx r1|epilog.*pop"), "epilog pop {r1} = return value: ubah void -> s32 return call() (aturan epilog-return)"),
    (re.compile(r"ldrh?.*ldr.*pool|ldr r\d, \[pc"), "urutan ldr-pool: reload field terpisah vs gabung -> tiru urutan ldr ref baris-per-baris"),
    (re.compile(r"compile|error|warning|syntax"), "compile-error: betulkan tipe dulu (struct/void*/u8), judge ulang — bukan masalah kodegen"),
    (re.compile(r"19regalloc|regalloc berulang|tanpa perbaikan"), "residual regalloc berulang antar-judge: PARKIR + regen (aturan move-on), jangan iterasi buta"),
]


def load_state():
    st = {}
    for p in glob.glob("decomp/state/modules/*.json"):
        st.update(json.load(open(p)))
    return st


def find_log(func):
    cands = sorted(glob.glob(f"decomp/logs/judge_{func}/*/func.s"), key=os.path.getmtime)
    return cands[-1] if cands else None


def parse_note(note):
    note = (note or "").replace("\n", " | ")
    m = re.search(r"(byte \+\S+: \S+ vs ref \S+|len \d+ vs ref \d+)", note)
    loc = m.group(1) if m else "-"
    m2 = re.search(r"\[([^\]]*)\]", note)
    score = m2.group(1) if m2 else "-"
    m3 = re.search(r"@([a-z<>| ]+)([^|]+)", note)
    pair = m3.group(0).strip()[:110] if m3 else "-"
    return loc, score, pair


def asm_around(path, loc):
    """Ambil ±6 baris asm kita di sekitar lokasi residual pertama."""
    try:
        lines = open(path, errors="ignore").read().splitlines()
    except OSError:
        return []
    body = [l for l in lines if l.strip() and not l.strip().startswith((".", "@", "/"))]
    start = next((i for i, l in enumerate(body) if re.match(r"^\S+:$", l.strip())), 0)
    body = body[start:start + 400]
    idx = 0
    m = re.search(r"byte \+(\S+)", loc)
    if m:
        try:
            target = int(m.group(1), 16) // 2
            idx = max(0, min(len(body) - 1, target))
        except ValueError:
            pass
    lo, hi = max(0, idx - 4), idx + 7
    return [f"    {l.strip()}" for l in body[lo:hi] if l.strip()]


def suggest(note, loc, score):
    hay = f"{note} {loc} {score}"
    out = []
    for rx, text in PATTERNS:
        if rx.search(hay):
            out.append(text)
    return out


def main() -> int:
    if len(sys.argv) < 2:
        print("pakai: judge_summary.py <func>", file=sys.stderr)
        return 2
    name = sys.argv[1]
    st = load_state()
    e = st.get(name)
    if not e:
        print(f"{name}: tidak ada di state")
        return 1
    note = e.get("note") or ""
    loc, score, pair = parse_note(note)
    print(f"### {name}  status={e.get('status')} ref_len={e.get('ref_len')} budget={'≤3' if (e.get('ref_len') or 99) <= 32 else '≤4' if (e.get('ref_len') or 99) <= 64 else '≤6' if (e.get('ref_len') or 99) <= 128 else '≤8' if (e.get('ref_len') or 99) <= 256 else '≤10'} judge")
    print(f"lokasi : {loc}")
    print(f"skor   : {score}")
    print(f"pasangan: {pair}")
    logp = find_log(name)
    lownote = note.lower()
    if "warning" in lownote or "error" in lownote or "invalid" in lownote or "syntax" in lownote or ".c:" in note:
        print("jenis  : COMPILE-ERROR (betulkan tipe, bukan kodegen)")
        print("catatan: " + note[:300].replace(" | ", "\n         "))
    else:
        print("jenis  : DIFF kodegen")
        ctx = asm_around(logp, loc) if logp else []
        if ctx:
            print("asm kita sekitar lokasi:")
            print("\n".join(ctx[:11]))
    sugs = suggest(note, loc, score)
    if "tanpa perbaikan" in note or e.get("_stuck"):
        sugs.append("residual berulang: PARKIR + regen (aturan move-on)")
    if sugs:
        print("dugaan :")
        for s in dict.fromkeys(sugs)[:3]:
            print(f"  - {s}")
    else:
        print("dugaan : - (bandingkan asm kita vs ref baris-per-baris)")
    print("aksi   : 1 varian pin/fence/urutan -> judge; tanpa perbaikan skor = parkir + regen")
    return 0


if __name__ == "__main__":
    sys.exit(main())
