#!/usr/bin/env python3
"""Minimal idempotent asm->C workflow for fomt (no ROM needed).

State: decomp/state/progress.json  {name: {module, addr, thumb, status, ...}}
  status: pending | drafted | matched | failed
Rerun-safe: scan merges, never deletes results. Ctrl-C = pause, rerun = resume.
Tool & dependency Python sudah di-vendor di tools/ (lihat tools/VENDORED.md).
"""
from __future__ import annotations
import json, os, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / "tools"
ASM = ROOT / "asm"
STATE = ROOT / "decomp" / "state" / "progress.json"
DRAFTS = ROOT / "decomp" / "drafts"
LOGD = ROOT / "decomp" / "logs"

PYDEPS = TOOLS / "python"
DECOMP_SRC = Path(os.environ.get("FOMT_DECOMPNET", TOOLS / "decompnet"))
for _p in (PYDEPS, DECOMP_SRC):
    if _p.is_dir() and str(_p) not in sys.path:
        sys.path.insert(0, str(_p))

AGBCC = Path(os.environ.get("FOMT_AGBCC", TOOLS / "agbcc/bin/agbcc"))
AGINC = Path(os.environ.get("FOMT_AGBCC_INCLUDE", TOOLS / "agbcc/include"))
AS = Path(os.environ.get("FOMT_AS", TOOLS / "arm-gnu/bin/arm-none-eabi-as"))
CPP = Path(os.environ.get("FOMT_CPP", TOOLS / "arm-gnu/bin/arm-none-eabi-cpp"))
M2C = Path(os.environ.get("FOMT_M2C", TOOLS / "m2c/m2c.py"))

MARK = re.compile(r'^\s*(thumb_func_start|arm_func_start|non_word_aligned_thumb_func_start)\s+(\S+)', re.M)
LBL = re.compile(r'^\s*(\S+):\s*@\s*(0x[0-9A-Fa-f]+)')
COMMON = ('#include <stdint.h>\ntypedef uint8_t u8;\ntypedef uint16_t u16;\ntypedef uint32_t u32;\n'
          'typedef int8_t s8;\ntypedef int16_t s16;\ntypedef int32_t s32;\n')


def load() -> dict:
    return json.loads(STATE.read_text()) if STATE.exists() else {}


def save(s: dict) -> None:
    STATE.parent.mkdir(parents=True, exist_ok=True)
    tmp = STATE.with_suffix(".tmp")
    tmp.write_text(json.dumps(s, indent=1, sort_keys=True))
    tmp.replace(STATE)


def scan() -> dict:
    st = load()
    for f in sorted(ASM.glob("*.s")):
        text = f.read_text(errors="replace")
        ms = list(MARK.finditer(text))
        for i, m in enumerate(ms):
            name = m.group(2)
            blk = text[m.start():ms[i + 1].start() if i + 1 < len(ms) else len(text)]
            addr = None
            for t in blk.splitlines()[1:5]:
                lm = LBL.match(t)
                if lm:
                    addr = int(lm.group(2), 16)
                    break
            if addr is None and (mm := re.match(r"func_([0-9A-Fa-f]{8})$", name)):
                addr = int(mm.group(1), 16)
            thumb = "arm_func_start" not in m.group(1).lower() or "thumb" in m.group(1).lower()
            if name not in st:
                st[name] = {"module": f.name, "addr": addr, "thumb": bool(thumb),
                            "status": "pending", "size": len(blk)}
            else:
                st[name].update({"module": f.name, "addr": addr, "thumb": bool(thumb),
                                 "size": len(blk)})
    save(st)
    return st

def extract_thumb(data: bytes, name: str) -> tuple[bytes, bool]:
    """(code, thumb): like match_arm.link's own slicing (masks Thumb bit0,
    size-0 symbols run to the next symbol). extract_function gets this wrong
    for GNU-as objects, so do it here."""
    from io import BytesIO
    from elftools.elf.elffile import ELFFile
    from decompnet.elfobj import _function_symbols
    elf = ELFFile(BytesIO(data))
    shndx, start, size = _function_symbols(elf)[name]
    thumb = bool(start & 1)
    start &= ~1
    sec = elf.get_section(shndx)
    sdata = sec.data()
    if not size:
        ends = sorted({(o & ~1) for (sx, o, _) in _function_symbols(elf).values() if sx == shndx}
                      | {sec["sh_size"]})
        end = next((x for x in ends if x > start), sec["sh_size"])
        while end - 4 >= start + 4 and sdata[end - 4:end] == b"\0\0\0\0":
            end -= 4
        size = end - start
    return bytes(sdata[start:start + size]), thumb



def func_block(module: str, name: str) -> str:
    text = (ASM / module).read_text(errors="replace")
    ms = list(MARK.finditer(text))
    for i, m in enumerate(ms):
        if m.group(2) == name:
            return text[m.start():ms[i + 1].start() if i + 1 < len(ms) else len(text)]
    raise KeyError(name)


def draft(name: str) -> str | None:
    st = load()
    if st[name]["status"] in ("matched", "promoted"):
        return (DRAFTS / f"{name}.c").read_text()  # keep result, never regress
    e = st[name]
    blk = func_block(e["module"], name)
    asm_m2c = re.sub(r"^\s*(?:non_word_aligned_)?thumb_func_start\s+(\w+)", r"glabel \1", blk, flags=re.M)
    asm_m2c = re.sub(r"^\s*arm_func_start\s+(\w+)", r"glabel \1", asm_m2c, flags=re.M)
    asm_m2c = re.sub(r"\bld(s[hb])\b", r"ldr\1", asm_m2c)
    import tempfile
    with tempfile.NamedTemporaryFile("w", suffix=".s", delete=False) as f:
        f.write(f".syntax unified\n.thumb\n.text\n{asm_m2c}")
        p = f.name
    r = subprocess.run([sys.executable, str(M2C), "-t", "gba", "-f", name, p],
                       capture_output=True, text=True, timeout=60)
    Path(p).unlink(missing_ok=True)
    if r.returncode or not r.stdout.strip():
        e["status"] = "failed"
        e["note"] = (r.stderr or r.stdout)[-300:]
        save(st)
        return None
    DRAFTS.mkdir(parents=True, exist_ok=True)
    (DRAFTS / f"{name}.c").write_text(r.stdout)
    e["status"] = "drafted"
    save(st)
    return r.stdout


