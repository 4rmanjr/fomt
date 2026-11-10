#!/usr/bin/env python3
"""List failed drafts in the repo's migratable modules, smallest first.

Run from the decomp repo root:
    python3 <skill_dir>/scripts/list_migratable_failed.py

Why: a migration-count target ("target migrasi min N") may only use modules in
MIGRATABLE_MODULES, and hand-writing this scan every round wastes turns. The
line count is a proxy for effort, not for tractability: a <=6-line draft is
often a shared-epilogue fragment that can never match standalone — check the
ref's first/last instructions before fixing (see SKILL.md pitfalls).

Env: LIMIT=<n> caps rows (default 15).
"""
import glob
import json
import os
import sys


def main() -> int:
    try:
        from decomp.migrate import MIGRATABLE_MODULES
    except Exception:
        print("run from the decomp repo root (decomp.migrate not importable)", file=sys.stderr)
        return 2
    print("MIGRATABLE_MODULES:", ", ".join(MIGRATABLE_MODULES))
    rows = []
    for path in glob.glob("decomp/state/modules/*.json"):
        try:
            data = json.load(open(path))
        except Exception:
            continue
        for name, entry in data.items():
            if not isinstance(entry, dict):
                continue
            if entry.get("status") != "failed" or entry.get("module") not in MIGRATABLE_MODULES:
                continue
            draft = f"decomp/drafts/{name}.c"
            try:
                lines = sum(1 for _ in open(draft))
            except OSError:
                lines = 9999
            note = (entry.get("note") or "").replace("\n", " ")[:70]
            rows.append((lines, entry["module"], name, note))
    rows.sort()
    limit = int(os.environ.get("LIMIT", "15"))
    for lines, module, name, note in rows[:limit]:
        print(f"{lines:4d}  {module:26s} {name:24s} {note}")
    print(f"-- {len(rows)} failed drafts in migratable modules")
    return 0


if __name__ == "__main__":
    sys.exit(main())
