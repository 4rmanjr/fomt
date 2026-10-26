#include "common.h"
s32 func_0809D8A4(s32);                             /* extern */
s32 func_0809D8B8(s32);                             /* extern */
s32 func_0809DA00(s32, u32, s32);                   /* extern */

s32 func_0809D8E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r7;
    s32 var_r4;
    s32 var_r5;
    u8 temp_r1;
    void *temp_r0_2;
    void *temp_r2;
    void *temp_r4;

    sp0 = 0;
    temp_r7 = arg1 * 2;
    temp_r3 = arg2 * 8;
    temp_r4 = arg0 + (temp_r7 + (arg2 * 0x38));
    if ((temp_r4->unk4 << 0x1C) == 0) {
        sp4 = temp_r3;
        temp_r0 = func_0809DA00(arg0, (u8) temp_r4->unk5 >> 2, arg3);
        sp0 = temp_r0;
        if (temp_r0 == 1) {
            temp_r4->unk4 = (u8) ((-0x10 & temp_r4->unk4) | 2);
            sp0 = 0;
            var_r5 = 0;
loop_9:
            if (var_r5 < func_0809D8B8(arg0)) {
                var_r4 = 0;
loop_7:
                if (var_r4 < func_0809D8A4(arg0)) {
                    temp_r2 = arg0 + ((var_r4 * 2) + (var_r5 * 0x38));
                    temp_r1 = temp_r2->unk5;
                    if ((temp_r1 >> 2) == 1) {
                        temp_r2->unk5 = (u8) (3 & temp_r1);
                    }
                    var_r4 += 1;
                    goto loop_7;
                }
                var_r5 += 1;
                goto loop_9;
            }
        } else {
            temp_r4->unk4 = (u8) ((-0x10 & temp_r4->unk4) | 1);
        }
        temp_r0_2 = arg0 + (((temp_r3 - arg2) * 8) + temp_r7);
        temp_r0_2->unk5 = (u8) (3 & temp_r0_2->unk5);
    }
    return sp0;
}

