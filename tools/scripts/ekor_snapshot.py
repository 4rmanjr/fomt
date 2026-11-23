#!/usr/bin/env python3
"""ekor_snapshot.py — regenerasi tabel `docs/decomp/EKOR-BACKLOG.md`.

Sumber angka (tanpa hitung manual):

- `tail_chain.py --module <stem>.s --json` — urutan ekor, NEXT/blocker, blob
  multi-fungsi, jumlah fungsi yang masih di asm.
- `decomp/state/modules/<stem>.json` — status, `ref_len`, dan `note`
  (kolom "residual terakhir" diringkas dari note, bukan dikarang).
- `migrate.is_split_module()` — pemisah modul tail-only vs split.

Bagian naratif (penjelasan per modul) TIDAK dihasilkan: semua teks setelah
penanda `<!-- manual:catatan-per-modul -->` disalin apa adanya dari dokumen
lama, jadi regenerasi tidak menghapus catatan tangan.

Pemakaian:

  python3 tools/scripts/ekor_snapshot.py            # tulis dokumen
  python3 tools/scripts/ekor_snapshot.py --stdout   # cetak saja
  python3 tools/scripts/ekor_snapshot.py --check    # exit 1 bila dokumen basi

Ringkasan "residual terakhir" diambil dari kalimat pertama note state setelah
prefix `[...]`. Ini heuristik: untuk status `promoted` yang note-nya diawali
`[MATCH`, sel ditulis "MATCH, menunggu giliran cabut"; tanpa note -> "-".

Pekecualian penting: **fungsi ujung** memakai verdict migrate terakhir dari
`decomp/state/migrate_last.json` (ditulis `migrate.record_verdict()`), bukan
note lama. Note ujung yang masih menyebut `penerus`/`MULTI-FUNGSI`/`blob`
terbukti basi (lihat MIGRATE 45-47), jadi klaim itu diganti verdict dan
dilaporkan sebagai peringatan di dokumen + stderr.
"""
import argparse
import datetime
import json
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
TOOLS = REPO / "tools" / "scripts"
DOC = REPO / "docs" / "decomp" / "EKOR-BACKLOG.md"
MANUAL_MARK = "<!-- manual:catatan-per-modul -->"
MANUAL_HEAD = "## Catatan khusus per modul"
MARK = re.compile(r"thumb_func_start\s+(\w+)")
MAX_RESIDUAL = 64


def shard(stem):
    p = REPO / "decomp" / "state" / "modules" / f"{stem}.json"
    if not p.exists():
        return {}
    try:
        return json.loads(p.read_text())
    except json.JSONDecodeError:
        return {}


def is_tail_only(stem):
    sys.path.insert(0, str(REPO / "decomp"))
    try:
        import migrate
    except Exception:
        return True
    try:
        return not migrate.is_split_module(stem)
    except Exception:
        return True


def chain(stem):
    out = subprocess.run(
        [sys.executable, str(TOOLS / "tail_chain.py"),
         "--module", f"{stem}.s", "--json"],
        capture_output=True, text=True)
    if out.returncode != 0 or not out.stdout.strip():
        return None
    try:
        return json.loads(out.stdout)
    except json.JSONDecodeError:
        return None


def _clip(text):
    text = re.sub(r"\s+", " ", text).strip()
    if len(text) > MAX_RESIDUAL:
        text = text[:MAX_RESIDUAL - 1].rstrip() + "…"
    return text.replace("|", "/")


