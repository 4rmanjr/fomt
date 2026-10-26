#include "common.h"
void func_08051D30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 *var_r1;
    s16 *var_r4;
    s16 var_r3;
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r5;

    temp_r3 = arg3 * 2;
    var_r5 = 0;
    var_r3 = temp_r3 + 0x20C1;
    temp_r1 = arg1 * 2;
    var_r4 = temp_r1 + ((arg2 << 6) + 0xF8) + arg0;
    var_r1 = temp_r1 + ((arg2 << 6) + 0xB8) + arg0;
    do {
        *var_r1 = temp_r3 + 0x20C0 + var_r5;
        *var_r4 = var_r3;
        var_r3 += 1;
        var_r4 += 2;
        var_r1 += 2;
        var_r5 += 1;
    } while (var_r5 <= 0);
}

