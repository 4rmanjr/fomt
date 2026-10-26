#include "common.h"
u8 GetAmount__C9FoodStack(s32 *);                   /* extern */
s32 *GetFoodStackAt__6FridgeUi(s32, s32);           /* extern */
s32 GetFood__C9FoodStack(u8 *, s32 *);                /* extern */
s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 IsEmpty__C9FoodStack(s32 *);                    /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 __12RucksackItemG4Food(s32 *, s32);               /* extern */

u8 func_08096EE8(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    u8 sp8;
    s32 var_r0;
    u8 var_r8;

    var_r8 = 0;
    if (arg2 == 0) {
        if (arg3 < (s32) arg0->unk2BA0) {
            *arg1 = *GetItemAt__8RucksackUi(arg0->unk8C + 0x1C38, arg3);
            var_r8 = 1;
        } else {
            __12RucksackItem(&sp0);
            var_r0 = sp0;
            goto block_7;
        }
    } else {
        sp0 = *GetFoodStackAt__6FridgeUi(GetFridge__9FarmHouse(arg0->unk8C + 0x1F4), ((arg2 - 1) * 8) + arg3);
        if ((IsEmpty__C9FoodStack(&sp0) << 0x18) == 0) {
            GetFood__C9FoodStack(&sp8, &sp0);
            __12RucksackItemG4Food(&sp4, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | sp8));
            *arg1 = sp4;
            var_r8 = GetAmount__C9FoodStack(&sp0);
        } else {
            __12RucksackItem(&sp4);
            var_r0 = sp4;
block_7:
            *arg1 = var_r0;
        }
    }
    return var_r8;
}

