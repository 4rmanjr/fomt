#include "common.h"
void sub_080D1498(s32 arg1, u32 arg2) {
    s32 var_r1;
    s32 var_r5;
    s32 var_r6;
    u16 *var_r1_2;
    u16 temp_r4;
    u32 var_r2;

    var_r6 = saved_reg_r6;
    var_r1 = arg1;
    var_r2 = arg2;
    var_r5 = var_r1 - saved_reg_r5;
    if (((var_r5 << 0x1F) == 0) || (var_r5 += 1, var_r2 = (u16) *var_r5 >> 8, var_r1 += 1, var_r6 = saved_reg_r6 - 1, (var_r6 != 0))) {
        var_r1_2 = var_r1 - 1;
        do {
            var_r5 += 2;
            temp_r4 = (*var_r5 << 8) | var_r2;
            var_r1_2 += 2;
            *var_r1_2 = temp_r4;
            var_r2 = temp_r4 >> 0x10;
            var_r6 -= 2;
        } while ((s64) var_r6 > 0);
    }
}

