s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *, s32);                   /* extern */
u8 *func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, s32, u16, s16 *);             /* extern */
u16 func_080B3990(void *);                          /* extern */
u16 func_080B39BC(void *, s32);                     /* extern */
u16 func_080B39D8(void *, s32);                     /* extern */
u16 func_080B39F4(void *, s32);                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_080AF814(void *arg0) {
s32 sp0;
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
    s32 sp6C;
    s16 **sp70;
    s32 sp74;
    s32 sp78;
    void *sp7C;
    s16 **sp80;
    s32 sp84;
    s32 sp88;
    void *sp8C;
    void *sp90;
    void *sp94;
    s16 **var_r5_7;
    s16 *temp_r3_3;
    s32 *var_r0;
    s32 *var_r0_11;
    s32 *var_r0_13;
    s32 *var_r0_15;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r0_9;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_13;
    s32 temp_r0_17;
    s32 temp_r0_19;
    s32 temp_r0_24;
    s32 temp_r0_26;
    s32 temp_r0_28;
    s32 temp_r0_29;
    s32 temp_r0_30;
    s32 temp_r0_31;
    s32 temp_r0_32;
    s32 temp_r0_36;
    s32 temp_r0_38;
    s32 temp_r0_40;
    s32 temp_r0_4;
    s32 temp_r0_8;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r2_10;
    s32 temp_r2_14;
    s32 temp_r2_3;
    s32 temp_r2_6;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_11;
    s32 temp_r5_4;
    s32 temp_r5_8;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sb_7;
    s32 var_sb_8;
    u16 var_r2;
    u16 var_r2_14;
    u16 var_r2_19;
    u16 var_r2_20;
    u16 var_r2_21;
    u16 var_r2_26;
    u16 var_r2_27;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_3;
    u16 var_r3_5;
    u16 var_r3_6;
    u16 var_r3_7;
    u16 var_r3_8;
    u16 var_r3_9;
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r4;
    u8 *temp_r4_13;
    u8 *temp_r4_28;
    u8 *temp_r4_29;
    u8 *temp_r4_2;
    u8 *temp_r4_38;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r5_10;
    u8 *temp_r5_6;
    u8 *temp_r6;
    u8 *temp_r6_2;
    u8 *temp_r6_3;
    u8 temp_r2;
    u8 temp_r2_2;
    void **temp_r1_13;
    void **temp_r1_18;
    void **temp_r1_5;
    void **temp_r1_8;
    void *temp_r0_12;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_20;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_23;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_33;
    void *temp_r0_34;
    void *temp_r0_35;
    void *temp_r0_37;
    void *temp_r0_39;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_17;
    void *temp_r1_19;
    void *temp_r1_20;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_9;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_10;
    void *temp_r4_14;
    void *temp_r4_15;
    void *temp_r4_21;
    void *temp_r4_22;
    void *temp_r4_30;
    void *temp_r4_31;
    void *temp_r4_32;
    void *temp_r4_33;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r5_12;
    void *temp_r5_13;
    void *temp_r5_14;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_5;
    void *temp_r5_7;
    void *temp_r5_9;
    void *var_ip;
    void *var_ip_2;
    void *var_ip_3;
    void *var_ip_4;
    void *var_ip_5;
    void *var_ip_6;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
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
    void *var_r1_7;
    void *var_r1_8;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_15;
    void *var_r2_16;
    void *var_r2_17;
    void *var_r2_18;
    void *var_r2_22;
    void *var_r2_23;
    void *var_r2_24;
    void *var_r2_25;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r4;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_8;
    void *var_r5_9;

    if (arg0->unk92A != 0) {
        var_r4 = arg0 + 0x448;
        sp60 = 2;
        do {
            temp_r0 = func_08008920(arg0);
            temp_r2 = *temp_r0;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r1 = temp_r0 + ((temp_r2 * 8) + 4);
                temp_r1->unk0 = (s32) var_r4->unk0;
                temp_r1->unk4 = (u16) var_r4->unk4;
                *temp_r0 = temp_r2 + 1;
            }
            var_r4 += 8;
            temp_r5 = sp60 - 1;
            sp60 = temp_r5;
        } while (temp_r5 >= 0);
        temp_r4 = func_08008920(arg0);
        temp_r1_2 = arg0->unk468;
        var_r2 = 0;
        if (temp_r1_2 != 0) {
            var_r2 = (arg0 + 0x468)->unk4;
        }
        func_0805E99C(temp_r4, temp_r1_2, var_r2, arg0->unk464);
        temp_r4_2 = func_08008920(arg0);
        temp_r1_3 = arg0->unk490;
        var_r2_2 = 0;
        if (temp_r1_3 != 0) {
            var_r2_2 = (arg0 + 0x490)->unk4;
        }
        func_0805E99C(temp_r4_2, temp_r1_3, var_r2_2, arg0->unk48C);
    }
    temp_r0_2 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_2;
    if ((u32) temp_r2_2 <= 0x7FU) {
        temp_r0_3 = temp_r0_2 + ((temp_r2_2 * 8) + 4);
        temp_r0_3->unk0 = (s32) arg0->unk440;
        temp_r0_3->unk4 = (u16) arg0->unk444;
        *temp_r0_2 = temp_r2_2 + 1;
    }
    if ((arg0->unk83C == 1) || (arg0->unk838 == 2)) {
        temp_r4_3 = func_08008920(arg0);
        temp_r1_4 = arg0->unk4B8;
        var_r2_3 = 0;
        if (temp_r1_4 != 0) {
            var_r2_3 = (arg0 + 0x4B8)->unk4;
        }
        func_0805E99C(temp_r4_3, temp_r1_4, var_r2_3, arg0->unk4B4);
    }
    temp_r4_4 = func_08008920(arg0);
    temp_r0_4 = arg0->unk4E0;
    var_r2_4 = 0;
    if (temp_r0_4 != 0) {
        var_r2_4 = (arg0 + 0x4E0)->unk4;
    }
    func_0805E99C(temp_r4_4, temp_r0_4, var_r2_4, arg0->unk4DC);
    *arg0->unk504 = (s16) arg0->unk8E0;
    if (((arg0->unk838 != 3) || (arg0->unk83C == 0)) && (arg0->unk929 != 0)) {
        temp_r4_5 = arg0->unk500;
        func_0805E860(temp_r4_5, func_080B3990(arg0));
        arg0->unk929 = 0U;
    }
    if ((s32) (func_0805E8F0(arg0->unk500) << 0x1E) >= 0) {

    } else {
        temp_r4_6 = arg0 + 0x508;
        temp_r0_5 = arg0->unk500;
        temp_r1_5 = temp_r0_5->unk0;
        (*temp_r1_5)->unk10(&sp0, temp_r1_5, *(temp_r0_5->unk4 + (temp_r0_5->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_6 = &sp0 + 0xC;
        arg0->unk508 = (s32) sp0.unk0;
        temp_r4_6->unk4 = (s32) sp0.unk4;
        temp_r4_6->unk8 = (s32) sp0.unk8;
        temp_r4_7 = temp_r4_6 + 0xC;
        temp_r4_6->unkC = (s32) sp0.unkC;
        temp_r4_7->unk4 = (s32) temp_r0_6->unk4;
        temp_r4_7->unk8 = (s32) temp_r0_6->unk8;
        temp_r4_7->unkC = (s32) temp_r0_6->unkC;
        (temp_r4_7 + 0xC)->unk4 = (s32) (temp_r0_6 + 0xC)->unk4;
        temp_r5_2 = func_08008910(arg0);
        temp_r8 = arg0->unk510;
        temp_r0_7 = arg0 + 0x8B0;
        temp_r2_3 = func_08007D4C(temp_r0_7, temp_r0_7->unk4);
        var_r3 = 0;
        if (arg0->unk510 != 0) {
            var_r3 = (arg0 + 0x510)->unk4;
        }
        sp90 = temp_r5_2;
        func_08008F0C(&sp0, temp_r8, (temp_r2_3 << 5) + 0x06010000, var_r3);
        temp_r1_6 = temp_r5_2->unk4;
        if (temp_r1_6 != temp_r5_2->unkC) {
            if (temp_r1_6 != 0) {
                temp_r1_6->unk0 = (s32) sp0.unk0;
                temp_r1_6->unk4 = (s32) sp0.unk4;
                temp_r1_6->unk8 = (s32) sp0.unk8;
                temp_r1_6->unkC = (s32) sp0.unkC;
            }
            sp90->unk4 = (void *) (sp90->unk4 + 0x10);
        } else {
            sp24 = 1;
            temp_r4_8 = (s32) (temp_r1_6 - sp90->unk0) >> 4;
            sp20 = temp_r4_8;
            var_r0 = &sp20;
            if ((u32) temp_r4_8 < 1U) {
                var_r0 = &sp24;
            }
            temp_r0_8 = temp_r4_8 + *var_r0;
            if (temp_r0_8 != 0) {
                temp_r4_9 = temp_r0_8 * 0x10;
                var_r0_2 = malloc(temp_r4_9);
                var_sb = temp_r4_9;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_2 = 0;
                var_sb = 0;
            }
            sp94 = var_r0_2;
            var_r2_5 = sp90->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2_5 != temp_r1_6) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2_5->unk0;
                        var_r3_2->unk4 = (s32) var_r2_5->unk4;
                        var_r3_2->unk8 = (s32) var_r2_5->unk8;
                        var_r3_2->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2_5 != temp_r1_6);
            }
            if (sp24 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp0.unk0;
                    var_r3_2->unk4 = (s32) sp0.unk4;
                    var_r3_2->unk8 = (s32) sp0.unk8;
                    var_r3_2->unkC = (s32) sp0.unkC;
                }
                var_r5 = var_r3_2 + 0x10;
            } else {
                var_r8 = sp24;
                var_r2_6 = var_r3_2;
                if (sp24 != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) sp0.unk0;
                            var_r2_6->unk4 = (s32) sp0.unk4;
                            var_r2_6->unk8 = (s32) sp0.unk8;
                            var_r2_6->unkC = (s32) sp0.unkC;
                        }
                        var_r8 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_r8 != 0);
                }
                var_r5 = var_r2_6;
            }
            temp_r2_4 = sp90->unk4;
            temp_r0_9 = sp90->unk0;
            var_r1 = temp_r0_9;
            if (temp_r0_9 != temp_r2_4) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_4);
            }
            if (temp_r0_9 != 0) {
                free();
            }
            sp90->unk0 = sp94;
            sp90->unk4 = var_r5;
            sp90->unkC = (void *) (sp94 + var_sb);
        }
        temp_r4_10 = func_08008910(arg0);
        temp_r0_10 = arg0->unk518;
        var_r3_3 = 0;
        if (temp_r0_10 != 0) {
            var_r3_3 = (arg0 + 0x518)->unk4;
        }
        sp90 = temp_r4_10;
        func_08008F0C(&sp0, temp_r0_10, 0x050002A0, var_r3_3);
        temp_r1_7 = temp_r4_10->unk4;
        if (temp_r1_7 != temp_r4_10->unkC) {
            if (temp_r1_7 != 0) {
                temp_r1_7->unk0 = (s32) sp0.unk0;
                temp_r1_7->unk4 = (s32) sp0.unk4;
                temp_r1_7->unk8 = (s32) sp0.unk8;
                temp_r1_7->unkC = (s32) sp0.unkC;
            }
            sp90->unk4 = (void *) (sp90->unk4 + 0x10);
        } else {
            sp2C = 1;
            temp_r4_11 = (s32) (temp_r1_7 - sp90->unk0) >> 4;
            sp28 = temp_r4_11;
            var_r0_3 = &sp28;
            if ((u32) temp_r4_11 < 1U) {
                var_r0_3 = &sp2C;
            }
            temp_r0_11 = temp_r4_11 + *var_r0_3;
            if (temp_r0_11 != 0) {
                temp_r4_12 = temp_r0_11 * 0x10;
                var_r0_4 = malloc(temp_r4_12);
                var_sb_2 = temp_r4_12;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            sp94 = var_r0_4;
            var_r2_7 = sp90->unk0;
            var_r3_4 = var_r0_4;
            if (var_r2_7 != temp_r1_7) {
                do {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) var_r2_7->unk0;
                        var_r3_4->unk4 = (s32) var_r2_7->unk4;
                        var_r3_4->unk8 = (s32) var_r2_7->unk8;
                        var_r3_4->unkC = (s32) var_r2_7->unkC;
                    }
                    var_r2_7 += 0x10;
                    var_r3_4 += 0x10;
                } while (var_r2_7 != temp_r1_7);
            }
            if (sp2C == 1) {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) sp0.unk0;
                    var_r3_4->unk4 = (s32) sp0.unk4;
                    var_r3_4->unk8 = (s32) sp0.unk8;
                    var_r3_4->unkC = (s32) sp0.unkC;
                }
                var_r5_2 = var_r3_4 + 0x10;
            } else {
                var_r8_2 = sp2C;
                var_r2_8 = var_r3_4;
                if (sp2C != 0) {
                    do {
                        if (var_r2_8 != 0) {
                            var_r2_8->unk0 = (s32) sp0.unk0;
                            var_r2_8->unk4 = (s32) sp0.unk4;
                            var_r2_8->unk8 = (s32) sp0.unk8;
                            var_r2_8->unkC = (s32) sp0.unkC;
                        }
                        var_r8_2 -= 1;
                        var_r2_8 += 0x10;
                    } while (var_r8_2 != 0);
                }
                var_r5_2 = var_r2_8;
            }
            temp_r2_5 = sp90->unk4;
            temp_r0_12 = sp90->unk0;
            var_r1_2 = temp_r0_12;
            if (temp_r0_12 != temp_r2_5) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_5);
            }
            if (temp_r0_12 != 0) {
                free();
            }
            sp90->unk0 = sp94;
            sp90->unk4 = var_r5_2;
            sp90->unkC = (void *) (sp94 + var_sb_2);
        }
    }
    temp_r4_13 = func_08008920(arg0);
    temp_r0_13 = arg0->unk508;
    var_r2_9 = 0;
    if (temp_r0_13 != 0) {
        var_r2_9 = (arg0 + 0x508)->unk4;
    }
    func_0805E99C(temp_r4_13, temp_r0_13, var_r2_9, arg0->unk504);
    sp60 = 0;
    sp80 = arg0 + 0x708;
    sp84 = 0;
    sp88 = 0;
    sp8C = arg0 + 0x71C;
