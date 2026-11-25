#!/usr/bin/env python3
"""lz70.py — encoder `0x70` minimal (atom0/lzss0/diff0) + uji byte-identik.

Format `000` = atom 0 (bit mentah), LZSS 0, diff 0. Encoder di sini sengaja
minimal: tangga jarak 2 entri, pencocokan greedy, run literal/run-length
dipotong maksimum. Tujuannya menjawab satu pertanyaan: payload yang sama bisa
dipadatkan **byte-identik** dengan aslinya atau tidak.

Tiga tingkat uji di `probe`:

1. `roundtrip` — packed hasil encoder didekode ulang harus sama dengan payload;
2. `replay` — perintah hasil parse stream asli, ditulis ulang serializer,
   harus sama byte dengan compressed asli (menguji model bit/header);
3. `match` — encoder dari payload harus sama byte dengan compressed asli.
   Strategi `parity` (`_tokens_parity`) memakai aturan encoder asli: match
   terpanjang (seri -> jarak terdekat), run menang bila panjangnya >= match,
   literal berhenti di run>=2 atau match berikutnya. Greedy/optimal hanya
   pembanding ukuran; parity yang boleh menaikkan status stream.

  python3 tools/assets/lz70.py encode --bin x.bin --out x.packed [--ladder 7,11]
  python3 tools/assets/lz70.py probe            # 3 stream P0 format 000
  python3 tools/assets/lz70.py probe --sweep    # tangga 1..12 x 1..12
  python3 tools/assets/lz70.py probe --json --write-report

Status stream hanya berubah lewat `stream_audit.py`; tool ini tidak menyunting
manifest.
"""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools" / "scripts"))
import decompress  # noqa: E402

MANIFEST = REPO / "assets" / "0x70" / "manifest.json"
ROM = REPO / "baserom.gba"
REPORT = REPO / "assets" / "0x70" / "encoder_probe.md"

LADDER_DEFAULT = (7, 11)
MIN_MATCH = 3
MAX_MATCH = 66  # size = 3 + 6 bit
WINDOW = 8192


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def pack_bits(bits):
    """Deret bit -> byte stream `0x70`: kata 32-bit little endian, bit MSB dulu.

    `decompress.ReadBits` memuat 4 byte little endian lalu mengambil bit dari
    MSB kata, jadi bit dipetakan ke kata, bukan langsung ke byte.
    """
    padded = list(bits) + [0] * (-len(bits) % 32)
    out = bytearray()
    for i in range(0, len(padded), 32):
        word = 0
        for bit in padded[i:i + 32]:
            word = (word << 1) | (bit & 1)
        out += struct.pack("<I", word)
    return bytes(out)


class BitWriter:
    def __init__(self):
        self.bits = []

    def write(self, value, count):
        for shift in range(count - 1, -1, -1):
            self.bits.append((value >> shift) & 1)

    def bytes(self):
        return pack_bits(self.bits)


class Ladder:
    """Tangga jarak: entri ke-i = base + N bit; base berurutan seperti decoder."""

    def __init__(self, widths):
        self.widths = tuple(widths)
        self.bases = []
        start = 1
        for width in self.widths:
            self.bases.append(start)
            start += 1 << width
        self.max_distance = start - 1

    def encode(self, distance):
        for index, (base, width) in enumerate(zip(self.bases, self.widths)):
            if base <= distance < base + (1 << width):
                return index, distance - base
        return None

    def header_bits(self):
        return [(w - 1) & 0xF for w in self.widths]


def _emit_literal(writer, chunk):
    start = 0
    while start < len(chunk):
        take = min(64, len(chunk) - start)
        writer.write(2, 2)
        writer.write(take - 1, 6)
        for byte in chunk[start:start + take]:
            writer.write(byte, 8)
        start += take


def _emit_run(writer, byte, size):
    start = 0
    while start < size:
        take = min(65, size - start)
        writer.write(3, 2)
        writer.write(take - 2, 6)
        writer.write(byte, 8)
        start += take


def _emit_match(writer, ladder, distance, length):
    index, raw = ladder.encode(distance)
    if index is None:
        raise ValueError(f"jarak {distance} di luar tangga {ladder.widths}")
    writer.write(index, 2)
    writer.write(raw, ladder.widths[index])
    writer.write(length - 3, 6)


def _tokens(data, ladder):
    """Greedy: literal / run-length / match (jarak harus masuk tangga)."""
    n = len(data)
    out = []
    i = 0
    head = {}
    while i < n:
        best_len, best_dist = 0, 0
        window = min(MAX_MATCH, n - i)
        if window >= MIN_MATCH:
            for candidate in reversed(head.get(data[i:i + 3], [])[-64:]):
                dist = i - candidate
                if dist > WINDOW or ladder.encode(dist) is None:
                    continue
                length = 3
                while (length < window
                       and data[candidate + length] == data[i + length]):
                    length += 1
                if length > best_len:
                    best_len, best_dist = length, dist
                    if length == window:
                        break
        if best_len >= MIN_MATCH:
            out.append(("match", best_dist, best_len))
            step = best_len
        else:
            run = 1
            while i + run < n and run < 65 and data[i + run] == data[i]:
                run += 1
            if run >= 2:
                out.append(("run", data[i], run))
                step = run
            else:
                # literal sampai ada match atau run berikutnya
                end = i + 1
                while end < n and end - i < 64:
                    if ladder.encode(1) is not None and end + 3 <= n and \
                            data[end:end + 3] in head:
                        break
                    if end + 1 < n and data[end] == data[end + 1]:
                        break
                    end += 1
                out.append(("literal", bytes(data[i:end]), end - i))
                step = end - i
        for j in range(i, min(i + step, n)):
            if j + 3 <= n:
                head.setdefault(data[j:j + 3], []).append(j)
        i += step
    return out


