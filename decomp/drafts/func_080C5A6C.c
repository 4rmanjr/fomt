s32 __builtin_delete();                               /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_080087C8(void *);                            /* extern */
void *func_08008910(void *, s32);                   /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008F0C(s32 **, void *, s32, u16);            /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32);             /* extern */
s32 func_0804EC84(s32, s32 *, s32);                     /* extern */
void *func_0805E824(s32, s32, s32, s32);            /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_080C2D54(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 **, s32 **, s32);                          /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[1292];
    s32 unk520;
    u8 _pad524[32];
    s32 unk544;
    u8 _pad548[8];
    s32 unk550;
    u8 _pad554[4];
    s32 unk558;
    u8 _pad55C[4];
    s32 unk560;
    u8 _pad564[4];
    s32 unk568;
    u8 _pad56C[52];
    void *unk5A0;
    u8 _pad5A4[76];
    void *unk5F0;
    u8 _pad5F4[308];
    void *unk728;
    u8 _pad72C[368];
    s32 unk89C;
    u8 _pad8A0[12];
    s32 unk8AC;
    u8 _pad8B0[12];
    s32 unk8BC;
    u8 _pad8C0[4];
    s32 unk8C4;
    s32 unk8C5;
    u8 _pad8C9[160];
    s32 unk969;
    u8 _pad96D[1];
    s32 unk96E;
    s32 unk96F;
    u8 _pad973[6];
    s32 unk979;
    s32 unk97A;
    s32 unk97B;
} GenObj;
void func_080C5A6C(GenObj *arg0) {
    s32 *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s32 *sp10;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 **sp54;
    s32 sp58;
    s32 **sp5C;
    void *sp60;
    void *sp64;
    s32 *temp_r2_4;
    s32 *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 *var_r0_6;
    s32 temp_r0;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_16;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r1_7;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 var_r3_4;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    u16 var_r3;
    u16 var_r3_2;
    void **temp_r1;
    void *temp_r0_10;
    GenObj *temp_r0_11;
    GenObj *temp_r0_14;
    GenObj *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_8;
    GenObj *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_8;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_6;
    GenObj *temp_r4_3;
    GenObj *temp_r4_6;
    GenObj *temp_r6;
    void *temp_r8;
    GenObj *var_ip;
    GenObj *var_ip_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r3_3;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;

    sp50 = 0;
    arg0->unk5F0->unk10 = (u16) sp50;
    arg0->unk5A0->unk10 = (u16) sp50;
    arg0->unk728->unk10 = 0x100;
    func_0805E860(arg0->unk728, 6);
    arg0->unk8C5 = 0;
    arg0->unk8BC = 3;
    arg0->unk8C4 = 1;
    func_080C2D54(arg0);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x89C);
