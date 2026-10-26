#include "common.h"
s32 GetAvailableSpaceFor__C6FridgeUi(s32, s32);     /* extern */
s32 GetEmptyItemSlotCount__C8Rucksack(s32);         /* extern */
s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 func_0800F190(s32);                             /* extern */

s32 func_0804E17C(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (((func_0800F190(arg0->unk350 + 0x1C2C) << 0x18) != 0) || (GetEmptyItemSlotCount__C8Rucksack(arg0->unk350 + 0x1C38) != 0) || ((temp_r0 = GetFridge__9FarmHouse(arg0->unk350 + 0x1F4), (temp_r0 != 0)) && (GetAvailableSpaceFor__C6FridgeUi(temp_r0, arg1) != 0))) {
        return 1;
    }
    return 0;
}