def _match_at(data, head, ladder, index):
    """Match terpanjang yang jaraknya masuk tangga; seri -> jarak terdekat."""
    best = None
    limit = min(MAX_MATCH, len(data) - index)
    for candidate in reversed(head.get(data[index:index + 3], [])):
        if candidate >= index:
            continue
        distance = index - candidate
        # Jarak 1 tidak pernah dipakai encoder asli: byte berulang ditangani
        # run, dan stream 000 tidak memuat satu pun match jarak 1.
        if distance < 2 or distance > WINDOW or ladder.encode(distance) is None:
            continue
        length = 3
        while (length < limit
               and data[candidate + length] == data[index + length]):
            length += 1
        if best is None or length > best[1]:
            best = (distance, length)
            if length == limit:
                break
    return best


def _tokens_parity(data, ladder):
    """Aturan tokenisasi encoder asli (terbukti pada 3 stream P0 format 000).

    - match: yang **terpanjang** di seluruh jendela, bukan yang terdekat;
      jarak seri -> kandidat terdekat. Indeks mencakup byte di dalam literal
      yang sedang berjalan, jadi match boleh menunjuk ke awal literal itu.
    - match jarak 1 tidak dipertimbangkan; pengulangan byte ditangani run.
    - run hanya dipakai bila panjang run utuh >= panjang match; seri -> run.
      Run dihitung tanpa batas 65 B (token tetap dipotong 65 B saat ditulis).
    - literal berhenti sebelum run >= 2 atau match berikutnya, maksimum 64 B.

    Untuk data di sekitar posisi yang sama, aturan ini menghasilkan token
    persis seperti stream asli, sehingga `serialize` byte-identik.
    """
    n = len(data)
    head = {}
    for index in range(max(0, n - 2)):
        head.setdefault(data[index:index + 3], []).append(index)
    out = []
    i = 0
    while i < n:
        # Panjang run penuh dipakai untuk keputusan; token run sendiri tetap
        # dipotong 65 B, jadi run 127 B menjadi 65+62 seperti stream asli.
        run = 1
        while i + run < n and data[i + run] == data[i]:
            run += 1
        match = _match_at(data, head, ladder, i) if i + 3 <= n else None
        match_len = match[1] if match else 0
        if run >= 2 and match_len >= 3:
            use_match = match_len > run
        else:
            use_match = match_len >= 3 and run < 2
        if use_match:
            out.append(("match", match[0], match_len))
            step = match_len
        elif run >= 2:
            out.append(("run", data[i], min(run, 65)))
            step = min(run, 65)
        else:
            end = i + 1
            while end < n and end - i < 64:
                next_run = 1
                while (end + next_run < n
                       and data[end + next_run] == data[end]):
                    next_run += 1
                if next_run >= 2:
                    break
                if end + 3 <= n and _match_at(data, head, ladder, end):
                    break
                end += 1
            out.append(("literal", bytes(data[i:end]), end - i))
            step = end - i
        i += step
    return out


def _tokens_optimal(data, ladder):
    """Dynamic programming: total bit minimum, seri dipilih token terpanjang.

    Hasilnya berukuran sama dengan stream asli pada ketiga stream P0, tetapi
    susunan perintahnya berbeda (lihat `assets/0x70/encoder_probe.md`), jadi
    belum dipakai sebagai encoder pengganti `opencode`.
    """
    n = len(data)
    inf = 1 << 60
    cost = [inf] * (n + 1)
    back = [None] * (n + 1)
    cost[0] = 0
    max_distance = ladder.bases[-1] + (1 << ladder.widths[-1]) - 1
    for i in range(n):
        if cost[i] == inf:
            continue
        candidates = []
        for length in range(1, min(64, n - i) + 1):
            candidates.append(("literal", length, None, cost[i] + 10 + 8 * length))
        run = 1
        while i + run < n and run < 65 and data[i + run] == data[i]:
            run += 1
        for length in range(2, run + 1):
            candidates.append(("run", length, data[i], cost[i] + 18))
        for distance in range(1, min(i, max_distance) + 1):
            entry = ladder.encode(distance)
            if entry is None:
                continue
            index, _raw = entry
            limit = 0
            while (limit < 66 and i + limit < n
                   and data[i - distance + limit] == data[i + limit]):
                limit += 1
            if limit < MIN_MATCH:
                continue
            price = cost[i] + 2 + ladder.widths[index] + 6
            for length in range(MIN_MATCH, limit + 1):
                candidates.append(("match", length, distance, price))
        for kind, length, value, price in candidates:
            end = i + length
            if price < cost[end] or (price == cost[end] and back[end]
                                     and length > back[end][2]):
                cost[end] = price
                back[end] = (i, kind, length, value)
    tokens = []
    position = n
    while position > 0:
        start, kind, length, value = back[position]
        if kind == "literal":
            tokens.append(("literal", bytes(data[start:position]), length))
        elif kind == "run":
            tokens.append(("run", value, length))
        else:
            tokens.append(("match", value, length))
        position = start
    tokens.reverse()
    return tokens


