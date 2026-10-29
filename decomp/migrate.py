#!/usr/bin/env python3
"""Migrasi 1 fungsi MATCH dari asm/*.s ke src/*.cc secara aman.

Alur per fungsi (sesuai urutan):
  1. Ambil blok `// DECOMP-MATCHED <nama>` dari decomp/promoted/<stem>.cc
     (hanya bila status fungsi di decomp/state/modules/<stem>.json == promoted).
  2. Sisipkan (urut alamat) ke src/<stem>.cc — buat baru dgn
     `#include "prelude.h"` bila belum ada. Blok dibungkus
     `extern "C" { ... }` agar linkage C (repo memakai EC utk ini) dan
     pemanggilan ke simbol asm (memcpy, func_*, gUnk_*) tidak mangled.
  3. Hapus blok fungsi tsb dari asm/<modul>.s (dari baris
     thumb_func_start/arm_func_start sampai marker fungsi berikut).
  4. Daftarkan src/<stem>.o(.text) di fomt.lds tepat sesudah
     asm/<stem>.o(.text) (tanpa ini section dibuang /DISCARD/ -> link gagal).
     Lalu `make compare`: HIJAU -> lanjut fungsi berikut;
     MERAH -> revert fungsi itu (snapshot file) dan BERHENTI + laporan.

Urutan migrasi: tail-first (alamat menurun) per modul — hanya fungsi di
ekor file yang pindah tanpa menggeser alamat fungsi lain, sehingga
compare bisa tetap hijau. Modul default: pilot more_items.s, sram_proxy_1.s.

Tidak pernah commit (working tree saja). Tidak menyentuh state JSON.
"""

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent  # decomp/ -> repo root
PILOT_MODULES = ["more_items.s", "sram_proxy_1.s"]

MARKER = "// DECOMP-MATCHED "
ASM_START_RE = re.compile(
    r"^\s*((thumb|arm)_func_start|non_word_aligned_thumb_func_start)\s+(\w+)",
    re.IGNORECASE,
)
# Konten setelah fungsi TERAKHIR yang harus dipertahankan (data tanpa
# marker, tabel, dsb): berhenti sebelum baris-baris ini, jangan ditelan.
_LAST_KEEP_RE = re.compile(
    r"^\s*(\.byte\b|\.ascii\b|\.asciz\b|\.incbin\b|\.space\b|\.comm\b|"
    r"\.global\b|\.type\b|\.size\b|\.section\b|\.(text|data|rodata)\b)"
)
MIGRATED_FN_RE = re.compile(r"// DECOMP-MATCHED (func_\w+)")


def load_state(stem):
    p = REPO / "decomp" / "state" / "modules" / f"{stem}.json"
    with open(p) as f:
        return json.load(f)


def promoted_funcs(module):
    """(nama, addr) fungsi berstatus promoted, urut alamat menurun (tail-first)."""
    stem = module[: -len(".s")]
    state = load_state(stem)
    out = [
        (name, info["addr"])
        for name, info in state.items()
        if info.get("module") == module and info.get("status") == "promoted"
    ]
    out.sort(key=lambda t: t[1], reverse=True)
    return out


def extract_block(promoted_path, func):
    lines = promoted_path.read_text().splitlines(keepends=True)
    start = None
    for i, ln in enumerate(lines):
        if ln.strip() == f"{MARKER}{func}":
            # baris marker persis: "// DECOMP-MATCHED <func>" + info bebas
            start = i
            break
        if ln.startswith(f"{MARKER}{func} ") or ln.startswith(f"{MARKER}{func}("):
            start = i
            break
    if start is None:
        # fallback: marker diawali prefix tsb
        for i, ln in enumerate(lines):
            if ln.startswith(MARKER + func):
                start = i
                break
    if start is None:
        return None
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if lines[i].startswith(MARKER):
            end = i
            break
    block = "".join(lines[start:end]).rstrip() + "\n"
    return block


