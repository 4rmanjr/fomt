s32 __builtin_delete();                               /* extern */
s16 *__builtin_new(s32);                            /* extern */
s32 free();                                           /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_08008F0C(s32 **, void *, s32, u16);            /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32);             /* extern */
s32 func_0804EA94(s32 **, s32, s32, s16);               /* extern */
s32 func_0804EC84(u8, ? *, s32);                      /* extern */
void *func_0805E824(s16 *, s32, s32, s32);          /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_080AE6CC(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 **, ? **, s32);                          /* extern */
extern s32 gUnk_080F9F78;
extern ? gUnk_0810752C;
extern ? gUnk_08107540;

void func_080AE894(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
s32 sp10;
    ? *sp14;
s32 sp24;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    ? **spB4;
    ? **spB8;
    ? **spBC;
    ? **spC0;
    void *spC4;
    void *spC8;
    void *spCC;
    ? **spD0;
    void *spD4;
    void *spD8;
    ? *temp_r0_38;
    s16 **var_r5_7;
    s16 *temp_r0_15;
    s16 *temp_r0_24;
    s16 *temp_r0_35;
    s16 *temp_r0_37;
    s16 *temp_r0_42;
    s16 *temp_r0_45;
    s16 *temp_r0_48;
    s16 *temp_r0_6;
    s16 *temp_r1_14;
    s16 *temp_r4_12;
    s16 *temp_r4_20;
    s16 *temp_r4_4;
    s16 temp_r2_2;
    s16 temp_r2_5;
    s16 temp_r2_8;
    s16 temp_r3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r2_5;
    s32 temp_r0_12;
    s32 temp_r0_18;
    s32 temp_r0_21;
    s32 temp_r0_2;
    s32 temp_r0_30;
    s32 temp_r0_33;
    s32 temp_r0_9;
    s32 temp_r1_17;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 var_r3_2;
    s32 var_r3_5;
    s32 var_r3_8;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    s32 var_sl_4;
    s32 var_sl_5;
    u16 var_r3_12;
    u16 var_r3_15;
    u16 var_r3_18;
    u16 var_r3_3;
    u16 var_r3_6;
    u16 var_r3_9;
    u32 *var_r0_10;
    u32 *var_r0_12;
    u32 *var_r0_6;
    u32 *var_r0_8;
    u32 var_r3_11;
    u32 var_r3_14;
    u32 var_r3_17;
    u32 var_r3_20;
    void **temp_r1_11;
    void **temp_r1_5;
    void **temp_r1_8;
    void **var_r8_7;
    void **var_r8_8;
    void **var_r8_9;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_16;
    void *temp_r0_17;
    void *temp_r0_19;
    void *temp_r0_20;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_27;
    void *temp_r0_28;
    void *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_32;
    void *temp_r0_34;
    void *temp_r0_36;
    void *temp_r0_39;
    void *temp_r0_3;
    void *temp_r0_40;
    void *temp_r0_41;
    void *temp_r0_43;
    void *temp_r0_44;
    void *temp_r0_46;
    void *temp_r0_47;
    void *temp_r0_49;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r4;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_17;
    void *temp_r4_21;
    void *temp_r4_22;
    void *temp_r4_25;
    void *temp_r4_28;
    void *temp_r4_29;
    void *temp_r4_30;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_9;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;
    void *var_r0_11;
    void *var_r0_13;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r2;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3;
    void *var_r3_10;
    void *var_r3_13;
    void *var_r3_16;
    void *var_r3_19;
    void *var_r3_4;
    void *var_r3_7;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r6;

    func_08008E64(gUnk_080F9F78, 0x050003C0, 0x20);
    func_080AE6CC(arg0);
    (void *)0x0500024A->unk0 = (u16) *(u16 *)0x050003C2;
    temp_r1 = (void *)0x0500024A + 2;
    (void *)0x0500024A->unk2 = (u16) *(u16 *)0x050003C4;
    temp_r1->unk2 = 0x1F;
    (temp_r1 + 2)->unk2 = 0x675E;
    func_08008EB8(0, arg0 + 0x440, 8);
    func_0804EC84(arg0->unk90B, &sp10, 0);
    (void *)0x05000240->unk0 = 0x3E0;
    temp_r1_2 = (void *)0x05000240 + 2;
    (void *)0x05000240->unk2 = 0x303;
    temp_r1_3 = temp_r1_2 + 2;
    temp_r1_2->unk2 = 0x4F15;
    temp_r1_3->unk2 = 0x7FFF;
    (temp_r1_3 + 2)->unk2 = 0x52F8;
    sp6C.unk0 = 4;
    sp6C.unk2 = 2;
    temp_r4 = arg0 + 0xC;
    func_0804E7A0(sp6C, temp_r4, 0);
    sp70.unk0 = 4;
    sp70.unk2 = 2;
    sp0 = &sp10;
    sp4 = 0;
    sp8 = 1;
    func_0804E958(sp70, temp_r4, 0, 0);
    temp_r5 = func_08008910(arg0);
    temp_r0 = arg0 + 0x888;
    func_08008F0C(&sp14, temp_r4, (func_08007D4C(temp_r0, temp_r0->unk4) << 5) + 0x06010000, 0x100U);
    temp_r1_4 = temp_r5->unk4;
    if (temp_r1_4 != temp_r5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32 *) sp14.unk0;
            temp_r1_4->unk4 = (s32) sp14.unk4;
            temp_r1_4->unk8 = (s32) sp14.unk8;
            temp_r1_4->unkC = (s32) sp14.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        spC0 = &sp0 + 0x7C;
        spB4 = &sp0 + 0x24;
        spB8 = &sp0 + 0x44;
        spBC = &sp0 + 0x48;
    } else {
        spD4 = temp_r1_4;
        sp78 = 1;
        temp_r4_2 = (s32) (spD4 - temp_r5->unk0) >> 4;
        sp74 = temp_r4_2;
        var_r0 = &sp74;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp78;
        }
        temp_r0_2 = temp_r4_2 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_3 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sl = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        spD8 = var_r0_2;
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        spC0 = &sp0 + 0x7C;
        spB4 = &sp0 + 0x24;
        spB8 = &sp0 + 0x44;
        spBC = &sp0 + 0x48;
        if (var_r2 != spD4) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != spD4);
        }
        if (sp78 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32 *) sp14.unk0;
                var_r3->unk4 = (s32) sp14.unk4;
                var_r3->unk8 = (s32) sp14.unk8;
                var_r3->unkC = (s32) sp14.unkC;
            }
            var_r6 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp78;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32 *) sp14.unk0;
                        var_r2_2->unk4 = (s32) sp14.unk4;
                        var_r2_2->unk8 = (s32) sp14.unk8;
                        var_r2_2->unkC = (s32) sp14.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r6 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_3 = temp_r5->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        temp_r5->unk0 = spD8;
        temp_r5->unk4 = var_r6;
        temp_r5->unkC = (void *) (spD8 + var_sl);
    }
    temp_r0_4 = arg0 + 0x888;
    temp_r3 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    sp0 = (s32 *)2;
    sp4 = 0;
    sp8 = 2;
    spC = 1;
    func_0804EA94(spC0, 0xD0, 8, temp_r3);
    arg0->unk440 = sp7C;
    (arg0 + 0x440)->unk4 = sp80;
    temp_r0_5 = func_0805E824(__builtin_new(0x14), arg0->unk41C, 0, 0x100);
    if (temp_r0_5 != arg0->unk4B0) {
        __builtin_delete();
    }
    arg0->unk4B0 = temp_r0_5;
    temp_r0_6 = __builtin_new(0x1C);
    temp_r0_6->unk0 = 0;
    temp_r0_6->unk2 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk6 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk11 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    if (temp_r0_6 != arg0->unk4B4) {
        __builtin_delete();
    }
    arg0->unk4B4 = temp_r0_6;
    func_0805E860(arg0->unk4B0, 0);
    arg0->unk4B4->unk0 = 0x40;
    arg0->unk4B4->unk2 = 0x40;
    temp_r4_4 = arg0->unk4B4;
    temp_r5_2 = arg0 + 0x890;
    temp_r4_4->unk6 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    arg0->unk4B4->unk4 = 3;
    temp_r4_5 = arg0 + 0x4B8;
    temp_r0_7 = arg0->unk4B0;
    temp_r1_5 = temp_r0_7->unk0;
    (*temp_r1_5)->unk10(&sp24, temp_r1_5, *(temp_r0_7->unk4 + (temp_r0_7->unkC * 4)));
    memcpy(spB4, spB4, 0x20);
    temp_r0_8 = spB4 + 0xC;
    arg0->unk4B8 = (s32 *) spB4->unk0;
    temp_r4_5->unk4 = (s32) spB4->unk4;
    temp_r4_5->unk8 = (s32) spB4->unk8;
    temp_r4_6 = temp_r4_5 + 0xC;
    temp_r4_5->unkC = (s32) spB4->unkC;
    temp_r4_6->unk4 = (s32) temp_r0_8->unk4;
    temp_r4_6->unk8 = (s32) temp_r0_8->unk8;
    temp_r4_6->unkC = (s32) temp_r0_8->unkC;
    (temp_r4_6 + 0xC)->unk4 = (s32) (temp_r0_8 + 0xC)->unk4;
    temp_r6 = func_08008910(arg0);
    temp_r7 = arg0->unk4C0;
    temp_r2_2 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    var_r3_3 = 0;
    if (arg0->unk4C0 != 0) {
        var_r3_3 = (arg0 + 0x4C0)->unk4;
    }
    func_08008F0C(&sp14, temp_r7, (temp_r2_2 << 5) + 0x06010000, var_r3_3);
    temp_r1_6 = temp_r6->unk4;
    if (temp_r1_6 != temp_r6->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32 *) sp14.unk0;
            temp_r1_6->unk4 = (s32) sp14.unk4;
            temp_r1_6->unk8 = (s32) sp14.unk8;
            temp_r1_6->unkC = (s32) sp14.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        spD4 = temp_r1_6;
        sp88 = 1;
        temp_r4_7 = (s32) (temp_r1_6 - temp_r6->unk0) >> 4;
        sp84 = temp_r4_7;
        var_r0_3 = &sp84;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_3 = &sp88;
        }
        temp_r0_9 = temp_r4_7 + *var_r0_3;
        if (temp_r0_9 != 0) {
            temp_r4_8 = temp_r0_9 * 0x10;
            var_r0_4 = malloc(temp_r4_8);
            var_r8 = temp_r4_8;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_4 = 0;
            var_r8 = 0;
        }
        spD8 = var_r0_4;
        var_r2_3 = temp_r6->unk0;
        var_r3_4 = var_r0_4;
        if (var_r2_3 != spD4) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_3->unk0;
                    var_r3_4->unk4 = (s32) var_r2_3->unk4;
                    var_r3_4->unk8 = (s32) var_r2_3->unk8;
                    var_r3_4->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_3 != spD4);
        }
        if (sp88 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32 *) sp14.unk0;
                var_r3_4->unk4 = (s32) sp14.unk4;
                var_r3_4->unk8 = (s32) sp14.unk8;
                var_r3_4->unkC = (s32) sp14.unkC;
            }
            var_r5 = var_r3_4 + 0x10;
        } else {
            var_r3_5 = sp88;
            var_r2_4 = var_r3_4;
            if (var_r3_5 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32 *) sp14.unk0;
                        var_r2_4->unk4 = (s32) sp14.unk4;
                        var_r2_4->unk8 = (s32) sp14.unk8;
                        var_r2_4->unkC = (s32) sp14.unkC;
                    }
                    var_r3_5 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_5 != 0);
            }
            var_r5 = var_r2_4;
        }
        temp_r2_3 = temp_r6->unk4;
        temp_r0_10 = temp_r6->unk0;
        var_r1_2 = temp_r0_10;
        if (temp_r0_10 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_10 != 0) {
            free();
        }
        temp_r6->unk0 = spD8;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (spD8 + var_r8);
    }
    temp_r4_9 = func_08008910(arg0);
    temp_r0_11 = arg0->unk4C8;
    var_r3_6 = 0;
    if (temp_r0_11 != 0) {
        var_r3_6 = (arg0 + 0x4C8)->unk4;
    }
    func_08008F0C(&sp14, temp_r0_11, 0x05000260, var_r3_6);
    temp_r1_7 = temp_r4_9->unk4;
    if (temp_r1_7 != temp_r4_9->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32 *) sp14.unk0;
            temp_r1_7->unk4 = (s32) sp14.unk4;
            temp_r1_7->unk8 = (s32) sp14.unk8;
            temp_r1_7->unkC = (s32) sp14.unkC;
        }
        temp_r4_9->unk4 = (void *) (temp_r4_9->unk4 + 0x10);
    } else {
        spD4 = temp_r1_7;
        sp90 = 1;
        temp_r4_10 = (s32) (spD4 - temp_r4_9->unk0) >> 4;
        sp8C = temp_r4_10;
        var_r2_5 = &sp8C;
        if ((u32) temp_r4_10 < (u32) sp90) {
            var_r2_5 = &sp90;
        }
        temp_r0_12 = temp_r4_10 + *var_r2_5;
        if (temp_r0_12 != 0) {
            temp_r4_11 = temp_r0_12 * 0x10;
            var_r0_5 = malloc(temp_r4_11);
            var_r8_2 = temp_r4_11;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        spD8 = var_r0_5;
        var_r2_6 = temp_r4_9->unk0;
        var_r3_7 = var_r0_5;
        if (var_r2_6 != spD4) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_6->unk0;
                    var_r3_7->unk4 = (s32) var_r2_6->unk4;
                    var_r3_7->unk8 = (s32) var_r2_6->unk8;
                    var_r3_7->unkC = (s32) var_r2_6->unkC;
                }
                var_r2_6 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_6 != spD4);
        }
        if (sp90 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32 *) sp14.unk0;
                var_r3_7->unk4 = (s32) sp14.unk4;
                var_r3_7->unk8 = (s32) sp14.unk8;
                var_r3_7->unkC = (s32) sp14.unkC;
            }
            var_r5_2 = var_r3_7 + 0x10;
        } else {
            var_r3_8 = sp90;
            var_r2_7 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_7 != 0) {
                        var_r2_7->unk0 = (s32 *) sp14.unk0;
                        var_r2_7->unk4 = (s32) sp14.unk4;
                        var_r2_7->unk8 = (s32) sp14.unk8;
                        var_r2_7->unkC = (s32) sp14.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_7 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_2 = var_r2_7;
        }
        temp_r2_4 = temp_r4_9->unk4;
        temp_r0_13 = temp_r4_9->unk0;
        var_r1_3 = temp_r0_13;
        if (temp_r0_13 != temp_r2_4) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_4);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        temp_r4_9->unk0 = spD8;
        temp_r4_9->unk4 = var_r5_2;
        temp_r4_9->unkC = (void *) (spD8 + var_r8_2);
    }
    temp_r0_14 = func_0805E824(__builtin_new(0x14), arg0->unk424, 0, 0x100);
    if (temp_r0_14 != arg0->unk4D8) {
        __builtin_delete();
    }
    arg0->unk4D8 = temp_r0_14;
    temp_r0_15 = __builtin_new(0x1C);
    temp_r0_15->unk0 = 0;
    temp_r0_15->unk2 = 0;
    temp_r0_15->unk4 = 0;
    temp_r0_15->unk6 = 0;
    temp_r0_15->unk8 = 0;
    temp_r0_15->unkC = 0;
    temp_r0_15->unk10 = 0;
    temp_r0_15->unk11 = 0;
    temp_r0_15->unk14 = 0;
    temp_r0_15->unk18 = 0;
    if (temp_r0_15 != arg0->unk4DC) {
        __builtin_delete();
    }
    arg0->unk4DC = temp_r0_15;
    func_0805E860(arg0->unk4D8, 0);
    arg0->unk4DC->unk0 = 0xC0;
    arg0->unk4DC->unk2 = 0;
    temp_r4_12 = arg0->unk4DC;
    temp_r5_3 = arg0 + 0x8A0;
    temp_r4_12->unk6 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
    arg0->unk4DC->unk4 = 4;
    arg0->unk4DC->unk8 = 1;
    arg0->unk4DC->unk18 = 1;
    temp_r4_13 = arg0 + 0x4E0;
    temp_r0_16 = arg0->unk4D8;
    temp_r1_8 = temp_r0_16->unk0;
    (*temp_r1_8)->unk10(&sp14, temp_r1_8, *(temp_r0_16->unk4 + (temp_r0_16->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r0_17 = &sp14 + 0xC;
    arg0->unk4E0 = (s32 *) sp14.unk0;
    temp_r4_13->unk4 = (s32) sp14.unk4;
    temp_r4_13->unk8 = (s32) sp14.unk8;
    temp_r4_14 = temp_r4_13 + 0xC;
    temp_r4_13->unkC = (s32) sp14.unkC;
    temp_r4_14->unk4 = (s32) temp_r0_17->unk4;
    temp_r4_14->unk8 = (s32) temp_r0_17->unk8;
    temp_r4_14->unkC = (s32) temp_r0_17->unkC;
    (temp_r4_14 + 0xC)->unk4 = (s32) (temp_r0_17 + 0xC)->unk4;
    temp_r6_2 = func_08008910(arg0);
    temp_r7_2 = arg0->unk4E8;
    temp_r2_5 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
    var_r3_9 = 0;
    if (arg0->unk4E8 != 0) {
        var_r3_9 = (arg0 + 0x4E8)->unk4;
    }
    func_08008F0C(&sp14, temp_r7_2, (temp_r2_5 << 5) + 0x06010000, var_r3_9);
    temp_r1_9 = temp_r6_2->unk4;
    if (temp_r1_9 != temp_r6_2->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32 *) sp14.unk0;
            temp_r1_9->unk4 = (s32) sp14.unk4;
            temp_r1_9->unk8 = (s32) sp14.unk8;
            temp_r1_9->unkC = (s32) sp14.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        spD4 = temp_r1_9;
        sp98 = 1;
        temp_r4_15 = (s32) (spD4 - temp_r6_2->unk0) >> 4;
        var_r0_6 = &sp94;
        *var_r0_6 = (u32) temp_r4_15;
        if ((u32) temp_r4_15 < (u32) sp98) {
            var_r0_6 = &sp98;
        }
        temp_r0_18 = temp_r4_15 + *var_r0_6;
        if (temp_r0_18 != 0) {
            temp_r4_16 = temp_r0_18 * 0x10;
            var_r0_7 = malloc(temp_r4_16);
            var_r8_3 = temp_r4_16;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_7 = 0;
            var_r8_3 = 0;
        }
        spD8 = var_r0_7;
        var_r2_8 = temp_r6_2->unk0;
        var_r3_10 = var_r0_7;
        if (var_r2_8 != spD4) {
            do {
                if (var_r3_10 != 0) {
                    var_r3_10->unk0 = (s32) var_r2_8->unk0;
                    var_r3_10->unk4 = (s32) var_r2_8->unk4;
                    var_r3_10->unk8 = (s32) var_r2_8->unk8;
                    var_r3_10->unkC = (s32) var_r2_8->unkC;
                }
                var_r2_8 += 0x10;
                var_r3_10 += 0x10;
            } while (var_r2_8 != spD4);
        }
        if (sp98 == 1) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32 *) sp14.unk0;
                var_r3_10->unk4 = (s32) sp14.unk4;
                var_r3_10->unk8 = (s32) sp14.unk8;
                var_r3_10->unkC = (s32) sp14.unkC;
            }
            var_r5_3 = var_r3_10 + 0x10;
        } else {
            var_r3_11 = sp98;
            var_r2_9 = var_r3_10;
            if (var_r3_11 != 0) {
                do {
                    if (var_r2_9 != 0) {
                        var_r2_9->unk0 = (s32 *) sp14.unk0;
                        var_r2_9->unk4 = (s32) sp14.unk4;
                        var_r2_9->unk8 = (s32) sp14.unk8;
                        var_r2_9->unkC = (s32) sp14.unkC;
                    }
                    var_r3_11 -= 1;
                    var_r2_9 += 0x10;
                } while (var_r3_11 != 0);
            }
            var_r5_3 = var_r2_9;
        }
        temp_r2_6 = temp_r6_2->unk4;
        temp_r0_19 = temp_r6_2->unk0;
        var_r1_4 = temp_r0_19;
        if (temp_r0_19 != temp_r2_6) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_6);
        }
        if (temp_r0_19 != 0) {
            free();
        }
        temp_r6_2->unk0 = spD8;
        temp_r6_2->unk4 = var_r5_3;
        temp_r6_2->unkC = (void *) (spD8 + var_r8_3);
    }
    temp_r4_17 = func_08008910(arg0);
    temp_r0_20 = arg0->unk4F0;
    var_r3_12 = 0;
    if (temp_r0_20 != 0) {
        var_r3_12 = (arg0 + 0x4F0)->unk4;
    }
    func_08008F0C(&sp14, temp_r0_20, 0x05000280, var_r3_12);
    temp_r1_10 = temp_r4_17->unk4;
    if (temp_r1_10 != temp_r4_17->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32 *) sp14.unk0;
            temp_r1_10->unk4 = (s32) sp14.unk4;
            temp_r1_10->unk8 = (s32) sp14.unk8;
            temp_r1_10->unkC = (s32) sp14.unkC;
        }
        temp_r4_17->unk4 = (void *) (temp_r4_17->unk4 + 0x10);
    } else {
        spD4 = temp_r1_10;
        spA0 = 1;
        temp_r4_18 = (s32) (spD4 - temp_r4_17->unk0) >> 4;
        var_r0_8 = &sp9C;
        *var_r0_8 = (u32) temp_r4_18;
        if ((u32) temp_r4_18 < (u32) spA0) {
            var_r0_8 = &spA0;
        }
        temp_r0_21 = temp_r4_18 + *var_r0_8;
        if (temp_r0_21 != 0) {
            temp_r4_19 = temp_r0_21 * 0x10;
            var_r0_9 = malloc(temp_r4_19);
            var_r8_4 = temp_r4_19;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_9 = 0;
            var_r8_4 = 0;
        }
        spD8 = var_r0_9;
        var_r2_10 = temp_r4_17->unk0;
        var_r3_13 = var_r0_9;
        if (var_r2_10 != spD4) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_10->unk0;
                    var_r3_13->unk4 = (s32) var_r2_10->unk4;
                    var_r3_13->unk8 = (s32) var_r2_10->unk8;
                    var_r3_13->unkC = (s32) var_r2_10->unkC;
                }
                var_r2_10 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_10 != spD4);
        }
        if (spA0 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32 *) sp14.unk0;
                var_r3_13->unk4 = (s32) sp14.unk4;
                var_r3_13->unk8 = (s32) sp14.unk8;
                var_r3_13->unkC = (s32) sp14.unkC;
            }
            var_r5_4 = var_r3_13 + 0x10;
        } else {
            var_r3_14 = spA0;
            var_r2_11 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_11 != 0) {
                        var_r2_11->unk0 = (s32 *) sp14.unk0;
                        var_r2_11->unk4 = (s32) sp14.unk4;
                        var_r2_11->unk8 = (s32) sp14.unk8;
                        var_r2_11->unkC = (s32) sp14.unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_11 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_4 = var_r2_11;
        }
        temp_r2_7 = temp_r4_17->unk4;
        temp_r0_22 = temp_r4_17->unk0;
        var_r1_5 = temp_r0_22;
        if (temp_r0_22 != temp_r2_7) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_7);
        }
        if (temp_r0_22 != 0) {
            free();
        }
        temp_r4_17->unk0 = spD8;
        temp_r4_17->unk4 = var_r5_4;
        temp_r4_17->unkC = (void *) (spD8 + var_r8_4);
    }
    temp_r0_23 = func_0805E824(__builtin_new(0x14), arg0->unk428, 0, 0x100);
    if (temp_r0_23 != arg0->unk500) {
        __builtin_delete();
    }
    arg0->unk500 = temp_r0_23;
    temp_r0_24 = __builtin_new(0x1C);
    temp_r0_24->unk0 = 0;
    temp_r0_24->unk2 = 0;
    temp_r0_24->unk4 = 0;
    temp_r0_24->unk6 = 0;
    temp_r0_24->unk8 = 0;
    temp_r0_24->unkC = 0;
    temp_r0_24->unk10 = 0;
    temp_r0_24->unk11 = 0;
    temp_r0_24->unk14 = 0;
    temp_r0_24->unk18 = 0;
    if (temp_r0_24 != arg0->unk504) {
        __builtin_delete();
    }
    arg0->unk504 = temp_r0_24;
    arg0->unk500->unk10 = 0x100;
    arg0->unk504->unk0 = (s16) arg0->unk8E0;
    arg0->unk504->unk2 = 0x40;
    temp_r4_20 = arg0->unk504;
    temp_r0_25 = arg0 + 0x8B0;
    temp_r4_20->unk6 = func_08007D4C(temp_r0_25, temp_r0_25->unk4);
    arg0->unk504->unk4 = 5;
    arg0->unk504->unk8 = 1;
    arg0->unk504->unk18 = 1;
    temp_r0_26 = func_0805E824(__builtin_new(0x14), arg0->unk428, 0, 0x100);
    if (temp_r0_26 != arg0->unk528) {
        __builtin_delete();
    }
    arg0->unk528 = temp_r0_26;
    func_0805E860(temp_r0_26, 0x91A);
    temp_r4_21 = arg0 + 0x530;
    temp_r0_27 = arg0->unk528;
    temp_r1_11 = temp_r0_27->unk0;
    (*temp_r1_11)->unk10(&sp14, temp_r1_11, *(temp_r0_27->unk4 + (temp_r0_27->unkC * 4)));
    memcpy(&sp14, &sp14, 0x20);
    temp_r0_28 = &sp14 + 0xC;
    arg0->unk530 = (s32 *) sp14.unk0;
    temp_r4_21->unk4 = (s32) sp14.unk4;
    temp_r4_21->unk8 = (s32) sp14.unk8;
    temp_r4_22 = temp_r4_21 + 0xC;
    temp_r4_21->unkC = (s32) sp14.unkC;
    temp_r4_22->unk4 = (s32) temp_r0_28->unk4;
    temp_r4_22->unk8 = (s32) temp_r0_28->unk8;
    temp_r4_22->unkC = (s32) temp_r0_28->unkC;
    (temp_r4_22 + 0xC)->unk4 = (s32) (temp_r0_28 + 0xC)->unk4;
    temp_r5_4 = func_08008910(arg0);
    temp_r7_3 = arg0->unk538;
    temp_r0_29 = arg0 + 0x8A8;
    temp_r2_8 = func_08007D4C(temp_r0_29, temp_r0_29->unk4);
    var_r3_15 = 0;
    if (arg0->unk538 != 0) {
        var_r3_15 = (arg0 + 0x538)->unk4;
    }
    func_08008F0C(&sp14, temp_r7_3, (temp_r2_8 << 5) + 0x06010000, var_r3_15);
    temp_r1_12 = temp_r5_4->unk4;
    if (temp_r1_12 != temp_r5_4->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32 *) sp14.unk0;
            temp_r1_12->unk4 = (s32) sp14.unk4;
            temp_r1_12->unk8 = (s32) sp14.unk8;
            temp_r1_12->unkC = (s32) sp14.unkC;
        }
        temp_r5_4->unk4 = (void *) (temp_r5_4->unk4 + 0x10);
    } else {
        spD4 = temp_r1_12;
        spA8 = 1;
        temp_r4_23 = (s32) (spD4 - temp_r5_4->unk0) >> 4;
        var_r0_10 = &spA4;
        *var_r0_10 = (u32) temp_r4_23;
        if ((u32) temp_r4_23 < (u32) spA8) {
            var_r0_10 = &spA8;
        }
        temp_r0_30 = temp_r4_23 + *var_r0_10;
        if (temp_r0_30 != 0) {
            temp_r4_24 = temp_r0_30 * 0x10;
            var_r0_11 = malloc(temp_r4_24);
            var_r8_5 = temp_r4_24;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_11 = 0;
            var_r8_5 = 0;
        }
        spD8 = var_r0_11;
        var_r2_12 = temp_r5_4->unk0;
        var_r3_16 = var_r0_11;
loop_178:
        if (var_r2_12 != spD4) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32 *) var_r2_12->unk0;
                var_r3_16->unk4 = (s32) var_r2_12->unk4;
                var_r3_16->unk8 = (s32) var_r2_12->unk8;
                var_r3_16->unkC = (s32) var_r2_12->unkC;
            }
            var_r2_12 += 0x10;
            var_r3_16 += 0x10;
            goto loop_178;
        }
        if (spA8 == 1) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32 *) sp14.unk0;
                var_r3_16->unk4 = (s32) sp14.unk4;
                var_r3_16->unk8 = (s32) sp14.unk8;
                var_r3_16->unkC = (s32) sp14.unkC;
            }
            var_r5_5 = var_r3_16 + 0x10;
        } else {
            var_r3_17 = spA8;
            var_r2_13 = var_r3_16;
            if (var_r3_17 != 0) {
                do {
                    if (var_r2_13 != 0) {
                        var_r2_13->unk0 = (s32 *) sp14.unk0;
                        var_r2_13->unk4 = (s32) sp14.unk4;
                        var_r2_13->unk8 = (s32) sp14.unk8;
                        var_r2_13->unkC = (s32) sp14.unkC;
                    }
                    var_r3_17 -= 1;
                    var_r2_13 += 0x10;
                } while (var_r3_17 != 0);
            }
            var_r5_5 = var_r2_13;
        }
        temp_r2_9 = temp_r5_4->unk4;
        temp_r0_31 = temp_r5_4->unk0;
        var_r1_6 = temp_r0_31;
        if (temp_r0_31 != temp_r2_9) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_9);
        }
        if (temp_r0_31 != 0) {
            free();
        }
        temp_r5_4->unk0 = spD8;
        temp_r5_4->unk4 = var_r5_5;
        temp_r5_4->unkC = (void *) (spD8 + var_r8_5);
    }
    temp_r4_25 = func_08008910(arg0);
    temp_r0_32 = arg0->unk540;
    var_r3_18 = 0;
    if (temp_r0_32 != 0) {
        var_r3_18 = (arg0 + 0x540)->unk4;
    }
    func_08008F0C(&sp14, temp_r0_32, 0x050003A0, var_r3_18);
    temp_r1_13 = temp_r4_25->unk4;
    if (temp_r1_13 != temp_r4_25->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32 *) sp14.unk0;
            temp_r1_13->unk4 = (s32) sp14.unk4;
            temp_r1_13->unk8 = (s32) sp14.unk8;
            temp_r1_13->unkC = (s32) sp14.unkC;
        }
        temp_r4_25->unk4 = (void *) (temp_r4_25->unk4 + 0x10);
    } else {
        spD4 = temp_r1_13;
        spB0 = 1;
        temp_r4_26 = (s32) (spD4 - temp_r4_25->unk0) >> 4;
        var_r0_12 = &spAC;
        *var_r0_12 = (u32) temp_r4_26;
        if ((u32) temp_r4_26 < (u32) spB0) {
            var_r0_12 = &spB0;
        }
        temp_r0_33 = temp_r4_26 + *var_r0_12;
        if (temp_r0_33 != 0) {
            temp_r4_27 = temp_r0_33 * 0x10;
            var_r0_13 = malloc(temp_r4_27);
            var_r8_6 = temp_r4_27;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_13 = 0;
            var_r8_6 = 0;
        }
        spD8 = var_r0_13;
        var_r2_14 = temp_r4_25->unk0;
        var_r3_19 = var_r0_13;
        if (var_r2_14 != spD4) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_14->unk0;
                    var_r3_19->unk4 = (s32) var_r2_14->unk4;
                    var_r3_19->unk8 = (s32) var_r2_14->unk8;
                    var_r3_19->unkC = (s32) var_r2_14->unkC;
                }
                var_r2_14 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_14 != spD4);
        }
        if (spB0 == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32 *) sp14.unk0;
                var_r3_19->unk4 = (s32) sp14.unk4;
                var_r3_19->unk8 = (s32) sp14.unk8;
                var_r3_19->unkC = (s32) sp14.unkC;
            }
            var_r5_6 = var_r3_19 + 0x10;
        } else {
            var_r3_20 = spB0;
            var_r2_15 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_15 != 0) {
                        var_r2_15->unk0 = (s32 *) sp14.unk0;
                        var_r2_15->unk4 = (s32) sp14.unk4;
                        var_r2_15->unk8 = (s32) sp14.unk8;
                        var_r2_15->unkC = (s32) sp14.unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_15 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r5_6 = var_r2_15;
        }
        temp_r2_10 = temp_r4_25->unk4;
        temp_r0_34 = temp_r4_25->unk0;
        var_r1_7 = temp_r0_34;
        if (temp_r0_34 != temp_r2_10) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_10);
        }
        if (temp_r0_34 != 0) {
            free();
        }
        temp_r4_25->unk0 = spD8;
        temp_r4_25->unk4 = var_r5_6;
        temp_r4_25->unkC = (void *) (spD8 + var_r8_6);
    }
    temp_r0_35 = __builtin_new(0x1C);
    temp_r0_35->unk0 = 0;
    temp_r0_35->unk2 = 0;
    temp_r0_35->unk4 = 0;
    temp_r0_35->unk6 = 0;
    temp_r0_35->unk8 = 0;
    temp_r0_35->unkC = 0;
    temp_r0_35->unk10 = 0;
    temp_r0_35->unk11 = 0;
    temp_r0_35->unk14 = 0;
    temp_r0_35->unk18 = 0;
    if (temp_r0_35 != arg0->unk52C) {
        __builtin_delete();
    }
    arg0->unk52C = temp_r0_35;
    temp_r0_36 = arg0 + 0x8A8;
    temp_r0_35->unk6 = func_08007D4C(temp_r0_36, temp_r0_36->unk4);
    arg0->unk52C->unk4 = 0xD;
    arg0->unk52C->unk8 = 1;
    arg0->unk52C->unk18 = 1;
    arg0->unk52C->unk2 = 0x40;
    sp14.unk0 = gUnk_0810752C.unk0;
    sp14.unk4 = (s32) gUnk_0810752C.unk4;
    sp14.unk8 = (s32) gUnk_0810752C.unk8;
    sp14.unkC = (s32) gUnk_0810752C.unkC;
    (&sp14 + 0xC)->unk4 = (s32) (&gUnk_0810752C + 0xC)->unk4;
    var_sl_2 = 0;
    var_r5_7 = arg0 + 0x6E0;
    temp_r7_4 = arg0 + 0x8A8;
    spD0 = &sp0 + 0x14;
    do {
        temp_r0_37 = __builtin_new(0x1C);
        temp_r0_37->unk0 = 0;
        temp_r0_37->unk2 = 0;
        temp_r0_37->unk4 = 0;
        temp_r0_37->unk6 = 0;
        temp_r0_37->unk8 = 0;
        temp_r0_37->unkC = 0;
        temp_r0_37->unk10 = 0;
        temp_r0_37->unk11 = 0;
        temp_r0_37->unk14 = 0;
        temp_r0_37->unk18 = 0;
        if (temp_r0_37 != *var_r5_7) {
            __builtin_delete();
        }
        *var_r5_7 = temp_r0_37;
        temp_r0_37->unk6 = func_08007D4C(temp_r7_4, temp_r7_4->unk4);
        (*var_r5_7)->unk4 = 0xD;
        (*var_r5_7)->unk8 = 1;
        (*var_r5_7)->unk18 = 1;
        temp_r1_14 = *var_r5_7;
        var_r5_7 += 4;
        temp_r0_38 = *spD0;
        spD0 += 4;
        temp_r1_14->unk0 = (s16) temp_r0_38;
        var_sl_2 += 1;
    } while (var_sl_2 <= 4);
    temp_r1_15 = &gUnk_08107540 + 0xC;
    spB8->unk0 = gUnk_08107540.unk0;
    spB8->unk4 = (s32) gUnk_08107540.unk4;
    spB8->unk8 = (s32) gUnk_08107540.unk8;
    temp_r0_39 = spB8 + 0xC;
    temp_r1_16 = temp_r1_15 + 0xC;
    spB8->unkC = (s32) gUnk_08107540.unkC;
    temp_r0_39->unk4 = (s32) temp_r1_15->unk4;
    temp_r0_39->unk8 = (s32) temp_r1_15->unk8;
    temp_r0_40 = temp_r0_39 + 0xC;
    temp_r0_39->unkC = (s32) temp_r1_15->unkC;
    temp_r0_40->unk4 = (s32) temp_r1_16->unk4;
    temp_r0_40->unk8 = (s32) temp_r1_16->unk8;
    temp_r0_40->unkC = (s32) temp_r1_16->unkC;
    var_sl_3 = 0;
    spCC = arg0;
    var_r8_7 = arg0 + 0x550;
    do {
        temp_r0_41 = func_0805E824(__builtin_new(0x14), arg0->unk42C, 0, 0x100);
        temp_r6_3 = var_sl_3 * 4;
        if (temp_r0_41 != *var_r8_7) {
            __builtin_delete();
        }
        *var_r8_7 = temp_r0_41;
        temp_r0_42 = __builtin_new(0x1C);
        temp_r0_42->unk0 = 0;
        temp_r0_42->unk2 = 0;
        temp_r0_42->unk4 = 0;
        temp_r0_42->unk6 = 0;
        temp_r0_42->unk8 = 0;
        temp_r0_42->unkC = 0;
        temp_r0_42->unk10 = 0;
        temp_r0_42->unk11 = 0;
        temp_r0_42->unk14 = 0;
        temp_r0_42->unk18 = 0;
        temp_r5_5 = temp_r6_3 + arg0;
        if (temp_r0_42 != temp_r5_5->unk564) {
            __builtin_delete();
        }
        temp_r5_5->unk564 = temp_r0_42;
        temp_r1_17 = var_sl_3 * 8;
        *spCC->unk564 = (s16) *(spB8 + temp_r1_17);
        (temp_r6_3 + arg0)->unk564->unk2 = (s16) *(spBC + temp_r1_17);
        temp_r4_28 = (temp_r6_3 + arg0)->unk564;
        temp_r0_43 = arg0 + 0x8B8;
        temp_r4_28->unk6 = (s16) (func_08007D4C(temp_r0_43, temp_r0_43->unk4) + temp_r6_3);
        (temp_r6_3 + arg0)->unk564->unk4 = 9;
        (temp_r6_3 + arg0)->unk564->unk8 = 1;
        (temp_r6_3 + arg0)->unk564->unk18 = 1;
        spCC += 4;
        var_r8_7 += 4;
        var_sl_3 += 1;
    } while (var_sl_3 <= 4);
    var_sl_4 = 0;
    spC8 = arg0;
    var_r8_8 = arg0 + 0x618;
    do {
        temp_r0_44 = func_0805E824(__builtin_new(0x14), arg0->unk428, 0, 0x100);
        temp_r6_4 = var_sl_4 * 4;
        if (temp_r0_44 != *var_r8_8) {
            __builtin_delete();
        }
        *var_r8_8 = temp_r0_44;
        temp_r0_45 = __builtin_new(0x1C);
        temp_r0_45->unk0 = 0;
        temp_r0_45->unk2 = 0;
        temp_r0_45->unk4 = 0;
        temp_r0_45->unk6 = 0;
        temp_r0_45->unk8 = 0;
        temp_r0_45->unkC = 0;
        temp_r0_45->unk10 = 0;
        temp_r0_45->unk11 = 0;
        temp_r0_45->unk14 = 0;
        temp_r0_45->unk18 = 0;
        temp_r5_6 = temp_r6_4 + arg0;
        if (temp_r0_45 != temp_r5_6->unk62C) {
            __builtin_delete();
        }
        temp_r5_6->unk62C = temp_r0_45;
        spC8->unk618->unk10 = 0x100;
        *(temp_r6_4 + arg0)->unk62C = (s16) (&sp0)[var_sl_4].unk14;
        (temp_r6_4 + arg0)->unk62C->unk2 = (s16) *(arg0 + 0x8E1 + var_sl_4);
        temp_r4_29 = (temp_r6_4 + arg0)->unk62C;
        temp_r0_46 = arg0 + 0x8C0;
        temp_r4_29->unk6 = (s16) (func_08007D4C(temp_r0_46, temp_r0_46->unk4) + temp_r6_4);
        (temp_r6_4 + arg0)->unk62C->unk4 = 0xA;
        (temp_r6_4 + arg0)->unk62C->unk8 = 1;
        (temp_r6_4 + arg0)->unk62C->unk18 = 1;
        spC8 += 4;
        var_r8_8 += 4;
        var_sl_4 += 1;
    } while (var_sl_4 <= 4);
    var_sl_5 = 0;
    spC4 = arg0;
    var_r8_9 = arg0 + 0x6F4;
    do {
        temp_r0_47 = func_0805E824(__builtin_new(0x14), arg0->unk430, 0, 0x100);
        temp_r6_5 = var_sl_5 * 4;
        if (temp_r0_47 != *var_r8_9) {
            __builtin_delete();
        }
        *var_r8_9 = temp_r0_47;
        temp_r0_48 = __builtin_new(0x1C);
        temp_r0_48->unk0 = 0;
        temp_r0_48->unk2 = 0;
        temp_r0_48->unk4 = 0;
        temp_r0_48->unk6 = 0;
        temp_r0_48->unk8 = 0;
        temp_r0_48->unkC = 0;
        temp_r0_48->unk10 = 0;
        temp_r0_48->unk11 = 0;
        temp_r0_48->unk14 = 0;
        temp_r0_48->unk18 = 0;
        temp_r5_7 = temp_r6_5 + arg0;
        if (temp_r0_48 != temp_r5_7->unk708) {
            __builtin_delete();
        }
        temp_r5_7->unk708 = temp_r0_48;
        *spC4->unk708 = (&sp0)[var_sl_5].unk14 - 0x11;
        (temp_r6_5 + arg0)->unk708->unk2 = (s16) (*(arg0 + 0x8E1 + var_sl_5) - 0x18);
        temp_r4_30 = (temp_r6_5 + arg0)->unk708;
        temp_r0_49 = arg0 + 0x8C8;
        temp_r4_30->unk6 = (s16) (func_08007D4C(temp_r0_49, temp_r0_49->unk4) + temp_r6_5);
        (temp_r6_5 + arg0)->unk708->unk4 = 0xB;
        (temp_r6_5 + arg0)->unk708->unk8 = 1;
        (temp_r6_5 + arg0)->unk708->unk18 = 1;
        spC4 += 4;
        var_r8_9 += 4;
        var_sl_5 += 1;
    } while (var_sl_5 <= 4);
}
