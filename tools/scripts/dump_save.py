#!/usr/bin/env python3
"""Parse a 32 KiB (FOMT GBA) SRAM image.

Layout, traced from the baserom:
  0x000000..0x00001F  header magic (gUnk_080E862C, "GBA...SRAM...")
  0x000020            u32 presence flags (only bits 0..1 are valid)
  0x000024            u32 active/last slot (0 or 1)
  0x000028 + n*0x3FEC file record n:
      +0x0000  u32 payload length (0x34F4)
      +0x0004  payload (0x34F4 bytes)
      +0x34F8  u32 payload checksum (byte sum)
      +0x34FC  optional Rucksack amount sidecar (24 bytes, Fase 5.2)
      ...      untouched tail up to +0x3FEC

Only the offsets above are ever written: every SRAM access goes through
func_080006A4/func_080006E4, whose call sites are the header (0x00/0x20/0x24)
and the per-file length/payload/checksum.  The two 0xAF0-byte tails are
therefore padding owned by the save tool, which puts the versioned sidecar at
their start.

Usage:
  python3 tools/scripts/dump_save.py save.sav
  python3 tools/scripts/dump_save.py save.sav --json
  python3 tools/scripts/dump_save.py --self-test
  python3 tools/scripts/dump_save.py --write-fixtures DIR
"""

import argparse
import json
import os
import struct
import sys

SRAM_SIZE = 0x8000
HEADER_SIZE = 0x28
SLOT_STRIDE = 0x3FEC
SLOT_COUNT = 2
PAYLOAD_SIZE = 0x34F4
RECORD_SIZE = 0x34FC
TAIL_SIZE = SLOT_STRIDE - RECORD_SIZE
FARMER_OFFSET = 0x1BD8
RUCKSACK_OFFSET = FARMER_OFFSET + 0x60  # 0x1C38
DOG_OFFSET = FARMER_OFFSET + 0x98       # 0x1C70
DOG_NAME_OFFSET = DOG_OFFSET + 0x08     # 0x1C78
SIDECAR_OFFSET = RECORD_SIZE
SIDECAR_SIZE = 24

HEADER_MAGIC = bytes.fromhex(
    "47424196718fea95a88cea82cc5352414d83438381815b835720303030303000"
)

FOOD_NONE = 173
ARTICLE_NONE = 97

SIDECAR_MAGIC = 0x31435352  # "RSC1"
SIDECAR_VERSION = 1

# struct RucksackSaveSidecar:
#   u32 magic, u8 version, u8 slot, u16 reserved, u32 payload_checksum,
#   u8 amounts[8], u32 checksum
SIDECAR_STRUCT = struct.Struct("<IBBHI8sI")


def u32(data, offset):
    return struct.unpack_from("<I", data, offset)[0]


def byte_sum(data):
    return sum(data) & 0xFFFFFFFF


def fnv1a(data):
    value = 2166136261
    for byte in data:
        value = ((value ^ byte) * 16777619) & 0xFFFFFFFF
    return value


def sidecar_checksum(sidecar_bytes):
    return fnv1a(sidecar_bytes[:20])


def decode_name(raw):
    raw = raw.split(b"\x00", 1)[0]
    try:
        return raw.decode("cp932")
    except UnicodeDecodeError:
        return raw.decode("latin-1")


def item_at(payload, index, size):
    if index >= size:
        return None
    word = u32(payload, RUCKSACK_OFFSET + 4 + 4 * index)
    kind = word & 1
    wrapped = bool(word & 2)
    item_id = payload[RUCKSACK_OFFSET + 4 + 4 * index + 1]
    stamina = struct.unpack_from("<b", payload, RUCKSACK_OFFSET + 4 + 4 * index + 2)[0]
    fatigue = struct.unpack_from("<b", payload, RUCKSACK_OFFSET + 4 + 4 * index + 3)[0]
    empty = item_id >= (FOOD_NONE if kind == 0 else ARTICLE_NONE)
    return {
        "slot": index,
        "kind": "food" if kind == 0 else "article",
        "id": item_id,
        "stamina_bonus": stamina,
        "fatigue_bonus": fatigue,
        "wrapped": wrapped,
        "empty": empty,
    }