def judge(name: str) -> bool:
    sys.path.insert(0, str(DECOMP_SRC))
    from decompnet.elfobj import extract_function
    from decompnet.rom import match_arm
    from decompnet.rom.symbols import Symbol, SymbolTable
    st = load()
    if st[name]["status"] == "promoted":
        return True  # frozen result, never re-judged
    e = st[name]
    body = (DRAFTS / f"{name}.c").read_text()
    LOGD.mkdir(parents=True, exist_ok=True)
    work = LOGD / f"judge_{name}"
    work.mkdir(exist_ok=True)
    (work / "common.h").write_text(COMMON)
    (work / "func.c").write_text(f'#include "common.h"\n{body}\n')
    r1 = subprocess.run([str(CPP), "-nostdinc", "-undef", f"-I{AGINC}", f"-I{work}",
                         str(work / "func.c"), "-o", str(work / "func.i")],
                        capture_output=True, text=True)
    assert r1.returncode == 0, r1.stderr[-2000:]
    r2 = subprocess.run([str(AGBCC), "-mthumb-interwork", "-O2", "-fhex-asm",
                         str(work / "func.i"), "-o", str(work / "func.s")],
                        capture_output=True, text=True)
    assert r2.returncode == 0, (r2.stdout + r2.stderr)[-2000:]
    r3 = subprocess.run([str(AS), "-mcpu=arm7tdmi", "-o", str(work / "func.o"),
                         str(work / "func.s")], capture_output=True, text=True)
    assert r3.returncode == 0, (r3.stdout + r3.stderr)[-2000:]
    cand = extract_function((work / "func.o").read_bytes(), name)
    if cand is None:
        e["status"] = "failed"
        e["note"] = "candidate has no function symbol"
        save(st)
        return False
    r4 = subprocess.run([str(AS), "-mcpu=arm7tdmi", "-I", str(ROOT), "-I", str(ROOT / "include"),
                         "-o", str(work / "ref.o"), str(ASM / e["module"])],
                        capture_output=True, text=True)
    assert r4.returncode == 0, (r4.stdout + r4.stderr)[-2000:]
    ref_code, _ = extract_thumb((work / "ref.o").read_bytes(), name)
    syms = SymbolTable([Symbol(n, v.get("addr") or 0) for n, v in st.items() if v.get("addr")])
    tgt = match_arm.ArmTarget(name, e["addr"] or 0x08000000, ref_code, e.get("thumb", True))
    res = match_arm.link((work / "func.o").read_bytes(), name, tgt, syms, lambda a, n: None)
    e["status"] = "matched" if res.exact else "failed"
    e["note"] = "; ".join(res.problems[:4])
    save(st)
    (LOGD / f"{name}.log").write_text(f"exact={res.exact}\n" + "\n".join(res.problems))
    return res.exact


def promote(name: str, module: str = "more_items") -> Path:
    """Stage a matched draft as decomp/promoted/<module>.cc (review queue).
    Idempotent: rerun is a no-op. Never touches src/ or asm/ (build-safe)."""
    st = load()
    e = st[name]
    if e["status"] == "promoted":
        return Path(e["promoted_to"])
    assert e["status"] == "matched", f"{name}: status={e['status']}, judge first"
    body = (DRAFTS / f"{name}.c").read_text()
    out = ROOT / "decomp" / "promoted" / f"{module}.cc"
    marker = f"// DECOMP-MATCHED {name} (promoted from asm/{e['module']}; human review before src/)\n"
    old = out.read_text(errors="replace") if out.exists() else ""
    if marker not in old:
        out.parent.mkdir(parents=True, exist_ok=True)
        with out.open("a", errors="replace") as f:
            f.write(f"\n{marker}{body.rstrip()}\n")
    e["status"] = "promoted"
    e["promoted_to"] = str(out.relative_to(ROOT))
    save(st)
    return out

def main(argv: list[str]) -> int:
    if not argv or argv[0] in ("scan",):
        st = scan()
        print(f"scan: {len(st)} functions, {sum(1 for v in st.values() if v['status'] == 'pending')} pending")
    elif argv[0] == "draft":
        st = scan()
        names = argv[1:] or [k for k, v in st.items() if v["status"] == "pending"]
        lim = int(__import__("os").environ.get("LIMIT", "0")) or len(names)
        for n in names[:lim]:
            try:
                print(n, "->", "ok" if draft(n) else "fail")
            except KeyboardInterrupt:
                print("paused; rerun to resume")
                return 130
    elif argv[0] == "judge":
        st = load()
        names = argv[1:] or [k for k, v in st.items() if v["status"] == "drafted"]
        for n in names:
            try:
                print(n, "MATCH" if judge(n) else "DIFF")
            except KeyboardInterrupt:
                print("paused; rerun to resume")
                return 130
    elif argv[0] == "promote":
        st = load()
        names = argv[1:] or [k for k, v in st.items() if v["status"] == "matched"]
        for n in names:
            print(n, "->", promote(n))
    elif argv[0] == "status":
        from collections import Counter
        st = load()
        print(Counter(v["status"] for v in st.values()), f"total={len(st)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
