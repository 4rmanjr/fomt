#include "common.h"
void func_0804EC84(u32 arg0, u8 *arg1, u32 arg2, ? arg3) {
s32 sp0;
    s32 var_r4_2;
    u32 var_r4;
    u32 var_r5;
    u32 var_r6;
    u8 *var_r7;

    var_r7 = arg1;
    var_r4 = 0;
    var_r5 = arg0;
    if ((s32) var_r5 < 0) {
        var_r5 = 0 - var_r5;
    }
    var_r6 = 1;
loop_3:
    *((u8 *)var_r4 + sp) = ((s32) var_r5 % 10) + 0x30;
    var_r4 = var_r6;
    var_r5 = (u32) ((s32) var_r5 / 10);
    if ((s32) var_r5 > 0) {
        var_r6 = var_r4 + 1;
        if (var_r6 <= 0xAU) {
            goto loop_3;
        }
    }
    if (arg2 != 0) {
        if (arg2 < var_r4) {
            var_r4 = arg2;
        } else if (arg2 > var_r4) {
            do {
                *(&sp0 + var_r4) = 0x20;
                var_r4 += 1;
            } while (arg2 > var_r4);
        }
    }
    if ((arg0 >> 0x1F) != 0) {
        *(&sp0 + var_r4) = 0x2D;
        var_r4 += 1;
    }
    var_r4_2 = var_r4 - 1;
    if (var_r4_2 != -1) {
        do {
            *var_r7 = *(&sp0 + var_r4_2);
            var_r7 += 1;
            var_r4_2 -= 1;
        } while (var_r4_2 != -1);
    }
    *var_r7 = 0;
}