loop_71:
    if (*var_r0 == 5) {
        func_080087C8(arg0);
        temp_r0 = arg0->unk8AC;
        if (temp_r0 > 1) {
            arg0->unk89C = 6;
            arg0->unk96E = (u8) (arg0->unk96F + arg0->unk96E);
        } else {
            sp58 = sp50 + 1;
            if (sp50 != 0xB4) {

            } else {
                arg0->unk8AC = (s32) (temp_r0 + 1);
                arg0->unk89C = 2;
                arg0->unk969 = 0;
                temp_r0_2 = func_0805E824(__builtin_new(0x14), arg0->unk520, 0, 0x100);
                if (temp_r0_2 != arg0->unk550) {
                    __builtin_delete();
                }
                arg0->unk550 = temp_r0_2;
                func_0805E860(temp_r0_2, 0);
                temp_r0_3 = arg0->unk550;
                temp_r1 = temp_r0_3->unk0;
                (*temp_r1)->unk10(&sp10, temp_r1, *(temp_r0_3->unk4 + (temp_r0_3->unkC * 4)));
                memcpy(&sp10, &sp10, 0x20);
                temp_r1_2 = (GenObj *)((u8 *)arg0 + 0x558);
                temp_r0_4 = &(GenObj *)((u8 *)sp10 + 0xC);
                arg0->unk558 = (s32) sp10.unk0;
                temp_r1_2->unk4 = (s32) sp10.unk4;
                temp_r1_2->unk8 = (s32) sp10.unk8;
                temp_r1_3 = (GenObj *)((u8 *)temp_r1_2 + 0xC);
                temp_r1_2->unkC = (s32) sp10.unkC;
                temp_r1_3->unk4 = (s32) temp_r0_4->unk4;
                temp_r1_3->unk8 = (s32) temp_r0_4->unk8;
                temp_r1_4 = temp_r1_3 + 0xC;
                temp_r1_3->unkC = (s32) temp_r0_4->unkC;
                temp_r1_4->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_4 + 0xC))->unk4;
                temp_r6 = func_08008910(arg0, temp_r1_4 + 8);
                temp_r8 = arg0->unk560;
                temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x844);
                temp_r2 = func_08007D4C(temp_r0_5, temp_r0_5->unk4);
                var_r3 = 0;
                sp54 = &sp10;
                if (arg0->unk560 != 0) {
                    var_r3 = ((GenObj *)((u8 *)arg0 + 0x560))->unk4;
                }
                func_08008F0C(sp54, temp_r8, (temp_r2 << 5) + 0x06010000, var_r3);
                temp_r1_5 = temp_r6->unk4;
                if (temp_r1_5 != temp_r6->unkC) {
                    if (temp_r1_5 != 0) {
                        temp_r1_5->unk0 = (s32 *) sp54->unk0;
                        temp_r1_5->unk4 = (s32) sp54->unk4;
                        temp_r1_5->unk8 = (s32) sp54->unk8;
                        temp_r1_5->unkC = (s32) sp54->unkC;
                    }
                    temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
                } else {
                    sp34 = 1;
                    temp_r4 = (s32) (temp_r1_5 - temp_r6->unk0) >> 4;
                    sp30 = temp_r4;
                    var_r0_2 = &sp30;
                    if ((u32) temp_r4 < 1U) {
                        var_r0_2 = &sp34;
                    }
                    temp_r0_6 = temp_r4 + *var_r0_2;
                    if (temp_r0_6 != 0) {
                        temp_r4_2 = temp_r0_6 * 0x10;
                        var_r0_3 = malloc(temp_r4_2);
                        var_sb = temp_r4_2;
                        if (var_r0_3 == 0) {
                            var_r0_3 = func_080D3BC0(var_sb);
                        }
                    } else {
                        var_r0_3 = 0;
                        var_sb = 0;
                    }
                    sp60 = var_r0_3;
                    var_r2 = temp_r6->unk0;
                    var_ip = var_r0_3;
                    sp58 = sp50 + 1;
                    if (var_r2 != temp_r1_5) {
                        do {
                            if (var_ip != 0) {
                                var_ip->unk0 = (s32) var_r2->unk0;
                                var_ip->unk4 = (s32) var_r2->unk4;
                                var_ip->unk8 = (s32) var_r2->unk8;
                                var_ip->unkC = (s32) var_r2->unkC;
                            }
                            var_r2 += 0x10;
                            var_ip += 0x10;
                        } while (var_r2 != temp_r1_5);
                    }
                    if (sp34 == 1) {
                        if (var_ip != 0) {
                            var_ip->unk0 = (s32 *) sp54->unk0;
                            var_ip->unk4 = (s32) sp54->unk4;
                            var_ip->unk8 = (s32) sp54->unk8;
                            var_ip->unkC = (s32) sp54->unkC;
                        }
                        var_r5 = (GenObj *)((u8 *)var_ip + 0x10);
                    } else {
                        var_r8 = sp34;
                        var_r2_2 = var_ip;
                        if (sp34 != 0) {
                            do {
                                if (var_r2_2 != 0) {
                                    var_r2_2->unk0 = (s32 *) sp54->unk0;
                                    var_r2_2->unk4 = (s32) sp54->unk4;
                                    var_r2_2->unk8 = (s32) sp54->unk8;
                                    var_r2_2->unkC = (s32) sp54->unkC;
                                }
                                var_r8 -= 1;
                                var_r2_2 += 0x10;
                            } while (var_r8 != 0);
                        }
                        var_r5 = var_r2_2;
                    }
                    temp_r2_2 = temp_r6->unk4;
                    temp_r0_7 = temp_r6->unk0;
                    var_r1 = temp_r0_7;
                    if (temp_r0_7 != temp_r2_2) {
                        do {
                            var_r1 += 0x10;
                        } while (var_r1 != temp_r2_2);
                    }
                    if (temp_r0_7 != 0) {
                        free();
                    }
                    temp_r6->unk0 = sp60;
                    temp_r6->unk4 = var_r5;
                    temp_r6->unkC = (void *) (sp60 + var_sb);
                }
                temp_r4_3 = func_08008910(arg0);
                temp_r0_8 = arg0->unk568;
                var_r3_2 = 0;
                if (temp_r0_8 != 0) {
                    var_r3_2 = ((GenObj *)((u8 *)arg0 + 0x568))->unk4;
                }
                func_08008F0C(&sp10, temp_r0_8, 0x05000260, var_r3_2);
                temp_r1_6 = temp_r4_3->unk4;
                if (temp_r1_6 != temp_r4_3->unkC) {
                    if (temp_r1_6 != 0) {
                        temp_r1_6->unk0 = (s32 *) sp54->unk0;
                        temp_r1_6->unk4 = (s32) sp54->unk4;
                        temp_r1_6->unk8 = (s32) sp54->unk8;
                        temp_r1_6->unkC = (s32) sp54->unkC;
                    }
                    temp_r4_3->unk4 = (void *) (temp_r4_3->unk4 + 0x10);
                } else {
                    sp3C = 1;
                    temp_r4_4 = (s32) (temp_r1_6 - temp_r4_3->unk0) >> 4;
                    sp38 = temp_r4_4;
                    var_r0_4 = &sp38;
                    if ((u32) temp_r4_4 < 1U) {
                        var_r0_4 = &sp3C;
                    }
                    temp_r0_9 = temp_r4_4 + *var_r0_4;
                    if (temp_r0_9 != 0) {
                        temp_r4_5 = temp_r0_9 * 0x10;
                        var_r0_5 = malloc(temp_r4_5);
                        var_sb_2 = temp_r4_5;
                        if (var_r0_5 == 0) {
                            var_r0_5 = func_080D3BC0(var_sb_2);
                        }
                    } else {
                        var_r0_5 = 0;
                        var_sb_2 = 0;
                    }
                    sp60 = var_r0_5;
                    var_r2_3 = temp_r4_3->unk0;
                    var_ip_2 = var_r0_5;
                    if (var_r2_3 != temp_r1_6) {
                        do {
                            if (var_ip_2 != 0) {
                                var_ip_2->unk0 = (s32) var_r2_3->unk0;
                                var_ip_2->unk4 = (s32) var_r2_3->unk4;
                                var_ip_2->unk8 = (s32) var_r2_3->unk8;
                                var_ip_2->unkC = (s32) var_r2_3->unkC;
                            }
                            var_r2_3 += 0x10;
                            var_ip_2 += 0x10;
                        } while (var_r2_3 != temp_r1_6);
                    }
                    if (sp3C == 1) {
                        if (var_ip_2 != 0) {
                            var_ip_2->unk0 = (s32 *) sp54->unk0;
                            var_ip_2->unk4 = (s32) sp54->unk4;
                            var_ip_2->unk8 = (s32) sp54->unk8;
                            var_ip_2->unkC = (s32) sp54->unkC;
                        }
                        var_r5_2 = (GenObj *)((u8 *)var_ip_2 + 0x10);
                    } else {
                        var_r8_2 = sp3C;
                        var_r2_4 = var_ip_2;
                        if (sp3C != 0) {
                            do {
                                if (var_r2_4 != 0) {
                                    var_r2_4->unk0 = (s32 *) sp54->unk0;
                                    var_r2_4->unk4 = (s32) sp54->unk4;
                                    var_r2_4->unk8 = (s32) sp54->unk8;
                                    var_r2_4->unkC = (s32) sp54->unkC;
                                }
                                var_r8_2 -= 1;
                                var_r2_4 += 0x10;
                            } while (var_r8_2 != 0);
                        }
                        var_r5_2 = var_r2_4;
                    }
                    temp_r2_3 = temp_r4_3->unk4;
                    temp_r0_10 = temp_r4_3->unk0;
                    var_r1_2 = temp_r0_10;
                    if (temp_r0_10 != temp_r2_3) {
                        do {
                            var_r1_2 += 0x10;
                        } while (var_r1_2 != temp_r2_3);
                    }
                    if (temp_r0_10 != 0) {
                        free();
                    }
                    temp_r4_3->unk0 = sp60;
                    temp_r4_3->unk4 = var_r5_2;
                    temp_r4_3->unkC = (void *) (sp60 + var_sb_2);
                }
                arg0->unk96E = (u8) (arg0->unk96F + arg0->unk96E);
                arg0->unk96F = 0U;
                arg0->unk979 = 0;
                arg0->unk97A = 0;
                arg0->unk8C5 = 0;
            }
            sp50 = sp58;
        }
        func_080C2D54(arg0);
        var_r0 = (GenObj *)((u8 *)arg0 + 0x89C);
        goto loop_71;
    }
    if (arg0->unk89C != 2) {
        return;
    }
    temp_r2_4 = arg0->unk544;
    temp_r1_7 = *temp_r2_4;
    if ((s32) ((0 - temp_r1_7) | temp_r1_7) >= 0) {
        func_08009378(temp_r2_4 + 0xC, 0x889, 1, 1);
        temp_r0_11 = func_08008940(arg0);
        ((void (*)(void *,...))(temp_r0_11->unk8->unk10))(temp_r0_11, arg0->unk544);
    }
    temp_r0_12 = *arg0->unk544;
    sp54 = &sp0 + 0x10;
    temp_r2_5 = (GenObj *)((u8 *)arg0 + 0xC);
    sp5C = &sp0 + 0x44;
    if ((s32) ((0 - temp_r0_12) | temp_r0_12) < 0) {
        do {
            func_080087C8(arg0);
            func_080C2D54(arg0);
            temp_r0_13 = *arg0->unk544;
        } while ((s32) ((0 - temp_r0_13) | temp_r0_13) < 0);
    }
    func_0800934C(arg0->unk544 + 0xC, 0x889, 1, 1);
    temp_r0_14 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_14->unk8->unk10))(temp_r0_14, arg0->unk544);
    arg0->unk5F0->unk10 = 0x100U;
    arg0->unk5A0->unk10 = 0x100U;
    arg0->unk728->unk10 = 0x100;
    arg0->unk97B = 0x19;
    func_0804EC84(0x19, &spC, 0);
    sp40 = 4;
    sp40.unk2 = 2;
    func_0804E7A0(sp40, temp_r2_5, 0);
    sp44 = 4;
    sp5C->unk2 = 2;
    sp0 = &spC;
    sp4 = 0;
    sp8 = 1;
    func_0804E958(sp44, temp_r2_5, 0, 0);
    temp_r4_6 = func_08008910(arg0);
    temp_r0_15 = (GenObj *)((u8 *)arg0 + 0x83C);
    func_08008F0C(&sp10, temp_r2_5, (func_08007D4C(temp_r0_15, temp_r0_15->unk4) << 5) + 0x06010000, 0x100U);
    temp_r1_8 = temp_r4_6->unk4;
    if (temp_r1_8 != temp_r4_6->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32 *) sp54->unk0;
            temp_r1_8->unk4 = (s32) sp54->unk4;
            temp_r1_8->unk8 = (s32) sp54->unk8;
            temp_r1_8->unkC = (s32) sp54->unkC;
        }
        temp_r4_6->unk4 = (void *) (temp_r4_6->unk4 + 0x10);
        return;
    }
    sp64 = temp_r1_8;
    sp4C = 1;
    temp_r4_7 = (s32) (temp_r1_8 - temp_r4_6->unk0) >> 4;
    sp48 = temp_r4_7;
    var_r0_6 = &sp48;
    if ((u32) temp_r4_7 < 1U) {
        var_r0_6 = &sp4C;
    }
    temp_r0_16 = temp_r4_7 + *var_r0_6;
    if (temp_r0_16 != 0) {
        temp_r4_8 = temp_r0_16 * 0x10;
        var_r0_7 = malloc(temp_r4_8);
        var_sb_3 = temp_r4_8;
        if (var_r0_7 == 0) {
            var_r0_7 = func_080D3BC0(var_sb_3);
        }
    } else {
        var_r0_7 = 0;
        var_sb_3 = 0;
    }
    var_r2_5 = temp_r4_6->unk0;
    var_r3_3 = var_r0_7;
