#include "common.h"
s32 __3DogPCc(void *, ? *);                           /* extern */
s32 __4FarmPCc(void *, ? *);                          /* extern */
s32 __6FarmerPCcRC8GameDate(void *, ? *, u8 *);       /* extern */
s32 func_080006E4(s32, s32 *, s32, s32);            /* extern */
s32 func_0800FF8C(void *);                            /* extern */
s32 func_080114F8(void *);                            /* extern */
s32 func_08011510(void *);                            /* extern */
s32 func_08011588(s32 *, s32);                      /* extern */
s32 func_0809A8AC(void *);                            /* extern */
s32 func_0809AB8C(void *);                            /* extern */
s32 func_0809BFE8(void *);                            /* extern */
s32 func_0809C144(void *);                            /* extern */
s32 func_0809C4E4(void *);                            /* extern */
s32 func_0809C6BC(void *);                            /* extern */
s32 func_0809CD78(void *);                            /* extern */
s32 func_0809CE8C(void *);                            /* extern */
s32 func_0809EEE8(void *);                            /* extern */
s32 func_080A1A48(void *);                            /* extern */
extern u16 gUnk_03000400;
extern ? gUnk_080F058C;

s32 *func_08011650(s32 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    u8 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r3;
    s8 *var_r0;
    s8 *var_r0_2;
    u8 *var_r2;
    u8 temp_r4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r0_3;

    sp14 = arg1;
    temp_r1 = arg0 + 8;
    arg0->unk8 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = 0;
    temp_r1->unk9 = (u8) (-4 & temp_r1->unk9 & ~0x7C);
    temp_r1->unkA = (u8) (-0x20 & temp_r1->unkA);
    temp_r1->unkA = (s16) (0xFFFFF81F & (u16) temp_r1->unkA);
    __4FarmPCc(arg0 + 0x14, &gUnk_080F058C);
    func_0809AB8C(arg0 + 0x1AA8);
    temp_r4 = -4 & sp0;
    sp0 = temp_r4;
    sp0 = temp_r4 & ~0x7C;
    __6FarmerPCcRC8GameDate(arg0 + 0x1BD8, &gUnk_080F058C, &sp0);
    __3DogPCc(arg0 + 0x1C70, &gUnk_080F058C);
    func_0800FF8C(arg0 + 0x1CA0);
    temp_r1_2 = arg0 + 0x1CCC;
    arg0->unk1CCC = (u16) ((0xFFFFFC00 & arg0->unk1CCC) | 0x234);
    temp_r1_2->unk1 = (u8) (3 & temp_r1_2->unk1);
    temp_r1_2->unk2 = (u16) (0xFFFFFC00 & temp_r1_2->unk2);
    temp_r1_2->unk3 = (u8) (3 & temp_r1_2->unk3);
    temp_r1_2->unk4 = (u16) (0xFFFFFC00 & temp_r1_2->unk4);
    func_0809EEE8(arg0 + 0x1CD4);
    func_0809C6BC(arg0 + 0x214C);
    temp_r2 = arg0 + 0x21CC;
    arg0->unk21CC = 1;
    temp_r2->unk4 = 0;
    arg0->unk21E0 = 0;
    arg0->unk21F0 = 0;
    arg0->unk2200 = 0;
    sp4 = 0;
    var_r0 = arg0 + 0x21D4;
    var_r1 = 8;
    do {
        *var_r0 = 0;
        var_r1 -= 1;
        var_r0 += 1;
    } while (var_r1 > 0);
    sp8 = 0;
    var_r0_2 = temp_r2 + 0x10;
    var_r1_2 = 4;
    do {
        *var_r0_2 = (s8) sp8;
        var_r1_2 -= 1;
        var_r0_2 += 1;
    } while (var_r1_2 > 0);
    func_080114F8(arg0 + 0x2210);
    func_0809A8AC(arg0 + 0x2214);
    temp_r2_2 = arg0 + 0x2C1C;
    arg0->unk2C48 = (u8) (arg0->unk2C48 | 3);
    temp_r2_2->unk2C = (s32) (temp_r2_2->unk2C & 0xFFF80003);
    arg0->unk2C4A = (u8) (-9 & arg0->unk2C4A & ~0x10 & ~0x20 & ~0x40 & 0x7F);
    var_r0_3 = arg0 + 0x2C4C;
    var_r1_3 = 9;
    do {
        var_r0_3->unk0 = 0;
        var_r0_3->unk2 = 0;
        var_r0_3 += 4;
        var_r1_3 -= 1;
    } while (var_r1_3 != -1);
    func_08011510(arg0 + 0x2C74);
    func_0809CD78(arg0 + 0x2C80);
    func_0809CE8C(arg0 + 0x2E58);
    func_0809C144(arg0 + 0x3480);
    var_r2 = arg0 + 0x3494;
    var_r3 = 2;
    do {
        *var_r2 &= -0x10;
        var_r2 += 0x10;
        var_r3 -= 1;
    } while (var_r3 != -1);
    func_080A1A48(arg0 + 0x34C8);
    func_0809C4E4(arg0 + 0x34D8);
    func_0809BFE8(arg0 + 0x34DC);
    *arg3 = 0;
    spC = 0;
    if (((func_080006E4(sp14, &spC, arg2, 4) << 0x18) != 0) && (spC == 0x34F4)) {
        if ((func_080006E4(sp14, arg0, arg2 + 4, spC) << 0x18) == 0) {
            var_r1_4 = 0x20000;
            goto block_16;
        }
        sp10 = 0;
        if ((func_080006E4(sp14, &sp10, arg2 + 0x34F8, 4) << 0x18) == 0) {
            var_r1_4 = 0x30000;
            goto block_16;
        }
        if (func_08011588(arg0, spC) != sp10) {
            goto block_15;
        }
    } else {
block_15:
        var_r1_4 = 0x10000;
block_16:
        *arg3 = *arg3 | var_r1_4 | gUnk_03000400;
    }
    return arg0;
}

