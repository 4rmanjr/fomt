#!/usr/bin/env python3
"""popuri.py — codec `Unpack` (format popuri): token stream <-> byte terkompresi.

Decoder aslinya ada di `tools/scripts/decompress.py` (`unpack`). Modul ini
menambahkan arah sebaliknya: **parse** byte terkompresi menjadi token LZ, dan
**assemble** token itu kembali menjadi byte yang identik dengan ROM. Dengan
begitu segmen payload `packed` tidak lagi menyimpan blob buram: yang disimpan
struktur (header, ladder jarak, tabel Huffman, token), sedangkan byte
terkompresi dan byte hasil dekompresi dihitung ulang.

Format stream (dibaca `decompress.py`):

```text
+0x00 u32   ukuran hasil << 8 | 0x70
+0x04 u8    flag: lzss (bit 0..2), atom (bit 3..4), diff (bit 5..7)
            atom 0 = 8 bit mentah, 1 = Huffman 4 bit, 2 = Huffman 8 bit
            lzss 2 dan 3 yang dipakai payload ini
lalu (atom != 0) tabel Huffman: per level `bits` bit jumlah entri + nilainya
lalu ladder jarak: 7 entri (lzss 2) / 3 entri (lzss 3), 4 bit each (bits-1)
lalu token sampai ukuran hasil terpenuhi
```

Token (disimpan sebagai satu string, dipisah `;`):

```text
l:<hex>              literal run, byte apa adanya
m:<idx>,<dist>,<len> match bentuk pendek (cabang idx di ladder)
M:<idx>,<dist>,<len> match bentuk panjang (vli + idx + dist + sisa)
```

`dist`/`len` dalam byte (lzss 3 menyimpan pasangan 2 B, jadi selalu genap).
Cabang `m`/`M` disimpan karena decoder menerima keduanya untuk panjang yang
sama; tanpa cabang, byte hasil assemble tidak bisa identik.

  python3 tools/assets/popuri.py parse --rom baserom.gba --offset 0x6ECAAC
  python3 tools/assets/popuri.py verify --rom baserom.gba --offset 0x6ECAAC
"""
import argparse
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import decompress  # noqa: E402 - decoder popuri yang sudah ada

HEAD_MAGIC = 0x70
MAX_SIZE = 0x40000
LZ_ENTRIES = {2: 7, 3: 3}
ATOM_BITS = {0: 8, 1: 4, 2: 8}


class BitWriter:
    """Bit MSB-first ke word 32 bit little endian (kebalikan `ReadBits`)."""

    def __init__(self):
        self.words = []
        self.acc = 0
        self.n = 0

    def write(self, value, bits):
        if bits < 0 or value < 0 or value >> bits:
            raise ValueError(f"nilai {value} tidak masuk {bits} bit")
        for shift in range(bits - 1, -1, -1):
            self.acc = (self.acc << 1) | ((value >> shift) & 1)
            self.n += 1
            if self.n == 32:
                self.words.append(self.acc & 0xFFFFFFFF)
                self.acc = 0
                self.n = 0

    def bytes(self):
        out = bytearray()
        for word in self.words:
            out += word.to_bytes(4, "little")
        if self.n:
            out += ((self.acc << (32 - self.n)) & 0xFFFFFFFF).to_bytes(4, "little")
        return bytes(out)


def ladder_ranges(bits_list):
    """-> [(jarak awal, jumlah bit)] untuk ladder popuri."""
    start = 1
    out = []
    for bits in bits_list:
        if not isinstance(bits, int) or not 1 <= bits <= 16:
            raise ValueError(f"ladder {bits!r} di luar 1..16")
        out.append((start, bits))
        start += 1 << bits
    return out


def _tokens_from_text(text):
    tokens = []
    for item in text.split(";"):
        if not item:
            continue
        tag, _, rest = item.partition(":")
        if tag == "l":
            try:
                tokens.append(["l", bytes.fromhex(rest)])
            except ValueError:
                raise ValueError(f"token literal tidak valid: {item!r}")
        elif tag in ("m", "M"):
            parts = rest.split(",")
            if len(parts) != 3:
                raise ValueError(f"token match tidak valid: {item!r}")
            try:
                tokens.append([tag, int(parts[0]), int(parts[1]), int(parts[2])])
            except ValueError:
                raise ValueError(f"token match bukan angka: {item!r}")
        else:
            raise ValueError(f"token {item!r} tidak dikenal (l/m/M)")
    return tokens


