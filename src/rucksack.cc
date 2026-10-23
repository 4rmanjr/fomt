#include "rucksack.hh"

// Runtime-only stack amounts, keyed by the Rucksack object that owns them.
//
// The arrays cannot live inside Rucksack: the serialized Farmer keeps Rucksack
// at +0x60, so growing it from 0x38 to 0x40 would overlap the Dog object the
// save loader constructs at Farmer+0x98 (payload +0x1C70).  Keeping the table
// out of the object preserves the baserom ABI and save payload byte-for-byte.
//
// The key is the object address (Rucksack has no copy constructor use in the
// game; the payload is restored in place).  At most three Rucksacks exist at
// once (live game state, temporary load buffer, file-select metadata buffer),
// so eight entries leave ample slack.  Construction resets the entry for that
// address, which keeps per-instance semantics for host tests.
namespace
{

struct AmountStore
{
    Rucksack const * owner;
    u32 last_used;
    u8 amounts[8];
};

enum
{
    AMOUNT_STORE_CAPACITY = 8,
};

AmountStore g_amount_stores[AMOUNT_STORE_CAPACITY];
u32 g_amount_store_clock;

AmountStore * FindAmountStore(Rucksack const * owner)
{
    for (u32 i = 0; i < AMOUNT_STORE_CAPACITY; ++i)
    {
        if (g_amount_stores[i].owner == owner)
            return &g_amount_stores[i];
    }

    return 0;
}

AmountStore * AllocAmountStore(Rucksack const * owner)
{
    u32 slot = AMOUNT_STORE_CAPACITY;

    for (u32 i = 0; i < AMOUNT_STORE_CAPACITY; ++i)
    {
        if (g_amount_stores[i].owner == 0)
        {
            slot = i;
            break;
        }
    }

    if (slot == AMOUNT_STORE_CAPACITY)
    {
        slot = 0;

        for (u32 i = 1; i < AMOUNT_STORE_CAPACITY; ++i)
        {
            if (g_amount_stores[i].last_used < g_amount_stores[slot].last_used)
                slot = i;
        }
    }

    AmountStore * store = &g_amount_stores[slot];

    store->owner = owner;
    store->last_used = ++g_amount_store_clock;

    // A brand-new store (constructor or a moved/newly seen object) defaults to
    // the legacy one-piece semantics for already occupied slots.
    for (u32 i = 0; i < 8; ++i)
        store->amounts[i] = 0;

    u32 size = owner->GetSize();

    for (u32 i = 0; i < 8 && i < size; ++i)
    {
        if (!owner->GetItemAt(i).IsEmpty())
            store->amounts[i] = 1;
    }

    return store;
}

// Never returns null: methods are also called on objects that were restored
// from a save payload (the constructor already registered that address).
u8 * GetAmounts(Rucksack const * owner)
{
    AmountStore * store = FindAmountStore(owner);

    if (store == 0)
        store = AllocAmountStore(owner);

    store->last_used = ++g_amount_store_clock;
    return store->amounts;
}

} // namespace

Rucksack::Rucksack()
    : items(2, RucksackItem()), tools(2, ToolStack())
{
    u8 * amounts = GetAmounts(this);

    for (u32 i = 0; i < 8; ++i)
        amounts[i] = 0;
}

u32 Rucksack::GetUpgradeLevel() const
{
    u32 size = items.size();

    if (size < 2)
        return LEVEL_0;

    if (size < 4)
        return LEVEL_0;

    if (size < 8)
        return LEVEL_1;

    return LEVEL_2;
}

u32 Rucksack::GetSize() const
{
    return items.size();
}

RucksackItem const & Rucksack::GetItemAt(u32 idx) const
{
    return items[idx];
}

bool Rucksack::HasNoItems() const
{
    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it)
    {
        if (!it->IsEmpty())
            return false;
    }

    return true;
}

