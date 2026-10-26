/* Warning: missing "bx $lr" in last block of func_08085F08 (.L08086896). */

u32 GetAge__C6Animal(s32);                          /* extern */
s32 GetCow__4BarnUi(void *, s32);                   /* extern */
s32 GetDesc__C4Tool(void *);                        /* extern */
s32 GetDesc__C7Article(s32 *);                        /* extern */
s32 GetSheep__4BarnUi(s32, s32);                    /* extern */
u8 IsSick__C9Livestock();                           /* extern */
u8 IsUnhappy__C9Livestock(s32);                     /* extern */
s32 __4ToolUi(void *, s32);                           /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 func_0804EC84(u32, ? *, s32);                     /* extern */
s32 func_080CABEC(void *, s32);                       /* extern */
s32 memcpy(s32 *, ? *, u32);                            /* extern */
u32 strlen(s32 *);                                    /* extern */
s32 sub_080868A8();                                   /* extern */
u32 sub_080868BC(u32, s32);                         /* extern */
extern s32 .L080868CC;
extern ? *.L080868D0;
extern ? *.L080868D4;
extern ? *.L080868D8;
extern ? *.L080868DC;
extern s32 .L080868E0;
extern ? gUnk_080FFB60;
extern ? gUnk_080FFB90;
extern ? gUnk_080FFC70;
extern ? gUnk_080FFC80;
extern ? gUnk_080FFC90;
extern ? gUnk_080FFCA0;
extern ? gUnk_080FFCA4;
extern ? gUnk_080FFCC0;
extern ? gUnk_080FFCC8;
extern ? gUnk_080FFCD0;
extern ? gUnk_080FFCD8;
extern ? gUnk_080FFCE0;
extern ? gUnk_080FFCF8;
extern ? gUnk_080FFD08;

