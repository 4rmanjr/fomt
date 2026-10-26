s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_08117838;

void func_08099144(void *arg0, u16 arg1, u16 arg2, u8 arg3) {
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
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    void *sp78;
    void *sp7C;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_11;
    s32 temp_r0_5;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 var_r2_3;
    s32 var_r2_6;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r4;
    s32 var_r8;
    s32 var_r8_2;
    u16 var_r1;
    u16 var_r2_11;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_7;
    u16 var_r2_8;
    u16 var_r3;
    u16 var_r3_4;
    void **temp_r1;
    void **temp_r1_7;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r7;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_10;
    void *var_r2_2;
    void *var_r2_9;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r5;
    void *var_r5_2;

    sp6C = (s32) arg1;
    sp70 = (s32) arg2;
    sp74 = (s32) arg3;
    sp0.unk0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0;
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
    sp24.unk4 = 0U;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    temp_r4 = arg0 + 0x270;
    arg0->unk2A0 = func_0805E8F0(temp_r4);
    temp_r1 = arg0->unk270;
    (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk274 + (temp_r4->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r0 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r1_2 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0x284;
    temp_r0_3 = temp_r0_2 + 0xC;
    sp0.unk0 = (s32) arg0->unk284;
    sp0.unk4 = (s32) temp_r0_2->unk4;
    sp0.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_3 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_2->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_3->unkC = (s32) temp_r0_3->unkC;
    temp_r7 = arg0 + 0x318;
    sp0.unk6 = func_08007D4C(temp_r7, temp_r7->unk4);
    temp_r0_4 = arg0 + 0x320;
    sp0.unk4 = func_080074C0(temp_r0_4, temp_r0_4->unk4);
    sp0.unk8 = 2;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk2A0 << 0x1E) >= 0) {

    } else {
        var_r1 = 0;
        if (sp24 != 0) {
            var_r1 = sp0.unk28;
        }
        if (var_r1 == 0) {

        } else {
            temp_r4_2 = func_08008910(arg0);
            temp_r2 = func_08007D4C(temp_r7, temp_r7->unk4);
            var_r3 = 0;
            if (sp24 != 0) {
                var_r3 = sp0.unk28;
            }
            func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010000, var_r3);
            temp_r1_4 = temp_r4_2->unk4;
            if (temp_r1_4 != temp_r4_2->unkC) {
                if (temp_r1_4 != 0) {
                    temp_r1_4->unk0 = (s32) sp3C.unk0;
                    temp_r1_4->unk4 = (s32) sp3C.unk4;
                    temp_r1_4->unk8 = (s32) sp3C.unk8;
                    temp_r1_4->unkC = (s32) sp3C.unkC;
                }
                temp_r4_2->unk4 = (void *) (temp_r4_2->unk4 + 0x10);
            } else {
                sp78 = temp_r1_4;
                sp60 = 1;
                temp_r4_3 = (s32) (temp_r1_4 - temp_r4_2->unk0) >> 4;
                sp5C = temp_r4_3;
                var_r0 = &sp5C;
                if ((u32) temp_r4_3 < 1U) {
                    var_r0 = &sp60;
                }
                temp_r0_5 = temp_r4_3 + *var_r0;
                if (temp_r0_5 != 0) {
                    temp_r4_4 = temp_r0_5 * 0x10;
                    var_r0_2 = malloc(temp_r4_4);
                    var_r8 = temp_r4_4;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_r8);
                    }
                } else {
                    var_r0_2 = 0;
                    var_r8 = 0;
                }
                sp7C = var_r0_2;
                var_r2 = temp_r4_2->unk0;
                var_r3_2 = var_r0_2;
loop_22:
                if (var_r2 != sp78) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                    goto loop_22;
                }
                if (sp60 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp3C.unk0;
                        var_r3_2->unk4 = (s32) sp3C.unk4;
                        var_r3_2->unk8 = (s32) sp3C.unk8;
                        var_r3_2->unkC = (s32) sp3C.unkC;
                    }
                    var_r5 = var_r3_2 + 0x10;
                } else {
                    var_r3_3 = sp60;
                    var_r2_2 = var_r3_2;
                    if (var_r3_3 != 0) {
                        do {
                            if (var_r2_2 != 0) {
                                var_r2_2->unk0 = (s32) sp3C.unk0;
                                var_r2_2->unk4 = (s32) sp3C.unk4;
                                var_r2_2->unk8 = (s32) sp3C.unk8;
                                var_r2_2->unkC = (s32) sp3C.unkC;
                            }
                            var_r3_3 -= 1;
                            var_r2_2 += 0x10;
                        } while (var_r3_3 != 0);
                    }
                    var_r5 = var_r2_2;
                }
                temp_r2_2 = temp_r4_2->unk4;
                temp_r0_6 = temp_r4_2->unk0;
                var_r1_2 = temp_r0_6;
                if (temp_r0_6 != temp_r2_2) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_2);
                }
                if (temp_r0_6 != 0) {
                    free();
                }
                temp_r4_2->unk0 = sp7C;
                temp_r4_2->unk4 = var_r5;
                temp_r4_2->unkC = (void *) (sp7C + var_r8);
            }
        }
    }
    var_r2_3 = 0;
    do {
        temp_r4_5 = var_r2_3 + 1;
        if ((sp6C >> var_r2_3) & 1) {
            temp_r1_5 = (temp_r4_5 * 4) + &gUnk_08117838;
            sp0.unk0 = (s16) (temp_r1_5->unk0 + 8);
            sp0.unk2 = (s16) temp_r1_5->unk1;
            temp_r3 = func_08008920(arg0);
            var_r2_4 = 0;
            if (sp1C != 0) {
                var_r2_4 = sp0.unk20;
            }
            func_0805E99C(temp_r3, sp1C, var_r2_4, &sp0);
        }
        var_r2_3 = temp_r4_5;
    } while (var_r2_3 <= 6);
    if (0xF80 & sp6C) {
        sp0.unk0 = (s16) (gUnk_08117838.unk20 + 8);
        sp0.unk2 = (s16) gUnk_08117838.unk21;
        temp_r3_2 = func_08008920(arg0);
        var_r2_5 = 0;
        if (sp1C != 0) {
            var_r2_5 = sp0.unk20;
        }
        func_0805E99C(temp_r3_2, sp1C, var_r2_5, &sp0);
    }
    if (sp74 != 1) {
        var_r2_6 = 0;
        do {
            temp_r4_6 = var_r2_6 + 1;
            if ((sp70 >> var_r2_6) & 1) {
                temp_r1_6 = (temp_r4_6 * 4) + &gUnk_08117838;
                sp0.unk0 = (s16) (temp_r1_6->unk0 + 0x80);
                sp0.unk2 = (s16) temp_r1_6->unk1;
                temp_r3_3 = func_08008920(arg0);
                var_r2_7 = 0;
                if (sp1C != 0) {
                    var_r2_7 = sp0.unk20;
                }
                func_0805E99C(temp_r3_3, sp1C, var_r2_7, &sp0);
            }
            var_r2_6 = temp_r4_6;
        } while (var_r2_6 <= 7);
        if (sp74 != 1) {
            return;
        }
        goto block_56;
    }