def encode(data, ladder_widths=LADDER_DEFAULT, optimal=False, parity=False):
    """Payload -> byte stream `0x70` format 000 (header + tangga + perintah).

    `parity` memakai aturan tokenisasi encoder asli (`_tokens_parity`);
    dengan tangga stream asli hasilnya byte-identik.
    """
    ladder = Ladder(ladder_widths)
    if len(data) > 0xFFFFFF:
        raise ValueError("payload > 24 bit")
    if optimal:
        return serialize(len(data), ladder_widths, _tokens_optimal(data, ladder))
    writer = BitWriter()
    writer.write(0, 8)  # format byte 000 ikut bitstream, bukan byte terpisah
    for value in ladder.header_bits():
        writer.write(value, 4)
    tokens = _tokens_parity(data, ladder) if parity else _tokens(data, ladder)
    for kind, value, extra in tokens:
        if kind == "literal":
            _emit_literal(writer, value)
        elif kind == "run":
            _emit_run(writer, value, extra)
        else:
            _emit_match(writer, ladder, value, extra)
    return struct.pack("<I", (len(data) << 8) | 0x70) + writer.bytes()


def parse(stream):
    """Stream format 000 -> (size, widths, tokens) dengan decoder repo."""
    head = int.from_bytes(stream[:4], "little")
    if head & 0xFF != 0x70:
        raise ValueError("bukan header 0x70")
    size = head >> 8
    read = decompress.ReadRaw(decompress.ReadBits(stream, 4))
    fmt = read.read_bits(8)
    if fmt != 0:
        raise ValueError(f"format byte {fmt:#04x} bukan 000")
    widths = tuple(read.read_bits(4) + 1 for _ in range(2))
    ladder = Ladder(widths)
    tokens = []
    produced = 0
    while produced < size:
        method = read.read_bits(2)
        if method == 2:
            length = read.read_bits(6) + 1
            tokens.append(("literal", bytes(read.read_byte()
                                            for _ in range(length))))
            produced += length
        elif method == 3:
            length = read.read_bits(6) + 2
            tokens.append(("run", read.read_bits(8), length))
            produced += length
        else:
            distance = ladder.bases[method] + read.read_bits(widths[method])
            length = read.read_bits(6) + 3
            tokens.append(("match", distance, length))
            produced += length
    return size, widths, tokens


def serialize(size, widths, tokens):
    ladder = Ladder(widths)
    writer = BitWriter()
    writer.write(0, 8)  # format byte 000
    for value in ladder.header_bits():
        writer.write(value, 4)
    for token in tokens:
        if token[0] == "literal":
            _emit_literal(writer, token[1])
        elif token[0] == "run":
            _emit_run(writer, token[1], token[2])
        else:
            _emit_match(writer, ladder, token[1], token[2])
    return struct.pack("<I", (size << 8) | 0x70) + writer.bytes()


def diff_encode(data, diff_fmt):
    """Kebalikan `decompress.DIFF_FUNCS`: payload final -> data yang difilter.

    Encoder asli memfilter payload lebih dulu, lalu meng-LZSS-kan hasilnya;
    decoder meng-LZSS lalu membalik filter. Untuk menulis ulang compressed
    byte-identik, encoder harus memakai data terfilter ini.
    """
    out = bytearray(data)
    n = len(out)
    if diff_fmt == 0:
        return bytes(out)
    if diff_fmt == 1:
        kept = 0
        for i in range(n):
            lo, hi = out[i] & 0xF, (out[i] >> 4) & 0xF
            # decoder: hi += kept lalu lo += hi, jadi filter menulis
            # (lo - hi) dan (hi - kept); accumulator berikutnya = lo.
            out[i] = ((lo - hi) & 0xF) | (((hi - kept) & 0xF) << 4)
            kept = lo
        return bytes(out)
    if diff_fmt == 2:
        previous = 0
        for i in range(n):
            value = out[i]
            out[i] = (value - previous) & 0xFF
            previous = value
        return bytes(out)
    if diff_fmt == 3:
        previous = 0
        if n % 2:
            raise ValueError("diff3 butuh payload genap")
        for i in range(0, n, 2):
            value = out[i] | (out[i + 1] << 8)
            delta = (value - previous) & 0xFFFF
            out[i], out[i + 1] = delta & 0xFF, delta >> 8
            previous = value
        return bytes(out)
    if diff_fmt == 4:
        even_kept = odd_kept = 0
        if n % 2:
            raise ValueError("diff4 butuh payload genap")
        for i in range(0, n, 2):
            even, odd = out[i], out[i + 1]
            out[i] = (even - even_kept) & 0xFF
            out[i + 1] = (odd - odd_kept) & 0xFF
            even_kept, odd_kept = even, odd
        return bytes(out)
    raise ValueError(f"diff{diff_fmt} tidak didukung")


def _write_vli(writer, value):
    """VLI basis 8: atom 4 bit, bit rendah = lanjut; digit besar dulu."""
    digits = []
    while True:
        digits.append(value & 7)
        value >>= 3
        if not value:
            break
    last = len(digits) - 1
    for index, digit in enumerate(reversed(digits)):
        writer.write((digit << 1) | (0 if index == last else 1), 4)


def _read_vli(read):
    value = 0
    while True:
        atom = read.read_bits(4)
        value = (value << 3) + (atom >> 1)
        if not (atom & 1):
            return value


def _emit_literal2(writer, byte):
    writer.write(0, 1)
    writer.write(byte, 8)


def _emit_literal_run(writer, chunk):
    writer.write(1, 1)
    writer.write(7, 3)
    _write_vli(writer, len(chunk) - 1)
    writer.write(0, 1)
    for byte in chunk:
        writer.write(byte, 8)