# Typedef harness judge (decomp/run.py COMMON) -> header repo (include/types.h).
# s32 dkk tidak ada di repo (src memakai i32); tanpa ini .cc gagal kompilasi.
# Hanya tipe signed judge; u8/u16/u32 sudah sama di kedua sisi.
JUDGE_TYPEMAP = (("s32", "i32"), ("s16", "i16"), ("s8", "i8"))


def translate_types(body):
    for old, new in JUDGE_TYPEMAP:
        body = re.sub(rf"\b{old}\b", new, body)
    return body


FAKE_MEMCPY_RE = re.compile(r"^\s*i32 memcpy\(i32, i32, i32\);\s*\n", re.M)
MEMCPY_CALL_RE = re.compile(r"\bmemcpy\(([^,()]+),([^,()]+),([^()]+)\)")


def adapt_memcpy(body):
    """Hapus prototipe memcpy palsu ala-judge; pakai <string.h> + cast
    pointer agar sah C++ tanpa mengubah codegen (cast itu no-op)."""
    body, n = FAKE_MEMCPY_RE.subn("", body)
    if not n:
        return body, False
    body = MEMCPY_CALL_RE.sub(
        lambda m: f"memcpy((void *)({m.group(1).strip()}), "
        f"(const void *)({m.group(2).strip()}), {m.group(3).strip()})",
        body,
    )
    return body, True


def struct_name(blk):
    m = re.search(r"struct\s+(\w+)", blk)
    return m.group(1) if m else ""


def _is_pure_type(blk):
    """True bila blok struct hanya definisi tipe (aman di-hoist)."""
    if blk.lstrip().startswith("typedef"):
        return True
    tail = blk[blk.rfind("}") + 1:].strip()
    return tail == ";"


def take_structs(text):
    """Pisahkan definisi struct dari teks -> (teks_tanpa_struct, [blok]).

    Dipakai agar struct yang dibawa tiap blok MATCH naik ke scope file
    (satu salinan), bukan terjebak di dalam blok `extern "C"` masing-masing
    yang bikin blok berikutnya 'was not declared' / 'redefinition'."""
    spans = []
    for m in STRUCT_RE.finditer(text):
        depth, k = 0, m.end() - 1
        while k < len(text):
            if text[k] == "{":
                depth += 1
            elif text[k] == "}":
                depth -= 1
                if depth == 0:
                    break
            k += 1
        end = text.find(";", k)
        if end == -1:
            continue
        blk = text[m.start(): end + 1]
        if not _is_pure_type(blk):
            continue  # deklarasi variabel: biarkan di tempat
        spans.append((m.start(), end + 1))
    blocks = []
    for s, e in reversed(spans):
        blocks.append(text[s: e])
        text = text[:s] + text[e:]
    blocks.reverse()
    return re.sub(r"\n{3,}", "\n\n", text), blocks


STRUCT_RE = re.compile(r"(typedef\s+)?struct\s+\w+\s*\{", re.M)
EXTERN_RE = re.compile(
    r"^\s*(?:i32|u32|u16|u8|s32|s16|s8|void)\s+(\w+)\s*\(([^;{}]*)\)\s*;"
    r"\s*(?:/\*.*?\*/)?\s*$",
    re.M)


def extern_decls(text):
    """Petakan nama -> himpunan tanda tangan deklarasi extern di teks."""
    out = {}
    for m in EXTERN_RE.finditer(text):
        if "(*" in m.group(0):
            continue
        sig = re.sub(r"\s+", " ", m.group(2).strip())
        out.setdefault(m.group(1), set()).add(sig)
    return out


