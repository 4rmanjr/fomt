#!/usr/bin/env python3
"""asset_inventory.py — inventaris read-only blob di `asm/data/data_0813B288.s`.

Yang dihasilkan (tanpa menyentuh build, `fomt.gba`, atau `baserom.gba`):

- satu baris per simbol `gUnk_*` di berkas itu: alamat ROM, ukuran, kelas
  format, jumlah stream + ukuran hasil buka, dan pemakai pointer;
- ringkasan per kelas: BIOS LZ77 (0x10), BIOS RLE (0x30), BIOS Huffman
  (0x24/0x28), LZSS/Huffman header 0x70 (format yang dibuka
  `tools/scripts/decompress.py`), mentah, dan campuran.

Klasifikasi **tidak** hanya melihat byte header. Header 0x70 diterima hanya
kalau seluruh blob habis terurai menjadi stream yang valid (dekoder
`decompress.py`), jadi byte kebetulan tidak dihitung. Header BIOS LZ77/RLE
divalidasi dengan mendekode stream-nya; kandidat yang gagal dilaporkan
terpisah sebagai "header kebetulan". Huffman BIOS belum punya dekoder di repo:
blob ber-header 0x24/0x28 hanya ditandai kandidat, tidak diklaim compressed.

Pemakai pointer dicari dengan memindai kata 32-bit sejajar di ROM yang
nilainya sama dengan alamat awal blob (0x08000000 + offset). Pemilik kata itu
ditentukan dari simbol `thumb_func_start`/`.global` di `asm/` (alamat ada di
namanya, mis. `func_080D0D28`), bukan dari ELF, supaya hasilnya bisa
direproduksi dari berkas yang di-track. Pointer ke tengah blob tidak dihitung.

Pemakaian:

  python3 tools/scripts/asset_inventory.py            # tulis dokumen
  python3 tools/scripts/asset_inventory.py --stdout   # cetak saja
  python3 tools/scripts/asset_inventory.py --check    # exit 1 bila basi
  python3 tools/scripts/asset_inventory.py --json     # data mentah

`--check` juga dipanggil `tools/scripts/check_docs.py`, jadi dokumen yang
tertinggal dari isi `asm/data/data_0813B288.s` menggagalkan gate dokumen, bukan
lolos diam-diam.
"""
import argparse
import bisect
import json
import re
import struct
import sys
from collections import Counter
from dataclasses import dataclass, field
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
DOC = REPO / "docs" / "decomp" / "ASET-INVENTARIS.md"
DEFAULT_ASM = REPO / "asm" / "data" / "data_0813B288.s"
DEFAULT_ROM = REPO / "baserom.gba"
TOOLS = REPO / "tools" / "scripts"

sys.path.insert(0, str(TOOLS))
import decompress  # noqa: E402  (dekoder format 0x70 milik repo)

MAX_POPURI_SIZE = 0x40000
RE_GLOBAL = re.compile(r"^\s*\.global\s+(\w+)")
RE_INCBIN = re.compile(
    r'\.incbin\s+"baserom\.gba",\s*0x([0-9A-Fa-f]+),\s*0x([0-9A-Fa-f]+)')
RE_HEX8 = re.compile(r"([0-9A-Fa-f]{8})")
RE_THUMB = re.compile(r"thumb_func_start\s+(\w+)")


@dataclass
class Entry:
    name: str
    offset: int
    size: int
    kind: str = "?"
    streams: list = field(default_factory=list)   # [(at, packed, unpacked, fmt)]
    note: str = ""
    pointers: Counter = field(default_factory=Counter)
    pointer_total: int = 0

    @property
    def unpacked(self):
        return sum(s[2] for s in self.streams)


def parse_entries(path):
    """-> (entries, preamble) dari satu berkas asm/data.

    `.global` dibaca dulu supaya komentar di baris `.global` (mis.
    `gUnk_0875A440 @ gClockFont`) tidak membuat entri terlewat.
    """
    lines = path.read_text().splitlines()
    entries = []
    for i, line in enumerate(lines):
        m = RE_GLOBAL.match(line)
        if not m:
            continue
        inc = None
        for probe in lines[i + 1:i + 4]:
            inc = RE_INCBIN.search(probe)
            if inc:
                break
        if not inc:
            raise SystemExit(f"{path}: entri {m.group(1)} tanpa .incbin")
        entries.append(Entry(m.group(1), int(inc.group(1), 16),
                             int(inc.group(2), 16)))
    # preamble ditulis sebagai .incbin dengan ekspresi, bukan angka: cari baris
    preamble = None
    for line in lines:
        if ".incbin" in line and "LDATA_BEG" in line:
            preamble = line.strip()
            break
    return entries, preamble


