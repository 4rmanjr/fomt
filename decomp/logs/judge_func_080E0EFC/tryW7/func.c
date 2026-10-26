#include "common.h"
void func_080E0EFC(u32 arg0, s32 arg1) {
    u32 var_r5;
    u32 *var_r4;
    u32 var_r1;
    u32 var_r2;
    u32 temp_r0;

    var_r5 = arg0;
    var_r4 = (u32 *) (arg1 + 1);

    var_r2 = 0x19999999U;
    var_r1 = 0xA;
    if (var_r5 >= 0xAU) {
        var_r4 += 1;
loop_2:
        var_r1 *= 0xA;
        if (var_r5 >= var_r1) {
            var_r4 += 1;
            if (var_r1 <= var_r2) {
                goto loop_2;
            }
        }
    }
    *var_r4 = 0;
    do {
        var_r4 -= 1;
        temp_r0 = var_r5 / 10U;
        *var_r4 = (var_r5 - (temp_r0 * 10)) + 0x30;
        var_r5 = temp_r0;
    } while (var_r5 != 0);
}

