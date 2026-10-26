#include "common.h"
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unkE;
    s32 unk10;
} GenObj;
s32 func_0805E894(GenObj *arg0) {
    s16 temp_r3;
    s16 var_r1;
    s32 temp_r0;
    s32 var_r2;
    u16 temp_r0_2;
    u16 temp_r2;
    u16 var_r1_2;
    u16 var_r5;

    temp_r3 = arg0->unk10;
    temp_r2 = arg0->unkE;
    if ((temp_r3 != 0) && (temp_r2 != 0)) {
        var_r1 = temp_r3;
        if ((s32) temp_r3 < 0) {
            var_r1 = 0 - temp_r3;
        }
        var_r2 = temp_r2 - var_r1;
        if (var_r2 <= 0) {
            var_r1_2 = arg0->unkC;
            temp_r0 = arg0->unk4;
            var_r5 = 0;
            if (temp_r0 != 0) {
                var_r5 = (arg0 + 4)->unk4;
            }
loop_8:
            if ((s32) temp_r3 > 0) {
                var_r1_2 += 1;
                if ((u32) var_r1_2 >= (u32) var_r5) {
                    goto block_10;
                }
                goto block_13;
            }
            if (var_r1_2 != 0) {
                var_r1_2 -= 1;
block_13:
                temp_r0_2 = (temp_r0 + (var_r1_2 * 4))->unk2;
                if ((temp_r0_2 == 0) || (var_r2 += temp_r0_2 << 8, (var_r2 > 0))) {
                    goto block_15;
                }
                goto loop_8;
            }
block_10:
            return 1;
        }
        goto block_15;
    }
block_15:
    return 0;
}

