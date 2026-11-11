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
                     catat percobaan (cap 5), rekam hasilnya ke basis
                     pengetahuan, dan bila MATCH opsional langsung migrasi +
                     `make compare`.
  learn              bangun ulang basis pengetahuan dari seluruh judge log +
                     state (pola -> berapa kali dicoba, berapa MATCH).
  hint <func>        resep yang historis MATCH untuk pola fungsi itu,
                     diurutkan dari yang paling sering berhasil.

Belajar: setiap judge menambah bukti ke decomp/engine/knowledge.json
(di-commit, jadi prior ikut antar sesi/agent). `queue` memeringkat kandidat
berdasarkan prior itu, bukan urutan abjad/nama.

Cepat: klasifikasi di-cache di decomp/engine/cache/<func>.json dan hanya
dihitung ulang bila asm ref atau hasil judge berubah.

Contoh:
  python3 tools/scripts/decomp_engine.py queue --limit 12 --kind copy
  python3 tools/scripts/decomp_engine.py learn
  python3 tools/scripts/decomp_engine.py hint func_080167DC
  python3 tools/scripts/decomp_engine.py diff func_08024C74
  python3 tools/scripts/decomp_engine.py attempt func_08024C74 --draft /tmp/d.c --migrate

Semua perintah kecuali `attempt` bersifat read-only terhadap state decomp.
Riwayat percobaan disimpan di decomp/engine/attempts/<func>.json (tidak
di-commit); basis pengetahuan dan cache juga di decomp/engine/.
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
KB = ROOT / "decomp" / "engine" / "knowledge.json"
CACHE = ROOT / "decomp" / "engine" / "cache"

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
    "width-offset": "akses sempit di offset besar: `add #imm` (>31) lalu "
                    "ldrb/ldrh bukan salinan argumen — samakan lebar field "
                    "(POLA-DIFF §10.3, width_mismatch.py).",
    "ptr-scale": "offset pada pointer bertipe menskala sizeof: ganti `p + off` "
                 "dengan `(u8 *)p + off` (POLA-DIFF §11.2).",
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
    # `stmia r1!, {...}` dan `stm r1!, {...}` adalah instruksi yang sama
    if op in ("stmia", "ldmia"):
        return op[:-2]
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
    # `ldr rX, .Lpool+0x4`: offset ke literal pool bergantung urutan pool di
    # hasil kompilasi, bukan perbedaan kode — jangan dihitung sebagai diff.
    rest = re.sub(r"\*[+-]0x[0-9A-Fa-f]+", "*", rest)
    # target cabang numerik (`bls #0x46`) = label relatif yang sudah dirakit;
    # nomornya bergantung ukuran instruksi di sekitarnya, bukan beda kode.
    if re.match(r"^#0x[0-9A-F]+$", rest):
        rest = "*"
    m_inplace = re.match(r"(r\d+|sp|lr), (r\d+|sp|lr), (.+)$", rest)
    if m_inplace and m_inplace.group(1) == m_inplace.group(2):
        rest = m_inplace.group(1) + ", " + m_inplace.group(3)
    rest = IMM.sub(lambda m: "#0x%X" % (int(m.group(1), 0) & 0xFFFFFFFF), rest)
    # `negs rX, rY` (agbcc) == `rsbs rX, rY, #0x0` (gas repo): neg adalah alias
    # RSB dengan #0. Tanpa ini, fungsi yang sudah MATCH tetap terlihat 1 diff
    # (pembukti: func_08008020). Bentuk in-place ikut diciutkan seperti rsb.
    if op == "neg":
        m_neg_rsb = re.match(r"^(r\d+|sp|lr), (r\d+|sp|lr)$", rest)
        if m_neg_rsb:
            d, s = m_neg_rsb.group(1), m_neg_rsb.group(2)
            op = "rsb"
            rest = d + ", #0x0" if d == s else d + ", " + s + ", #0x0"
    # `add rX, sp, #0xFFFFFFF4` == `sub rX, sp, #0xC`: agbcc mencetak immediate
    # negatif sebagai add, gas di repo mencetaknya sebagai sub. Instruksinya
    # sama persis, jadi samakan bentuk kanoniknya (kalau tidak, setiap fungsi
    # ber-stack frame terlihat "beda 2 instruksi").
    if op in ("add", "sub"):
        m_neg = re.match(r"^(.*?)(#0x[89A-F][0-9A-F]{7})$", rest)
        if m_neg:
            v = (0x100000000 - int(m_neg.group(2)[1:], 16)) & 0xFFFFFFFF
            rest = m_neg.group(1) + "#0x%X" % v
            op = "sub" if op == "add" else "add"
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
    # akses sempit di offset > 31 wajib lewat `add` (ldrb/ldrh imm5 maks 31):
    # gejala ini sering salah dibaca sebagai "salinan" (POLA-DIFF §10.3)
    narrow = {"ldrb", "ldrh", "ldrsb", "ldrsh", "strb", "strh"}

    def big_off_then_narrow(seq):
        for i, x in enumerate(seq[:-1]):
            m = re.match(r"add (r\w+|sp|lr), #0x([0-9A-F]+)$", x)
            if m and int(m.group(2), 16) > 31 and seq[i + 1].split()[0] in narrow:
                return True
        return False

    if big_off_then_narrow(ref_side) != big_off_then_narrow(got_side):
        return "width-offset"
    # `mov #c; lsl #k; add` = offset pointer bertipe yang diskalakan sizeof
    def scaled(seq):
        txt = " | ".join(seq)
        return re.search(r"mov r\w+, #0x[0-9A-F]+ \| lsl r\w+, #", txt) is not None

    if scaled(got_side) and not scaled(ref_side):
        return "ptr-scale"
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