def condense(note, status):
    """Ringkas note state jadi satu sel tabel.

    Note shard sering memuat log compiler utuh (path + beberapa warning), jadi
    yang diambil: flag MATCH untuk `promoted`, pesan `warning`/`error` pertama
    untuk kegagalan kompilasi, kalimat pertama untuk catatan parkir, dan
    potongan sebelum bracket ringkasan judge (`[3missing,…]`) selain itu.
    """
    if not note:
        return "-"
    text = re.sub(r"\s+", " ", note).strip()
    if status == "promoted":
        return "MATCH, menunggu giliran cabut" if "MATCH" in text[:24].upper() else "-"
    err = re.search(r":\d+:\s*(?:warning|error):\s*(.+?)(?=\s+/\S+\.c:\d+|\s*/\S*/\S+|$)",
                    text)
    if err:
        return _clip("kompilasi: " + err.group(1))
    text = re.sub(r"^\[[^\]]*\]\s*", "", text)
    if "parkir" in text.lower():
        return _clip(text.split(". ")[0])
    # log yang tidak berpola `error:`:
    # buang path dan prefix `file.c:NN:` supaya sel tidak berisi direktori
    text = re.sub(r"\S*(?:decomp|logs)\S*", " ", text)
    text = re.sub(r"\S*\.c:\d+:", " ", text)
    text = re.sub(r"\s+", " ", text).strip(" :;,")
    if not text:
        return "-"
    # note yang mengulang pesan yang sama (log compiler tercetak dua kali)
    head = " ".join(text.split(" ")[:6])
    dup = text.find(head, len(head) + 1)
    if dup > 0:
        text = text[:dup].rstrip()
    for sep in (" [", "; ", ". "):
        i = text.find(sep)
        if 0 < i <= MAX_RESIDUAL:
            text = text[:i]
            break
    return _clip(text)


MIGRATE_LAST = REPO / "decomp" / "state" / "migrate_last.json"
STALE_CLAIM = re.compile(r"penerus|multi-fungsi|blob|bukan fungsi terakhir", re.I)


def verdicts():
    """Verdict `migrate.py` terakhir per fungsi (ditulis oleh migrate.record_verdict)."""
    try:
        data = json.loads(MIGRATE_LAST.read_text())
    except (OSError, json.JSONDecodeError):
        return {}
    return data if isinstance(data, dict) else {}


def tail_residual(stem, func, note, status, vd, warn):
    """Sel "residual terakhir" untuk fungsi ujung: pakai verdict migrate, bukan note.

    Note shard pernah basi (menyebut "blob multi-fungsi" dan "28 penerus"
    padahal penghalangnya hanya cast pointer), jadi klaim semacam itu tidak
    dipakai sebagai residual ujung: verdict migrate terakhir yang menang, dan
    note yang bertentangan dilaporkan lewat `warn` (dicetak ke stderr + doc).
    """
    v = vd.get(f"{stem}.s:{func}")
    stale = STALE_CLAIM.search(note or "")
    if not v:
        if stale:
            warn.append(f"`{stem}.s`: note ujung `{func}` memuat klaim lama "
                        f"(\"{_clip(stale.group(0))}\") tanpa catatan migrate; "
                        "jalankan `migrate.py` di ujung itu agar residualnya nyata")
        return condense(note, status) + " (dari note, belum ada catatan migrate)"
    cell = "migrate %s: %s" % (v.get("status") or "?", _clip(v.get("detail") or "-"))
    if stale:
        warn.append(f"`{stem}.s`: note ujung `{func}` memuat klaim lama "
                    f"(\"{_clip(stale.group(0))}\") - diabaikan, dipakai verdict migrate")
        cell += " (note lama diabaikan)"
    return cell


def gate_rows(names, state):
    """Peta gerbang: tiap fungsi non-`promoted` + promoted yang terbuka setelahnya.

    `names` berurutan alamat menaik (urut berkas asm), jadi ekor = elemen
    terakhir. Satu fungsi `failed` di ujung memblokir SEMUA `promoted` di
    atasnya; baris di sini membaca rantai itu apa adanya, bukan tebakan.
    """
    out = []
    run = []
    for i, name in enumerate(reversed(names)):
        st = (state.get(name) or {}).get("status")
        if st == "promoted":
            run.append(name)
            continue
        ln = (state.get(name) or {}).get("ref_len")
        out.append([i, name, ln, []])
        if run:
            # promoted di atas fungsi ini baru terbuka setelah fungsi ini
            # MATCH + dicabut, jadi tempelkan ke gerbang DI BAWAHNYA
            # (baris sebelumnya); kalau belum ada baris, gerbangnya ujung itu
            # sendiri.
            (out[-2] if len(out) >= 2 else out[-1])[3].extend(run)
        run = []
    if run:
        out[-1][3].extend(run)   # promoted paling atas di berkas
    return [tuple(r) for r in out]


