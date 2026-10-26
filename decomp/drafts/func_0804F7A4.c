? .L08050382();                                     /* extern */
u16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008B88(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_08008F0C(s32 **, void *, s32, u16);            /* extern */
s32 func_080507D0(s32, s32);                        /* extern */
s32 func_08050868(s32, s32, u16);                   /* extern */
s32 func_0805E850(void *, void *, s32);               /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, ? *, u16, ? **);              /* extern */
s32 func_080ADD08(s32 **, void *);                      /* extern */
s32 func_080ADD78(void *, void *, ? **);            /* extern */
u32 sub_08050342();                                 /* extern */
extern ? vtable_unk_080E78A8;

void func_0804F7A4(void *arg0, void *arg1, u8 *arg2, void *arg3, void *arg4, void *arg5, s32 arg6) {
    ? *sp0;
    s32 sp4;
    ? *spC;
    void *sp14;
    void *sp1C;
    ? *sp2C;
    ? *sp3C;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    u8 *sp78;
    void *sp7C;
    void *sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    ? **sp90;
    s16 *sp94;
    s16 *sp98;
    s16 *sp9C;
    s16 *spA0;
    u16 *spA4;
    u16 *spA8;
    ? **spAC;
    void *spB0;
    s32 spB4;
    s16 temp_r2;
    s32 temp_r0_36;
    s32 temp_r0_38;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r1;
    s32 temp_r1_10;
    s32 temp_r1_11;
    s32 temp_r1_12;
    s32 temp_r1_15;
    s32 temp_r1_4;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_7;
    s32 temp_r2_9;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r8;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r2;
    s32 var_r8;
    s32 var_sb;
    u16 *temp_r3_3;
    u16 temp_r0_14;
    u16 temp_r0_16;
    u16 temp_r1_5;
    u16 temp_r1_6;
    u16 temp_r2_11;
    u16 temp_r2_12;
    u16 temp_r2_6;
    u16 temp_r3;
    u16 temp_r6;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r3;
    u16 var_r3_2;
    u16 var_r3_3;
    u16 var_r3_4;
    u16 var_r3_5;
    u16 var_r5_2;
    u16 var_r5_3;
    u16 var_r5_4;
    u16 var_r5_5;
    u32 temp_r0;
    u32 temp_r0_12;
    u32 temp_r0_13;
    u32 temp_r0_19;
    u32 temp_r0_22;
    u32 temp_r0_27;
    u32 temp_r0_30;
    u32 temp_r0_34;
    u32 temp_r0_7;
    u32 temp_r5_2;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r5_7;
    u32 var_sb_2;
    u8 temp_r0_2;
    u8 temp_r0_4;
    u8 temp_r2_10;
    u8 temp_r2_4;
    u8 temp_r2_5;
    u8 temp_r2_8;
    u8 temp_r3_4;
    u8 temp_r6_2;
    u8 var_sl;
    void **temp_r1_13;
    void **temp_r1_2;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_32;
    void *temp_r0_33;
    void *temp_r0_35;
    void *temp_r0_37;
    void *temp_r0_8;
    void *temp_r1_14;
    void *temp_r1_3;
    void *temp_r1_8;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r6_3;
    void *var_r5;
    void *var_r5_6;
    void *var_r6;

    sp78 = arg2;
    sp7C = arg3;
    temp_r3 = arg1->unk4;
    temp_r6 = arg1->unk8;
    sp0 = &vtable_unk_080E78A8;
    sp4 = (s32) temp_r3;
    sp0.unk8 = (u8) arg0->unkD;
    temp_r0 = arg0->unk8;
    switch (temp_r0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_r0_2 = arg0->unkC;
        if ((u32) temp_r0_2 > 8U) {
            temp_r0_3 = arg0->unkEC;
            switch (temp_r0_3) {                    /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                arg0->unk8 = 3U;
                break;
            case 1:                                 /* switch 2 */
                arg0->unk8 = 4U;
                break;
            case 2:                                 /* switch 2 */
                arg0->unk8 = 5U;
                break;
            }
        } else {
            arg0->unkC = (u8) (temp_r0_2 + 1);
            temp_r1 = arg0->unk148;
            if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {

            } else if (!(((u32) (arg0->unk550 << 0x1A) >> 0x1A) & 1)) {

            } else if (arg6 == 0) {

            } else if ((func_08008CD0(arg6) << 0x18) != 0) {

            } else {
                func_08008B6C(arg6, 0xC8);
            }
        }
        break;
    case 2:                                         /* switch 1 */
        temp_r0_4 = arg0->unkC;
        if (temp_r0_4 == 0) {
            arg0->unk8 = (u32) temp_r0_4;
        } else {
            arg0->unkC = (u8) (temp_r0_4 - 1);
        }
        break;
    case 4:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
        temp_r0_5 = func_080ADD78(arg0 + 0xEC, arg0 + 0xD0, &sp0);
        switch (temp_r0_5) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            var_r0 = 3;
block_35:
            arg0->unk8 = var_r0;
            break;
        case 1:                                     /* switch 3 */
            var_r0 = 4;
            goto block_35;
        case 2:                                     /* switch 3 */
            if (arg0->unk8 != 5) {
                func_0805E850(arg0 + 0x1C0, arg0 + 0x190, 0);
                var_r0 = 5;
                goto block_35;
            }
            break;
        }
        if (arg0->unkEB != 0) {
            if ((((u32) (arg0->unk550 << 0x1A) >> 0x1A) & 4) && (arg6 != 0)) {
                func_08008B88(arg6, 0xC9);
            }
            arg0->unkEB = 0U;
        }
        break;
    case 6:                                         /* switch 1 */
        if ((arg0 + 0xD0)->unk1A == 0) {
            if (temp_r3 & 1) {
                arg0->unk8 = 3U;
                if ((((u32) (arg0->unk550 << 0x1A) >> 0x1A) & 0x20) && (arg6 != 0)) {
                    func_08008B6C(arg6, 0xC5);
                }
            } else if ((((u32) (temp_r6 << 0x18) >> 0x1F) ^ ((u32) (temp_r6 << 0x19) >> 0x1F)) != (((u32) (temp_r6 << 0x1A) >> 0x1F) ^ ((u32) (temp_r6 << 0x1B) >> 0x1F))) {
                temp_r5 = arg0->unk158;
                temp_r0_6 = func_08050868(arg0->unk15C, temp_r5, temp_r6);
                arg0->unk158 = temp_r0_6;
                if ((temp_r0_6 != temp_r5) && (((u32) (arg0->unk550 << 0x1A) >> 0x1A) & 0x10) && (arg6 != 0)) {
                    func_08008B6C(arg6, 0xCB);
                }
            }
        }
        break;
    }
    temp_r3_2 = arg0 + 0x20;
    var_r2 = 0;
    if (temp_r3_2->unkC == (arg0 + 0x30)) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        arg4->unk8->unk1C(arg4, temp_r3_2);
    }
    var_r0_2 = arg0->unk8;
    if (var_r0_2 == 0) {
        var_r0_2 = sub_08050342();
    }
    if (var_r0_2 != 6) {
        sp90 = &sp0 + 0xC;
        if (var_r0_2 != 5) {

        } else if (arg0->unkD == 0) {

        } else {
            goto block_62;
        }
    } else {
block_62:
        temp_r4 = arg0 + 0x1C0;
        temp_r8 = func_0805E8F0(temp_r4);
        temp_r1_2 = arg0->unk1C0;
        (*temp_r1_2)->unk10(&spC, temp_r1_2, *(arg0->unk1C4 + (temp_r4->unkC * 4)));
        sp90 = &spC;
        temp_r1_3 = arg0 + 0x18;
        if ((s32) (temp_r8 << 0x1E) < 0) {
            temp_r2 = func_08007D4C(temp_r1_3, temp_r1_3->unk4);
            var_r3 = 0;
            if (sp14 != 0) {
                var_r3 = sp14.unk4;
            }
            func_08008F0C(&sp2C, sp14, (temp_r2 << 5) + 0x06010000, var_r3);
            temp_r0_7 = arg0->unk3C;
            if (temp_r0_7 <= 7U) {
                temp_r0_8 = arg0 + 0x3C + ((temp_r0_7 * 0x10) + 4);
                if (temp_r0_8 != 0) {
                    temp_r0_8->unk0 = (s32 *) sp2C.unk0;
                    temp_r0_8->unk4 = (s32) sp2C.unk4;
                    temp_r0_8->unk8 = (s32) sp2C.unk8;
                    temp_r0_8->unkC = (s32) sp2C.unkC;
                }
                arg0->unk3C = (u32) (arg0->unk3C + 1);
            }
        }
        sp58 = spC->unk0;
        sp5C = spC->unk4;
        if (arg0->unk8 == 6) {
            temp_r0_9 = func_080507D0(arg0->unk15C, arg0->unk158);
            temp_r2_2 = (sp58 & 0xFFFFFF00) | (u8) (sp58 + 0x73 + (((u32) (temp_r0_9 << 0x1E) >> 0x1E) * 0x11));
            sp58 = (0xFE00FFFF & temp_r2_2) | (((((u32) (temp_r2_2 << 7) >> 0x17) + 8 + (((u32) (temp_r0_9 << 0x19) >> 0x1B) * 8)) & 0x1FF) << 0x10);
        } else {
            temp_r2_3 = (0xFE00FFFF & sp58) | (((((u32) (sp58 << 7) >> 0x17) + 0xEC) & 0x1FF) << 0x10);
            sp58 = temp_r2_3;
            sp58 = (0xFFFFFF00 & temp_r2_3) | (u8) (sp58 + 0xA0);
            if (((temp_r8 << 0x1F) == 0) && ((s32) (temp_r8 << 0x1E) < 0) && (((u32) (arg0->unk550 << 0x1A) >> 0x1A) & 8) && (arg6 != 0)) {
                func_08008B6C(arg6, 0xCA);
            }
        }
        temp_r0_10 = arg0 + 0x10;
        sp58.unk4 = (s32) ((sp58.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_10, temp_r0_10->unk4) & 0xF) << 0xC));
        sp58.unk4 = (s32) ((sp58.unk4 & 0xFFFFFC00) | ((u32) (func_08007D4C(temp_r1_3, temp_r1_3->unk4) << 0x16) >> 0x16));
        temp_r1_4 = sp58 | 0x1000;
        sp58 = temp_r1_4;
        temp_r2_4 = *sp78;
        if ((u32) temp_r2_4 <= 0x7FU) {
            temp_r0_11 = sp78 + ((temp_r2_4 * 8) + 4);
            temp_r0_11->unk0 = temp_r1_4;
            temp_r0_11->unk4 = (u16) sp58.unk4;
            *sp78 = temp_r2_4 + 1;
        }
    }
    temp_r2_5 = arg0->unk0;
    temp_r5_2 = (u32) (temp_r2_5 << 0x1E) >> 0x1E;
    sp7C->unk0 = (u16) ((0x100 << temp_r5_2) | 0x6000 | sp7C->unk0);
    temp_r4_2 = temp_r5_2 * 4;
    temp_r3_3 = sp7C + ((temp_r5_2 * 2) + 8);
    temp_r1_5 = (*temp_r3_3 & 0x73) | ((((u32) (temp_r2_5 << 0x19) >> 0x1B) << 8) | (((u32) ((u16) arg0->unk0 << 0x17) >> 0x1E) * 4));
    sp90->unk0 = temp_r1_5;
    *temp_r3_3 = temp_r1_5;
    sp90->unk0 = 0U;
    *(sp7C + (temp_r4_2 + 0x10)) = 0;
    sp90->unk0 = 0xFFB0U;
    *(sp7C + (temp_r4_2 + 0x12)) = 0xFFB0;
    sp90->unk0 = 0x3FU;
    sp7C->unk48 = 0x3F;
    temp_r1_6 = 0x3F & ~(1 << temp_r5_2);
    sp90->unk0 = temp_r1_6;
    sp7C->unk4A = temp_r1_6;
    temp_r6_2 = arg0->unkC;
    spA4 = sp7C + 0x48;
    spA8 = sp7C + 0x4A;
    if ((u32) temp_r6_2 <= 8U) {
        temp_r0_12 = temp_r6_2 * 0x38;
        temp_r4_3 = 0x84 - (temp_r0_12 / 18);
        temp_r0_13 = temp_r6_2 * 0xF0;
        temp_r1_7 = 0x78 - (temp_r0_13 / 18);
        temp_r2_6 = (temp_r1_7 << 8) | (temp_r1_7 + (temp_r0_13 / 9U));
        sp90->unk0 = temp_r2_6;
        sp7C->unk40 = temp_r2_6;
        temp_r0_14 = (temp_r4_3 << 8) | (temp_r4_3 + (temp_r0_12 / 9U));
        sp90->unk0 = temp_r0_14;
        sp7C->unk44 = temp_r0_14;
        sp90->unk0 = 0xF0F0U;
        sp7C->unk42 = 0xF0F0;
        sp90->unk0 = 0xA0A0U;
        sp7C->unk46 = 0xA0A0;
        spB0 = arg0 + 0xC0;
    } else {
        temp_r1_8 = arg0 + 0xD0;
        sp80 = temp_r1_8;
        temp_r0_15 = temp_r1_8->unk4;
        temp_r0_16 = func_080074C0(temp_r0_15, temp_r0_15->unk4);
        sp94 = sp7C + 0x40;
        sp9C = sp7C + 0x44;
        sp98 = sp7C + 0x42;
        spA0 = sp7C + 0x46;
        spB0 = arg0 + 0xC0;
        if ((s32) temp_r0_16 < 0) {

        } else {
            var_r1 = 0;
            var_sl = 0x6B;
            spAC = &sp0 + 0x68;
            sp88 = temp_r0_16 * 0x10;
loop_83:
            var_r0_3 = var_r1 + sp80->unk18;
            if (var_r0_3 > 2) {
                var_r0_3 -= 3;
            }
            temp_r0_17 = ((var_r0_3 * 4) + sp80)->unk8;
            var_sb = 8;
            sp84 = var_r1 + 1;
            sp8C = var_sl + 0x11;
            var_r6 = temp_r0_17 + 4;
            var_r5 = temp_r0_17;
            var_r8 = 6;
            do {
                sp60 = 0;
                sp64 = 0;
                temp_r2_7 = ((((sp60 | 0x1000) & 0xFFFF3FFF) | 0x4000) & 0x3FFFFFFF) | 0x80000000;
                sp60 = temp_r2_7;
                temp_r1_9 = var_r5->unk8;
                if ((s32) ((0 - temp_r1_9) | temp_r1_9) < 0) {
                    sp60.unk4 = (s32) ((sp60.unk4 & 0xFFFFFC00) | ((u32) (func_08007D4C(var_r6) << 0x16) >> 0x16));
                } else {
                    sp60 = (0xFFFFFCFF & temp_r2_7) | 0x200;
                }
                sp68 = sp60;
                sp6C = sp64;
                sp68 = (sp60 & 0xFFFFFF00) | var_sl;
                spAC->unk2 = (u16) ((spAC->unk2 & 0xFFFFFE00) | (var_sb & 0x1FF));
                spAC->unk5 = (u8) ((0xF & spAC->unk5) | sp88);
                temp_r2_8 = *sp78;
                if ((u32) temp_r2_8 <= 0x7FU) {
                    temp_r0_18 = sp78 + ((temp_r2_8 * 8) + 4);
                    temp_r0_18->unk0 = sp68;
                    temp_r0_18->unk4 = (u16) spAC->unk4;
                    *sp78 = temp_r2_8 + 1;
                }
                var_r6 += 0x10;
                var_r5 += 0x10;
                var_r8 -= 1;
                var_sb += 0x20;
            } while (var_r8 >= 0);
            var_r1 = sp84;
            var_sl = (u8) sp8C;
            if (var_r1 <= 2) {
                goto loop_83;
            }
        }
        arg4->unk8->unk10(arg4, arg0 + 0x120);
        sp90->unk0 = 0xF0U;
        *sp94 = 0xF0;
        sp90->unk0 = 0x68A0U;
        *sp9C = 0x68A0;
        if ((arg0->unk1DC << 0x1F) == 0) {

        } else {
            temp_r4_4 = arg0 + 0x1D4;
            temp_r1_10 = temp_r4_4->unk4;
            if ((s32) ((0 - temp_r1_10) | temp_r1_10) >= 0) {

            } else {
                temp_r1_11 = (arg0 + 0x1E8)->unk4;
                if ((s32) ((0 - temp_r1_11) | temp_r1_11) >= 0) {

                } else {
                    if (arg0->unk500 == 0) {

                    } else {
                        temp_r1_12 = (arg0 + 0x548)->unk4;
                        if ((s32) ((0 - temp_r1_12) | temp_r1_12) >= 0) {

                        } else {
                            temp_r4_5 = arg0 + 0x534;
                            temp_r5_3 = func_0805E8F0(temp_r4_5);
                            temp_r1_13 = arg0->unk534;
                            (*temp_r1_13)->unk10(sp90, temp_r1_13, *(arg0->unk538 + (temp_r4_5->unkC * 4)));
                            if ((s32) (temp_r5_3 << 0x1E) < 0) {
                                var_r3_2 = 0;
                                if (sp14 != 0) {
                                    var_r3_2 = sp14.unk4;
                                }
                                var_r5_2 = var_r3_2;
                                if ((u32) var_r5_2 > 0x100U) {
                                    var_r5_2 = 0x100;
                                }
                                temp_r4_6 = arg0 + 0x3C;
                                func_08008F0C(&sp2C, sp14, (func_08007D4C(temp_r4_4, temp_r4_4->unk4) << 5) + 0x06010F00, var_r5_2);
                                temp_r0_19 = arg0->unk3C;
                                if (temp_r0_19 <= 7U) {
                                    temp_r0_20 = temp_r4_6 + ((temp_r0_19 * 0x10) + 4);
                                    if (temp_r0_20 != 0) {
                                        temp_r0_20->unk0 = (s32 *) sp2C.unk0;
                                        temp_r0_20->unk4 = (s32) sp2C.unk4;
                                        temp_r0_20->unk8 = (s32) sp2C.unk8;
                                        temp_r0_20->unkC = (s32) sp2C.unkC;
                                    }
                                    arg0->unk3C = (u32) (arg0->unk3C + 1);
                                }
                                var_r3_3 = 0;
                                if (sp1C != 0) {
                                    var_r3_3 = sp1C.unk4;
                                }
                                var_r5_3 = var_r3_3;
                                if ((u32) var_r5_3 > 0x20U) {
                                    var_r5_3 = 0x20;
                                }
                                temp_r0_21 = arg0 + 0x548;
                                func_08008F0C(&sp2C, sp1C, (func_080074C0(temp_r0_21, temp_r0_21->unk4) << 5) + 0x05000200, var_r5_3);
                                temp_r0_22 = arg0->unk3C;
                                if (temp_r0_22 <= 7U) {
                                    temp_r0_23 = temp_r4_6 + ((temp_r0_22 * 0x10) + 4);
                                    if (temp_r0_23 != 0) {
                                        temp_r0_23->unk0 = (s32 *) sp2C.unk0;
                                        temp_r0_23->unk4 = (s32) sp2C.unk4;
                                        temp_r0_23->unk8 = (s32) sp2C.unk8;
                                        temp_r0_23->unkC = (s32) sp2C.unkC;
                                    }
                                    arg0->unk3C = (u32) (arg0->unk3C + 1);
                                }
                            }
                            sp3C.unk4 = 0U;
                            sp3C.unk6 = 0;
                            sp3C.unk8 = 0;
                            sp3C.unkC = 0;
                            sp3C.unk10 = 0;
                            sp3C.unk11 = 0;
                            sp3C.unk14 = 0;
                            sp3C.unk18 = 0;
                            sp3C.unk0 = 0x34;
                            sp3C.unk2 = 0x5C;
                            temp_r0_24 = arg0 + 0x1D4;
                            sp3C.unk6 = (s16) (func_08007D4C(temp_r0_24, temp_r0_24->unk4) + 0x78);
                            temp_r0_25 = arg0 + 0x548;
                            sp3C.unk4 = func_080074C0(temp_r0_25, temp_r0_25->unk4);
                            sp3C.unk18 = 1;
                            var_r2_2 = 0;
                            if (spC != 0) {
                                var_r2_2 = sp90->unk4;
                            }
                            func_0805E99C(sp78, spC, var_r2_2, &sp3C);
                        }
                    }
                    func_080ADD08(sp90, arg0 + 0x1E4);
                    if ((s32) (arg0->unk1DC << 0x1E) < 0) {
                        var_r3_4 = 0;
                        if (sp14 != 0) {
                            var_r3_4 = sp14.unk4;
                        }
                        var_r5_4 = var_r3_4;
                        if ((u32) var_r5_4 > 0xC00U) {
                            var_r5_4 = 0xC00;
                        }
                        temp_r0_26 = arg0 + 0x1D4;
                        temp_r4_7 = arg0 + 0x3C;
                        func_08008F0C(&sp2C, sp14, (func_08007D4C(temp_r0_26, temp_r0_26->unk4) << 5) + 0x06010000, var_r5_4);
                        temp_r0_27 = arg0->unk3C;
                        if (temp_r0_27 <= 7U) {
                            temp_r0_28 = temp_r4_7 + ((temp_r0_27 * 0x10) + 4);
                            if (temp_r0_28 != 0) {
                                temp_r0_28->unk0 = (s32 *) sp2C.unk0;
                                temp_r0_28->unk4 = (s32) sp2C.unk4;
                                temp_r0_28->unk8 = (s32) sp2C.unk8;
                                temp_r0_28->unkC = (s32) sp2C.unkC;
                            }
                            arg0->unk3C = (u32) (arg0->unk3C + 1);
                        }
                        var_r3_5 = 0;
                        if (sp1C != 0) {
                            var_r3_5 = sp1C.unk4;
                        }
                        var_r5_5 = var_r3_5;
                        if ((u32) var_r5_5 > 0x20U) {
                            var_r5_5 = 0x20;
                        }
                        temp_r0_29 = arg0 + 0x1E8;
                        func_08008F0C(&sp2C, sp1C, (func_080074C0(temp_r0_29, temp_r0_29->unk4) << 5) + 0x05000200, var_r5_5);
                        temp_r0_30 = arg0->unk3C;
                        if (temp_r0_30 <= 7U) {
                            temp_r0_31 = temp_r4_7 + ((temp_r0_30 * 0x10) + 4);
                            if (temp_r0_31 != 0) {
                                temp_r0_31->unk0 = (s32 *) sp2C.unk0;
                                temp_r0_31->unk4 = (s32) sp2C.unk4;
                                temp_r0_31->unk8 = (s32) sp2C.unk8;
                                temp_r0_31->unkC = (s32) sp2C.unkC;
                            }
                            arg0->unk3C = (u32) (arg0->unk3C + 1);
                        }
                        arg0->unk1DC = (u8) (-3 & arg0->unk1DC);
                    }
                    sp2C.unk4 = 0;
                    sp2C.unk6 = 0;
                    sp2C.unk8 = 0;
                    sp2C.unkC = 0;
                    sp2C.unk10 = 0;
                    sp2C.unk11 = 0;
                    sp2C.unk14 = 0;
                    sp2C.unk18 = 0;
                    sp2C.unk0 = 0x28;
                    sp2C.unk2 = 0x68;
                    temp_r0_32 = arg0 + 0x1D4;
                    sp2C.unk6 = func_08007D4C(temp_r0_32, temp_r0_32->unk4);
                    temp_r0_33 = arg0 + 0x1E8;
                    sp2C.unk4 = func_080074C0(temp_r0_33, temp_r0_33->unk4);
                    sp2C.unk18 = 1;
                    var_r2_3 = 0;
                    if (spC != 0) {
                        var_r2_3 = sp90->unk4;
                    }
                    func_0805E99C(sp78, spC, var_r2_3, &sp2C);
                }
            }
        }
        temp_r3_4 = arg0->unk1F0;
        if ((temp_r3_4 << 0x1F) == 0) {
            goto block_163;
        }
        temp_r4_8 = arg0 + 0x1D4;
        temp_r2_9 = temp_r4_8->unk4;
        if ((s32) ((0 - temp_r2_9) | temp_r2_9) >= 0) {
block_163:
            sp90->unk0 = 0xF0F0U;
            *sp98 = 0xF0F0;
            sp90->unk0 = 0xA0A0U;
            *spA0 = 0xA0A0;
        } else {
            *spA4 |= 0x3F00;
            *spA8 |= (0x3F & ~(1 << ((u32) (arg0->unk0 << 0x1E) >> 0x1E))) << 8;
            sp90->unk0 = 0x80F0U;
            *sp98 = 0x80F0;
            sp90->unk0 = 0x5068U;
            *spA0 = 0x5068;
            temp_r6_3 = arg0 + 0x10;
            if ((s32) (temp_r3_4 << 0x1E) < 0) {
                var_sb_2 = 0;
                spB4 = (func_08007D4C(temp_r4_8, temp_r2_9) << 5) + 0x06010C00;
                var_r5_6 = arg0 + 0x1F8;
                do {
                    func_08008F0C(&spC, var_r5_6, spB4, 0x100U);
                    temp_r0_34 = arg0->unk3C;
                    if (temp_r0_34 <= 7U) {
                        temp_r0_35 = arg0 + 0x3C + ((temp_r0_34 * 0x10) + 4);
                        if (temp_r0_35 != 0) {
                            temp_r0_35->unk0 = (s32 *) sp90->unk0;
                            temp_r0_35->unk4 = (s32) sp90->unk4;
                            temp_r0_35->unk8 = (s32) sp90->unk8;
                            temp_r0_35->unkC = (s32) sp90->unkC;
                        }
                        arg0->unk3C = (u32) (arg0->unk3C + 1);
                    }
                    spB4 += 0x100;
                    var_r5_6 += 0x104;
                    var_sb_2 += 1;
                } while (var_sb_2 <= 2U);
                arg0->unk1F0 = (u8) (-3 & arg0->unk1F0);
            }
            sp70 = 0;
            sp74 = 0;
            temp_r0_36 = ((((((0 & 0xFFFFFF00) | 0x54) & 0xFE00FFFF) | 0x880000) & 0xFFFF3FFF) | 0x4000) & 0x3FFFFFFF;
            sp70 = temp_r0_36 | 0x80000000;
            temp_r0_37 = arg0 + 0x1D4;
            sp70.unk4 = (s32) ((sp70.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(temp_r0_37, temp_r0_37->unk4) + 0x60) << 0x16) >> 0x16));
            sp70.unk4 = (s32) ((sp70.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r6_3, temp_r6_3->unk4) & 0xF) << 0xC));
            sp70 = temp_r0_36 | 0x80001000;
            var_r5_7 = 0;
            do {
                temp_r2_10 = *sp78;
                if ((u32) temp_r2_10 <= 0x7FU) {
                    temp_r1_14 = sp78 + ((temp_r2_10 * 8) + 4);
                    temp_r1_14->unk0 = sp70;
                    temp_r1_14->unk4 = (u16) sp70.unk4;
                    *sp78 = temp_r2_10 + 1;
                }
                temp_r2_11 = sp70.unk2;
                sp70.unk2 = (u16) ((0xFFFFFE00 & temp_r2_11) | ((((u32) (temp_r2_11 << 0x17) >> 0x17) + 0x20) & 0x1FF));
                temp_r2_12 = (u16) sp70.unk4;
                sp70.unk4 = (s16) ((0xFFFFFC00 & temp_r2_12) | ((((u32) (temp_r2_12 << 0x16) >> 0x16) + 8) & 0x3FF));
                var_r5_7 += 1;
            } while (var_r5_7 <= 2U);
        }
    }
    temp_r0_38 = arg0->unk4;
    if (temp_r0_38 == 2) {
        *spA4 |= 0x2020;
        sp7C->unk50 = (s32) ((1 << ((u32) (arg0->unk0 << 0x1E) >> 0x1E)) | 0x08083F40);
    } else if (temp_r0_38 == 1) {
        temp_r1_15 = arg0->unk130;
        if ((s32) ((0 - temp_r1_15) | temp_r1_15) >= 0) {
            arg5->unk8->unk10(arg5, arg0 + 0x130);
        }
    }
    arg4->unk8->unk10(arg4, spB0);
    .L08050382();
}
