#include "common.h"
s32 func_0805E860(s32, s32);                          /* extern */
s32 rand();                                         /* extern */

void func_080B9734(void *arg0) {
    s32 *var_r1;
    s32 *var_r4;
    s32 var_r0;
    s32 var_r2;
    s8 *var_r1_2;
    u32 temp_r2;

    temp_r2 = (u32) (0x64 * (0xFFFF & rand())) >> 0x10;
    if ((u32) arg0->unk8E > (u32) arg0->unkCE) {
        if (temp_r2 <= 0x59U) {
            var_r4 = arg0 + 0x80;
            arg0->unk80 = 3;
            func_0805E860(arg0->unk920, 2);
            arg0->unkEB = 1;
            var_r1 = (arg0 + 0xEB) - 0x2B;
            var_r0 = 5;
        } else {
            goto block_5;
        }
    } else if (temp_r2 > 0x59U) {
        var_r4 = arg0 + 0x80;
        arg0->unk80 = 3;
        func_0805E860(arg0->unk920, 2);
        arg0->unkEB = 1;
        var_r1 = (arg0 + 0xEB) - 0x2B;
        var_r0 = 5;
    } else {
block_5:
        var_r4 = arg0 + 0x80;
        arg0->unk80 = 5;
        func_0805E860(arg0->unk91C, 2);
        arg0->unkAB = 1;
        var_r1 = arg0 + 0xAB + 0x15;
        var_r0 = 3;
    }
    *var_r1 = var_r0;
    var_r1_2 = arg0 + 0x9B;
    var_r2 = 1;
    do {
        if (*var_r4 == 5) {
            *var_r1_2 = 0;
        } else {
            *var_r1_2 = 1;
        }
        var_r1_2 += 0x40;
        var_r4 += 0x40;
        var_r2 -= 1;
    } while (var_r2 >= 0);
}