def status_chain(info, state):
    nxt = info.get("next")
    if not nxt:
        return "kosong (semua sudah di `src/`)"
    if not info.get("next_ok", True):
        return "buntu: " + (info.get("next_reason") or "blob multi-fungsi")
    note = ((state.get(nxt.get("func")) or {}).get("note") or "").lower()
    if "dinding" in note or note.startswith("wall:"):
        return "terkunci: ujung dinding (lihat note)"
    status = nxt.get("status")
    if status == "promoted":
        return "siap dicabut (`migrate.py` saja, tanpa judge)"
    if status == "matched":
        return "siap promote + cabut"
    return "terbuka, ujung belum MATCH"


def buckets(names, state):
    """S/M/L untuk fungsi yang masih di asm dan punya ref_len."""
    s = m = l = 0
    for name in names:
        n = (state.get(name) or {}).get("ref_len")
        if not isinstance(n, int):
            continue
        if n <= 100:
            s += 1
        elif n <= 300:
            m += 1
        else:
            l += 1
    return s, m, l


def collect(tail_len):
    rows = []
    empty = []
    for p in sorted((REPO / "asm").glob("*.s")):
        stem = p.stem
        if not is_tail_only(stem):
            continue
        info = chain(stem)
        if info is None:
            continue
        if info["asm_count"] == 0:
            empty.append(stem)
            continue
        state = shard(stem)
        names = MARK.findall(p.read_text(errors="replace"))
        counts = {"promoted": 0, "matched": 0, "failed": 0, "pending": 0,
                  "lain": 0}
        for name in names:
            st = (state.get(name) or {}).get("status")
            counts[st if st in counts else "lain"] += 1
        rows.append({
            "stem": stem,
            "info": info,
            "state": state,
            "names": names,
            "counts": counts,
            "buckets": buckets(names, state),
            "no_state": sum(1 for n in names if not state.get(n)),
        })
    rows.sort(key=lambda r: -r["info"]["asm_count"])
    return rows, sorted(empty)


# Baris tanggal hanya menandai kapan snapshot diambil. Selama ikut dibandingkan,
# dokumen jadi BASI semata karena pergantian hari walau data tidak berubah,
# jadi perbandingan (`--check` dan gate `check_docs.py`) mengabaikannya.
DATE_LINE = re.compile(r"^Snapshot \*\*\d{4}-\d{2}-\d{2}\*\*", re.M)
DATE_SLOT = "Snapshot **<tanggal>**"


def tanpa_tanggal(text):
    """-> teks dengan baris Snapshot diturunkan ke placeholder."""
    return DATE_LINE.sub(DATE_SLOT, text, count=1)


def is_stale(existing, text):
    """True bila isi dokumen berbeda dari hasil generate, tanggal diabaikan."""
    return tanpa_tanggal(existing) != tanpa_tanggal(text)


def tanggal_input(stems):
    """-> ISO date mtime input terbaru (`asm/<stem>.s` + shard state).

    Diturunkan dari input, bukan jam dinding: regenerate tanpa perubahan data
    menghasilkan dokumen yang sama. mtime bisa bergeser saat clone/checkout —
    itu sebabnya baris ini tidak ikut dibandingkan.
    """
    newest = 0.0
    for stem in stems:
        for p in (REPO / "asm" / f"{stem}.s",
                  REPO / "decomp" / "state" / "modules" / f"{stem}.json"):
            try:
                newest = max(newest, p.stat().st_mtime)
            except OSError:
                pass
    if not newest:
        return None
    return datetime.date.fromtimestamp(newest).isoformat()


