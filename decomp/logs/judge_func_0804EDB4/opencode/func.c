#include "common.h"
void func_0804EDB4(u32 arg0, s16 *arg1, u16 arg2, s32 arg3, s32 arg4) {
    s16 *var_r5;
    s32 temp_r1;
    u32 temp_r6;
    u32 var_r4;

    var_r4 = arg0;
    var_r5 = arg1;
    temp_r6 = (u32) (arg3 << 0x10) >> 4;
    do {
        temp_r1 = arg2 + ((var_r4 % 10) * 2);
        *var_r5 = temp_r6 | temp_r1;
        *((arg4 * 2) + var_r5) = (temp_r1 + 1) | temp_r6;
        var_r4 = var_r4 / 10U;
        var_r5 -= 2;
    } while (var_r4 != 0);
}

