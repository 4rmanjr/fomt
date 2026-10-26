#include "common.h"
s32 __builtin_new(s32);                             /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008910(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_08008E64(s32 **, s32, u16);                    /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_0804E5AC(s32, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
void *func_080CAFC4(s32, s32, s32, s32);            /* extern */
s32 func_080CB090(void *);                            /* extern */
s32 func_080CB304(void *, s32, ? *, u16);             /* extern */
s32 func_080CD620();                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern u16 gUnk_08100AC2;
extern ? gUnk_08101020;
extern ? gUnk_08101059;
extern ? gUnk_086678A0;

void func_08098CE8(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    ? **sp14;
    ? **sp1C;
    s32 sp24;
s32 sp2C;
s32 sp50;
    u16 *sp90;
    s16 sp98;
    s16 sp9C;
    void *spA0;
    ? **spA4;
    ? **spA8;
    ? **spAC;
    ? **spB0;
    ? **spB4;
    ? **spB8;
    ? **spBC;
    s32 spC0;
    ? **temp_r0_2;
    ? **temp_r3;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    u16 *var_r5;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    u8 *var_r5_2;
    u8 temp_r4_4;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_5;
    void *temp_r7;

    func_080CD620();
    temp_r1 = arg0->unk78;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    arg0->unk78 = 0;
    temp_r5 = __builtin_new(0x29C);
    temp_r4 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp0 = &gUnk_08101020;
    sp4 = 0;
    temp_r0 = func_080CAFC4(temp_r5, temp_r4, temp_r2, 8);
    temp_r1_2 = arg0->unk78;
    if ((temp_r0 != temp_r1_2) && (temp_r1_2 != 0)) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk78 = temp_r0;
    func_080CB090(arg0->unk78);
    var_r4 = 0;
    spB4 = &sp0 + 0x14;
    spB8 = &sp0 + 0x1C;
    temp_r3 = &sp0 + 0x24;
    spBC = temp_r3;
    temp_r7 = arg0 + 0xF8;
    temp_r0_2 = &sp0 + 0x90;
    spA8 = temp_r0_2;
    spA0 = arg0 + 0xC8;
    spAC = temp_r3 + 0x74;
    spB0 = temp_r0_2 + 0xC;
    spA4 = &sp0 + 0x50;
    var_r5 = &gUnk_08100AC2;
    do {
        if (((s32) arg0->unk330 >> var_r4) & 1) {
            sp0 = (s32 *)1;
            func_080CB304(arg0->unk78, var_r4, &gUnk_086678A0, *var_r5);
        }
        var_r5 += 2;
        var_r4 += 1;
    } while (var_r4 <= 7);
    temp_r1_3 = arg0->unk7C;
    if ((temp_r1_3 != 0) && (temp_r1_3 != 0)) {
        temp_r1_3->unk210->unk8(temp_r1_3, 3);
    }
    arg0->unk7C = 0;
    spC = 0;
    spC.unk4 = 0;
    sp14 = 0;
    spB4->unk4 = 0U;
    sp1C = 0;
    spB8->unk4 = 0U;
    sp24 = 0;
    spBC->unk4 = 0;
    temp_r4_2 = arg0->unkF8;
    temp_r4_2->unkC(spA8, temp_r7, 1);
    temp_r4_2->unk10(&sp2C, temp_r7, *sp90);
    memcpy(&sp2C, &sp2C, 0x20);
    temp_r4_3 = &sp2C + 0xC;
    spC.unk0 = sp2C.unk0;
    spC.unk4 = (s32) sp2C.unk4;
    spC.unk8 = (s32) sp2C.unk8;
    temp_r0_3 = &spC + 0xC;
    spC.unkC = (s32) sp2C.unkC;
    temp_r0_3->unk4 = (s32) temp_r4_3->unk4;
    temp_r0_3->unk8 = (s32) temp_r4_3->unk8;
    temp_r0_3->unkC = (s32) temp_r4_3->unkC;
    (temp_r0_3 + 0xC)->unk4 = (s32) (temp_r4_3 + 0xC)->unk4;
    temp_r0_4 = arg0 + 0x320;
    temp_r1_4 = (func_080074C0(temp_r0_4, temp_r0_4->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp1C != 0) {
        var_r2 = spB8->unk4;
    }
    func_08008E64(sp1C, temp_r1_4, var_r2);
    func_0805E790(&sp2C, spA0, 0);
    temp_r0_5 = &sp2C + 0xC;
    spC.unk0 = sp2C.unk0;
    spC.unk4 = (s32) sp2C.unk4;
    spC.unk8 = (s32) sp2C.unk8;
    temp_r1_5 = &spC + 0xC;
    spC.unkC = (s32) sp2C.unkC;
    temp_r1_5->unk4 = (s32) temp_r0_5->unk4;
    temp_r1_5->unk8 = (s32) temp_r0_5->unk8;
    temp_r1_5->unkC = (s32) temp_r0_5->unkC;
    (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_5 + 0xC)->unk4;
    temp_r0_6 = arg0 + 0x2F8;
    temp_r1_6 = (func_080074C0(temp_r0_6, temp_r0_6->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (sp1C != 0) {
        var_r2_2 = spB8->unk4;
    }
    func_08008E64(sp1C, temp_r1_6, var_r2_2);
    temp_r0_7 = arg0 + 0x2F0;
    temp_r1_7 = (func_08007D4C(temp_r0_7, temp_r0_7->unk4) << 5) + 0x06010000;
    var_r2_3 = 0;
    if (sp14 != 0) {
        var_r2_3 = spB4->unk4;
    }
    func_08008E64(sp14, temp_r1_7, var_r2_3);
    func_08008EB8(0, (func_08007D4C(arg0 + 0x300, arg0->unk304) << 5) + 0x06010000, 0x700);
    var_r7 = 0;
    do {
        var_r6 = 0;
        spC0 = var_r7 + 1;
        var_r5_2 = (0xB * (var_r7 + 8)) + &gUnk_08101059;
loop_21:
        temp_r4_4 = *var_r5_2;
        sp98 = 1;
        spAC->unk2 = 2;
        func_0804E7A0((s32) sp98, &sp50, 0);
        sp9C = 1;
        spB0->unk2 = 2;
        sp0 = (s32 *) temp_r4_4;
        sp4 = 0;
        sp8 = 1;
        func_0804E5AC((s32) sp9C, &sp50, 0, 0);
        func_08008E64(spA4, ((func_08007D4C(arg0 + 0x300, arg0->unk304) + (var_r7 * 0x14) + (var_r6 * 2)) << 5) + 0x06010000, 0x40U);
        var_r5_2 += 1;
        var_r6 += 1;
        if (var_r6 <= 9) {
            goto loop_21;
        }
        var_r7 = spC0;
    } while (var_r7 <= 4);
    temp_r4_5 = arg0 + 0x308;
    *(0x05000200 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0x4218;
}

