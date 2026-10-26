s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s16 func_08007D4C(s32 *, s32);                        /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_0805E824(void *, s32, s32, s32);         /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E99C(s32, s32, u16, s32);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_08107D6C;

void func_080BC288(void *arg0, void *arg1) {
s32 sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
s32 sp10;
s32 sp14;
s32 sp50;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    u32 sp80;
    u32 sp84;
    void *sp88;
    void *sp8C;
    void *sp90;
    void *sp94;
    s16 temp_r2;
    s16 temp_r2_3;
    s16 temp_r2_5;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_10;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r4_11;
    s32 temp_r4_13;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    u16 var_r2_7;
    u16 var_r2_8;
    u16 var_r3;
    u16 var_r3_4;
    u16 var_r3_7;
    u32 *var_r0_5;
    u32 var_r3_9;
    u32 var_r7;
    void **temp_r1;
    void **temp_r1_4;
    void **var_r5_3;
    void *temp_r0;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_9;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_12;
    void *temp_r4_2;
    void *temp_r4_7;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r6;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r3_8;
    void *var_r4;
    void *var_r5;
    void *var_r5_2;
    void *var_r6;

    sp88 = arg1;
    func_08007874(&sp0);
    sp4 = 0;
    func_08007874(&sp8);
    sp8.unk4 = 0;
    func_08007C28(&sp0, sp4);
    sp4 = func_08007B54(&sp0, 2);
    func_08007C28(&sp8, spC);
    spC = func_08007B54(&sp8, 3);
    memcpy(&sp10, &gUnk_08107D6C, 0x40);
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    if (temp_r0 != arg0->unkAA4) {
        __builtin_delete();
    }
    arg0->unkAA4 = temp_r0;
    temp_r0_2 = func_0805E824(__builtin_new(0x14), arg0->unk77C, 0, 0x100);
    if (temp_r0_2 != arg0->unkAC8) {
        __builtin_delete();
    }
    arg0->unkAC8 = temp_r0_2;
    func_0805E860(arg0->unkAA4, 0x91A);
    func_0805E860(arg0->unkAC8, 0x91B);
    temp_r4 = arg0 + 0xAA8;
    temp_r0_3 = arg0->unkAA4;
    temp_r1 = temp_r0_3->unk0;
    (*temp_r1)->unk10(&sp50, temp_r1, *(temp_r0_3->unk4 + (temp_r0_3->unkC * 4)));
    memcpy(&sp50, &sp50, 0x20);
    temp_r0_4 = &sp50 + 0xC;
    arg0->unkAA8 = (s32) sp50.unk0;
    temp_r4->unk4 = (s32) sp50.unk4;
    temp_r4->unk8 = (s32) sp50.unk8;
    temp_r4_2 = temp_r4 + 0xC;
    temp_r4->unkC = (s32) sp50.unkC;
    temp_r4_2->unk4 = (s32) temp_r0_4->unk4;
    temp_r4_2->unk8 = (s32) temp_r0_4->unk8;
    temp_r4_2->unkC = (s32) temp_r0_4->unkC;
    (temp_r4_2 + 0xC)->unk4 = (s32) (temp_r0_4 + 0xC)->unk4;
    temp_r6 = func_08008910(arg0);
    temp_r7 = arg0->unkAB0;
    temp_r2 = func_08007D4C(&sp0, sp4);
    var_r3 = 0;
    if (arg0->unkAB0 != 0) {
        var_r3 = (arg0 + 0xAB0)->unk4;
    }
    func_08008F0C(&sp50, temp_r7, (temp_r2 << 5) + 0x06010000, var_r3);
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp50.unk0;
            temp_r1_2->unk4 = (s32) sp50.unk4;
            temp_r1_2->unk8 = (s32) sp50.unk8;
            temp_r1_2->unkC = (s32) sp50.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        sp8C = temp_r1_2;
        sp74 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - temp_r6->unk0) >> 4;
        sp70 = temp_r4_3;
        var_r0 = &sp70;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp74;
        }
        temp_r0_5 = temp_r4_3 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_4 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_sb = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        sp90 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3_2 = var_r0_2;
        if (var_r2 != sp8C) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != sp8C);
        }
        if (sp74 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp50.unk0;
                var_r3_2->unk4 = (s32) sp50.unk4;
                var_r3_2->unk8 = (s32) sp50.unk8;
                var_r3_2->unkC = (s32) sp50.unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp74;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp50.unk0;
                        var_r2_2->unk4 = (s32) sp50.unk4;
                        var_r2_2->unk8 = (s32) sp50.unk8;
                        var_r2_2->unkC = (s32) sp50.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_2 = temp_r6->unk4;
        temp_r0_6 = temp_r6->unk0;
        var_r1 = temp_r0_6;
        if (temp_r0_6 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        temp_r6->unk0 = sp90;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp90 + var_sb);
    }
    temp_r5 = func_08008910(arg0);
    temp_r7_2 = arg0->unkAB8;
    temp_r2_3 = func_080074C0(sp88, sp88->unk4);
    var_r3_4 = 0;
    if (arg0->unkAB8 != 0) {
        var_r3_4 = (arg0 + 0xAB8)->unk4;
    }
    func_08008F0C(&sp50, temp_r7_2, (temp_r2_3 << 5) + 0x05000200, var_r3_4);
    temp_r1_3 = temp_r5->unk4;
    if (temp_r1_3 != temp_r5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp50.unk0;
            temp_r1_3->unk4 = (s32) sp50.unk4;
            temp_r1_3->unk8 = (s32) sp50.unk8;
            temp_r1_3->unkC = (s32) sp50.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
    } else {
        sp8C = temp_r1_3;
        sp7C = 1;
        temp_r4_5 = (s32) (temp_r1_3 - temp_r5->unk0) >> 4;
        sp78 = temp_r4_5;
        var_r0_3 = &sp78;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_3 = &sp7C;
        }
        temp_r0_7 = temp_r4_5 + *var_r0_3;
        if (temp_r0_7 != 0) {
            temp_r4_6 = temp_r0_7 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_sb_2 = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        sp90 = var_r0_4;
        var_r2_3 = temp_r5->unk0;
        var_r3_5 = var_r0_4;
loop_50:
        if (var_r2_3 != sp8C) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) var_r2_3->unk0;
                var_r3_5->unk4 = (s32) var_r2_3->unk4;
                var_r3_5->unk8 = (s32) var_r2_3->unk8;
                var_r3_5->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_5 += 0x10;
            goto loop_50;
        }
        if (sp7C == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp50.unk0;
                var_r3_5->unk4 = (s32) sp50.unk4;
                var_r3_5->unk8 = (s32) sp50.unk8;
                var_r3_5->unkC = (s32) sp50.unkC;
            }
            var_r5_2 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = sp7C;
            var_r2_4 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp50.unk0;
                        var_r2_4->unk4 = (s32) sp50.unk4;
                        var_r2_4->unk8 = (s32) sp50.unk8;
                        var_r2_4->unkC = (s32) sp50.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_4 = temp_r5->unk4;
        temp_r0_8 = temp_r5->unk0;
        var_r1_2 = temp_r0_8;
        if (temp_r0_8 != temp_r2_4) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_4);
        }
        if (temp_r0_8 != 0) {
            free();
        }
        temp_r5->unk0 = sp90;
        temp_r5->unk4 = var_r5_2;
        temp_r5->unkC = (void *) (sp90 + var_sb_2);
    }
    temp_r5_2 = arg0 + 0xACC;
    temp_r0_9 = arg0->unkAC8;
    temp_r1_4 = temp_r0_9->unk0;
    (*temp_r1_4)->unk10(&sp50, temp_r1_4, *(temp_r0_9->unk4 + (temp_r0_9->unkC * 4)));
    memcpy(&sp50, &sp50, 0x20);
    temp_r4_7 = &sp50 + 0xC;
    arg0->unkACC = (s32) sp50.unk0;
    temp_r5_2->unk4 = (s32) sp50.unk4;
    temp_r5_2->unk8 = (s32) sp50.unk8;
    temp_r5_3 = temp_r5_2 + 0xC;
    temp_r5_2->unkC = (s32) sp50.unkC;
    temp_r5_3->unk4 = (s32) temp_r4_7->unk4;
    temp_r5_3->unk8 = (s32) temp_r4_7->unk8;
    temp_r5_3->unkC = (s32) temp_r4_7->unkC;
    (temp_r5_3 + 0xC)->unk4 = (s32) (temp_r4_7 + 0xC)->unk4;
    temp_r5_4 = func_08008910(arg0);
    temp_r7_3 = arg0->unkAD4;
    temp_r2_5 = func_08007D4C(&sp8, spC);
    var_r3_7 = 0;
    if (arg0->unkAD4 != 0) {
        var_r3_7 = (arg0 + 0xAD4)->unk4;
    }
    func_08008F0C(&sp50, temp_r7_3, (temp_r2_5 << 5) + 0x06010000, var_r3_7);
    temp_r1_5 = temp_r5_4->unk4;
    if (temp_r1_5 != temp_r5_4->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp50.unk0;
            temp_r1_5->unk4 = (s32) sp50.unk4;
            temp_r1_5->unk8 = (s32) sp50.unk8;
            temp_r1_5->unkC = (s32) sp50.unkC;
        }
        temp_r5_4->unk4 = (void *) (temp_r5_4->unk4 + 0x10);
    } else {
        sp8C = temp_r1_5;
        sp84 = 1;
        temp_r4_8 = (s32) (sp8C - temp_r5_4->unk0) >> 4;
        var_r0_5 = &sp80;
        *var_r0_5 = (u32) temp_r4_8;
        if ((u32) temp_r4_8 < (u32) sp84) {
            var_r0_5 = &sp84;
        }
        temp_r0_10 = temp_r4_8 + *var_r0_5;
        if (temp_r0_10 != 0) {
            temp_r4_9 = temp_r0_10 * 0x10;
            var_r0_6 = malloc(temp_r4_9);
            var_sb_3 = temp_r4_9;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_sb_3);
            }
        } else {
            var_r0_6 = 0;
            var_sb_3 = 0;
        }
        sp94 = var_r0_6;
        var_r2_5 = temp_r5_4->unk0;
        var_r3_8 = var_r0_6;
        if (var_r2_5 != sp8C) {
            do {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_5->unk0;
                    var_r3_8->unk4 = (s32) var_r2_5->unk4;
                    var_r3_8->unk8 = (s32) var_r2_5->unk8;
                    var_r3_8->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_8 += 0x10;
            } while (var_r2_5 != sp8C);
        }
        if (sp84 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) sp50.unk0;
                var_r3_8->unk4 = (s32) sp50.unk4;
                var_r3_8->unk8 = (s32) sp50.unk8;
                var_r3_8->unkC = (s32) sp50.unkC;
            }
            var_r4 = var_r3_8 + 0x10;
        } else {
            var_r3_9 = sp84;
            var_r2_6 = var_r3_8;
            if (var_r3_9 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp50.unk0;
                        var_r2_6->unk4 = (s32) sp50.unk4;
                        var_r2_6->unk8 = (s32) sp50.unk8;
                        var_r2_6->unkC = (s32) sp50.unkC;
                    }
                    var_r3_9 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_9 != 0);
            }
            var_r4 = var_r2_6;
        }
        temp_r2_6 = temp_r5_4->unk4;
        temp_r0_11 = temp_r5_4->unk0;
        var_r1_3 = temp_r0_11;
        if (temp_r0_11 != temp_r2_6) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_6);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        temp_r5_4->unk0 = sp94;
        temp_r5_4->unk4 = var_r4;
        temp_r5_4->unkC = (void *) (sp94 + var_sb_3);
    }
    var_r7 = 0;
    var_r5_3 = arg0 + 0xAEC;
    var_r6 = arg0 + 0xFFFFFE8A;
    var_sb_4 = 0;
