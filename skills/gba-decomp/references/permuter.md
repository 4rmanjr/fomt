# Permuter runs for 1-2 instruction residuals

## When to Use

ORDINARY regalloc residuals only (judge note shows a handful of
regalloc/operand diffs on an otherwise identical shape). Do not spend
iterations on fold walls (compiler folds the expression no matter the
spelling) or deep home tie-breaks (bounded 15k+ runs never place the
temp) — those need deliberate `__asm__` pinning by hand, which the
permuter cannot express (its parser rejects `__asm__`). A pin-anchored
case held best-310 across 62k iterations without matching — treat a flat
score floor after a few thousand iterations as the stop signal, not a
reason to widen the budget.

## Setup (once)

- Engine: laqieer/decomp-permuter-arm (simonlindholm/decomp-permuter
  fork). System python must carry exactly `pycparser==2.20` (2.21+
  crashes, older lacks the parser module).

## Directory contract

One directory per target holding exactly `base.c`, `target.o`,
`compile.sh`. Run `permuter.py --stop-on-zero -j4 <dir>`, wrapped in
`timeout` (it runs forever without a match) — background with notify,
then judge the winner through the real pipeline (a permuter score of 0
still needs the project's own MATCH + compare gate).

## base.c rules

- Single function plus inline typedefs. NO `#include` (the engine runs
  its own `cpp -P -nostdinc`) and NO `__asm__` (parse error).
- Start from the closest hand-made plain variant: pin by hand first,
  then re-express the pinned homes with plain temps for the run, and
  re-apply the pin to the winning shape afterwards if needed.

## target.o recipe (function slice as .text)

- Never `.incbin` raw bytes (assembler marks them `$d`/data and the
  scorer misreads them). Slice the SOURCE asm instead: copy the chunk
  between the function's marker line and the next function's marker,
  prepend the project's macro include plus `.SYNTAX UNIFIED`, and
  assemble with the same flags the module build uses
  (`-mcpu=arm7tdmi -I. -Iasm -Iinclude`). Verify with objdump that
  the function disassembles as Thumb from offset 0.

## compile.sh contract

- Invoked as `compile.sh <src.c> -o <out.o>` (source is `$1`, output
  is `$3`). Pipeline: `cpp -nostdinc -undef`, then the matching
  compiler at `-O2` with the project's flags, then assemble for the
  target CPU. Test it once on `base.c` before launching.
