s32 free();                                           /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
void *func_08008910(void *, s32);                   /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(s32, s32, u16, s32);                /* extern */
u16 func_080BB890(void *, s32, s32);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[1988];
    s32 unk7DC;
    u8 _pad7E0[12];
    s32 unk7EC;
    u8 _pad7F0[156];
    s32 unk88C;
    u8 _pad890[4];
    s32 unk894;
    u8 _pad898[4];
    s32 unk89C;
    u8 _pad8A0[44];
    s32 unk8CC;
    s32 unk8D0;
    s32 unk8D4;
    u8 _pad8D8[4];
    s32 unk8DC;
    u8 _pad8E0[4];
    s32 unk8E4;
    u8 _pad8E8[616];
    s32 unkB50;
    s32 unkB54;
} GenObj;
void func_080BB8EC(GenObj *arg0, s32 arg1) {
GenObj sp0;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    GenObj *sp6C;
    s32 sp70;
    GenObj *sp74;
    GenObj *sp78;
    void *sp7C;
    void *sp80;
    s32 *temp_r5_3;
    s32 *temp_r6_2;
    s32 *var_r0;
    s32 *var_r0_11;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r0_9;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_20;
    s32 temp_r0_23;
    s32 temp_r0_25;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1_14;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r2_3;
    s32 temp_r2_6;
    s32 temp_r2_9;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_5;
    s32 temp_r6_4;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 var_r3_12;
    s32 var_r3_15;
    s32 var_r3_18;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r3_9;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    u16 var_r2_10;
    u16 var_r2_15;
    u16 var_r2_5;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_4;
    u16 var_r3_7;
    void **temp_r1;
    void **temp_r1_13;
    void **temp_r1_8;
    void *temp_r0;
    void *temp_r0_10;
    GenObj *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_16;
    GenObj *temp_r0_17;
    void *temp_r0_18;
    GenObj *temp_r0_19;
    void *temp_r0_21;
    GenObj *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_9;
    GenObj *temp_r1_10;
    void *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    void *temp_r1_2;
    void *temp_r1_3;
    GenObj *temp_r1_4;
    void *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r2;
    void *temp_r2_10;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r3;
    void *temp_r4_12;
    GenObj *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_5;
    GenObj *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5_4;
    void *temp_r5_6;
    GenObj *temp_r5_7;
    GenObj *temp_r6;
    GenObj *temp_r6_3;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    GenObj *var_r2;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3_11;
    GenObj *var_r3_14;
    GenObj *var_r3_17;
    GenObj *var_r3_2;
    GenObj *var_r3_5;
    GenObj *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;

    sp50 = arg1;
    sp54 = 0;
    sp68 = 0;
    sp6C = (GenObj *)((u8 *)arg0 + 0x73C);
    sp70 = sp50;
    sp74 = (GenObj *)((u8 *)arg0 + 0x7B4);
    sp78 = (GenObj *)((u8 *)arg0 + 0x7DC);
loop_1:
    if ((s32) (func_0805E8F0(sp74->unk0) << 0x1E) >= 0) {

    } else {
        temp_r0 = sp74->unk0;
        temp_r1 = temp_r0->unk0;
        (*temp_r1)->unk10(&sp0, temp_r1, *(temp_r0->unk4 + (temp_r0->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_2 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp78->unk0 = (s32) sp0;
        sp78->unk4 = (s32) sp0.unk4;
        sp78->unk8 = (s32) sp0.unk8;
        temp_r1_2 = (GenObj *)((u8 *)sp78 + 0xC);
        sp78->unkC = (s32) sp0.unkC;
        temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
        temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
        temp_r1_3 = temp_r1_2 + 0xC;
        temp_r1_2->unkC = (s32) temp_r0_2->unkC;
        temp_r1_3->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_2 + 0xC))->unk4;
        temp_r2 = func_08008910(arg0, temp_r1_3 + 8);
        temp_r0_3 = sp78->unk8;
        var_r3 = 0;
        if (temp_r0_3 != 0) {
            var_r3 = (u16) sp78->unkC;
        }
        func_08008F0C(&sp0, temp_r0_3, (sp70 << 5) + 0x06010000, var_r3);
        temp_r1_4 = temp_r2->unk4;
        if (temp_r1_4 != temp_r2->unkC) {
            if (temp_r1_4 != 0) {
                temp_r1_4->unk0 = (s32) sp0;
                temp_r1_4->unk4 = (s32) sp0.unk4;
                temp_r1_4->unk8 = (s32) sp0.unk8;
                temp_r1_4->unkC = (s32) sp0.unkC;
            }
            temp_r2->unk4 = (void *) (temp_r2->unk4 + 0x10);
        } else {
            sp7C = temp_r1_4;
            sp24 = 1;
            temp_r4 = (s32) (temp_r1_4 - temp_r2->unk0) >> 4;
            sp20 = temp_r4;
            var_r0 = &sp20;
            if ((u32) temp_r4 < 1U) {
                var_r0 = &sp24;
            }
            temp_r0_4 = temp_r4 + *var_r0;
            if (temp_r0_4 != 0) {
                temp_r4_2 = temp_r0_4 * 0x10;
                var_r0_2 = malloc(temp_r4_2);
                var_sb = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            sp80 = var_r0_2;
            var_r2 = temp_r2->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2 != sp7C) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != sp7C);
            }
            if (sp24 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp0;
                    var_r3_2->unk4 = (s32) sp0.unk4;
                    var_r3_2->unk8 = (s32) sp0.unk8;
                    var_r3_2->unkC = (s32) sp0.unkC;
                }
                var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_r3_3 = sp24;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp0;
                            var_r2_2->unk4 = (s32) sp0.unk4;
                            var_r2_2->unk8 = (s32) sp0.unk8;
                            var_r2_2->unkC = (s32) sp0.unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r2_2 = temp_r2->unk4;
            temp_r0_5 = temp_r2->unk0;
            var_r1 = temp_r0_5;
            if (temp_r0_5 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_5 != 0) {
                free();
            }
            temp_r2->unk0 = sp80;
            temp_r2->unk4 = var_r5;
            temp_r2->unkC = (void *) (sp80 + var_sb);
        }
        temp_r6 = func_08008910(arg0);
        temp_r5 = (sp68 + arg0)->unk7EC;
        temp_r2_3 = func_080074C0(sp6C, sp6C->unk4);
        temp_r1_5 = sp68 + arg0;
        var_r3_4 = 0;
        if (temp_r1_5->unk7EC != 0) {
            var_r3_4 = ((GenObj *)((u8 *)temp_r1_5 + 0x7EC))->unk4;
        }
        func_08008F0C(&sp0, temp_r5, (temp_r2_3 << 5) + 0x05000200, var_r3_4);
        temp_r1_6 = temp_r6->unk4;
        if (temp_r1_6 != temp_r6->unkC) {
            if (temp_r1_6 != 0) {
                temp_r1_6->unk0 = (s32) sp0;
                temp_r1_6->unk4 = (s32) sp0.unk4;
                temp_r1_6->unk8 = (s32) sp0.unk8;
                temp_r1_6->unkC = (s32) sp0.unkC;
            }
            temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        } else {
            sp7C = temp_r1_6;
            sp2C = 1;
            temp_r4_3 = (s32) (temp_r1_6 - temp_r6->unk0) >> 4;
            sp28 = temp_r4_3;
            var_r0_3 = &sp28;
            if ((u32) temp_r4_3 < 1U) {
                var_r0_3 = &sp2C;
            }
            temp_r0_6 = temp_r4_3 + *var_r0_3;
            if (temp_r0_6 != 0) {
                temp_r4_4 = temp_r0_6 * 0x10;
                var_r0_4 = malloc(temp_r4_4);
                var_sb_2 = temp_r4_4;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            sp80 = var_r0_4;
            var_r2_3 = temp_r6->unk0;
            var_r3_5 = var_r0_4;
            if (var_r2_3 != sp7C) {
                do {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) var_r2_3->unk0;
                        var_r3_5->unk4 = (s32) var_r2_3->unk4;
                        var_r3_5->unk8 = (s32) var_r2_3->unk8;
                        var_r3_5->unkC = (s32) var_r2_3->unkC;
                    }
                    var_r2_3 += 0x10;
                    var_r3_5 += 0x10;
                } while (var_r2_3 != sp7C);
            }
            if (sp2C == 1) {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) sp0;
                    var_r3_5->unk4 = (s32) sp0.unk4;
                    var_r3_5->unk8 = (s32) sp0.unk8;
                    var_r3_5->unkC = (s32) sp0.unkC;
                }
                var_r5_2 = (GenObj *)((u8 *)var_r3_5 + 0x10);
            } else {
                var_r3_6 = sp2C;
                var_r2_4 = var_r3_5;
                if (var_r3_6 != 0) {
                    do {
                        if (var_r2_4 != 0) {
                            var_r2_4->unk0 = (s32) sp0;
                            var_r2_4->unk4 = (s32) sp0.unk4;
                            var_r2_4->unk8 = (s32) sp0.unk8;
                            var_r2_4->unkC = (s32) sp0.unkC;
                        }
                        var_r3_6 -= 1;
                        var_r2_4 += 0x10;
                    } while (var_r3_6 != 0);
                }
                var_r5_2 = var_r2_4;
            }
            temp_r2_4 = temp_r6->unk4;
            temp_r0_7 = temp_r6->unk0;
            var_r1_2 = temp_r0_7;
            if (temp_r0_7 != temp_r2_4) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_4);
            }
            if (temp_r0_7 != 0) {
                free();
            }
            temp_r6->unk0 = sp80;
            temp_r6->unk4 = var_r5_2;
            temp_r6->unkC = (void *) (sp80 + var_sb_2);
        }
    }
    temp_r5_2 = func_08008920(arg0);
    temp_r3 = sp68 + arg0;
    var_r2_5 = 0;
    if (temp_r3->unk7DC != 0) {
        var_r2_5 = ((GenObj *)((u8 *)temp_r3 + 0x7DC))->unk4;
    }
    func_0805E99C(temp_r5_2, (sp68 + arg0)->unk7DC, var_r2_5, sp74->unk14);
    sp68 += 0x20;
    sp6C += 8;
    sp70 += 0xF;
    sp74 += 4;
    sp78 += 0x20;
    temp_r7 = sp54 + 1;
    sp54 = temp_r7;
    if (temp_r7 <= 4) {
        goto loop_1;
    }
    sp54 = 0;
