s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
u8 *func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_0805E8F0(void *);                          /* extern */
s32 func_0805E99C(u8 *, s32, u16, s16 *);             /* extern */
u16 func_080C7B38(void *);                          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[1332];
    s32 unk548;
    s32 unk54C;
    u8 _pad550[4];
    s32 unk554;
    s32 unk558;
    u8 _pad55C[32];
    s32 unk57C;
    s32 unk580;
    u8 _pad584[28];
    s32 unk5A0;
    void *unk5A4;
    s32 unk5A8;
    u8 _pad5AC[4];
    s32 unk5B0;
    u8 _pad5B4[4];
    s32 unk5B8;
    u8 _pad5BC[16];
    void *unk5CC;
    s32 unk5D0;
    u8 _pad5D4[28];
    s32 unk5F0;
    void *unk5F4;
    s32 unk5F8;
    u8 _pad5FC[4];
    s32 unk600;
    s32 unk604;
    s32 unk608;
    u8 _pad60C[116];
    s32 unk680;
    u8 _pad684[132];
    s32 unk708;
    u8 _pad70C[28];
    void *unk728;
    void *unk72C;
    s32 unk730;
    u8 _pad734[4];
    s32 unk738;
    u8 _pad73C[4];
    s32 unk740;
    u8 _pad744[16];
    s32 unk754;
    s32 unk758;
    u8 _pad75C[64];
    s32 unk79C;
    s32 unk7A0;
    u8 _pad7A4[32];
    s32 unk7C4;
    s32 unk7C8;
    u8 _pad7CC[32];
    s32 unk7EC;
    s32 unk7F0;
    u8 _pad7F4[168];
    s32 unk89C;
    s32 unk8A0;
    s32 unk8A4;
    u8 _pad8A8[12];
    s32 unk8B4;
    s32 unk8B5;
    u8 _pad8B9[3];
    s32 unk8BC;
    u8 _pad8C0[4];
    s32 unk8C4;
    s32 unk8C5;
    u8 _pad8C9[162];
    s32 unk96B;
    s32 unk96C;
    s32 unk96D;
    u8 _pad971[12];
    s32 unk97D;
    s32 unk97E;
} GenObj;
void func_080C2D54(GenObj *arg0) {
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
    void *sp50;
    void *sp54;
    s16 **var_r7;
    s16 **var_r7_2;
    s32 *var_r0;
    s32 *var_r0_10;
    s32 *var_r0_12;
    s32 *var_r0_3;
    s32 *var_r0_6;
    s32 *var_r0_8;
    s32 temp_r0;
    s32 temp_r0_11;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_21;
    s32 temp_r0_23;
    s32 temp_r0_24;
    s32 temp_r0_26;
    s32 temp_r0_30;
    s32 temp_r0_32;
    s32 temp_r0_33;
    s32 temp_r0_35;
    s32 temp_r0_36;
    s32 temp_r0_37;
    s32 temp_r0_38;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r2_3;
    s32 temp_r2_6;
    s32 temp_r2_9;
    s32 temp_r4_10;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_29;
    s32 temp_r4_30;
    s32 temp_r4_9;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 var_r3_12;
    s32 var_r3_15;
    s32 var_r3_18;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r3_9;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    u16 var_r2;
    u16 var_r2_11;
    u16 var_r2_16;
    u16 var_r2_21;
    u16 var_r2_22;
    u16 var_r2_23;
    u16 var_r2_24;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r2_5;
    u16 var_r2_6;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_4;
    u16 var_r3_7;
    u8 *temp_r0_2;
    u8 *temp_r0_3;
    u8 *temp_r4;
    u8 *temp_r4_14;
    u8 *temp_r4_22;
    u8 *temp_r4_2;
    u8 *temp_r4_31;
    u8 *temp_r4_32;
    u8 *temp_r4_33;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    u8 *temp_r4_6;
    u8 *temp_r5_4;
    u8 *var_r6;
    u8 *var_r6_2;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 var_r0_5;
    void **temp_r1_12;
    void **temp_r1_6;
    void **temp_r1_9;
    GenObj *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_15;
    GenObj *temp_r0_18;
    void *temp_r0_19;
    GenObj *temp_r0_20;
    void *temp_r0_22;
    void *temp_r0_25;
    GenObj *temp_r0_27;
    void *temp_r0_28;
    GenObj *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_34;
    void *temp_r0_4;
    GenObj *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_13;
    GenObj *temp_r1_14;
    void *temp_r1_3;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_8;
    GenObj *temp_r4_11;
    GenObj *temp_r4_15;
    void *temp_r4_16;
    GenObj *temp_r4_19;
    void *temp_r4_23;
    GenObj *temp_r4_24;
    void *temp_r4_25;
    GenObj *temp_r4_28;
    GenObj *temp_r4_7;
    void *temp_r4_8;
    GenObj *temp_r5;
    GenObj *temp_r5_2;
    GenObj *temp_r5_3;
    void *var_r0_11;
    void *var_r0_13;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_7;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    GenObj *var_r2_10;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3_11;
    GenObj *var_r3_14;
    GenObj *var_r3_17;
    GenObj *var_r3_2;
    GenObj *var_r3_5;
    GenObj *var_r3_8;
    GenObj *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r4_4;
    void *var_r4_5;
    void *var_r4_6;
    void *var_r4_7;

    if (arg0->unk96B != 0) {
        temp_r4 = func_08008920(arg0);
        temp_r0 = arg0->unk7A0;
        var_r2 = 0;
        if (temp_r0 != 0) {
            var_r2 = ((GenObj *)((u8 *)arg0 + 0x7A0))->unk4;
        }
        func_0805E99C(temp_r4, temp_r0, var_r2, arg0->unk79C);
        temp_r4_2 = func_08008920(arg0);
        temp_r1 = arg0->unk7C8;
        var_r2_2 = 0;
        if (temp_r1 != 0) {
            var_r2_2 = ((GenObj *)((u8 *)arg0 + 0x7C8))->unk4;
        }
        func_0805E99C(temp_r4_2, temp_r1, var_r2_2, arg0->unk7C4);
        temp_r4_3 = func_08008920(arg0);
        temp_r1_2 = arg0->unk7F0;
        var_r2_3 = 0;
        if (temp_r1_2 != 0) {
            var_r2_3 = ((GenObj *)((u8 *)arg0 + 0x7F0))->unk4;
        }
        func_0805E99C(temp_r4_3, temp_r1_2, var_r2_3, arg0->unk7EC);
        var_r4 = (GenObj *)((u8 *)arg0 + 0x778);
        var_r5 = 3;
        do {
            temp_r0_2 = func_08008920(arg0);
            temp_r2 = *temp_r0_2;
            if ((u32) temp_r2 <= 0x7FU) {
                temp_r1_3 = temp_r0_2 + ((temp_r2 * 8) + 4);
                temp_r1_3->unk0 = (s32) var_r4->unk0;
                temp_r1_3->unk4 = (u16) var_r4->unk4;
                *temp_r0_2 = temp_r2 + 1;
            }
            var_r4 += 8;
            var_r5 -= 1;
        } while (var_r5 >= 0);
    }
    temp_r0_3 = func_08008920(arg0);
    temp_r2_2 = *temp_r0_3;
    if ((u32) temp_r2_2 <= 0x7FU) {
        temp_r0_4 = temp_r0_3 + ((temp_r2_2 * 8) + 4);
        temp_r0_4->unk0 = (s32) arg0->unk548;
        temp_r0_4->unk4 = (u16) arg0->unk54C;
        *temp_r0_3 = temp_r2_2 + 1;
    }
    temp_r1_4 = arg0->unk89C;
    if (((temp_r1_4 == 4) && (arg0->unk8A4 == 1)) || ((temp_r1_4 == 3) && (arg0->unk8A0 != 2))) {
        temp_r4_4 = func_08008920(arg0);
        temp_r0_5 = arg0->unk558;
        var_r2_4 = 0;
        if (temp_r0_5 != 0) {
            var_r2_4 = ((GenObj *)((u8 *)arg0 + 0x558))->unk4;
        }
        func_0805E99C(temp_r4_4, temp_r0_5, var_r2_4, arg0->unk554);
    }
    temp_r4_5 = func_08008920(arg0);
    temp_r0_6 = arg0->unk580;
    var_r2_5 = 0;
    if (temp_r0_6 != 0) {
        var_r2_5 = ((GenObj *)((u8 *)arg0 + 0x580))->unk4;
    }
    func_0805E99C(temp_r4_5, temp_r0_6, var_r2_5, arg0->unk57C);
    if (arg0->unk96D != 0) {
        temp_r4_6 = func_08008920(arg0);
        temp_r1_5 = arg0->unk758;
        var_r2_6 = 0;
        if (temp_r1_5 != 0) {
            var_r2_6 = ((GenObj *)((u8 *)arg0 + 0x758))->unk4;
        }
        func_0805E99C(temp_r4_6, temp_r1_5, var_r2_6, arg0->unk754);
    }
    if (arg0->unk8BC != 9) {

    } else {
        arg0->unk72C->unk0 = arg0->unk8B4 - 8;
        arg0->unk72C->unk2 = (s16) (arg0->unk8B5 - 0x20);
        temp_r0_7 = func_0805E8F0(arg0->unk728);
        if ((s32) (temp_r0_7 << 0x1E) >= 0) {

        } else {
            if ((s32) (temp_r0_7 << 0x1D) < 0) {
                arg0->unk728->unk10 = 0;
            }
            temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x730);
            temp_r0_8 = arg0->unk728;
            temp_r1_6 = temp_r0_8->unk0;
            (*temp_r1_6)->unk10(&sp0, temp_r1_6, *(temp_r0_8->unk4 + (temp_r0_8->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_9 = &(GenObj *)((u8 *)sp0 + 0xC);
            arg0->unk730 = (s32) sp0;
            temp_r4_7->unk4 = (s32) sp0.unk4;
            temp_r4_7->unk8 = (s32) sp0.unk8;
            temp_r4_8 = (GenObj *)((u8 *)temp_r4_7 + 0xC);
            temp_r4_7->unkC = (s32) sp0.unkC;
            temp_r4_8->unk4 = (s32) temp_r0_9->unk4;
            temp_r4_8->unk8 = (s32) temp_r0_9->unk8;
            temp_r4_8->unkC = (s32) temp_r0_9->unkC;
            (temp_r4_8 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_9 + 0xC))->unk4;
            temp_r5 = func_08008910(arg0);
            temp_r6 = arg0->unk738;
            temp_r0_10 = (GenObj *)((u8 *)arg0 + 0x86C);
            temp_r2_3 = func_08007D4C(temp_r0_10, temp_r0_10->unk4);
            var_r3 = 0;
            if (arg0->unk738 != 0) {
                var_r3 = ((GenObj *)((u8 *)arg0 + 0x738))->unk4;
            }
            func_08008F0C(&sp0, temp_r6, (temp_r2_3 << 5) + 0x06010000, var_r3);
            temp_r1_7 = temp_r5->unk4;
            if (temp_r1_7 != temp_r5->unkC) {
                if (temp_r1_7 != 0) {
                    temp_r1_7->unk0 = (s32) sp0;
                    temp_r1_7->unk4 = (s32) sp0.unk4;
                    temp_r1_7->unk8 = (s32) sp0.unk8;
                    temp_r1_7->unkC = (s32) sp0.unkC;
                }
                temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
            } else {
                sp50 = temp_r1_7;
                sp24 = 1;
                temp_r4_9 = (s32) (temp_r1_7 - temp_r5->unk0) >> 4;
                sp20 = temp_r4_9;
                var_r0 = &sp20;
                if ((u32) temp_r4_9 < 1U) {
                    var_r0 = &sp24;
                }
                temp_r0_11 = temp_r4_9 + *var_r0;
                if (temp_r0_11 != 0) {
                    temp_r4_10 = temp_r0_11 * 0x10;
                    var_r0_2 = malloc(temp_r4_10);
                    var_sb = temp_r4_10;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sb);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sb = 0;
                }
                sp54 = var_r0_2;
                var_r2_7 = temp_r5->unk0;
                var_r3_2 = var_r0_2;
                if (var_r2_7 != sp50) {
                    do {
                        if (var_r3_2 != 0) {
                            var_r3_2->unk0 = (s32) var_r2_7->unk0;
                            var_r3_2->unk4 = (s32) var_r2_7->unk4;
                            var_r3_2->unk8 = (s32) var_r2_7->unk8;
                            var_r3_2->unkC = (s32) var_r2_7->unkC;
                        }
                        var_r2_7 += 0x10;
                        var_r3_2 += 0x10;
                    } while (var_r2_7 != sp50);
                }
                if (sp24 == 1) {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) sp0;
                        var_r3_2->unk4 = (s32) sp0.unk4;
                        var_r3_2->unk8 = (s32) sp0.unk8;
                        var_r3_2->unkC = (s32) sp0.unkC;
                    }
                    var_r4_2 = (GenObj *)((u8 *)var_r3_2 + 0x10);
                } else {
                    var_r3_3 = sp24;
                    var_r2_8 = var_r3_2;
                    if (var_r3_3 != 0) {
                        do {
                            if (var_r2_8 != 0) {
                                var_r2_8->unk0 = (s32) sp0;
                                var_r2_8->unk4 = (s32) sp0.unk4;
                                var_r2_8->unk8 = (s32) sp0.unk8;
                                var_r2_8->unkC = (s32) sp0.unkC;
                            }
                            var_r3_3 -= 1;
                            var_r2_8 += 0x10;
                        } while (var_r3_3 != 0);
                    }
                    var_r4_2 = var_r2_8;
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
                temp_r5->unk0 = sp54;
                temp_r5->unk4 = var_r4_2;
                temp_r5->unkC = (void *) (sp54 + var_sb);
            }
            temp_r4_11 = func_08008910(arg0);
            temp_r0_13 = arg0->unk740;
            var_r3_4 = 0;
            if (temp_r0_13 != 0) {
                var_r3_4 = ((GenObj *)((u8 *)arg0 + 0x740))->unk4;
            }
            func_08008F0C(&sp0, temp_r0_13, 0x05000300, var_r3_4);
            temp_r1_8 = temp_r4_11->unk4;
            if (temp_r1_8 != temp_r4_11->unkC) {
                if (temp_r1_8 != 0) {
                    temp_r1_8->unk0 = (s32) sp0;
                    temp_r1_8->unk4 = (s32) sp0.unk4;
                    temp_r1_8->unk8 = (s32) sp0.unk8;
                    temp_r1_8->unkC = (s32) sp0.unkC;
                }
                temp_r4_11->unk4 = (void *) (temp_r4_11->unk4 + 0x10);
            } else {
                sp50 = temp_r1_8;
                sp2C = 1;
                temp_r4_12 = (s32) (temp_r1_8 - temp_r4_11->unk0) >> 4;
                sp28 = temp_r4_12;
                var_r0_3 = &sp28;
                if ((u32) temp_r4_12 < 1U) {
                    var_r0_3 = &sp2C;
                }
                temp_r0_14 = temp_r4_12 + *var_r0_3;
                if (temp_r0_14 != 0) {
                    temp_r4_13 = temp_r0_14 * 0x10;
                    var_r0_4 = malloc(temp_r4_13);
                    var_sb_2 = temp_r4_13;
                    if (var_r0_4 == 0) {
                        var_r0_4 = func_080D3BC0(var_sb_2);
                    }
                } else {
                    var_r0_4 = 0;
                    var_sb_2 = 0;
                }
                sp54 = var_r0_4;
                var_r2_9 = temp_r4_11->unk0;
                var_r3_5 = var_r0_4;
                if (var_r2_9 != sp50) {
                    do {
                        if (var_r3_5 != 0) {
                            var_r3_5->unk0 = (s32) var_r2_9->unk0;
                            var_r3_5->unk4 = (s32) var_r2_9->unk4;
                            var_r3_5->unk8 = (s32) var_r2_9->unk8;
                            var_r3_5->unkC = (s32) var_r2_9->unkC;
                        }
                        var_r2_9 += 0x10;
                        var_r3_5 += 0x10;
                    } while (var_r2_9 != sp50);
                }
                if (sp2C == 1) {
                    if (var_r3_5 != 0) {
                        var_r3_5->unk0 = (s32) sp0;
                        var_r3_5->unk4 = (s32) sp0.unk4;
                        var_r3_5->unk8 = (s32) sp0.unk8;
                        var_r3_5->unkC = (s32) sp0.unkC;
                    }
                    var_r4_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
                } else {
                    var_r3_6 = sp2C;
                    var_r2_10 = var_r3_5;
                    if (var_r3_6 != 0) {
                        do {
                            if (var_r2_10 != 0) {
                                var_r2_10->unk0 = (s32) sp0;
                                var_r2_10->unk4 = (s32) sp0.unk4;
                                var_r2_10->unk8 = (s32) sp0.unk8;
                                var_r2_10->unkC = (s32) sp0.unkC;
                            }
                            var_r3_6 -= 1;
                            var_r2_10 += 0x10;
                        } while (var_r3_6 != 0);
                    }
                    var_r4_3 = var_r2_10;
                }
                temp_r2_5 = temp_r4_11->unk4;
                temp_r0_15 = temp_r4_11->unk0;
                var_r1_2 = temp_r0_15;
                if (temp_r0_15 != temp_r2_5) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2_5);
                }
                if (temp_r0_15 != 0) {
                    free();
                }
                temp_r4_11->unk0 = sp54;
                temp_r4_11->unk4 = var_r4_3;
                temp_r4_11->unkC = (void *) (sp54 + var_sb_2);
            }
        }
        temp_r4_14 = func_08008920(arg0);
        temp_r0_16 = arg0->unk730;
        var_r2_11 = 0;
        if (temp_r0_16 != 0) {
            var_r2_11 = ((GenObj *)((u8 *)arg0 + 0x730))->unk4;
        }
        func_0805E99C(temp_r4_14, temp_r0_16, var_r2_11, arg0->unk72C);
    }
    if (arg0->unk8C5 == 0) {

    } else {
        temp_r0_17 = arg0->unk89C;
        if ((temp_r0_17 != 2) && (temp_r0_17 != 0)) {
            *arg0->unk5F4 = (s16) arg0->unk8B4;
            var_r0_5 = arg0->unk8B5 + 0xF;
        } else {
            *arg0->unk5F4 = (s16) arg0->unk97D;
            var_r0_5 = arg0->unk97E;
        }
        arg0->unk5F4->unk2 = (s16) var_r0_5;
        if ((s32) (func_0805E8F0(arg0->unk5F0) << 0x1E) >= 0) {

        } else {
            temp_r4_15 = (GenObj *)((u8 *)arg0 + 0x5F8);
            temp_r0_18 = arg0->unk5F0;
            temp_r1_9 = temp_r0_18->unk0;
            (*temp_r1_9)->unk10(&sp0, temp_r1_9, *(temp_r0_18->unk4 + (temp_r0_18->unkC * 4)));
            memcpy(&sp0, &sp0, 0x20);
            temp_r0_19 = &(GenObj *)((u8 *)sp0 + 0xC);
            arg0->unk5F8 = (s32) sp0;
            temp_r4_15->unk4 = (s32) sp0.unk4;
            temp_r4_15->unk8 = (s32) sp0.unk8;
            temp_r4_16 = (GenObj *)((u8 *)temp_r4_15 + 0xC);
            temp_r4_15->unkC = (s32) sp0.unkC;
            temp_r4_16->unk4 = (s32) temp_r0_19->unk4;
            temp_r4_16->unk8 = (s32) temp_r0_19->unk8;
            temp_r4_16->unkC = (s32) temp_r0_19->unkC;
            (temp_r4_16 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_19 + 0xC))->unk4;
            temp_r5_2 = func_08008910(arg0);
            temp_r6_2 = arg0->unk600;
            temp_r0_20 = (GenObj *)((u8 *)arg0 + 0x84C);
            temp_r2_6 = func_08007D4C(temp_r0_20, temp_r0_20->unk4);
            var_r3_7 = 0;
            if (arg0->unk600 != 0) {
                var_r3_7 = arg0->unk604;
            }
            func_08008F0C(&sp0, temp_r6_2, (temp_r2_6 << 5) + 0x06010000, var_r3_7);
            temp_r1_10 = temp_r5_2->unk4;
            if (temp_r1_10 != temp_r5_2->unkC) {
                if (temp_r1_10 != 0) {
                    temp_r1_10->unk0 = (s32) sp0;
                    temp_r1_10->unk4 = (s32) sp0.unk4;
                    temp_r1_10->unk8 = (s32) sp0.unk8;
                    temp_r1_10->unkC = (s32) sp0.unkC;
                }
                temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
            } else {
                sp50 = temp_r1_10;
                sp34 = 1;
                temp_r4_17 = (s32) (temp_r1_10 - temp_r5_2->unk0) >> 4;
                sp30 = temp_r4_17;
                var_r0_6 = &sp30;
                if ((u32) temp_r4_17 < 1U) {
                    var_r0_6 = &sp34;
                }
                temp_r0_21 = temp_r4_17 + *var_r0_6;
                if (temp_r0_21 != 0) {
                    temp_r4_18 = temp_r0_21 * 0x10;
                    var_r0_7 = malloc(temp_r4_18);
                    var_sb_3 = temp_r4_18;
                    if (var_r0_7 == 0) {
                        var_r0_7 = func_080D3BC0(var_sb_3);
                    }
                } else {
                    var_r0_7 = 0;
                    var_sb_3 = 0;
                }
                sp54 = var_r0_7;
                var_r2_12 = temp_r5_2->unk0;
                var_r3_8 = var_r0_7;
                if (var_r2_12 != sp50) {
                    do {
                        if (var_r3_8 != 0) {
                            var_r3_8->unk0 = (s32) var_r2_12->unk0;
                            var_r3_8->unk4 = (s32) var_r2_12->unk4;
                            var_r3_8->unk8 = (s32) var_r2_12->unk8;
                            var_r3_8->unkC = (s32) var_r2_12->unkC;
                        }
                        var_r2_12 += 0x10;
                        var_r3_8 += 0x10;
                    } while (var_r2_12 != sp50);
                }
                if (sp34 == 1) {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) sp0;
                        var_r3_8->unk4 = (s32) sp0.unk4;
                        var_r3_8->unk8 = (s32) sp0.unk8;
                        var_r3_8->unkC = (s32) sp0.unkC;
                    }
                    var_r4_4 = (GenObj *)((u8 *)var_r3_8 + 0x10);
                } else {
                    var_r3_9 = sp34;
                    var_r2_13 = var_r3_8;
                    if (var_r3_9 != 0) {
                        do {
                            if (var_r2_13 != 0) {
                                var_r2_13->unk0 = (s32) sp0;
                                var_r2_13->unk4 = (s32) sp0.unk4;
                                var_r2_13->unk8 = (s32) sp0.unk8;
                                var_r2_13->unkC = (s32) sp0.unkC;
                            }
                            var_r3_9 -= 1;
                            var_r2_13 += 0x10;
                        } while (var_r3_9 != 0);
                    }
                    var_r4_4 = var_r2_13;
                }
                temp_r2_7 = temp_r5_2->unk4;
                temp_r0_22 = temp_r5_2->unk0;
                var_r1_3 = temp_r0_22;
                if (temp_r0_22 != temp_r2_7) {
                    do {
                        var_r1_3 += 0x10;
                    } while (var_r1_3 != temp_r2_7);
                }
                if (temp_r0_22 != 0) {
                    free();
                }
                temp_r5_2->unk0 = sp54;
                temp_r5_2->unk4 = var_r4_4;
                temp_r5_2->unkC = (void *) (sp54 + var_sb_3);
            }
            temp_r4_19 = func_08008910(arg0);
            temp_r0_23 = arg0->unk608;
            var_r3_10 = 0;
            if (temp_r0_23 != 0) {
                var_r3_10 = ((GenObj *)((u8 *)arg0 + 0x608))->unk4;
            }
            func_08008F0C(&sp0, temp_r0_23, 0x05000280, var_r3_10);
            temp_r1_11 = temp_r4_19->unk4;
            if (temp_r1_11 != temp_r4_19->unkC) {
                if (temp_r1_11 != 0) {
                    temp_r1_11->unk0 = (s32) sp0;
                    temp_r1_11->unk4 = (s32) sp0.unk4;
                    temp_r1_11->unk8 = (s32) sp0.unk8;
                    temp_r1_11->unkC = (s32) sp0.unkC;
                }
                temp_r4_19->unk4 = (void *) (temp_r4_19->unk4 + 0x10);
            } else {
                sp50 = temp_r1_11;
                sp3C = 1;
                temp_r4_20 = (s32) (temp_r1_11 - temp_r4_19->unk0) >> 4;
                sp38 = temp_r4_20;
                var_r0_8 = &sp38;
                if ((u32) temp_r4_20 < 1U) {
                    var_r0_8 = &sp3C;
                }
                temp_r0_24 = temp_r4_20 + *var_r0_8;
                if (temp_r0_24 != 0) {
                    temp_r4_21 = temp_r0_24 * 0x10;
                    var_r0_9 = malloc(temp_r4_21);
                    var_sb_4 = temp_r4_21;
                    if (var_r0_9 == 0) {
                        var_r0_9 = func_080D3BC0(var_sb_4);
                    }
                } else {
                    var_r0_9 = 0;
                    var_sb_4 = 0;
                }
                sp54 = var_r0_9;
                var_r2_14 = temp_r4_19->unk0;
                var_r3_11 = var_r0_9;
                if (var_r2_14 != sp50) {
                    do {
                        if (var_r3_11 != 0) {
                            var_r3_11->unk0 = (s32) var_r2_14->unk0;
                            var_r3_11->unk4 = (s32) var_r2_14->unk4;
                            var_r3_11->unk8 = (s32) var_r2_14->unk8;
                            var_r3_11->unkC = (s32) var_r2_14->unkC;
                        }
                        var_r2_14 += 0x10;
                        var_r3_11 += 0x10;
                    } while (var_r2_14 != sp50);
                }
                if (sp3C == 1) {
                    if (var_r3_11 != 0) {
                        var_r3_11->unk0 = (s32) sp0;
                        var_r3_11->unk4 = (s32) sp0.unk4;
                        var_r3_11->unk8 = (s32) sp0.unk8;
                        var_r3_11->unkC = (s32) sp0.unkC;
                    }
                    var_r4_5 = (GenObj *)((u8 *)var_r3_11 + 0x10);
                } else {
                    var_r3_12 = sp3C;
                    var_r2_15 = var_r3_11;
                    if (var_r3_12 != 0) {
                        do {
                            if (var_r2_15 != 0) {
                                var_r2_15->unk0 = (s32) sp0;
                                var_r2_15->unk4 = (s32) sp0.unk4;
                                var_r2_15->unk8 = (s32) sp0.unk8;
                                var_r2_15->unkC = (s32) sp0.unkC;
                            }
                            var_r3_12 -= 1;
                            var_r2_15 += 0x10;
                        } while (var_r3_12 != 0);
                    }
                    var_r4_5 = var_r2_15;
                }
                temp_r2_8 = temp_r4_19->unk4;
                temp_r0_25 = temp_r4_19->unk0;
                var_r1_4 = temp_r0_25;
                if (temp_r0_25 != temp_r2_8) {
                    do {
                        var_r1_4 += 0x10;
                    } while (var_r1_4 != temp_r2_8);
                }
                if (temp_r0_25 != 0) {
                    free();
                }
                temp_r4_19->unk0 = sp54;
                temp_r4_19->unk4 = var_r4_5;
                temp_r4_19->unkC = (void *) (sp54 + var_sb_4);
            }
        }
        temp_r4_22 = func_08008920(arg0);
        temp_r0_26 = arg0->unk5F8;
        var_r2_16 = 0;
        if (temp_r0_26 != 0) {
            var_r2_16 = ((GenObj *)((u8 *)arg0 + 0x5F8))->unk4;
        }
        func_0805E99C(temp_r4_22, temp_r0_26, var_r2_16, arg0->unk5F4);
    }
    arg0->unk5A4->unk0 = (s16) arg0->unk8B4;
    arg0->unk5A4->unk2 = (s16) arg0->unk8B5;
    if (arg0->unk8C4 != 0) {
        temp_r4_23 = arg0->unk5A0;
        func_0805E860(temp_r4_23, func_080C7B38(arg0));
        arg0->unk8C4 = 0U;
    }
    if ((s32) (func_0805E8F0(arg0->unk5A0) << 0x1E) >= 0) {

    } else {
        temp_r4_24 = (GenObj *)((u8 *)arg0 + 0x5A8);
        temp_r0_27 = arg0->unk5A0;
        temp_r1_12 = temp_r0_27->unk0;
        (*temp_r1_12)->unk10(&sp0, temp_r1_12, *(temp_r0_27->unk4 + (temp_r0_27->unkC * 4)));
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_28 = &(GenObj *)((u8 *)sp0 + 0xC);
        arg0->unk5A8 = (s32) sp0;
        temp_r4_24->unk4 = (s32) sp0.unk4;
        temp_r4_24->unk8 = (s32) sp0.unk8;
        temp_r4_25 = (GenObj *)((u8 *)temp_r4_24 + 0xC);
        temp_r4_24->unkC = (s32) sp0.unkC;
        temp_r4_25->unk4 = (s32) temp_r0_28->unk4;
        temp_r4_25->unk8 = (s32) temp_r0_28->unk8;
        temp_r4_25->unkC = (s32) temp_r0_28->unkC;
        (temp_r4_25 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_28 + 0xC))->unk4;
        temp_r5_3 = func_08008910(arg0);
        temp_r6_3 = arg0->unk5B0;
        temp_r0_29 = (GenObj *)((u8 *)arg0 + 0x87C);
        temp_r2_9 = func_08007D4C(temp_r0_29, temp_r0_29->unk4);
        var_r3_13 = 0;
        if (arg0->unk5B0 != 0) {
            var_r3_13 = ((GenObj *)((u8 *)arg0 + 0x5B0))->unk4;
        }
        func_08008F0C(&sp0, temp_r6_3, (temp_r2_9 << 5) + 0x06010000, var_r3_13);
        temp_r1_13 = temp_r5_3->unk4;
        if (temp_r1_13 != temp_r5_3->unkC) {
            if (temp_r1_13 != 0) {
                temp_r1_13->unk0 = (s32) sp0;
                temp_r1_13->unk4 = (s32) sp0.unk4;
                temp_r1_13->unk8 = (s32) sp0.unk8;
                temp_r1_13->unkC = (s32) sp0.unkC;
            }
            temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
        } else {
            sp50 = temp_r1_13;
            sp44 = 1;
            temp_r4_26 = (s32) (temp_r1_13 - temp_r5_3->unk0) >> 4;
            sp40 = temp_r4_26;
            var_r0_10 = &sp40;
            if ((u32) temp_r4_26 < 1U) {
                var_r0_10 = &sp44;
            }
            temp_r0_30 = temp_r4_26 + *var_r0_10;
            if (temp_r0_30 != 0) {
                temp_r4_27 = temp_r0_30 * 0x10;
                var_r0_11 = malloc(temp_r4_27);
                var_sb_5 = temp_r4_27;
                if (var_r0_11 == 0) {
                    var_r0_11 = func_080D3BC0(var_sb_5);
                }
            } else {
                var_r0_11 = 0;
                var_sb_5 = 0;
            }
            sp54 = var_r0_11;
            var_r2_17 = temp_r5_3->unk0;
            var_r3_14 = var_r0_11;
            if (var_r2_17 != sp50) {
                do {
                    if (var_r3_14 != 0) {
                        var_r3_14->unk0 = (s32) var_r2_17->unk0;
                        var_r3_14->unk4 = (s32) var_r2_17->unk4;
                        var_r3_14->unk8 = (s32) var_r2_17->unk8;
                        var_r3_14->unkC = (s32) var_r2_17->unkC;
                    }
                    var_r2_17 += 0x10;
                    var_r3_14 += 0x10;
                } while (var_r2_17 != sp50);
            }
            if (sp44 == 1) {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (s32) sp0;
                    var_r3_14->unk4 = (s32) sp0.unk4;
                    var_r3_14->unk8 = (s32) sp0.unk8;
                    var_r3_14->unkC = (s32) sp0.unkC;
                }
                var_r4_6 = (GenObj *)((u8 *)var_r3_14 + 0x10);
            } else {
                var_r3_15 = sp44;
                var_r2_18 = var_r3_14;
                if (var_r3_15 != 0) {
                    do {
                        if (var_r2_18 != 0) {
                            var_r2_18->unk0 = (s32) sp0;
                            var_r2_18->unk4 = (s32) sp0.unk4;
                            var_r2_18->unk8 = (s32) sp0.unk8;
                            var_r2_18->unkC = (s32) sp0.unkC;
                        }
                        var_r3_15 -= 1;
                        var_r2_18 += 0x10;
                    } while (var_r3_15 != 0);
                }
                var_r4_6 = var_r2_18;
            }
            temp_r2_10 = temp_r5_3->unk4;
            temp_r0_31 = temp_r5_3->unk0;
            var_r1_5 = temp_r0_31;
            if (temp_r0_31 != temp_r2_10) {
                do {
                    var_r1_5 += 0x10;
                } while (var_r1_5 != temp_r2_10);
            }
            if (temp_r0_31 != 0) {
                free();
            }
            temp_r5_3->unk0 = sp54;
            temp_r5_3->unk4 = var_r4_6;
            temp_r5_3->unkC = (void *) (sp54 + var_sb_5);
        }
        temp_r4_28 = func_08008910(arg0);
        temp_r0_32 = arg0->unk5B8;
        var_r3_16 = 0;
        if (temp_r0_32 != 0) {
            var_r3_16 = ((GenObj *)((u8 *)arg0 + 0x5B8))->unk4;
        }
        func_08008F0C(&sp0, temp_r0_32, 0x05000380, var_r3_16);
        temp_r1_14 = temp_r4_28->unk4;
        if (temp_r1_14 != temp_r4_28->unkC) {
            if (temp_r1_14 != 0) {
                temp_r1_14->unk0 = (s32) sp0;
                temp_r1_14->unk4 = (s32) sp0.unk4;
                temp_r1_14->unk8 = (s32) sp0.unk8;
                temp_r1_14->unkC = (s32) sp0.unkC;
            }
            temp_r4_28->unk4 = (void *) (temp_r4_28->unk4 + 0x10);
        } else {
            sp50 = temp_r1_14;
            sp4C = 1;
            temp_r4_29 = (s32) (temp_r1_14 - temp_r4_28->unk0) >> 4;
            sp48 = temp_r4_29;
            var_r0_12 = &sp48;
            if ((u32) temp_r4_29 < 1U) {
                var_r0_12 = &sp4C;
            }
            temp_r0_33 = temp_r4_29 + *var_r0_12;
            if (temp_r0_33 != 0) {
                temp_r4_30 = temp_r0_33 * 0x10;
                var_r0_13 = malloc(temp_r4_30);
                var_sb_6 = temp_r4_30;
                if (var_r0_13 == 0) {
                    var_r0_13 = func_080D3BC0(var_sb_6);
                }
            } else {
                var_r0_13 = 0;
                var_sb_6 = 0;
            }
            sp54 = var_r0_13;
            var_r2_19 = temp_r4_28->unk0;
            var_r3_17 = var_r0_13;
            if (var_r2_19 != sp50) {
                do {
                    if (var_r3_17 != 0) {
                        var_r3_17->unk0 = (s32) var_r2_19->unk0;
                        var_r3_17->unk4 = (s32) var_r2_19->unk4;
                        var_r3_17->unk8 = (s32) var_r2_19->unk8;
                        var_r3_17->unkC = (s32) var_r2_19->unkC;
                    }
                    var_r2_19 += 0x10;
                    var_r3_17 += 0x10;
                } while (var_r2_19 != sp50);
            }
            if (sp4C == 1) {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) sp0;
                    var_r3_17->unk4 = (s32) sp0.unk4;
                    var_r3_17->unk8 = (s32) sp0.unk8;
                    var_r3_17->unkC = (s32) sp0.unkC;
                }
                var_r4_7 = (GenObj *)((u8 *)var_r3_17 + 0x10);
            } else {
                var_r3_18 = sp4C;
                var_r2_20 = var_r3_17;
                if (var_r3_18 != 0) {
                    do {
                        if (var_r2_20 != 0) {
                            var_r2_20->unk0 = (s32) sp0;
                            var_r2_20->unk4 = (s32) sp0.unk4;
                            var_r2_20->unk8 = (s32) sp0.unk8;
                            var_r2_20->unkC = (s32) sp0.unkC;
                        }
                        var_r3_18 -= 1;
                        var_r2_20 += 0x10;
                    } while (var_r3_18 != 0);
                }
                var_r4_7 = var_r2_20;
            }
            temp_r2_11 = temp_r4_28->unk4;
            temp_r0_34 = temp_r4_28->unk0;
            var_r1_6 = temp_r0_34;
            if (temp_r0_34 != temp_r2_11) {
                do {
                    var_r1_6 += 0x10;
                } while (var_r1_6 != temp_r2_11);
            }
            if (temp_r0_34 != 0) {
                free();
            }
            temp_r4_28->unk0 = sp54;
            temp_r4_28->unk4 = var_r4_7;
            temp_r4_28->unkC = (void *) (sp54 + var_sb_6);
        }
    }
    temp_r4_31 = func_08008920(arg0);
    temp_r0_35 = arg0->unk5A8;
    var_r2_21 = 0;
    if (temp_r0_35 != 0) {
        var_r2_21 = ((GenObj *)((u8 *)arg0 + 0x5A8))->unk4;
    }
    func_0805E99C(temp_r4_31, temp_r0_35, var_r2_21, arg0->unk5A4);
    var_r7 = (GenObj *)((u8 *)arg0 + 0x6A4);
    var_r6 = (GenObj *)((u8 *)arg0 + 0x905);
    var_r5_2 = 0x18;
    do {
        if (*var_r6 != 0) {
            temp_r4_32 = func_08008920(arg0);
            temp_r0_36 = arg0->unk708;
            var_r2_22 = 0;
            if (temp_r0_36 != 0) {
                var_r2_22 = ((GenObj *)((u8 *)arg0 + 0x708))->unk4;
            }
            func_0805E99C(temp_r4_32, temp_r0_36, var_r2_22, *var_r7);
        }
        var_r7 += 4;
        var_r6 += 4;
        var_r5_2 -= 1;
    } while (var_r5_2 >= 0);
    if (arg0->unk96C != 0) {
        arg0->unk5CC->unk0 = (s16) arg0->unk8B4;
        arg0->unk5CC->unk2 = (s16) arg0->unk8B5;
        temp_r5_4 = func_08008920(arg0);
        temp_r0_37 = arg0->unk5D0;
        var_r2_23 = 0;
        if (temp_r0_37 != 0) {
            var_r2_23 = ((GenObj *)((u8 *)arg0 + 0x5D0))->unk4;
        }
        func_0805E99C(temp_r5_4, temp_r0_37, var_r2_23, arg0->unk5CC);
    }
    var_r7_2 = (GenObj *)((u8 *)arg0 + 0x61C);
    var_r6_2 = (GenObj *)((u8 *)arg0 + 0x904);
    var_r5_3 = 0x18;
    do {
        if (*var_r6_2 != 0) {
            temp_r4_33 = func_08008920(arg0);
            temp_r0_38 = arg0->unk680;
            var_r2_24 = 0;
            if (temp_r0_38 != 0) {
                var_r2_24 = ((GenObj *)((u8 *)arg0 + 0x680))->unk4;
            }
            func_0805E99C(temp_r4_33, temp_r0_38, var_r2_24, *var_r7_2);
        }
        var_r7_2 += 4;
        var_r6_2 += 4;
        var_r5_3 -= 1;
    } while (var_r5_3 >= 0);
}
