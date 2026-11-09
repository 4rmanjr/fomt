#!/usr/bin/env python3
"""Pemilah kandidat migrasi: compile-error dulu, pola-lolos kedua, wall-tercatat terakhir.

Pakai:  python3 tools/scripts/pick_targets.py [--limit N]

Output: 3 grup berprioritas, termurah dulu per grup:
  A. COMPILE-ERROR — pasti bisa maju (betulkan tipe, bukan lawan allocator).
  B. POLA-LOLOS — note cocok resep terbukti (vtable-ret+ret-dipakai,
     call-chain fold, arg-dibuang r2, epilog-return, mask-hoist).
  C. HINDARI — gejala wall tercatat (urutan-init saved-reg, slot-stack
     ekstra, offset-load berpasangan, prolog-save, poke-multi-base,
     akumulator+r8, reload-tabel pasca-cabang). Jangan bakar judge di sini.

Read-only; tidak menyentuh state/draf.
"""
import glob
import json
import re
import sys

sys.path.insert(0, ".")

COMPILE_RX = re.compile(r"warning|error|invalid|syntax|\.c:|undeclared|request for member|non-void|incompatible pointer", re.I)

WIN_RX = [
    (re.compile(r"_call_via_rN|_call_via_r\d.*ret|bl; cmp r0|cmp r0, #0\s*\n\s*bne", re.I), "vtable-ret+ret-dipakai (pola 08012114/080A3774)"),
    (re.compile(r"call.*fold|r0 = func_|GetDesc|hasil di r0", re.I), "call-chain fold (pola 0807E51C)"),
    (re.compile(r"_call_via_r2.*free|r1.*bebas|missing-arg|arg.*dibuang", re.I), "arg-dibuang r2 (resep 12/12)"),
    (re.compile(r"pop \{r1\}|epilog.*pop|return.*call", re.I), "epilog-return (void->s32)"),
    (re.compile(r"lsls.*lsrs|mask.*hoist|u8 v = ", re.I), "mask-hoist narrow-read"),
]

WALL_RX = [
    (re.compile(r"movs? r[45678].*menempel|mov r[678].*sb|mov .*r8|urutan-init|saved-reg|init.*pin", re.I), "urutan-init saved-reg"),
    (re.compile(r"sub sp, #0x10.*sub sp, #0xc|slot stack|stack ekstra|\+1 slot|real vs reg", re.I), "slot-stack ekstra"),
    (re.compile(r"offset.*berpasangan|reload.*berpasangan|ldrsh.*berpasangan|movs r4.*pra-r3|movs r1.*menempel.*beq", re.I), "offset-load berpasangan"),
    (re.compile(r"prolog-save|r8-save|forward.*sebelum|ldr r4.*mov r8", re.I), "prolog-save + reuse akumulator"),
    (re.compile(r"poke.*multi|multi-alamat|base.*hidup|adds r2,r0", re.I), "poke multi-alamat base-hidup"),
    (re.compile(r"reload.*tabel|shift.*menempel.*beq|lsl.*menempel.*cabang|tabel pasca", re.I), "reload-tabel pasca-cabang"),
    (re.compile(r"zero=r0.*call|return-call.*pin|pra-call", re.I), "return-value dipin pra-call"),
    (re.compile(r"19regalloc|tanpa perbaikan|berulang", re.I), "regalloc berulang tanpa perbaikan"),
]


def load_state():
    st = {}
    for p in glob.glob("decomp/state/modules/*.json"):
        try:
            st.update(json.load(open(p)))
        except (OSError, ValueError):
            pass
    return st


def in_src(name):
    for f in glob.glob("src/**/*.cc", recursive=True):
        try:
            with open(f, errors="ignore") as fh:
                for line in fh:
                    if "DECOMP-MATCHED " + name in line:
                        return True
        except OSError:
            pass
    return False


def main() -> int:
    limit = 15
    if "--limit" in sys.argv:
        try:
            limit = int(sys.argv[sys.argv.index("--limit") + 1])
        except (IndexError, ValueError):
            pass
    try:
        from decomp.migrate import MIGRATABLE_MODULES
    except Exception as e:
        print(f"jalankan dari root repo fomt: {e}", file=sys.stderr)
        return 2
    st = load_state()
    grp_a, grp_b, grp_c = [], [], []
    for name, e in st.items():
        if not isinstance(e, dict) or e.get("status") != "failed":
            continue
        if e.get("module") not in MIGRATABLE_MODULES or in_src(name):
            continue
        note = e.get("note") or ""
        rl = e.get("ref_len") or 9999
        row = (rl, name, e.get("module"))
        if COMPILE_RX.search(note):
            grp_a.append(row + ("compile-error",))
            continue
        win = next((label for rx, label in WIN_RX if rx.search(note)), None)
        if win:
            grp_b.append(row + (win,))
            continue
        wall = next((label for rx, label in WALL_RX if rx.search(note)), None)
        grp_c.append(row + ((f"WALL? {wall}" if wall else "regalloc umum"),))
    grp_a.sort()
    grp_b.sort()
    grp_c.sort()
    print(f"### A. COMPILE-ERROR ({len(grp_a)}) — kerjakan dulu:")
    for rl, name, mod, why in grp_a[:limit]:
        print(f"  ref={rl} {mod} {name}")
    print(f"### B. POLA-LOLOS ({len(grp_b)}) — kandidat MATCH:")
    for rl, name, mod, why in grp_b[:limit]:
        print(f"  ref={rl} {mod} {name}  [{why}]")
    print(f"### C. HINDARI ({len(grp_c)}) — jangan bakar judge:")
    for rl, name, mod, why in grp_c[:limit]:
        print(f"  ref={rl} {mod} {name}  [{why}]")
    return 0


if __name__ == "__main__":
    sys.exit(main())