def kb_load():
    if KB.exists():
        try:
            return json.load(open(KB))
        except Exception:
            pass
    return {"version": 1, "kinds": {}, "recipes": {}, "updated": ""}


def kb_save(kb):
    KB.parent.mkdir(parents=True, exist_ok=True)
    json.dump(kb, open(KB, "w"), indent=1, sort_keys=True)


def kb_prior(kb, kind):
    """P(MATCH | pola): rata-rata percobaan nyata + 3 pseudo-count ke laju dasar.

    Pseudo-count mencegah pola yang baru dicoba 1x melompat ke 0.0/1.0 dan
    membuat peringkat antrean liar; laju dasar sendiri dihitung `learn` dari
    seluruh riwayat percobaan.
    """
    k = kb.get("kinds", {}).get(kind) or {}
    n = int(k.get("n", 0))
    m = int(k.get("match", 0))
    base = float(kb.get("base", 0.30))
    k_pseudo = 3.0
    return (m + k_pseudo * base) / (n + k_pseudo), n


def kb_record(kb, kind, ops, verdict, fn=None, recipe=None):
    ks = kb.setdefault("kinds", {}).setdefault(kind, {"n": 0, "match": 0, "ops": []})
    ks["n"] += 1
    if verdict == "MATCH":
        ks["match"] += 1
    ks.setdefault("ops", []).append(int(ops or 0))
    ks["ops"] = ks["ops"][-200:]
    if verdict == "MATCH" and recipe:
        rs = kb.setdefault("recipes", {}).setdefault(kind, [])
        for r in rs:
            if r["text"] == recipe:
                r["hits"] = int(r.get("hits", 0)) + 1
                if fn:
                    r["examples"] = (r.get("examples", []) + [fn])[-5:]
                break
        else:
            rs.append({"text": recipe, "hits": 1, "misses": 0,
                       "examples": [fn] if fn else []})
    kb["updated"] = time.strftime("%Y-%m-%d %H:%M")
    return kb


def _cache_sig(fn, module):
    p = ASM / module
    parts = [str(p.stat().st_mtime) if p.exists() else "-"]
    d = LOGS / f"judge_{fn}"
    cands = sorted(d.glob("*/func.s"), key=lambda q: q.stat().st_mtime) if d.exists() else []
    parts.append(str(cands[-1].stat().st_mtime) if cands else "-")
    return "|".join(parts)


def _cache_put(fn, sig, kind, ops):
    CACHE.mkdir(parents=True, exist_ok=True)
    json.dump({"sig": sig, "kind": kind, "ops": ops}, open(CACHE / f"{fn}.json", "w"))


def _drop_cache(fn):
    p = CACHE / f"{fn}.json"
    if p.exists():
        p.unlink()


def _features(fn, v):
    """(pola, jumlah op diff); memakai cache selama asm ref/hasil judge belum berubah."""
    module = v.get("module", "")
    sig = _cache_sig(fn, module)
    p = CACHE / f"{fn}.json"
    if p.exists():
        try:
            c = json.load(open(p))
            if c.get("sig") == sig:
                return c.get("kind"), c.get("ops")
        except Exception:
            pass
    ref = ref_lines(fn, module)
    got = produced_lines(fn)
    if not ref or not got:
        return None, None
    kind = classify(ref, got)
    sm = difflib.SequenceMatcher(a=ref, b=got, autojunk=False)
    ops = sum(max(i2 - i1, j2 - j1) for tag, i1, i2, j1, j2
              in sm.get_opcodes() if tag != "equal")
    _cache_put(fn, sig, kind, ops)
    return kind, ops