loop_93:
    if (var_r2_5 != sp64) {
        if (var_r3_3 != 0) {
            var_r3_3->unk0 = (s32 *) var_r2_5->unk0;
            var_r3_3->unk4 = (s32) var_r2_5->unk4;
            var_r3_3->unk8 = (s32) var_r2_5->unk8;
            var_r3_3->unkC = (s32) var_r2_5->unkC;
        }
        var_r2_5 += 0x10;
        var_r3_3 += 0x10;
        goto loop_93;
    }
    if (sp4C == 1) {
        if (var_r3_3 != 0) {
            var_r3_3->unk0 = (s32 *) sp54->unk0;
            var_r3_3->unk4 = (s32) sp54->unk4;
            var_r3_3->unk8 = (s32) sp54->unk8;
            var_r3_3->unkC = (s32) sp54->unkC;
        }
        var_r5_3 = (GenObj *)((u8 *)var_r3_3 + 0x10);
    } else {
        var_r3_4 = sp4C;
        var_r2_6 = var_r3_3;
        if (var_r3_4 != 0) {
            do {
                if (var_r2_6 != 0) {
                    var_r2_6->unk0 = (s32 *) sp54->unk0;
                    var_r2_6->unk4 = (s32) sp54->unk4;
                    var_r2_6->unk8 = (s32) sp54->unk8;
                    var_r2_6->unkC = (s32) sp54->unkC;
                }
                var_r3_4 -= 1;
                var_r2_6 += 0x10;
            } while (var_r3_4 != 0);
        }
        var_r5_3 = var_r2_6;
    }
    temp_r2_6 = temp_r4_6->unk4;
    temp_r0_17 = temp_r4_6->unk0;
    var_r1_3 = temp_r0_17;
    if (temp_r0_17 != temp_r2_6) {
        do {
            var_r1_3 += 0x10;
        } while (var_r1_3 != temp_r2_6);
    }
    if (temp_r0_17 != 0) {
        free();
    }
    temp_r4_6->unk0 = var_r0_7;
    temp_r4_6->unk4 = var_r5_3;
    temp_r4_6->unkC = (void *) (var_sb_3 + var_r0_7);
}