def _src_struct_differs(src_text, nm, blk):
    """True bila src memuat definisi tipe murni bernama nm yang isinya
    beda dari blk (tabrakan yang harus disatukan manual)."""
    for m in STRUCT_RE.finditer(src_text):
        depth, k = 0, m.end() - 1
        while k < len(src_text):
            if src_text[k] == "{":
                depth += 1
            elif src_text[k] == "}":
                depth -= 1
                if depth == 0:
                    break
            k += 1
        end = src_text.find(";", k)
        if end == -1:
            continue
        cand = src_text[m.start(): end + 1]
        if not _is_pure_type(cand):
            continue
        if struct_name(cand) == nm and cand != blk:
            return True
    return False


def split_marker_body(block):
    """(marker_line, body): baris pertama marker, sisanya body."""
    first, _, rest = block.partition("\n")
    return first + "\n", rest


def insert_ordered(src_text, marker_line, body, addr, state_addrs):
    """Sisipkan blok (dibungkus extern C) dgn urutan alamat menaik."""
    wrapped = marker_line + 'extern "C" {\n' + body.rstrip() + "\n}\n"
    matches = list(MIGRATED_FN_RE.finditer(src_text))
    pos = len(src_text)
    for m in matches:
        other = state_addrs.get(m.group(1))
        if other is not None and other > addr:
            pos = m.start()
            # mundur ke awal baris + sertakan blank-line pemisah sebelumnya
            while pos > 0 and src_text[pos - 1] != "\n":
                pos -= 1
            break
    if not src_text.endswith("\n") and src_text:
        src_text += "\n"
    if src_text and not src_text.endswith("\n\n"):
        # pastikan pemisah blank line sebelum blok baru di posisi akhir
        if pos == len(src_text):
            src_text += "\n"
    new_text = src_text[:pos] + wrapped + "\n" + src_text[pos:]
    return new_text


def remove_asm_func(asm_text, func):
    """Hapus blok fungsi dari asm -> (new_asm, tail).

    tail = ekor tak-bermarker sesudah fungsi terakhir. Ekor ikut DICABUT
    dari asm dan HARUS dibawa verbatim ke src (posisi tepat sesudah fungsi)
    supaya tidak ada byte yang bergeser/duplikat."""
    lines = asm_text.splitlines(keepends=True)
    start = end = None
    for i, ln in enumerate(lines):
        m = ASM_START_RE.match(ln)
        if m and m.group(3) == func:
            start = i
            break
    if start is None:
        return None, None
    end = len(lines)
    for i in range(start + 1, len(lines)):
        if ASM_START_RE.match(lines[i]):
            end = i
            break
    tail = ""
    if end == len(lines):
        # Fungsi terakhir: cari akhir konten fungsi sendiri (sebelum baris
        # KEEP pertama). Semua dari sana sampai EOF ikut dicabut; tail-nya
        # dibawa ke src. Tanpa KEEP: tail kosong (perilaku lama).
        i = start + 1
        while i < len(lines):
            if ASM_START_RE.match(lines[i]) or _LAST_KEEP_RE.match(lines[i]):
                break
            i += 1
        if i < len(lines):
            # Bawa serta direktif `.align` (+ label lokal) tepat sebelum
            # konten KEEP: tanpa ini pad ala rakitan asli hilang dan ekor
            # bergeser (kasus interrupt.s: 2B). Aman karena hanya direktif
            # align/label, bukan instruksi.
            j = i
            while j - 1 > start:
                s = lines[j - 1].split("@")[0].strip()
                if re.match(r"^\.align\b", s) or re.match(r"^[\w.]+:$", s):
                    j -= 1
                elif s == "":
                    j -= 1
                else:
                    break
            tail = "".join(lines[j:])
            end = len(lines)
    # sertakan blank-line pemisah sesudah blok bila ada
    while end < len(lines) and lines[end].strip() == "":
        end += 1
    new_text = "".join(lines[:start] + lines[end:])
    if not new_text.endswith("\n"):
        new_text += "\n"
    return new_text, tail


