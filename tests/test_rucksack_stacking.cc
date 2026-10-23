// Host-side TDD tests for the R1 stacking model: RucksackItem stays the legacy
// 4-byte layout (baserom ABI), stack amounts live in Rucksack::amounts[8].
// Compile (host, system STL only):
//   g++ -DMODERN=1 -DNONMATCHING=1 -DHOST_TEST=1 -std=c++17 -iquote . -I include \
//     tests/test_rucksack_stacking.cc src/rucksack_item.cc src/rucksack.cc \
//     src/item.cc src/held_item.cc -lgtest -lgtest_main -o /tmp/test_stack
#include <cstddef>

#include <gtest/gtest.h>

#include "rucksack.hh"
#include "rucksack_item.hh"
#include "held_item.hh"
#include "item.hh"

// ---- RucksackItem: legacy 4-byte layout (Fase 1 revisi R1) ----

TEST(RucksackItemLayout, DefaultCtorIsEmpty)
{
    RucksackItem item;
    EXPECT_TRUE(item.IsEmpty());
}

TEST(RucksackItemLayout, FoodCtorIsFood)
{
    Food _f1(FOOD_TURNIP);
    RucksackItem item{_f1};
    EXPECT_FALSE(item.IsEmpty());
    EXPECT_EQ(item.GetKind(), RucksackItem::KIND_FOOD);
}

TEST(RucksackItemLayout, ArticleCtorIsArticle)
{
    Article _a1(ARTICLE_STONES);
    RucksackItem item{_a1};
    EXPECT_FALSE(item.IsEmpty());
    EXPECT_EQ(item.GetKind(), RucksackItem::KIND_ARTICLE);
}

TEST(RucksackItemLayout, SizeIsLegacyFourBytes)
{
    // ABI baserom: 4 byte, bitfield kind/wrapped di byte 0, Inner di +1.
    EXPECT_EQ(sizeof(RucksackItem), 4u);
    EXPECT_EQ(offsetof(RucksackItem, inner), 1u);
}

TEST(RucksackItemLayout, SameStackableFullKey)
{
    Food a(FOOD_TURNIP);
    Food b(FOOD_TURNIP);
    b.AddBonuses(2, 0);
    RucksackItem ia{a};
    RucksackItem ib{b};
    // same id, different bonus -> must NOT stack (D1 full-key)
    EXPECT_FALSE(ia.IsSameStackable(ib));
    RucksackItem ic{a};
    EXPECT_TRUE(ia.IsSameStackable(ic));
}

TEST(RucksackItemLayout, SameStackableWrappedDiffers)
{
    Food _fa(FOOD_TURNIP);
    RucksackItem a{_fa};
    Food _fb(FOOD_TURNIP);
    RucksackItem b{_fb};
    b.TryWrap();
    EXPECT_FALSE(a.IsSameStackable(b));
    Article _ca(ARTICLE_STONES);
    RucksackItem c{_ca};
    // kind differs -> must NOT stack even if numeric id coincided
    EXPECT_FALSE(a.IsSameStackable(c));
}

// ---- Rucksack: stacking add (Fase 1.3 / 2.4) ----

TEST(RucksackStacking, TenTurnipsBecomeOneSlot)
{
    Rucksack rucksack; // 2 item slots by default
    u32 leftover = rucksack.AddAmountOfFood(FOOD_TURNIP, 10);
    EXPECT_EQ(leftover, 0u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 10u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);
    EXPECT_TRUE(rucksack.GetItemAt(1).IsEmpty());
}

TEST(RucksackStacking, TopUpThenOverflowToNewSlot)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 90), 0u);
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 20), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 99u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 11u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 110u);
}

TEST(RucksackStacking, FullReturnsLeftover)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 99), 0u);
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 99), 0u);
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 1), 1u);
}

TEST(RucksackStacking, BonusAndWrappedStacksStaySeparate)
{
    Rucksack rucksack; // 2 slots
    Food plain(FOOD_TURNIP);
    Food bonus(FOOD_TURNIP);
    bonus.AddBonuses(3, 0);

    RucksackItem bonus_stack{bonus};
    rucksack.GetItemAt(0) = bonus_stack;
    rucksack.SetAmountAt(0, 5);

    // ID-only inflow has default bonuses and must use the other slot.
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 2), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 5u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 2u);

    RucksackItem wrapped_stack{plain};
    wrapped_stack.TryWrap();
    EXPECT_FALSE(rucksack.GetItemAt(1).IsSameStackable(wrapped_stack));
}

TEST(RucksackStacking, FullKeyOverloadPreservesBonusAndWrapped)
{
    Rucksack rucksack;
    Food food(FOOD_TURNIP);
    food.AddBonuses(4, -3);
    RucksackItem special{food};
    special.TryWrap();

    EXPECT_EQ(rucksack.AddAmountOf(special, 5), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 5u);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsSameStackable(special));
    EXPECT_EQ(rucksack.GetItemAt(0).GetFood().GetStaminaBonus(), 4);
    EXPECT_EQ(rucksack.GetItemAt(0).GetFood().GetFatigueBonus(), -3);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsWrapped());

    Food same(food);
    EXPECT_EQ(rucksack.AddAmountOfFood(same, 2), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 5u); // unwrapped metadata differs
    EXPECT_EQ(rucksack.GetAmountAt(1), 2u);
}