def parse_sidecar(raw):
    if len(raw) < SIDECAR_SIZE:
        return None
    magic, version, slot, reserved, payload_checksum, amounts_raw, checksum = (
        SIDECAR_STRUCT.unpack_from(raw, 0)
    )
    result = {
        "magic": magic,
        "version": version,
        "slot": slot,
        "reserved": reserved,
        "payload_checksum": payload_checksum,
        "amounts": list(amounts_raw),
        "checksum": checksum,
        "computed_checksum": sidecar_checksum(raw),
        "valid": False,
        "reason": "",
    }

    if magic != SIDECAR_MAGIC:
        result["reason"] = "bad magic"
    elif version != SIDECAR_VERSION:
        result["reason"] = "unsupported version"
    elif checksum != result["computed_checksum"]:
        result["reason"] = "sidecar checksum mismatch"
    else:
        result["valid"] = True
    return result


def parse_slot(data, slot, present):
    base = HEADER_SIZE + slot * SLOT_STRIDE
    length = u32(data, base)
    payload = data[base + 4:base + 4 + PAYLOAD_SIZE]
    stored_checksum = u32(data, base + PAYLOAD_SIZE + 4)
    computed_checksum = byte_sum(payload)

    entry = {
        "slot": slot,
        "present": present,
        "base": base,
        "length": length,
        "length_valid": length == PAYLOAD_SIZE,
        "stored_checksum": stored_checksum,
        "computed_checksum": computed_checksum,
        "checksum_valid": stored_checksum == computed_checksum,
        "farmer_name": decode_name(payload[FARMER_OFFSET:FARMER_OFFSET + 12]),
        "rucksack_size": 0,
        "items": [],
        "dog_name": decode_name(payload[DOG_NAME_OFFSET:DOG_NAME_OFFSET + 12]),
        "sidecar": None,
        "effective_amounts": [0] * 8,
        "tail": {},
        "errors": [],
    }

    if not present:
        return entry

    size = u32(payload, RUCKSACK_OFFSET)
    entry["rucksack_size"] = size
    if size not in (2, 4, 8):
        entry["errors"].append("rucksack size %d is not 2/4/8" % size)
        size = min(size, 8)

    for index in range(min(size, 8)):
        entry["items"].append(item_at(payload, index, size))

    sidecar_raw = data[base + SIDECAR_OFFSET:base + SIDECAR_OFFSET + SIDECAR_SIZE]
    sidecar = parse_sidecar(sidecar_raw)
    entry["sidecar"] = sidecar

    if sidecar is not None and sidecar["valid"]:
        if sidecar["slot"] != slot:
            sidecar["valid"] = False
            sidecar["reason"] = "sidecar bound to slot %d" % sidecar["slot"]
        elif sidecar["payload_checksum"] != computed_checksum:
            sidecar["valid"] = False
            sidecar["reason"] = "sidecar bound to another payload"
        else:
            for item in entry["items"]:
                amount = sidecar["amounts"][item["slot"]]
                if item["empty"]:
                    if amount != 0:
                        sidecar["valid"] = False
                        sidecar["reason"] = "empty slot %d has amount %d" % (item["slot"], amount)
                        break
                elif amount == 0 or amount > 99:
                    sidecar["valid"] = False
                    sidecar["reason"] = "occupied slot %d has amount %d" % (item["slot"], amount)
                    break
            if sidecar["valid"]:
                for index in range(8):
                    entry["effective_amounts"][index] = sidecar["amounts"][index]
    if sidecar is None or not sidecar["valid"]:
        for item in entry["items"]:
            entry["effective_amounts"][item["slot"]] = 0 if item["empty"] else 1

    tail_start = base + SIDECAR_OFFSET + SIDECAR_SIZE
    tail_end = base + SLOT_STRIDE
    tail = data[tail_start:tail_end]
    entry["tail"] = {
        "start": tail_start,
        "end": tail_end,
        "length": len(tail),
        "all_ff": all(byte == 0xFF for byte in tail),
        "all_zero": all(byte == 0 for byte in tail),
    }
    if not entry["tail"]["all_ff"] and not entry["tail"]["all_zero"]:
        entry["tail"]["unexpected_bytes"] = sorted(set(tail))

    return entry


