#include "common.h"
void func_0804ED28(u32 arg0, s16 *arg1, u16 arg2, s32 arg3, s32 arg4) {
    s16 *temp_r3;
    s16 *var_r5;
    s32 temp_r2;
    u32 temp_r6;
    u32 var_r4;

    var_r4 = arg0;
    var_r5 = arg1;
    temp_r6 = (u32) (arg3 << 0x10) >> 4;
    do {
        temp_r2 = arg2 + ((var_r4 % 10) * 4);
        *var_r5 = (temp_r2 + 1) | temp_r6;
        *(var_r5 - 2) = temp_r6 | temp_r2;
        temp_r3 = (arg4 * 2) + var_r5;
        *temp_r3 = (temp_r2 + 3) | temp_r6;
        *(temp_r3 - 2) = (temp_r2 + 2) | temp_r6;
        var_r4 = var_r4 / 10U;
        var_r5 -= 4;
    } while (var_r4 != 0);
}