TEST(RucksackStacking, ArticlesStackToo)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 7), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 5), 0u);
    EXPECT_EQ(rucksack.GetAmountOfArticles(ARTICLE_STONES), 12u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 12u);
}

TEST(RucksackStacking, InflowMoreThanOneStackUsesNextSlot)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 150), 0u);
    EXPECT_EQ(rucksack.GetAmountOfArticles(ARTICLE_STONES), 150u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 99u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 51u);
}

TEST(RucksackStacking, InflowReturnsExactOverflowWhenSlotsExhausted)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 198), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 4), 4u);
    EXPECT_EQ(rucksack.GetAmountOfArticles(ARTICLE_STONES), 198u);
}

TEST(RucksackStacking, AvailableSpace)
{
    Rucksack rucksack; // 2 empty slots
    EXPECT_EQ(rucksack.GetAvailableSpaceForFood(FOOD_TURNIP), 198u);
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 100), 0u);
    // slot0 x99, slot1 x1 -> space left = 0 + 98
    EXPECT_EQ(rucksack.GetAvailableSpaceForFood(FOOD_TURNIP), 98u);
}

// ---- TakeOneAt (Fase 1.3 / 3.1 helper) ----

TEST(RucksackTakeOne, DecrementsAndReturnsSingle)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_FALSE(one.IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 9u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 9u);
}

TEST(RucksackTakeOne, PeekDoesNotDecrement)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    RucksackItem peek = rucksack.PeekOneAt(0);
    EXPECT_FALSE(peek.IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);
}

TEST(RucksackTakeOne, PreservesStackMetadata)
{
    Food food(FOOD_TURNIP);
    food.AddBonuses(3, -2);
    RucksackItem item{food};
    item.TryWrap();

    Rucksack rucksack;
    rucksack.GetItemAt(0) = item;
    rucksack.SetAmountAt(0, 10);
    RucksackItem one = rucksack.TakeOneAt(0);

    EXPECT_FALSE(one.IsEmpty());
    EXPECT_EQ(one.GetFood().GetStaminaBonus(), 3);
    EXPECT_EQ(one.GetFood().GetFatigueBonus(), -2);
    EXPECT_TRUE(one.IsWrapped());
    EXPECT_TRUE(one.IsSameStackable(item));
    EXPECT_EQ(rucksack.GetAmountAt(0), 9u);
}

TEST(RucksackTakeOne, LastPieceEmptiesSlot)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 1), 0u);
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_FALSE(one.IsEmpty());
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
}

// ---- Slot helpers backing the ASM transfer patches (Fase 2.3) ----

TEST(RucksackSlotHelpers, SetAmountAtZeroClearsSlot)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    rucksack.SetAmountAt(0, 0);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
}

TEST(RucksackSlotHelpers, SetAmountAtClampsAndRefusesEmptySlot)
{
    Rucksack rucksack;
    rucksack.SetAmountAt(0, 5); // empty slot: refuse
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    rucksack.SetAmountAt(0, 150); // clamp to 99
    EXPECT_EQ(rucksack.GetAmountAt(0), 99u);
}

TEST(RucksackSlotHelpers, MoveSlotMovesItemAndAmount)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    rucksack.MoveSlot(0, 1);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 5u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 5u);
}

TEST(RucksackSlotHelpers, MoveSlotRefusesOccupiedDstOrEmptySrc)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    rucksack.MoveSlot(0, 1);           // ok
    rucksack.MoveSlot(0, 1);           // src empty -> no-op
    EXPECT_EQ(rucksack.GetAmountAt(1), 5u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 3), 0u); // slot0
    rucksack.MoveSlot(1, 0);           // dst occupied -> no-op
    EXPECT_EQ(rucksack.GetAmountAt(0), 3u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 5u);
}

TEST(RucksackSlotHelpers, SwapSlotsSwapsItemAndAmount)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 3), 0u);
    rucksack.SwapSlots(0, 1);
    EXPECT_EQ(rucksack.GetAmountAt(0), 3u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 5u);
    EXPECT_TRUE(rucksack.GetItemAt(0).GetKind() == RucksackItem::KIND_ARTICLE);
    EXPECT_TRUE(rucksack.GetItemAt(1).GetKind() == RucksackItem::KIND_FOOD);
}

// ---- ExtractItemAt clears the amount (Fase 2.3 refill path) ----

TEST(RucksackExtract, ExtractClearsAmount)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 7), 0u);
    RucksackItem extracted = rucksack.ExtractItemAt(0);
    EXPECT_FALSE(extracted.IsEmpty());
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
}

// ---- Cycle keeps amounts in parallel with slots ----

