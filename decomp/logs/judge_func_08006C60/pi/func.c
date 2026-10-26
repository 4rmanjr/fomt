#include "common.h"
s32 strcpy(s32, s32);                                 /* extern */

u32 func_08006C60(s32 arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r5;
    s32 var_r6;
    u8 *temp_r1;
    u8 temp_r0;

    var_r6 = 0;
    var_r5 = 0;
    temp_r4 = arg0 + 0x4629;
    strcpy(temp_r4, arg0 + 0x461C);
    var_r1 = 0;
    do {
        temp_r0 = *((u8 *)temp_r4 + var_r1);
        if (temp_r0 == 0x5F) {
            var_r5 += 1;
            var_r0 = var_r1 + 1;
        } else {
            if (temp_r0 == 0x20) {
                var_r5 += 1;
            }
            var_r6 = var_r1 + 1;
            var_r0 = var_r6;
        }
        var_r1 = var_r0;
    } while (var_r1 <= 0xB);
    if (var_r5 == 0xC) {
        var_r6 = 0;
    } else {
        var_r2 = 0;
        if (var_r6 > 0) {
            do {
                temp_r1 = arg0 + 0x4629 + var_r2;
                if (*temp_r1 == 0x5F) {
                    *temp_r1 = 0x20;
                }
                var_r2 += 1;
            } while (var_r2 < var_r6);
        }
    }
    *((u8 *)arg0 + 0x4629 + var_r6) = 0;
    return (u32) ((0 - var_r6) | var_r6) >> 0x1F;
}

