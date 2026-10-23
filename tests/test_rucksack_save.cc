// Host-side tests for Fase 5.2: the Rucksack amount store stays out of the
// object (so sizeof(Rucksack) remains 0x38) and the versioned save sidecar
// validates/binds amounts to one legacy payload.
// Compile (host, system STL only):
//   g++ -DMODERN=1 -DNONMATCHING=1 -DHOST_TEST=1 -std=c++17 -iquote . -I include \
//     tests/test_rucksack_save.cc src/rucksack_item.cc src/rucksack.cc \
//     src/rucksack_save.cc src/item.cc src/held_item.cc -lgtest -lgtest_main \
//     -o /tmp/test_rucksack_save
#include <cstddef>

#include <gtest/gtest.h>

#include "rucksack.hh"
#include "rucksack_item.hh"
#include "rucksack_save.hh"
#include "item.hh"

// ---- ABI stays at the baserom Rucksack size ----

TEST(RucksackAbi, SizeMatchesLegacyRecord)
{
    EXPECT_EQ(sizeof(Rucksack), 0x38u);
    EXPECT_EQ(offsetof(Rucksack, tools), 0x24u);
}

// ---- runtime amount store: per-instance semantics, no inline member ----

TEST(RucksackAmountStore, TwoLiveRucksacksAreIndependent)
{
    Rucksack a;
    Rucksack b;

    EXPECT_EQ(a.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    EXPECT_EQ(b.AddAmountOfFood(FOOD_TURNIP, 4), 0u);

    EXPECT_EQ(a.GetAmountAt(0), 10u);
    EXPECT_EQ(b.GetAmountAt(0), 4u);

    b.ClearAmounts();
    EXPECT_EQ(b.GetAmountAt(0), 0u);
    EXPECT_EQ(a.GetAmountAt(0), 10u);
}

TEST(RucksackAmountStore, ConstructionStartsEmpty)
{
    Rucksack a;
    EXPECT_EQ(a.AddAmountOfArticle(ARTICLE_STONES, 7), 0u);
    EXPECT_EQ(a.GetAmountAt(0), 7u);

    // A new object at a recycled stack address must not inherit old amounts.
    Rucksack b;
    EXPECT_EQ(b.AddAmountOfFood(FOOD_TURNIP, 2), 0u);
    EXPECT_EQ(b.GetAmountAt(0), 2u);
    EXPECT_TRUE(b.GetItemAt(1).IsEmpty());
}

// ---- sidecar layout / checksums ----

TEST(RucksackSidecar, LayoutIsCompactAndVersioned)
{
    EXPECT_EQ(sizeof(RucksackSaveSidecar), 24u);
    EXPECT_EQ(SAVE_RECORD_SIZE, 0x34FC);
    EXPECT_EQ(SAVE_TAIL_SIZE, 0xAF0);
    EXPECT_GE(SAVE_TAIL_SIZE, (u32)sizeof(RucksackSaveSidecar));
}

TEST(RucksackSidecar, PayloadChecksumIsByteSum)
{
    u8 data[3] = { 1, 2, 3 };
    EXPECT_EQ(RucksackSaveChecksum(data, 3), 6u);

    u8 ff[256];
    for (u32 i = 0; i < 256; ++i)
        ff[i] = 0xFF;

    EXPECT_EQ(RucksackSaveChecksum(ff, 256), 255u * 256u);
}

TEST(RucksackSidecar, RoundTripPreservesOccupancyAndAmounts)
{
    Rucksack source;
    EXPECT_EQ(source.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    EXPECT_EQ(source.AddAmountOfArticle(ARTICLE_STONES, 99), 0u);

    RucksackSaveSidecar sidecar;
    ASSERT_TRUE(RucksackSidecarFill(sidecar, source, 0, 0x12345678u));
    EXPECT_EQ(sidecar.magic, (u32)RucksackSaveSidecar::MAGIC);
    EXPECT_EQ(sidecar.version, (u8)RucksackSaveSidecar::VERSION);
    EXPECT_EQ(sidecar.slot, 0u);
    EXPECT_EQ(sidecar.payload_checksum, 0x12345678u);
    EXPECT_EQ(sidecar.amounts[0], 10u);
    EXPECT_EQ(sidecar.amounts[1], 99u);
    EXPECT_EQ(sidecar.amounts[2], 0u);

    Rucksack target;
    EXPECT_EQ(target.AddAmountOfFood(FOOD_TURNIP, 1), 0u);
    EXPECT_EQ(target.AddAmountOfArticle(ARTICLE_STONES, 1), 0u);
    ASSERT_TRUE(RucksackSidecarValidate(sidecar, target, 0, 0x12345678u));

    RucksackSidecarApply(sidecar, target);
    EXPECT_EQ(target.GetAmountAt(0), 10u);
    EXPECT_EQ(target.GetAmountAt(1), 99u);
}

TEST(RucksackSidecar, EmptySlotsMustCarryZeroAmount)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);

    RucksackSaveSidecar sidecar;
    ASSERT_TRUE(RucksackSidecarFill(sidecar, rucksack, 1, 42u));
    EXPECT_EQ(sidecar.amounts[1], 0u);

    ASSERT_TRUE(RucksackSidecarValidate(sidecar, rucksack, 1, 42u));

    sidecar.amounts[1] = 3; // empty slot with an amount is invalid
    sidecar.checksum = RucksackSidecarChecksum(sidecar);
    EXPECT_FALSE(RucksackSidecarValidate(sidecar, rucksack, 1, 42u));
}

