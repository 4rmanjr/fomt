#include "common.h"
u32 func_080AD5D8(s32 arg0, u32 arg1) {
    u32 var_r2;
    u8 *var_r1;

    switch (arg1) {
    case 0:
        return 0U;
    case 1:
    case 2:
    case 4:
        return 1U;
    case 3:
    case 5:
        return 2U;
    case 14:
        return 3U;
    case 15:
    case 16:
    case 17:
    case 18:
        return 4U;
    case 6:
    case 7:
    case 8:
    case 26:
        return 5U;
    default:
        var_r2 = 6;
        var_r1 = arg0 + 0x555;
loop_10:
        if (*var_r1 != 0) {
            var_r1 += 0x84;
            var_r2 += 1;
            if (var_r2 >= 0x16U) {
                return 0x15U;
            }
            goto loop_10;
        }
        *var_r1 = 1;
        return var_r2;
    }
}

