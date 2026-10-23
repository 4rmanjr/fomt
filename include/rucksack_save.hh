#ifndef RUCKSACK_SAVE_HH
#define RUCKSACK_SAVE_HH

#include "prelude.h"

#include "rucksack.hh"

// Save record layout, traced from the baserom routines:
//   func_080003DC  -> slot base = 0x28 + slot * 0x3FEC
//   func_080115B0  -> slot +0x0: u32 payload size (0x34F4)
//                     slot +0x4: payload (0x34F4 bytes)
//                     slot +0x34F8: u32 payload checksum (byte sum)
//   func_08011650  -> validates size/checksum, then restores the payload
// The per-file tail [slot + 0x34FC, slot + 0x3FEC) is never written by any
// SRAM access path (all SRAM I/O funnels through func_080006A4/E4, whose
// callers only touch the offsets above).  The sidecar lives at the start of
// that verified padding and is bound to the payload checksum, so a copied or
// replaced payload invalidates it instead of applying stale amounts.
enum
{
    SAVE_HEADER_SIZE = 0x28,
    SAVE_SLOT_STRIDE = 0x3FEC,
    SAVE_PAYLOAD_SIZE = 0x34F4,
    SAVE_RECORD_SIZE = 0x34FC, // size field + payload + checksum
    SAVE_TAIL_SIZE = SAVE_SLOT_STRIDE - SAVE_RECORD_SIZE, // 0xAF0
    SAVE_SLOT_COUNT = 2,

    SAVE_FARMER_OFFSET = 0x1BD8,
    SAVE_DOG_OFFSET = 0x1C70,
    SAVE_RUCKSACK_OFFSET = SAVE_FARMER_OFFSET + 0x60, // Farmer::rucksack

    SAVE_SIDECAR_OFFSET = SAVE_RECORD_SIZE,
};

struct PACKED RucksackSaveSidecar
{
    enum
    {
        MAGIC = 0x31435352, // "RSC1" little-endian
        VERSION = 1,
        BODY_SIZE = 20,
        SIZE = 24,
    };

    /* +00 */ u32 magic;
    /* +04 */ u8 version;
    /* +05 */ u8 slot;
    /* +06 */ u16 reserved;
    /* +08 */ u32 payload_checksum; // checksum of the legacy payload it belongs to
    /* +0C */ u8 amounts[8];        // 0 for empty slots, 1..99 for occupied slots
    /* +14 */ u32 checksum;         // FNV-1a over the first 20 bytes
};

// Mirrors func_08011588: plain 32-bit sum of the payload bytes.
u32 RucksackSaveChecksum(void const * data, u32 len);

u32 RucksackSidecarChecksum(RucksackSaveSidecar const & sidecar);

// Fills a sidecar from the runtime amounts of the given rucksack.  Occupied
// slots with a zero amount are normalized to one piece.
bool RucksackSidecarFill(RucksackSaveSidecar & sidecar, Rucksack const & rucksack, u32 slot, u32 payload_checksum);

// Full validation: magic/version/slot/payload binding/sidecar checksum and
// amount-vs-occupancy agreement.  Anything unexpected means "no extension".
bool RucksackSidecarValidate(
    RucksackSaveSidecar const & sidecar,
    Rucksack const & rucksack,
    u32 slot,
    u32 payload_checksum);

void RucksackSidecarApply(RucksackSaveSidecar const & sidecar, Rucksack & rucksack);

// Legacy/stock saves and invalid sidecars: every occupied slot is exactly one
// piece, empty slots are zero.
void RucksackAmountsDefaultFromItems(Rucksack & rucksack);

#if !defined(HOST_TEST) || HOST_TEST == 0
// Called from func_080115B0 after the payload and its checksum were written and
// verified.  A failure leaves the legacy save intact; the next load falls back
// to one piece per occupied slot.
EC u32 SaveRucksackAmountsSidecar(void * status, u32 slot_offset, void const * payload, u32 payload_checksum);

// Called from func_080040A0 after func_08011650 validated and restored the
// payload.  `payload` is the validated buffer used for the checksum binding,
// `active_payload` is the state object whose rucksack is now live.
EC void LoadRucksackAmountsSidecar(
    void * status,
    u32 slot_offset,
    void const * payload,
    void * active_payload);
#endif

#endif // RUCKSACK_SAVE_HH
