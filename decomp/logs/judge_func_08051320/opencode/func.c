#include "common.h"
void func_08051320(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s16 *temp_r2_2;
    s16 *temp_r3;
    s16 temp_r4;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_ip;
    s32 var_r5;
    u16 *temp_r0;
    u16 *var_r0;
    u16 *var_r2;
    u16 *var_r3;

    var_ip = arg3;
    temp_r6 = arg1 & 0x1F;
    if ((u32) (temp_r6 + arg3) > 0x20U) {
        var_ip = 0x20 - temp_r6;
    }
    temp_r7 = arg2 & 0x1F;
    if ((u32) (temp_r7 + arg4) > 0x20U) {
        arg4 = 0x20 - temp_r7;
    }
    temp_r4 = (arg5 & 0x3FF) | ((arg6 << 0xC) & 0xF000);
    temp_r5 = arg0 + (temp_r7 << 6);
    temp_r2 = temp_r6 * 2;
    temp_r3 = temp_r5 + temp_r2;
    *temp_r3 = temp_r4;
    var_r3 = temp_r3 + 2;
    temp_r1 = temp_r6 + var_ip;
    sp8 = temp_r1;
    sp0 = temp_r2;
    do {
        *var_r3 = temp_r4 + 1;
        var_r3 += 2;
    } while (var_r3 != (temp_r5 + ((temp_r1 * 2) - 2)));
    *var_r3 = temp_r4 + 4;
    var_r5 = temp_r5 + 0x40;
    sp4 = temp_r4 + 6;
    do {
        temp_r0 = var_r5 + sp0;
        *temp_r0 = temp_r4 + 2;
        var_r0 = temp_r0 + 2;
        temp_r3_2 = var_r5 + 0x40;
loop_8:
        *var_r0 = temp_r4 + 3;
        var_r0 += 2;
        if (var_r0 != (var_r5 + ((sp8 * 2) - 2))) {
            goto loop_8;
        }
        *var_r0 = temp_r4 + 8;
        var_r5 = temp_r3_2;
    } while (temp_r3_2 != (arg0 + (((temp_r7 + arg4) << 6) - 0x40)));
    temp_r2_2 = temp_r3_2 + sp0;
    *temp_r2_2 = temp_r4 + 5;
    var_r2 = temp_r2_2 + 2;
    do {
        *var_r2 = temp_r4 + 7;
        var_r2 += 2;
    } while (var_r2 != (temp_r3_2 + ((sp8 * 2) - 2)));
    *var_r2 = (u16) sp4;
}

