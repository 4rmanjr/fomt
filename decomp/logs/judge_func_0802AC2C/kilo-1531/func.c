#include "common.h"
s32 func_0802AB98(s32 *, void *, u8);                 /* extern */

void func_0802AC2C(void *arg0, s16 arg1, s16 arg2) {
    s32 sp0;
    s32 sp8;
    s32 spC;
s32 sp10;
    void **sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    u32 sp28;
    s32 sp2C;
    u32 sp30;
    u8 sp34;
    s32 (*var_r1)(void *);
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    u32 var_sl;
    void *temp_r4;

    sp18 = arg0->unk0;
    sp1C = (s32) arg0->unk4;
    sp20 = (s32) arg0->unkA;
    sp24 = (s32) arg0->unkE;
    func_0802AB98(&sp0, arg0, arg0->unk20);
    sp8 = sp0;
    spC = sp4;
    sp28 = 0x64;
    sp2C = 0;
    var_sl = 0x2B;
    do {
        sp30 = var_sl;
        temp_r4 = (*sp18)->unk40(sp18, var_sl);
        sp34 = 0;
        if ((temp_r4 != 0) && (temp_r4->unk4 == sp1C)) {
            temp_r4->unk14->unkC(&sp10, temp_r4);
            if ((s32) ((sp8.unk0 - sp10.unk4) & (sp10.unk0 - sp8.unk4) & (sp8.unk2 - sp10.unk6) & (sp10.unk2 - sp8.unk6)) < 0) {
                temp_r2 = arg1 >> 0x10;
                if (temp_r2 != 0) {
                    if (temp_r2 > 0) {
                        var_r1 = *(((temp_r2 * 4) + *(temp_r4 + arg2)) - 4);
                    } else {
                        var_r1 = (s32 (*)(void *)) arg2;
                    }
                    if ((var_r1(temp_r4 + arg1) << 0x18) != 0) {
                        goto block_9;
                    }
                } else {
block_9:
                    sp34 = 1;
                }
            }
        }
        if ((sp34 != 0) && ((temp_r1 = temp_r4->unkA - sp20, temp_r0 = temp_r4->unkE - sp24, temp_r0_2 = (temp_r1 * temp_r1) + (temp_r0 * temp_r0), (sp28 == 0x64)) || (sp2C > temp_r0_2))) {
            sp28 = sp30;
            sp2C = temp_r0_2;
        }
        var_sl += 1;
    } while (var_sl <= 0x45U);
    arg0->unkB2 = (u8) sp28;
}