void func_08085F08(void *arg0, s32 arg1) {
    s32 sp0;
s32 sp14;
s32 sp28;
    s32 sp2C;
    s32 sp30;
    u8 sp34;
    s32 sp3C;
    u8 sp40;
    ? *temp_r4_2;
    ? *temp_r4_4;
    ? *temp_r4_5;
    ? *temp_r4_6;
    ? *temp_r4_8;
    ? *temp_r4_9;
    ? *temp_r5;
    ? *temp_r6;
    ? *temp_r6_10;
    ? *temp_r6_11;
    ? *temp_r6_12;
    ? *temp_r6_13;
    ? *temp_r6_14;
    ? *temp_r6_15;
    ? *temp_r6_17;
    ? *temp_r6_18;
    ? *temp_r6_19;
    ? *temp_r6_20;
    ? *temp_r6_21;
    ? *temp_r6_2;
    ? *temp_r6_3;
    ? *temp_r6_4;
    ? *temp_r6_5;
    ? *temp_r6_7;
    ? *temp_r6_8;
    ? *temp_r6_9;
    ? *temp_r7_10;
    ? *temp_r7_11;
    ? *temp_r7_12;
    ? *temp_r7_13;
    ? *temp_r7_14;
    ? *temp_r7_15;
    ? *temp_r7_3;
    ? *temp_r7_4;
    ? *temp_r7_5;
    ? *temp_r7_6;
    ? *temp_r7_7;
    ? *temp_r7_8;
    ? *temp_r7_9;
    ? *var_r4_10;
    ? *var_r4_24;
    ? *var_r6;
    ? *var_r7;
    ? *var_r7_2;
    ? *var_r7_3;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 var_r1;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_17;
    u32 temp_r0_18;
    u32 temp_r0_19;
    u32 temp_r0_20;
    u32 temp_r0_21;
    u32 temp_r0_22;
    u32 temp_r0_23;
    u32 temp_r0_24;
    u32 temp_r0_25;
    u32 temp_r0_26;
    u32 temp_r0_28;
    u32 temp_r0_29;
    u32 temp_r0_30;
    u32 temp_r0_31;
    u32 temp_r0_32;
    u32 temp_r0_33;
    u32 temp_r0_34;
    u32 temp_r0_35;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 temp_r4_3;
    u32 temp_r4_7;
    u32 temp_r5_10;
    u32 temp_r5_11;
    u32 temp_r5_12;
    u32 temp_r5_13;
    u32 temp_r5_14;
    u32 temp_r5_15;
    u32 temp_r5_16;
    u32 temp_r5_17;
    u32 temp_r5_18;
    u32 temp_r5_19;
    u32 temp_r5_20;
    u32 temp_r5_21;
    u32 temp_r5_22;
    u32 temp_r5_23;
    u32 temp_r5_24;
    u32 temp_r5_25;
    u32 temp_r5_26;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 temp_r5_8;
    u32 temp_r5_9;
    u32 temp_r6_16;
    u32 temp_r6_6;
    u32 var_r0;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r4;
    u32 var_r4_11;
    u32 var_r4_12;
    u32 var_r4_13;
    u32 var_r4_14;
    u32 var_r4_15;
    u32 var_r4_16;
    u32 var_r4_17;
    u32 var_r4_18;
    u32 var_r4_19;
    u32 var_r4_20;
    u32 var_r4_21;
    u32 var_r4_22;
    u32 var_r4_23;
    u32 var_r4_25;
    u32 var_r4_26;
    u32 var_r4_27;
    u32 var_r4_28;
    u32 var_r4_29;
    u32 var_r4_2;
    u32 var_r4_30;
    u32 var_r4_31;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r4_9;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r5_3;
    u8 temp_r0_12;
    u8 temp_r0_27;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r7_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r4;
    void *temp_r7;
    void *var_r1_2;

    temp_r0 = (arg1 * 0x14) + &gUnk_080FFB90;
    sp0.unk0 = temp_r0->unk0;
    sp0.unk4 = (s32) temp_r0->unk4;
    sp0.unk8 = (s32) temp_r0->unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0->unkC;
    temp_r1->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    var_r0 = sp10;
    if (var_r0 > 4U) {
        var_r0 = sub_080868BC(var_r0, temp_r1 + 8);
    }
    switch (var_r0) {                               /* switch 1 */
    case 4:                                         /* switch 1 */
        break;
    case 0:                                         /* switch 1 */
        __7ArticleUi(&sp28, sp0);
        var_r1 = GetDesc__C7Article(&sp28);
block_6:
        func_080CABEC(arg0, var_r1);
        sub_080868BC();
        break;
    case 2:                                         /* switch 1 */
        temp_r4 = &sp0 + 0x29;
        __4ToolUi(temp_r4, sp0);
        var_r1 = GetDesc__C4Tool(temp_r4);
        goto block_6;
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        var_r1 = spC;
        goto block_6;
    }
    temp_r7 = arg0 + 0x6AC;
    temp_r0_2 = *(temp_r7 + (arg0->unk10 * 8));
    var_r1_2 = arg0 + (temp_r0_2 * 0x84);
    temp_r0_3 = var_r1_2->unk3B98;
    sp2C = (s32) temp_r0_3;
    if (temp_r0_3 != 0) {
        var_r1_2 = SECOND_REG(sub_080868A8());
    }
    temp_r5 = var_r1_2 + 0x3B9C;
    var_r4 = strlen(&gUnk_080FFB60);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r5, &gUnk_080FFB60, var_r4);
    *(temp_r5 + var_r4) = sp2C;
    temp_r1_2 = arg0->unk10;
    if (((temp_r1_2 * 4) + arg0)->unk730 != 9) {
        sp3C = GetSheep__4BarnUi(arg0->unk8 + 0x5F0, *(temp_r7 + (temp_r1_2 * 8)));
        temp_r0_4 = IsSick__C9Livestock();
        if (temp_r0_4 != 0) {
            temp_r0_5 = strlen(temp_r5);
            temp_r6 = temp_r5 + temp_r0_5;
            temp_r5_2 = 0x7F - temp_r0_5;
            if (temp_r5_2 != 0) {
                var_r4_2 = strlen(&gUnk_080FFCF8);
                if (var_r4_2 > temp_r5_2) {
                    var_r4_2 = temp_r5_2;
                }
                memcpy(temp_r6, &gUnk_080FFCF8, var_r4_2);
                *(temp_r6 + var_r4_2) = sp2C;
            }
        } else {
            temp_r7_2 = IsUnhappy__C9Livestock(sp3C);
            if (temp_r7_2 != 0) {
                temp_r0_6 = strlen(temp_r5);
                temp_r6_2 = temp_r5 + temp_r0_6;
                temp_r5_3 = 0x7F - temp_r0_6;
                if (temp_r5_3 != 0) {
                    var_r4_3 = strlen(&gUnk_080FFC80);
                    if (var_r4_3 > temp_r5_3) {
                        var_r4_3 = temp_r5_3;
                    }
                    memcpy(temp_r6_2, &gUnk_080FFC80, var_r4_3);
                    *(temp_r6_2 + var_r4_3) = temp_r0_4;
                }
            } else {
                temp_r0_7 = strlen(temp_r5);
                temp_r6_3 = temp_r5 + temp_r0_7;
                temp_r5_4 = 0x7F - temp_r0_7;
                if (temp_r5_4 != 0) {
                    var_r4_4 = strlen(&gUnk_080FFC90);
                    if (var_r4_4 > temp_r5_4) {
                        var_r4_4 = temp_r5_4;
                    }
                    memcpy(temp_r6_3, &gUnk_080FFC90, var_r4_4);
                    *(temp_r6_3 + var_r4_4) = temp_r7_2;
                }
            }
        }
        temp_r0_8 = GetAge__C6Animal(sp3C) / 120U;
        if ((s32) temp_r0_8 <= 9) {
            temp_r4_2 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            temp_r0_9 = strlen(temp_r4_2);
            temp_r7_3 = temp_r4_2 + temp_r0_9;
            temp_r5_5 = 0x7F - temp_r0_9;
            if (temp_r5_5 != 0) {
                var_r4_5 = strlen(&gUnk_080FFCA0);
                if (var_r4_5 > temp_r5_5) {
                    var_r4_5 = temp_r5_5;
                }
                memcpy(temp_r7_3, &gUnk_080FFCA0, var_r4_5);
                *(temp_r7_3 + var_r4_5) = 0;
            }
        }
        func_0804EC84(temp_r0_8, &sp14, 0);
        temp_r6_4 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
        temp_r0_10 = strlen(temp_r6_4);
        temp_r7_4 = temp_r6_4 + temp_r0_10;
        temp_r5_6 = 0x7F - temp_r0_10;
        if (temp_r5_6 != 0) {
            var_r4_6 = strlen(&sp14);
            if (var_r4_6 > temp_r5_6) {
                var_r4_6 = temp_r5_6;
            }
            memcpy(temp_r7_4, &sp14, var_r4_6);
            *(temp_r7_4 + var_r4_6) = 0;
        }
        temp_r0_11 = strlen(temp_r6_4);
        temp_r6_5 = temp_r6_4 + temp_r0_11;
        temp_r5_7 = 0x7F - temp_r0_11;
        if (temp_r5_7 != 0) {
            var_r4_7 = strlen(&gUnk_080FFD08);
            if (var_r4_7 > temp_r5_7) {
                var_r4_7 = temp_r5_7;
            }
            memcpy(temp_r6_5, &gUnk_080FFD08, var_r4_7);
            *(temp_r6_5 + var_r4_7) = 0;
        }
        temp_r4_3 = GetAge__C6Animal(sp3C);
        sp0.unk2B = (u8) arg0->unk8->unk11;
        if (temp_r4_3 <= 0x1DU) {
            var_r5 = temp_r4_3;
            var_r4_8 = 0;
        } else {
            var_r5 = temp_r4_3 % 30U;
            var_r4_8 = temp_r4_3 / 30U;
        }
        temp_r0_12 = sp0.unk2B;
        var_r3 = ((u32) (temp_r0_12 << 0x19) >> 0x1B) - (var_r5 - 0x1E);
        if (var_r3 <= 0x1DU) {
            var_r4_8 += 1;
        } else {
            var_r3 -= 0x1E;
        }
        temp_r1_3 = (((-4 & sp0.unk2B) | ((((u32) (temp_r0_12 << 0x1E) >> 0x1E) - var_r4_8) & 3)) & ~0x7C) | ((var_r3 & 0x1F) * 4);
        sp0.unk2B = temp_r1_3;
        sp40 = temp_r1_3;
        temp_r6_6 = (u32) (temp_r1_3 << 0x1E) >> 0x1E;
        switch (temp_r6_6) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            temp_r4_4 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            temp_r0_13 = strlen(temp_r4_4);
            temp_r7_5 = temp_r4_4 + temp_r0_13;
            temp_r5_8 = 0x7F - temp_r0_13;
            if (temp_r5_8 != 0) {
                var_r4_9 = strlen(&gUnk_080FFCC0);
                if (var_r4_9 > temp_r5_8) {
                    var_r4_9 = temp_r5_8;
                }
                memcpy(temp_r7_5, &gUnk_080FFCC0, var_r4_9);
                *(temp_r7_5 + var_r4_9) = (s8) temp_r6_6;
            }
            break;
        case 1:                                     /* switch 3 */
            var_r4_10 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            var_r7 = &gUnk_080FFCC8;
block_131:
            temp_r0_14 = strlen(var_r4_10);
            temp_r6_7 = var_r4_10 + temp_r0_14;
            temp_r5_9 = 0x7F - temp_r0_14;
            if (temp_r5_9 != 0) {
                var_r4_11 = strlen(var_r7);
                if (var_r4_11 > temp_r5_9) {
                    var_r4_11 = temp_r5_9;
                }
                memcpy(temp_r6_7, var_r7, var_r4_11);
                *(temp_r6_7 + var_r4_11) = 0;
            }
            break;
        case 2:                                     /* switch 3 */
            var_r4_10 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            var_r7 = &gUnk_080FFCD0;
            goto block_131;
        case 3:                                     /* switch 3 */
            var_r4_10 = (temp_r0_2 * 0x84) + arg0 + .L080868CC;
            var_r7 = .L080868D0;
            goto block_131;
        }
        if ((s32) (((u32) (sp40 << 0x19) >> 0x1B) + 1) <= 9) {
            temp_r4_5 = (temp_r0_2 * 0x84) + arg0 + .L080868CC;
            temp_r7_6 = .L080868D4;
            temp_r0_15 = strlen(temp_r4_5);
            temp_r6_8 = temp_r4_5 + temp_r0_15;
            temp_r5_10 = 0x7F - temp_r0_15;
            if (temp_r5_10 != 0) {
                var_r4_12 = strlen(temp_r7_6);
                if (var_r4_12 > temp_r5_10) {
                    var_r4_12 = temp_r5_10;
                }
                memcpy(temp_r6_8, temp_r7_6, var_r4_12);
                *(temp_r6_8 + var_r4_12) = 0;
            }
        }
        func_0804EC84(((u32) (sp40 << 0x19) >> 0x1B) + 1, &sp14, 0);
        temp_r6_9 = (temp_r0_2 * 0x84) + arg0 + .L080868CC;
        temp_r0_16 = strlen(temp_r6_9);
        temp_r7_7 = temp_r6_9 + temp_r0_16;
        temp_r5_11 = 0x7F - temp_r0_16;
        if (temp_r5_11 != 0) {
            var_r4_13 = strlen(.L080868D4);
            if (var_r4_13 > temp_r5_11) {
                var_r4_13 = temp_r5_11;
            }
            memcpy(temp_r7_7, .L080868D4, var_r4_13);
            *(temp_r7_7 + var_r4_13) = 0;
        }
        temp_r0_17 = strlen(temp_r6_9);
        temp_r7_8 = temp_r6_9 + temp_r0_17;
        temp_r5_12 = 0x7F - temp_r0_17;
        if (temp_r5_12 != 0) {
            var_r4_14 = strlen(&sp14);
            if (var_r4_14 > temp_r5_12) {
                var_r4_14 = temp_r5_12;
            }
            memcpy(temp_r7_8, &sp14, var_r4_14);
            *(temp_r7_8 + var_r4_14) = 0;
        }
        temp_r7_9 = .L080868D8;
        temp_r0_18 = strlen(temp_r6_9);
        temp_r6_10 = temp_r6_9 + temp_r0_18;
        temp_r5_13 = 0x7F - temp_r0_18;
        if (temp_r5_13 != 0) {
            var_r4_15 = strlen(temp_r7_9);
            if (var_r4_15 > temp_r5_13) {
                var_r4_15 = temp_r5_13;
            }
            memcpy(temp_r6_10, temp_r7_9, var_r4_15);
            *(temp_r6_10 + var_r4_15) = 0;
        }
        func_0804EC84(*(arg0 + 0x6B0 + (arg0->unk10 * 8)), &sp14, 0);
        var_r6 = (temp_r0_2 * 0x84) + arg0 + .L080868CC;
        temp_r0_19 = strlen(var_r6);
        var_r7_2 = var_r6 + temp_r0_19;
        var_r5_2 = 0x7F - temp_r0_19;
        if (var_r5_2 != 0) {
            goto block_154;
        }
    } else {
        sp30 = GetCow__4BarnUi(arg0->unk8 + 0x5F0, *(temp_r7 + (temp_r1_2 * 8)));
        if ((IsSick__C9Livestock() << 0x18) != 0) {
            temp_r0_20 = strlen(temp_r5);
            temp_r6_11 = temp_r5 + temp_r0_20;
            temp_r5_14 = 0x7F - temp_r0_20;
            if (temp_r5_14 != 0) {
                var_r4_16 = strlen(&gUnk_080FFC70);
                if (var_r4_16 > temp_r5_14) {
                    var_r4_16 = temp_r5_14;
                }
                memcpy(temp_r6_11, &gUnk_080FFC70, var_r4_16);
                *(temp_r6_11 + var_r4_16) = sp2C;
            }
        } else if ((IsUnhappy__C9Livestock(sp30) << 0x18) != 0) {
            temp_r0_21 = strlen(temp_r5);
            temp_r6_12 = temp_r5 + temp_r0_21;
            temp_r5_15 = 0x7F - temp_r0_21;
            if (temp_r5_15 != 0) {
                var_r4_17 = strlen(&gUnk_080FFC80);
                if (var_r4_17 > temp_r5_15) {
                    var_r4_17 = temp_r5_15;
                }
                memcpy(temp_r6_12, &gUnk_080FFC80, var_r4_17);
                *(temp_r6_12 + var_r4_17) = sp2C;
            }
        } else {
            temp_r0_22 = strlen(temp_r5);
            temp_r6_13 = temp_r5 + temp_r0_22;
            temp_r5_16 = 0x7F - temp_r0_22;
            if (temp_r5_16 != 0) {
                var_r4_18 = strlen(&gUnk_080FFC90);
                if (var_r4_18 > temp_r5_16) {
                    var_r4_18 = temp_r5_16;
                }
                memcpy(temp_r6_13, &gUnk_080FFC90, var_r4_18);
                *(temp_r6_13 + var_r4_18) = sp2C;
            }
        }
        temp_r0_23 = GetAge__C6Animal(sp30) / 120U;
        if ((s32) temp_r0_23 <= 9) {
            temp_r4_6 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            temp_r0_24 = strlen(temp_r4_6);
            temp_r7_10 = temp_r4_6 + temp_r0_24;
            temp_r5_17 = 0x7F - temp_r0_24;
            if (temp_r5_17 != 0) {
                var_r4_19 = strlen(&gUnk_080FFCA0);
                if (var_r4_19 > temp_r5_17) {
                    var_r4_19 = temp_r5_17;
                }
                memcpy(temp_r7_10, &gUnk_080FFCA0, var_r4_19);
                *(temp_r7_10 + var_r4_19) = 0;
            }
        }
        func_0804EC84(temp_r0_23, &sp14, 0);
        temp_r6_14 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
        temp_r0_25 = strlen(temp_r6_14);
        temp_r7_11 = temp_r6_14 + temp_r0_25;
        temp_r5_18 = 0x7F - temp_r0_25;
        if (temp_r5_18 != 0) {
            var_r4_20 = strlen(&sp14);
            if (var_r4_20 > temp_r5_18) {
                var_r4_20 = temp_r5_18;
            }
            memcpy(temp_r7_11, &sp14, var_r4_20);
            *(temp_r7_11 + var_r4_20) = 0;
        }
        temp_r0_26 = strlen(temp_r6_14);
        temp_r6_15 = temp_r6_14 + temp_r0_26;
        temp_r5_19 = 0x7F - temp_r0_26;
        if (temp_r5_19 != 0) {
            var_r4_21 = strlen(&gUnk_080FFCA4);
            if (var_r4_21 > temp_r5_19) {
                var_r4_21 = temp_r5_19;
            }
            memcpy(temp_r6_15, &gUnk_080FFCA4, var_r4_21);
            *(temp_r6_15 + var_r4_21) = 0;
        }
        temp_r4_7 = GetAge__C6Animal(sp30);
        sp0.unk2A = (u8) arg0->unk8->unk11;
        if (temp_r4_7 <= 0x1DU) {
            var_r5_3 = temp_r4_7;
            var_r4_22 = 0;
        } else {
            var_r5_3 = temp_r4_7 % 30U;
            var_r4_22 = temp_r4_7 / 30U;
        }
        temp_r0_27 = sp0.unk2A;
        var_r3_2 = ((u32) (temp_r0_27 << 0x19) >> 0x1B) - (var_r5_3 - 0x1E);
        if (var_r3_2 <= 0x1DU) {
            var_r4_22 += 1;
        } else {
            var_r3_2 -= 0x1E;
        }
        temp_r1_4 = (((-4 & sp0.unk2A) | ((((u32) (temp_r0_27 << 0x1E) >> 0x1E) - var_r4_22) & 3)) & ~0x7C) | ((var_r3_2 & 0x1F) * 4);
        sp0.unk2A = temp_r1_4;
        sp34 = temp_r1_4;
        temp_r6_16 = (u32) (temp_r1_4 << 0x1E) >> 0x1E;
        switch (temp_r6_16) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_r4_8 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            temp_r0_28 = strlen(temp_r4_8);
            temp_r7_12 = temp_r4_8 + temp_r0_28;
            temp_r5_20 = 0x7F - temp_r0_28;
            if (temp_r5_20 != 0) {
                var_r4_23 = strlen(&gUnk_080FFCC0);
                if (var_r4_23 > temp_r5_20) {
                    var_r4_23 = temp_r5_20;
                }
                memcpy(temp_r7_12, &gUnk_080FFCC0, var_r4_23);
                *(temp_r7_12 + var_r4_23) = (s8) temp_r6_16;
            }
            break;
        case 1:                                     /* switch 2 */
            var_r4_24 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            var_r7_3 = &gUnk_080FFCC8;
block_60:
            temp_r0_29 = strlen(var_r4_24);
            temp_r6_17 = var_r4_24 + temp_r0_29;
            temp_r5_21 = 0x7F - temp_r0_29;
            if (temp_r5_21 != 0) {
                var_r4_25 = strlen(var_r7_3);
                if (var_r4_25 > temp_r5_21) {
                    var_r4_25 = temp_r5_21;
                }
                memcpy(temp_r6_17, var_r7_3, var_r4_25);
                *(temp_r6_17 + var_r4_25) = 0;
            }
            break;
        case 2:                                     /* switch 2 */
            var_r4_24 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            var_r7_3 = &gUnk_080FFCD0;
            goto block_60;
        case 3:                                     /* switch 2 */
            var_r4_24 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            var_r7_3 = &gUnk_080FFCD8;
            goto block_60;
        }
        if ((s32) (((u32) (sp34 << 0x19) >> 0x1B) + 1) <= 9) {
            temp_r4_9 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
            temp_r0_30 = strlen(temp_r4_9);
            temp_r6_18 = temp_r4_9 + temp_r0_30;
            temp_r5_22 = 0x7F - temp_r0_30;
            if (temp_r5_22 != 0) {
                var_r4_26 = strlen(&gUnk_080FFCA0);
                if (var_r4_26 > temp_r5_22) {
                    var_r4_26 = temp_r5_22;
                }
                memcpy(temp_r6_18, &gUnk_080FFCA0, var_r4_26);
                *(temp_r6_18 + var_r4_26) = 0;
            }
        }
        func_0804EC84(((u32) (sp34 << 0x19) >> 0x1B) + 1, &sp14, 0);
        temp_r6_19 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
        temp_r0_31 = strlen(temp_r6_19);
        temp_r7_13 = temp_r6_19 + temp_r0_31;
        temp_r5_23 = 0x7F - temp_r0_31;
        if (temp_r5_23 != 0) {
            var_r4_27 = strlen(&gUnk_080FFCA0);
            if (var_r4_27 > temp_r5_23) {
                var_r4_27 = temp_r5_23;
            }
            memcpy(temp_r7_13, &gUnk_080FFCA0, var_r4_27);
            *(temp_r7_13 + var_r4_27) = 0;
        }
        temp_r0_32 = strlen(temp_r6_19);
        temp_r7_14 = temp_r6_19 + temp_r0_32;
        temp_r5_24 = 0x7F - temp_r0_32;
        if (temp_r5_24 != 0) {
            var_r4_28 = strlen(&sp14);
            if (var_r4_28 > temp_r5_24) {
                var_r4_28 = temp_r5_24;
            }
            memcpy(temp_r7_14, &sp14, var_r4_28);
            *(temp_r7_14 + var_r4_28) = 0;
        }
        temp_r0_33 = strlen(temp_r6_19);
        temp_r6_20 = temp_r6_19 + temp_r0_33;
        temp_r5_25 = 0x7F - temp_r0_33;
        if (temp_r5_25 != 0) {
            var_r4_29 = strlen(&gUnk_080FFCE0);
            if (var_r4_29 > temp_r5_25) {
                var_r4_29 = temp_r5_25;
            }
            memcpy(temp_r6_20, &gUnk_080FFCE0, var_r4_29);
            *(temp_r6_20 + var_r4_29) = 0;
        }
        func_0804EC84(*(arg0 + 0x6B0 + (arg0->unk10 * 8)), &sp14, 0);
        var_r6 = (temp_r0_2 * 0x84) + arg0 + 0x3B9C;
        temp_r0_34 = strlen(var_r6);
        var_r7_2 = var_r6 + temp_r0_34;
        var_r5_2 = 0x7F - temp_r0_34;
        if (var_r5_2 == 0) {

        } else {
block_154:
            var_r4_30 = strlen(&sp14);
            if (var_r4_30 > var_r5_2) {
                var_r4_30 = var_r5_2;
            }
            memcpy(var_r7_2, &sp14, var_r4_30);
            *(var_r7_2 + var_r4_30) = 0;
        }
    }
    temp_r7_15 = .L080868DC;
    temp_r0_35 = strlen(var_r6);
    temp_r6_21 = var_r6 + temp_r0_35;
    temp_r5_26 = 0x7F - temp_r0_35;
    if (temp_r5_26 != 0) {
        var_r4_31 = strlen(temp_r7_15);
        if (var_r4_31 > temp_r5_26) {
            var_r4_31 = temp_r5_26;
        }
        memcpy(temp_r6_21, temp_r7_15, var_r4_31);
        *(temp_r6_21 + var_r4_31) = 0;
    }
    *((temp_r0_2 * 0x84) + arg0 + .L080868E0) = 1;
}
