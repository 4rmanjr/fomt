#include "common.h"
s32 func_08057D34(s32, s32, s32, s32);                /* extern */

void func_08057CB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s32 var_sb;

    sp0 = arg0;
    var_r5 = arg1;
    var_sb = arg3;
    var_r6 = 0x64;
    var_r3 = 0;
    if (arg4 != 0) {
        var_r3 = 0xC;
    }
    var_r0 = 8;
    if (arg4 == 0) {
        var_r0 = 0x10;
    }
    do {
        temp_r0 = var_sb / var_r6;
        func_08057D34(sp0, var_r5, arg2, temp_r0 + var_r3);
        var_r5 += var_r0;
        var_sb -= var_r6 * temp_r0;
        var_r6 = var_r6 / 10;
        if (var_r6 == 1) {
            func_08057D34(sp0, var_r5, arg2 + var_r0, var_r3 + 0xA);
            var_r5 += 8;
        }
    } while (var_r6 > 0);
}