TEST(RucksackSidecar, OccupiedSlotMustHaveOneToNinetyNine)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);

    RucksackSaveSidecar sidecar;
    ASSERT_TRUE(RucksackSidecarFill(sidecar, rucksack, 0, 7u));

    sidecar.amounts[0] = 0; // occupied slot cannot be zero pieces
    sidecar.checksum = RucksackSidecarChecksum(sidecar);
    EXPECT_FALSE(RucksackSidecarValidate(sidecar, rucksack, 0, 7u));

    sidecar.amounts[0] = 99;
    sidecar.checksum = RucksackSidecarChecksum(sidecar);
    EXPECT_TRUE(RucksackSidecarValidate(sidecar, rucksack, 0, 7u));

    sidecar.amounts[0] = 100;
    sidecar.checksum = RucksackSidecarChecksum(sidecar);
    EXPECT_FALSE(RucksackSidecarValidate(sidecar, rucksack, 0, 7u));
}

TEST(RucksackSidecar, RejectsWrongSlotVersionMagicAndChecksum)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);

    RucksackSaveSidecar sidecar;
    ASSERT_TRUE(RucksackSidecarFill(sidecar, rucksack, 0, 9u));

    EXPECT_FALSE(RucksackSidecarValidate(sidecar, rucksack, 1, 9u));

    RucksackSaveSidecar bad = sidecar;
    bad.version = 2;
    bad.checksum = RucksackSidecarChecksum(bad);
    EXPECT_FALSE(RucksackSidecarValidate(bad, rucksack, 0, 9u));

    bad = sidecar;
    bad.magic = 0;
    bad.checksum = RucksackSidecarChecksum(bad);
    EXPECT_FALSE(RucksackSidecarValidate(bad, rucksack, 0, 9u));

    bad = sidecar;
    bad.amounts[0] = 6;
    EXPECT_FALSE(RucksackSidecarValidate(bad, rucksack, 0, 9u)); // stale sidecar checksum

    EXPECT_FALSE(RucksackSidecarValidate(sidecar, rucksack, 0, 10u)); // wrong payload
}

TEST(RucksackSidecar, DefaultsToOnePerOccupiedSlot)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 8), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);

    RucksackAmountsDefaultFromItems(rucksack);
    EXPECT_EQ(rucksack.GetAmountAt(0), 1u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 1u);
    EXPECT_EQ(rucksack.GetAmountAt(2), 0u);
}
