#include "common.h"
s32 func_0804E7A0(s32, s32, s32);                     /* extern */

void func_0804F060(void *arg0, ? arg3) {
    s32 sp0;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r7;
    u16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;
    void *var_r4;

    temp_r0 = arg0->unk16;
    if ((u32) temp_r0 <= 1U) {
        arg0->unk16 = (u16) (temp_r0 + 1);
        return;
    }
    temp_r0_2 = arg0->unk18 + 1;
    arg0->unk18 = temp_r0_2;
    if ((u32) temp_r0_2 > 2U) {
        arg0->unk18 = 0U;
    }
    temp_r1 = arg0->unk18;
    var_r0 = temp_r1 + 2;
    if (var_r0 > 2) {
        var_r0 = temp_r1 - 1;
    }
    var_r4 = ((var_r0 * 4) + arg0)->unk8;
    var_r7 = 6;
    do {
        sp0.unk0 = 4;
        sp0.unk2 = 2;
        func_0804E7A0(sp0, var_r4->unk0 + 4, 0);
        temp_r1_2 = var_r4->unk8;
        var_r4->unkC = (s8) ((u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F);
        var_r4 += 0x10;
        var_r7 -= 1;
    } while (var_r7 >= 0);
    arg0->unk19 = 1;
    arg0->unk1A = 1;
}