loop_96:
    temp_r0_12 = __builtin_new(0x1C);
    temp_r0_12->unk0 = 0;
    temp_r0_12->unk2 = 0;
    temp_r0_12->unk4 = 0;
    temp_r0_12->unk6 = 0;
    temp_r0_12->unk8 = 0;
    temp_r0_12->unkC = 0;
    temp_r0_12->unk10 = 0;
    temp_r0_12->unk11 = 0;
    temp_r0_12->unk14 = 0;
    temp_r0_12->unk18 = 0;
    if (temp_r0_12 != *var_r5_3) {
        __builtin_delete();
    }
    *var_r5_3 = temp_r0_12;
    if (var_r7 <= 7U) {
        temp_r1_6 = var_r7 * 8;
        temp_r0_12->unk0 = (s16) (&sp0 + temp_r1_6)->unk10;
        temp_r0_12->unk2 = (s16) *(&sp14 + temp_r1_6);
        temp_r0_12->unk6 = func_08007D4C(&sp8, spC);
        temp_r4_10 = *var_r5_3;
        temp_r4_10->unk4 = func_080074C0(sp88, sp88->unk4);
        (*var_r5_3)->unk8 = 2;
        temp_r4_11 = func_08008920(arg0);
        temp_r1_7 = arg0->unkACC;
        var_r2_7 = 0;
        if (temp_r1_7 != 0) {
            var_r2_7 = (arg0 + 0xACC)->unk4;
        }
        func_0805E99C(temp_r4_11, temp_r1_7, var_r2_7, (var_sb_4 + arg0)->unkAEC);
    } else {
        temp_r0_12->unk0 = (s16) ((u16) var_r6->unk0 >> 8);
        temp_r0_12->unk2 = (s16) ((u16) var_r6->unk2 >> 8);
        temp_r0_12->unk6 = func_08007D4C(&sp0, sp4);
        temp_r4_12 = *var_r5_3;
        temp_r4_12->unk4 = func_080074C0(sp88, sp88->unk4);
        (*var_r5_3)->unk0 = (s16) ((u16) var_r6->unk0 >> 8);
        (*var_r5_3)->unk2 = (s16) ((u16) var_r6->unk2 >> 8);
        (*var_r5_3)->unk8 = (s16) var_r6->unkB;
        temp_r4_13 = func_08008920(arg0);
        temp_r1_8 = arg0->unkAA8;
        var_r2_8 = 0;
        if (temp_r1_8 != 0) {
            var_r2_8 = (arg0 + 0xAA8)->unk4;
        }
        func_0805E99C(temp_r4_13, temp_r1_8, var_r2_8, (var_sb_4 + arg0)->unkAEC);
    }
    temp_r1_9 = *var_r5_3;
    var_r5_3 += 4;
    temp_r1_9->unk18 = 1;
    var_r6 += 0x40;
    var_sb_4 += 4;
    var_r7 += 1;
    if (var_r7 <= 9U) {
        goto loop_96;
    }
    func_08007C28(&sp8, spC);
    func_080079E8(&sp8, 2);
    func_08007C28(&sp0, sp4);
    func_080079E8(&sp0, 2);
    func_080073E0(sp88, sp88->unk4);
    func_08007184(sp88, 2);
}
