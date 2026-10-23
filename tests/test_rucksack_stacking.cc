// Host-side TDD tests for Phase 1: RucksackItem amount + Rucksack stacking.
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

// ---- RucksackItem: amount field (Fase 1.1 / 1.2) ----

TEST(RucksackItemAmount, DefaultCtorIsEmpty)
{
    RucksackItem item;
    EXPECT_TRUE(item.IsEmpty());
    EXPECT_EQ(item.GetAmount(), 0u);
}

TEST(RucksackItemAmount, ExplicitZeroIsEmpty)
{
    Food food(FOOD_TURNIP);
    RucksackItem item(food, 0);
    EXPECT_TRUE(item.IsEmpty());
    EXPECT_EQ(item.GetAmount(), 0u);
}

TEST(RucksackItemAmount, FoodCtorDefaultsToOne)
{
    Food _f1(FOOD_TURNIP);
    RucksackItem item{_f1};
    EXPECT_FALSE(item.IsEmpty());
    EXPECT_EQ(item.GetAmount(), 1u);
    EXPECT_EQ(item.GetKind(), RucksackItem::KIND_FOOD);
}

TEST(RucksackItemAmount, ArticleCtorDefaultsToOne)
{
    Article _a1(ARTICLE_STONES);
    RucksackItem item{_a1};
    EXPECT_FALSE(item.IsEmpty());
    EXPECT_EQ(item.GetAmount(), 1u);
    EXPECT_EQ(item.GetKind(), RucksackItem::KIND_ARTICLE);
}

TEST(RucksackItemAmount, SizeIsFiveBytes)
{
    EXPECT_EQ(sizeof(RucksackItem), 5u);
    EXPECT_EQ(offsetof(RucksackItem, flags), 0u);
    EXPECT_EQ(offsetof(RucksackItem, inner), 1u);
    EXPECT_EQ(offsetof(RucksackItem, amount), 4u);
}

TEST(RucksackItemAmount, SameStackableFullKey)
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

TEST(RucksackItemAmount, SameStackableWrappedDiffers)
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

// ---- Rucksack: stacking add (Fase 1.3) ----

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

    RucksackItem bonus_stack(bonus, 5);
    rucksack.GetItemAt(0) = bonus_stack;

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
    RucksackItem special(food, 7);
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
    EXPECT_EQ(one.GetAmount(), 1u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 9u);
    EXPECT_EQ(rucksack.GetAmountOfFood(FOOD_TURNIP), 9u);
}

TEST(RucksackTakeOne, PeekDoesNotDecrement)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    RucksackItem peek = rucksack.PeekOneAt(0);
    EXPECT_EQ(peek.GetAmount(), 1u);
    EXPECT_EQ(rucksack.GetAmountAt(0), 10u);
}

TEST(RucksackTakeOne, PreservesStackMetadata)
{
    Food food(FOOD_TURNIP);
    food.AddBonuses(3, -2);
    RucksackItem item(food, 10);
    item.TryWrap();

    Rucksack rucksack;
    rucksack.GetItemAt(0) = item;
    RucksackItem one = rucksack.TakeOneAt(0);

    EXPECT_EQ(one.GetAmount(), 1u);
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
    EXPECT_EQ(one.GetAmount(), 1u);
    EXPECT_TRUE(rucksack.GetItemAt(0).IsEmpty());
}

// ---- Held conversion stays 1 pcs (Fase 1.4, D3) ----

TEST(HeldConversion, StackToHeldToItemIsOne)
{
    Rucksack rucksack;
    EXPECT_EQ(rucksack.AddAmountOfFood(FOOD_TURNIP, 10), 0u);
    HeldItem held;
    func_0800F418(&held, rucksack.GetItemAt(0));
    RucksackItem back = func_0800F294(&held);
    EXPECT_EQ(back.GetAmount(), 1u);
    EXPECT_FALSE(back.IsEmpty());
}
