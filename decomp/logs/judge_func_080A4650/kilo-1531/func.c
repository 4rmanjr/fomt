#include "common.h"
extern ? gUnk_08105708;

u8 func_080A4650(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    u16 *var_r3;
    u16 var_r1;
    u8 var_r0;

    var_r3 = *((arg3 * 4) + (arg2 * 0x10) + &gUnk_08105708);
    var_r0 = 0;
    var_r1 = *var_r3;
loop_1:
    if ((var_r1 != 0xFFFF) && ((u32) var_r1 <= (u32) (u16) ((arg0 * 0x3C) + arg1))) {
        var_r0 = var_r3->unk2;
        var_r3 += 4;
        var_r1 = *var_r3;
        goto loop_1;
    }
    return var_r0;
}