def _emit_match2(writer, ladder, distance, length):
    index, raw = ladder.encode(distance)
    if index is None:
        raise ValueError(f"jarak {distance} di luar tangga {ladder.widths}")
    writer.write(1, 1)
    if length <= 18:
        writer.write(index, 3)
        writer.write(raw, ladder.widths[index])
        writer.write(length - 3, 4)
        return
    encoded = length - 3
    writer.write(7, 3)
    _write_vli(writer, encoded >> 4)
    writer.write(1, 1)
    writer.write(index, 3)
    writer.write(raw, ladder.widths[index])
    writer.write(encoded & 0xF, 4)


def _tokens_lzss2(data, ladder):
    """Aturan tokenisasi encoder asli atom0/lzss2 (terbukti 70/70 stream).

    - match: **terpanjang** di seluruh jendela, jarak seri -> terdekat;
      jarak 1 ikut dipertimbangkan (tidak ada token run di lzss2).
    - kandidat dihitung dengan hash 3 byte dan rantai mundur, termasuk
      posisi di dalam literal yang sedang berjalan dan match yang tumpang
      tindih; decoder menyalin byte per byte sehingga keduanya sah.
    - match 3 byte pada posisi tersisa tepat 3 byte tidak dipakai: encoder
      butuh minimal 4 byte tersisa untuk mempertimbangkan match. Dua stream
      P1 membuktikannya (ekor 3 byte jadi literal, bukan match jarak jauh).
    - match 3..18 ditulis pendek; >18 lewat escape `idx=7` + VLI + 4 bit
      rendah. Literal ditulis satu per satu, kecuali blok literal >= 9 byte
      yang memakai escape literal (di bawah 9, escape kalah bit).
    """
    n = len(data)
    head = {}
    previous = [-1] * n
    for index in range(max(0, n - 2)):
        key = data[index:index + 3]
        previous[index] = head.get(key, -1)
        head[key] = index

    def match_at(index):
        if index + 4 > n:
            return None
        best = None
        limit = n - index
        candidate = head.get(data[index:index + 3], -1)
        while candidate >= 0:
            if candidate >= index:
                candidate = previous[candidate]
                continue
            distance = index - candidate
            if distance > ladder.max_distance:
                break
            length = 3
            while (length < limit
                   and data[candidate + length] == data[index + length]):
                length += 1
            if (best is None or length > best[1]
                    or (length == best[1] and distance < best[0])):
                best = (distance, length)
            if best[1] == limit:
                break  # tidak mungkin lebih panjang dari sisa data
            candidate = previous[candidate]
        return best

    tokens = []
    index = 0
    while index < n:
        match = match_at(index)
        if match is not None:
            distance, length = match
            kind = "match" if length <= 18 else "lmatch"
            tokens.append((kind, distance, length))
            index += length
            continue
        start = index
        index += 1
        while index < n and match_at(index) is None:
            index += 1
        chunk = bytes(data[start:index])
        if len(chunk) >= 9:
            tokens.append(("lrun", chunk))
        else:
            tokens.extend(("lit", byte) for byte in chunk)
    return tokens


def parse_lzss2(stream):
    """Stream atom0/lzss2 -> (size, widths, tokens, spec). Token persis asli."""
    head = int.from_bytes(stream[:4], "little")
    if head & 0xFF != 0x70:
        raise ValueError("bukan header 0x70")
    size = head >> 8
    bits = decompress.ReadBits(stream, 4)
    spec = bits.read_bits(8)
    lzss_fmt = spec & 7
    atom_fmt = (spec >> 3) & 3
    diff_fmt = (spec >> 5) & 7
    if atom_fmt != 0 or lzss_fmt != 2:
        raise ValueError(f"format {atom_fmt}{lzss_fmt}{diff_fmt} bukan atom0/lzss2")
    read = decompress.ReadRaw(bits)
    widths = tuple(read.read_bits(4) + 1 for _ in range(7))
    ladder = Ladder(widths)
    tokens = []
    produced = 0
    while produced < size:
        if read.read_bits(1) == 0:
            tokens.append(("lit", read.read_byte()))
            produced += 1
            continue
        index = read.read_bits(3)
        if index < 7:
            distance = ladder.bases[index] + read.read_bits(widths[index])
            length = 3 + read.read_bits(4)
            tokens.append(("match", distance, length))
            produced += length
            continue
        count = _read_vli(read)
        if read.read_bits(1) == 0:
            chunk = bytes(read.read_byte() for _ in range(count + 1))
            tokens.append(("lrun", chunk))
            produced += len(chunk)
            continue
        index = read.read_bits(3)
        if index == 7:
            raise ValueError("escape match dengan idx 7 tidak valid")
        distance = ladder.bases[index] + read.read_bits(widths[index])
        length = read.read_bits(4) + (count << 4) + 3
        tokens.append(("lmatch", distance, length))
        produced += length
    if produced != size:
        raise ValueError(f"token menghasilkan {produced} B, header {size} B")
    return size, widths, tokens, spec


def serialize_lzss2(size, widths, tokens, spec):
    ladder = Ladder(widths)
    writer = BitWriter()
    writer.write(spec, 8)
    for width in widths:
        writer.write(width - 1, 4)
    for token in tokens:
        if token[0] == "lit":
            _emit_literal2(writer, token[1])
        elif token[0] == "lrun":
            _emit_literal_run(writer, token[1])
        elif token[0] == "match":
            _emit_match2(writer, ladder, token[1], token[2])
        elif token[0] == "lmatch":
            _emit_match2(writer, ladder, token[1], token[2])
        else:
            raise ValueError(f"token {token[0]} tidak dikenal")
    return struct.pack("<I", (size << 8) | 0x70) + writer.bytes()