def decode_popuri(rom, off, end):
    """Satu stream format 0x70; None kalau header/stream tidak valid."""
    if off + 4 > end or rom[off] != 0x70:
        return None
    size = int.from_bytes(rom[off:off + 4], "little") >> 8
    if size == 0 or size > MAX_POPURI_SIZE:
        return None
    try:
        bits = decompress.ReadBits(rom, off + 4)
        spec = bits.read_bits(8)
        lzss_fmt = spec & 7
        atom_fmt = (spec >> 3) & 3
        diff_fmt = (spec >> 5) & 7
        if atom_fmt > 2 or lzss_fmt > 4 or diff_fmt > 4:
            return None
        if atom_fmt == 0:
            read = decompress.ReadRaw(bits)
        elif atom_fmt == 1:
            read = decompress.ReadHuff4(bits)
        else:
            read = decompress.ReadHuff8(bits)
        stream = decompress.LZSSDecoder(size)
        if not decompress.LZSS_FUNCS[lzss_fmt](read, stream):
            return None
        if stream.overflew():
            return None
        packed = bits.current_offset - off
        if packed <= 4 or off + packed > end:
            return None
        return packed, size, f"{atom_fmt}{lzss_fmt}{diff_fmt}"
    except Exception:
        return None


def walk_popuri(rom, entry):
    """Urai blob sebagai rangkaian stream 0x70 dari awal sampai akhir.

    Blob dianggap format 0x70 hanya kalau stream-stream itu menghabiskan
    seluruh entri; selain itu hasilnya "campuran" (prefix valid + sisa byte).
    """
    end = entry.offset + entry.size
    cur = entry.offset
    streams = []
    while True:
        got = decode_popuri(rom, cur, end)
        if not got:
            break
        packed, size, fmt = got
        streams.append((cur - entry.offset, packed, size, fmt))
        cur += packed
    if not streams:
        return "mentah", [], ""
    if cur == end:
        return "lzss-0x70", streams, ""
    return "campuran", streams, f"sisa {end - cur} B setelah {len(streams)} stream"


def bios_lz77(rom, off, end):
    """Validasi BIOS LZ77 (header 0x10): (ukuran buka, ukuran packed) atau None."""
    if off + 4 > end:
        return None
    size = int.from_bytes(rom[off:off + 3], "little")
    if size == 0 or size > MAX_POPURI_SIZE:
        return None
    out = 0
    p = off + 4
    while out < size:
        if p >= end:
            return None
        flags = rom[p]
        p += 1
        for bit in range(8):
            if out >= size:
                break
            if flags & (0x80 >> bit):
                if p + 1 >= end:
                    return None
                word = rom[p] | (rom[p + 1] << 8)
                p += 2
                length = (word >> 12) + 3
                dist = (word & 0xFFF) + 1
                if dist > out:
                    return None
                out += length
            else:
                p += 1
                out += 1
    packed = p - off
    if packed > end - off:
        return None
    return size, packed


def bios_rle(rom, off, end):
    """Validasi BIOS RLE (header 0x30): (ukuran buka, ukuran packed) atau None."""
    if off + 4 > end:
        return None
    size = int.from_bytes(rom[off:off + 3], "little")
    if size == 0 or size > MAX_POPURI_SIZE:
        return None
    out = 0
    p = off + 4
    while out < size:
        if p >= end:
            return None
        flag = rom[p]
        p += 1
        if flag & 0x80:
            if p >= end:
                return None
            out += (flag & 0x7F) + 3
            p += 1
        else:
            count = (flag & 0x7F) + 1
            if p + count > end:
                return None
            out += count
            p += count
    packed = p - off
    if packed > end - off:
        return None
    return size, packed


def classify(rom, entry):
    """Isi entry.kind/streams/note; kembalikan info kandidat BIOS yang gugur."""
    blob = rom[entry.offset:entry.offset + min(entry.size, 4)]
    kind, streams, note = walk_popuri(rom, entry)
    rejected = None
    if kind == "mentah" and len(blob) == 4:
        btype = blob[3]
        end = entry.offset + entry.size
        if btype == 0x10:
            got = bios_lz77(rom, entry.offset, end)
            if got:
                kind, note = "bios-lz77", ""
                streams = [(0, got[1], got[0], "0x10")]
            else:
                rejected = ("0x10 LZ77", int.from_bytes(blob[:3], "little"))
        elif btype == 0x30:
            got = bios_rle(rom, entry.offset, end)
            if got:
                kind, note = "bios-rle", ""
                streams = [(0, got[1], got[0], "0x30")]
            else:
                rejected = ("0x30 RLE", int.from_bytes(blob[:3], "little"))
        elif btype in (0x24, 0x28):
            kind = "bios-huffman"
            note = "header Huffman BIOS, belum ada dekoder di repo"
    entry.kind, entry.streams, entry.note = kind, streams, note
    return rejected


