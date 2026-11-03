# asm-differ (vendored)

Side-by-side assembly diff untuk matching decomp. Sumber:
https://github.com/simonlindholm/asm-differ (`diff.py`, MIT-ish; cek lisensi
di header file bila didistribusikan ulang).

## Pakai

```bash
cd tools/asm-differ
/usr/bin/python3 diff.py --no-pager --algorithm=difflib \
  -o -f <mine.o> -F <ref.o> <func_080XXXXX>
```

`.o` mine dibuat seperti judge (agbcc `-mthumb-interwork -O2 -fhex-asm` +
`as -mcpu=arm7tdmi`); `.o` ref dirakit dari potongan `thumb_func_start`
di `asm/<modul>.s` (+ header `.syntax unified` + `.globl`/`.thumb_func`).

## Deps (sekali saja)

```
/usr/bin/python3 -m pip install --user --break-system-packages \
  colorama watchdog
```

`levenshtein` opsional (fallback `--algorithm=difflib` tanpa install).
Python venv Hermes tidak punya pip — pakai `/usr/bin/python3` sistem.