block_56:
    temp_r4_7 = arg0 + 0x2A8;
    arg0->unk2D8 = func_0805E8F0(temp_r4_7);
    temp_r1_7 = arg0->unk2A8;
    (*temp_r1_7)->unk10(&sp3C, temp_r1_7, *(arg0->unk2AC + (temp_r4_7->unkC * 4)));
    memcpy(&sp3C, &sp3C, 0x20);
    temp_r4_8 = &sp3C + 0xC;
    sp1C.unk0 = sp3C.unk0;
    sp1C.unk4 = (s32) sp3C.unk4;
    sp1C.unk8 = (s32) sp3C.unk8;
    temp_r0_7 = &sp1C + 0xC;
    sp1C.unkC = (s32) sp3C.unkC;
    temp_r0_7->unk4 = (s32) temp_r4_8->unk4;
    temp_r0_7->unk8 = (s32) temp_r4_8->unk8;
    temp_r0_7->unkC = (s32) temp_r4_8->unkC;
    (temp_r0_7 + 0xC)->unk4 = (s32) (temp_r4_8 + 0xC)->unk4;
    temp_r0_8 = arg0 + 0x2BC;
    temp_r0_9 = temp_r0_8 + 0xC;
    sp0.unk0 = (s32) arg0->unk2BC;
    sp0.unk4 = (s32) temp_r0_8->unk4;
    sp0.unk8 = (s32) temp_r0_8->unk8;
    temp_r1_8 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_8->unkC;
    temp_r1_8->unk4 = (s32) temp_r0_9->unk4;
    temp_r1_8->unk8 = (s32) temp_r0_9->unk8;
    temp_r1_8->unkC = (s32) temp_r0_9->unkC;
    temp_r4_9 = arg0 + 0x328;
    sp0.unk6 = func_08007D4C(temp_r4_9, temp_r4_9->unk4);
    temp_r0_10 = arg0 + 0x320;
    sp0.unk4 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
    sp0.unk8 = 2;
    sp0.unk18 = 1;
    if ((s32) ((u8) arg0->unk2D8 << 0x1E) >= 0) {

    } else {
        var_r2_8 = 0;
        if (sp24 != 0) {
            var_r2_8 = sp24.unk4;
        }
        if (var_r2_8 == 0) {

        } else {
            temp_r5 = func_08008910(arg0);
            temp_r2_3 = func_08007D4C(temp_r4_9, temp_r4_9->unk4);
            var_r3_4 = 0;
            if (sp24 != 0) {
                var_r3_4 = sp0.unk28;
            }
            func_08008F0C(&sp3C, sp24, (temp_r2_3 << 5) + 0x06010000, var_r3_4);
            temp_r1_9 = temp_r5->unk4;
            if (temp_r1_9 != temp_r5->unkC) {
                if (temp_r1_9 != 0) {
                    temp_r1_9->unk0 = (s32) sp3C.unk0;
                    temp_r1_9->unk4 = (s32) sp3C.unk4;
                    temp_r1_9->unk8 = (s32) sp3C.unk8;
                    temp_r1_9->unkC = (s32) sp3C.unkC;
                }
                temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
            } else {
                sp78 = temp_r1_9;
                sp68 = 1;
                temp_r4_10 = (s32) (temp_r1_9 - temp_r5->unk0) >> 4;
                sp64 = temp_r4_10;
                var_r0_3 = &sp64;
                if ((u32) temp_r4_10 < 1U) {
                    var_r0_3 = &sp68;
                }
                temp_r0_11 = temp_r4_10 + *var_r0_3;
                if (temp_r0_11 != 0) {
                    temp_r4_11 = temp_r0_11 * 0x10;
                    var_r0_4 = malloc(temp_r4_11);
                    var_r8_2 = temp_r4_11;
                    if (var_r0_4 == 0) {
                        var_r0_4 = func_080D3BC0(var_r8_2);
                    }
                } else {
                    var_r0_4 = 0;
                    var_r8_2 = 0;
                }
                sp7C = var_r0_4;
                var_r2_9 = temp_r5->unk0;
                var_r3_5 = var_r0_4;
loop_78:
                if (var_r2_9 != sp78) {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) var_r2_9->unk0;
                        var_r3_5->unk4 = (s32) var_r2_9->unk4;
                        var_r3_5->unk8 = (s32) var_r2_9->unk8;
                        var_r3_5->unkC = (s32) var_r2_9->unkC;
                    }
                    var_r2_9 += 0x10;
                    var_r3_5 += 0x10;
                    goto loop_78;
                }
                if (sp68 == 1) {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) sp3C.unk0;
                        var_r3_5->unk4 = (s32) sp3C.unk4;
                        var_r3_5->unk8 = (s32) sp3C.unk8;
                        var_r3_5->unkC = (s32) sp3C.unkC;
                    }
                    var_r5_2 = var_r3_5 + 0x10;
                } else {
                    var_r3_6 = sp68;
                    var_r2_10 = var_r3_5;
                    if (var_r3_6 != 0) {
                        do {
                            if (var_r2_10 != 0) {
                                var_r2_10->unk0 = (s32) sp3C.unk0;
                                var_r2_10->unk4 = (s32) sp3C.unk4;
                                var_r2_10->unk8 = (s32) sp3C.unk8;
                                var_r2_10->unkC = (s32) sp3C.unkC;
                            }
                            var_r3_6 -= 1;
                            var_r2_10 += 0x10;
                        } while (var_r3_6 != 0);
                    }
                    var_r5_2 = var_r2_10;
                }
                temp_r2_4 = temp_r5->unk4;
                temp_r0_12 = temp_r5->unk0;
                var_r1_3 = temp_r0_12;
                if (temp_r0_12 != temp_r2_4) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_4);
                }
                if (temp_r0_12 != 0) {
                    free();
                }
                temp_r5->unk0 = sp7C;
                temp_r5->unk4 = var_r5_2;
                temp_r5->unkC = (void *) (sp7C + var_r8_2);
            }
        }
    }
    var_r4 = 0;
    do {
        if ((sp6C >> (var_r4 + 7)) & 1) {
            sp0.unk0 = 0x90;
            sp0.unk2 = (s16) ((var_r4 * 0x10) + 0x10);
            temp_r3_4 = func_08008920(arg0);
            var_r2_11 = 0;
            if (sp1C != 0) {
                var_r2_11 = sp0.unk20;
            }
            func_0805E99C(temp_r3_4, sp1C, var_r2_11, &sp0);
        }
        var_r4 += 1;
    } while (var_r4 <= 4);
}
