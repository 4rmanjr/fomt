#include "common.h"
s32 func_080AC5D0(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u16 temp_r0_2;
    u8 *var_r1;

    temp_r3 = (s32) (arg2 - 8) >> 3;
    temp_r0 = (s32) (arg1 - 6) >> 3;
    temp_r2 = (s32) (arg2 + 3) >> 3;
    temp_r7 = (s32) (arg1 + 5) >> 3;
    if ((temp_r3 > temp_r2) || (temp_r0 > temp_r7) || (temp_r0_2 = arg0->unk8, (temp_r3 < 0)) || (temp_r0 < 0) || ((u32) temp_r2 >= (u32) arg0->unkA) || ((u32) temp_r7 >= (u32) temp_r0_2) || (temp_r6 = arg0->unk0, (temp_r6 == 0))) {
        goto block_7;
    }
    temp_r4 = arg0->unk4;
    var_r5 = temp_r3;
    if (var_r5 <= temp_r2) {
        var_r4 = var_r5 * temp_r0_2;
loop_10:
        var_r3 = temp_r0;
        if (var_r3 <= temp_r7) {
            var_r2 = (var_r3 + var_r4) * 4;
            var_r1 = var_r3 + (var_r4 + temp_r4);
loop_12:
            if (temp_r4 != 0) {
                var_r0 = temp_r6 + (*var_r1 * 4);
            } else {
                var_r0 = temp_r6 + var_r2;
            }
            if ((s32) (*var_r0 << 0x1E) < 0) {
                var_r2 += 4;
                var_r1 += 1;
                var_r3 += 1;
                if (var_r3 > temp_r7) {
                    goto block_17;
                }
                goto loop_12;
            }
block_7:
            return 0;
        }
block_17:
        var_r4 += temp_r0_2;
        var_r5 += 1;
        if (var_r5 > temp_r2) {
            goto block_18;
        }
        goto loop_10;
    }
block_18:
    return 1;
}