def ensure_lds(lds_text, stem):
    """Pastikan `src/<stem>.o(.text);` TEPAT sesudah `asm/<stem>.o(.text);`.

    Migrasi hanya lestari bila src tersambung langsung sesudah asm: fungsi
    pindah menempati offset yang sama persis. Bila entri src sudah ada di
    tempat lain (layout tulisan-tangan, mis. src/hardware.o SEBELUM asm),
    raise agar migrasi SKIP — butuh kerja lds manual, bukan auto-revert
    yang membingungkan."""
    asm_entry = f"asm/{stem}.o(.text);"
    src_entry = f"src/{stem}.o(.text);"
    lines = lds_text.splitlines(keepends=True)
    ai = next((i for i, ln in enumerate(lines) if ln.strip() == asm_entry),
              None)
    if ai is None:
        raise RuntimeError(f"lds: entri {asm_entry} tidak ditemukan")
    j = ai + 1
    while j < len(lines) and not lines[j].strip():
        j += 1
    if j < len(lines) and lines[j].strip() == src_entry:
        return lds_text, False
    if any(ln.strip() == src_entry for ln in lines):
        raise RuntimeError(f"lds: {src_entry} tidak tepat sesudah "
                           f"{asm_entry} (layout tulisan-tangan)")
    indent = lines[ai][: len(lines[ai]) - len(lines[ai].lstrip())]
    lines.insert(ai + 1, f"{indent}{src_entry}\n")
    return "".join(lines), True


def run_compare():
    p = subprocess.run(
        ["make", "compare"],
        cwd=REPO,
        capture_output=True,
        text=True,
        timeout=600,
    )
    tail = (p.stdout + p.stderr).strip().splitlines()[-5:]
    return p.returncode == 0, "\n".join(tail)


