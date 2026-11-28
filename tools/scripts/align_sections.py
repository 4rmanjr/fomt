#!/usr/bin/env python3
"""align_sections.py — padankan alignment section dengan alamat ROM-nya.

ROM FOTM menaruh sebagian fungsi di alamat 2-mod-4 (mis. 0x080D1186,
0x080D116A) — di asm aslinya ditandai `non_word_aligned_thumb_func_start`
yang TIDAK menulis `.align`. Kalau section seperti itu dipaksa sejajar-4,
linker menyisipkan 2 byte dan seluruh simbol sesudahnya bergeser.

Alignment ditentukan dari alamat section (nama `.text.<modul>.<HEX8>`) DAN
alamat fungsi berikutnya di modul (dari `decomp/state/modules/<stem>.json`):

  * section MULAI di 2-mod-4      -> align 1 (2 byte)
  * section BERAKHIR di 2-mod-4   -> align 1 juga; `.align 2` memaksa
    panjang section dibulatkan ke kelipatan 4 (TERBUKTI: chunk
    `.080D10F0` isi 0x96 -> 0x98 saat 0x1186 pindah ke src/, ROM +2 byte
    dan `func_080D1186` mendarat di 0x080d1188).
  * sisanya                       -> align 2 (4 byte)

Padding ekor:
  * `.align` penutup warisan asm DIBUANG (sumber padding +2 byte palsu:
    `.080D129A` 0x52 -> 0x54, `.080D1498` 0x2e -> 0x30);
  * padding yang MEMANG perlu (section mulai 4-aligned, section berikutnya
    juga 4-aligned, panjang isi 2-mod-4) disintesis eksplisit
    `.align 2, 0` supaya filler-nya 0, bukan `nop` (`c046` vs `0000` di
    ROM — TERBUKTI asm/code_linkonce 0x080d7e62).

Selain itu:
  * `thumb_func_start` di section align-1 diganti
    `non_word_aligned_thumb_func_start` (makro itu yang menulis `.align 2`);
  * di ekor berkas tiap section dibuka ulang + `.align` sesuai alamatnya.

Pemakaian: align_sections.py <berkas.s> [--stem <nama>]
"""

import json
import re
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
MODULES = REPO / "decomp" / "state" / "modules"

SEC_RE = re.compile(r'^\s*\.section\s+"?([A-Za-z0-9_.]+)"?,')
ALIGN_RE = re.compile(r"^\t\.align[ \t]+[0-9]+(,[ \t]*[0-9]+)?$")
START_RE = re.compile(r"^\tthumb_func_start\s+(\w+)\s*$")
ADDR_RE = re.compile(r"\.([0-9A-Fa-f]{8})$")


CODE_PREFIXES = (".text", ".gnu.linkonce.t")


def is_code_section(name):
    """`.text*` DAN `.gnu.linkonce.t.*`: instansiasi template C++ (`-ffunction-
    sections` gaya kuno) juga section kode. Kalau dilewat, GAS membulatkan
    panjangnya ke alignment dgn filler `nop` (`c046` vs `0000` di ROM —
    TERBUKTI src/rucksack.o `.gnu.linkonce.t.push_front__...ToolStack`
    0x080d7e62)."""
    return bool(name) and name.startswith(CODE_PREFIXES)


def addr_of(name):
    m = ADDR_RE.search(name)
    return int(m.group(1), 16) if m else None


def stem_of(path, override=None):
    if override:
        return override
    n = Path(path).name
    for suf in (".split.s", ".s"):
        if n.endswith(suf):
            return n[: -len(suf)]
    return n


def src_addr_set(stem):
    """Alamat section yang sudah punya blok di `src/<stem>.cc` (migrated).

    Dipakai aturan "chunk asm berakhir di 2-mod-4": alignment 1 hanya perlu
    bila section berikutnya benar-benar sudah pindah ke src/ (kalau tidak,
    asm asli sudah benar dan memaksa align-1 menggeser section lain —
    TERBUKTI modul code_0803EE94 gagal assemble `target not word aligned`).
    """
    p = REPO / "src" / f"{stem}.cc"
    if not p.exists():
        return set()
    out = set()
    for m in re.finditer(r'section\("([A-Za-z0-9_.]+)"\)', p.read_text(errors="ignore")):
        a = addr_of(m.group(1))
        if a is not None:
            out.add(a)
    return out


def load_addrs(stem):
    """Semua alamat fungsi modul (untuk tahu di mana section berakhir)."""
    p = MODULES / f"{stem}.json"
    if not p.exists():
        return []
    out = []
    for v in json.loads(p.read_text()).values():
        if not isinstance(v, dict) or v.get("addr") is None:
            continue
        a = v["addr"]
        out.append(a if isinstance(a, int) else int(str(a), 16))
    return sorted(out)


