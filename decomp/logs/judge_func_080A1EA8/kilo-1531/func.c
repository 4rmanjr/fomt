#include "common.h"
u32 func_080A1EA8(u32 arg1, s32 arg2) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 <= 0x5FU) {
        if (arg2 != 1) {
            if (arg2 > 1) {
                switch (arg2) {                     /* irregular */
                case 2:
                    return var_r0 - 0x3A;
                case 3:
                    return var_r0 - 0x5E;
                default:
                    return var_r0;
                }
            } else {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return var_r0;
            }
        } else {
            return var_r0 - 0x1A;
        }
    } else {
        var_r0 -= 0x3C;
        return var_r0;
    }
}

