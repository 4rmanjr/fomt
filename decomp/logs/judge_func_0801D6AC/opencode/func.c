#include "common.h"
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 __12RucksackItem(s32 *);                          /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_080A1B38(s32 *, s32, u32, ? *, s32);         /* extern */
s32 func_080A1CBC(s32 *, s32, s32);                     /* extern */
s32 func_080A1D20(s32, u32, ? *, s32);              /* extern */
s32 func_080A5F78(s32 *, s32, ? *, s32, s32);         /* extern */

s32 *func_0801D6AC(s32 *arg0, void *arg1, void *arg2) {
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp1C;
s32 sp24;
    s16 temp_r0_2;
    s16 temp_r1;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;

    temp_r0 = arg1->unk1038;
    temp_r6 = temp_r0 + 0x34C8;
    temp_sb = func_0800E324(temp_r0 + 0x10);
    temp_r1 = ((arg2->unk2 & 0x3FF) << 6) | ((u8) arg2->unk1 >> 2);
    temp_r0_2 = ((arg2->unk4 & 0x3FF) << 6) | ((u8) arg2->unk3 >> 2);
    sp1C.unk0 = temp_r1;
    sp1C.unk2 = temp_r0_2;
    sp1C.unk4 = (s16) (temp_r1 + 1);
    sp1C.unk6 = (s16) (temp_r0_2 + 1);
    temp_r8 = func_080A1D20(temp_r6, (u32) (arg2->unk0 << 0x16) >> 0x16, &sp1C, temp_sb);
    __12RucksackItem(&sp4);
    if (temp_r8 != -1) {
        func_080A1B38(&sp8, temp_r6, (u32) (arg2->unk0 << 0x16) >> 0x16, &sp1C, temp_sb);
        sp4 = sp8;
        if (((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) && (((u32) (arg2->unk0 << 0x16) >> 0x16) == *arg1->unk4)) {
            func_080A1CBC(&spC, temp_r6, temp_r8);
            var_r0 = spC.unk8;
            if ((s32) var_r0 < 0) {
                var_r0 += 7;
            }
            var_r0_2 = spC.unkA;
            if ((s32) var_r0_2 < 0) {
                var_r0_2 += 7;
            }
            sp24.unk0 = (s16) (var_r0 >> 3);
            sp24.unk2 = (s16) (var_r0_2 >> 3);
            func_080A5F78(arg1->unk4, 1, &sp24, 2, 2);
        }
    }
    *arg0 = sp4;
    return arg0;
}

