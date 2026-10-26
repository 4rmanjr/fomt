#include "common.h"
s32 func_080CE184(s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg1 <= 8) {
        var_r0 = (arg2 * 8) - 1;
    } else {
        var_r0 = (arg2 * 8) - 0xA;
    }
    return arg1 + var_r0;
}

