#include "common.h"
u32 func_0804E4AC(s32, s32, s32, s32, s32);         /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    u8 _pad6[2];
    s32 unk8;
    s32 unkC;
    u8 _pad10[4];
    s32 unk14;
    s32 unk16;
    s32 unk18;
    s32 unk1A;
    s32 unk1B;
} GenObj;
s32 func_0804EFAC(GenObj *arg0, s32 arg1) {
    s32 sp4;
    s32 temp_r1;
    s32 var_r0;
    u16 temp_r0;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 var_r0_2;
    u32 var_r0_3;
    void *temp_r7;

    temp_r0 = arg0->unk14;
    var_r0 = arg0->unk16 + arg0->unk18;
    if (var_r0 > 2) {
        var_r0 -= 3;
    }
    temp_r7 = ((var_r0 * 4) + arg0)->unk8 + ((temp_r0 >> 2) * 0x10);
    temp_r2 = temp_r0 & 3;
    if (temp_r2 <= 3U) {
        sp4 = 4;
        sp4.unk2 = 2;
        temp_r0_2 = func_0804E4AC(sp4, temp_r7->unk0 + 4, (temp_r2 & 3) * 8, 0, arg1);
        if ((u32) (temp_r0_2 - 1) <= 1U) {
            temp_r1 = temp_r7->unk8;
            temp_r7->unkC = (s8) ((u32) ((0 - temp_r1) | temp_r1) >> 0x1F);
        }
        var_r0_2 = temp_r0_2;
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 == 0) || (var_r0_2 > 2U)) {
        return 0;
    }
    var_r0_3 = var_r0_2 + temp_r0;
    if (var_r0_3 > 0x1BU) {
        var_r0_3 = var_r0_3 % 28U;
    }
    arg0->unk14 = (u16) var_r0_3;
    if ((arg1 != 0x20) && (arg1 != 0x8140)) {
        arg0->unk1B = 1;
    }
    arg0->unk1A = 1;
    return 1;
}

