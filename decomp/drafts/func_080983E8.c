s32 free();                                           /* extern */
u16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
u8 *func_08008920(void *);                          /* extern */
s32 func_08008F0C(void *, s32, s32, u16);             /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, s32, u16, ? *);               /* extern */
s32 func_0809A3E0(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(void *, void *, s32);                      /* extern */

void func_080983E8(void *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
s32 sp3C;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 *sp7C;
    void *sp80;
    void *sp84;
    void *sp88;
    void *sp8C;
    s16 temp_r2_3;
    s16 temp_r2_5;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0;
    s32 temp_r0_11;
    s32 temp_r0_17;
    s32 temp_r0_4;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;
    s32 var_r7;
    s32 var_sb;
    s32 var_sb_2;
    u16 var_r2_3;
    u16 var_r2_6;
    u16 var_r3;
    u16 var_r3_4;
    u8 *temp_r0_3;
    u8 *temp_r0_6;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 temp_r2;
    u8 temp_r2_2;
    void **temp_r1_3;
    void **temp_r1_7;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r5;
    void *var_r5_2;

    sp0.unk0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0U;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    temp_r0 = ((((sp5C & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF) | 0x8000) & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
    sp5C = temp_r0;
    temp_r0_2 = arg0 + 0x308;
    sp5C.unk4 = (s32) (((u16) ((sp5C.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_2, temp_r0_2->unk4) & 0xF) << 0xC)) & 0xFFFFF3FF) | 0x400);
    sp5C = (temp_r0 & 0xFFFFFF00) | 4;
    var_r4 = 0;
    sp80 = &sp0 + 0x3C;
    var_r6 = 8;
    do {
        sp5C = (sp5C & 0xFE00FFFF) | ((0x1FF & var_r6) << 0x10);
        sp60 = (sp60 & 0xFFFFFC00) | ((u32) ((func_08007D4C(arg0 + 0x300, arg0->unk304) + (var_r4 * 2)) << 0x16) >> 0x16);
        temp_r0_3 = func_08008920(arg0);
        temp_r2 = *temp_r0_3;
        if ((u32) temp_r2 <= 0x7FU) {
            temp_r1 = temp_r0_3 + ((temp_r2 * 8) + 4);
            temp_r1->unk0 = sp5C;
            temp_r1->unk4 = (u16) sp5C.unk4;
            *temp_r0_3 = temp_r2 + 1;
        }
        var_r6 += 8;
        var_r4 += 1;
    } while (var_r4 <= 0x15);
    temp_r0_4 = ((sp64 & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF;
    sp64 = temp_r0_4;
    temp_r0_5 = arg0 + 0x308;
    sp64.unk4 = (s32) (((u16) ((sp64.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_5, temp_r0_5->unk4) & 0xF) << 0xC)) & 0xFFFFF3FF) | 0x400);
    sp64 = (temp_r0_4 & 0xFFFFFF00) | 0xC;
    var_r4_2 = 0;
    sp7C = arg0 + 0x194;
    sp84 = arg0 + 0x310;
    var_r7 = 0xC0;
    do {
        sp64 = (sp64 & 0xFE00FFFF) | ((0x1FF & var_r7) << 0x10);
        sp64.unk4 = (s32) ((sp64.unk4 & 0xFFFFFC00) | ((u32) ((*(arg0 + 0x369 + var_r4_2) + func_08007D4C(sp84, sp84->unk4)) << 0x16) >> 0x16));
        temp_r0_6 = func_08008920(arg0);
        temp_r2_2 = *temp_r0_6;
        if ((u32) temp_r2_2 <= 0x7FU) {
            temp_r1_2 = temp_r0_6 + ((temp_r2_2 * 8) + 4);
            temp_r1_2->unk0 = sp64;
            temp_r1_2->unk4 = (u16) sp64.unk4;
            *temp_r0_6 = temp_r2_2 + 1;
        }
        var_r7 += 8;
        var_r4_2 += 1;
    } while (var_r4_2 <= 4);
    temp_r4 = arg0 + 0x158;
    arg0->unk188 = func_0805E8F0(temp_r4);
    temp_r1_3 = arg0->unk158;
    (*temp_r1_3)->unk10(&sp3C, temp_r1_3, *(arg0->unk15C + (temp_r4->unkC * 4)));
    memcpy(sp80, sp80, 0x20);
    temp_r0_7 = sp80 + 0xC;
    sp1C.unk0 = sp80->unk0;
    sp1C.unk4 = (s32) sp80->unk4;
    sp1C.unk8 = (s32) sp80->unk8;
    temp_r1_4 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp80->unkC;
    temp_r1_4->unk4 = (s32) temp_r0_7->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_7->unk8;
    temp_r1_4->unkC = (s32) temp_r0_7->unkC;
    (temp_r1_4 + 0xC)->unk4 = (s32) (temp_r0_7 + 0xC)->unk4;
    temp_r0_8 = arg0 + 0x16C;
    temp_r0_9 = temp_r0_8 + 0xC;
    sp0.unk0 = (s32) arg0->unk16C;
    sp0.unk4 = (s32) temp_r0_8->unk4;
    sp0.unk8 = (s32) temp_r0_8->unk8;
    temp_r1_5 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_8->unkC;
    temp_r1_5->unk4 = (s32) temp_r0_9->unk4;
    temp_r1_5->unk8 = (s32) temp_r0_9->unk8;
    temp_r1_5->unkC = (s32) temp_r0_9->unkC;
    sp0.unk0 = 0;
    sp0.unk2 = 8;
    temp_r4_2 = arg0 + 0x2E0;
    sp0.unk6 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
    temp_r0_10 = arg0 + 0x2E8;
    sp0.unk4 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk188 << 0x1E) >= 0) {

    } else {
        temp_r5 = func_08008910(arg0);
        temp_r2_3 = func_08007D4C(temp_r4_2, temp_r4_2->unk4);
        var_r3 = 0;
        if (sp24 != 0) {
            var_r3 = sp0.unk28;
        }
        func_08008F0C(sp80, sp24, (temp_r2_3 << 5) + 0x06010000, var_r3);
        temp_r1_6 = temp_r5->unk4;
        if (temp_r1_6 != temp_r5->unkC) {
            if (temp_r1_6 != 0) {
                temp_r1_6->unk0 = (s32) sp80->unk0;
                temp_r1_6->unk4 = (s32) sp80->unk4;
                temp_r1_6->unk8 = (s32) sp80->unk8;
                temp_r1_6->unkC = (s32) sp80->unkC;
            }
            temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        } else {
            sp88 = temp_r1_6;
            sp70 = 1;
            temp_r4_3 = (s32) (temp_r1_6 - temp_r5->unk0) >> 4;
            sp6C = temp_r4_3;
            var_r0 = &sp6C;
            if ((u32) temp_r4_3 < 1U) {
                var_r0 = &sp70;
            }
            temp_r0_11 = temp_r4_3 + *var_r0;
            if (temp_r0_11 != 0) {
                temp_r4_4 = temp_r0_11 * 0x10;
                var_r0_2 = malloc(temp_r4_4);
                var_sb = temp_r4_4;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            sp8C = var_r0_2;
            var_r2 = temp_r5->unk0;
            var_r3_2 = var_r0_2;
loop_26:
            if (var_r2 != sp88) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
                goto loop_26;
            }
            if (sp70 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp80->unk0;
                    var_r3_2->unk4 = (s32) sp80->unk4;
                    var_r3_2->unk8 = (s32) sp80->unk8;
                    var_r3_2->unkC = (s32) sp80->unkC;
                }
                var_r5 = var_r3_2 + 0x10;
            } else {
                var_r3_3 = sp70;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp80->unk0;
                            var_r2_2->unk4 = (s32) sp80->unk4;
                            var_r2_2->unk8 = (s32) sp80->unk8;
                            var_r2_2->unkC = (s32) sp80->unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r2_4 = temp_r5->unk4;
            temp_r0_12 = temp_r5->unk0;
            var_r1 = temp_r0_12;
            if (temp_r0_12 != temp_r2_4) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_4);
            }
            if (temp_r0_12 != 0) {
                free();
            }
            temp_r5->unk0 = sp8C;
            temp_r5->unk4 = var_r5;
            temp_r5->unkC = (void *) (sp8C + var_sb);
        }
    }
    temp_r3 = func_08008920(arg0);
    var_r2_3 = 0;
    if (sp1C != 0) {
        var_r2_3 = sp0.unk20;
    }
    func_0805E99C(temp_r3, sp1C, var_r2_3, &sp0);
    temp_r4_5 = arg0 + 0x190;
    arg0->unk1C0 = func_0805E8F0(temp_r4_5);
    temp_r1_7 = arg0->unk190;
    (*temp_r1_7)->unk10(&sp3C, temp_r1_7, *(*sp7C + (temp_r4_5->unkC * 4)));
    memcpy(sp80, sp80, 0x20);
    temp_r4_6 = sp80 + 0xC;
    sp1C.unk0 = sp80->unk0;
    sp1C.unk4 = (s32) sp80->unk4;
    sp1C.unk8 = (s32) sp80->unk8;
    temp_r0_13 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp80->unkC;
    temp_r0_13->unk4 = (s32) temp_r4_6->unk4;
    temp_r0_13->unk8 = (s32) temp_r4_6->unk8;
    temp_r0_13->unkC = (s32) temp_r4_6->unkC;
    (temp_r0_13 + 0xC)->unk4 = (s32) (temp_r4_6 + 0xC)->unk4;
    temp_r0_14 = arg0 + 0x1A4;
    temp_r0_15 = temp_r0_14 + 0xC;
    sp0.unk0 = (s32) arg0->unk1A4;
    sp0.unk4 = (s32) temp_r0_14->unk4;
    sp0.unk8 = (s32) temp_r0_14->unk8;
    temp_r1_8 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_14->unkC;
    temp_r1_8->unk4 = (s32) temp_r0_15->unk4;
    temp_r1_8->unk8 = (s32) temp_r0_15->unk8;
    temp_r1_8->unkC = (s32) temp_r0_15->unkC;
    sp0.unk0 = 0xE8;
    sp0.unk2 = 8;
    temp_r4_7 = arg0 + 0x2E0;
    sp0.unk6 = (s16) (func_08007D4C(temp_r4_7, temp_r4_7->unk4) + 2);
    temp_r0_16 = arg0 + 0x2E8;
    sp0.unk4 = func_080074C0(temp_r0_16, temp_r0_16->unk4);
    sp0.unk8 = 1;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk1C0 << 0x1E) >= 0) {

    } else {
        temp_r5_2 = func_08008910(arg0);
        temp_r2_5 = func_08007D4C(temp_r4_7, temp_r4_7->unk4);
        var_r3_4 = 0;
        if (sp24 != 0) {
            var_r3_4 = sp0.unk28;
        }
        func_08008F0C(sp80, sp24, (temp_r2_5 << 5) + 0x06010040, var_r3_4);
        temp_r1_9 = temp_r5_2->unk4;
        if (temp_r1_9 != temp_r5_2->unkC) {
            if (temp_r1_9 != 0) {
                temp_r1_9->unk0 = (s32) sp80->unk0;
                temp_r1_9->unk4 = (s32) sp80->unk4;
                temp_r1_9->unk8 = (s32) sp80->unk8;
                temp_r1_9->unkC = (s32) sp80->unkC;
            }
            temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
        } else {
            sp88 = temp_r1_9;
            sp78 = 1;
            temp_r4_8 = (s32) (temp_r1_9 - temp_r5_2->unk0) >> 4;
            sp74 = temp_r4_8;
            var_r0_3 = &sp74;
            if ((u32) temp_r4_8 < 1U) {
                var_r0_3 = &sp78;
            }
            temp_r0_17 = temp_r4_8 + *var_r0_3;
            if (temp_r0_17 != 0) {
                temp_r4_9 = temp_r0_17 * 0x10;
                var_r0_4 = malloc(temp_r4_9);
                var_sb_2 = temp_r4_9;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            sp8C = var_r0_4;
            var_r2_4 = temp_r5_2->unk0;
            var_r3_5 = var_r0_4;
            if (var_r2_4 != sp88) {
                do {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) var_r2_4->unk0;
                        var_r3_5->unk4 = (s32) var_r2_4->unk4;
                        var_r3_5->unk8 = (s32) var_r2_4->unk8;
                        var_r3_5->unkC = (s32) var_r2_4->unkC;
                    }
                    var_r2_4 += 0x10;
                    var_r3_5 += 0x10;
                } while (var_r2_4 != sp88);
            }
            if (sp78 == 1) {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) sp80->unk0;
                    var_r3_5->unk4 = (s32) sp80->unk4;
                    var_r3_5->unk8 = (s32) sp80->unk8;
                    var_r3_5->unkC = (s32) sp80->unkC;
                }
                var_r5_2 = var_r3_5 + 0x10;
            } else {
                var_r3_6 = sp78;
                var_r2_5 = var_r3_5;
                if (var_r3_6 != 0) {
                    do {
                        if (var_r2_5 != 0) {
                            var_r2_5->unk0 = (s32) sp80->unk0;
                            var_r2_5->unk4 = (s32) sp80->unk4;
                            var_r2_5->unk8 = (s32) sp80->unk8;
                            var_r2_5->unkC = (s32) sp80->unkC;
                        }
                        var_r3_6 -= 1;
                        var_r2_5 += 0x10;
                    } while (var_r3_6 != 0);
                }
                var_r5_2 = var_r2_5;
            }
            temp_r2_6 = temp_r5_2->unk4;
            temp_r0_18 = temp_r5_2->unk0;
            var_r1_2 = temp_r0_18;
            if (temp_r0_18 != temp_r2_6) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_6);
            }
            if (temp_r0_18 != 0) {
                free();
            }
            temp_r5_2->unk0 = sp8C;
            temp_r5_2->unk4 = var_r5_2;
            temp_r5_2->unkC = (void *) (sp8C + var_sb_2);
        }
    }
    temp_r3_2 = func_08008920(arg0);
    var_r2_6 = 0;
    if (sp1C != 0) {
        var_r2_6 = sp0.unk20;
    }
    func_0805E99C(temp_r3_2, sp1C, var_r2_6, &sp0);
    func_0809A3E0(arg0);
}
