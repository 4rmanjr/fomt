#include "common.h"
s32 func_080200C4(void *, s32);                       /* extern */
u8 func_08039134(void **, u16, s16, s16);           /* extern */
s32 func_0809C060(void *);                          /* extern */
s32 func_0809C068(void *, s32);                       /* extern */
s32 func_0809C0A0(void *, s32 *);                     /* extern */
s32 func_0809C0AC(void *, s32 *);                     /* extern */
s32 func_0809C0BC(void *, s32 *);                     /* extern */
u32 func_080AB788(s32);                             /* extern */

void func_0803955C(void *arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s16 temp_r0_2;
    s16 temp_r2;
    s32 var_r0;
    s32 var_r3;
    u16 temp_r4;
    u16 temp_r7;
    u16 var_r4;
    u8 var_r1;
    u8 var_r6;
    void **temp_r4_2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r4_3;
    void *temp_r6;

    temp_r0 = arg1->unk34;
    temp_r6 = temp_r0 + 0x10;
    temp_r4 = temp_r0->unk10;
    if (temp_r4 != 0) {
        var_r4 = temp_r4 - 1;
        if (var_r4 != 0) {
            goto block_26;
        }
    }
    if (temp_r6->unk2 == 0) {
        var_r4 = 0x24;
        temp_r6->unk2 = 1U;
        func_080200C4(arg1, 0xAB);
block_26:
        temp_r0->unk10 = var_r4;
        return;
    }
    temp_r4_2 = arg1->unk0;
    temp_r7 = arg1->unk4;
    temp_r2 = arg1->unkA;
    temp_r0_2 = arg1->unkE;
    var_r1 = func_08039134(temp_r4_2, temp_r7, temp_r2, temp_r0_2);
    if (var_r1 == 0x64) {
        var_r1 = temp_r6->unk3;
    }
    temp_r0_3 = (*temp_r4_2)->unk40(temp_r4_2, var_r1);
    if ((temp_r0_3 != 0) && (temp_r0_3->unk4 == temp_r7) && ((temp_r0_3->unk14->unk60(temp_r0_3) << 0x18) != 0)) {
        var_r0 = temp_r0_3->unkA - temp_r2;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0xF) {
            var_r3 = temp_r0_3->unkE - temp_r0_2;
            if (var_r3 < 0) {
                var_r3 = 0 - var_r3;
            }
            if (var_r3 <= 0xF) {
                temp_r0_3->unk14->unk80(temp_r0_3);
            }
        }
    }
    func_0809C068(temp_r0, 4);
    temp_r4_3 = arg1->unk34;
    var_r6 = 0x64;
    if (func_0809C060(temp_r4_3) != 0) {
        var_r6 = func_08039134(arg1->unk0, arg1->unk4, arg1->unkA, arg1->unkE);
    } else {
        func_080200C4(arg1, 0xAA);
    }
    if (var_r6 != 0x64) {
        if (func_080AB788(0x64) <= 0x45U) {
            sp0 &= 0xFFFF0000;
            sp4 = (((sp4 & 0xFF00FFFF) | ((u32) ((func_080AB788(8) + 3) << 0x18) >> 8)) & 0xFFFFFF) | (var_r6 << 0x18);
            func_0809C0AC(temp_r4_3, &sp0);
            return;
        }
        sp8 = (((sp8 & 0xFFFF0000) | (u16) (func_080AB788(0x3C) + 0x78)) & 0xFF00FFFF & 0xFFFFFF) | (var_r6 << 0x18);
        func_0809C0BC(temp_r4_3, &sp8);
        return;
    }
    spC = (spC & 0xFFFF0000) | 0xB4;
    func_0809C0A0(temp_r4_3, &spC);
}