def build(tail_len, manual):
    rows, empty = collect(tail_len)
    today = (tanggal_input([r["stem"] for r in rows] + empty)
             or datetime.date.today().isoformat())
    out = []
    add = out.append
    warn = []
    add("# Backlog blocker rantai ekor (modul tail-only)")
    add("")
    add(f"Snapshot **{today}** — **dihasilkan otomatis**, jangan disunting tangan: "
        "`python3 tools/scripts/ekor_snapshot.py` (tabel + angka) lalu commit. "
        "Angka berubah setiap ada MATCH/migrasi; yang dijaga hanya strukturnya.")
    add("")
    add("Modul tail-only = modul yang tidak dipecah per-section oleh splitter "
        "(`is_split_module() == false`), sehingga satu-satunya cara memindahkan "
        "sebuah fungsi ke `src/` adalah mencabut **seluruh ekor** dari fungsi itu "
        "sampai ujung berkas. Karena itu urutan kerja selalu dari **ujung** berkas "
        "ke atas, dan satu fungsi gagal di ujung memblokir semua `promoted` di atasnya.")
    add("")
    add("## Cara memperbarui")
    add("")
    add("```sh")
    add("python3 tools/scripts/ekor_snapshot.py           # tulis dokumen ini")
    add("python3 tools/scripts/ekor_snapshot.py --check   # gate: exit 1 bila basi")
    add("```")
    add("")
    add("Detail per modul tetap bisa dilihat langsung:")
    add("")
    add("```sh")
    add("python3 tools/scripts/tail_chain.py --module <stem>.s [--json]")
    add("```")
    add("")
    add("## Ringkasan")
    add("")
    add("| modul | tersisa di asm | promoted terkunci | blocker terakhir | status rantai |")
    add("|---|---|---|---|---|")
    for r in rows:
        info = r["info"]
        nxt = info.get("next") or {}
        blocker = ("`%s` (%sB, `%s`)" % (nxt.get("func"), nxt.get("ref_len"),
                                        nxt.get("status")))
        add(f"| `{r['stem']}.s` | {info['asm_count']} | "
            f"{r['counts']['promoted']} | {blocker} | {status_chain(info, r['state'])} |")
    add("")
    if empty:
        add("Modul tail-only lain sudah kosong di `asm/` (tidak punya blocker ekor lagi): "
            + ", ".join(f"`{e}`" for e in empty) + ".")
        add("")
    for r in rows:
        info, state = r["info"], r["state"]
        c = r["counts"]
        parts = [f"{c['promoted']} `promoted`", f"{c['failed']} `failed`"]
        if c["pending"]:
            parts.append(f"{c['pending']} `pending`")
        if c["matched"]:
            parts.append(f"{c['matched']} `matched`")
        extra = ""
        if r["no_state"]:
            extra = f" {r['no_state']} label di asm tanpa entri state."
        tail = info.get("tail") or []
        rest = info["asm_count"] - len(tail)
        add(f"## `{r['stem']}.s`")
        add("")
        add(f"Sisa **{info['asm_count']}** fungsi ({', '.join(parts)})."
            f"{extra} Tabel = {len(tail)} entri terakhir; {rest} fungsi lain di "
            "bawahnya juga belum di `src/`.")
        add("")
        add("| idx | fungsi | ukuran | status | residual terakhir |")
        add("|---|---|---|---|---|")
        tail_fn = (info.get("next") or {}).get("func")
        vd = verdicts()
        for row in tail:
            fname = row.get("func")
            n = (state.get(fname) or {})
            ukuran = f"{row.get('ref_len')}B" if row.get("ref_len") else "-"
            st = row.get("status") or "-"
            if row.get("byte_tail"):
                st += " (byte ekor)"
            if row.get("multi_func"):
                if fname == tail_fn and vd.get(f"{r['stem']}.s:{fname}"):
                    st += " (label lama: cek verdict migrate)"
                else:
                    st += f" (MULTI-FUNGSI {row.get('prologues')} prolog)"
            if fname == tail_fn:
                residual = tail_residual(r["stem"], fname, n.get("note"),
                                        row.get("status"), vd, warn)
            else:
                residual = condense(n.get("note"), row.get("status"))
            add(f"| {row.get('index')} | `{fname}` | {ukuran} | {st} | {residual} |")
        add("")
        gates = gate_rows(r["names"], state)
        if gates:
            add("Peta gerbang: urutan kerja wajib dari ujung, jadi tiap baris "
                "menyebut satu fungsi non-`promoted` dan `promoted` yang baru "
                "bisa dicabut setelah fungsi itu MATCH + dicabut.")
            add("")
            add("| dari ujung | fungsi gerbang | ukuran | membuka |")
            add("|---|---|---|---|")
            for far, fname, ln, opens in gates:
                buka = ", ".join(f"`{o}`" for o in opens) if opens else "-"
                add(f"| {far} | `{fname}` | {ln if ln else '-'}B | {buka} |")
            add("")
    if warn:
        add("## Peringatan note ujung")
        add("")
        for w in warn:
            add(f"- {w}")
        add("")
    for w in warn:
        print(f"WARN {w}", file=sys.stderr)
    add("## Penjadwalan")
    add("")
    head = "| kelas | ukuran | arti | sisa"
    for r in rows:
        head += f" / {r['stem'].replace('code_', '').replace('.s', '')}"
    add(head + " |")
    add("|---" * 4 + "|")
    arti = {
        "S": ("≤100B", "satu judge biasanya cukup; residual umumnya regalloc kecil"),
        "M": ("101–300B", "perlu 2–3 varian; perhatikan tekanan register"),
        "L": (">300B", "**pekerjaan tersendiri**, bukan sela-sela"),
    }
    for cls, idx in (("S", 0), ("M", 1), ("L", 2)):
        cells = " / ".join(str(r["buckets"][idx]) for r in rows)
        ukuran, meaning = arti[cls]
        add(f"| {cls} | {ukuran} | {meaning} | {cells} |")
    add("")
    add("Angka kelas dihitung dari fungsi yang masih punya label di `asm/` dan punya "
        "`ref_len` di shard (label tanpa entri state tidak ikut kelas, tetapi tetap "
        "dihitung di kolom \"tersisa di asm\").")
    add("")
    add("1. **Promoted di ujung** — cukup `migrate.py`, tanpa judge; biaya terkecil "
        "dan membuka rantai di atasnya.")
    add("2. **Kelas S dengan residual regalloc/operand kecil** — kandidat MATCH cepat.")
    add("3. **Kelas L** dijadwalkan terpisah; satu fungsi biasanya menghabiskan satu sesi.")
    add("")
    add(MANUAL_MARK)
    if manual:
        add(manual.rstrip("\n"))
        add("")
    return "\n".join(out)


