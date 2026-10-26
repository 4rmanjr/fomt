#include "common.h"
s32 GetFirstSlotWithFood__C8RucksackUi(s32, s32);   /* extern */
s32 GetFirstSlotWith__C6FridgeUi(s32, s32);         /* extern */
s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 GetId__C4Food(s32 *);                             /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */

s32 func_0804E2C0(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C2C;
    if (((func_0800F190(temp_r4) << 0x18) == 0) && (func_0800F204(temp_r4) == 0)) {
        func_0800F20C(&sp0, temp_r4);
        var_r1 = 0;
        if (GetId__C4Food(&sp0) == arg1) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            goto block_5;
        }
        goto block_8;
    }
block_5:
    temp_r0 = GetFirstSlotWithFood__C8RucksackUi(arg0->unk350 + 0x1C38, arg1);
    if ((temp_r0 != -1) || ((temp_r0_2 = GetFridge__9FarmHouse(arg0->unk350 + 0x1F4), (temp_r0_2 != 0)) && (GetFirstSlotWith__C6FridgeUi(temp_r0_2, arg1) != temp_r0))) {
block_8:
        return 1;
    }
    return 0;
}