u32 Rucksack::GetFirstFreeItemSlot() const
{
    u32 idx = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (it->IsEmpty())
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetLastFreeItemSlot() const
{
    typedef FixedVec<RucksackItem, 8>::const_reverse_iterator It;

    u32 idx = items.size() - 1;

    // TODO: those are probably not dummies but rather space for the begin() and end() iterators that got copied

    It dummy_a, end = items.rend();
    It dummy_b, it = items.rbegin();

    for (; it != end; ++it, --idx)
    {
        if (it->IsEmpty())
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetFirstSlotWithFood(u32 food_id) const
{
    int idx = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->GetKind() == RucksackItem::KIND_FOOD && it->GetFood().GetId() == food_id)
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetFirstSlotWithArticle(u32 article_id) const
{
    u32 idx = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->GetKind() == RucksackItem::KIND_ARTICLE && it->GetArticle().GetId() == article_id)
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetEmptyItemSlotCount() const
{
    u32 count = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it)
    {
        if (it->IsEmpty())
            count++;
    }

    return count;
}

u32 Rucksack::GetAmountOfFood(u32 food_id) const
{
    u8 const * amounts = GetAmounts(this);
    u32 count = 0;
    u32 idx = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->GetKind() == RucksackItem::KIND_FOOD && it->GetFood().GetId() == food_id)
            count += amounts[idx];
    }

    return count;
}

u32 Rucksack::GetAmountOfArticles(u32 article_id) const
{
    u8 const * amounts = GetAmounts(this);
    u32 count = 0;
    u32 idx = 0;

    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->GetKind() == RucksackItem::KIND_ARTICLE && it->GetArticle().GetId() == article_id)
            count += amounts[idx];
    }

    return count;
}

u32 Rucksack::GetAvailableSpaceForFood(u32 food_id) const
{
    if (food_id >= FOOD_NONE)
        return 0;

    Food food(food_id);
    RucksackItem probe(food);
    return GetAvailableSpaceFor(probe);
}

u32 Rucksack::GetAvailableSpaceForArticle(u32 article_id) const
{
    if (article_id >= ARTICLE_NONE)
        return 0;

    Article article(article_id);
    RucksackItem probe(article);
    return GetAvailableSpaceFor(probe);
}

u32 Rucksack::GetAvailableSpaceFor(RucksackItem const & item) const
{
    if (item.IsEmpty())
        return 0;

    u8 const * amounts = GetAmounts(this);
    u32 available = 0;
    u32 idx = 0;
    RucksackItem const * begin = items.begin();
    RucksackItem const * end = items.end();

    for (RucksackItem const * it = begin; it != end; ++it, ++idx)
    {
        if (it->IsEmpty())
            available += RucksackItem::MAX_AMOUNT;
        else if (it->IsSameStackable(item))
            available += RucksackItem::MAX_AMOUNT - amounts[idx];
    }

    return available;
}

u32 Rucksack::GetAmountAt(u32 idx) const
{
    if (idx >= 8 || items[idx].IsEmpty())
        return 0;

    return GetAmounts(this)[idx];
}

void Rucksack::SetAmountAt(u32 idx, u32 amount)
{
    if (idx >= 8)
        return;

    u8 * amounts = GetAmounts(this);

    if (amount > RucksackItem::MAX_AMOUNT)
        amount = RucksackItem::MAX_AMOUNT;

    if (amount == 0)
    {
        items[idx] = RucksackItem();
        amounts[idx] = 0;
        return;
    }

    if (items[idx].IsEmpty())
        return;

    amounts[idx] = amount;
}

void Rucksack::ClearAmounts()
{
    u8 * amounts = GetAmounts(this);

    for (u32 i = 0; i < 8; ++i)
        amounts[i] = 0;
}

