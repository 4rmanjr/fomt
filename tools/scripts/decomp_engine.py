#!/usr/bin/env python3
"""decomp_engine.py - engine kerja decomp: diff terklasifikasi, antrean, runner judge.

Tiga peran (semua memakai tool resmi repo, tidak menggantikannya):

  diff <func>        bandingkan asm hasil judge terakhir vs asm ref, dengan
                     normalisasi (suffix `s`, alias kondisi, label, literal
                     pool, immediate) lalu klasifikasikan polanya.
  queue [--limit N]  antrean kandidat `failed` |len-ref| <= 4 berperingkat:
                     yang selisihnya bukan "hanya-register" dan paling sedikit
                     beda instruksinya didahulukan.
  attempt <func>     tulis draf dari file, reset state, jalankan `fomt <func>`,
                     catat percobaan (cap 5), dan bila MATCH opsional langsung
                     migrasi + `make compare`.

Contoh:
  python3 tools/scripts/decomp_engine.py queue --limit 12
  python3 tools/scripts/decomp_engine.py diff func_08024C74
  python3 tools/scripts/decomp_engine.py attempt func_08024C74 --draft /tmp/d.c --migrate

Semua perintah kecuali `attempt` bersifat read-only. Riwayat percobaan
disimpan di decomp/engine/attempts/<func>.json (tidak di-commit).
"""
import argparse
import difflib
import json
import pathlib
import re
import subprocess
import sys
import time

ROOT = pathlib.Path(__file__).resolve().parents[2]
STATE = ROOT / "decomp" / "state" / "modules"
DRAFTS = ROOT / "decomp" / "drafts"
ASM = ROOT / "asm"
LOGS = ROOT / "decomp" / "logs"
ATTEMPTS = ROOT / "decomp" / "engine" / "attempts"

# kunci = sufiks kondisi (op[1:]), nilai = bentuk kanonik
COND_ALIAS = {"lo": "cc", "hs": "cs", "cc": "cc", "cs": "cs",
              "eq": "eq", "ne": "ne", "mi": "mi", "pl": "pl",
              "vs": "vs", "vc": "vc", "hi": "hi", "ls": "ls",
              "ge": "ge", "lt": "lt", "gt": "gt", "le": "le"}
S_BASE = {"add", "sub", "mov", "cmp", "lsl", "lsr", "asr", "mul", "and",
          "orr", "eor", "bic", "mvn", "neg", "adc", "sbc", "tst", "cmn", "rsb"}
IMM = re.compile(r"#(-?0x[0-9a-fA-F]+|\d+)")
REG = re.compile(r"\br(\d+|1[0-2])\b")
LABEL = re.compile(r"\.L\w+")
HINTS = {
    "hanya-register": "wall regalloc: instruksi identik, hanya nomor register "
                      "berbeda. Coba urutan deklarasi var, lalu parkir.",
    "zero-reload": "nol dimuat >1x: pakai satu variabel `u8 zero = 0;` untuk "
                   "semua store (pola POLA-DIFF §9.4).",
    "sign/width": "lebar/tanda akses beda: s32 untuk ldrsh, u8/u16 untuk "
                  "ldrb/ldrh; lihat POLA-DIFF §7.1 dan width_mismatch.py.",
    "cabang": "kondisi cabang terbalik (beq/bne): tulis `if (x == 0) return A; "
              "return B;` dengan A/B sesuai ref (POLA-DIFF §7.2).",
    "copy": "ada/tak ada `add rX, rY, #0` (salinan argumen atau pointer lokal): "
            "sesuaikan pemakaian variabel lokal (POLA-DIFF §9.3).",
    "instruksi": "beda instruksi umum: baca diff di atas, cek lebar akses, "
                 "urutan store, dan rantai pointer.",
}


def load_state():
    st = {}
    for p in STATE.glob("*.json"):
        st.update(json.load(open(p)))
    return st


def _norm_op(op):
    """Samakan mnemonik agbcc (`adds`) dan gas (`adds`), plus alias kondisi."""
    if op in ("b", "bl", "bx", "blx", "push", "pop"):
        return op
    if op in S_BASE:
        return op
    if op.endswith("s") and op[:-1] in S_BASE:
        return op[:-1]
    if op.startswith("b") and op[1:] in COND_ALIAS:
        return "b" + COND_ALIAS[op[1:]]
    return op


def norm(line):
    line = line.split("@")[0].strip().rstrip(",")
    if not line:
        return ""
    parts = line.split(None, 1)
    op = _norm_op(parts[0])
    rest = parts[1] if len(parts) > 1 else ""
    rest = LABEL.sub("*", rest)
    m_inplace = re.match(r"(r\d+|sp|lr), (r\d+|sp|lr), (.+)$", rest)
    if m_inplace and m_inplace.group(1) == m_inplace.group(2):
        rest = m_inplace.group(1) + ", " + m_inplace.group(3)
    rest = IMM.sub(lambda m: "#0x%X" % (int(m.group(1), 0) & 0xFFFFFFFF), rest)
    rest = re.sub(r"\[(\w+)(?:, )?(.*?)\]", lambda m: "[%s]" % m.group(1) if not m.group(2)
                  else "[%s, %s]" % (m.group(1), m.group(2)), rest)
    return (op + (" " + rest if rest else "")).strip()