def parse_sram(data):
    report = {
        "size": len(data),
        "size_valid": len(data) == SRAM_SIZE,
        "header": {},
        "slots": [],
        "errors": [],
        "warnings": [],
    }

    if len(data) < HEADER_SIZE:
        report["errors"].append("SRAM image shorter than the header")
        return report

    magic = data[0:0x20]
    flags = u32(data, 0x20)
    active_slot = u32(data, 0x24)
    report["header"] = {
        "magic_valid": magic == HEADER_MAGIC,
        "magic": magic.hex(),
        "flags": flags,
        "active_slot": active_slot,
    }

    if magic != HEADER_MAGIC:
        report["errors"].append("header magic mismatch")
    if flags & ~0x3:
        report["errors"].append("presence flags use bits outside 0..1: 0x%08X" % flags)
    if active_slot >= SLOT_COUNT:
        report["errors"].append("active slot %d is not 0/1" % active_slot)

    for slot in range(SLOT_COUNT):
        present = bool(flags & (1 << slot))
        entry = parse_slot(data, slot, present)
        if entry["present"]:
            if not entry["length_valid"]:
                entry["errors"].append("payload length 0x%X != 0x34F4" % entry["length"])
            if not entry["checksum_valid"]:
                entry["errors"].append("payload checksum mismatch")
        report["slots"].append(entry)
        report["errors"].extend("slot %d: %s" % (slot, error) for error in entry["errors"])

    for entry in report["slots"]:
        sidecar = entry["sidecar"]
        if sidecar is not None and not sidecar["valid"]:
            report["warnings"].append(
                "slot %d: sidecar not applied (%s); falling back to x1" % (entry["slot"], sidecar["reason"])
            )

    return report


def write_slot(data, slot, payload, sidecar=None, present=True):
    base = HEADER_SIZE + slot * SLOT_STRIDE
    struct.pack_into("<I", data, base, PAYLOAD_SIZE)
    data[base + 4:base + 4 + PAYLOAD_SIZE] = payload
    struct.pack_into("<I", data, base + PAYLOAD_SIZE + 4, byte_sum(payload))
    if sidecar is not None:
        data[base + SIDECAR_OFFSET:base + SIDECAR_OFFSET + SIDECAR_SIZE] = sidecar
    else:
        data[base + RECORD_SIZE:base + SLOT_STRIDE] = b"\xFF" * TAIL_SIZE
    if present:
        flags = u32(data, 0x20)
        struct.pack_into("<I", data, 0x20, flags | (1 << slot))


def make_payload(items, farmer_name=b"TEST", dog_name=b"DOG"):
    """items: list of (kind, id, stamina, fatigue, wrapped, amount)."""
    payload = bytearray(PAYLOAD_SIZE)
    payload[FARMER_OFFSET:FARMER_OFFSET + 12] = farmer_name.ljust(12, b"\x00")[:12]
    size = 2
    while size < len(items) and size < 8:
        size *= 2
    struct.pack_into("<I", payload, RUCKSACK_OFFSET, size)
    # Unused item slots are empty food slots (kind=food, id=FOOD_NONE).
    for index in range(8):
        struct.pack_into("<I", payload, RUCKSACK_OFFSET + 4 + 4 * index, FOOD_NONE << 8)
    # Two tool slots, both empty (amount 0).
    struct.pack_into("<I", payload, RUCKSACK_OFFSET + 0x24, 2)
    for index, (kind, item_id, stamina, fatigue, wrapped, amount) in enumerate(items):
        word = (1 if kind == "article" else 0) | (2 if wrapped else 0)
        struct.pack_into(
            "<I", payload, RUCKSACK_OFFSET + 4 + 4 * index, word
        )
        payload[RUCKSACK_OFFSET + 4 + 4 * index + 1] = item_id
        struct.pack_into("<b", payload, RUCKSACK_OFFSET + 4 + 4 * index + 2, stamina)
        struct.pack_into("<b", payload, RUCKSACK_OFFSET + 4 + 4 * index + 3, fatigue)
    payload[DOG_NAME_OFFSET:DOG_NAME_OFFSET + 12] = dog_name.ljust(12, b"\x00")[:12]
    return bytes(payload)


def make_sidecar(slot, payload, amounts):
    checksum = byte_sum(payload)
    body = struct.pack("<IBBHI8s", SIDECAR_MAGIC, SIDECAR_VERSION, slot, 0, checksum, bytes(amounts))
    return body + struct.pack("<I", fnv1a(body))


def blank_sram():
    return bytearray(b"\xFF" * SRAM_SIZE)


