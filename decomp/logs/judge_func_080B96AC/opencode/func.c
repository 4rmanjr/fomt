#include "common.h"
u16 ArcTan2(s32, s32);                              /* extern */

s32 func_080B96AC(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r3;
    u16 temp_r1;
    u16 temp_r6;
    u8 temp_r5;

    temp_r5 = (u8) arg6;
    temp_r6 = (u16) arg7;
    temp_r3 = ((u32) (arg4 << 0x10) >> 0x18) - ((u32) (arg1 << 0x10) >> 0x18);
    temp_r2 = ((u32) (arg2 << 0x10) >> 0x18) - ((u32) (arg5 << 0x10) >> 0x18);
    if ((s32) ((temp_r3 * temp_r3) + (temp_r2 * temp_r2)) <= (s32) (temp_r5 * temp_r5)) {
        temp_r1 = ArcTan2(temp_r3, temp_r2);
        if (arg3 == 1) {
            if ((u32) temp_r1 >= (u32) temp_r6) {
                var_r0 = 0x10000 - temp_r6;
                goto block_8;
            }
            goto block_9;
        }
        var_r3 = arg3;
        if (var_r3 == 3) {
            var_r3 = 1;
        }
        temp_r3_2 = (var_r3 + 1) << 0xE;
        if ((s32) temp_r1 < (s32) (temp_r6 + temp_r3_2)) {
            var_r0 = temp_r3_2 - temp_r6;
block_8:
            if ((s32) temp_r1 > var_r0) {
block_9:
                return 1;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}