def load_symbols():
    """Peta alamat -> nama dari sumber yang di-track (tanpa ELF).

    Fungsi diambil dari `thumb_func_start <nama>` (alamat ada di namanya), data
    dari `.global gUnk_*` di `asm/data/*.s`.
    """
    syms = {}
    for path in sorted((REPO / "asm").rglob("*.s")):
        for m in RE_THUMB.finditer(path.read_text()):
            name = m.group(1)
            h = RE_HEX8.search(name)
            if h:
                syms.setdefault(int(h.group(1), 16), name)
    for path in sorted((REPO / "asm" / "data").glob("*.s")):
        for m in re.finditer(r"\.global\s+(\w+)", path.read_text()):
            name = m.group(1)
            h = RE_HEX8.search(name)
            if h:
                syms.setdefault(int(h.group(1), 16), name)
    return syms


def scan_pointers(rom, entries, syms):
    """Isi entry.pointers/pointer_total dengan pemilik kata pointer."""
    by_addr = {0x08000000 + e.offset: e for e in entries}
    addrs = sorted(syms)
    limit = len(rom) - (len(rom) % 4)
    for off, value in zip(range(0, limit, 4),
                          struct.iter_unpack("<I", rom[:limit])):
        entry = by_addr.get(value[0])
        if entry is None:
            continue
        i = bisect.bisect_right(addrs, 0x08000000 + off) - 1
        owner = syms[addrs[i]] if i >= 0 else f"0x{0x08000000 + off:08X}"
        entry.pointers[owner] += 1
        entry.pointer_total += 1


def stream_cell(entry):
    if not entry.streams:
        return "–", "–"
    packed = "+".join(fmt_size(p) for _, p, _, _ in entry.streams)
    if len(entry.streams) <= 2:
        fmts = " + ".join(f"`{f}`" for _, _, _, f in entry.streams)
        cell = f"{packed} B · {fmts}"
    else:
        unique = sorted({f for _, _, _, f in entry.streams})
        shown = ", ".join(unique[:3])
        if len(unique) > 3:
            shown += f", +{len(unique) - 3}"
        total = sum(p for _, p, _, _ in entry.streams)
        cell = (f"{len(entry.streams)} stream · {fmt_size(total)} B · "
                f"format {shown}")
    return cell, fmt_size(entry.unpacked) + " B"


def owner_cell(entry, max_names=3):
    if not entry.pointer_total:
        return "-"
    ordered = sorted(entry.pointers.items(), key=lambda kv: (-kv[1], kv[0]))
    shown = [f"{n}\u00d7`{name}`" if n > 1 else f"`{name}`"
             for name, n in ordered[:max_names]]
    rest = len(ordered) - len(shown)
    if rest > 0:
        shown.append(f"+{rest}")
    return ", ".join(shown)


def build(entries, rom):
    rejected = []
    for entry in entries:
        got = classify(rom, entry)
        if got:
            rejected.append((entry, got[0], got[1]))
    syms = load_symbols()
    scan_pointers(rom, entries, syms)
    return rejected, bool(syms)


def summary_rows(entries):
    labels = [
        ("bios-lz77", "BIOS LZ77 (`0x10`)"),
        ("bios-rle", "BIOS RLE (`0x30`)"),
        ("bios-huffman", "BIOS Huffman (`0x24`/`0x28`)"),
        ("lzss-0x70", "LZSS/Huffman header `0x70`"),
        ("campuran", "campuran (prefix `0x70` + sisa)"),
        ("mentah", "mentah"),
    ]
    rows = []
    for key, label in labels:
        group = [e for e in entries if e.kind == key]
        if not group and key not in ("lzss-0x70", "mentah"):
            rows.append((label, 0, 0, 0))
            continue
        rows.append((label, len(group), sum(e.size for e in group),
                     sum(e.unpacked for e in group)))
    return rows


def fmt_size(n):
    return f"{n:,}".replace(",", ".")


