#include "common.h"
void func_0809A970(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r3;
    u16 *var_r1;
    u16 *var_r2;
    void *temp_r0;

    temp_r0 = arg0 + (arg2 * 0x14);
    arg1->unk0 = (u16) temp_r0->unk0;
    arg1->unk12 = (u16) ((0xFFFFF000 & arg1->unk12) | ((u32) (temp_r0->unk12 << 0x14) >> 0x14));
    arg1->unk13 = (u8) ((-0x11 & arg1->unk13) | (0x10 & temp_r0->unk13));
    var_r2 = temp_r0 + 2;
    var_r1 = arg1 + 2;
    var_r3 = 7;
    do {
        *var_r1 = *var_r2;
        var_r2 += 2;
        var_r1 += 2;
        var_r3 -= 1;
    } while (var_r3 >= 0);
}

