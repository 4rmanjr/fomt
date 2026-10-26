#include "common.h"
void func_080D1518(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 var_r5;
    u16 temp_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r5 = 0;
    do {
        temp_r2 = var_r0->unk2;
        temp_r1 = (temp_r2 >> 4) + var_r5;
        temp_r2_2 = temp_r2 + temp_r1;
        temp_r3 = (temp_r2 >> 0xC) + temp_r2_2;
        temp_r1_2 = temp_r1 & 0xF;
        temp_r2_3 = temp_r2_2 & 0xF;
        var_r5 = ((temp_r2 >> 8) + temp_r3) & 0xF;
        var_r0->unk2 = (u16) ((temp_r1_2 * 0x10) | temp_r2_3 | (temp_r3 << 0xC) | (var_r5 << 8));
        var_r0 += 2;
    } while ((u32) var_r0 < (u32) saved_reg_r8);
}