def norm_list(lines):
    out = []
    for raw in lines:
        s = raw.strip()
        if not s or s.startswith(".") or s.endswith(":"):
            continue
        n = norm(s)
        if n:
            out.append(n)
    return out


def ref_lines(fn, module):
    p = ASM / module
    if not p.exists():
        return []
    t = p.read_text()
    i = t.find(f"thumb_func_start {fn}\n")
    if i < 0:
        return []
    body = t[i:].split("thumb_func_start")[1].split("thumb_func_end")[0]
    lines = body.splitlines()[1:]
    return norm_list([l for l in lines if not l.strip().startswith(fn)])


def produced_lines(fn):
    d = LOGS / f"judge_{fn}"
    if not d.exists():
        return []
    cands = sorted(d.glob("*/func.s"), key=lambda p: p.stat().st_mtime)
    if not cands:
        return []
    body = cands[-1].read_text().splitlines()
    return norm_list([l for l in body if not l.strip().startswith(".")])


def mask(line):
    return REG.sub("R", line)


def classify(ref, got):
    if ref == got:
        return "identik"
    if [mask(r) for r in ref] == [mask(g) for g in got]:
        return "hanya-register"
    sm = difflib.SequenceMatcher(a=ref, b=got, autojunk=False)
    inserted, deleted, pairs = [], [], []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "insert":
            inserted.extend(got[j1:j2])
        elif tag == "delete":
            deleted.extend(ref[i1:i2])
        elif tag == "replace":
            pairs.extend(zip(ref[i1:i2], got[j1:j2]))
    def is_zero(x):
        return x.startswith("mov ") and "#0x0" in x

    def is_copy(x):
        return re.match(r"add (r\d+|sp|lr), (r\d+|sp|lr), #0x0$", x) is not None

    ref_side = deleted + [a for a, _ in pairs]
    got_side = inserted + [b for _, b in pairs]
    # nol: ref memuat 1x, draf 2x (atau sebaliknya) -> pakai variabel zero
    if (any(is_zero(x) for x in got_side)
            and sum(1 for x in got_side if is_zero(x)) > sum(1 for x in ref_side if is_zero(x))):
        return "zero-reload"
    # salinan `add rX, rY, #0` ada di satu sisi saja
    if (any(is_copy(x) for x in ref_side) != any(is_copy(x) for x in got_side)):
        return "copy"
    for a, b in pairs:
        if (a.split()[0], b.split()[0]) in (("ldrh", "ldrsh"), ("ldrsh", "ldrh"),
                                            ("ldrb", "ldrsb"), ("ldrsb", "ldrb"),
                                            ("ldr", "ldrh"), ("ldrh", "ldr"),
                                            ("ldr", "ldrb"), ("ldrb", "ldr"),
                                            ("str", "strh"), ("strh", "str"),
                                            ("str", "strb"), ("strb", "str")):
            return "sign/width"
    for a, b in pairs:
        if a.split()[0].startswith("b") and b.split()[0].startswith("b"):
            return "cabang"
    return "instruksi"


def cmd_diff(a):
    st = load_state()
    if a.func not in st:
        print(f"tidak ada di state: {a.func}")
        return 2
    v = st[a.func]
    ref = ref_lines(a.func, v.get("module", ""))
    got = produced_lines(a.func)
    if not ref or not got:
        print(f"data kurang: ref={len(ref)} got={len(got)} instruksi "
              f"(judge log: {LOGS / ('judge_' + a.func)})")
        return 2
    kind = classify(ref, got)
    print(f"{a.func} ({v.get('module')}) status={v.get('status')} "
          f"ref={v.get('ref_len', 0)}B | instruksi ref={len(ref)} got={len(got)}")
    print(f"klasifikasi: {kind}")
    if kind in HINTS:
        print(f"petunjuk   : {HINTS[kind]}")
    sm = difflib.SequenceMatcher(a=ref, b=got, autojunk=False)
    shown = 0
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal":
            continue
        if shown >= a.max_lines:
            print("  ... (dipotong, pakai --max-lines)")
            break
        for x in ref[i1:i2]:
            print(f"  - ref  : {x}"); shown += 1
        for x in got[j1:j2]:
            print(f"  + draf : {x}"); shown += 1
    return 0


