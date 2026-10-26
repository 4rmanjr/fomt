#include "common.h"
s32 func_080BC254(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 var_r3;
    u8 *var_r2;

    var_r3 = 0;
    temp_r4 = arg1 * 2;
    if (temp_r4 > 0) {
        var_r2 = (arg2 * 2) + arg3;
        do {
            *(arg0 + 0xB35 + var_r3) = *var_r2;
            var_r2 += 1;
            var_r3 += 1;
        } while (var_r3 < temp_r4);
    }
    return arg0 + 0xB35;
}

