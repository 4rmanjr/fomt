#include "rucksack_item.hh"

#include <algorithm>
#include <cstddef>

RucksackItem::RucksackItem()
{
    flags = KIND_FOOD;
    inner.item_id = FOOD_NONE;
    inner.stamina_bonus = 0;
    inner.fatigue_bonus = 0;
    amount = 0;
}

RucksackItem::RucksackItem(Food food)
{
    flags = KIND_FOOD;
    inner.item_id = food.GetId();
    inner.stamina_bonus = food.GetStaminaBonus();
    inner.fatigue_bonus = food.GetFatigueBonus();
    amount = 1;
}

RucksackItem::RucksackItem(Food food, u32 a_amount)
{
    flags = KIND_FOOD;
    inner.item_id = food.GetId();
    inner.stamina_bonus = food.GetStaminaBonus();
    inner.fatigue_bonus = food.GetFatigueBonus();
    amount = std::min<u32>(MAX_AMOUNT, a_amount);
}

RucksackItem::RucksackItem(Article article)
{
    flags = KIND_ARTICLE;
    inner.item_id = article.GetId();
    inner.stamina_bonus = 0;
    inner.fatigue_bonus = 0;
    amount = 1;
}

RucksackItem::RucksackItem(Article article, u32 a_amount)
{
    flags = KIND_ARTICLE;
    inner.item_id = article.GetId();
    inner.stamina_bonus = 0;
    inner.fatigue_bonus = 0;
    amount = std::min<u32>(MAX_AMOUNT, a_amount);
}

bool RucksackItem::IsEmpty() const
{
    if (amount == 0)
        return true;

    switch (GetKind())
    {
        default:
            return true;

        case KIND_FOOD:
            return inner.item_id >= FOOD_NONE;

        case KIND_ARTICLE:
            return inner.item_id >= ARTICLE_NONE;
    }
}

u32 RucksackItem::GetAmount() const
{
    if (amount == 0)
        return 0;

    switch (GetKind())
    {
        default:
            return 0;

        case KIND_FOOD:
            return (inner.item_id < FOOD_NONE) ? amount : 0;

        case KIND_ARTICLE:
            return (inner.item_id < ARTICLE_NONE) ? amount : 0;
    }
}

void RucksackItem::AddAmount(u32 a_amount)
{
    if (amount != 0)
    {
        u32 available = MAX_AMOUNT - amount;
        amount += std::min<u32>(available, a_amount);
    }
}

void RucksackItem::SubtractAmount(u32 a_amount)
{
    if (amount != 0)
    {
        if (amount <= a_amount)
            amount = 0;
        else
            amount -= a_amount;
    }
}

bool RucksackItem::IsSameStackable(RucksackItem const & other) const
{
    if (IsEmpty() || other.IsEmpty())
        return false;

    if (GetKind() != other.GetKind())
        return false;

    if (IsWrapped() != other.IsWrapped())
        return false;

    if (inner.item_id != other.inner.item_id)
        return false;

    if (GetKind() == KIND_FOOD)
    {
        if (inner.stamina_bonus != other.inner.stamina_bonus)
            return false;

        if (inner.fatigue_bonus != other.inner.fatigue_bonus)
            return false;
    }

    return true;
}

RucksackItem::Kind RucksackItem::GetKind() const
{
    return static_cast<Kind>(flags & 1);
}

Food RucksackItem::GetFood() const
{
    if (GetKind() == KIND_FOOD && !IsEmpty())
    {
        Food result(inner.item_id);
        result.AddBonuses(inner.stamina_bonus, inner.fatigue_bonus);
        return result;
    }
    else
    {
        return Food(FOOD_NONE);
    }
}

Article RucksackItem::GetArticle() const
{
    if (GetKind() == KIND_ARTICLE && !IsEmpty())
    {
        return Article(inner.item_id);
    }
    else
    {
        return Article(ARTICLE_NONE);
    }
}

bool RucksackItem::IsWrapped() const
{
    return (flags & 2) != 0;
}

bool RucksackItem::TryWrap()
{
    bool can_be_wrapped = false;

    switch (GetKind())
    {
        case KIND_FOOD:
            can_be_wrapped = true;
            break;

        case KIND_ARTICLE:
            can_be_wrapped = Article(inner.item_id).CanBeDiscarded();
            break;
    }

    flags = can_be_wrapped ? (flags | 2) : (flags & ~2);
    return can_be_wrapped;
}