def cmd_queue(a):
    st = load_state()
    rows = []
    for fn, v in st.items():
        if v.get("status") != "failed":
            continue
        note = v.get("note", "")
        m = re.search(r"len (\d+) vs ref (\d+)", note)
        if not m:
            continue
        if abs(int(m.group(1)) - int(m.group(2))) > a.max_delta:
            continue
        ref = ref_lines(fn, v.get("module", ""))
        got = produced_lines(fn)
        if not ref or not got:
            continue
        kind = classify(ref, got)
        sm = difflib.SequenceMatcher(a=ref, b=got, autojunk=False)
        ops = sum(max(i2 - i1, j2 - j1) for tag, i1, i2, j1, j2
                  in sm.get_opcodes() if tag != "equal")
        rows.append({"func": fn, "module": v.get("module"), "kind": kind,
                     "ops": ops, "ref_len": v.get("ref_len", 0),
                     "note": note.replace("\n", " ")[:80]})
    rows.sort(key=lambda r: (r["kind"] in ("identik", "hanya-register"), r["ops"], r["ref_len"]))
    if a.json:
        print(json.dumps(rows[:a.limit], indent=1))
        return 0
    print(f"kandidat layak: {len(rows)} (dari failed |len-ref| <= {a.max_delta})")
    for r in rows[:a.limit]:
        print(f"  {r['kind']:14s} ops={r['ops']:2d} ref={r['ref_len']:4d} "
              f"{r['module']}/{r['func']}")
    return 0


def _fomt_cmd():
    return ["fomt"]


def cmd_attempt(a):
    st = load_state()
    fn = a.func
    if fn not in st:
        print(f"tidak ada di state: {fn}")
        return 2
    v = st[fn]
    ATTEMPTS.mkdir(parents=True, exist_ok=True)
    hist_p = ATTEMPTS / f"{fn}.json"
    hist = json.load(open(hist_p)) if hist_p.exists() else {"attempts": []}
    n = len(hist["attempts"])
    if n >= a.cap and not a.force:
        print(f"{fn}: sudah {n} percobaan (cap {a.cap}). Pakai --force untuk lanjut.")
        return 3
    draft = DRAFTS / f"{fn}.c"
    if a.draft:
        src = pathlib.Path(a.draft).read_text()
        draft.write_text(src if src.endswith("\n") else src + "\n")
        print(f"draf ditulis: {draft} ({len(src.splitlines())} baris)")
    sys.path.insert(0, str(ROOT / "decomp"))
    import run  # noqa: E402  (tool resmi repo)

    def m(s):
        s[fn].update(status="failed", judged_mtime=0, draft_src="manual")
    run.update(m, names=[fn])
    if a.dry:
        print(f"[dry] akan menjalankan: {' '.join(_fomt_cmd() + [fn])}")
        return 0
    t0 = time.time()
    r = subprocess.run(_fomt_cmd() + [fn], capture_output=True, text=True)
    out = (r.stdout or "") + (r.stderr or "")
    ok = re.search(rf"{re.escape(fn)}: MATCH", out) is not None
    line = ""
    for l in out.splitlines():
        if f"{fn}:" in l and ("MATCH" in l or "DIFF" in l):
            line = l.strip()
            break
    res = {"at": time.strftime("%Y-%m-%d %H:%M:%S"), "verdict": "MATCH" if ok else "DIFF",
           "detail": line[:300], "secs": round(time.time() - t0, 1)}
    hist["attempts"].append(res)
    json.dump(hist, open(hist_p, "w"), indent=1)
    print(f"percobaan {n + 1}/{a.cap}: {res['verdict']} ({res['secs']}s)")
    if line:
        print("  " + line[:200])
    if ok and a.migrate:
        mod = v.get("module")
        mg = subprocess.run([sys.executable, str(ROOT / "decomp" / "migrate.py"),
                             "--module", mod, "--func", fn],
                            capture_output=True, text=True)
        print(f"migrate exit:{mg.returncode}")
        tail = [l for l in (mg.stdout + mg.stderr).splitlines() if l.strip()][-2:]
        for l in tail:
            print("  " + l.strip()[:200])
        if mg.returncode == 0:
            cp = subprocess.run(["make", "compare"], capture_output=True, text=True,
                                cwd=ROOT)
            log = (cp.stdout + cp.stderr).strip().splitlines()
            print(f"compare exit:{cp.returncode} | {log[-1] if log else ''}")
    return 0 if ok else 1


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("diff", help="diff terklasifikasi satu fungsi")
    d.add_argument("func")
    d.add_argument("--max-lines", type=int, default=16)
    d.set_defaults(fn=cmd_diff)
    q = sub.add_parser("queue", help="antrean kandidat berperingkat")
    q.add_argument("--limit", type=int, default=12)
    q.add_argument("--max-delta", type=int, default=4)
    q.add_argument("--json", action="store_true")
    q.set_defaults(fn=cmd_queue)
    at = sub.add_parser("attempt", help="tulis draf + judge (+migrasi)")
    at.add_argument("func")
    at.add_argument("--draft", help="file draf yang ditulis ke decomp/drafts/<func>.c")
    at.add_argument("--migrate", action="store_true", help="migrasi + make compare bila MATCH")
    at.add_argument("--cap", type=int, default=5)
    at.add_argument("--force", action="store_true")
    at.add_argument("--dry", action="store_true")
    at.set_defaults(fn=cmd_attempt)
    a = ap.parse_args(argv)
    return a.fn(a)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
