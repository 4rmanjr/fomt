u16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_0803BEB0(void *, s32, void *, s32);        /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_0805E8F0(void *);                          /* extern */
extern ? gUnk_080F1A34;

s32 func_0803C028(void *arg0, void *arg1, u8 *arg2, s32 arg3, void *arg4, s32 arg5, s32 arg6) {
    s32 sp0;
    void *sp4;
    s32 spC;
    s32 sp14;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    u8 *sp44;
    s32 sp48;
    s32 sp4C;
    void *sp50;
    u32 sp54;
    void *sp58;
    u32 sp5C;
    u8 *sp60;
    s32 *sp64;
    s32 sp68;
    s32 sp6C;
    u32 sp70;
    s32 temp_r0;
    s32 temp_r1_10;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_9;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r2_8;
    s32 temp_r8;
    s32 temp_r8_3;
    s32 var_r7;
    u16 temp_r0_13;
    u16 temp_r2;
    u16 temp_r3;
    u16 temp_r8_2;
    u16 temp_sb;
    u16 var_r3;
    u16 var_r3_2;
    u16 var_r3_3;
    u32 temp_r4_3;
    u32 temp_r4_5;
    u32 var_r3_4;
    u32 var_r4;
    u32 var_sb;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_6;
    u8 temp_r2_4;
    u8 temp_r2_7;
    u8 temp_r3_2;
    u8 var_r0;
    void **temp_r1;
    void **temp_r1_3;
    void **temp_r1_7;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_8;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r7;
    void *temp_sl;
    void *var_r4_2;
    void *var_r5;
    void *var_r6;

    sp44 = arg2;
    temp_r0 = func_0803BEB0(arg0, arg3, arg4, arg5);
    sp48 = temp_r0;
    if (temp_r0 < 0) {

    } else if (temp_r0 <= 2) {

    } else if (temp_r0 != 3) {

    } else {
        sp4C = 0;
        if (arg0->unkF != 0) {
            temp_r3 = arg1->unk8;
            if ((((u32) (temp_r3 << 0x1A) >> 0x1F) | ((u32) (temp_r3 << 0x1B) >> 0x1F)) != 0) {
                if (0x20 & temp_r3) {
                    temp_r0_2 = arg0->unkC;
                    if (temp_r0_2 == 0) {
                        var_r0 = 6;
                    } else {
                        var_r0 = temp_r0_2 - 1;
                    }
                    goto block_16;
                }
                if (temp_r3 & 0x10) {
                    temp_r0_3 = arg0->unkC;
                    if (temp_r0_3 == 6) {
                        arg0->unkC = (u8) sp4C;
                    } else {
                        var_r0 = temp_r0_3 + 1;
block_16:
                        arg0->unkC = var_r0;
                    }
                }
                if (arg6 != 0) {
                    func_08008B6C(arg6, 0xCB);
                }
                sp4C = *((arg0->unkC * 4) + &gUnk_080F1A34);
                arg0->unkE = 0x14U;
            } else if ((temp_r3 & 1) && (arg6 != 0)) {
                func_08008B6C(arg6, 0xC5);
            }
        }
        if (arg0->unkD != 0) {
            temp_r4 = arg0->unk8;
            temp_r0_4 = temp_r4->unk50;
            temp_r1 = temp_r0_4->unk20;
            (*temp_r1)->unk10(&sp4, temp_r1, *(temp_r0_4->unk24 + (temp_r0_4->unk2C * 4)));
            temp_r0_5 = temp_r4 + 0x30;
            temp_r2 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
            var_r3 = 0;
            if (sp14 != 0) {
                var_r3 = sp14.unk4;
            }
            temp_r1_2 = temp_r4 + 0x38;
            temp_r1_2->unkC = sp14;
            temp_r1_2->unk10 = (s32) ((temp_r2 << 5) + 0x05000200);
            temp_r1_2->unk14 = (s32) var_r3;
            arg4->unk8->unk10(arg4);
            sp4C = *((arg0->unkC * 4) + &gUnk_080F1A34);
            arg0->unkD = 0U;
        }
        temp_r0_6 = arg0->unkE - 1;
        arg0->unkE = temp_r0_6;
        if ((temp_r0_6 << 0x18) == 0) {
            arg0->unkE = 0x28U;
        }
        if ((u32) arg0->unkE <= 0x13U) {
            temp_r0_7 = arg0->unk8;
            temp_r8 = (arg0->unkC * 0x10) + 0x10;
            temp_r4_2 = temp_r0_7->unk50;
            temp_r0_8 = temp_r0_7 + 0x30;
            temp_sb = func_080074C0(temp_r0_8, temp_r0_8->unk4);
            temp_r5 = temp_r4_2 + 0x20;
            temp_r4_3 = (u32) (func_0805E8F0(temp_r5) << 0x1E) >> 0x1F;
            temp_r1_3 = temp_r4_2->unk20;
            (*temp_r1_3)->unk10(&sp4, temp_r1_3, *(temp_r4_2->unk24 + (temp_r5->unkC * 4)));
            if (temp_r4_3 != 0) {
                temp_r2_2 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
                var_r3_2 = 0;
                if (spC != 0) {
                    var_r3_2 = spC.unk4;
                }
                temp_r1_4 = temp_r4_2 + 8;
                temp_r1_4->unkC = spC;
                temp_r1_4->unk10 = (s32) ((temp_r2_2 << 5) + 0x06010000);
                temp_r1_4->unk14 = (s32) var_r3_2;
                arg4->unk8->unk10(arg4);
            }
            sp24 = sp4->unk0;
            sp28 = sp4->unk4;
            temp_r2_3 = (0xFE00FFFF & sp24) | (((((u32) (sp24 << 7) >> 0x17) + temp_r8) & 0x1FF) << 0x10);
            sp24 = temp_r2_3;
            temp_r1_5 = (0xFFFFFF00 & temp_r2_3) | (u8) (sp24.unk0 + 0x96);
            sp24 = temp_r1_5;
            sp24.unk4 = (s32) ((sp24.unk4 & 0xFFFF0FFF) | ((temp_sb & 0xF) << 0xC));
            sp24.unk4 = (s32) ((sp24.unk4 & 0xFFFFFC00) | ((u32) (func_08007D4C(temp_r4_2, temp_r4_2->unk4) << 0x16) >> 0x16));
            temp_r1_6 = temp_r1_5 | 0x1000;
            sp24 = temp_r1_6;
            temp_r2_4 = *sp44;
            if ((u32) temp_r2_4 <= 0x7FU) {
                temp_r0_9 = sp44 + ((temp_r2_4 * 8) + 4);
                temp_r0_9->unk0 = temp_r1_6;
                temp_r0_9->unk4 = (u16) sp24.unk4;
                *sp44 = temp_r2_4 + 1;
            }
        }
        temp_sl = arg0->unk8;
        var_sb = 0;
        sp60 = (u8 *) (&sp0 + 0x2C);
        sp68 = 0 - sp4C;
        sp64 = &sp0 + 0x3C;
        sp6C = 0x10;
loop_37:
        temp_r4_4 = ((var_sb * 4) + temp_sl)->unk54;
        temp_r0_10 = temp_sl + 0x30;
        temp_r8_2 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
        temp_r5_2 = temp_r4_4 + 0x20;
        temp_r4_5 = (u32) (func_0805E8F0(temp_r5_2) << 0x1E) >> 0x1F;
        temp_r1_7 = temp_r4_4->unk20;
        (*temp_r1_7)->unk10(&sp4, temp_r1_7, *(temp_r4_4->unk24 + (temp_r5_2->unkC * 4)));
        if (temp_r4_5 != 0) {
            temp_r2_5 = func_08007D4C(temp_r4_4, temp_r4_4->unk4);
            var_r3_3 = 0;
            if (spC != 0) {
                var_r3_3 = spC.unk4;
            }
            temp_r1_8 = temp_r4_4 + 8;
            temp_r1_8->unkC = spC;
            temp_r1_8->unk10 = (s32) ((temp_r2_5 << 5) + 0x06010000);
            temp_r1_8->unk14 = (s32) var_r3_3;
            arg4->unk8->unk10(arg4);
        }
        sp2C = sp4->unk0;
        sp30 = sp4->unk4;
        temp_r2_6 = (0xFE00FFFF & sp2C) | (((((u32) (sp2C << 7) >> 0x17) + sp6C) & 0x1FF) << 0x10);
        sp2C = temp_r2_6;
        sp2C = (0xFFFFFF00 & temp_r2_6) | (u8) (*sp60 + 0x96);
        sp2C.unk4 = (s32) ((sp2C.unk4 & 0xFFFF0FFF) | ((temp_r8_2 & 0xF) << 0xC));
        sp2C.unk4 = (s32) ((sp2C.unk4 & 0xFFFFFC00) | ((u32) (func_08007D4C(temp_r4_4, temp_r4_4->unk4) << 0x16) >> 0x16));
        temp_r1_9 = sp2C | 0x1000;
        sp2C = temp_r1_9;
        temp_r2_7 = *sp44;
        if ((u32) temp_r2_7 <= 0x7FU) {
            temp_r0_11 = sp44 + ((temp_r2_7 * 8) + 4);
            temp_r0_11->unk0 = temp_r1_9;
            temp_r0_11->unk4 = (u16) sp2C.unk4;
            *sp44 = temp_r2_7 + 1;
        }
        sp6C += 0x10;
        var_sb += 1;
        if (var_sb <= 6U) {
            goto loop_37;
        }
        temp_r7 = arg0->unk8;
        if (sp4C != 0) {
            sp34.unk0 = 0xC;
            sp34.unk2 = 2;
            temp_r6 = temp_r7 + 0x74;
            func_0804E7A0(sp34, temp_r6, 0);
            sp38.unk0 = 0xC;
            sp38.unk2 = 2;
            sp0 = sp4C;
            func_0804E8F0(sp38, temp_r6, 0, 0);
        }
        temp_r0_12 = temp_r7 + 0x30;
        temp_r0_13 = func_080074C0(temp_r0_12, temp_r0_12->unk4);
        sp50 = temp_r7 + 0x70;
        sp54 = (u32) (sp68 | sp4C) >> 0x1F;
        sp3C = 0;
        sp40 = 0;
        sp3C = (((0 & 0x3FFFFFFF) | 0x80000000) & 0xFFFF3FFF) | 0x4000;
        sp64->unk4 = (s32) ((sp64->unk4 & 0xFFFF0FFF) | ((temp_r0_13 & 0xF) << 0xC));
        sp3C = (sp3C & 0xFFFFFF00) | 0x108E;
        var_r4 = 0;
        sp58 = temp_r7 + 0x74;
        do {
            temp_r0_14 = (var_r4 * 8) + sp50 + 0x304;
            temp_r8_3 = func_08007D4C(temp_r0_14, temp_r0_14->unk4);
            sp5C = var_r4 + 1;
            if (sp54 != 0) {
                var_r3_4 = 0;
                temp_r1_10 = var_r4 * 6 * 8;
                var_r4_2 = temp_r1_10 + (sp50 + 0x328);
                var_r7 = (temp_r8_3 << 5) + 0x06010000;
                var_r6 = ((var_r4 * 2) << 6) + sp58;
                var_r5 = temp_r1_10 + (sp50 + 0x31C);
                do {
                    var_r4_2->unk0 = var_r6;
                    var_r4_2->unk4 = var_r7;
                    var_r4_2->unk8 = 0x80;
                    sp70 = var_r3_4;
                    arg4->unk8->unk10(arg4, var_r5);
                    var_r4_2 += 0x18;
                    var_r7 += 0x80;
                    var_r6 += 0x180;
                    var_r5 += 0x18;
                    var_r3_4 += 1;
                } while (var_r3_4 <= 1U);
            }
            sp64->unk4 = (s32) ((sp64->unk4 & 0xFFFFFC00) | ((u32) (temp_r8_3 << 0x16) >> 0x16));
            temp_r2_8 = (sp3C & 0xFE00FFFF) | ((((var_r4 << 5) + 0x88) & 0x1FF) << 0x10);
            sp3C = temp_r2_8;
            temp_r3_2 = *sp44;
            if ((u32) temp_r3_2 <= 0x7FU) {
                temp_r0_15 = sp44 + ((temp_r3_2 * 8) + 4);
                temp_r0_15->unk0 = temp_r2_8;
                temp_r0_15->unk4 = (u16) sp64->unk4;
                *sp44 = temp_r3_2 + 1;
            }
            var_r4 = sp5C;
        } while (var_r4 <= 2U);
    }
    return sp48;
}
