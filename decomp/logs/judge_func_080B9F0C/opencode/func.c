#include "common.h"
s32 rand();                                         /* extern */

void func_080B9F0C(s32 arg0, s32 arg1) {
    u32 temp_r5;

    temp_r5 = (u32) (arg1 << 0x18) >> 0x12;
    *(arg0 + 0x6C + temp_r5) = 2;
    *(arg0 + 0x74 + temp_r5) = (u32) (0xFFFF & rand()) >> 0xE;
}

