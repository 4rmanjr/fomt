#include "common.h"
s32 func_03000C2C(void *, s16 *, void *, s32);        /* extern */
s32 func_0800E324(void *);                          /* extern */
s32 func_0801A8C0();                                /* extern */
u8 func_080A4650(u32, u32, s32, s32);               /* extern */
s32 func_080A5D14(s32 *);                             /* extern */
s32 func_080A5DFC(s32 *, u8, s32);                    /* extern */
s32 memcpy(void *, void *, s32);                      /* extern */

void func_0801A13C(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
    s16 sp0;
    u8 sp20;
    s32 sp24;
    u8 sp28;
    s32 sp2C;
    u8 sp30;
    s32 sp34;
    u8 sp38;
    s32 sp3C;
    u8 sp40;
    s32 sp44;
    u8 sp48;
    s32 sp4C;
    u8 sp50;
    s32 sp54;
    u8 sp58;
    s32 sp5C;
    u8 sp60;
    s32 sp64;
    u8 sp68;
    s32 sp6C;
    u8 sp70;
    s32 sp74;
    u8 sp78;
    s32 sp7C;
    u8 sp80;
    s32 sp84;
    u8 sp88;
    s32 sp8C;
    void *sp90;
    void *sp94;
    s32 sp98;
    u32 sp9C;
    s32 spA0;
    s32 spA4;
    u32 spA8;
    u32 spAC;
    s32 *spB0;
    s32 *spB4;
    s32 *spB8;
    s32 *spBC;
    s8 *spC0;
    s16 *var_r0;
    s16 *var_r0_2;
    s16 *var_r0_3;
    s16 *var_r0_4;
    s16 *var_r0_5;
    s16 *var_r0_6;
    s16 *var_r0_7;
    s16 *var_r0_8;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_4;
    s16 *var_r1_5;
    s16 *var_r1_6;
    s16 *var_r4_2;
    s16 *var_r6_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s8 *var_r8_2;
    u32 var_r1;
    u32 var_r8;
    u32 var_sb;
    u32 var_sb_2;
    u8 *var_r3;
    u8 temp_r1_6;
    u8 temp_r1_7;
    u8 temp_r1_8;
    u8 var_r6;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *var_r4;
    void *var_r5;
    void *var_r7;

    sp90 = arg0;
    var_r6 = arg3;
    temp_r0 = func_0801A8C0();
    if ((arg0->unk1048 == temp_r0) && (spA8 = arg1 << 0x18, spAC = arg2 << 0x18, (var_r6 == 0))) {

    } else {
        arg0->unk1048 = temp_r0;
        func_080A5D14(sp90->unk4);
        temp_r1 = *sp90->unk4;
        if (temp_r1 != 0x2E) {
            if (temp_r1 > 0x2E) {
                if (temp_r1 != 0x2F) {
                    goto block_11;
                }
                var_r1 = 2;
            } else if (temp_r1 >= 0x2C) {
                var_r1 = 0;
            } else {
block_11:
                var_r1 = sp90->unk1038->unk8;
            }
        } else {
            var_r1 = 1;
        }
        sp94 = sp90 + 0x19C;
        sp98 = sp90->unk1048;
        sp9C = var_r1;
        var_r8 = 0;
        spA8 = arg1 << 0x18;
        spAC = arg2 << 0x18;
loop_13:
        temp_r5 = sp94 + 0x20 + (var_r8 * 0x84);
        if (temp_r5->unk83 == 0) {
            temp_r1_2 = temp_r5 + 0x20;
            temp_r0_2 = temp_r5 + 0xC;
            temp_r5->unk20 = (s32) temp_r5->unk0;
            temp_r1_2->unk4 = (s32) temp_r5->unk4;
            temp_r1_2->unk8 = (s32) temp_r5->unk8;
            temp_r1_3 = temp_r1_2 + 0xC;
            temp_r1_2->unkC = (s32) temp_r5->unkC;
            temp_r1_3->unk4 = (s32) temp_r0_2->unk4;
            temp_r1_3->unk8 = (s32) temp_r0_2->unk8;
            temp_r1_3->unkC = (s32) temp_r0_2->unkC;
            (temp_r1_3 + 0xC)->unk4 = (s32) (temp_r0_2 + 0xC)->unk4;
            temp_r1_4 = temp_r5 + 0x40;
            temp_r0_3 = temp_r5 + 0xC;
            temp_r5->unk40 = (s32) temp_r5->unk0;
            temp_r1_4->unk4 = (s32) temp_r5->unk4;
            temp_r1_4->unk8 = (s32) temp_r5->unk8;
            temp_r1_5 = temp_r1_4 + 0xC;
            temp_r1_4->unkC = (s32) temp_r5->unkC;
            temp_r1_5->unk4 = (s32) temp_r0_3->unk4;
            temp_r1_5->unk8 = (s32) temp_r0_3->unk8;
            temp_r1_5->unkC = (s32) temp_r0_3->unkC;
            (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
            temp_r5->unk82 = 1;
            var_sb = var_r8 + 1;
        } else {
            spC0 = temp_r5 + 0x82;
            var_sb = var_r8 + 1;
            switch (sp9C) {                         /* irregular */
            case 0:
            case 3:
            case 4:
                if (sp98 == 1) {
                    temp_r4 = temp_r5 + 0x20;
                    memcpy(temp_r4, temp_r5, 0x20);
                    sp38 = (-0x20 & sp38) | 3;
                    sp38 = (s16) ((0xFFFFFC1F & (u16) sp38) | 0x360);
                    var_r4 = temp_r4 + 0x20;
                    var_r3 = &sp38;
                    temp_r2 = 0x100 | 0x2020;
                    sp3C = temp_r2;
                    var_r0 = &sp0;
                    spC0 = temp_r5 + 0x82;
                    var_sb = var_r8 + 1;
                    if (sp == &sp20) {

                    } else {
                        do {
                            *var_r0 = (s16) temp_r2;
                            var_r0 += 2;
                        } while (var_r0 != &sp20);
                    }
                    goto block_79;
                }
                if (sp98 <= 1) {
                    if (sp98 != 0) {
                        spC0 = temp_r5 + 0x82;
                        var_sb = var_r8 + 1;
                    } else {
                        sp30 = (-0x20 & sp30) | 9;
                        sp30 = (s16) ((0xFFFFFC1F & (u16) sp30) | 0x2A0);
                        temp_r6 = temp_r5 + 0x20;
                        sp34 = 0x1BAA;
                        var_r1_2 = &sp0;
                        spC0 = temp_r5 + 0x82;
                        var_sb = var_r8 + 1;
                        if (sp != &sp20) {
                            do {
                                *var_r1_2 = 0x1BAA;
                                var_r1_2 += 2;
                            } while (var_r1_2 != &sp20);
                        }
                        func_03000C2C(temp_r6, &sp0, temp_r5, (s32) sp30);
                        memcpy(temp_r6 + 0x20, temp_r5, 0x20);
                    }
                } else {
                    if (sp98 == 2) {
                        sp40 = (-0x20 & sp40) | 3;
                        sp40 = (s16) ((0xFFFFFC1F & (u16) sp40) | 0x360);
                        temp_r6_2 = temp_r5 + 0x20;
                        temp_r2_2 = 0x100 | 0x2020;
                        sp44 = temp_r2_2;
                        var_r4_2 = &sp0;
                        spB0 = (s32 *) (&sp0 + 0x4C);
                        spC0 = temp_r5 + 0x82;
                        var_sb = var_r8 + 1;
                        if (sp != &sp20) {
                            do {
                                *var_r4_2 = (s16) temp_r2_2;
                                var_r4_2 += 2;
                            } while (var_r4_2 != &sp20);
                        }
                        func_03000C2C(temp_r6_2, &sp0, temp_r5, (s32) sp40);
                        sp48 = (-0x20 & sp48) | 0xA;
                        sp48 = (s16) ((0xFFFFFC1F & (u16) sp48) | 0x280);
                        var_r4 = temp_r6_2 + 0x20;
                        var_r3 = &sp48;
                        sp4C = 0x2529;
                        var_r0_2 = &sp0;
                        if (sp == &sp20) {

                        } else {
                            do {
                                *var_r0_2 = (s16) *spB0;
                                var_r0_2 += 2;
                            } while (var_r0_2 != &sp20);
                        }
                        goto block_79;
                    }
                    spC0 = temp_r5 + 0x82;
                    var_sb = var_r8 + 1;
                    if (sp98 != 3) {

                    } else {
                        sp20 = (-0x20 & sp20) | 0xA;
                        sp20 = (s16) ((0xFFFFFC1F & (u16) sp20) | 0x280);
                        temp_r0_4 = temp_r5 + 0x20;
                        sp24 = 0x2529;
                        var_r1_3 = &sp0;
                        if (sp != &sp20) {
                            do {
                                *var_r1_3 = 0x2529;
                                var_r1_3 += 2;
                            } while (var_r1_3 != &sp20);
                        }
                        func_03000C2C(temp_r0_4, &sp0, temp_r5, (s32) sp20);
                        sp28 = (-0x20 & sp28) | 9;
                        sp28 = (s16) ((0xFFFFFC1F & (u16) sp28) | 0x2A0);
                        var_r4 = temp_r0_4 + 0x20;
                        var_r3 = &sp28;
                        sp2C = 0x1BAA;
                        var_r0_3 = &sp0;
                        if (sp == &sp20) {

                        } else {
                            do {
                                *var_r0_3 = (s16) sp2C;
                                var_r0_3 += 2;
                            } while (var_r0_3 != &sp20);
                        }
block_79:
                        func_03000C2C(var_r4, &sp0, temp_r5, *var_r3);
                    }
                }
                break;
            case 1:
            case 2:
                if (sp98 == 1) {
                    sp70 = (-0x20 & sp70) | 0xA;
                    sp70 = (s16) ((0xFFFFFC1F & (u16) sp70) | 0x280);
                    temp_r0_5 = temp_r5 + 0x20;
                    sp74 = 0x6A32;
                    var_r1_4 = &sp0;
                    spB8 = (s32 *) (&sp0 + 0x7C);
                    spC0 = temp_r5 + 0x82;
                    var_sb = var_r8 + 1;
                    if (sp != &sp20) {
                        do {
                            *var_r1_4 = 0x6A32;
                            var_r1_4 += 2;
                        } while (var_r1_4 != &sp20);
                    }
                    func_03000C2C(temp_r0_5, &sp0, temp_r5, (s32) sp70);
                    sp78 = (-0x20 & sp78) | 0xA;
                    sp78 = (s16) ((0xFFFFFC1F & (u16) sp78) | 0x280);
                    var_r4 = temp_r0_5 + 0x20;
                    var_r3 = &sp78;
                    sp7C = 0x6A32;
                    var_r0_4 = &sp0;
                    if (sp != &sp20) {
                        do {
                            *var_r0_4 = (s16) *spB8;
                            var_r0_4 += 2;
                        } while (var_r0_4 != &sp20);
                    }
                    goto block_79;
                }
                if (sp98 <= 1) {
                    if (sp98 != 0) {
                        spC0 = temp_r5 + 0x82;
                        var_sb = var_r8 + 1;
                    } else {
                        sp60 = (-0x20 & sp60) | 0xA;
                        sp60 = (s16) ((0xFFFFFC1F & (u16) sp60) | 0x280);
                        temp_r0_6 = temp_r5 + 0x20;
                        sp64 = 0x6A32;
                        var_r1_5 = &sp0;
                        spB4 = (s32 *) (&sp0 + 0x6C);
                        spC0 = temp_r5 + 0x82;
                        var_sb = var_r8 + 1;
                        if (sp != &sp20) {
                            do {
                                *var_r1_5 = 0x6A32;
                                var_r1_5 += 2;
                            } while (var_r1_5 != &sp20);
                        }
                        func_03000C2C(temp_r0_6, &sp0, temp_r5, (s32) sp60);
                        sp68 = (-0x20 & sp68) | 0xA;
                        sp68 = (s16) ((0xFFFFFC1F & (u16) sp68) | 0x280);
                        var_r4 = temp_r0_6 + 0x20;
                        var_r3 = &sp68;
                        sp6C = 0x6A32;
                        var_r0_5 = &sp0;
                        if (sp != &sp20) {
                            do {
                                *var_r0_5 = (s16) *spB4;
                                var_r0_5 += 2;
                            } while (var_r0_5 != &sp20);
                        }
                        goto block_79;
                    }
                } else if (sp98 == 2) {
                    sp80 = (-0x20 & sp80) | 0xA;
                    sp80 = (s16) ((0xFFFFFC1F & (u16) sp80) | 0x280);
                    temp_r6_3 = temp_r5 + 0x20;
                    sp84 = 0x6A32;
                    var_r0_6 = &sp0;
                    spBC = (s32 *) (&sp0 + 0x8C);
                    spC0 = temp_r5 + 0x82;
                    var_sb = var_r8 + 1;
                    if (sp != &sp20) {
                        do {
                            *var_r0_6 = 0x6A32;
                            var_r0_6 += 2;
                        } while (var_r0_6 != &sp20);
                    }
                    func_03000C2C(temp_r6_3, &sp0, temp_r5, (s32) sp80);
                    sp88 = (-0x20 & sp88) | 0xA;
                    sp88 = (s16) ((0xFFFFFC1F & (u16) sp88) | 0x280);
                    *spBC = 0x2529;
                    var_r0_7 = &sp0;
                    if (sp != &sp20) {
                        do {
                            *var_r0_7 = (s16) sp8C;
                            var_r0_7 += 2;
                        } while (var_r0_7 != &sp20);
                    }
                    func_03000C2C(temp_r6_3 + 0x20, &sp0, temp_r5, (s32) sp88);
                } else {
                    spC0 = temp_r5 + 0x82;
                    var_sb = var_r8 + 1;
                    if (sp98 != 3) {

                    } else {
                        sp50 = (-0x20 & sp50) | 0xA;
                        sp50 = (s16) ((0xFFFFFC1F & (u16) sp50) | 0x280);
                        temp_r6_4 = temp_r5 + 0x20;
                        sp54 = 0x2529;
                        var_r1_6 = &sp0;
                        if (sp != &sp20) {
                            do {
                                *var_r1_6 = 0x2529;
                                var_r1_6 += 2;
                            } while (var_r1_6 != &sp20);
                        }
                        func_03000C2C(temp_r6_4, &sp0, temp_r5, (s32) sp50);
                        sp58 = (-0x20 & sp58) | 0xA;
                        sp58 = (s16) ((0xFFFFFC1F & (u16) sp58) | 0x280);
                        var_r4 = temp_r6_4 + 0x20;
                        var_r3 = &sp58;
                        sp5C = 0x6A32;
                        var_r0_8 = &sp0;
                        if (sp == &sp20) {

                        } else {
                            do {
                                *var_r0_8 = (s16) sp5C;
                                var_r0_8 += 2;
                            } while (var_r0_8 != &sp20);
                        }
                        goto block_79;
                    }
                }
                break;
            }
            *spC0 = 1;
        }
        var_r8 = var_sb;
        if (var_r8 < 0x16U) {
            goto loop_13;
        }
        var_r6 = 1;
    }
    temp_r1_6 = func_080A4650(spA8 >> 0x18, spAC >> 0x18, func_0800E324(sp90->unk1038 + 0x10), sp90->unk1048);
    if ((sp90->unk104C != temp_r1_6) || (var_r6 != 0)) {
        sp90->unk104C = temp_r1_6;
        temp_r1_7 = sp90->unk104C;
        func_080A5DFC(sp90->unk4, temp_r1_7, 0x1E - temp_r1_7);
        temp_r1_8 = sp90->unk104C;
        var_sb_2 = 0;
        spA4 = temp_r1_8 & 0x1F;
        var_r8_2 = sp90 + 0x23E;
        var_r7 = sp90 + 0x1FC;
        var_r6_2 = sp90 + 0x1DC;
        var_r5 = sp90 + 0x21C;
        do {
            temp_r4_2 = (spA0 & 0xFFFFFF00) | (u8) ((spA0 & ~0x1F) | spA4);
            spA0 = temp_r4_2;
            temp_r4_3 = (temp_r4_2 & 0xFFFF0000) | (u16) ((temp_r4_2 & 0xFFFFFC1F) | (((0x1E - temp_r1_8) & 0x1F) << 5));
            spA0 = temp_r4_3;
            func_03000C2C(var_r5, var_r6_2, var_r7, temp_r4_3);
            *var_r8_2 = 1;
            var_r8_2 += 0x84;
            var_r7 += 0x84;
            var_r6_2 += 0x84;
            var_r5 += 0x84;
            var_sb_2 += 1;
        } while (var_sb_2 < 0x16U);
    }
}