loop_68:
    temp_r1_7 = sp54 * 4;
    temp_r6_2 = (GenObj *)((u8 *)arg0 + 0xB48) + temp_r1_7;
    temp_r5_3 = (GenObj *)((u8 *)arg0 + 0xB40) + temp_r1_7;
    sp5C = temp_r1_7;
    if (*temp_r6_2 != *temp_r5_3) {
        temp_r4_5 = (temp_r1_7 + arg0)->unk87C;
        func_0805E860(temp_r4_5, func_080BB890(arg0, 1));
        *temp_r6_2 = *temp_r5_3;
    }
    temp_r0_8 = func_0805E8F0((sp5C + arg0)->unk87C) << 0x1E;
    temp_r7_2 = sp54 << 5;
    sp64 = temp_r7_2;
    sp58 = sp54 + 1;
    if (temp_r0_8 >= 0) {

    } else {
        temp_r5_4 = temp_r7_2 + arg0;
        temp_r4_6 = (GenObj *)((u8 *)temp_r5_4 + 0x88C);
        temp_r0_9 = (sp5C + arg0)->unk87C;
        temp_r1_8 = temp_r0_9->unk0;
        (*temp_r1_8)->unk10(&sp0, temp_r1_8, *(temp_r0_9->unk4 + (temp_r0_9->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_10 = &(GenObj *)((u8 *)sp0 + 0xC);
        temp_r5_4->unk88C = (s32) sp0;
        temp_r4_6->unk4 = (s32) sp0.unk4;
        temp_r4_6->unk8 = (s32) sp0.unk8;
        temp_r4_7 = (GenObj *)((u8 *)temp_r4_6 + 0xC);
        temp_r4_6->unkC = (s32) sp0.unkC;
        temp_r4_7->unk4 = (s32) temp_r0_10->unk4;
        temp_r4_7->unk8 = (s32) temp_r0_10->unk8;
        temp_r4_7->unkC = (s32) temp_r0_10->unkC;
        (temp_r4_7 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_10 + 0xC))->unk4;
        temp_r0_11 = func_08008910(arg0);
        temp_r1_9 = temp_r5_4->unk894;
        var_r3_7 = 0;
        if (temp_r1_9 != 0) {
            var_r3_7 = ((GenObj *)((u8 *)temp_r5_4 + 0x894))->unk4;
        }
        func_08008F0C(&sp0, temp_r1_9, (((sp54 * 0xF) + sp50) << 5) + 0x06010960, var_r3_7);
        temp_r1_10 = temp_r0_11->unk4;
        if (temp_r1_10 != temp_r0_11->unkC) {
            if (temp_r1_10 != 0) {
                temp_r1_10->unk0 = (s32) sp0;
                temp_r1_10->unk4 = (s32) sp0.unk4;
                temp_r1_10->unk8 = (s32) sp0.unk8;
                temp_r1_10->unkC = (s32) sp0.unkC;
            }
            temp_r0_11->unk4 = (void *) (temp_r0_11->unk4 + 0x10);
            sp60 = sp54 * 8;
        } else {
            sp7C = temp_r1_10;
            sp34 = 1;
            temp_r4_8 = (s32) (temp_r1_10 - temp_r0_11->unk0) >> 4;
            sp30 = temp_r4_8;
            var_r0_5 = &sp30;
            if ((u32) temp_r4_8 < 1U) {
                var_r0_5 = &sp34;
            }
            temp_r0_12 = temp_r4_8 + *var_r0_5;
            if (temp_r0_12 != 0) {
                temp_r4_9 = temp_r0_12 * 0x10;
                var_r0_6 = malloc(temp_r4_9);
                var_sb_3 = temp_r4_9;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_6 = 0;
                var_sb_3 = 0;
            }
            sp80 = var_r0_6;
            var_r2_6 = temp_r0_11->unk0;
            var_r3_8 = var_r0_6;
            sp60 = sp54 * 8;
            sp58 = sp54 + 1;
loop_88:
            if (var_r2_6 != sp7C) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_6->unk0;
                    var_r3_8->unk4 = (s32) var_r2_6->unk4;
                    var_r3_8->unk8 = (s32) var_r2_6->unk8;
                    var_r3_8->unkC = (s32) var_r2_6->unkC;
                }
                var_r2_6 += 0x10;
                var_r3_8 += 0x10;
                goto loop_88;
            }
            if (sp34 == 1) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) sp0;
                    var_r3_8->unk4 = (s32) sp0.unk4;
                    var_r3_8->unk8 = (s32) sp0.unk8;
                    var_r3_8->unkC = (s32) sp0.unkC;
                }
                var_r5_3 = (GenObj *)((u8 *)var_r3_8 + 0x10);
            } else {
                var_r3_9 = sp34;
                var_r2_7 = var_r3_8;
                if (var_r3_9 != 0) {
                    do {
                        if (var_r2_7 != 0) {
                            var_r2_7->unk0 = (s32) sp0;
                            var_r2_7->unk4 = (s32) sp0.unk4;
                            var_r2_7->unk8 = (s32) sp0.unk8;
                            var_r2_7->unkC = (s32) sp0.unkC;
                        }
                        var_r3_9 -= 1;
                        var_r2_7 += 0x10;
                    } while (var_r3_9 != 0);
                }
                var_r5_3 = var_r2_7;
            }
            temp_r2_5 = temp_r0_11->unk4;
            temp_r0_13 = temp_r0_11->unk0;
            var_r1_3 = temp_r0_13;
            if (temp_r0_13 != temp_r2_5) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2_5);
            }
            if (temp_r0_13 != 0) {
                free();
            }
            temp_r0_11->unk0 = sp80;
            temp_r0_11->unk4 = var_r5_3;
            temp_r0_11->unkC = (void *) (sp80 + var_sb_3);
        }
        temp_r6_3 = func_08008910(arg0);
        temp_r5_5 = (sp64 + arg0)->unk89C;
        temp_r0_14 = sp60 + (GenObj *)((u8 *)arg0 + 0x764);
        temp_r2_6 = func_080074C0(temp_r0_14, temp_r0_14->unk4);
        temp_r1_11 = sp64 + arg0;
        var_r3_10 = 0;
        if (temp_r1_11->unk89C != 0) {
            var_r3_10 = ((GenObj *)((u8 *)temp_r1_11 + 0x89C))->unk4;
        }
        func_08008F0C(&sp0, temp_r5_5, (temp_r2_6 << 5) + 0x05000200, var_r3_10);
        temp_r1_12 = temp_r6_3->unk4;
        if (temp_r1_12 != temp_r6_3->unkC) {
            if (temp_r1_12 != 0) {
                temp_r1_12->unk0 = (s32) sp0;
                temp_r1_12->unk4 = (s32) sp0.unk4;
                temp_r1_12->unk8 = (s32) sp0.unk8;
                temp_r1_12->unkC = (s32) sp0.unkC;
            }
            temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
        } else {
            sp7C = temp_r1_12;
            sp3C = 1;
            temp_r4_10 = (s32) (temp_r1_12 - temp_r6_3->unk0) >> 4;
            sp38 = temp_r4_10;
            var_r0_7 = &sp38;
            if ((u32) temp_r4_10 < 1U) {
                var_r0_7 = &sp3C;
            }
            temp_r0_15 = temp_r4_10 + *var_r0_7;
            if (temp_r0_15 != 0) {
                temp_r4_11 = temp_r0_15 * 0x10;
                var_r0_8 = malloc(temp_r4_11);
                var_sb_4 = temp_r4_11;
                if (var_r0_8 == 0) {
                    var_r0_8 = func_080D3BC0(var_sb_4);
                }
            } else {
                var_r0_8 = 0;
                var_sb_4 = 0;
            }
            sp80 = var_r0_8;
            var_r2_8 = temp_r6_3->unk0;
            var_r3_11 = var_r0_8;
            if (var_r2_8 != sp7C) {
                do {
                    if (var_r3_11 != 0) {
                        var_r3_11->unk0 = (s32) var_r2_8->unk0;
                        var_r3_11->unk4 = (s32) var_r2_8->unk4;
                        var_r3_11->unk8 = (s32) var_r2_8->unk8;
                        var_r3_11->unkC = (s32) var_r2_8->unkC;
                    }
                    var_r2_8 += 0x10;
                    var_r3_11 += 0x10;
                } while (var_r2_8 != sp7C);
            }
            if (sp3C == 1) {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) sp0;
                    var_r3_11->unk4 = (s32) sp0.unk4;
                    var_r3_11->unk8 = (s32) sp0.unk8;
                    var_r3_11->unkC = (s32) sp0.unkC;
                }
                var_r5_4 = (GenObj *)((u8 *)var_r3_11 + 0x10);
            } else {
                var_r3_12 = sp3C;
                var_r2_9 = var_r3_11;
                if (var_r3_12 != 0) {
                    do {
                        if (var_r2_9 != 0) {
                            var_r2_9->unk0 = (s32) sp0;
                            var_r2_9->unk4 = (s32) sp0.unk4;
                            var_r2_9->unk8 = (s32) sp0.unk8;
                            var_r2_9->unkC = (s32) sp0.unkC;
                        }
                        var_r3_12 -= 1;
                        var_r2_9 += 0x10;
                    } while (var_r3_12 != 0);
                }
                var_r5_4 = var_r2_9;
            }
            temp_r2_7 = temp_r6_3->unk4;
            temp_r0_16 = temp_r6_3->unk0;
            var_r1_4 = temp_r0_16;
            if (temp_r0_16 != temp_r2_7) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_7);
            }
            if (temp_r0_16 != 0) {
                free();
            }
            temp_r6_3->unk0 = sp80;
            temp_r6_3->unk4 = var_r5_4;
            temp_r6_3->unkC = (void *) (sp80 + var_sb_4);
        }
    }
    temp_r6_4 = func_08008920(arg0);
    temp_r5_6 = sp64 + arg0;
    var_r2_10 = 0;
    if (temp_r5_6->unk88C != 0) {
        var_r2_10 = ((GenObj *)((u8 *)temp_r5_6 + 0x88C))->unk4;
    }
    func_0805E99C(temp_r6_4, (sp64 + arg0)->unk88C, var_r2_10, (sp5C + arg0)->unk884);
    sp54 = sp58;
    if (sp58 <= 1) {
        goto loop_68;
    }
    if (arg0->unkB54 != arg0->unkB50) {
        temp_r4_12 = arg0->unk8CC;
        func_0805E860(temp_r4_12, func_080BB890(arg0, 2, 0));
        arg0->unkB54 = (s32) arg0->unkB50;
    }
    if ((s32) (func_0805E8F0(arg0->unk8CC) << 0x1E) >= 0) {

    } else {
        temp_r4_13 = (GenObj *)((u8 *)arg0 + 0x8D4);
        temp_r0_17 = arg0->unk8CC;
        temp_r1_13 = temp_r0_17->unk0;
        (*temp_r1_13)->unk10(&sp0, temp_r1_13, *(temp_r0_17->unk4 + (temp_r0_17->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_18 = &(GenObj *)((u8 *)sp0 + 0xC);
        arg0->unk8D4 = (s32) sp0;
        temp_r4_13->unk4 = (s32) sp0.unk4;
        temp_r4_13->unk8 = (s32) sp0.unk8;
        temp_r4_14 = (GenObj *)((u8 *)temp_r4_13 + 0xC);
        temp_r4_13->unkC = (s32) sp0.unkC;
        temp_r4_14->unk4 = (s32) temp_r0_18->unk4;
        temp_r4_14->unk8 = (s32) temp_r0_18->unk8;
        temp_r4_14->unkC = (s32) temp_r0_18->unkC;
        (temp_r4_14 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_18 + 0xC))->unk4;
        temp_r0_19 = func_08008910(arg0);
        temp_r1_14 = arg0->unk8DC;
        var_r3_13 = 0;
        if (temp_r1_14 != 0) {
            var_r3_13 = ((GenObj *)((u8 *)arg0 + 0x8DC))->unk4;
        }
        func_08008F0C(&sp0, temp_r1_14, (sp50 << 5) + 0x06010D20, var_r3_13);
        temp_r1_15 = temp_r0_19->unk4;
        if (temp_r1_15 != temp_r0_19->unkC) {
            if (temp_r1_15 != 0) {
                temp_r1_15->unk0 = (s32) sp0;
                temp_r1_15->unk4 = (s32) sp0.unk4;
                temp_r1_15->unk8 = (s32) sp0.unk8;
                temp_r1_15->unkC = (s32) sp0.unkC;
            }
            temp_r0_19->unk4 = (void *) (temp_r0_19->unk4 + 0x10);
        } else {
            sp7C = temp_r1_15;
            sp44 = 1;
            temp_r4_15 = (s32) (temp_r1_15 - temp_r0_19->unk0) >> 4;
            sp40 = temp_r4_15;
            var_r0_9 = &sp40;
            if ((u32) temp_r4_15 < 1U) {
                var_r0_9 = &sp44;
            }
            temp_r0_20 = temp_r4_15 + *var_r0_9;
            if (temp_r0_20 != 0) {
                temp_r4_16 = temp_r0_20 * 0x10;
                var_r0_10 = malloc(temp_r4_16);
                var_sb_5 = temp_r4_16;
                if (var_r0_10 == 0) {
                    var_r0_10 = func_080D3BC0(var_sb_5);
                }
            } else {
                var_r0_10 = 0;
                var_sb_5 = 0;
            }
            sp80 = var_r0_10;
            var_r2_11 = temp_r0_19->unk0;
            var_r3_14 = var_r0_10;
            if (var_r2_11 != sp7C) {
                do {
                    if (var_r3_14 != 0) {
                        var_r3_14->unk0 = (s32) var_r2_11->unk0;
                        var_r3_14->unk4 = (s32) var_r2_11->unk4;
                        var_r3_14->unk8 = (s32) var_r2_11->unk8;
                        var_r3_14->unkC = (s32) var_r2_11->unkC;
                    }
                    var_r2_11 += 0x10;
                    var_r3_14 += 0x10;
                } while (var_r2_11 != sp7C);
            }
            if (sp44 == 1) {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (s32) sp0;
                    var_r3_14->unk4 = (s32) sp0.unk4;
                    var_r3_14->unk8 = (s32) sp0.unk8;
                    var_r3_14->unkC = (s32) sp0.unkC;
                }
                var_r5_5 = (GenObj *)((u8 *)var_r3_14 + 0x10);
            } else {
                var_r3_15 = sp44;
                var_r2_12 = var_r3_14;
                if (var_r3_15 != 0) {
                    do {
                        if (var_r2_12 != 0) {
                            var_r2_12->unk0 = (s32) sp0;
                            var_r2_12->unk4 = (s32) sp0.unk4;
                            var_r2_12->unk8 = (s32) sp0.unk8;
                            var_r2_12->unkC = (s32) sp0.unkC;
                        }
                        var_r3_15 -= 1;
                        var_r2_12 += 0x10;
                    } while (var_r3_15 != 0);
                }
                var_r5_5 = var_r2_12;
            }
            temp_r2_8 = temp_r0_19->unk4;
            temp_r0_21 = temp_r0_19->unk0;
            var_r1_5 = temp_r0_21;
            if (temp_r0_21 != temp_r2_8) {
                do {
                    var_r1_5 += 0x10;
                } while (var_r1_5 != temp_r2_8);
            }
            if (temp_r0_21 != 0) {
                free();
            }
            temp_r0_19->unk0 = sp80;
            temp_r0_19->unk4 = var_r5_5;
            temp_r0_19->unkC = (void *) (sp80 + var_sb_5);
        }
        temp_r5_7 = func_08008910(arg0);
        temp_r7_3 = arg0->unk8E4;
        temp_r0_22 = (GenObj *)((u8 *)arg0 + 0x774);
        temp_r2_9 = func_080074C0(temp_r0_22, temp_r0_22->unk4);
        var_r3_16 = 0;
        if (arg0->unk8E4 != 0) {
            var_r3_16 = ((GenObj *)((u8 *)arg0 + 0x8E4))->unk4;
        }
        func_08008F0C(&sp0, temp_r7_3, (temp_r2_9 << 5) + 0x05000200, var_r3_16);
        temp_r1_16 = temp_r5_7->unk4;
        if (temp_r1_16 != temp_r5_7->unkC) {
            if (temp_r1_16 != 0) {
                temp_r1_16->unk0 = (s32) sp0;
                temp_r1_16->unk4 = (s32) sp0.unk4;
                temp_r1_16->unk8 = (s32) sp0.unk8;
                temp_r1_16->unkC = (s32) sp0.unkC;
            }
            temp_r5_7->unk4 = (void *) (temp_r5_7->unk4 + 0x10);
        } else {
            sp7C = temp_r1_16;
            sp4C = 1;
            temp_r4_17 = (s32) (temp_r1_16 - temp_r5_7->unk0) >> 4;
            sp48 = temp_r4_17;
            var_r0_11 = &sp48;
            if ((u32) temp_r4_17 < 1U) {
                var_r0_11 = &sp4C;
            }
            temp_r0_23 = temp_r4_17 + *var_r0_11;
            if (temp_r0_23 != 0) {
                temp_r4_18 = temp_r0_23 * 0x10;
                var_r0_12 = malloc(temp_r4_18);
                var_sb_6 = temp_r4_18;
                if (var_r0_12 == 0) {
                    var_r0_12 = func_080D3BC0(var_sb_6);
                }
            } else {
                var_r0_12 = 0;
                var_sb_6 = 0;
            }
            sp80 = var_r0_12;
            var_r2_13 = temp_r5_7->unk0;
            var_r3_17 = var_r0_12;
            if (var_r2_13 != sp7C) {
                do {
                    if (var_r3_17 != 0) {
                        var_r3_17->unk0 = (s32) var_r2_13->unk0;
                        var_r3_17->unk4 = (s32) var_r2_13->unk4;
                        var_r3_17->unk8 = (s32) var_r2_13->unk8;
                        var_r3_17->unkC = (s32) var_r2_13->unkC;
                    }
                    var_r2_13 += 0x10;
                    var_r3_17 += 0x10;
                } while (var_r2_13 != sp7C);
            }
            if (sp4C == 1) {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) sp0;
                    var_r3_17->unk4 = (s32) sp0.unk4;
                    var_r3_17->unk8 = (s32) sp0.unk8;
                    var_r3_17->unkC = (s32) sp0.unkC;
                }
                var_r5_6 = (GenObj *)((u8 *)var_r3_17 + 0x10);
            } else {
                var_r3_18 = sp4C;
                var_r2_14 = var_r3_17;
                if (var_r3_18 != 0) {
                    do {
                        if (var_r2_14 != 0) {
                            var_r2_14->unk0 = (s32) sp0;
                            var_r2_14->unk4 = (s32) sp0.unk4;
                            var_r2_14->unk8 = (s32) sp0.unk8;
                            var_r2_14->unkC = (s32) sp0.unkC;
                        }
                        var_r3_18 -= 1;
                        var_r2_14 += 0x10;
                    } while (var_r3_18 != 0);
                }
                var_r5_6 = var_r2_14;
            }
            temp_r2_10 = temp_r5_7->unk4;
            temp_r0_24 = temp_r5_7->unk0;
            var_r1_6 = temp_r0_24;
            if (temp_r0_24 != temp_r2_10) {
                do {
                    var_r1_6 += 0x10;
                } while (var_r1_6 != temp_r2_10);
            }
            if (temp_r0_24 != 0) {
                free();
            }
            temp_r5_7->unk0 = sp80;
            temp_r5_7->unk4 = var_r5_6;
            temp_r5_7->unkC = (void *) (sp80 + var_sb_6);
        }
    }
    temp_r4_19 = func_08008920(arg0);
    temp_r0_25 = arg0->unk8D4;
    var_r2_15 = 0;
    if (temp_r0_25 != 0) {
        var_r2_15 = ((GenObj *)((u8 *)arg0 + 0x8D4))->unk4;
    }
    func_0805E99C(temp_r4_19, temp_r0_25, var_r2_15, arg0->unk8D0);
}
