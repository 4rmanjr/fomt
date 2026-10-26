#include "common.h"
s32 func_0800E324(s32);                             /* extern */
s32 func_080174C8(s32, s32, s32, s32, s32);           /* extern */
s32 func_080A1CBC(s32 *, s32, s32);                     /* extern */
s32 func_080A1D20(s32, u32, ? *, s32);              /* extern */
s32 func_080A5F78(s32 *, s32, ? *, s32, s32);         /* extern */

s32 func_0801D104(void *arg0, void *arg1, s32 arg2, u8 arg3, void *arg4) {
    u8 sp4;
    void *sp8;
s32 spC;
s32 sp1C;
s32 sp24;
    s32 sp28;
    s32 sp2C;
    s16 temp_r0_2;
    s16 temp_r1;
    s16 var_r0;
    s16 var_r0_2;
    s32 *temp_r1_3;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r3;
    s32 var_r4;

    sp28 = arg2;
    sp2C = (s32) arg3;
    temp_r0 = arg0->unk1038;
    temp_r6 = temp_r0 + 0x34C8;
    temp_r8 = func_0800E324(temp_r0 + 0x10);
    temp_r1 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
    temp_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
    sp1C.unk0 = temp_r1;
    sp1C.unk2 = temp_r0_2;
    sp1C.unk4 = (s16) (temp_r1 + 1);
    sp1C.unk6 = (s16) (temp_r0_2 + 1);
    temp_r0_3 = func_080A1D20(temp_r6, (u32) (arg1->unk0 << 0x16) >> 0x16, &sp1C, temp_r8);
    if (temp_r0_3 != -1) {
        func_080A1CBC(&spC, temp_r6, temp_r0_3);
        temp_r1_2 = arg0->unk1038;
        sp4 = sp2C;
        sp8 = arg4;
        func_080174C8(temp_r1_2 + 0x14, temp_r1_2 + 0x34C8, temp_r0_3, temp_r8, sp28);
        if ((arg4->unk0 != 0) && (temp_r1_3 = arg0->unk4, (((u32) (arg1->unk0 << 0x16) >> 0x16) == *temp_r1_3))) {
            temp_r0_4 = arg4->unk4;
            switch (temp_r0_4) {                    /* irregular */
            case 4:
                var_r3 = 2;
                var_r4 = 2;
block_15:
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
                func_080A5F78(temp_r1_3, 1, &sp24, var_r3, var_r4);
                goto block_20;
            case 7:
                var_r3 = 4;
block_14:
                var_r4 = 4;
                goto block_15;
            case 6:
                var_r3 = 4;
                goto block_14;
            case 9:
                var_r3 = 6;
                goto block_14;
            }
        } else {
block_20:
            return 1;
        }
    } else {
        return 0;
    }
}