def render(entries, rejected, have_syms, preamble_line):
    out = []
    out.append("# Inventaris aset `asm/data/data_0813B288.s`")
    out.append("")
    out.append("**Dihasilkan otomatis**, jangan disunting tangan: "
               "`python3 tools/scripts/asset_inventory.py`. Isinya hanya data "
               "yang dibaca dari `baserom.gba` dan sumber `asm/`; tidak ada "
               "build yang dijalankan dan `fomt.gba` tidak disentuh.")
    out.append("")
    out.append("## Cara memperbarui")
    out.append("")
    out.append("```sh")
    out.append("python3 tools/scripts/asset_inventory.py            # tulis dokumen ini")
    out.append("python3 tools/scripts/asset_inventory.py --check    # exit 1 bila basi")
    out.append("python3 tools/scripts/asset_inventory.py --stdout   # lihat tanpa menulis")
    out.append("python3 tools/scripts/asset_inventory.py --json     # data mentah")
    out.append("```")
    out.append("")
    out.append("Untuk membuka satu aset setelah baris tabelnya ditemukan "
               "(contoh `gUnk_08527238` di `0x527238`):")
    out.append("")
    out.append("```sh")
    out.append("python3 tools/scripts/decompress.py baserom.gba 0x527238 /tmp/aset.bin")
    out.append("```")
    out.append("")
    out.append("## Metode")
    out.append("")
    out.append("1. **Daftar blob** — setiap `.global gUnk_*` di berkas itu "
               "dipasangkan dengan `.incbin \"baserom.gba\", offset, ukuran` "
               "di baris berikutnya, jadi alamat dan ukuran tidak diketik "
               "manual. Baris `.incbin` pembuka "
               f"`{preamble_line}` adalah satu region tanpa simbol dan bukan "
               "bagian dari daftar blob.")
    out.append("2. **Format 0x70** — blob diurai berurutan dengan dekoder repo "
               "(`tools/scripts/decompress.py`). Header `0x70` + ukuran 24-bit "
               "hanya dipercaya kalau stream-stream itu valid **dan** "
               "menghabiskan seluruh entri; kalau hanya sebagian, kelasnya "
               "`campuran`. Sub-format dicatat sebagai `atom/lzss/diff` "
               "(`atom`: 0 mentah, 1 Huffman-4, 2 Huffman-8).")
    out.append("3. **BIOS LZ77/RLE** — header `0x10`/`0x30` divalidasi dengan "
               "mendekode stream; kandidat yang gagal tetap `mentah` dan "
               "dicatat di bagian bawah. Huffman BIOS (`0x24`/`0x28`) belum "
               "punya dekoder di repo, jadi blob semacam itu hanya ditandai "
               "kandidat, bukan diklaim compressed.")
    out.append("4. **Pemakai pointer** — seluruh ROM dipindai per kata 32-bit "
               "sejajar; kata yang nilainya `0x08000000 + offset` blob "
               "dihitung satu pointer. Pemiliknya adalah simbol terdekat "
               "sebelum kata itu, diambil dari `thumb_func_start`/`.global` di "
               "`asm/` (alamat ada di nama simbol), sehingga hasilnya "
               "direproduksi tanpa ELF. Pointer ke tengah blob tidak dihitung, "
               "dan pencarian tidak mengenali alamat yang dihitung (`add "
               "pc, #imm` atau base+offset) tanpa kata pointer.")
    out.append("")
    out.append("## Ringkasan")
    out.append("")
    out.append("| kelas | blob | byte di ROM | byte setelah dibuka |")
    out.append("|---|---|---|---|")
    for label, count, size, unpacked in summary_rows(entries):
        out.append(f"| {label} | {count} | {fmt_size(size)} | "
                   f"{fmt_size(unpacked) if unpacked else '–'} |")
    out.append("")
    streams = sum(len(e.streams) for e in entries)
    if streams:
        biggest = max(entries, key=lambda e: len(e.streams))
        out.append(f"Stream `0x70` yang terurai: **{streams}** dalam "
                   f"{sum(1 for e in entries if e.streams)} blob; terbanyak "
                   f"`{biggest.name}` ({len(biggest.streams)} stream).")
        out.append("")
    if have_syms:
        owners = sum(e.pointer_total for e in entries)
        out.append(f"Pointer yang menunjuk awal blob: **{owners}** kata "
                   f"({sum(1 for e in entries if e.pointer_total)} blob punya "
                   f"pemakai, {sum(1 for e in entries if not e.pointer_total)} "
                   f"tanpa pemakai langsung).")
    else:
        out.append("Simbol tidak ditemukan di `asm/`, jadi kolom pemakai "
                   "pointer kosong.")
    out.append("")
    out.append("## Blob per alamat")
    out.append("")
    out.append("| simbol | alamat | ukuran | kelas | stream | hasil buka | "
               "pemakai pointer |")
    out.append("|---|---|---|---|---|---|---|")
    for entry in sorted(entries, key=lambda e: e.offset):
        stream, unpack_cell = stream_cell(entry)
        kind = entry.kind
        if entry.note:
            kind = f"{kind}<br><sub>{entry.note}</sub>"
        out.append(f"| `{entry.name}` | `{entry.offset:06X}` | "
                   f"{fmt_size(entry.size)} | {kind} | {stream} | "
                   f"{unpack_cell} | {owner_cell(entry)} |")
    out.append("")
    if rejected:
        out.append("## Kandidat header BIOS yang gugur")
        out.append("")
        out.append("Byte tipe kebetulan berbentuk header BIOS, tetapi stream-"
                   "nya tidak valid (atau menunjuk ukuran yang mustahil). "
                   "Semuanya tetap dihitung `mentah`.")
        out.append("")
        out.append("| simbol | alamat | byte tipe | ukuran deklarasi |")
        out.append("|---|---|---|---|")
        for entry, label, declared in rejected:
            out.append(f"| `{entry.name}` | `{entry.offset:06X}` | `{label}` | "
                       f"{fmt_size(declared)} |")
        out.append("")
    return "\n".join(out) + "\n"