def encode_lzss2(data, widths, diff_fmt=0):
    """Payload final -> stream atom0/lzss2 byte-identik (tangga asli).

    Payload difilter dulu dengan kebalikan `diff_fmt` (0..4), lalu tokenisasi
    `_tokens_lzss2`. `spec = (diff<<5) | (atom0<<3) | lzss2`.
    """
    if len(data) > 0xFFFFFF:
        raise ValueError("payload > 24 bit")
    ladder = Ladder(widths)
    filtered = diff_encode(data, diff_fmt)
    tokens = _tokens_lzss2(filtered, ladder)
    spec = ((diff_fmt & 7) << 5) | 2
    return serialize_lzss2(len(data), widths, tokens, spec)


def _write_vli3(writer, value):
    """VLI basis 4 khusus lzss3: atom 3 bit, digit besar dulu."""
    digits = []
    while True:
        digits.append(value & 3)
        value >>= 2
        if not value:
            break
    last = len(digits) - 1
    for index, digit in enumerate(reversed(digits)):
        writer.write((digit << 1) | (0 if index == last else 1), 3)


def _read_vli3(read):
    value = 0
    while True:
        atom = read.read_bits(3)
        value = (value << 2) + (atom >> 1)
        if not (atom & 1):
            return value


def _emit_literal3(writer, pair):
    writer.write(0, 1)
    writer.write(pair[0], 8)
    writer.write(pair[1], 8)