def build_fixtures():
    fixtures = {}

    turnip = ("food", 0, 3, -1, 0, 0)
    stones = ("article", 0, 0, 0, 0, 0)

    payload = make_payload([turnip, stones])

    stock = blank_sram()
    stock[0:0x20] = HEADER_MAGIC
    struct.pack_into("<I", stock, 0x20, 0)
    struct.pack_into("<I", stock, 0x24, 0)
    write_slot(stock, 0, payload)
    fixtures["stock"] = bytes(stock)

    migrated = blank_sram()
    migrated[0:0x20] = HEADER_MAGIC
    struct.pack_into("<I", migrated, 0x20, 0)
    struct.pack_into("<I", migrated, 0x24, 0)
    write_slot(migrated, 0, payload, make_sidecar(0, payload, [10, 99, 0, 0, 0, 0, 0, 0]))
    fixtures["migrated"] = bytes(migrated)

    base = HEADER_SIZE

    corrupt = bytearray(migrated)
    corrupt[base + SIDECAR_OFFSET + 20] ^= 0x5A  # break the sidecar checksum itself
    fixtures["corrupt_sidecar"] = bytes(corrupt)

    interrupted = bytearray(migrated)
    interrupted[base + SIDECAR_OFFSET + 12] ^= 0x5A  # body written, checksum not updated
    fixtures["interrupted_update"] = bytes(interrupted)

    truncated = bytearray(migrated)
    truncated[base + SIDECAR_OFFSET + 8:base + SLOT_STRIDE] = b"\xFF" * (SLOT_STRIDE - RECORD_SIZE - 8)
    fixtures["truncated_sidecar"] = bytes(truncated)

    boundary_payload = make_payload([turnip, stones], farmer_name=b"BOUNDARY", dog_name=b"DOGB")
    boundary = blank_sram()
    boundary[0:0x20] = HEADER_MAGIC
    struct.pack_into("<I", boundary, 0x20, 0)
    struct.pack_into("<I", boundary, 0x24, 0)
    write_slot(boundary, 0, boundary_payload, make_sidecar(0, boundary_payload, [1, 99, 0, 0, 0, 0, 0, 0]))
    fixtures["stack_boundary"] = bytes(boundary)

    both = blank_sram()
    both[0:0x20] = HEADER_MAGIC
    struct.pack_into("<I", both, 0x20, 0)
    struct.pack_into("<I", both, 0x24, 1)
    payload0 = make_payload([turnip], farmer_name=b"SLOT0", dog_name=b"DOG0")
    payload1 = make_payload([stones], farmer_name=b"SLOT1", dog_name=b"DOG1")
    write_slot(both, 0, payload0, make_sidecar(0, payload0, [5, 0, 0, 0, 0, 0, 0, 0]))
    write_slot(both, 1, payload1)
    fixtures["both_slots"] = bytes(both)

    bad_checksum = bytearray(migrated)
    bad_checksum[base + 4 + 100] ^= 0xFF
    fixtures["bad_payload_checksum"] = bytes(bad_checksum)

    return fixtures


def self_test():
    fixtures = build_fixtures()
    failures = []

    def check(condition, message):
        if not condition:
            failures.append(message)

    stock = parse_sram(fixtures["stock"])
    check(not stock["errors"], "stock: unexpected errors %s" % stock["errors"])
    check(stock["slots"][0]["present"], "stock: slot 0 should be present")
    check(stock["slots"][0]["sidecar"] is not None and not stock["slots"][0]["sidecar"]["valid"],
          "stock: sidecar should be absent/invalid")
    check(stock["slots"][0]["effective_amounts"][0] == 1,
          "stock: occupied slot should load as x1")
    check(stock["slots"][0]["effective_amounts"][1] == 1,
          "stock: second occupied slot should load as x1")
    check(stock["slots"][0]["dog_name"] == "DOG", "stock: dog name parse")

    migrated = parse_sram(fixtures["migrated"])
    check(not migrated["errors"], "migrated: unexpected errors %s" % migrated["errors"])
    check(migrated["slots"][0]["sidecar"]["valid"], "migrated: sidecar should be valid")
    check(migrated["slots"][0]["effective_amounts"][0] == 10, "migrated: slot0 x10")
    check(migrated["slots"][0]["effective_amounts"][1] == 99, "migrated: slot1 x99")

    corrupt = parse_sram(fixtures["corrupt_sidecar"])
    check(not corrupt["slots"][0]["sidecar"]["valid"], "corrupt: sidecar must be rejected")
    check(corrupt["slots"][0]["effective_amounts"][0] == 1, "corrupt: fallback x1")
    check(any("falling back" in warning for warning in corrupt["warnings"]), "corrupt: warning")

    interrupted = parse_sram(fixtures["interrupted_update"])
    check(not interrupted["slots"][0]["sidecar"]["valid"], "interrupted: rejected")
    check(interrupted["slots"][0]["effective_amounts"][0] == 1, "interrupted: fallback x1")

    boundary = parse_sram(fixtures["stack_boundary"])
    check(boundary["slots"][0]["sidecar"]["valid"], "boundary: sidecar valid")
    check(boundary["slots"][0]["effective_amounts"][0] == 1, "boundary: x1")
    check(boundary["slots"][0]["effective_amounts"][1] == 99, "boundary: x99")

    truncated = parse_sram(fixtures["truncated_sidecar"])
    check(not truncated["slots"][0]["sidecar"]["valid"], "truncated: sidecar must be rejected")
    check(truncated["slots"][0]["effective_amounts"][0] == 1, "truncated: fallback x1")

    both = parse_sram(fixtures["both_slots"])
    check(not both["errors"], "both: unexpected errors %s" % both["errors"])
    check(both["slots"][0]["sidecar"]["valid"], "both: slot0 sidecar valid")
    check(both["slots"][0]["effective_amounts"][0] == 5, "both: slot0 x5")
    check(not both["slots"][1]["sidecar"]["valid"], "both: slot1 sidecar absent")
    check(both["slots"][1]["effective_amounts"][0] == 1, "both: slot1 x1")
    check(both["slots"][0]["farmer_name"] == "SLOT0", "both: slot0 farmer")
    check(both["slots"][1]["farmer_name"] == "SLOT1", "both: slot1 farmer")

    bad = parse_sram(fixtures["bad_payload_checksum"])
    check(any("checksum mismatch" in error for error in bad["errors"]), "bad: checksum error reported")
    check(not bad["slots"][0]["sidecar"]["valid"], "bad: sidecar not applied after checksum error")

    if failures:
        print("SELF-TEST FAILED")
        for failure in failures:
            print(" -", failure)
        return 1

    print("SELF-TEST OK (%d fixtures)" % len(fixtures))
    return 0