def migrate_one(module, func, dry_run=False):
    stem = module[: -len(".s")]
    state = load_state(stem)
    info = state.get(func)
    if info is None or info.get("status") != "promoted":
        return {
            "func": func,
            "module": module,
            "ok": False,
            "skipped": True,
            "detail": f"status={info.get('status') if info else 'unknown'} "
            "(bukan promoted, dilewati)",
        }
    addr = info["addr"]
    promoted_path = REPO / "decomp" / "promoted" / f"{stem}.cc"
    src_path = REPO / "src" / f"{stem}.cc"
    asm_path = REPO / "asm" / module
    lds_path = REPO / "fomt.lds"

    block = extract_block(promoted_path, func)
    if block is None:
        return {"func": func, "module": module, "ok": False,
                "detail": "blok DECOMP-MATCHED tidak ditemukan di "
                f"{promoted_path}"}
    marker_line, body = split_marker_body(block)
    body = translate_types(body)
    body, need_string_h = adapt_memcpy(body)

    asm_text = asm_path.read_text()
    # Hanya fungsi TERAKHIR di asm yang boleh pindah: mencabut fungsi yang
    # masih punya penerus menggeser semua penerusnya -> compare pasti MERAH
    # (bukan salah codegen). Cek terhadap isi asm SAAT INI karena tiap
    # migrasi sukses mengubah urutan sisa.
    remaining = [m.group(3) for ln in asm_text.splitlines()
                 for m in [ASM_START_RE.match(ln)] if m]
    if func in remaining and remaining.index(func) != len(remaining) - 1:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"bukan fungsi terakhir di {module} "
                f"({len(remaining) - remaining.index(func) - 1} penerus "
                "belum pindah, dilewati)"}
    new_asm, asm_tail = remove_asm_func(asm_text, func)
    if new_asm is None:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"{func} tidak ditemukan di {asm_path} "
                "(mungkin sudah pindah sebelumnya, dilewati)"}
    asm_tail = asm_tail or ""

    lds_text = lds_path.read_text()
    try:
        new_lds, lds_changed = ensure_lds(lds_text, stem)
    except RuntimeError as e:
        return {"func": func, "module": module, "ok": False,
                "skipped": True,
                "detail": f"layout lds {module} tak didukung migrasi "
                f"otomatis ({e}), dilewati"}

    if src_path.exists():
        src_text = src_path.read_text()
        # Hanya marker yang sah sebagai tanda "sudah pindah". Substring
        # polos (dulu: `func in src_text`) false-positive pada pemanggilan /
        # deklarasi extern fungsi lain (kasus 004F4 dipanggil 0050C).
        if re.search(rf"// DECOMP-MATCHED {re.escape(func)}\b", src_text):
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"{func} sudah ada di {src_path} (dilewati)"}
        if need_string_h and "#include <string.h>" not in src_text:
            inc = src_text.splitlines(keepends=True)
            for i, ln in enumerate(inc):
                if ln.startswith("#include"):
                    inc.insert(i + 1, "#include <string.h> // memcpy\n")
                    break
            else:
                inc.insert(0, "#include <string.h> // memcpy\n")
            src_text = "".join(inc)
        state_addrs = {n: i.get("addr", 0) for n, i in state.items()}
        # Struct dari body naik ke scope file (satu salinan). src TIDAK
        # pernah dirombak: definisinya dibiarkan apa adanya, hanya body baru
        # yang diproses (aman untuk src tulisan-tangan ber-method).
        body, new_structs = take_structs(body)
        merged, struct_conflict = [], None
        for blk in new_structs:
            if blk in merged or blk in src_text:
                continue
            if _src_struct_differs(src_text, struct_name(blk), blk):
                struct_conflict = struct_name(blk)  # butuh penyatuan manual
                break
            merged.append(blk)
        if struct_conflict:
            return {"func": func, "module": module, "ok": False,
                    "skipped": True,
                    "detail": f"struct {struct_conflict} beda isi antar blok "
                    "(butuh penyatuan manual), dilewati"}
        # Deklarasi extern yang sama dengan tanda tangan beda juga tabrakan
        # di scope file (braces extern "C" tidak membuat scope).
        decl_old, decl_new = extern_decls(src_text), extern_decls(body)
        for nm, sigs in decl_new.items():
            if nm in decl_old and not sigs.issubset(decl_old[nm]):
                return {"func": func, "module": module, "ok": False,
                        "skipped": True,
                        "detail": f"extern {nm} beda tanda tangan "
                        f"({sorted(decl_old[nm])} vs {sorted(sigs)}), "
                        "butuh penyatuan manual, dilewati"}
        if merged:
            top = "\n".join(merged) + "\n\n"
            anchor = src_text.find("// DECOMP-MATCHED")
            if anchor != -1:
                src_text = src_text[:anchor] + top + src_text[anchor:]
            else:
                # src tulisan-tangan tanpa marker: taruh sesudah blok include
                # (tipe butuh i32/u8 dari prelude), bukan di akhir file.
                hm = re.match(r"(?:#[^\n]*\n)+", src_text)
                pos = hm.end() if hm else 0
                src_text = src_text[:pos] + top + src_text[pos:]
        new_src = insert_ordered(src_text, marker_line, body, addr,
                                 state_addrs)
    else:
        head = '#include "prelude.h"\n'
        if need_string_h:
            head += "#include <string.h> // memcpy\n"
        new_src = head + "\n" + marker_line + \
            'extern "C" {\n' + body.rstrip() + "\n}\n"

    if asm_tail.strip():
        # Ekor tak-bermarker dibawa verbatim tepat sesudah fungsi ini
        # (basic asm scope file; tidak mengubah codegen fungsi).
        wrapped = marker_line + 'extern "C" {\n' + body.rstrip() + "\n}\n"
        asm_lines = [ln.rstrip().replace("\\", "\\\\").replace('"', '\\"')
                     for ln in asm_tail.splitlines() if ln.strip()]
        tail_src = ("// ekor tak-bermarker dari " + module +
                    " (verbatim, jangan diubah)\nasm(\n" +
                    "".join(f'"{ln}\\n"\n' for ln in asm_lines) + ");\n")
        new_src = new_src.replace(wrapped, wrapped + tail_src, 1)

    if dry_run:
        return {"func": func, "module": module, "ok": True, "dry": True,
                "detail": f"rencana: +{src_path.name} ~{len(new_src)}B, "
                f"lds_changed={lds_changed}"}

    # snapshot utk revert
    snap = {
        asm_path: asm_text,
        lds_path: lds_text,
        src_path: src_path.read_text() if src_path.exists() else None,
    }
    try:
        src_path.write_text(new_src)
        asm_path.write_text(new_asm)
        if lds_text != new_lds:
            lds_path.write_text(new_lds)
    except OSError as e:
        for p, content in snap.items():
            if content is not None:
                p.write_text(content)
        return {"func": func, "module": module, "ok": False,
                "detail": f"gagal tulis: {e}"}

    green, compare_tail = run_compare()
    files = [str(src_path.relative_to(REPO)), str(asm_path.relative_to(REPO))]
    if lds_changed:
        files.append("fomt.lds")
    if green:
        return {"func": func, "module": module, "ok": True,
                "detail": compare_tail, "files": files}
    # MERAH: revert fungsi ini
    for p, content in snap.items():
        if content is None:
            if p.exists():
                p.unlink()
        else:
            p.write_text(content)
    return {"func": func, "module": module, "ok": False, "reverted": True,
            "detail": compare_tail, "files": files}


