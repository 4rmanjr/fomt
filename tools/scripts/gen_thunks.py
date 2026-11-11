#!/usr/bin/env python3
"""gen_thunks.py — bulk-generate draf untuk fungsi "thunk" sederhana.

Sekelompok fungsi di ROM ini cuma pembungkus satu call:

    push {lr}
    bl <callee>
    pop {r0}
    bx r0

Di C itu persis `void f(void) { <callee>(); }` — sudah terbukti 49 blok
promoted di `code_linkonce.s` (lihat `decomp/promoted/code_linkonce.cc`).
m2c menuliskan nama simbol C++ apa adanya (mis. `_._10ANpcEntity`), yang
bukan identifier C sah -> draf gagal compile. Diperbaiki dengan label asm:

    s32 _10ANpcEntity(void) __asm__("_._10ANpcEntity");   /* extern */

(jadi nama ELF tetap persis simbol aslinya; `asm/` mendefinisikannya di
`src/npc_entity.o`).

Perhatikan: `pop {r0}; bx r0` = epilog void (bukan `pop {r1}; bx r1` yang
berarti fungsi mengembalikan nilai — lihat `docs/decomp/POLA-DIFF.md` §2.1).

Tool ini hanya menulis draf; penilaian byte tetap milik `fomt`.

  python3 tools/scripts/gen_thunks.py [--module code_linkonce.s] [--write]
                                     [--limit N] [--json]
"""
import argparse
import json
import re
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
DRAFTS = REPO / "decomp" / "drafts"
START_RE = re.compile(r"^\s*thumb_func_start\s+(\w+)")
LABEL_RE = re.compile(r"^\s*[\w.]+:")
# push {lr} / bl X / pop {r0} / bx r0  (urutan persis)
BODY_RE = re.compile(r"^(push \{lr\}|bl \S+|pop \{r0\}|bx r0)$")
# simbol C++ mangling punya '.' (mis. _._10ANpcEntity) -> butuh label asm
DOT_RE = re.compile(r"[.$]")


def load_state():
    st = {}
    for p in sorted((REPO / "decomp" / "state" / "modules").glob("*.json")):
        try:
            j = json.loads(p.read_text())
        except (OSError, ValueError):
            continue
        funcs = j.get("functions", j)
        if isinstance(funcs, dict):
            for k, v in funcs.items():
                if isinstance(v, dict):
                    st[k] = v
    return st


def c_name(sym):
    """Nama simbol asm -> identifier C yang sah."""
    return re.sub(r"[.$]", "_", sym)


def find_thunks(asm_path):
    """Yield (nama, [callee...]) untuk fungsi berbentuk thunk."""
    cur, buf = None, []

    def flush():
        if not cur:
            return None
        body = [s.strip() for s in buf
                if s.strip() and not s.strip().startswith(".")
                and not LABEL_RE.match(s)]
        if not (2 <= len(body) <= 8):
            return None
        if not all(BODY_RE.match(x) for x in body):
            return None
        calls = [x[3:] for x in body if x.startswith("bl ")]
        if not calls:
            return None
        return calls

    for line in asm_path.read_text(errors="replace").split("\n"):
        m = START_RE.match(line)
        if m:
            calls = flush()
            if calls:
                yield m.group(1), calls
            cur, buf = m.group(1), []
        elif cur is not None:
            buf.append(line)
    calls = flush()
    if calls:
        yield cur, calls


def draft_text(name, calls):
    """Bangun isi draf C untuk sebuah thunk."""
    lines, decls = [], []
    for c in calls:
        if DOT_RE.search(c):
            cid = c_name(c)
            decls.append(f"s32 {cid}(void) __asm__(\"{c}\");")
            calls = [cid if x == c else x for x in calls]
        else:
            decls.append(f"s32 {c}(void);")
    if decls:
        lines.append("\n".join(decls))
        lines.append("")
    body = "\n".join(f"    {c}();" for c in calls)
    lines.append(f"void {name}(void) {{")
    lines.append(body)
    lines.append("}")
    return "\n".join(lines) + "\n"


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--module", action="append", default=None,
                    help="batasi ke file asm (boleh diulang)")
    ap.add_argument("--write", action="store_true", help="tulis draf ke disk")
    ap.add_argument("--limit", type=int, default=0, help="batasi jumlah draf")
    ap.add_argument("--json", action="store_true")
    args = ap.parse_args(argv)

    mods = args.module or [p.name for p in sorted((REPO / "asm").glob("*.s"))]
    st = load_state()
    rows = []
    for mod in mods:
        ap_ = REPO / "asm" / (mod if mod.endswith(".s") else mod + ".s")
        if not ap_.exists():
            continue
        for name, calls in find_thunks(ap_):
            e = st.get(name) or {}
            if e.get("status") != "failed":
                continue
            rows.append({"name": name, "module": ap_.name, "calls": calls,
                         "draft": DRAFTS / f"{name}.c"})
    if args.limit:
        rows = rows[:args.limit]
    written = 0
    for r in rows:
        txt = draft_text(r["name"], r["calls"])
        r["text"] = txt
        if args.write:
            r["draft"].write_text(txt)
            written += 1
    if args.json:
        print(json.dumps({"total": len(rows), "written": written,
                          "rows": [{k: v for k, v in r.items() if k != "text"}
                                   for r in rows]}, indent=1))
        return 0
    print(f"thunk gagal: {len(rows)} (ditulis {written})")
    for r in rows[:args.limit or len(rows)]:
        print(f"  {r['module']:22s} {r['name']:16s} -> {', '.join(r['calls'])}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(__import__("sys").argv[1:]))
