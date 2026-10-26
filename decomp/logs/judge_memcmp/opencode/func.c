#include "common.h"
s32 memcmp(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_r2;
    s32 var_r3;
    u32 temp_r0_2;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r1;

    var_r4 = arg2;
    var_r3 = arg0;
    var_r2 = arg1;
    if ((var_r4 > 3U) && !((arg0 | var_r2) & 3)) {
loop_4:
        if (*var_r3 != *var_r2) {

        } else {
            var_r3 += 4;
            var_r2 += 4;
            var_r4 -= 4;
            if (var_r4 > 3U) {
                goto loop_4;
            }
        }
    }
loop_9:
    temp_r0_2 = var_r4;
    var_r4 -= 1;
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = *var_r3;
    temp_r1 = *var_r2;
    if (temp_r0 != temp_r1) {
        return temp_r0 - temp_r1;
    }
    var_r3 += 1;
    var_r2 += 1;
    goto loop_9;
}