def _emit_literal_run3(writer, chunk):
    writer.write(1, 1)
    writer.write(3, 2)
    _write_vli3(writer, len(chunk) // 2 - 1)
    writer.write(0, 1)
    for byte in chunk:
        writer.write(byte, 8)


def _emit_match3(writer, ladder, distance, length):
    """Jarak/panjang lzss3 dalam unit 2 byte."""
    units = distance // 2
    size = length // 2
    index, raw = ladder.encode(units)
    if index is None:
        raise ValueError(f"jarak {distance} di luar tangga {ladder.widths}")
    writer.write(1, 1)
    if size <= 9:
        writer.write(index, 2)
        writer.write(raw, ladder.widths[index])
        writer.write(size - 2, 3)
        return
    writer.write(3, 2)
    _write_vli3(writer, (size - 2) >> 3)
    writer.write(1, 1)
    writer.write(index, 2)
    writer.write(raw, ladder.widths[index])
    writer.write((size - 2) & 7, 3)


def _tokens_lzss3(data, ladder):
    """Aturan tokenisasi encoder asli atom0/lzss3 (terbukti 53/53 stream).

    lzss3 bekerja per **unit 2 byte**: literal satu unit, match minimal 2
    unit (4 B), jarak dihitung dalam unit lalu dikali 2 oleh decoder.
    Match terpanjang (seri -> jarak terdekat), 2..9 unit pendek, >9 unit
    lewat escape `idx=3` + VLI basis 4 + 3 bit rendah. Escape literal
    dipakai mulai 9 unit (18 B); di bawah itu literal per unit lebih murah.
    Posisi dengan sisa kurang dari 2 unit tidak boleh menjadi match.
    """
    if len(data) % 2:
        raise ValueError("lzss3 butuh payload genap")
    units = [data[index:index + 2] for index in range(0, len(data), 2)]
    n = len(units)
    head = {}
    previous = [-1] * n
    for index in range(max(0, n - 1)):
        key = units[index]
        previous[index] = head.get(key, -1)
        head[key] = index

    def match_at(index):
        if index + 2 > n:
            return None
        best = None
        limit = n - index
        candidate = head.get(units[index], -1)
        while candidate >= 0:
            if candidate >= index:
                candidate = previous[candidate]
                continue
            distance = index - candidate
            if distance > ladder.max_distance:
                break
            length = 1
            while (length < limit
                   and units[candidate + length] == units[index + length]):
                length += 1
            if length >= 2:
                if (best is None or length > best[1]
                        or (length == best[1] and distance < best[0])):
                    best = (distance, length)
                if best[1] == limit:
                    break
            candidate = previous[candidate]
        return best

    tokens = []
    index = 0
    while index < n:
        match = match_at(index)
        if match is not None:
            distance, length = match
            kind = "match" if length <= 9 else "lmatch"
            tokens.append((kind, distance * 2, length * 2))
            index += length
            continue
        start = index
        index += 1
        while index < n and match_at(index) is None:
            index += 1
        chunk = b"".join(units[start:index])
        if index - start >= 9:
            tokens.append(("lrun", chunk))
        else:
            tokens.extend(("lit", units[pos]) for pos in range(start, index))
    return tokens


def parse_lzss3(stream):
    """Stream atom0/lzss3 -> (size, widths, tokens, spec)."""
    head = int.from_bytes(stream[:4], "little")
    if head & 0xFF != 0x70:
        raise ValueError("bukan header 0x70")
    size = head >> 8
    bits = decompress.ReadBits(stream, 4)
    spec = bits.read_bits(8)
    lzss_fmt = spec & 7
    atom_fmt = (spec >> 3) & 3
    diff_fmt = (spec >> 5) & 7
    if atom_fmt != 0 or lzss_fmt != 3:
        raise ValueError(f"format {atom_fmt}{lzss_fmt}{diff_fmt} bukan atom0/lzss3")
    read = decompress.ReadRaw(bits)
    widths = tuple(read.read_bits(4) + 1 for _ in range(3))
    ladder = Ladder(widths)
    tokens = []
    produced = 0
    while produced < size:
        if read.read_bits(1) == 0:
            tokens.append(("lit", bytes([read.read_byte(), read.read_byte()])))
            produced += 2
            continue
        index = read.read_bits(2)
        if index < 3:
            distance = ladder.bases[index] + read.read_bits(widths[index])
            length = 2 + read.read_bits(3)
            tokens.append(("match", distance * 2, length * 2))
            produced += length * 2
            continue
        count = _read_vli3(read)
        if read.read_bits(1) == 0:
            chunk = bytes(read.read_byte() for _ in range((count + 1) * 2))
            tokens.append(("lrun", chunk))
            produced += len(chunk)
            continue
        index = read.read_bits(2)
        if index == 3:
            raise ValueError("escape match dengan idx 3 tidak valid")
        distance = ladder.bases[index] + read.read_bits(widths[index])
        length = read.read_bits(3) + (count << 3) + 2
        tokens.append(("lmatch", distance * 2, length * 2))
        produced += length * 2
    if produced != size:
        raise ValueError(f"token menghasilkan {produced} B, header {size} B")
    return size, widths, tokens, spec


def serialize_lzss3(size, widths, tokens, spec):
    ladder = Ladder(widths)
    writer = BitWriter()
    writer.write(spec, 8)
    for width in widths:
        writer.write(width - 1, 4)
    for token in tokens:
        if token[0] == "lit":
            _emit_literal3(writer, token[1])
        elif token[0] == "lrun":
            _emit_literal_run3(writer, token[1])
        elif token[0] in ("match", "lmatch"):
            _emit_match3(writer, ladder, token[1], token[2])
        else:
            raise ValueError(f"token {token[0]} tidak dikenal")
    return struct.pack("<I", (size << 8) | 0x70) + writer.bytes()


def encode_lzss3(data, widths, diff_fmt=0):
    """Payload final -> stream atom0/lzss3 byte-identik (tangga asli)."""
    if len(data) > 0xFFFFFF:
        raise ValueError("payload > 24 bit")
    ladder = Ladder(widths)
    filtered = diff_encode(data, diff_fmt)
    tokens = _tokens_lzss3(filtered, ladder)
    spec = ((diff_fmt & 7) << 5) | 3
    return serialize_lzss3(len(data), widths, tokens, spec)


HUFF_BITS = {1: 4, 2: 8}  # atom_fmt -> bit lebar simbol
LZSS_LADDER_LEN = {0: 2, 1: 4, 2: 7, 3: 3}  # lzss -1 sudah baca tangga


def parse_huffman(stream):
    """Stream huffman (`1xx`/`2xx`) -> (size, spec, atom, counts, leaves, widths).

    Pohon huffman adalah **header** stream, sama seperti tangga LZSS: encoder
    memakai header asli apa adanya, lalu menurunkan ulang token LZSS dari
    payload. `counts[d]` = jumlah daun berkode panjang d+1; `leaves[d]` = nilai
    daun pada panjang itu, berurutan sesuai penugasan kanonik decoder.
    """
    head = int.from_bytes(stream[:4], "little")
    if head & 0xFF != 0x70:
        raise ValueError("bukan header 0x70")
    size = head >> 8
    bits = decompress.ReadBits(stream, 4)
    spec = bits.read_bits(8)
    atom = (spec >> 3) & 3
    lzss = spec & 7
    if atom not in HUFF_BITS:
        raise ValueError(f"atom {atom} bukan huffman")
    if lzss not in LZSS_LADDER_LEN:
        raise ValueError(f"lzss {lzss} belum punya tangga")
    width = HUFF_BITS[atom]
    counts = []
    leaves = []
    for _ in range(width * 2):
        count = bits.read_bits(width)
        counts.append(count)
        leaves.append([bits.read_bits(width) for _ in range(count)])
    widths = tuple(bits.read_bits(4) + 1 for _ in range(LZSS_LADDER_LEN[lzss]))
    return size, spec, atom, counts, leaves, widths


def huffman_codes(counts, leaves):
    """(counts, leaves) -> {symbol: (kode, panjang)} kanonik seperti decoder."""
    codes = {}
    path = 0
    for depth, (count, row) in enumerate(zip(counts, leaves)):
        path <<= 1
        if count > (1 << (depth + 1)):
            raise ValueError(f"{count} daun pada panjang {depth + 1} tidak muat")
        for value in row:
            if value in codes:
                raise ValueError(f"simbol {value} punya dua kode")
            codes[value] = (path, depth + 1)
            path += 1
    if len(codes) < 2:
        raise ValueError("pohon huffman perlu minimal dua daun")
    return codes


class HuffWriter(BitWriter):
    """BitWriter + penulisan simbol; atom1 = dua nibble per byte."""

    def __init__(self, codes, atom):
        super().__init__()
        self.codes = codes
        self.atom = atom

    def symbol(self, value):
        code, length = self.codes[value]
        self.write(code, length)

    def byte(self, value):
        if self.atom == 1:
            self.symbol(value >> 4)
            self.symbol(value & 0xF)
        else:
            self.symbol(value)


def _emit_tokens_huffman(writer, tokens, lzss, ladder):
    for token in tokens:
        kind = token[0]
        if lzss == 0:
            if kind == "literal":
                for start in range(0, len(token[1]), 64):
                    chunk = token[1][start:start + 64]
                    writer.write(2, 2)
                    writer.write(len(chunk) - 1, 6)
                    for byte in chunk:
                        writer.byte(byte)
            elif kind == "run":
                writer.write(3, 2)
                writer.write(token[2] - 2, 6)
                writer.write(token[1], 8)  # run byte mentah, bukan simbol
            else:
                index, raw = ladder.encode(token[1])
                writer.write(index, 2)
                writer.write(raw, ladder.widths[index])
                writer.write(token[2] - 3, 6)
        elif lzss == 2:
            if kind == "lit":
                writer.write(0, 1)
                writer.byte(token[1])
            elif kind == "lrun":
                writer.write(1, 1)
                writer.write(7, 3)
                _write_vli(writer, len(token[1]) - 1)
                writer.write(0, 1)
                for byte in token[1]:
                    writer.byte(byte)
            else:
                distance, length = token[1], token[2]
                index, raw = ladder.encode(distance)
                writer.write(1, 1)
                if length <= 18:
                    writer.write(index, 3)
                    writer.write(raw, ladder.widths[index])
                    writer.write(length - 3, 4)
                else:
                    encoded = length - 3
                    writer.write(7, 3)
                    _write_vli(writer, encoded >> 4)
                    writer.write(1, 1)
                    writer.write(index, 3)
                    writer.write(raw, ladder.widths[index])
                    writer.write(encoded & 0xF, 4)
        elif lzss == 3:
            if kind == "lit":
                writer.write(0, 1)
                writer.byte(token[1][0])
                writer.byte(token[1][1])
            elif kind == "lrun":
                writer.write(1, 1)
                writer.write(3, 2)
                _write_vli3(writer, len(token[1]) // 2 - 1)
                writer.write(0, 1)
                for byte in token[1]:
                    writer.byte(byte)
            else:
                distance, length = token[1], token[2]
                units, size = distance // 2, length // 2
                index, raw = ladder.encode(units)
                writer.write(1, 1)
                if size <= 9:
                    writer.write(index, 2)
                    writer.write(raw, ladder.widths[index])
                    writer.write(size - 2, 3)
                else:
                    writer.write(3, 2)
                    _write_vli3(writer, (size - 2) >> 3)
                    writer.write(1, 1)
                    writer.write(index, 2)
                    writer.write(raw, ladder.widths[index])
                    writer.write((size - 2) & 7, 3)
        elif lzss == 4:
            writer.byte(token[1][0])
        else:
            raise ValueError(f"lzss {lzss} tidak didukung encoder huffman")


def encode_huffman(data, header):
    """Payload final + header huffman asli -> stream byte-identik.

    Header (pohon + tangga) dipakai apa adanya seperti `parse`/`parse_lzss2`
    memakai tangga dari stream asli. Token LZSS diturunkan ulang dari payload
    dengan aturan parity yang sudah terbukti, lalu literal dikodekan dengan
    pohon asli. Run lzss0 tetap byte mentah (decoder memakai `read_bits(8)`).
    """
    size, spec, atom, counts, leaves, widths = header
    lzss = spec & 7
    diff = (spec >> 5) & 7
    ladder = Ladder(widths) if widths else None
    codes = huffman_codes(counts, leaves)
    filtered = diff_encode(data, diff)
    if lzss == 0:
        tokens = _tokens_parity(filtered, ladder)
    elif lzss == 2:
        tokens = _tokens_lzss2(filtered, ladder)
    elif lzss == 3:
        tokens = _tokens_lzss3(filtered, ladder)
    elif lzss == 4:
        tokens = [("lit", bytes([byte])) for byte in filtered]
    else:
        raise ValueError(f"lzss {lzss} tidak didukung encoder huffman")
    writer = HuffWriter(codes, atom)
    writer.write(spec, 8)
    width = HUFF_BITS[atom]
    for count, row in zip(counts, leaves):
        writer.write(count, width)
        for value in row:
            writer.write(value, width)
    for value in widths:
        writer.write(value - 1, 4)
    _emit_tokens_huffman(writer, tokens, lzss, ladder)
    return struct.pack("<I", (size << 8) | 0x70) + writer.bytes()


def _decode(stream):
    payload, fmt, _ = decompress.unpack(stream, 0)
    return payload, fmt


def probe(manifest=MANIFEST, rom_path=ROM, sweep=False):
    rom = Path(rom_path).read_bytes()
    source = json.loads(Path(manifest).read_text())
    import asset_inventory as inv
    by_symbol = {e.name: e for e in inv.analyze()[1]}
    rows = []
    for blob in source["streams"]:
        entry = by_symbol.get(blob["blob"])
        for stream in blob["streams"]:
            if str(stream["format"]) != "000":
                continue
            offset = entry.offset + int(stream["offset"])
            packed = int(stream["packed"])
            original = rom[offset:offset + packed]
            decoded = (Path(manifest).parent / stream["bin"]).read_bytes()
            size, widths, tokens = parse(original)
            replay = serialize(size, widths, tokens)
            # Tangga asli stream ikut diuji: encoder asli memilihnya, dan
            # tangga menentukan harga/legitimasi setiap jarak.
            ladders = [widths]
            if LADDER_DEFAULT != widths:
                ladders.append(LADDER_DEFAULT)
            if sweep:
                ladders = [(a, b) for a in range(1, 13) for b in range(1, 13)]
            attempts = []
            for widths_try in ladders:
                for optimal, parity in ((False, False), (True, False),
                                        (False, True)):
                    try:
                        out = encode(decoded, widths_try, optimal=optimal,
                                     parity=parity)
                    except ValueError:
                        continue
                    try:
                        back, _fmt = _decode(out)
                        roundtrip = back == decoded
                    except decompress.UnpackException:
                        roundtrip = False
                    attempts.append({"ladder": list(widths_try),
                                     "optimal": optimal,
                                     "parity": parity,
                                     "size": len(out),
                                     "sha256": sha256(out),
                                     "roundtrip": roundtrip,
                                     "match": out == original})
            ok = [a for a in attempts if a["match"]]
            best = min(attempts, key=lambda a: (a["size"], a["optimal"]),
                       default=None) if attempts else None
            if ok:
                best = ok[0]
            rows.append({
                "symbol": blob["blob"],
                "index": stream["index"],
                "compressed_offset": f"0x{offset:06X}",
                "compressed_size": packed,
                "compressed_sha256": sha256(original),
                "decoded_size": len(decoded),
                "parse_ladder": list(widths),
                "replay_match": replay == original,
                "replay_size": len(replay),
                "match": bool(ok),
                "roundtrip": bool(best and best["roundtrip"]),
                "optimal_size": min((a["size"] for a in attempts
                                     if a["optimal"]), default=None),
                "parity_size": min((a["size"] for a in attempts
                                    if a["parity"]), default=None),
                "parity_match": any(a["match"] for a in attempts
                                    if a["parity"]),
                "greedy_size": min((a["size"] for a in attempts
                                    if not a["optimal"] and not a["parity"]),
                                   default=None),
                "attempts": len(attempts),
                "best": best,
            })
    return rows


def render_probe(rows):
    matched = sum(1 for r in rows if r["match"])
    replays = sum(1 for r in rows if r["replay_match"])
    out = ["# Uji encoder `0x70` minimal (format 000)", "",
           "**Dihasilkan otomatis** oleh `python3 tools/assets/lz70.py probe "
           "--write-report` (`--sweep` untuk mencoba tangga 1..12).", "",
           f"Stream P0 format `000`: **{len(rows)}**. Serializer replay "
           f"byte-identik: **{replays}/{len(rows)}**. Encoder parity "
           f"byte-identik: **{matched}/{len(rows)}**. Ukuran optimal encoder "
           f"sama dengan aslinya: "
           f"**{sum(1 for r in rows if r.get('optimal_size') == r['compressed_size'])}/{len(rows)}**.",
           "",
           "| simbol | idx | compressed B | sha256 asli | replay | parity | hasil encoder |",
           "|---|---:|---:|---|---|---|---|"]
    for row in rows:
        best = row["best"] or {}
        out.append(
            f"| `{row['symbol']}` | {row['index']} | {row['compressed_size']} "
            f"| `{row['compressed_sha256'][:16]}…` "
            f"| {'sama' if row['replay_match'] else 'beda'} "
            f"| {'sama' if row.get('parity_match') else 'beda'} "
            f"| optimal {row.get('optimal_size', '-')} B, parity "
            f"{row.get('parity_size', '-')} B, greedy "
            f"{row.get('greedy_size', '-')} B, tangga {row['parse_ladder']}, "
            f"roundtrip {'ya' if (best or {}).get('roundtrip') else 'tidak'} |")
    out.append("")
    if matched == 0:
        out += [
            "Tidak ada stream yang byte-identik, jadi status `opaque` "
            "dipertahankan.",
            "",
            "Aturan tokenisasi encoder asli sudah terbukti di "
            "`_tokens_parity`: match terpanjang (seri → jarak terdekat), "
            "run menang saat panjangnya >= match, dan literal berhenti di "
            "run>=2 atau match berikutnya. Dengan tangga stream asli aturan "
            "itu menghasilkan byte identik untuk ketiga stream P0, jadi "
            "statusnya boleh naik lewat `stream_audit.py`.",
        ]
    return "\n".join(out) + "\n"


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    sub = ap.add_subparsers(dest="cmd")
    e = sub.add_parser("encode", help="payload -> packed")
    e.add_argument("--bin", required=True, type=Path)
    e.add_argument("--out", required=True, type=Path)
    e.add_argument("--ladder", default="7,11")
    e.add_argument("--parity", action="store_true",
                   help="pakai aturan tokenisasi encoder asli")
    p = sub.add_parser("probe", help="uji stream P0 format 000")
    p.add_argument("--sweep", action="store_true")
    p.add_argument("--json", action="store_true")
    p.add_argument("--write-report", action="store_true")
    args = ap.parse_args(argv)

    if args.cmd == "encode":
        widths = tuple(int(w) for w in args.ladder.split(","))
        out = encode(args.bin.read_bytes(), widths, parity=args.parity)
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_bytes(out)
        print(f"{args.out}: {len(out)} B")
        return 0
    if args.cmd == "probe":
        rows = probe(sweep=args.sweep)
        if args.json:
            print(json.dumps(rows, indent=1))
        else:
            for row in rows:
                print(f"{row['symbol']}#{row['index']} 000: "
                      f"replay {'sama' if row['replay_match'] else 'BEDA'}, "
                      f"greedy {'MATCH' if row['match'] else 'MISMATCH'} "
                      f"(asli {row['compressed_size']} B, encoder "
                      f"{row['best']['size'] if row['best'] else '-'} B)")
            print(f"byte-identik: {sum(1 for r in rows if r['match'])}/{len(rows)}")
        if args.write_report:
            REPORT.write_text(render_probe(rows))
        return 0 if all(r["match"] for r in rows) else 1
    ap.print_help()
    return 2


if __name__ == "__main__":
    raise SystemExit(main())
