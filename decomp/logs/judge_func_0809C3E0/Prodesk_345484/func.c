#include "common.h"
extern ? gUnk_081036C0;

s32 func_0809C3E0(s32 arg0, s32 arg1) {
    s32 var_r5;
    u8 *temp_r4;
    u8 *temp_r6;
    u8 temp_r3;

    var_r5 = 0;
    temp_r6 = arg0 + arg1;
    if (*temp_r6 != 0) {
        temp_r4 = arg0 + 0xC + arg1;
        temp_r3 = *temp_r4;
        if ((u32) temp_r3 < (u32) *(arg1 + &gUnk_081036C0)) {
            *temp_r4 = temp_r3 + 1;
        } else {
            *temp_r6 = 0;
            *(arg0 + 6 + arg1) = 1;
            var_r5 = 1;
        }
    }
    return var_r5;
}

