#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_08035FB0(s32 arg0) {
    s8 spC;
    s32 temp_r0;

    temp_r0 = __builtin_new(0x8C);
    spC = 0;
    func_080324BC(temp_r0, arg0, 4, 0x1B, 1, 2, 0);
}