loop_88:
    (*sp80)->unk2 = (s16) (*(arg0 + 0x8E1 + sp60) - 0x18);
    if (*(arg0 + 0x85C + sp84) == 0) {

    } else {
        temp_r6 = arg0 + 0x91F + sp60;
        temp_r5_3 = sp84 + arg0;
        if (*temp_r6 != 0) {
            temp_r4_14 = temp_r5_3->unk6F4;
            func_0805E860(temp_r4_14, func_080B39F4(arg0, sp60));
            *temp_r6 = 0;
        }
        if ((s32) (func_0805E8F0(temp_r5_3->unk6F4) << 0x1E) >= 0) {

        } else {
            temp_r0_14 = temp_r5_3->unk6F4;
            temp_r1_8 = temp_r0_14->unk0;
            (*temp_r1_8)->unk10(&sp0, temp_r1_8, *(temp_r0_14->unk4 + (temp_r0_14->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_15 = &sp0 + 0xC;
            sp8C->unk0 = (s32) sp0.unk0;
            sp8C->unk4 = (s32) sp0.unk4;
            sp8C->unk8 = (s32) sp0.unk8;
            temp_r1_9 = sp8C + 0xC;
            sp8C->unkC = (s32) sp0.unkC;
            temp_r1_9->unk4 = (s32) temp_r0_15->unk4;
            temp_r1_9->unk8 = (s32) temp_r0_15->unk8;
            temp_r1_10 = temp_r1_9 + 0xC;
            temp_r1_9->unkC = (s32) temp_r0_15->unkC;
            temp_r1_10->unk4 = (s32) (temp_r0_15 + 0xC)->unk4;
            temp_r4_15 = func_08008910(arg0, temp_r1_10 + 8);
            temp_r5_4 = sp8C->unk8;
            temp_r0_16 = arg0 + 0x8C8;
            temp_r2_6 = sp84 + func_08007D4C(temp_r0_16, temp_r0_16->unk4);
            var_r3_5 = 0;
            if (sp8C->unk8 != 0) {
                var_r3_5 = (u16) sp8C->unkC;
            }
            func_08008F0C(&sp0, temp_r5_4, (temp_r2_6 << 5) + 0x06010000, var_r3_5);
            temp_r1_11 = temp_r4_15->unk4;
            if (temp_r1_11 != temp_r4_15->unkC) {
                if (temp_r1_11 != 0) {
                    temp_r1_11->unk0 = (s32) sp0.unk0;
                    temp_r1_11->unk4 = (s32) sp0.unk4;
                    temp_r1_11->unk8 = (s32) sp0.unk8;
                    temp_r1_11->unkC = (s32) sp0.unkC;
                }
                temp_r4_15->unk4 = (void *) (temp_r4_15->unk4 + 0x10);
            } else {
                sp34 = 1;
                temp_r4_16 = (s32) (temp_r1_11 - temp_r4_15->unk0) >> 4;
                sp30 = temp_r4_16;
                var_r0_5 = &sp30;
                if ((u32) temp_r4_16 < 1U) {
                    var_r0_5 = &sp34;
                }
                temp_r0_17 = temp_r4_16 + *var_r0_5;
                if (temp_r0_17 != 0) {
                    temp_r4_17 = temp_r0_17 * 0x10;
                    var_r0_6 = malloc(temp_r4_17);
                    var_sb_3 = temp_r4_17;
                    if (var_r0_6 == 0) {
                        var_r0_6 = func_080D3BC0(var_sb_3);
                    }
                } else {
                    var_r0_6 = 0;
                    var_sb_3 = 0;
                }
                sp94 = var_r0_6;
                var_r2_10 = temp_r4_15->unk0;
                var_ip = var_r0_6;
                if (var_r2_10 != temp_r1_11) {
                    do {
                        if (var_ip != 0) {
                            var_ip->unk0 = (s32) var_r2_10->unk0;
                            var_ip->unk4 = (s32) var_r2_10->unk4;
                            var_ip->unk8 = (s32) var_r2_10->unk8;
                            var_ip->unkC = (s32) var_r2_10->unkC;
                        }
                        var_r2_10 += 0x10;
                        var_ip += 0x10;
                    } while (var_r2_10 != temp_r1_11);
                }
                if (sp34 == 1) {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) sp0.unk0;
                        var_ip->unk4 = (s32) sp0.unk4;
                        var_ip->unk8 = (s32) sp0.unk8;
                        var_ip->unkC = (s32) sp0.unkC;
                    }
                    var_r5_3 = var_ip + 0x10;
                } else {
                    var_r8_3 = sp34;
                    var_r2_11 = var_ip;
                    if (sp34 != 0) {
                        do {
                            if (var_r2_11 != 0) {
                                var_r2_11->unk0 = (s32) sp0.unk0;
                                var_r2_11->unk4 = (s32) sp0.unk4;
                                var_r2_11->unk8 = (s32) sp0.unk8;
                                var_r2_11->unkC = (s32) sp0.unkC;
                            }
                            var_r8_3 -= 1;
                            var_r2_11 += 0x10;
                        } while (var_r8_3 != 0);
                    }
                    var_r5_3 = var_r2_11;
                }
                temp_r2_7 = temp_r4_15->unk4;
                temp_r0_18 = temp_r4_15->unk0;
                var_r1_3 = temp_r0_18;
                if (temp_r0_18 != temp_r2_7) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_7);
                }
                if (temp_r0_18 != 0) {
                    free();
                }
                temp_r4_15->unk0 = sp94;
                temp_r4_15->unk4 = var_r5_3;
                temp_r4_15->unkC = (void *) (sp94 + var_sb_3);
            }
            temp_r5_5 = func_08008910(arg0);
            temp_r2_8 = sp88 + arg0;
            var_r3_6 = 0;
            if (temp_r2_8->unk72C != 0) {
                var_r3_6 = (temp_r2_8 + 0x72C)->unk4;
            }
            func_08008F0C(&sp0, (sp88 + arg0)->unk72C, 0x05000360, var_r3_6);
            temp_r1_12 = temp_r5_5->unk4;
            if (temp_r1_12 != temp_r5_5->unkC) {
                if (temp_r1_12 != 0) {
                    temp_r1_12->unk0 = (s32) sp0.unk0;
                    temp_r1_12->unk4 = (s32) sp0.unk4;
                    temp_r1_12->unk8 = (s32) sp0.unk8;
                    temp_r1_12->unkC = (s32) sp0.unkC;
                }
                temp_r5_5->unk4 = (void *) (temp_r5_5->unk4 + 0x10);
            } else {
                sp3C = 1;
                temp_r4_18 = (s32) (temp_r1_12 - temp_r5_5->unk0) >> 4;
                sp38 = temp_r4_18;
                var_r0_7 = &sp38;
                if ((u32) temp_r4_18 < 1U) {
                    var_r0_7 = &sp3C;
                }
                temp_r0_19 = temp_r4_18 + *var_r0_7;
                if (temp_r0_19 != 0) {
                    temp_r4_19 = temp_r0_19 * 0x10;
                    var_r0_8 = malloc(temp_r4_19);
                    var_sb_4 = temp_r4_19;
                    if (var_r0_8 == 0) {
                        var_r0_8 = func_080D3BC0(var_sb_4);
                    }
                } else {
                    var_r0_8 = 0;
                    var_sb_4 = 0;
                }
                sp94 = var_r0_8;
                var_r2_12 = temp_r5_5->unk0;
                var_ip_2 = var_r0_8;
                if (var_r2_12 != temp_r1_12) {
                    do {
                        if (var_ip_2 != 0) {
                            var_ip_2->unk0 = (s32) var_r2_12->unk0;
                            var_ip_2->unk4 = (s32) var_r2_12->unk4;
                            var_ip_2->unk8 = (s32) var_r2_12->unk8;
                            var_ip_2->unkC = (s32) var_r2_12->unkC;
                        }
                        var_r2_12 += 0x10;
                        var_ip_2 += 0x10;
                    } while (var_r2_12 != temp_r1_12);
                }
                if (sp3C == 1) {
                    if (var_ip_2 != 0) {
                        var_ip_2->unk0 = (s32) sp0.unk0;
                        var_ip_2->unk4 = (s32) sp0.unk4;
                        var_ip_2->unk8 = (s32) sp0.unk8;
                        var_ip_2->unkC = (s32) sp0.unkC;
                    }
                    var_r5_4 = var_ip_2 + 0x10;
                } else {
                    var_r8_4 = sp3C;
                    var_r2_13 = var_ip_2;
                    if (sp3C != 0) {
                        do {
                            if (var_r2_13 != 0) {
                                var_r2_13->unk0 = (s32) sp0.unk0;
                                var_r2_13->unk4 = (s32) sp0.unk4;
                                var_r2_13->unk8 = (s32) sp0.unk8;
                                var_r2_13->unkC = (s32) sp0.unkC;
                            }
                            var_r8_4 -= 1;
                            var_r2_13 += 0x10;
                        } while (var_r8_4 != 0);
                    }
                    var_r5_4 = var_r2_13;
                }
                temp_r2_9 = temp_r5_5->unk4;
                temp_r0_20 = temp_r5_5->unk0;
                var_r1_4 = temp_r0_20;
                if (temp_r0_20 != temp_r2_9) {
                    do {
                        var_r1_4 += 0x10;
                    } while (var_r1_4 != temp_r2_9);
                }
                if (temp_r0_20 != 0) {
                    free();
                }
                temp_r5_5->unk0 = sp94;
                temp_r5_5->unk4 = var_r5_4;
                temp_r5_5->unkC = (void *) (sp94 + var_sb_4);
            }
        }
        temp_r5_6 = func_08008920(arg0);
        temp_r3 = sp88 + arg0;
        var_r2_14 = 0;
        if (temp_r3->unk71C != 0) {
            var_r2_14 = (temp_r3 + 0x71C)->unk4;
        }
        func_0805E99C(temp_r5_6, (sp88 + arg0)->unk71C, var_r2_14, *sp80);
    }
    sp80 += 4;
    sp84 += 4;
    sp88 += 0x20;
    sp8C += 0x20;
    temp_r4_20 = sp60 + 1;
    sp60 = temp_r4_20;
    if (temp_r4_20 <= 4) {
        goto loop_88;
    }
    sp60 = 0;
    sp70 = arg0 + 0x62C;
    sp74 = 0;
    sp78 = 0;
    sp7C = arg0 + 0x640;