void Rucksack::MoveSlot(u32 src, u32 dst)
{
    if (src >= 8 || dst >= 8 || src == dst)
        return;

    if (items[src].IsEmpty() || !items[dst].IsEmpty())
        return;

    u8 * amounts = GetAmounts(this);

    items[dst] = items[src];
    amounts[dst] = amounts[src];

    items[src] = RucksackItem();
    amounts[src] = 0;
}

void Rucksack::SwapSlots(u32 a, u32 b)
{
    if (a >= 8 || b >= 8 || a == b)
        return;

    u8 * amounts = GetAmounts(this);
    RucksackItem item(items[a]);
    u32 amount = amounts[a];

    items[a] = items[b];
    amounts[a] = amounts[b];

    items[b] = item;
    amounts[b] = amount;
}

u32 Rucksack::MoveToFoodStack(u32 idx, FoodStack & stack)
{
    if (idx >= 8 || items[idx].IsEmpty() || items[idx].GetKind() != RucksackItem::KIND_FOOD)
        return 0;

    u8 * amounts = GetAmounts(this);
    u32 moved = amounts[idx];

    if (stack.IsEmpty())
    {
        stack = FoodStack(items[idx].GetFood(), moved);
    }
    else if (stack.GetFood().GetId() == items[idx].GetFood().GetId())
    {
        u32 free_capacity = FoodStack::MAX_AMOUNT - stack.GetAmount();

        if (moved > free_capacity)
            moved = free_capacity;

        if (moved != 0)
            stack.AddAmount(moved);
    }
    else
    {
        return 0;
    }

    amounts[idx] -= moved;

    if (amounts[idx] == 0)
        items[idx] = RucksackItem();

    return moved;
}

u32 Rucksack::MoveToArticleStack(u32 idx, ArticleStack & stack)
{
    if (idx >= 8 || items[idx].IsEmpty() || items[idx].GetKind() != RucksackItem::KIND_ARTICLE)
        return 0;

    u8 * amounts = GetAmounts(this);
    u32 moved = amounts[idx];

    if (stack.IsEmpty())
    {
        stack = ArticleStack(items[idx].GetArticle(), moved);
    }
    else if (stack.GetArticle().GetId() == items[idx].GetArticle().GetId())
    {
        u32 free_capacity = ArticleStack::MAX_AMOUNT - stack.GetAmount();

        if (moved > free_capacity)
            moved = free_capacity;

        if (moved != 0)
            stack.AddAmount(moved);
    }
    else
    {
        return 0;
    }

    amounts[idx] -= moved;

    if (amounts[idx] == 0)
        items[idx] = RucksackItem();

    return moved;
}

ToolStack const & Rucksack::GetToolAt(u32 idx) const
{
    return tools[idx];
}

bool Rucksack::HasNoTools() const
{
    ToolStack const * begin = tools.begin();
    ToolStack const * end = tools.end();

    for (ToolStack const * it = begin; it != end; ++it)
    {
        if (!it->IsEmpty())
            return false;
    }

    return true;
}

