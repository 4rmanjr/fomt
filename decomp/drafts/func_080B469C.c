s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_08007128(void **);                           /* extern */
s32 func_08007184(void **, s32);                      /* extern */
s32 func_0800736C(void **);                         /* extern */
s32 func_080073E0(void **, s32);                      /* extern */
s32 func_0800745C(void **, s32);                    /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s32 func_0800770C(s32 *);                             /* extern */
s32 func_08007714(s32 *, s32);                        /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007D4C(s32 *);                             /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008918(void *);                          /* extern */
s32 func_08008920(void *);                          /* extern */
void *func_08008940(void *);                        /* extern */
? *func_0800894C(void *);                           /* extern */
s32 func_08008F0C(void **, s32, s32, u16);            /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08050CC0(void *, s32, s32, s32);           /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_08050D34(s32);                             /* extern */
u32 func_08050D3C(s32, s32, s32, s32);              /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D74(s32);                               /* extern */
s32 func_08050D8C(s32, ? *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 func_08050DE4(s32);                               /* extern */
s32 func_08050DF0(s32);                             /* extern */
s32 func_08050E30(s32, ? *, ? *, ? *);                /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
s32 func_0805E824(void *, s32, s32, s32);           /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E8F0(s32);                             /* extern */
s32 func_0805E99C(s32, s32, u16, s32);                /* extern */
s32 func_080B55D0(void *);                            /* extern */
s32 func_080B8EBC(void *, u8, s32);                   /* extern */
s32 func_080B9AC0(void *);                            /* extern */
s32 func_080BA2C4(void *, s32);                     /* extern */
s32 func_080BAC9C(void *, s32);                       /* extern */
s32 func_080BB8EC(void *, s32);                       /* extern */
s32 func_080BC288(void *, void **);                   /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(void **, void **, s32);                    /* extern */
extern ? gUnk_081079C4;
extern ? gUnk_081079E0;
extern ? gUnk_08107A30;
extern ? gUnk_08107A4C;
extern ? gUnk_08107A58;
extern ? gUnk_08107A68;
extern ? gUnk_08107A80;
extern ? gUnk_08107A9C;
extern ? gUnk_08107AB4;

void func_080B469C(void *arg0) {
    void *sp0;
    ? *sp4;
    s32 *sp8;
s32 spC;
    s32 sp10;
s32 sp14;
    s32 sp18;
s32 sp1C;
    s32 sp20;
s32 sp24;
s32 sp2C;
    void *sp34;
    s32 sp38;
    void *sp3C;
    s32 sp40;
s32 sp44;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    u32 sp94;
    s32 sp98;
    void **sp9C;
    u32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    void *spB4;
    ? *temp_r0_15;
    s16 temp_r2_2;
    s16 temp_r2_6;
    s16 temp_sb;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_13;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_23;
    s32 temp_r0_24;
    s32 temp_r0_27;
    s32 temp_r0_29;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1_12;
    s32 temp_r1_3;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r2_4;
    s32 temp_r3;
    s32 temp_r4_11;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_7;
    s32 temp_r6_2;
    s32 temp_r6_4;
    s32 temp_r6_6;
    s32 temp_r8_2;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    u16 var_r2_10;
    u16 var_r2_11;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r3_2;
    u16 var_r3_3;
    u16 var_r3_4;
    u32 temp_r0_16;
    u8 temp_r4_10;
    u8 var_sl;
    void **temp_r1_2;
    void **temp_r1_8;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_14;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_28;
    void *temp_r0_30;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_6;
    void *temp_r5_8;
    void *temp_r6;
    void *temp_r6_3;
    void *temp_r6_5;
    void *temp_r8;
    void *var_ip;
    void *var_ip_2;
    void *var_ip_3;
    void *var_ip_4;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;

    temp_r0 = arg0->unk718;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_08050D0C(temp_r0, 3);
    }
    arg0->unk718 = 0;
    temp_r5 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    sp0 = 0;
    sp4 = &spC;
    sp8 = &sp10;
    temp_r0_2 = func_08050CC0(temp_r5, 0, 0xF, 0);
    temp_r0_3 = arg0->unk718;
    if ((temp_r0_2 != temp_r0_3) && (temp_r0_3 != 0)) {
        func_08050D0C(temp_r0_3, 3);
    }
    arg0->unk718 = temp_r0_2;
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08050E50(arg0->unk718, 0);
    func_08007874(&spC);
    sp10 = 0;
    func_08007874(&sp14);
    sp14.unk4 = 0;
    func_08007874(&sp1C);
    sp1C.unk4 = 0;
    func_08007874(&sp24);
    sp24.unk4 = 0;
    func_08007874(&sp2C);
    sp2C.unk4 = 0;
    func_08007C28(&spC, sp10);
    sp10 = func_08007B54(&spC, 3);
    sp84 = func_08007D4C(&spC);
    func_08007C28(&sp14, sp18);
    sp18 = func_08007B54(&sp14, 7);
    sp88 = func_08007D4C(&sp14);
    func_08007C28(&sp1C, sp20);
    sp20 = func_08007B54(&sp1C, 3);
    sp8C = func_08007D4C(&sp1C);
    func_08007128(&sp34);
    sp38 = func_0800736C(&sp34);
    sp90 = 0x79;
    arg0->unkB33 = 0U;
    arg0->unkB34 = 0U;
    arg0->unkB3C = 1;
    arg0->unkB3B = 0;
    func_080B55D0(arg0);
    func_08007128(&sp3C);
    sp40 = func_0800745C(&sp3C, sp38);
    func_080BC288(arg0, &sp3C);
    sp94 = 0;
    sp9C = &sp0 + 0x44;
loop_7:
    temp_r0_4 = func_0805E824(__builtin_new(0x14), arg0->unk784, 0, 0x100);
    temp_r3 = sp94 * 4;
    temp_r4 = temp_r3 + arg0;
    if (temp_r0_4 != temp_r4->unk91C) {
        __builtin_delete();
    }
    temp_r4->unk91C = temp_r0_4;
    temp_r0_5 = __builtin_new(0x1C);
    temp_r0_5->unk0 = 0;
    temp_r0_5->unk2 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk6 = 0;
    temp_r0_5->unk8 = 0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk11 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_5->unk18 = 0;
    temp_r5_2 = temp_r3 + arg0;
    temp_r6 = temp_r3 + arg0;
    if (temp_r0_5 != temp_r5_2->unk924) {
        __builtin_delete();
    }
    temp_r5_2->unk924 = temp_r0_5;
    func_0805E860(temp_r6->unk91C, 2);
    temp_r1 = arg0 + (sp94 << 6);
    temp_r6->unk924->unk0 = (s16) (((u16) temp_r1->unk8A >> 8) - 9);
    temp_r6->unk924->unk2 = (s16) (((u16) temp_r1->unk8C >> 8) - 0x20);
    temp_sb = temp_r3 + sp8C;
    temp_r6->unk924->unk6 = temp_sb;
    temp_r4_2 = temp_r6->unk924;
    temp_r0_6 = arg0 + 0x71C;
    temp_r4_2->unk4 = func_080074C0(temp_r0_6, temp_r0_6->unk4);
    temp_r6_2 = sp94 << 5;
    temp_r5_3 = temp_r6_2 + arg0;
    temp_r4_3 = temp_r5_3 + 0x92C;
    temp_r0_7 = temp_r6->unk91C;
    temp_r1_2 = temp_r0_7->unk0;
    (*temp_r1_2)->unk10(&sp44, temp_r1_2, *(temp_r0_7->unk4 + (temp_r0_7->unkC * 4)));
    memcpy(sp9C, sp9C, 0x20);
    temp_r0_8 = sp9C + 0xC;
    temp_r5_3->unk92C = (void *) sp9C->unk0;
    temp_r4_3->unk4 = (s32) sp9C->unk4;
    temp_r4_3->unk8 = (s32) sp9C->unk8;
    temp_r4_4 = temp_r4_3 + 0xC;
    temp_r4_3->unkC = (s32) sp9C->unkC;
    temp_r4_4->unk4 = (s32) temp_r0_8->unk4;
    temp_r4_4->unk8 = (s32) temp_r0_8->unk8;
    temp_r4_4->unkC = (s32) temp_r0_8->unkC;
    (temp_r4_4 + 0xC)->unk4 = (s32) (temp_r0_8 + 0xC)->unk4;
    temp_r0_9 = func_08008910(arg0);
    temp_r1_3 = temp_r5_3->unk934;
    var_r3 = 0;
    spA4 = temp_r6_2;
    if (temp_r1_3 != 0) {
        var_r3 = (temp_r5_3 + 0x934)->unk4;
    }
    func_08008F0C(&sp3C, temp_r1_3, (temp_sb << 5) + 0x06010000, var_r3);
    temp_r1_4 = temp_r0_9->unk4;
    if (temp_r1_4 != temp_r0_9->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (void *) sp3C.unk0;
            temp_r1_4->unk4 = (s32) sp3C.unk4;
            temp_r1_4->unk8 = (s32) sp3C.unk8;
            temp_r1_4->unkC = (s32) sp3C.unkC;
        }
        temp_r0_9->unk4 = (void *) (temp_r0_9->unk4 + 0x10);
        spA0 = sp94 + 1;
    } else {
        sp68 = 1;
        temp_r4_5 = (s32) (temp_r1_4 - temp_r0_9->unk0) >> 4;
        sp64 = temp_r4_5;
        var_r0 = &sp64;
        if ((u32) temp_r4_5 < 1U) {
            var_r0 = &sp68;
        }
        temp_r0_10 = temp_r4_5 + *var_r0;
        if (temp_r0_10 != 0) {
            temp_r4_6 = temp_r0_10 * 0x10;
            var_r0_2 = malloc(temp_r4_6);
            var_sb = temp_r4_6;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        spB4 = var_r0_2;
        var_r2 = temp_r0_9->unk0;
        var_ip = var_r0_2;
        spA0 = sp94 + 1;
        if (var_r2 != temp_r1_4) {
            do {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) var_r2->unk0;
                    var_ip->unk4 = (s32) var_r2->unk4;
                    var_ip->unk8 = (s32) var_r2->unk8;
                    var_ip->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_ip += 0x10;
            } while (var_r2 != temp_r1_4);
        }
        if (sp68 == 1) {
            if (var_ip != 0) {
                var_ip->unk0 = (void *) sp3C.unk0;
                var_ip->unk4 = (s32) sp3C.unk4;
                var_ip->unk8 = (s32) sp3C.unk8;
                var_ip->unkC = (s32) sp3C.unkC;
            }
            var_r5 = var_ip + 0x10;
        } else {
            var_r8 = sp68;
            var_r2_2 = var_ip;
            if (sp68 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (void *) sp3C.unk0;
                        var_r2_2->unk4 = (s32) sp3C.unk4;
                        var_r2_2->unk8 = (s32) sp3C.unk8;
                        var_r2_2->unkC = (s32) sp3C.unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r0_9->unk4;
        temp_r0_11 = temp_r0_9->unk0;
        var_r1 = temp_r0_11;
        if (temp_r0_11 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        temp_r0_9->unk0 = spB4;
        temp_r0_9->unk4 = var_r5;
        temp_r0_9->unkC = (void *) (spB4 + var_sb);
    }
    temp_r8 = func_08008910(arg0);
    temp_r5_4 = (spA4 + arg0)->unk93C;
    temp_r0_12 = arg0 + 0x71C;
    temp_r2_2 = func_080074C0(temp_r0_12, temp_r0_12->unk4);
    temp_r6_3 = spA4 + arg0;
    var_r3_2 = 0;
    if (temp_r6_3->unk93C != 0) {
        var_r3_2 = (temp_r6_3 + 0x93C)->unk4;
    }
    func_08008F0C(&sp3C, temp_r5_4, (temp_r2_2 << 5) + 0x05000200, var_r3_2);
    temp_r1_5 = temp_r8->unk4;
    if (temp_r1_5 != temp_r8->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (void *) sp3C.unk0;
            temp_r1_5->unk4 = (s32) sp3C.unk4;
            temp_r1_5->unk8 = (s32) sp3C.unk8;
            temp_r1_5->unkC = (s32) sp3C.unkC;
        }
        temp_r8->unk4 = (void *) (temp_r8->unk4 + 0x10);
    } else {
        sp70 = 1;
        temp_r4_7 = (s32) (temp_r1_5 - temp_r8->unk0) >> 4;
        sp6C = temp_r4_7;
        var_r0_3 = &sp6C;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_3 = &sp70;
        }
        temp_r0_13 = temp_r4_7 + *var_r0_3;
        if (temp_r0_13 != 0) {
            temp_r4_8 = temp_r0_13 * 0x10;
            var_r0_4 = malloc(temp_r4_8);
            var_sb_2 = temp_r4_8;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        spB4 = var_r0_4;
        var_r2_3 = temp_r8->unk0;
        var_ip_2 = var_r0_4;
        if (var_r2_3 != temp_r1_5) {
            do {
                if (var_ip_2 != 0) {
                    var_ip_2->unk0 = (s32) var_r2_3->unk0;
                    var_ip_2->unk4 = (s32) var_r2_3->unk4;
                    var_ip_2->unk8 = (s32) var_r2_3->unk8;
                    var_ip_2->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_ip_2 += 0x10;
            } while (var_r2_3 != temp_r1_5);
        }
        if (sp70 == 1) {
            if (var_ip_2 != 0) {
                var_ip_2->unk0 = (void *) sp3C.unk0;
                var_ip_2->unk4 = (s32) sp3C.unk4;
                var_ip_2->unk8 = (s32) sp3C.unk8;
                var_ip_2->unkC = (s32) sp3C.unkC;
            }
            var_r5_2 = var_ip_2 + 0x10;
        } else {
            var_r8_2 = sp70;
            var_r2_4 = var_ip_2;
            if (sp70 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (void *) sp3C.unk0;
                        var_r2_4->unk4 = (s32) sp3C.unk4;
                        var_r2_4->unk8 = (s32) sp3C.unk8;
                        var_r2_4->unkC = (s32) sp3C.unkC;
                    }
                    var_r8_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r8_2 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_3 = temp_r8->unk4;
        temp_r0_14 = temp_r8->unk0;
        var_r1_2 = temp_r0_14;
        if (temp_r0_14 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_14 != 0) {
            free();
        }
        temp_r8->unk0 = spB4;
        temp_r8->unk4 = var_r5_2;
        temp_r8->unkC = (void *) (spB4 + var_sb_2);
    }
    sp94 = spA0;
    if (spA0 <= 1U) {
        goto loop_7;
    }
    arg0->unkB44 = 1;
    arg0->unkB40 = 1;
    arg0->unkB4C = 1;
    arg0->unkB48 = 1;
    arg0->unkB50 = 0;
    arg0->unkB54 = 0;
    func_080BAC9C(arg0, sp88);
    sp98 = 0;
loop_203:
    if (arg0->unkB14 == 1) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r1_6 = *arg0->unk7A0;
        if ((s32) ((0 - temp_r1_6) | temp_r1_6) < 0) {

        } else {
            temp_r1_7 = arg0->unkB18;
            if ((temp_r1_7 == 0) || (arg0->unkB33 == 1)) {
                sp90 = func_080BA2C4(arg0, sp90);
            } else if ((u32) (temp_r1_7 - 1) > 1U) {

            } else {
                temp_sl = func_08050D34(arg0->unk718);
                temp_sb_2 = arg0->unk718;
                temp_r8_2 = func_080088DC(arg0);
                temp_r6_4 = func_08008920(arg0);
                temp_r5_5 = func_08008918(arg0);
                temp_r4_9 = func_08008940(arg0);
                temp_r0_15 = func_0800894C(arg0);
                sp0 = temp_r4_9;
                sp4 = temp_r0_15;
                sp8 = arg0 + 0x708;
                temp_r0_16 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_4, temp_r5_5);
                switch (temp_r0_16) {               /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    if (arg0->unkB34 != 0) {
                        arg0->unkB14 = 2;
                    } else {
                        func_08050D5C(arg0->unk718);
                    }
                    break;
                case 3:                             /* switch 1 */
                    if (temp_sl <= 5) {
                        if (temp_sl < 4) {
                            if (temp_sl != 1) {
                                goto block_92;
                            }
                            temp_r0_17 = arg0->unkB18;
                            if (temp_r0_17 == 1) {
                                func_08050D8C(arg0->unk718, &gUnk_081079C4);
                            } else if (temp_r0_17 == 2) {
                                func_08050D8C(arg0->unk718, &gUnk_081079E0);
                            }
                        } else {
                            temp_r4_10 = arg0->unkB34;
                            if (temp_r4_10 == 0) {
                                sp0 = (void *) temp_r4_10;
                                sp4 = (s32 *) temp_r4_10;
                                sp8 = (s32 *) temp_r4_10;
                                func_08050E30(arg0->unk718, &gUnk_08107A30, &gUnk_08107A4C, &gUnk_08107A58);
                            }
                        }
                    } else if (temp_sl != 6) {
block_92:
                        func_08050D74(arg0->unk718);
                    } else {
                        temp_r0_18 = func_08050DF0(arg0->unk718);
                        switch (temp_r0_18) {       /* switch 2; irregular */
                        case 1:                     /* switch 2 */
                            temp_r0_19 = arg0->unkB18;
                            switch (temp_r0_19) {   /* switch 3; irregular */
                            case 0:                 /* switch 3 */
                                func_08050D8C(arg0->unk718, &gUnk_08107A68);
                                break;
                            case 1:                 /* switch 3 */
                                func_08050D8C(arg0->unk718, &gUnk_08107A80);
                                break;
                            case 2:                 /* switch 3 */
                                func_08050D8C(arg0->unk718, &gUnk_08107A9C);
                                break;
                            }
                            func_08050DD8(arg0->unk718);
                            sp90 = 0;
                            break;
                        case 2:                     /* switch 2 */
                            arg0->unkB33 = 1U;
                            break;
                        }
                    }
                    /* fallthrough */
                case 1:                             /* switch 1 */
                case 2:                             /* switch 1 */
                case 4:                             /* switch 1 */
                case 5:                             /* switch 1 */
                case 6:                             /* switch 1 */
                    if (sp90 <= 0x77) {
                        sp90 += 1;
                    }
                    if (sp90 == 0x78) {
                        arg0->unkB50 = 1;
                        sp90 = 0x7A;
                        func_08050DE4(arg0->unk718);
                        func_08050D8C(arg0->unk718, &gUnk_08107AB4);
                        func_08050DD8(arg0->unk718);
                    }
                    if ((u32) (sp90 - 0x7A) <= 0x59U) {
                        sp90 += 1;
                    }
                    if (sp90 == 0xD4) {
                        arg0->unkB50 = 0;
                        sp90 = 0x79;
                        func_08050DE4(arg0->unk718);
                        func_08050D74(arg0->unk718);
                        arg0->unkB33 = 0U;
                        arg0->unkB34 = 1U;
                    }
                    break;
                }
            }
        }
        func_080BB8EC(arg0, sp88);
        func_080B9AC0(arg0);
        var_sl = 0;
loop_122:
        func_080B8EBC(arg0, var_sl, sp84);
        temp_r3_2 = arg0 + (var_sl << 6);
        spA8 = var_sl + 1;
        if (temp_r3_2->unkAB == 0) {

        } else {
            temp_r4_11 = var_sl * 4;
            *(temp_r4_11 + arg0)->unk924 = ((u16) temp_r3_2->unk8A >> 8) - 9;
            (temp_r4_11 + arg0)->unk924->unk2 = (s16) (((u16) temp_r3_2->unk8C >> 8) - 0x20);
            temp_r0_20 = func_0805E8F0((temp_r4_11 + arg0)->unk91C) << 0x1E;
            spAC = temp_r4_11;
            temp_r2_4 = var_sl << 5;
            spB0 = temp_r2_4;
            if (temp_r0_20 >= 0) {

            } else {
                temp_r5_6 = temp_r2_4 + arg0;
                temp_r4_12 = temp_r5_6 + 0x92C;
                temp_r0_21 = (spAC + arg0)->unk91C;
                temp_r1_8 = temp_r0_21->unk0;
                (*temp_r1_8)->unk10(&sp3C, temp_r1_8, *(temp_r0_21->unk4 + (temp_r0_21->unkC * 4)));
                memcpy(&sp3C, &sp3C, 0x20);
                temp_r0_22 = &sp3C + 0xC;
                temp_r5_6->unk92C = (void *) sp3C.unk0;
                temp_r4_12->unk4 = (s32) sp3C.unk4;
                temp_r4_12->unk8 = (s32) sp3C.unk8;
                temp_r4_13 = temp_r4_12 + 0xC;
                temp_r4_12->unkC = (s32) sp3C.unkC;
                temp_r4_13->unk4 = (s32) temp_r0_22->unk4;
                temp_r4_13->unk8 = (s32) temp_r0_22->unk8;
                temp_r4_13->unkC = (s32) temp_r0_22->unkC;
                (temp_r4_13 + 0xC)->unk4 = (s32) (temp_r0_22 + 0xC)->unk4;
                temp_r4_14 = func_08008910(arg0);
                temp_r0_23 = temp_r5_6->unk934;
                var_r3_3 = 0;
                if (temp_r0_23 != 0) {
                    var_r3_3 = (temp_r5_6 + 0x934)->unk4;
                }
                func_08008F0C(&sp3C, temp_r0_23, ((spAC + sp8C) << 5) + 0x06010000, var_r3_3);
                temp_r1_9 = temp_r4_14->unk4;
                if (temp_r1_9 != temp_r4_14->unkC) {
                    if (temp_r1_9 != 0) {
                        temp_r1_9->unk0 = (void *) sp3C.unk0;
                        temp_r1_9->unk4 = (s32) sp3C.unk4;
                        temp_r1_9->unk8 = (s32) sp3C.unk8;
                        temp_r1_9->unkC = (s32) sp3C.unkC;
                    }
                    temp_r4_14->unk4 = (void *) (temp_r4_14->unk4 + 0x10);
                } else {
                    sp78 = 1;
                    temp_r4_15 = (s32) (temp_r1_9 - temp_r4_14->unk0) >> 4;
                    sp74 = temp_r4_15;
                    var_r0_5 = &sp74;
                    if ((u32) temp_r4_15 < 1U) {
                        var_r0_5 = &sp78;
                    }
                    temp_r0_24 = temp_r4_15 + *var_r0_5;
                    if (temp_r0_24 != 0) {
                        temp_r4_16 = temp_r0_24 * 0x10;
                        var_r0_6 = malloc(temp_r4_16);
                        var_sb_3 = temp_r4_16;
                        if (var_r0_6 == 0) {
                            var_r0_6 = func_080D3BC0(var_sb_3);
                        }
                    } else {
                        var_r0_6 = 0;
                        var_sb_3 = 0;
                    }
                    spB4 = var_r0_6;
                    var_r2_5 = temp_r4_14->unk0;
                    var_ip_3 = var_r0_6;
                    spA8 = var_sl + 1;
                    if (var_r2_5 != temp_r1_9) {
                        do {
                            if (var_ip_3 != 0) {
                                var_ip_3->unk0 = (s32) var_r2_5->unk0;
                                var_ip_3->unk4 = (s32) var_r2_5->unk4;
                                var_ip_3->unk8 = (s32) var_r2_5->unk8;
                                var_ip_3->unkC = (s32) var_r2_5->unkC;
                            }
                            var_r2_5 += 0x10;
                            var_ip_3 += 0x10;
                        } while (var_r2_5 != temp_r1_9);
                    }
                    if (sp78 == 1) {
                        if (var_ip_3 != 0) {
                            var_ip_3->unk0 = (void *) sp3C.unk0;
                            var_ip_3->unk4 = (s32) sp3C.unk4;
                            var_ip_3->unk8 = (s32) sp3C.unk8;
                            var_ip_3->unkC = (s32) sp3C.unkC;
                        }
                        var_r5_3 = var_ip_3 + 0x10;
                    } else {
                        var_r8_3 = sp78;
                        var_r2_6 = var_ip_3;
                        if (sp78 != 0) {
                            do {
                                if (var_r2_6 != 0) {
                                    var_r2_6->unk0 = (void *) sp3C.unk0;
                                    var_r2_6->unk4 = (s32) sp3C.unk4;
                                    var_r2_6->unk8 = (s32) sp3C.unk8;
                                    var_r2_6->unkC = (s32) sp3C.unkC;
                                }
                                var_r8_3 -= 1;
                                var_r2_6 += 0x10;
                            } while (var_r8_3 != 0);
                        }
                        var_r5_3 = var_r2_6;
                    }
                    temp_r2_5 = temp_r4_14->unk4;
                    temp_r0_25 = temp_r4_14->unk0;
                    var_r1_3 = temp_r0_25;
                    if (temp_r0_25 != temp_r2_5) {
                        do {
                            var_r1_3 += 0x10;
                        } while (var_r1_3 != temp_r2_5);
                    }
                    if (temp_r0_25 != 0) {
                        free();
                    }
                    temp_r4_14->unk0 = spB4;
                    temp_r4_14->unk4 = var_r5_3;
                    temp_r4_14->unkC = (void *) (spB4 + var_sb_3);
                }
                temp_r6_5 = func_08008910(arg0);
                temp_r5_7 = (spB0 + arg0)->unk93C;
                temp_r0_26 = arg0 + 0x71C;
                temp_r2_6 = func_080074C0(temp_r0_26, temp_r0_26->unk4);
                temp_r1_10 = spB0 + arg0;
                var_r3_4 = 0;
                if (temp_r1_10->unk93C != 0) {
                    var_r3_4 = (temp_r1_10 + 0x93C)->unk4;
                }
                func_08008F0C(&sp3C, temp_r5_7, (temp_r2_6 << 5) + 0x05000200, var_r3_4);
                temp_r1_11 = temp_r6_5->unk4;
                if (temp_r1_11 != temp_r6_5->unkC) {
                    if (temp_r1_11 != 0) {
                        temp_r1_11->unk0 = (void *) sp3C.unk0;
                        temp_r1_11->unk4 = (s32) sp3C.unk4;
                        temp_r1_11->unk8 = (s32) sp3C.unk8;
                        temp_r1_11->unkC = (s32) sp3C.unkC;
                    }
                    temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
                } else {
                    sp80 = 1;
                    temp_r4_17 = (s32) (temp_r1_11 - temp_r6_5->unk0) >> 4;
                    sp7C = temp_r4_17;
                    var_r0_7 = &sp7C;
                    if ((u32) temp_r4_17 < 1U) {
                        var_r0_7 = &sp80;
                    }
                    temp_r0_27 = temp_r4_17 + *var_r0_7;
                    if (temp_r0_27 != 0) {
                        temp_r4_18 = temp_r0_27 * 0x10;
                        var_r0_8 = malloc(temp_r4_18);
                        var_sb_4 = temp_r4_18;
                        if (var_r0_8 == 0) {
                            var_r0_8 = func_080D3BC0(var_sb_4);
                        }
                    } else {
                        var_r0_8 = 0;
                        var_sb_4 = 0;
                    }
                    spB4 = var_r0_8;
                    var_r2_7 = temp_r6_5->unk0;
                    var_ip_4 = var_r0_8;
                    if (var_r2_7 != temp_r1_11) {
                        do {
                            if (var_ip_4 != 0) {
                                var_ip_4->unk0 = (s32) var_r2_7->unk0;
                                var_ip_4->unk4 = (s32) var_r2_7->unk4;
                                var_ip_4->unk8 = (s32) var_r2_7->unk8;
                                var_ip_4->unkC = (s32) var_r2_7->unkC;
                            }
                            var_r2_7 += 0x10;
                            var_ip_4 += 0x10;
                        } while (var_r2_7 != temp_r1_11);
                    }
                    if (sp80 == 1) {
                        if (var_ip_4 != 0) {
                            var_ip_4->unk0 = (void *) sp3C.unk0;
                            var_ip_4->unk4 = (s32) sp3C.unk4;
                            var_ip_4->unk8 = (s32) sp3C.unk8;
                            var_ip_4->unkC = (s32) sp3C.unkC;
                        }
                        var_r5_4 = var_ip_4 + 0x10;
                    } else {
                        var_r8_4 = sp80;
                        var_r2_8 = var_ip_4;
                        if (sp80 != 0) {
                            do {
                                if (var_r2_8 != 0) {
                                    var_r2_8->unk0 = (void *) sp3C.unk0;
                                    var_r2_8->unk4 = (s32) sp3C.unk4;
                                    var_r2_8->unk8 = (s32) sp3C.unk8;
                                    var_r2_8->unkC = (s32) sp3C.unkC;
                                }
                                var_r8_4 -= 1;
                                var_r2_8 += 0x10;
                            } while (var_r8_4 != 0);
                        }
                        var_r5_4 = var_r2_8;
                    }
                    temp_r2_7 = temp_r6_5->unk4;
                    temp_r0_28 = temp_r6_5->unk0;
                    var_r1_4 = temp_r0_28;
                    if (temp_r0_28 != temp_r2_7) {
                        do {
                            var_r1_4 += 0x10;
                        } while (var_r1_4 != temp_r2_7);
                    }
                    if (temp_r0_28 != 0) {
                        free();
                    }
                    temp_r6_5->unk0 = spB4;
                    temp_r6_5->unk4 = var_r5_4;
                    temp_r6_5->unkC = (void *) (spB4 + var_sb_4);
                }
            }
            temp_r6_6 = func_08008920(arg0);
            temp_r5_8 = spB0 + arg0;
            var_r2_9 = 0;
            if (temp_r5_8->unk92C != 0) {
                var_r2_9 = (temp_r5_8 + 0x92C)->unk4;
            }
            func_0805E99C(temp_r6_6, (spB0 + arg0)->unk92C, var_r2_9, (spAC + arg0)->unk924);
        }
        var_sl = (u8) spA8;
        if (spA8 <= 1) {
            goto loop_122;
        }
        var_sb_5 = 0;
        var_r5_5 = arg0 + 0xFFFFFE8A;
        var_r8_5 = 0;
        do {
            if (var_sb_5 <= 7) {
                temp_r4_19 = func_08008920(arg0);
                temp_r0_29 = arg0->unkACC;
                var_r2_10 = 0;
                if (temp_r0_29 != 0) {
                    var_r2_10 = (arg0 + 0xACC)->unk4;
                }
                func_0805E99C(temp_r4_19, temp_r0_29, var_r2_10, (var_r8_5 + arg0)->unkAEC);
            } else {
                *(var_r8_5 + arg0)->unkAEC = (s16) ((u16) var_r5_5->unk0 >> 8);
                (var_r8_5 + arg0)->unkAEC->unk2 = (s16) ((u16) var_r5_5->unk2 >> 8);
                (var_r8_5 + arg0)->unkAEC->unk8 = (s16) var_r5_5->unkB;
                temp_r4_20 = func_08008920(arg0);
                temp_r1_12 = arg0->unkAA8;
                var_r2_11 = 0;
                if (temp_r1_12 != 0) {
                    var_r2_11 = (arg0 + 0xAA8)->unk4;
                }
                func_0805E99C(temp_r4_20, temp_r1_12, var_r2_11, (var_r8_5 + arg0)->unkAEC);
            }
            var_r5_5 += 0x40;
            var_r8_5 += 4;
            var_sb_5 += 1;
        } while (var_sb_5 <= 9);
        if (sp98 == 0) {
            func_0800934C(arg0->unk7A0 + 0xC, 0x889, 1, 1);
            temp_r0_30 = func_08008940(arg0);
            temp_r0_30->unk8->unk10(temp_r0_30, arg0->unk7A0);
            sp98 = 1;
        }
        goto loop_203;
    }
    func_080073E0(&sp34, sp38);
    func_08007184(&sp34, 2);
    func_08007C28(&sp2C, sp30);
    func_080079E8(&sp2C, 2);
    func_08007C28(&sp24, sp28);
    func_080079E8(&sp24, 2);
    func_08007C28(&sp1C, sp20);
    func_080079E8(&sp1C, 2);
    func_08007C28(&sp14, sp18);
    func_080079E8(&sp14, 2);
    func_08007C28(&spC, sp10);
    func_080079E8(&spC, 2);
}
