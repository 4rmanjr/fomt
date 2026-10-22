#ifndef RUCKSACK_ITEM_HH
#define RUCKSACK_ITEM_HH

#include "prelude.h"

#include <cstddef>

#include "item.hh"

struct PACKED RucksackItem
{
    enum
    {
        MAX_AMOUNT = 99
    };
    enum Kind
    {
        KIND_FOOD,
        KIND_ARTICLE,
    };

    struct PACKED Inner
    {
        u8 item_id;
        i8 stamina_bonus;
        i8 fatigue_bonus;
    };

    RucksackItem();
    RucksackItem(Food food);
    RucksackItem(Food food, u32 amount);
    RucksackItem(Article article);
    RucksackItem(Article article, u32 amount);

    bool IsEmpty() const;
    Kind GetKind() const;
    Food GetFood() const;
    Article GetArticle() const;
    u32 GetAmount() const;
    void AddAmount(u32 amount);
    void SubtractAmount(u32 amount);
    bool IsSameStackable(RucksackItem const & other) const;
    bool IsWrapped() const;
    bool TryWrap();

    /* +00 */ u8 flags;
    /* +01 */ Inner inner;
    /* +04 */ u8 amount;
};

// Compile-time layout checks compatible with the legacy C++ compiler.
typedef char RucksackItemInnerOffsetMustBe1[(offsetof(RucksackItem, inner) == 1) ? 1 : -1];
typedef char RucksackItemAmountOffsetMustBe4[(offsetof(RucksackItem, amount) == 4) ? 1 : -1];
#if !defined(HOST_TEST) || HOST_TEST == 0
typedef char RucksackItemSizeMustBe5[(sizeof(RucksackItem) == 5) ? 1 : -1];
#endif

#endif // RUCKSACK_ITEM_HH
