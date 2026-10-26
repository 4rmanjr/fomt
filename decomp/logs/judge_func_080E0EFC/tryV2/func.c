#include "common.h"

void func_080E0EFC(u32 arg0, s32 arg1) {
    s8 *var_r4;
    u32 var_r5;
    u32 var_r1;

    var_r4 = arg1 + 1;
    var_r5 = arg0;
    var_r1 = 0xA;
    if (var_r5 >= 0xAU) {
        var_r4 += 1;
        do {
            var_r1 *= 0xA;
            if (var_r5 < var_r1) {
                break;
            }
            var_r4 += 1;
        } while (var_r1 <= 0x19999999U);
    }
    *var_r4 = 0;
    do {
        u32 q;
        var_r4 -= 1;
        q = var_r5 / 10U;
        *var_r4 = (var_r5 - (q * 10)) + 0x30;
        var_r5 = q;
    } while (var_r5 != 0);
}

