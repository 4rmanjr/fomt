#include "common.h"
s32 func_080A0490();                                /* extern */

u32 func_080A0504(void) {
    s32 temp_r0;

    temp_r0 = func_080A0490();
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}

