#include "common.h"
s32 *func_080C7B7C(s32 *arg0, u8 arg2, s32 arg3) {
    u32 temp_r3;
    u32 temp_r3_2;
    u8 var_r1;
    u8 var_r3;

    var_r3 = ((arg3 & 0xFFFFFF00) | arg2) & 0xFFFF00FF;
    var_r1 = var_r3;
    if ((u32) var_r3 > 4U) {
        do {
            temp_r3 = (var_r3 & 0xFFFFFF00) | (u8) (var_r1 - 5);
            var_r3 = (temp_r3 & 0xFFFF00FF) | (u16) (((temp_r3 >> 8) + 1) << 8);
            var_r1 = var_r3;
        } while ((u32) var_r3 > 4U);
    }
    temp_r3_2 = (var_r3 & 0xFFFFFF00) | ((u32) ((var_r3 << 0x1C) + 0x50000000) >> 0x18);
    *arg0 = (temp_r3_2 & 0xFFFF00FF) | ((u32) (((temp_r3_2 >> 8) << 0x1C) + 0x28000000) >> 0x10);
    return arg0;
}