def cmd_learn(a):
    """Bangun ulang basis pengetahuan dari RIWAYAT PERCOBAAN (bukan status).

    Status saat ini tidak dipakai sebagai label: fungsi `promoted` otomatis
    berasm identik (label melingkar), dan draf `failed` bisa berasal dari judge
    lama. Label yang sah hanya verdict yang tercatat saat judge berlangsung.
    """
    st = load_state()
    kb = {"version": 1, "kinds": {}, "recipes": {}, "updated": ""}
    tries = 0
    wins = 0
    for p in sorted(ATTEMPTS.glob("*.json")):
        fn = p.stem
        v = st.get(fn) or {}
        kind, ops = _features(fn, v)
        if kind is None:
            continue
        hist = json.load(open(p)).get("attempts", [])
        first = hist[0] if hist else {}
        first_kind = first.get("kind") or kind
        first_ops = first.get("ops") if first.get("ops") is not None else ops
        for it in hist:
            verdict = it.get("verdict", "DIFF")
            # Percobaan MATCH = kandidat selesai: label yang dipakai adalah pola
            # saat kandidat diambil (percobaan pertama), bukan residual percobaan
            # terakhir — kalau tidak, prior pola pemicu tidak pernah naik.
            if verdict == "MATCH":
                k_it, o_it = first_kind, first_ops
                rec = HINTS.get(first_kind)
            else:
                k_it = it.get("kind") or kind
                o_it = it.get("ops") if it.get("ops") is not None else ops
                rec = None
            kb_record(kb, k_it, o_it, verdict, fn, rec)
            tries += 1
            wins += 1 if verdict == "MATCH" else 0
    kb["base"] = round(wins / tries, 3) if tries else 0.30
    kb_save(kb)
    if a.json:
        print(json.dumps(kb, indent=1))
        return 0
    print(f"belajar dari {tries} percobaan (laju dasar {kb['base']:.2f})"
          + (" — belum ada riwayat, prior = laju dasar" if not tries else ""))
    print(f"  {'pola':14s} {'n':>4s} {'match':>6s} {'rate':>6s} {'ops/rata':>9s}")
    for kind, k in sorted(kb["kinds"].items(), key=lambda kv: -int(kv[1]["n"])):
        p, _ = kb_prior(kb, kind)
        ops = k.get("ops") or [0]
        print(f"  {kind:14s} {k['n']:4d} {k['match']:6d} {p:6.2f} {sum(ops) / len(ops):9.1f}")
    return 0


def cmd_hint(a):
    st = load_state()
    kb = kb_load()
    if a.func not in st:
        print(f"tidak ada di state: {a.func}")
        return 2
    kind, ops = _features(a.func, st[a.func])
    if kind is None:
        print(f"data kurang untuk {a.func} (belum ada judge log?)")
        return 2
    p, n = kb_prior(kb, kind)
    print(f"{a.func}: pola={kind} ops={ops} p(MATCH)={p:.2f} (n={n})")
    if kind in HINTS:
        print(f"  dasar: {HINTS[kind]}")
    recs = sorted(kb.get("recipes", {}).get(kind, []),
                  key=lambda r: -int(r.get("hits", 0)))[:5]
    if recs:
        print("  resep yang pernah MATCH:")
        for r in recs:
            ex = ", ".join(r.get("examples", [])[-3:])
            print(f"    hits={r.get('hits', 0)} {r['text'][:100]}"
                  + (f"  [{ex}]" if ex else ""))
    return 0


