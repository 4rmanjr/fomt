#include "rucksack_save.hh"

#include "farmer.hh"

typedef char RucksackSaveSidecarMustRemainTwentyFour[sizeof(RucksackSaveSidecar) == 24 ? 1 : -1];
typedef char RucksackSaveSidecarFieldsMustBeContiguous[sizeof(RucksackSaveSidecar) == RucksackSaveSidecar::SIZE ? 1 : -1];
typedef char RucksackSaveRucksackRecordOffsetMustMatch[SAVE_RUCKSACK_OFFSET == SAVE_FARMER_OFFSET + 0x60 ? 1 : -1];
typedef char RucksackSaveDogRecordOffsetMustMatch[SAVE_DOG_OFFSET == SAVE_RUCKSACK_OFFSET + 0x38 ? 1 : -1];
typedef char RucksackSaveTailMustFitSidecar[(u32)SAVE_TAIL_SIZE >= (u32)RucksackSaveSidecar::SIZE ? 1 : -1];

#if !defined(HOST_TEST) || HOST_TEST == 0
// The target ABI puts Farmer::rucksack at 0x60 and Farmer ends at 0x98, right
// before the Dog record at payload+0x1C70 (the host compiler only agrees on
// the serialized constants above, not on Farmer's internal padding).
typedef char RucksackSaveFarmerRucksackOffsetMustRemain60[offsetof(Farmer, rucksack) == 0x60 ? 1 : -1];
typedef char RucksackSaveFarmerMustRemainLegacySize[sizeof(Farmer) == 0x98 ? 1 : -1];
#endif

#if !defined(HOST_TEST) || HOST_TEST == 0
// SRAM proxies: func_080006A4(status, offset, data, len) writes and verifies,
// func_080006E4(status, dest, offset, len) reads.  Both are the only paths the
// game uses to touch 0x0E000000..0x0E007FFF.
EC u32 func_080006A4(void * status, u32 offset, void const * data, u32 len);
EC u32 func_080006E4(void * status, void * dest, u32 offset, u32 len);
#endif

static Rucksack * RucksackFromPayload(void * payload)
{
    u8 * base = static_cast<u8 *>(payload);
    Farmer * farmer = reinterpret_cast<Farmer *>(base + SAVE_FARMER_OFFSET);
    return &farmer->rucksack;
}

static Rucksack const * RucksackFromPayload(void const * payload)
{
    u8 const * base = static_cast<u8 const *>(payload);
    Farmer const * farmer = reinterpret_cast<Farmer const *>(base + SAVE_FARMER_OFFSET);
    return &farmer->rucksack;
}

static bool SlotFromOffset(u32 slot_offset, u32 & slot)
{
    for (u32 i = 0; i < SAVE_SLOT_COUNT; ++i)
    {
        if (slot_offset == SAVE_HEADER_SIZE + i * SAVE_SLOT_STRIDE)
        {
            slot = i;
            return true;
        }
    }

    return false;
}

static u32 Fnv1a(u8 const * data, u32 len)
{
    u32 hash = 2166136261u;

    for (u32 i = 0; i < len; ++i)
    {
        hash ^= data[i];
        hash *= 16777619u;
    }

    return hash;
}

u32 RucksackSaveChecksum(void const * data, u32 len)
{
    u8 const * bytes = static_cast<u8 const *>(data);
    u32 sum = 0;

    for (u32 i = 0; i < len; ++i)
        sum += bytes[i];

    return sum;
}

u32 RucksackSidecarChecksum(RucksackSaveSidecar const & sidecar)
{
    return Fnv1a(reinterpret_cast<u8 const *>(&sidecar), RucksackSaveSidecar::BODY_SIZE);
}

bool RucksackSidecarFill(RucksackSaveSidecar & sidecar, Rucksack const & rucksack, u32 slot, u32 payload_checksum)
{
    if (slot >= SAVE_SLOT_COUNT)
        return false;

    u32 size = rucksack.GetSize();

    for (u32 i = 0; i < 8; ++i)
    {
        u32 amount = 0;

        if (i < size && !rucksack.GetItemAt(i).IsEmpty())
        {
            amount = rucksack.GetAmountAt(i);

            if (amount == 0)
                amount = 1;

            if (amount > RucksackItem::MAX_AMOUNT)
                amount = RucksackItem::MAX_AMOUNT;
        }

        sidecar.amounts[i] = amount;
    }

    sidecar.magic = RucksackSaveSidecar::MAGIC;
    sidecar.version = RucksackSaveSidecar::VERSION;
    sidecar.slot = slot;
    sidecar.reserved = 0;
    sidecar.payload_checksum = payload_checksum;
    sidecar.checksum = RucksackSidecarChecksum(sidecar);

    return true;
}

