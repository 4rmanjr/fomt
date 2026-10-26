#include "common.h"
s32 func_080AC070(void *arg0, void *arg1) {
    s32 sp0;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r7;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u16 temp_r0_3;
    u8 *var_r3;

    sp0 = (s32) (arg1->unk0 << 0x10) >> 0x13;
    temp_r0 = (s32) (arg1->unk4 + 7) >> 3;
    temp_r3 = (s32) (arg1->unk2 << 0x10) >> 0x13;
    temp_r0_2 = (s32) (arg1->unk6 + 7) >> 3;
    temp_r7 = arg0->unk0;
    temp_r0_3 = arg0->unk8;
    if ((temp_r7 != 0) && (sp0 >= 0) && ((u32) temp_r0 <= (u32) temp_r0_3) && (temp_r3 >= 0) && (temp_r0_2 <= (s32) arg0->unkA)) {
        temp_r2 = arg0->unk4;
        var_r6 = temp_r3;
        if (var_r6 < temp_r0_2) {
            var_r5 = var_r6 * temp_r0_3;
loop_7:
            var_r2 = sp0;
            if (var_r2 < temp_r0) {
                var_r4 = (var_r2 + var_r5) * 4;
                var_r3 = var_r2 + (var_r5 + temp_r2);
loop_9:
                if (temp_r2 != 0) {
                    var_r0 = temp_r7 + (*var_r3 * 4);
                } else {
                    var_r0 = temp_r7 + var_r4;
                }
                temp_r1 = *var_r0;
                if (((temp_r1 << 0x1F) == 0) && ((s32) (temp_r1 << 0x1E) >= 0)) {
                    var_r4 += 4;
                    var_r3 += 1;
                    var_r2 += 1;
                    if (var_r2 >= temp_r0) {
                        goto block_15;
                    }
                    goto loop_9;
                }
                goto block_17;
            }
block_15:
            var_r5 += temp_r0_3;
            var_r6 += 1;
            if (var_r6 >= temp_r0_2) {
                goto block_16;
            }
            goto loop_7;
        }
block_16:
        return 0;
    }
block_17:
    return 1;
}

