#include "common.h"
s32 CpuFastSet(s32 *, s32, s32);                        /* extern */
s32 func_0804E9C8(u16, s32, u32, u32, ? *);           /* extern */
u32 func_080D0D28(s32 *, s32);                        /* extern */

u32 func_0804E4AC(u16 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4) {
s32 sp4;
s32 sp24;
s32 sp44;
s32 sp64;
    u32 sp84;
    s32 sp88;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r7;
    u16 temp_r0_2;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r2;
    u32 temp_r4;
    u32 temp_r5;

    temp_r0 = func_080D0D28(&sp4, arg4);
    if ((u32) (temp_r0 - 1) <= 1U) {
        temp_r4 = arg2 >> 3;
        sp84 = temp_r4;
        temp_r2 = arg3 >> 3;
        temp_r0_2 = arg0;
        temp_r0_3 = arg0 >> 0x10;
        if ((temp_r4 < (u32) temp_r0_2) && (temp_r2 < temp_r0_3)) {
            var_r1 = 0;
            if (!(arg2 & 7)) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                var_r1_2 = 0;
                if (!(arg3 & 7)) {
                    var_r1_2 = 1;
                }
                if (var_r1_2 != 0) {
                    sp88 = 0;
                    if ((u32) (temp_r4 + 1) < (u32) temp_r0_2) {
                        sp88 = 1;
                    }
                    var_r7 = 0;
                    temp_r5 = temp_r2 + 1;
                    if (temp_r5 < temp_r0_3) {
                        var_r7 = 1;
                    }
                    temp_r6 = (((temp_r2 * temp_r0_2) + temp_r4) << 5) + arg1;
                    CpuFastSet(&sp4, temp_r6, 8);
                    if (var_r7 != 0) {
                        CpuFastSet(&sp44, (((temp_r5 * temp_r0_2) + temp_r4) << 5) + arg1, 8);
                    }
                    if ((sp88 != 0) && (temp_r0 > 1U)) {
                        CpuFastSet(&sp24, temp_r6 + 0x20, 8);
                        if (var_r7 != 0) {
                            CpuFastSet(&sp64, ((sp84 + (temp_r5 * temp_r0_2)) << 5) + arg1 + 0x20, 8);
                        }
                    }
                } else {
                    goto block_19;
                }
            } else {
block_19:
                func_0804E9C8(arg0, arg1, arg2, arg3, &sp4);
            }
        }
        return temp_r0;
    }
    return 0U;
}