def main():
    ap = argparse.ArgumentParser(description="Migrasi aman 1 fungsi MATCH "
                                 "asm -> src per compare.")
    ap.add_argument("--module", action="append", default=None,
                    help="modul .s (default pilot: more_items.s, "
                    "sram_proxy_1.s)")
    ap.add_argument("--func", default=None, help="satu fungsi saja")
    ap.add_argument("--limit", type=int, default=None,
                    help="maks fungsi diproses")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--no-baseline", action="store_true",
                    help="lewati cek compare baseline")
    args = ap.parse_args()

    modules = args.module or PILOT_MODULES
    plan = []
    for mod in modules:
        for name, _ in promoted_funcs(mod):
            if args.func and name != args.func:
                continue
            plan.append((mod, name))
    if args.limit is not None:
        plan = plan[: args.limit]
    if not plan:
        print("tidak ada kandidat (cek status promoted / nama fungsi).")
        return 2

    if not args.dry_run and not args.no_baseline:
        green, tail = run_compare()
        print(f"[baseline] compare {'HIJAU' if green else 'MERAH'}: {tail}")
        if not green:
            print("baseline merah — abort, tidak migrasi.")
            return 2

    moved, failed, dry = [], None, []
    for mod, name in plan:
        print(f"== migrasi {name} ({mod}) ...")
        r = migrate_one(mod, name, dry_run=args.dry_run)
        status = "OK" if r["ok"] else ("SKIP" if r.get("skipped") else "GAGAL")
        print(f"   [{status}] {r['detail']}")
        if r.get("dry"):
            dry.append(r)
            continue
        if r["ok"]:
            moved.append(r)
        elif r.get("skipped"):
            continue
        else:
            failed = r
            break  # merah: revert sudah dilakukan, berhenti

    print("---- laporan ----")
    if dry:
        print("rencana (dry-run): " +
              ", ".join(f"{r['func']}({r['module']})" for r in dry))
        return 0
    print(f"pindah: {len(moved)} " +
          (", ".join(f"{r['func']}({r['module']})" for r in moved)
           if moved else "-"))
    for r in moved:
        print(f"  HIJAU {r['func']}: {r['detail']}")
        print(f"    file: {', '.join(r['files'])}")
    if failed:
        print(f"  MERAH {failed['func']} ({failed['module']}): "
              f"{failed['detail']} -> direvert, berhenti.")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