def _tokens_to_text(tokens):
    out = []
    for tok in tokens:
        if tok[0] == "l":
            out.append("l:" + tok[1].hex())
        else:
            out.append(f"{tok[0]}:{tok[1]},{tok[2]},{tok[3]}")
    return ";".join(out)


def assemble(seg):
    """Segmen payload `packed` -> byte terkompresi yang identik dengan ROM."""
    offset = seg.get("offset")
    label = f"payload {offset:#x}" if isinstance(offset, int) else "payload ?"
    fmt = seg.get("format")
    if not isinstance(fmt, int) or not 0 <= fmt <= 0xFF:
        raise ValueError(f"{label}: format wajib u8")
    lz = fmt & 7
    atom = (fmt >> 3) & 3
    diff = (fmt >> 5) & 7
    if lz not in LZ_ENTRIES:
        raise ValueError(f"{label}: lzss {lz} belum didukung (pakai 2 atau 3)")
    if atom not in ATOM_BITS:
        raise ValueError(f"{label}: atom {atom} tidak dikenal")
    if diff > 4:
        raise ValueError(f"{label}: diff {diff} tidak dikenal")
    size = seg.get("unpack_size")
    if not isinstance(size, int) or not 0 < size <= MAX_SIZE:
        raise ValueError(f"{label}: unpack_size {size!r} di luar 1..{MAX_SIZE}")
    ladder_bits = seg.get("ladder")
    if not isinstance(ladder_bits, list) or len(ladder_bits) != LZ_ENTRIES[lz]:
        raise ValueError(
            f"{label}: ladder wajib {LZ_ENTRIES[lz]} entri untuk lzss {lz}")
    ladder = ladder_ranges(ladder_bits)

    writer = BitWriter()
    writer.write((size << 8) | HEAD_MAGIC, 32)
    writer.write(fmt, 8)

    codes = None
    if atom:
        huff = seg.get("huffman")
        if not isinstance(huff, dict) or huff.get("bits") != ATOM_BITS[atom]:
            raise ValueError(
                f"{label}: huffman.bits wajib {ATOM_BITS[atom]} untuk atom {atom}")
        levels = huff.get("levels")
        if not isinstance(levels, list):
            raise ValueError(f"{label}: huffman.levels wajib daftar")
        bits = huff["bits"]
        for depth in range(2 * bits):
            level = levels[depth] if depth < len(levels) else [0]
            if not isinstance(level, list) or not level:
                raise ValueError(f"{label}: huffman level {depth} tidak valid")
            writer.write(level[0], bits)
            for value in level[1:]:
                writer.write(value, bits)
        codes = {}
        base = 0
        for depth in range(2 * bits):
            level = levels[depth] if depth < len(levels) else [0]
            for index, value in enumerate(level[1:]):
                codes.setdefault(value, (base + index, depth + 1))
            base = (base + level[0]) << 1
    for _start, bits in ladder:
        writer.write(bits - 1, 4)

    def emit_byte(value):
        if atom == 0:
            writer.write(value, 8)
            return
        symbols = (value >> 4, value & 15) if atom == 1 else (value,)
        for symbol in symbols:
            if symbol not in codes:
                raise ValueError(f"{label}: simbol Huffman {symbol} tidak ada")
            code, depth = codes[symbol]
            writer.write(code, depth)

    def emit_vli(value, atom_bits):
        mask = (1 << (atom_bits - 1)) - 1
        if value < 0:
            raise ValueError(f"{label}: vli negatif")
        atoms = []
        while True:
            atoms.append(value & mask)
            value >>= atom_bits - 1
            if not value:
                break
        for position, atom_value in enumerate(reversed(atoms)):
            last = position == len(atoms) - 1
            writer.write((atom_value << 1) | (0 if last else 1), atom_bits)

    def find_index(distance):
        for index, (start, bits) in enumerate(ladder):
            if start <= distance < start + (1 << bits):
                return index
        raise ValueError(f"{label}: jarak {distance} di luar ladder")

    tokens = seg.get("tokens")
    if not isinstance(tokens, str):
        raise ValueError(f"{label}: tokens wajib string")
    total = 0
    for tok in _tokens_from_text(tokens):
        tag = tok[0]
        if tag == "l":
            data = tok[1]
            if not data:
                raise ValueError(f"{label}: literal run kosong")
            if total + len(data) > size:
                raise ValueError(f"{label}: literal melewati unpack_size")
            if lz == 2:
                if len(data) == 1:
                    writer.write(0, 1)
                    emit_byte(data[0])
                else:
                    writer.write(1, 1)
                    writer.write(7, 3)
                    emit_vli(len(data) - 1, 4)
                    writer.write(0, 1)
                    for value in data:
                        emit_byte(value)
            else:
                if len(data) % 2:
                    raise ValueError(f"{label}: literal lzss 3 wajib genap")
                if len(data) == 2:
                    writer.write(0, 1)
                    emit_byte(data[0])
                    emit_byte(data[1])
                else:
                    writer.write(1, 1)
                    writer.write(3, 2)
                    emit_vli(len(data) // 2 - 1, 3)
                    writer.write(0, 1)
                    for value in data:
                        emit_byte(value)
            total += len(data)
            continue
        index, distance, length = tok[1], tok[2], tok[3]
        if not 0 <= index < len(ladder):
            raise ValueError(f"{label}: cabang match {index} di luar ladder")
        start, bits = ladder[index]
        unit = 2 if lz == 3 else 1
        if distance % unit or not start <= distance // unit < start + (1 << bits):
            raise ValueError(
                f"{label}: jarak {distance} tidak masuk cabang {index}")
        if total + length > size:
            raise ValueError(f"{label}: match melewati unpack_size")
        if lz == 2:
            if tag == "m":
                if not 3 <= length <= 18:
                    raise ValueError(f"{label}: panjang match {length} di luar 3..18")
                writer.write(1, 1)
                writer.write(index, 3)
                writer.write(distance - start, bits)
                writer.write(length - 3, 4)
            else:
                if length < 3:
                    raise ValueError(f"{label}: panjang match {length} < 3")
                writer.write(1, 1)
                writer.write(7, 3)
                emit_vli((length - 3) >> 4, 4)
                writer.write(1, 1)
                writer.write(index, 3)
                writer.write(distance - start, bits)
                writer.write((length - 3) & 15, 4)
        else:
            if distance % 2 or length % 2:
                raise ValueError(f"{label}: jarak/panjang lzss 3 wajib genap")
            half = length // 2
            if tag == "m":
                if not 2 <= half <= 9:
                    raise ValueError(f"{label}: panjang match {length} di luar 4..18")
                writer.write(1, 1)
                writer.write(index, 2)
                writer.write(distance // 2 - start, bits)
                writer.write(half - 2, 3)
            else:
                if half < 2:
                    raise ValueError(f"{label}: panjang match {length} < 4")
                writer.write(1, 1)
                writer.write(3, 2)
                emit_vli((half - 2) >> 3, 3)
                writer.write(1, 1)
                writer.write(index, 2)
                writer.write(distance // 2 - start, bits)
                writer.write((half - 2) & 7, 3)
        total += length
    if total != size:
        raise ValueError(f"{label}: token menghasilkan {total} B != {size} B")
    return writer.bytes()


def decode(data):
    """Byte terkompresi -> (hasil, format_spec, ladder_spec) lewat decoder asli."""
    return decompress.unpack(data, 0)


def parse_bytes(data, offset=0):
    """Byte ROM -> segmen payload penuh (format/ladder/huffman/tokens)."""
    head = int.from_bytes(data[offset:offset + 4], "little")
    if head & 0xFF != HEAD_MAGIC:
        raise ValueError(f"header {head:#010x} bukan popuri (magic 0x70)")
    size = head >> 8
    doc = {"format": 0, "ladder": [], "huffman": None, "tokens": "",
           "unpack_size": size}
    reader = decompress.ReadBits(data, offset + 4)
    fmt = reader.read_bits(8)
    doc["format"] = fmt
    lz = fmt & 7
    atom = (fmt >> 3) & 3
    if lz not in LZ_ENTRIES:
        raise ValueError(f"lzss {lz} belum didukung")
    if atom:
        bits = ATOM_BITS[atom]
        tree = decompress.decode_huffman_tree(reader, bits)
        if tree is None:
            raise ValueError("tabel Huffman tidak lengkap")
        levels = _levels_from_tree(tree)
        doc["huffman"] = {"bits": bits, "levels": levels}
        base = decompress.ReadHuff4 if atom == 1 else decompress.ReadHuff8
        read = base.__new__(base)
        decompress.ReadRaw.__init__(read, reader)
        read.huff_tree = tree
    else:
        read = decompress.ReadRaw(reader)
    ladder, _spec = decompress.decode_lzss_format_ladder(read, LZ_ENTRIES[lz])
    doc["ladder"] = [entry.distance_bits for entry in ladder]
    tokens = []
    total = 0
    while total < size:
        if lz == 2:
            if read.read_bits(1) == 0:
                tokens.append(["l", bytes([read.read_byte()])])
                total += 1
                continue
            index = read.read_bits(3)
            if index < 7:
                distance = ladder[index].read_distance(read)
                length = 3 + read.read_bits(4)
                tokens.append(["m", index, distance, length])
            else:
                count = decompress.vli(read, 4)
                if read.read_bits(1) == 0:
                    data = bytes(read.read_byte() for _ in range(count + 1))
                    tokens.append(["l", data])
                    total += count + 1
                    continue
                index = read.read_bits(3)
                distance = ladder[index].read_distance(read)
                length = (count << 4) + read.read_bits(4) + 3
                tokens.append(["M", index, distance, length])
        else:
            if read.read_bits(1) == 0:
                tokens.append(["l", bytes([read.read_byte(), read.read_byte()])])
                total += 2
                continue
            index = read.read_bits(2)
            if index < 3:
                distance = ladder[index].read_distance(read) * 2
                length = (2 + read.read_bits(3)) * 2
                tokens.append(["m", index, distance, length])
            else:
                count = decompress.vli(read, 3)
                if read.read_bits(1) == 0:
                    data = bytearray()
                    for _ in range(count + 1):
                        data += bytes([read.read_byte(), read.read_byte()])
                    tokens.append(["l", bytes(data)])
                    total += 2 * (count + 1)
                    continue
                index = read.read_bits(2)
                distance = ladder[index].read_distance(read) * 2
                length = ((count << 3) + read.read_bits(3) + 2) * 2
                tokens.append(["M", index, distance, length])
        total += length
    doc["tokens"] = _tokens_to_text(tokens)
    return doc


def _levels_from_tree(tree):
    """Pohon hasil decoder -> entri per level (count + nilai urut path)."""
    levels = [[] for _ in range(32)]

    def walk(node, depth):
        entry = tree[node]
        if entry & 0x80000000:
            if depth >= len(levels):
                raise ValueError(f"kedalaman Huffman {depth} terlalu besar")
            levels[depth - 1].append(entry & 0x7FFFFFF)
            return
        for bit in (0, 1):
            walk((entry >> (bit * 16)) & 0xFFFF, depth + 1)

    walk(0, 0)
    out = [[len(level)] + level for level in levels]
    while out and out[-1][0] == 0:
        out.pop()
    return out


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="command", required=True)
    for name in ("parse", "verify"):
        cmd = sub.add_parser(name)
        cmd.add_argument("--rom", default="baserom.gba")
        cmd.add_argument("--offset", type=lambda s: int(s, 0), required=True)
        cmd.add_argument("--size", type=lambda s: int(s, 0), default=None)
    args = ap.parse_args(argv)
    rom = Path(args.rom).read_bytes()
    seg = parse_bytes(rom, args.offset)
    seg["offset"] = 0
    data = assemble(seg)
    size = args.size if args.size is not None else len(data)
    expected = rom[args.offset:args.offset + size]
    unpacked, fmt, ladder_spec = decode(data)
    if args.command == "parse":
        print(f"format={seg['format']} ladder={seg['ladder']} "
              f"tokens={seg['tokens'].count(';') + 1} "
              f"compressed={len(data)} unpack={len(unpacked)}")
        return 0
    ok = data == expected and len(unpacked) == seg["unpack_size"]
    print(f"format={seg['format']} ladder={ladder_spec} compressed={len(data)} "
          f"unpack={len(unpacked)} status={'MATCH' if ok else 'MISMATCH'}")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