def cmd_sectors(a):
    """Laporan per modul (sektor): total, selesai, sisa failed, pola dominan sisa."""
    st = load_state()
    agg = {}
    for fn, v in st.items():
        mod = (v.get("module") or "?").removesuffix(".s")
        s = agg.setdefault(mod, {"total": 0, "done": 0, "failed": 0,
                                 "pending": 0, "kinds": {}})
        s["total"] += 1
        status = v.get("status")
        if status in ("matched", "promoted"):
            s["done"] += 1
        elif status == "failed":
            s["failed"] += 1
            kind, _ = _features(fn, v)
            if kind:
                s["kinds"][kind] = s["kinds"].get(kind, 0) + 1
        else:
            s["pending"] += 1
    rows = []
    for mod, s in agg.items():
        kinds = sorted(s["kinds"].items(), key=lambda kv: -kv[1])
        rows.append({"module": mod, **s, "kind": kinds[0][0] if kinds else "-",
                     "kind_n": kinds[0][1] if kinds else 0,
                     "pct": round(100.0 * s["done"] / max(s["total"], 1), 1)})
    rows.sort(key=lambda r: (r["failed"], -r["total"]))
    if a.json:
        print(json.dumps(rows[:a.limit], indent=1))
        return 0
    print(f"sektor (modul) diurutkan dari sisa failed paling sedikit:")
    print(f"  {'modul':22s} {'total':>5s} {'selesai':>7s} {'sisa':>5s} {'%':>6s}  pola sisa")
    for r in rows[:a.limit]:
        if r["total"] == 0 or (r["failed"] == 0 and r["pending"] == 0):
            continue
        print(f"  {r['module']:22s} {r['total']:5d} {r['done']:7d} {r['failed']:5d} "
              f"{r['pct']:6.1f}  {r['kind']} ({r['kind_n']})")
    tot = sum(r["total"] for r in rows)
    done = sum(r["done"] for r in rows)
    print(f"  TOTAL {tot} fungsi, selesai {done}, sisa failed {sum(r['failed'] for r in rows)},"
          f" pending {sum(r['pending'] for r in rows)}")
    return 0


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
    kb = kb_load()
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
        kind, ops = _features(fn, v)
        if kind is None or (a.kind and kind != a.kind):
            continue
        if a.module and a.module.removesuffix(".s") not in (v.get("module") or ""):
            continue
        prior, n = kb_prior(kb, kind)
        ref_len = v.get("ref_len", 0)
        score = prior / (1 + ops) * (1 + 40.0 / max(ref_len, 40))
        rows.append({"func": fn, "module": v.get("module"), "kind": kind,
                     "ops": ops, "ref_len": ref_len, "prior": round(prior, 2),
                     "n": n, "score": round(score, 3),
                     "note": note.replace("\n", " ")[:80]})
    rows.sort(key=lambda r: (r["kind"] in ("identik", "hanya-register"),
                             -r["score"], r["ops"]))
    if a.json:
        print(json.dumps(rows[:a.limit], indent=1))
        return 0
    print(f"kandidat layak: {len(rows)} (dari failed |len-ref| <= {a.max_delta}"
          + (f", kind={a.kind}" if a.kind else "") + ")")
    for r in rows[:a.limit]:
        print(f"  {r['kind']:14s} p={r['prior']:.2f} n={r['n']:2d} ops={r['ops']:2d} "
              f"ref={r['ref_len']:4d} {r['module']}/{r['func']}")
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
    kind, ops = _features(fn, v)
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
    # Label pola diambil dari diff SETELAH judge: klasifikasi sebelum judge
    # masih menggambarkan percobaan sebelumnya, jadi verdict ini bisa menempel
    # ke pola yang salah (kasus func_08008020: MATCH tercatat `instruksi`
    # padahal kandidatnya `width-offset`). Pengecualian MATCH: diff-nya sudah
    # hilang sehingga klasifikasi otomatis `identik` (= wall), jadi label yang
    # dipakai adalah pola yang dikerjakan saat percobaan dimulai.
    _drop_cache(fn)
    kind_now, ops_now = _features(fn, v)
    if ok:
        # MATCH: kandidat selesai — pola yang dipakai adalah pola saat kandidat
        # diambil (percobaan pertama), bukan residual percobaan terakhir.
        first = hist["attempts"][0] if hist.get("attempts") else None
        if first and first.get("kind"):
            kind, ops = first["kind"], first.get("ops", ops)
    elif kind_now:
        kind, ops = kind_now, ops_now
    res = {"at": time.strftime("%Y-%m-%d %H:%M:%S"), "kind": kind,
           "ops": ops, "verdict": "MATCH" if ok else "DIFF",
           "detail": line[:300], "secs": round(time.time() - t0, 1)}
    hist["attempts"].append(res)
    json.dump(hist, open(hist_p, "w"), indent=1)
    if kind:
        kb = kb_record(kb_load(), kind, ops, res["verdict"], fn,
                       HINTS.get(kind) if res["verdict"] == "MATCH" else None)
        kb_save(kb)
        _drop_cache(fn)
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
    q.add_argument("--kind", help="hanya satu pola (copy, zero-reload, ...)")
    q.add_argument("--module", help="hanya satu modul/ sektor, mis. code_entities.s")
    q.add_argument("--json", action="store_true")
    q.set_defaults(fn=cmd_queue)
    ln = sub.add_parser("learn", help="bangun ulang basis pengetahuan pola")
    ln.add_argument("--json", action="store_true")
    ln.set_defaults(fn=cmd_learn)
    sc = sub.add_parser("sectors", help="progres per modul + pola sisa")
    sc.add_argument("--limit", type=int, default=16)
    sc.add_argument("--json", action="store_true")
    sc.set_defaults(fn=cmd_sectors)
    h = sub.add_parser("hint", help="resep historis untuk pola satu fungsi")
    h.add_argument("func")
    h.set_defaults(fn=cmd_hint)
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