TEST(RucksackCycle, CycleBackShiftsAmounts)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 3), 0u);

    // incoming = a real 1-piece item, as it would come from the hand (D3)
    Food hand_food(FOOD_TURNIP);
    RucksackItem incoming{hand_food};
    RucksackItem evicted = rucksack.CycleItemBack(incoming);

    // evicted = old slot 0 (turnips); amounts shift left with the slots,
    // incoming lands in the last slot as 1 piece.
    EXPECT_FALSE(evicted.IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 3u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 1u);
    EXPECT_TRUE(rucksack.GetItemAt(1).IsSameStackable(incoming));
}

// ---- Stack transfer helpers backing the fridge/shelf refill patches (Fase 2.3, D4) ----

TEST(RucksackStackTransfer, MoveToEmptyFoodStackMovesAll)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    FoodStack stack; // empty
    EXPECT_EQ(rucksack.MoveToFoodStack(0, stack), 10u);
    EXPECT_EQ(stack.GetAmount(), 10u);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
}

TEST(RucksackStackTransfer, MoveToSameIdFoodStackMergesAndCaps)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    FoodStack stack(Food(FOOD_TURNIP), 95);
    EXPECT_EQ(rucksack.MoveToFoodStack(0, stack), 4u); // capped at 99, leftover stays
    EXPECT_EQ(stack.GetAmount(), 99u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 6u);
    EXPECT_FALSE(rucksack.GetItemAt(0).IsEmpty());
}

TEST(RucksackStackTransfer, MoveToDiffIdFoodStackRefuses)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    FoodStack stack(Food(FOOD_POTATO), 1);
    EXPECT_EQ(rucksack.MoveToFoodStack(0, stack), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);
    EXPECT_EQ(stack.GetAmount(), 1u);
}

TEST(RucksackStackTransfer, MoveToArticleStackWorks)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 10), 0u);
    ArticleStack stack; // empty
    EXPECT_EQ(rucksack.MoveToArticleStack(0, stack), 10u);
    EXPECT_EQ(stack.GetAmount(), 10u);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
}

TEST(RucksackStackTransfer, MoveRefusesWrongKind)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 10), 0u);
    FoodStack stack; // food stack vs article slot
    EXPECT_EQ(rucksack.MoveToFoodStack(0, stack), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);
}

// ---- Fase 3.4: give-1 outflow (telur x10 -> give -> x9) ----

TEST(RucksackGiveOne, EggStackLosesExactlyOnePiece)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_REGULAR_QUALITY_EGG, 10), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);

    // hand receives one piece (cycle / UI take -> func_0800F418)
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_FALSE(one.IsEmpty());
    EXPECT_EQ(one.GetKind(), RucksackItem::KIND_FOOD);
    EXPECT_EQ(rucksack.GetAmountAt(0), 9u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_REGULAR_QUALITY_EGG), 9u);
}

TEST(RucksackGiveOne, LastPieceClearsSlotCompletely)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 1), 0u);
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_FALSE(one.IsEmpty());
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 0u);
    EXPECT_EQ(rucksack.GetAmountOfArticles(ARTICLE_STONES), 0u);
}

TEST(RucksackCycleFlow, DepositOneThenTakeOneKeepsSurplus)
{
    // Mirrors Farmer::func_0800EB3C after Fase 3.1 (take-1 cycle, no rotation).
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 5), 0u);
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 3), 0u);

    // hand holds a turnip: deposit 1 pc (merges into the turnip stack)...
    Food hand_food(FOOD_TURNIP);
    RucksackItem hand_item{hand_food};
    EXPECT_EQ(rucksack.AddAmountOf(hand_item, 1), 0u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 6u);

    // ...then the first occupied slot hands out exactly one piece.
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_FALSE(one.IsEmpty());
    EXPECT_EQ(rucksack.GetAmountAt(0), 5u);
    EXPECT_EQ(rucksack.GetAmountAt(1), 3u);
}

TEST(RucksackCycleFlow, DepositIntoEmptySlotThenTakeFromFirst)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfArticle(ARTICLE_STONES, 2), 0u);

    Food hand_food(FOOD_TURNIP);
    RucksackItem hand_item{hand_food};
    EXPECT_EQ(rucksack.AddAmountOf(hand_item, 1), 0u); // new slot (no turnip stack)
    EXPECT_EQ(rucksack.GetAmountAt(1), 1u);

    // first occupied = slot0 (stones); reverse variant would take slot1.
    RucksackItem one = rucksack.TakeOneAt(0);
    EXPECT_EQ(one.GetKind(), RucksackItem::KIND_ARTICLE);
    EXPECT_EQ(rucksack.GetAmountAt(1), 1u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 1u);
}

// ---- Held conversion stays 1 pcs (Fase 1.4, D3) ----

TEST(HeldConversion, StackToHeldToItemIsOne)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    HeldItem held;
    func_0800F418(&held, rucksack.GetItemAt(0));
    RucksackItem back = func_0800F294(&held);
    EXPECT_FALSE(back.IsEmpty());
}
