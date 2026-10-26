#include "common.h"
s32 rand();                                         /* extern */
extern ? gUnk_080FA174;

void func_08052230(u8 *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    u8 *sp8;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r0;
    u8 *temp_r5;
    u8 *var_r1;

    if (arg1 != 0) {
        var_r0 = (u32) (arg1 - 1) / 25U;
    } else {
        var_r0 = 0;
    }
    var_r4 = 0;
    sp0 = var_r0 * 4;
    do {
        temp_r6 = var_r4 * 4;
        sp4 = var_r4 + 1;
        temp_r5 = arg0 + temp_r6;
        sp8 = temp_r5;
loop_5:
        *temp_r5 = ((s32) (rand() >> 8) % 30) + 1;
        var_r3 = 1;
        var_r2 = 0;
        var_r1 = arg0;
loop_6:
        if ((var_r4 != var_r2) && (*sp8 == *var_r1)) {
            var_r3 = 0;
        }
        var_r1 += 4;
        var_r2 += 1;
        if (var_r2 <= 9) {
            goto loop_6;
        }
        if (var_r3 == 0) {
            goto loop_5;
        }
        (arg0 + temp_r6)->unk2 = (s16) (*(((sp0 + var_r0) * 4) + (var_r4 * 2) + &gUnk_080FA174) + ((s32) (rand() >> 8) % 10));
        var_r4 = sp4;
    } while (var_r4 <= 9);
}

