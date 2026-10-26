#include "common.h"
s32 func_080A01F8(s32 arg0, s32 arg1) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = arg1 - 3;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x98;
    case 9:
        var_r1 = 0x154;
block_9:
        return arg0 + var_r1;
    case 16:
        var_r1 = 0x1E4;
        goto block_9;
    case 18:
        var_r1 = 0x210;
        goto block_9;
    case 22:
        var_r1 = 0x264;
        goto block_9;
    case 28:
        var_r1 = 0x2E4;
        goto block_9;
    }
}

