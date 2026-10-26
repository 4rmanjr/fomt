#include "common.h"
s32 GetId__C4Tool();                                /* extern */

s32 func_080CE1C4(s8 arg1) {
    s8 sp0;
    u32 temp_r0;

    sp0 = arg1;
    temp_r0 = GetId__C4Tool() - 5;
    switch (temp_r0) {
    case 0:
    case 8:
    case 16:
    case 24:
    case 32:
    case 40:
        return 1;
    default:
        return 0;
    }
}