def split_manual(existing):
    """-> (teks manual, apakah dokumen lama memakai heading tanpa penanda)."""
    if MANUAL_MARK in existing:
        return existing.split(MANUAL_MARK, 1)[1].lstrip("\n"), False
    i = existing.find(MANUAL_HEAD)
    if i >= 0:
        return existing[i:], True
    return "", False


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--out", default=str(DOC), help="dokumen tujuan")
    ap.add_argument("--tail", type=int, default=12, help="jumlah entri tabel per modul")
    ap.add_argument("--stdout", action="store_true", help="cetak, jangan tulis")
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila dokumen di disk berbeda dari hasil generate "
                         "(baris tanggal Snapshot diabaikan)")
    args = ap.parse_args(argv)

    out = Path(args.out)
    existing = out.read_text() if out.exists() else ""
    manual, legacy = split_manual(existing)
    text = build(args.tail, manual) + "\n"

    if args.stdout:
        sys.stdout.write(text)
        return 0
    if args.check:
        if not is_stale(existing, text):
            note = "" if existing == text else " (baris tanggal diabaikan)"
            print(f"{out}: sinkron{note}")
            return 0
        print(f"{out}: BASI — jalankan tools/scripts/ekor_snapshot.py")
        return 1
    out.write_text(text)
    note = " (penanda manual disisipkan)" if legacy else ""
    print(f"{out}: ditulis ulang{note}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
