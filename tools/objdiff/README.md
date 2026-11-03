# objdiff-cli (vendored binary)

Machine-readable per-instruction diff + skor match (0-100%).
Sumber: https://github.com/encounter/objdiff/releases (v3.8.3,
`objdiff-cli-linux-x86_64`, 2026-11-04).

## Pakai

```bash
tools/objdiff/objdiff-cli --no-color diff \
  -1 <ref.o> -2 <mine.o> -o - --format json-pretty <func> \
  | python3 -c "import json,sys; d=json.load(sys.stdin); ..."
```

Field penting per instruksi: `diff_kind` (`DIFF_REPLACE`/`DIFF_ARG_MISMATCH`/
`DIFF_INSERT`), `arg_diff.diff_index` (operand mana yang beda), dan
`match_percent` per fungsi. Cocok untuk oracle otomatis (skor) maupun
dibaca manusia via `asm-differ` (lebih nyaman untuk mata).