def print_report(report):
    print("SRAM dump: %d bytes" % report["size"])
    header = report["header"]
    print(
        "Header: magic=%s flags=0x%08X active_slot=%d"
        % ("valid" if header["magic_valid"] else "INVALID", header["flags"], header["active_slot"])
    )

    for slot in report["slots"]:
        print(
            "Slot %d: present=%s base=0x%06X length=0x%X checksum=0x%08X (%s)"
            % (
                slot["slot"],
                "yes" if slot["present"] else "no",
                slot["base"],
                slot["length"],
                slot["stored_checksum"],
                "valid" if slot["checksum_valid"] else "INVALID",
            )
        )
        print("  Farmer: %s" % slot["farmer_name"])
        print("  Rucksack: %d slots" % slot["rucksack_size"])
        for item in slot["items"]:
            if item["empty"]:
                print("    [%d] empty" % item["slot"])
                continue
            print(
                "    [%d] %s id=%d stamina=%+d fatigue=%+d wrapped=%s amount=%d"
                % (
                    item["slot"],
                    item["kind"],
                    item["id"],
                    item["stamina_bonus"],
                    item["fatigue_bonus"],
                    "yes" if item["wrapped"] else "no",
                    slot["effective_amounts"][item["slot"]],
                )
            )
        print("  Dog: %s" % slot["dog_name"])
        sidecar = slot["sidecar"]
        if sidecar is None:
            print("  Sidecar: absent")
        elif sidecar["valid"]:
            print(
                "  Sidecar: valid version=%d slot=%d payload=0x%08X amounts=%s"
                % (
                    sidecar["version"],
                    sidecar["slot"],
                    sidecar["payload_checksum"],
                    sidecar["amounts"],
                )
            )
        else:
            print("  Sidecar: not applied (%s)" % sidecar["reason"])
        print(
            "  Tail: %d bytes (%d sidecar + %d untouched)"
            % (slot["tail"]["length"] + SIDECAR_SIZE, SIDECAR_SIZE, slot["tail"]["length"])
        )

    if report["warnings"]:
        print("Warnings:")
        for warning in report["warnings"]:
            print("  -", warning)
    if report["errors"]:
        print("Errors:")
        for error in report["errors"]:
            print("  -", error)


def main(argv):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("sram", nargs="?", help="32 KiB SRAM image")
    parser.add_argument("--json", action="store_true", help="emit JSON")
    parser.add_argument("--self-test", action="store_true", help="run built-in fixtures")
    parser.add_argument("--write-fixtures", metavar="DIR", help="write synthetic fixtures")
    args = parser.parse_args(argv)

    if args.self_test:
        return self_test()

    if args.write_fixtures:
        os.makedirs(args.write_fixtures, exist_ok=True)
        for name, data in build_fixtures().items():
            path = os.path.join(args.write_fixtures, name + ".sav")
            with open(path, "wb") as handle:
                handle.write(data)
        return 0

    if not args.sram:
        parser.error("an SRAM image is required (or use --self-test)")

    with open(args.sram, "rb") as handle:
        data = handle.read()

    report = parse_sram(data)
    if args.json:
        print(json.dumps(report, indent=2))
    else:
        print_report(report)

    return 0 if not report["errors"] else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