def as_json(entries, rejected):
    return {
        "blobs": [{
            "name": e.name,
            "offset": f"0x{e.offset:06X}",
            "size": e.size,
            "kind": e.kind,
            "note": e.note,
            "streams": [{"at": at, "packed": p, "unpacked": u, "format": f}
                        for at, p, u, f in e.streams],
            "unpacked": e.unpacked,
            "pointer_total": e.pointer_total,
            "pointers": dict(e.pointers.most_common()),
        } for e in entries],
        "bios_rejected": [{"name": e.name, "offset": f"0x{e.offset:06X}",
                           "header": label, "declared": declared}
                          for e, label, declared in rejected],
        "summary": [{"kind": label, "count": c, "rom_bytes": s,
                     "unpacked_bytes": u}
                    for label, c, s, u in summary_rows(entries)],
    }


def analyze(asm=DEFAULT_ASM, rom=DEFAULT_ROM):
    """-> (teks dokumen, entries, kandidat header BIOS yang gugur)."""
    entries, preamble = parse_entries(asm)
    rejected, have_syms = build(entries, rom.read_bytes())
    return render(entries, rejected, have_syms,
                  preamble or "(tanpa pembuka)"), entries, rejected


def document(asm=DEFAULT_ASM, rom=DEFAULT_ROM):
    """Teks `docs/decomp/ASET-INVENTARIS.md` untuk isi saat ini.

    Dipakai `--check` dan gate `check_docs.py`, supaya keduanya membandingkan
    dokumen terhadap hasil generate yang sama.
    """
    return analyze(asm, rom)[0]


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--asm", type=Path, default=DEFAULT_ASM)
    ap.add_argument("--rom", type=Path, default=DEFAULT_ROM)
    ap.add_argument("--stdout", action="store_true")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--check", action="store_true",
                    help="exit 1 bila dokumen tidak sama dengan hasil generate")
    args = ap.parse_args(argv)

    if not args.asm.exists():
        print(f"MASALAH sumber tidak ada: {args.asm}", file=sys.stderr)
        return 1
    if not args.rom.exists():
        print(f"MASALAH ROM tidak ada: {args.rom}", file=sys.stderr)
        return 1

    text, entries, rejected = analyze(args.asm, args.rom)
    if args.json:
        print(json.dumps(as_json(entries, rejected), indent=1))
        return 0

    if args.stdout:
        sys.stdout.write(text)
        return 0
    if args.check:
        existing = DOC.read_text() if DOC.exists() else ""
        if existing != text:
            print(f"BASI: {DOC.relative_to(REPO)} — jalankan "
                  f"python3 tools/scripts/asset_inventory.py", file=sys.stderr)
            return 1
        print("dokumen aset sinkron")
        return 0
    DOC.parent.mkdir(parents=True, exist_ok=True)
    DOC.write_text(text)
    print(f"ditulis: {DOC.relative_to(REPO)} "
          f"({len(entries)} blob, {sum(1 for e in entries if e.streams)} "
          f"ber-stream)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