bool RucksackSidecarValidate(
    RucksackSaveSidecar const & sidecar,
    Rucksack const & rucksack,
    u32 slot,
    u32 payload_checksum)
{
    if (sidecar.magic != RucksackSaveSidecar::MAGIC)
        return false;

    if (sidecar.version != RucksackSaveSidecar::VERSION)
        return false;

    if (sidecar.slot != slot)
        return false;

    if (sidecar.reserved != 0)
        return false;

    // The extension belongs to one exact payload.  A replaced/copied legacy
    // payload (or a sidecar left over from an older save) must not be applied.
    if (sidecar.payload_checksum != payload_checksum)
        return false;

    if (sidecar.checksum != RucksackSidecarChecksum(sidecar))
        return false;

    u32 size = rucksack.GetSize();

    for (u32 i = 0; i < 8; ++i)
    {
        bool occupied = i < size && !rucksack.GetItemAt(i).IsEmpty();

        if (occupied)
        {
            if (sidecar.amounts[i] == 0 || sidecar.amounts[i] > RucksackItem::MAX_AMOUNT)
                return false;
        }
        else if (sidecar.amounts[i] != 0)
        {
            return false;
        }
    }

    return true;
}

void RucksackSidecarApply(RucksackSaveSidecar const & sidecar, Rucksack & rucksack)
{
    rucksack.ClearAmounts();

    u32 size = rucksack.GetSize();

    for (u32 i = 0; i < 8 && i < size; ++i)
    {
        if (!rucksack.GetItemAt(i).IsEmpty())
            rucksack.SetAmountAt(i, sidecar.amounts[i]);
    }
}

void RucksackAmountsDefaultFromItems(Rucksack & rucksack)
{
    rucksack.ClearAmounts();

    u32 size = rucksack.GetSize();

    for (u32 i = 0; i < 8 && i < size; ++i)
    {
        if (!rucksack.GetItemAt(i).IsEmpty())
            rucksack.SetAmountAt(i, 1);
    }
}

#if !defined(HOST_TEST) || HOST_TEST == 0

EC u32 SaveRucksackAmountsSidecar(void * status, u32 slot_offset, void const * payload, u32 payload_checksum)
{
    u32 slot;

    if (payload == 0 || !SlotFromOffset(slot_offset, slot))
        return 0;

    RucksackSaveSidecar sidecar;

    if (!RucksackSidecarFill(sidecar, *RucksackFromPayload(payload), slot, payload_checksum))
        return 0;

    // One verified 24-byte write at the start of the per-file tail.  The
    // payload checksum binds it to the save record; a torn write fails the
    // sidecar checksum on the next load and degrades to one piece per slot.
    return func_080006A4(status, slot_offset + SAVE_SIDECAR_OFFSET, &sidecar, RucksackSaveSidecar::SIZE);
}

EC void LoadRucksackAmountsSidecar(
    void * status,
    u32 slot_offset,
    void const * payload,
    void * active_payload)
{
    if (active_payload == 0)
        return;

    Rucksack * active = RucksackFromPayload(active_payload);
    u32 slot;

    if (payload == 0 || !SlotFromOffset(slot_offset, slot))
    {
        RucksackAmountsDefaultFromItems(*active);
        return;
    }

    RucksackSaveSidecar sidecar;
    func_080006E4(status, &sidecar, slot_offset + SAVE_SIDECAR_OFFSET, RucksackSaveSidecar::SIZE);

    u32 payload_checksum = RucksackSaveChecksum(payload, SAVE_PAYLOAD_SIZE);

    if (RucksackSidecarValidate(sidecar, *active, slot, payload_checksum))
        RucksackSidecarApply(sidecar, *active);
    else
        RucksackAmountsDefaultFromItems(*active);
}

#endif // HOST_TEST