u32 Rucksack::GetFirstFreeToolSlot() const
{
    u32 idx = 0;

    ToolStack const * begin = tools.begin();
    ToolStack const * end = tools.end();

    for (ToolStack const * it = begin; it != end; ++it, ++idx)
    {
        if (it->IsEmpty())
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetLastFreeToolSlot() const
{
    typedef FixedVec<ToolStack, 8>::const_reverse_iterator It;

    int idx = tools.size() - 1;

    // TODO: those are probably not dummies but rather space for the begin() and end() iterators that got copied

    It dummy_a, end = tools.rend();
    It dummy_b, it = tools.rbegin();

    for (; it != end; ++it, --idx)
    {
        if (it->IsEmpty())
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetFirstSlotWithTool(u32 tool_id) const
{
    u32 idx = 0;

    ToolStack const * begin = tools.begin();
    ToolStack const * end = tools.end();

    for (ToolStack const * it = begin; it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->GetTool().GetId() == tool_id)
            return idx;
    }

    return static_cast<u32>(-1);
}

u32 Rucksack::GetAvailableSpaceForTool(u32 tool_id) const
{
    u32 available = 0;

    ToolStack const * begin = tools.begin();
    ToolStack const * end = tools.end();

    for (ToolStack const * it = begin; it != end; ++it)
    {
        if (it->IsEmpty())
        {
            available += ToolStack::MAX_AMOUNT;
        }
        else if (it->GetTool().GetId() == tool_id)
        {
            available += ToolStack::MAX_AMOUNT - it->GetAmount();
        }
    }

    return available;
}

u32 Rucksack::GetAmountOfTool(u32 tool_id) const
{
    u32 count = 0;

    ToolStack const * begin = tools.begin();
    ToolStack const * end = tools.end();

    for (ToolStack const * it = begin; it != end; ++it)
    {
        if (!it->IsEmpty() && it->GetTool().GetId() == tool_id)
        {
            count += it->GetAmount();
        }
    }

    return count;
}

#if defined(NONMATCHING) && NONMATCHING != 0

void Rucksack::Upgrade()
{
    u32 upgrade_level = GetUpgradeLevel();

    if (upgrade_level < 2)
    {
        ++upgrade_level;

        u32 new_size = 2 << upgrade_level;

        items.resize(new_size, RucksackItem());
        tools.resize(new_size, ToolStack());

        u8 * amounts = GetAmounts(this);

        for (u32 i = 0; i < new_size; ++i)
        {
            if (items[i].IsEmpty())
                amounts[i] = 0;
        }
    }
}

#else

void NAKED Rucksack::Upgrade()
{
    /* NONMATCHING
     * https://decomp.me/scratch/05Wq0
     * https://decomp.me/scratch/LzhAW */

    // The actual nonmatching part is the inlined FixedVec::resize, which may come up again

    asm_unified("\
        push {r4, r5, r6, r7, lr}\n\
        mov r7, sl\n\
        mov r6, sb\n\
        mov r5, r8\n\
        push {r5, r6, r7}\n\
        sub sp, #8\n\
        adds r5, r0, #0\n\
        bl GetUpgradeLevel__C8Rucksack\n\
        cmp r0, #1\n\
        bls .L0800FA78\n\
        b .L0800FCCA\n\
    .L0800FA78:\n\
        adds r0, #1\n\
        movs r1, #2\n\
        mov sl, r1\n\
        mov r2, sl\n\
        lsls r2, r0\n\
        mov sl, r2\n\
        mov r0, sp\n\
        bl __12RucksackItem\n\
        mov r8, sp\n\
        ldr r2, [r5]\n\
        cmp sl, r2\n\
        bhs .L0800FAC0\n\
        adds r1, r5, #4\n\
        mov r3, sl\n\
        lsls r0, r3, #2\n\
        adds r1, r1, r0\n\
        lsls r0, r2, #2\n\
        adds r0, #4\n\
        adds r0, r5, r0\n\
        adds r3, r0, #0\n\
        adds r2, r1, #0\n\
        movs r4, #0x24\n\
        adds r4, r4, r5\n\
        mov sb, r4\n\
        ldr r4, [r5]\n\
        cmp r2, r3\n\
        beq .L0800FAB6\n\
    .L0800FAB0:\n\
        adds r2, #4\n\
        cmp r2, r3\n\
        bne .L0800FAB0\n\
    .L0800FAB6:\n\
        subs r0, r0, r1\n\
        asrs r0, r0, #2\n\
        subs r0, r4, r0\n\
        str r0, [r5]\n\
        b .L0800FB90\n\
    .L0800FAC0:\n\
        mov r6, sl\n\
        subs r4, r6, r2\n\
        lsls r0, r2, #2\n\
        adds r0, #4\n\
        adds r7, r5, r0\n\
        movs r0, #0x24\n\
        adds r0, r0, r5\n\
        mov sb, r0\n\
        cmp r4, #0\n\
        beq .L0800FB90\n\
        movs r0, #8\n\
        subs r0, r0, r2\n\
        cmp r0, r4\n\
        blo .L0800FB90\n\
        adds r0, r5, #4\n\
        subs r0, r7, r0\n\
        asrs r0, r0, #2\n\
        subs r2, r2, r0\n\
        mov ip, r2\n\
        adds r3, r7, #0\n\
        cmp ip, r4\n\
        bls .L0800FB3C\n\
        lsls r0, r4, #2\n\
        subs r6, r3, r0\n\
        adds r2, r6, #0\n\
        adds r1, r3, #0\n\
        cmp r6, r3\n\
        beq .L0800FB08\n\
    .L0800FAF8:\n\
        cmp r1, #0\n\
        beq .L0800FB00\n\
        ldr r0, [r2]\n\
        str r0, [r1]\n\
    .L0800FB00:\n\
        adds r2, #4\n\
        adds r1, #4\n\
        cmp r2, r3\n\
        bne .L0800FAF8\n\
    .L0800FB08:\n\
        ldr r0, [r5]\n\
        adds r0, r0, r4\n\
        str r0, [r5]\n\
        adds r2, r6, #0\n\
        subs r0, r2, r7\n\
        asrs r1, r0, #2\n\
        cmp r1, #0\n\
        ble .L0800FB26\n\
    .L0800FB18:\n\
        subs r3, #4\n\
        subs r2, #4\n\
        ldr r0, [r2]\n\
        str r0, [r3]\n\
        subs r1, #1\n\
        cmp r1, #0\n\
        bgt .L0800FB18\n\
    .L0800FB26:\n\
        adds r2, r7, #0\n\
        adds r0, r4, #0\n\
        cmp r0, #0\n\
        beq .L0800FB90\n\
        mov r3, r8\n\
        ldr r1, [r3]\n\
    .L0800FB32:\n\
        stm r2!, {r1}\n\
        subs r0, #1\n\
        cmp r0, #0\n\
        bne .L0800FB32\n\
        b .L0800FB90\n\
    .L0800FB3C:\n\
        mov r6, ip\n\
        subs r4, r4, r6\n\
        adds r2, r4, #0\n\
        adds r1, r3, #0\n\
        cmp r4, #0\n\
        beq .L0800FB5A\n\
    .L0800FB48:\n\
        cmp r1, #0\n\
        beq .L0800FB52\n\
        mov r6, r8\n\
        ldr r0, [r6]\n\
        str r0, [r1]\n\
    .L0800FB52:\n\
        subs r2, #1\n\
        adds r1, #4\n\
        cmp r2, #0\n\
        bne .L0800FB48\n\
    .L0800FB5A:\n\
        ldr r0, [r5]\n\
        adds r0, r0, r4\n\
        str r0, [r5]\n\
        lsls r0, r4, #2\n\
        adds r2, r7, #0\n\
        adds r1, r0, r3\n\
        cmp r7, r3\n\
        beq .L0800FB7A\n\
    .L0800FB6A:\n\
        cmp r1, #0\n\
        beq .L0800FB72\n\
        ldr r0, [r2]\n\
        str r0, [r1]\n\
    .L0800FB72:\n\
        adds r2, #4\n\
        adds r1, #4\n\
        cmp r2, r3\n\
        bne .L0800FB6A\n\
    .L0800FB7A:\n\
        ldr r0, [r5]\n\
        add r0, ip\n\
        str r0, [r5]\n\
        adds r0, r7, #0\n\
        cmp r0, r3\n\
        beq .L0800FB90\n\
        mov r2, r8\n\
        ldr r1, [r2]\n\
    .L0800FB8A:\n\
        stm r0!, {r1}\n\
        cmp r0, r3\n\
        bne .L0800FB8A\n\
    .L0800FB90:\n\
        mov r0, sp\n\
        bl __9ToolStack\n\
        mov r3, sp\n\
        str r3, [sp, #4]\n\
        ldr r2, [r5, #0x24]\n\
        cmp sl, r2\n\
        bhs .L0800FBCE\n\
        adds r1, r5, #0\n\
        adds r1, #0x28\n\
        mov r4, sl\n\
        lsls r0, r4, #1\n\
        adds r1, r1, r0\n\
        lsls r0, r2, #1\n\
        adds r0, #4\n\
        add r0, sb\n\
        adds r3, r0, #0\n\
        adds r2, r1, #0\n\
        mov r5, sb\n\
        ldr r4, [r5]\n\
        cmp r2, r3\n\
        beq .L0800FBC2\n\
    .L0800FBBC:\n\
        adds r2, #2\n\
        cmp r2, r3\n\
        bne .L0800FBBC\n\
    .L0800FBC2:\n\
        subs r0, r0, r1\n\
        asrs r0, r0, #1\n\
        subs r0, r4, r0\n\
        mov r6, sb\n\
        str r0, [r6]\n\
        b .L0800FCCA\n\
    .L0800FBCE:\n\
        mov r0, sl\n\
        subs r7, r0, r2\n\
        lsls r0, r2, #1\n\
        adds r0, #4\n\
        add r0, sb\n\
        mov sl, r0\n\
        cmp r7, #0\n\
        beq .L0800FCCA\n\
        movs r0, #8\n\
        subs r0, r0, r2\n\
        cmp r0, r7\n\
        blo .L0800FCCA\n\
        adds r0, r5, #0\n\
        adds r0, #0x28\n\
        mov r1, sl\n\
        subs r0, r1, r0\n\
        asrs r0, r0, #1\n\
        subs r2, r2, r0\n\
        mov r8, r2\n\
        mov r6, sl\n\
        cmp r8, r7\n\
        bls .L0800FC62\n\
        lsls r0, r7, #1\n\
        subs r0, r6, r0\n\
        mov r8, r0\n\
        mov r5, r8\n\
        adds r4, r6, #0\n\
        cmp r8, r6\n\
        beq .L0800FC1E\n\
    .L0800FC08:\n\
        cmp r4, #0\n\
        beq .L0800FC16\n\
        adds r0, r4, #0\n\
        adds r1, r5, #0\n\
        movs r2, #2\n\
        bl memcpy\n\
    .L0800FC16:\n\
        adds r5, #2\n\
        adds r4, #2\n\
        cmp r5, r6\n\
        bne .L0800FC08\n\
    .L0800FC1E:\n\
        mov r2, sb\n\
        ldr r0, [r2]\n\
        adds r0, r0, r7\n\
        str r0, [r2]\n\
        mov r5, r8\n\
        mov r3, sl\n\
        subs r0, r5, r3\n\
        asrs r4, r0, #1\n\
        cmp r4, #0\n\
        ble .L0800FC46\n\
    .L0800FC32:\n\
        subs r6, #2\n\
        subs r5, #2\n\
        adds r0, r6, #0\n\
        adds r1, r5, #0\n\
        movs r2, #2\n\
        bl memcpy\n\
        subs r4, #1\n\
        cmp r4, #0\n\
        bgt .L0800FC32\n\
    .L0800FC46:\n\
        mov r5, sl\n\
        adds r4, r7, #0\n\
        cmp r4, #0\n\
        beq .L0800FCCA\n\
    .L0800FC4E:\n\
        adds r0, r5, #0\n\
        ldr r1, [sp, #4]\n\
        movs r2, #2\n\
        bl memcpy\n\
        subs r4, #1\n\
        adds r5, #2\n\
        cmp r4, #0\n\
        bne .L0800FC4E\n\
        b .L0800FCCA\n\
    .L0800FC62:\n\
        mov r4, r8\n\
        subs r7, r7, r4\n\
        adds r5, r7, #0\n\
        adds r4, r6, #0\n\
        cmp r7, #0\n\
        beq .L0800FC84\n\
    .L0800FC6E:\n\
        cmp r4, #0\n\
        beq .L0800FC7C\n\
        adds r0, r4, #0\n\
        ldr r1, [sp, #4]\n\
        movs r2, #2\n\
        bl memcpy\n\
    .L0800FC7C:\n\
        subs r5, #1\n\
        adds r4, #2\n\
        cmp r5, #0\n\
        bne .L0800FC6E\n\
    .L0800FC84:\n\
        mov r5, sb\n\
        ldr r0, [r5]\n\
        adds r0, r0, r7\n\
        str r0, [r5]\n\
        lsls r0, r7, #1\n\
        mov r5, sl\n\
        adds r4, r0, r6\n\
        cmp sl, r6\n\
        beq .L0800FCAC\n\
    .L0800FC96:\n\
        cmp r4, #0\n\
        beq .L0800FCA4\n\
        adds r0, r4, #0\n\
        adds r1, r5, #0\n\
        movs r2, #2\n\
        bl memcpy\n\
    .L0800FCA4:\n\
        adds r5, #2\n\
        adds r4, #2\n\
        cmp r5, r6\n\
        bne .L0800FC96\n\
    .L0800FCAC:\n\
        mov r1, sb\n\
        ldr r0, [r1]\n\
        add r0, r8\n\
        str r0, [r1]\n\
        mov r4, sl\n\
        cmp r4, r6\n\
        beq .L0800FCCA\n\
    .L0800FCBA:\n\
        adds r0, r4, #0\n\
        ldr r1, [sp, #4]\n\
        movs r2, #2\n\
        bl memcpy\n\
        adds r4, #2\n\
        cmp r4, r6\n\
        bne .L0800FCBA\n\
    .L0800FCCA:\n\
        add sp, #8\n\
        pop {r3, r4, r5}\n\
        mov r8, r3\n\
        mov sb, r4\n\
        mov sl, r5\n\
        pop {r4, r5, r6, r7}\n\
        pop {r0}\n\
        bx r0");
}

#endif // NONMATCHING

RucksackItem & Rucksack::GetItemAt(u32 idx)
{
    return items[idx];
}

RucksackItem Rucksack::ExtractItemAt(u32 idx)
{
    if (idx < 8 && !items[idx].IsEmpty())
    {
        RucksackItem result(items[idx]);
        items[idx] = RucksackItem();
        GetAmounts(this)[idx] = 0;
        return result;
    }

    return RucksackItem();
}

RucksackItem Rucksack::CycleItemBack(RucksackItem item)
{
    RucksackItem result = items.push_back(item);

    // Shift stack amounts in parallel with the item slots. The incoming item
    // comes from the hand and is one piece (D3). Interim limitation: a surplus
    // stack in the evicted first slot collapses to the one piece handed out;
    // Phase 3.1 replaces the whole-slot cycle with TakeOneAt.
    u8 * amounts = GetAmounts(this);

    for (u32 i = 1; i < items.size(); ++i)
        amounts[i - 1] = amounts[i];
    amounts[items.size() - 1] = 1;

    return result;
}

RucksackItem Rucksack::CycleItemFront(RucksackItem item)
{
    RucksackItem result = items.push_front(item);

    // Shift stack amounts in parallel with the item slots (mirror of CycleItemBack).
    u8 * amounts = GetAmounts(this);

    for (u32 i = items.size() - 1; i > 0; --i)
        amounts[i] = amounts[i - 1];
    amounts[0] = 1;

    return result;
}

RucksackItem Rucksack::PeekOneAt(u32 idx) const
{
    if (items[idx].IsEmpty())
        return RucksackItem();

    return RucksackItem(items[idx]);
}

RucksackItem Rucksack::TakeOneAt(u32 idx)
{
    if (idx >= 8 || items[idx].IsEmpty())
        return RucksackItem();

    u8 * amounts = GetAmounts(this);

    if (amounts[idx] > 1)
    {
        RucksackItem one(items[idx]);
        amounts[idx] -= 1;
        return one;
    }

    RucksackItem result(items[idx]);
    items[idx] = RucksackItem();
    amounts[idx] = 0;
    return result;
}

u32 Rucksack::AddAmountOfFood(u32 food_id, u32 amount)
{
    if (food_id >= FOOD_NONE)
        return amount;

    Food food(food_id);
    return AddAmountOfFood(food, amount);
}

u32 Rucksack::AddAmountOfFood(Food const & food, u32 amount)
{
    if ((u32)food.GetId() >= FOOD_NONE)
        return amount;

    RucksackItem item(food);
    return AddAmountOf(item, amount);
}

u32 Rucksack::AddAmountOfArticle(u32 article_id, u32 amount)
{
    if (article_id >= ARTICLE_NONE)
        return amount;

    Article article(article_id);
    return AddAmountOfArticle(article, amount);
}

u32 Rucksack::AddAmountOfArticle(Article const & article, u32 amount)
{
    if ((u32)article.GetId() >= ARTICLE_NONE)
        return amount;

    RucksackItem item(article);
    return AddAmountOf(item, amount);
}

u32 Rucksack::AddAmountOf(RucksackItem const & item, u32 amount)
{
    if (item.IsEmpty() || amount == 0)
        return amount;

    typedef FixedVec<RucksackItem, 8>::iterator It;
    u8 * amounts = GetAmounts(this);
    It begin = items.begin();
    It end = items.end();
    u32 idx = 0;

    // Top up matching full-key stacks (D1: kind + id + bonuses + wrapped) before using empty slots.
    for (It it = begin; amount > 0 && it != end; ++it, ++idx)
    {
        if (!it->IsEmpty() && it->IsSameStackable(item))
        {
            u32 added = amount;
            if (added > RucksackItem::MAX_AMOUNT - amounts[idx])
                added = RucksackItem::MAX_AMOUNT - amounts[idx];
            amounts[idx] += added;
            amount -= added;
        }
    }

    idx = 0;
    for (It it = begin; amount > 0 && it != end; ++it, ++idx)
    {
        if (it->IsEmpty())
        {
            u32 added = amount;
            if (added > RucksackItem::MAX_AMOUNT)
                added = RucksackItem::MAX_AMOUNT;
            *it = item;
            amounts[idx] = added;
            amount -= added;
        }
    }

    return amount;
}

ToolStack & Rucksack::GetToolAt(u32 idx)
{
    return tools[idx];
}

ToolStack Rucksack::ExtractToolAt(u32 idx)
{
    if (!tools[idx].IsEmpty())
    {
        ToolStack result(tools[idx]);
        tools[idx] = ToolStack();
        return result;
    }

    return ToolStack();
}

ToolStack Rucksack::CycleToolBack(ToolStack tool_stack)
{
    return tools.push_back(tool_stack);
}

ToolStack Rucksack::CycleToolFront(ToolStack tool_stack)
{
    return tools.push_front(tool_stack);
}

u32 Rucksack::AddAmountOfTool(u32 tool_id, u32 amount)
{
    typedef FixedVec<ToolStack, 8>::iterator It;

    if ((int)tool_id >= TOOL_NONE)
        return amount;

    It begin = tools.begin();
    It end = tools.end();

    for (ToolStack * it = begin; amount > 0 && it != end; ++it)
    {
        if (it->IsEmpty())
        {
            u32 added = std::min<u32>(amount, ToolStack::MAX_AMOUNT);
            *it = ToolStack(Tool(tool_id), added);
            amount -= added;
        }
        else if (it->GetTool().GetId() == tool_id)
        {
            u32 added = std::min<u32>(amount, ToolStack::MAX_AMOUNT - it->GetAmount());
            it->AddAmount(added);
            amount -= added;
        }
    }

    return amount;
}