loop_160:
    (*sp70)->unk2 = (s16) *(arg0 + 0x8E1 + sp60);
    if ((u32) (*(arg0 + 0x848 + sp74) - 5) <= 1U) {

    } else {
        temp_r6_2 = arg0 + 0x91A + sp60;
        temp_r5_7 = sp74 + arg0;
        if (*temp_r6_2 != 0) {
            temp_r4_21 = temp_r5_7->unk618;
            func_0805E860(temp_r4_21, func_080B39D8(arg0, sp60));
            *temp_r6_2 = 0;
        }
        if ((s32) (func_0805E8F0(temp_r5_7->unk618) << 0x1E) >= 0) {

        } else {
            temp_r0_21 = temp_r5_7->unk618;
            temp_r1_13 = temp_r0_21->unk0;
            (*temp_r1_13)->unk10(&sp0, temp_r1_13, *(temp_r0_21->unk4 + (temp_r0_21->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_22 = &sp0 + 0xC;
            sp7C->unk0 = (s32) sp0.unk0;
            sp7C->unk4 = (s32) sp0.unk4;
            sp7C->unk8 = (s32) sp0.unk8;
            temp_r1_14 = sp7C + 0xC;
            sp7C->unkC = (s32) sp0.unkC;
            temp_r1_14->unk4 = (s32) temp_r0_22->unk4;
            temp_r1_14->unk8 = (s32) temp_r0_22->unk8;
            temp_r1_15 = temp_r1_14 + 0xC;
            temp_r1_14->unkC = (s32) temp_r0_22->unkC;
            temp_r1_15->unk4 = (s32) (temp_r0_22 + 0xC)->unk4;
            temp_r4_22 = func_08008910(arg0, temp_r1_15 + 8);
            temp_r5_8 = sp7C->unk8;
            temp_r0_23 = arg0 + 0x8C0;
            temp_r2_10 = sp74 + func_08007D4C(temp_r0_23, temp_r0_23->unk4);
            var_r3_7 = 0;
            if (sp7C->unk8 != 0) {
                var_r3_7 = (u16) sp7C->unkC;
            }
            func_08008F0C(&sp0, temp_r5_8, (temp_r2_10 << 5) + 0x06010000, var_r3_7);
            temp_r1_16 = temp_r4_22->unk4;
            if (temp_r1_16 != temp_r4_22->unkC) {
                if (temp_r1_16 != 0) {
                    temp_r1_16->unk0 = (s32) sp0.unk0;
                    temp_r1_16->unk4 = (s32) sp0.unk4;
                    temp_r1_16->unk8 = (s32) sp0.unk8;
                    temp_r1_16->unkC = (s32) sp0.unkC;
                }
                temp_r4_22->unk4 = (void *) (temp_r4_22->unk4 + 0x10);
            } else {
                sp44 = 1;
                temp_r4_23 = (s32) (temp_r1_16 - temp_r4_22->unk0) >> 4;
                sp40 = temp_r4_23;
                var_r0_9 = &sp40;
                if ((u32) temp_r4_23 < 1U) {
                    var_r0_9 = &sp44;
                }
                temp_r0_24 = temp_r4_23 + *var_r0_9;
                if (temp_r0_24 != 0) {
                    temp_r4_24 = temp_r0_24 * 0x10;
                    var_r0_10 = malloc(temp_r4_24);
                    var_sb_5 = temp_r4_24;
                    if (var_r0_10 == 0) {
                        var_r0_10 = func_080D3BC0(var_sb_5);
                    }
                } else {
                    var_r0_10 = 0;
                    var_sb_5 = 0;
                }
                sp94 = var_r0_10;
                var_r2_15 = temp_r4_22->unk0;
                var_ip_3 = var_r0_10;
                if (var_r2_15 != temp_r1_16) {
                    do {
                        if (var_ip_3 != 0) {
                            var_ip_3->unk0 = (s32) var_r2_15->unk0;
                            var_ip_3->unk4 = (s32) var_r2_15->unk4;
                            var_ip_3->unk8 = (s32) var_r2_15->unk8;
                            var_ip_3->unkC = (s32) var_r2_15->unkC;
                        }
                        var_r2_15 += 0x10;
                        var_ip_3 += 0x10;
                    } while (var_r2_15 != temp_r1_16);
                }
                if (sp44 == 1) {
                    if (var_ip_3 != 0) {
                        var_ip_3->unk0 = (s32) sp0.unk0;
                        var_ip_3->unk4 = (s32) sp0.unk4;
                        var_ip_3->unk8 = (s32) sp0.unk8;
                        var_ip_3->unkC = (s32) sp0.unkC;
                    }
                    var_r5_5 = var_ip_3 + 0x10;
                } else {
                    var_r8_5 = sp44;
                    var_r2_16 = var_ip_3;
                    if (sp44 != 0) {
                        do {
                            if (var_r2_16 != 0) {
                                var_r2_16->unk0 = (s32) sp0.unk0;
                                var_r2_16->unk4 = (s32) sp0.unk4;
                                var_r2_16->unk8 = (s32) sp0.unk8;
                                var_r2_16->unkC = (s32) sp0.unkC;
                            }
                            var_r8_5 -= 1;
                            var_r2_16 += 0x10;
                        } while (var_r8_5 != 0);
                    }
                    var_r5_5 = var_r2_16;
                }
                temp_r2_11 = temp_r4_22->unk4;
                temp_r0_25 = temp_r4_22->unk0;
                var_r1_5 = temp_r0_25;
                if (temp_r0_25 != temp_r2_11) {
                    do {
                        var_r1_5 += 0x10;
                    } while (var_r1_5 != temp_r2_11);
                }
                if (temp_r0_25 != 0) {
                    free();
                }
                temp_r4_22->unk0 = sp94;
                temp_r4_22->unk4 = var_r5_5;
                temp_r4_22->unkC = (void *) (sp94 + var_sb_5);
            }
            temp_r5_9 = func_08008910(arg0);
            temp_r2_12 = sp78 + arg0;
            var_r3_8 = 0;
            if (temp_r2_12->unk650 != 0) {
                var_r3_8 = (temp_r2_12 + 0x650)->unk4;
            }
            func_08008F0C(&sp0, (sp78 + arg0)->unk650, 0x05000340, var_r3_8);
            temp_r1_17 = temp_r5_9->unk4;
            if (temp_r1_17 != temp_r5_9->unkC) {
                if (temp_r1_17 != 0) {
                    temp_r1_17->unk0 = (s32) sp0.unk0;
                    temp_r1_17->unk4 = (s32) sp0.unk4;
                    temp_r1_17->unk8 = (s32) sp0.unk8;
                    temp_r1_17->unkC = (s32) sp0.unkC;
                }
                temp_r5_9->unk4 = (void *) (temp_r5_9->unk4 + 0x10);
            } else {
                sp4C = 1;
                temp_r4_25 = (s32) (temp_r1_17 - temp_r5_9->unk0) >> 4;
                sp48 = temp_r4_25;
                var_r0_11 = &sp48;
                if ((u32) temp_r4_25 < 1U) {
                    var_r0_11 = &sp4C;
                }
                temp_r0_26 = temp_r4_25 + *var_r0_11;
                if (temp_r0_26 != 0) {
                    temp_r4_26 = temp_r0_26 * 0x10;
                    var_r0_12 = malloc(temp_r4_26);
                    var_sb_6 = temp_r4_26;
                    if (var_r0_12 == 0) {
                        var_r0_12 = func_080D3BC0(var_sb_6);
                    }
                } else {
                    var_r0_12 = 0;
                    var_sb_6 = 0;
                }
                sp94 = var_r0_12;
                var_r2_17 = temp_r5_9->unk0;
                var_ip_4 = var_r0_12;
                if (var_r2_17 != temp_r1_17) {
                    do {
                        if (var_ip_4 != 0) {
                            var_ip_4->unk0 = (s32) var_r2_17->unk0;
                            var_ip_4->unk4 = (s32) var_r2_17->unk4;
                            var_ip_4->unk8 = (s32) var_r2_17->unk8;
                            var_ip_4->unkC = (s32) var_r2_17->unkC;
                        }
                        var_r2_17 += 0x10;
                        var_ip_4 += 0x10;
                    } while (var_r2_17 != temp_r1_17);
                }
                if (sp4C == 1) {
                    if (var_ip_4 != 0) {
                        var_ip_4->unk0 = (s32) sp0.unk0;
                        var_ip_4->unk4 = (s32) sp0.unk4;
                        var_ip_4->unk8 = (s32) sp0.unk8;
                        var_ip_4->unkC = (s32) sp0.unkC;
                    }
                    var_r5_6 = var_ip_4 + 0x10;
                } else {
                    var_r8_6 = sp4C;
                    var_r2_18 = var_ip_4;
                    if (sp4C != 0) {
                        do {
                            if (var_r2_18 != 0) {
                                var_r2_18->unk0 = (s32) sp0.unk0;
                                var_r2_18->unk4 = (s32) sp0.unk4;
                                var_r2_18->unk8 = (s32) sp0.unk8;
                                var_r2_18->unkC = (s32) sp0.unkC;
                            }
                            var_r8_6 -= 1;
                            var_r2_18 += 0x10;
                        } while (var_r8_6 != 0);
                    }
                    var_r5_6 = var_r2_18;
                }
                temp_r2_13 = temp_r5_9->unk4;
                temp_r0_27 = temp_r5_9->unk0;
                var_r1_6 = temp_r0_27;
                if (temp_r0_27 != temp_r2_13) {
                    do {
                        var_r1_6 += 0x10;
                    } while (var_r1_6 != temp_r2_13);
                }
                if (temp_r0_27 != 0) {
                    free();
                }
                temp_r5_9->unk0 = sp94;
                temp_r5_9->unk4 = var_r5_6;
                temp_r5_9->unkC = (void *) (sp94 + var_sb_6);
            }
        }
        temp_r5_10 = func_08008920(arg0);
        temp_r3_2 = sp78 + arg0;
        var_r2_19 = 0;
        if (temp_r3_2->unk640 != 0) {
            var_r2_19 = (temp_r3_2 + 0x640)->unk4;
        }
        func_0805E99C(temp_r5_10, (sp78 + arg0)->unk640, var_r2_19, *sp70);
    }
    sp70 += 4;
    sp74 += 4;
    sp78 += 0x20;
    sp7C += 0x20;
    temp_r4_27 = sp60 + 1;
    sp60 = temp_r4_27;
    if (temp_r4_27 <= 4) {
        goto loop_160;
    }
    *arg0->unk52C = (s16) arg0->unk8E0;
    temp_r4_28 = func_08008920(arg0);
    temp_r0_28 = arg0->unk530;
    var_r2_20 = 0;
    if (temp_r0_28 != 0) {
        var_r2_20 = (arg0 + 0x530)->unk4;
    }
    func_0805E99C(temp_r4_28, temp_r0_28, var_r2_20, arg0->unk52C);
    sp60 = 0;
    var_r5_7 = arg0 + 0x6E0;
    do {
        (*var_r5_7)->unk2 = (s16) *(arg0 + 0x8E1 + sp60);
        temp_r4_29 = func_08008920(arg0);
        temp_r0_30 = arg0->unk530;
        var_r2_21 = 0;
        if (temp_r0_30 != 0) {
            var_r2_21 = (arg0 + 0x530)->unk4;
        }
        temp_r3_3 = *var_r5_7;
        var_r5_7 += 4;
        func_0805E99C(temp_r4_29, temp_r0_30, var_r2_21, temp_r3_3);
        temp_r0_29 = sp60 + 1;
        sp60 = temp_r0_29;
    } while (temp_r0_29 <= 4);
    sp60 = 0;
loop_238:
    temp_r0_31 = sp60 * 4;
    sp64 = sp60 + 1;
    sp68 = temp_r0_31;
    if (*(arg0 + 0x870 + temp_r0_31) == 2) {

    } else {
        temp_r4_30 = (temp_r0_31 + arg0)->unk550;
        func_0805E860(temp_r4_30, func_080B39BC(arg0, sp60));
        temp_r0_32 = func_0805E8F0((sp68 + arg0)->unk550) << 0x1E;
        temp_r5_11 = sp60 << 5;
        sp6C = temp_r5_11;
        if (temp_r0_32 >= 0) {

        } else {
            temp_r5_12 = temp_r5_11 + arg0;
            temp_r4_31 = temp_r5_12 + 0x578;
            temp_r0_33 = (sp68 + arg0)->unk550;
            temp_r1_18 = temp_r0_33->unk0;
            (*temp_r1_18)->unk10(&sp0, temp_r1_18, *(temp_r0_33->unk4 + (temp_r0_33->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_34 = &sp0 + 0xC;
            temp_r5_12->unk578 = (s32) sp0.unk0;
            temp_r4_31->unk4 = (s32) sp0.unk4;
            temp_r4_31->unk8 = (s32) sp0.unk8;
            temp_r4_32 = temp_r4_31 + 0xC;
            temp_r4_31->unkC = (s32) sp0.unkC;
            temp_r4_32->unk4 = (s32) temp_r0_34->unk4;
            temp_r4_32->unk8 = (s32) temp_r0_34->unk8;
            temp_r4_32->unkC = (s32) temp_r0_34->unkC;
            (temp_r4_32 + 0xC)->unk4 = (s32) (temp_r0_34 + 0xC)->unk4;
            temp_r4_33 = func_08008910(arg0);
            temp_r8_2 = temp_r5_12->unk580;
            temp_r0_35 = arg0 + 0x8B8;
            temp_r2_14 = sp68 + func_08007D4C(temp_r0_35, temp_r0_35->unk4);
            var_r3_9 = 0;
            if (temp_r5_12->unk580 != 0) {
                var_r3_9 = (temp_r5_12 + 0x580)->unk4;
            }
            func_08008F0C(&sp0, temp_r8_2, (temp_r2_14 << 5) + 0x06010000, var_r3_9);
            temp_r1_19 = temp_r4_33->unk4;
            if (temp_r1_19 != temp_r4_33->unkC) {
                if (temp_r1_19 != 0) {
                    temp_r1_19->unk0 = (s32) sp0.unk0;
                    temp_r1_19->unk4 = (s32) sp0.unk4;
                    temp_r1_19->unk8 = (s32) sp0.unk8;
                    temp_r1_19->unkC = (s32) sp0.unkC;
                }
                temp_r4_33->unk4 = (void *) (temp_r4_33->unk4 + 0x10);
            } else {
                sp54 = 1;
                temp_r4_34 = (s32) (temp_r1_19 - temp_r4_33->unk0) >> 4;
                sp50 = temp_r4_34;
                var_r0_13 = &sp50;
                if ((u32) temp_r4_34 < 1U) {
                    var_r0_13 = &sp54;
                }
                temp_r0_36 = temp_r4_34 + *var_r0_13;
                if (temp_r0_36 != 0) {
                    temp_r4_35 = temp_r0_36 * 0x10;
                    var_r0_14 = malloc(temp_r4_35);
                    var_sb_7 = temp_r4_35;
                    if (var_r0_14 == 0) {
                        var_r0_14 = func_080D3BC0(var_sb_7);
                    }
                } else {
                    var_r0_14 = 0;
                    var_sb_7 = 0;
                }
                sp94 = var_r0_14;
                var_r2_22 = temp_r4_33->unk0;
                var_ip_5 = var_r0_14;
                sp64 = sp60 + 1;
                if (var_r2_22 != temp_r1_19) {
                    do {
                        if (var_ip_5 != 0) {
                            var_ip_5->unk0 = (s32) var_r2_22->unk0;
                            var_ip_5->unk4 = (s32) var_r2_22->unk4;
                            var_ip_5->unk8 = (s32) var_r2_22->unk8;
                            var_ip_5->unkC = (s32) var_r2_22->unkC;
                        }
                        var_r2_22 += 0x10;
                        var_ip_5 += 0x10;
                    } while (var_r2_22 != temp_r1_19);
                }
                if (sp54 == 1) {
                    if (var_ip_5 != 0) {
                        var_ip_5->unk0 = (s32) sp0.unk0;
                        var_ip_5->unk4 = (s32) sp0.unk4;
                        var_ip_5->unk8 = (s32) sp0.unk8;
                        var_ip_5->unkC = (s32) sp0.unkC;
                    }
                    var_r5_8 = var_ip_5 + 0x10;
                } else {
                    var_r8_7 = sp54;
                    var_r2_23 = var_ip_5;
                    if (sp54 != 0) {
                        do {
                            if (var_r2_23 != 0) {
                                var_r2_23->unk0 = (s32) sp0.unk0;
                                var_r2_23->unk4 = (s32) sp0.unk4;
                                var_r2_23->unk8 = (s32) sp0.unk8;
                                var_r2_23->unkC = (s32) sp0.unkC;
                            }
                            var_r8_7 -= 1;
                            var_r2_23 += 0x10;
                        } while (var_r8_7 != 0);
                    }
                    var_r5_8 = var_r2_23;
                }
                temp_r2_15 = temp_r4_33->unk4;
                temp_r0_37 = temp_r4_33->unk0;
                var_r1_7 = temp_r0_37;
                if (temp_r0_37 != temp_r2_15) {
                    do {
                        var_r1_7 += 0x10;
                    } while (var_r1_7 != temp_r2_15);
                }
                if (temp_r0_37 != 0) {
                    free();
                }
                temp_r4_33->unk0 = sp94;
                temp_r4_33->unk4 = var_r5_8;
                temp_r4_33->unkC = (void *) (sp94 + var_sb_7);
            }
            temp_r5_13 = func_08008910(arg0);
            temp_r2_16 = sp6C + arg0;
            var_r3_10 = 0;
            if (temp_r2_16->unk588 != 0) {
                var_r3_10 = (temp_r2_16 + 0x588)->unk4;
            }
            func_08008F0C(&sp0, (sp6C + arg0)->unk588, 0x05000320, var_r3_10);
            temp_r1_20 = temp_r5_13->unk4;
            if (temp_r1_20 != temp_r5_13->unkC) {
                if (temp_r1_20 != 0) {
                    temp_r1_20->unk0 = (s32) sp0.unk0;
                    temp_r1_20->unk4 = (s32) sp0.unk4;
                    temp_r1_20->unk8 = (s32) sp0.unk8;
                    temp_r1_20->unkC = (s32) sp0.unkC;
                }
                temp_r5_13->unk4 = (void *) (temp_r5_13->unk4 + 0x10);
            } else {
                sp5C = 1;
                temp_r4_36 = (s32) (temp_r1_20 - temp_r5_13->unk0) >> 4;
                sp58 = temp_r4_36;
                var_r0_15 = &sp58;
                if ((u32) temp_r4_36 < 1U) {
                    var_r0_15 = &sp5C;
                }
                temp_r0_38 = temp_r4_36 + *var_r0_15;
                if (temp_r0_38 != 0) {
                    temp_r4_37 = temp_r0_38 * 0x10;
                    var_r0_16 = malloc(temp_r4_37);
                    var_sb_8 = temp_r4_37;
                    if (var_r0_16 == 0) {
                        var_r0_16 = func_080D3BC0(var_sb_8);
                    }
                } else {
                    var_r0_16 = 0;
                    var_sb_8 = 0;
                }
                sp94 = var_r0_16;
                var_r2_24 = temp_r5_13->unk0;
                var_ip_6 = var_r0_16;
                if (var_r2_24 != temp_r1_20) {
                    do {
                        if (var_ip_6 != 0) {
                            var_ip_6->unk0 = (s32) var_r2_24->unk0;
                            var_ip_6->unk4 = (s32) var_r2_24->unk4;
                            var_ip_6->unk8 = (s32) var_r2_24->unk8;
                            var_ip_6->unkC = (s32) var_r2_24->unkC;
                        }
                        var_r2_24 += 0x10;
                        var_ip_6 += 0x10;
                    } while (var_r2_24 != temp_r1_20);
                }
                if (sp5C == 1) {
                    if (var_ip_6 != 0) {
                        var_ip_6->unk0 = (s32) sp0.unk0;
                        var_ip_6->unk4 = (s32) sp0.unk4;
                        var_ip_6->unk8 = (s32) sp0.unk8;
                        var_ip_6->unkC = (s32) sp0.unkC;
                    }
                    var_r5_9 = var_ip_6 + 0x10;
                } else {
                    var_r8_8 = sp5C;
                    var_r2_25 = var_ip_6;
                    if (sp5C != 0) {
                        do {
                            if (var_r2_25 != 0) {
                                var_r2_25->unk0 = (s32) sp0.unk0;
                                var_r2_25->unk4 = (s32) sp0.unk4;
                                var_r2_25->unk8 = (s32) sp0.unk8;
                                var_r2_25->unkC = (s32) sp0.unkC;
                            }
                            var_r8_8 -= 1;
                            var_r2_25 += 0x10;
                        } while (var_r8_8 != 0);
                    }
                    var_r5_9 = var_r2_25;
                }
                temp_r2_17 = temp_r5_13->unk4;
                temp_r0_39 = temp_r5_13->unk0;
                var_r1_8 = temp_r0_39;
                if (temp_r0_39 != temp_r2_17) {
                    do {
                        var_r1_8 += 0x10;
                    } while (var_r1_8 != temp_r2_17);
                }
                if (temp_r0_39 != 0) {
                    free();
                }
                temp_r5_13->unk0 = sp94;
                temp_r5_13->unk4 = var_r5_9;
                temp_r5_13->unkC = (void *) (sp94 + var_sb_8);
            }
        }
        temp_r6_3 = func_08008920(arg0);
        temp_r5_14 = sp6C + arg0;
        var_r2_26 = 0;
        if (temp_r5_14->unk578 != 0) {
            var_r2_26 = (temp_r5_14 + 0x578)->unk4;
        }
        func_0805E99C(temp_r6_3, (sp6C + arg0)->unk578, var_r2_26, (sp68 + arg0)->unk564);
    }
    sp60 = sp64;
    if (sp64 <= 4) {
        goto loop_238;
    }
    if (arg0->unk92B != 0) {
        temp_r4_38 = func_08008920(arg0);
        temp_r0_40 = arg0->unk7EC;
        var_r2_27 = 0;
        if (temp_r0_40 != 0) {
            var_r2_27 = (arg0 + 0x7EC)->unk4;
        }
        func_0805E99C(temp_r4_38, temp_r0_40, var_r2_27, arg0->unk7E8);
    }
}