def align_for(name, addrs, present=None, src_present=None):
    """1 (2 byte) bila section mulai ATAU berakhir di alamat 2-mod-4.

    `present` = alamat section yang masih ada di berkas ini. Aturan "berakhir
    2-mod-4" hanya dipakai bila section berikutnya SUDAH TIDAK ADA di berkas
    (pindah ke src/): kalau masih ada, asm asli sudah benar dan memaksa
    align-1 justru menggeser section lain.
    """
    a = addr_of(name)
    if a is None:
        return 2
    if a % 4 == 2:
        return 1
    nxt = [x for x in addrs if x > a]
    if not nxt:
        return 2
    b = nxt[0]
    if b % 4 != 2:
        return 2
    if present is not None and b in present:
        return 2
    if src_present is not None and b not in src_present:
        return 2
    return 1


STALE_LABEL_RE = re.compile(r"^\.Lalignfix_\d+:$")
STALE_FILL_RE = re.compile(
    r"^\t\.fill \(4 - \(\(\. - \.Lalignfix_\d+\) % 4\)\) % 4, 1, 0$")


def strip_stale(text):
    """Buang sisa label/.fill dari pass sebelumnya (skrip dijalankan 2x:
    `build/src/*.s` hasil agbcc di-align ulang tiap build; rujukan label
    lama akan jadi non-absolut -> `Error: .fill specifies non-absolute
    value`)."""
    keep = []
    for line in text.splitlines():
        if STALE_LABEL_RE.match(line) or STALE_FILL_RE.match(line):
            continue
        keep.append(line)
    return "\n".join(keep) + "\n"


def rewrite(text, addrs, src_present=None):
    text = strip_stale(text)
    present = {addr_of(m.group(1)) for m in SEC_RE.finditer(text)
               if is_code_section(m.group(1))}
    out = []
    sec = None
    al = 2
    seen = 0
    held = None
    cur_addr = None

    def close_section(next_name):
        """Padding 4->4 dengan fill 0 bila memang diperlukan.

        `.align 2, 0` WAJIB eksplisit: tanpa directive ini GAS membulatkan
        panjang section ke `sh_addralign`-nya dengan filler `nop`
        (`c046` vs `0000` di ROM — TERBUKTI asm/code_linkonce 0x080d7e62 &
        0x080e0eee; `.align 2, 0` sendiri terverifikasi menulis byte 0).
        """
        if cur_addr is None or cur_addr % 4 != 0:
            return
        nxt = addr_of(next_name) if next_name else None
        if nxt is None or nxt % 4 != 0:
            return
        out.append("\t.align 2, 0")

    for line in text.splitlines():
        m_sec = SEC_RE.match(line)
        if m_sec:
            # `.align` ekor warisan dibuang; padding perlu disintesis
            # dgn fill 0 (lihat close_section).
            held = None
            close_section(m_sec.group(1))
            sec = m_sec.group(1) or ""
            if not is_code_section(sec):
                sec = None
                al = 2
                cur_addr = None
            else:
                al = align_for(sec, addrs, present, src_present)
                cur_addr = addr_of(sec)
            seen = 0
            out.append(line)
            continue
        if held is not None:
            out.append(held)
            held = None
        if sec is None:
            out.append(line)
            continue
        if ALIGN_RE.match(line):
            if seen == 0:
                held = f"\t.align {al}, 0"
                seen = 1
            else:
                held = line
            continue
        if al == 1:
            m = START_RE.match(line)
            if m:
                out.append(f"\tnon_word_aligned_thumb_func_start {m.group(1)}")
                continue
        out.append(line)
    if held is not None:
        out.append(held)
    return "\n".join(out) + "\n"


def tail(text, addrs, present=None, src_present=None):
    """Ekor: buka ulang tiap section + `.align` sesuai aturan yang sama."""
    names = []
    for line in text.splitlines():
        m = SEC_RE.match(line)
        if (m and is_code_section(m.group(1))
                and m.group(1) not in names):
            names.append(m.group(1))
    out = []
    for n in names:
        out.append(f'\t.section "{n}"')
        out.append(f"\t.align {align_for(n, addrs, present, src_present)}, 0")
    out.append("\t.text")
    out.append("\t.align 2, 0")
    return "\n".join(out) + "\n"


def main(argv):
    if not argv:
        print(__doc__)
        return 2
    path = argv[0]
    stem = None
    if "--stem" in argv:
        stem = argv[argv.index("--stem") + 1]
    stem = stem_of(path, stem)
    addrs = load_addrs(stem)
    p = Path(path)
    src = p.read_text()
    srv = src_addr_set(stem)
    # Batas section di berkas asm = section yang masih ada + yang sudah
    # pindah ke src/. Alamat state TIDAK dipakai: fungsi tanpa batas section
    # (mis. 0x080D117E di dalam chunk 0x10F0) bukan batas chunk.
    if Path(path).name.endswith(".split.s"):
        present0 = {addr_of(m.group(1)) for m in SEC_RE.finditer(src)
                    if is_code_section(m.group(1))}
        addrs = sorted(x for x in (present0 | srv) if x is not None)
    new = rewrite(src, addrs, srv or None)
    present = {addr_of(m.group(1)) for m in SEC_RE.finditer(new)
               if is_code_section(m.group(1))}
    new += tail(new, addrs, present, srv or None)
    p.write_text(new)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
