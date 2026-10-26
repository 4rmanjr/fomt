s32 free(void *);                                     /* extern */
u32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008918(void *);                          /* extern */
u8 *func_08008920(void *);                          /* extern */
u32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008F0C(void **, u32, s32, u16);            /* extern */
s32 func_0804EA94(s32 *, s32, s32, s32);              /* extern */
s32 func_08050D34(void *);                          /* extern */
s32 func_08050D3C(void *, s32, u8 *, s32);          /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(u8 *, void *, u16, u32 *);          /* extern */
void *func_080D3BC0(s32);                           /* extern */
s32 func_080E54C4(u32 *, void *);                     /* extern */
s32 func_080E5664(void **, u32 *, void **, u32 *);    /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(u32 *, u32 *, s32);                        /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unkE;
    struct GenObj *unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 _pad28[804];
    s32 unk34C;
    s32 unk350;
    u8 _pad354[528];
    s32 unk564;
    s32 unk566;
    s32 unk568;
    s32 unk56C;
    u8 _pad570[12];
    s32 unk57C;
    u8 _pad580[24];
    s32 unk598;
    s32 unk59C;
    s32 unk59E;
    s32 unk5A0;
    s32 unk5A4;
    u8 _pad5A8[12];
    s32 unk5B4;
    u8 _pad5B8[24];
    s32 unk5D0;
    s32 unk5D4;
    s32 unk5D6;
    s32 unk5D8;
    s32 unk5DC;
    u8 _pad5E0[12];
    s32 unk5EC;
    u8 _pad5F0[24];
    s32 unk608;
    s32 unk60C;
    s32 unk60E;
    s32 unk610;
    s32 unk614;
    u8 _pad618[12];
    s32 unk624;
    u8 _pad628[24];
    s32 unk640;
    s32 unk644;
    s32 unk648;
    s32 unk64C;
    s32 unk650;
    u8 _pad654[12];
    s32 unk660;
    u8 _pad664[24];
    s32 unk67C;
} GenObj;
void func_080C96C4(GenObj *arg0) {
    u32 sp0;
    s32 sp4;
    void *sp8;
    s32 spC;
    u32 sp10;
    GenObj *sp14;
    s32 sp18;
    s32 sp1C;
    GenObj *sp24;
    u32 sp28;
    GenObj *sp2C;
    GenObj *sp34;
    GenObj *sp38;
    GenObj *sp3C;
    u32 sp40;                                       /* compiler-managed */
    s32 sp44;                                       /* compiler-managed */
    u32 sp48;                                       /* compiler-managed */
    GenObj *sp4C;                                       /* compiler-managed */
    void *sp50;                                     /* compiler-managed */
    void *sp54;
    void *sp58;
    s32 sp68;
    u32 sp70;
    s32 sp74;
    s32 sp78;
    u32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    void *spB8;
    u32 spBC;
    s32 spC0;
    GenObj *spC4;
    s32 spC8;
    u32 *spCC;
    s32 spD0;
    s32 spD4;
    u32 *spD8;
    u32 *spDC;
    void *spE0;
    u32 spE4;
    u32 *spE8;
    s32 spEC;
    void *spF0;
    void *spF4;
    s16 *var_r1;
    s16 temp_r1_8;
    s32 *var_r0_3;
    s32 *var_r0_6;
    s32 temp_r0_11;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_20;
    s32 temp_r0_26;
    s32 temp_r0_32;
    s32 temp_r0_37;
    s32 temp_r0_42;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r2_10;
    s32 temp_r2_12;
    s32 temp_r2_14;
    s32 temp_r2_16;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_8;
    s32 temp_r4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_2;
    s32 temp_sb;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    u16 var_r2_12;
    u16 var_r2_15;
    u16 var_r2_18;
    u16 var_r2_21;
    u16 var_r2_9;
    u16 var_r3_10;
    u16 var_r3_13;
    u16 var_r3_16;
    u16 var_r3_19;
    u16 var_r3_7;
    u32 *var_r0_11;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 *var_r0_17;
    u32 *var_r0_9;
    u32 temp_r0_6;
    u32 temp_r0_8;
    u32 temp_r1_25;
    u32 temp_r4_2;
    u32 var_r3_12;
    u32 var_r3_15;
    u32 var_r3_18;
    u32 var_r3_21;
    u32 var_r3_9;
    u32 var_r4;
    u32 var_sb;
    u8 *temp_r0_19;
    u8 *temp_r0_25;
    u8 *temp_r0_31;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r5;
    u8 *temp_r5_5;
    u8 *temp_r6;
    u8 temp_r1_9;
    u8 temp_r2;
    u8 temp_r2_7;
    void **temp_r1_10;
    void **temp_r1_13;
    void **temp_r1_16;
    void **temp_r1_19;
    void **temp_r1_22;
    GenObj *temp_r0;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_13;
    GenObj *temp_r0_16;
    void *temp_r0_17;
    GenObj *temp_r0_18;
    void *temp_r0_21;
    GenObj *temp_r0_22;
    void *temp_r0_23;
    GenObj *temp_r0_24;
    void *temp_r0_27;
    GenObj *temp_r0_28;
    void *temp_r0_29;
    GenObj *temp_r0_2;
    GenObj *temp_r0_30;
    void *temp_r0_33;
    GenObj *temp_r0_34;
    void *temp_r0_35;
    GenObj *temp_r0_36;
    void *temp_r0_38;
    GenObj *temp_r0_39;
    void *temp_r0_3;
    void *temp_r0_40;
    GenObj *temp_r0_41;
    void *temp_r0_43;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_11;
    GenObj *temp_r1_12;
    void *temp_r1_14;
    GenObj *temp_r1_15;
    void *temp_r1_17;
    GenObj *temp_r1_18;
    void *temp_r1_20;
    GenObj *temp_r1_21;
    void *temp_r1_23;
    GenObj *temp_r1_24;
    GenObj *temp_r1_2;
    void *temp_r1_3;
    GenObj *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r2_11;
    void *temp_r2_13;
    void *temp_r2_15;
    void *temp_r2_17;
    void *temp_r2_2;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_9;
    GenObj *temp_r3;
    GenObj *temp_r4_10;
    GenObj *temp_r4_13;
    GenObj *temp_r4_16;
    GenObj *temp_r4_17;
    GenObj *temp_r4_20;
    GenObj *temp_r4_21;
    GenObj *temp_r4_7;
    GenObj *temp_r5_10;
    void *temp_r5_3;
    void *temp_r5_4;
    GenObj *temp_r5_6;
    GenObj *temp_r5_7;
    GenObj *temp_r5_8;
    GenObj *temp_r5_9;
    GenObj *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *var_r0;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    GenObj *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r1_10;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_22;
    GenObj *var_r2_23;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r3;
    GenObj *var_r3_11;
    GenObj *var_r3_14;
    GenObj *var_r3_17;
    GenObj *var_r3_20;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    GenObj *var_r3_5;
    GenObj *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;

    spB8 = (void *)1;
    temp_r5 = func_08008920(arg0);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x354);
    temp_r4 = func_08007D4C(temp_r0, temp_r0->unk4);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x35C);
    sp0 = func_080074C0(temp_r0_2, temp_r0_2->unk4);
    sp4 = 0;
    sp8 = spB8;
    spC = 0;
    func_0804EA94(&sp68, 0x10, 4, temp_r4);
    temp_r2 = *temp_r5;
    if ((u32) temp_r2 <= 0x7FU) {
        temp_r0_3 = temp_r5 + ((temp_r2 * 8) + 4);
        temp_r0_3->unk0 = sp68;
        temp_r0_3->unk4 = (u16) sp68.unk4;
        *temp_r5 = temp_r2 + 1;
    }
    temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x348);
    arg0->unk34C = func_08050D34(temp_r2_2);
    temp_sb = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5_2 = func_08008918(arg0);
    temp_r4_2 = func_08008940(arg0);
    temp_r0_4 = func_0800894C(arg0);
    sp0 = temp_r4_2;
    sp4 = temp_r0_4;
    sp8 = (GenObj *)((u8 *)arg0 + 0x18);
    temp_r0_5 = func_08050D3C(temp_r2_2, temp_sb, temp_r6, temp_r5_2);
    arg0->unk350 = temp_r0_5;
    spB8 = 0;
    if ((temp_r0_5 == 3) && (((GenObj *)((u8 *)arg0 + 0x684))->unk8 == 0)) {
        spB8 = (void *)1;
    }
    temp_r0_6 = arg0->unk20;
    if (temp_r0_6 == 0) {

    } else {
        var_r4 = 0;
        spBC = temp_r0_6;
        temp_r2_3 = arg0->unkC - 8;
        spDC = &sp0 + 0x28;
        if ((spBC > 0U) && ((s32) arg0->unk24 < temp_r2_3)) {
            var_r1 = (GenObj *)((u8 *)arg0 + 0x24);
loop_10:
            var_r1 += 0x10;
            var_r4 += 1;
            if (var_r4 < spBC) {
                if ((s32) *var_r1 < temp_r2_3) {
                    goto loop_10;
                }
            }
        }
        spD0 = 0;
        sp14 = 0;
        var_r0 = malloc(0x18);
        if (var_r0 == 0) {
            var_r0 = func_080D3BC0(0x18);
        }
        sp14 = var_r0;
        sp18 = spD0;
        sp1C = spD0;
        var_r0->unk0 = (s8) spD0;
        var_r0->unk4 = spD0;
        var_r0->unk8 = var_r0;
        var_r0->unkC = var_r0;
        spD4 = 0;
        sp2C = 0;
        var_r0_2 = malloc(0x18);
        if (var_r0_2 == 0) {
            var_r0_2 = func_080D3BC0(0x18);
        }
        sp2C = var_r0_2;
        spDC->unk8 = spD4;
        sp34 = spD4;
        var_r0_2->unk0 = (s8) spD4;
        var_r0_2->unk4 = spD4;
        var_r0_2->unk8 = var_r0_2;
        var_r0_2->unkC = var_r0_2;
        spC0 = arg0->unkC + 0x68;
        if (var_r4 >= spBC) {

        } else {
            temp_r1 = (GenObj *)((u8 *)arg0 + 0x20);
            temp_r2_4 = var_r4 * 0x10;
            spE0 = temp_r1;
            spEC = temp_r2_4;
            if ((s32) *((u8 *)temp_r1 + (temp_r2_4 + 4)) > spC0) {

            } else {
                spCC = &sp0 + 0x20;
                spD8 = &sp0 + 0x24;
                spE8 = &sp0 + 0x7C;
loop_21:
                temp_r0_7 = spE0 + (spEC + 4);
                spC4 = temp_r0_7;
                temp_r0_8 = temp_r0_7->unk8;
                sp70 = temp_r0_8;
                var_r3 = sp14;
                var_r1_2 = var_r3->unk4;
                spE4 = var_r4 + 1;
                temp_r5_3 = var_r3;
                if (var_r1_2 != 0) {
                    do {
                        var_r2 = 0;
                        if ((u32) var_r1_2->unk10 < temp_r0_8) {
                            var_r2 = 1;
                        }
                        if (var_r2 == 0) {
                            var_r3 = var_r1_2;
                            var_r1_2 = var_r3->unk8;
                        } else {
                            var_r1_2 = var_r1_2->unkC;
                        }
                    } while (var_r1_2 != 0);
                }
                *spCC = (u32) var_r3;
                var_r2_2 = 0;
                sp24 = temp_r5_3;
                var_r1_3 = 0;
                if (sp20 == temp_r5_3) {
                    var_r1_3 = 1;
                }
                if (((var_r1_3 != 0) || (sp70 < (u32) sp20->unk10)) && (spD0 <= 8)) {
                    var_r2_2 = 1;
                }
                if (var_r2_2 == 0) {
                    temp_r0_9 = (sp20->unk14 * 8) + (GenObj *)((u8 *)arg0 + 0x3A4);
                    spC8 = func_08007D4C(temp_r0_9, temp_r0_9->unk4);
                } else {
                    sp3C = sp20;
                    sp48 = sp70;
                    sp4C = spD0;
                    memcpy(&sp48, &sp48, 8);
                    sp40 = sp48;
                    sp44 = sp4C;
                    sp50 = sp3C;
                    func_080E5664(&sp38, &sp10, &sp50, &sp40);
                    temp_r0_10 = (spD0 * 8) + (GenObj *)((u8 *)arg0 + 0x3A4);
                    spC8 = func_08007D4C(temp_r0_10, temp_r0_10->unk4);
                    temp_r6_2 = func_08008910(arg0);
                    func_08008F0C(&sp38, sp70, (spC8 << 5) + 0x06010000, 0x80U);
                    temp_r1_2 = temp_r6_2->unk4;
                    if (temp_r1_2 != temp_r6_2->unkC) {
                        if (temp_r1_2 != 0) {
                            temp_r1_2->unk0 = (void *) sp38.unk0;
                            temp_r1_2->unk4 = (s32) sp38.unk4;
                            temp_r1_2->unk8 = (s32) sp38.unk8;
                            temp_r1_2->unkC = (s32) sp38.unkC;
                        }
                        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
                    } else {
                        spF0 = temp_r1_2;
                        sp78 = 1;
                        temp_r4_3 = (s32) (spF0 - temp_r6_2->unk0) >> 4;
                        sp74 = temp_r4_3;
                        var_r0_3 = &sp74;
                        if ((u32) temp_r4_3 < 1U) {
                            var_r0_3 = &sp78;
                        }
                        temp_r0_11 = temp_r4_3 + *var_r0_3;
                        if (temp_r0_11 != 0) {
                            temp_r4_4 = temp_r0_11 * 0x10;
                            var_r0_4 = malloc(temp_r4_4);
                            var_r8 = temp_r4_4;
                            if (var_r0_4 == 0) {
                                var_r0_4 = func_080D3BC0(var_r8);
                            }
                        } else {
                            var_r0_4 = 0;
                            var_r8 = 0;
                        }
                        spF4 = var_r0_4;
                        var_r2_3 = temp_r6_2->unk0;
                        var_r3_2 = var_r0_4;
                        if (var_r2_3 != spF0) {
                            do {
                                if (var_r3_2 != 0) {
                                    var_r3_2->unk0 = (s32) var_r2_3->unk0;
                                    var_r3_2->unk4 = (s32) var_r2_3->unk4;
                                    var_r3_2->unk8 = (s32) var_r2_3->unk8;
                                    var_r3_2->unkC = (s32) var_r2_3->unkC;
                                }
                                var_r2_3 += 0x10;
                                var_r3_2 += 0x10;
                            } while (var_r2_3 != spF0);
                        }
                        if (sp78 == 1) {
                            if (var_r3_2 != 0) {
                                var_r3_2->unk0 = (void *) sp38.unk0;
                                var_r3_2->unk4 = (s32) sp38.unk4;
                                var_r3_2->unk8 = (s32) sp38.unk8;
                                var_r3_2->unkC = (s32) sp38.unkC;
                            }
                            var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
                        } else {
                            var_r3_3 = sp78;
                            var_r2_4 = var_r3_2;
                            if (var_r3_3 != 0) {
                                do {
                                    if (var_r2_4 != 0) {
                                        var_r2_4->unk0 = (void *) sp38.unk0;
                                        var_r2_4->unk4 = (s32) sp38.unk4;
                                        var_r2_4->unk8 = (s32) sp38.unk8;
                                        var_r2_4->unkC = (s32) sp38.unkC;
                                    }
                                    var_r3_3 -= 1;
                                    var_r2_4 += 0x10;
                                } while (var_r3_3 != 0);
                            }
                            var_r5 = var_r2_4;
                        }
                        temp_r2_5 = temp_r6_2->unk4;
                        temp_r1_3 = temp_r6_2->unk0;
                        var_r0_5 = temp_r1_3;
                        if (temp_r1_3 != temp_r2_5) {
                            do {
                                var_r0_5 += 0x10;
                            } while (var_r0_5 != temp_r2_5);
                        }
                        if (temp_r1_3 != 0) {
                            free(temp_r1_3);
                        }
                        temp_r6_2->unk0 = spF4;
                        temp_r6_2->unk4 = var_r5;
                        temp_r6_2->unkC = (void *) (spF4 + var_r8);
                    }
                    spD0 += 1;
                }
                sp7C = spC4->unkC;
                var_r3_4 = sp2C;
                var_r1_4 = var_r3_4->unk4;
                temp_r5_4 = var_r3_4;
                if (var_r1_4 != 0) {
                    do {
                        var_r2_5 = 0;
                        if ((u32) var_r1_4->unk10 < (u32) *spE8) {
                            var_r2_5 = 1;
                        }
                        if (var_r2_5 == 0) {
                            var_r3_4 = var_r1_4;
                            var_r1_4 = var_r3_4->unk8;
                        } else {
                            var_r1_4 = var_r1_4->unkC;
                        }
                    } while (var_r1_4 != 0);
                }
                *spD8 = (u32) var_r3_4;
                var_r2_6 = 0;
                sp38 = temp_r5_4;
                var_r1_5 = 0;
                if (sp24 == temp_r5_4) {
                    var_r1_5 = 1;
                }
                if (((var_r1_5 != 0) || (sp7C < (u32) sp24->unk10)) && (spD4 <= 8)) {
                    var_r2_6 = 1;
                }
                if (var_r2_6 == 0) {
                    temp_r0_12 = (sp24->unk14 * 8) + (GenObj *)((u8 *)arg0 + 0x3EC);
                    var_sb = func_080074C0(temp_r0_12, temp_r0_12->unk4);
                } else {
                    sp40 = sp24;
                    sp4C = sp7C;
                    sp50 = spD4;
                    memcpy((u32 *) &sp4C, (u32 *) &sp4C, 8);
                    sp44 = sp4C;
                    sp48 = sp50;
                    sp54 = sp40;
                    func_080E5664(&sp3C, &sp28, &sp54, &sp44);
                    temp_r0_13 = (spD4 * 8) + (GenObj *)((u8 *)arg0 + 0x3EC);
                    var_sb = func_080074C0(temp_r0_13, temp_r0_13->unk4);
                    temp_r6_3 = func_08008910(arg0);
                    func_08008F0C(&sp3C, sp7C, (var_sb << 5) + 0x05000200, 0x20U);
                    temp_r1_4 = temp_r6_3->unk4;
                    if (temp_r1_4 != temp_r6_3->unkC) {
                        if (temp_r1_4 != 0) {
                            temp_r1_4->unk0 = (void *) sp3C.unk0;
                            temp_r1_4->unk4 = (s32) sp3C.unk4;
                            temp_r1_4->unk8 = (s32) sp3C.unk8;
                            temp_r1_4->unkC = (s32) sp3C.unkC;
                        }
                        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
                    } else {
                        spF0 = temp_r1_4;
                        sp84 = 1;
                        temp_r4_5 = (s32) (spF0 - temp_r6_3->unk0) >> 4;
                        sp80 = temp_r4_5;
                        var_r0_6 = &sp80;
                        if ((u32) temp_r4_5 < 1U) {
                            var_r0_6 = &sp84;
                        }
                        temp_r0_14 = temp_r4_5 + *var_r0_6;
                        if (temp_r0_14 != 0) {
                            temp_r4_6 = temp_r0_14 * 0x10;
                            var_r0_7 = malloc(temp_r4_6);
                            var_r8_2 = temp_r4_6;
                            if (var_r0_7 == 0) {
                                var_r0_7 = func_080D3BC0(var_r8_2);
                            }
                        } else {
                            var_r0_7 = 0;
                            var_r8_2 = 0;
                        }
                        spF4 = var_r0_7;
                        var_r2_7 = temp_r6_3->unk0;
                        var_r3_5 = var_r0_7;
                        if (var_r2_7 != spF0) {
                            do {
                                if (var_r3_5 != 0) {
                                    var_r3_5->unk0 = (s32) var_r2_7->unk0;
                                    var_r3_5->unk4 = (s32) var_r2_7->unk4;
                                    var_r3_5->unk8 = (s32) var_r2_7->unk8;
                                    var_r3_5->unkC = (s32) var_r2_7->unkC;
                                }
                                var_r2_7 += 0x10;
                                var_r3_5 += 0x10;
                            } while (var_r2_7 != spF0);
                        }
                        if (sp84 == 1) {
                            if (var_r3_5 != 0) {
                                var_r3_5->unk0 = (void *) sp3C.unk0;
                                var_r3_5->unk4 = (s32) sp3C.unk4;
                                var_r3_5->unk8 = (s32) sp3C.unk8;
                                var_r3_5->unkC = (s32) sp3C.unkC;
                            }
                            var_r5_2 = (GenObj *)((u8 *)var_r3_5 + 0x10);
                        } else {
                            var_r3_6 = sp84;
                            var_r2_8 = var_r3_5;
                            if (var_r3_6 != 0) {
                                do {
                                    if (var_r2_8 != 0) {
                                        var_r2_8->unk0 = (void *) sp3C.unk0;
                                        var_r2_8->unk4 = (s32) sp3C.unk4;
                                        var_r2_8->unk8 = (s32) sp3C.unk8;
                                        var_r2_8->unkC = (s32) sp3C.unkC;
                                    }
                                    var_r3_6 -= 1;
                                    var_r2_8 += 0x10;
                                } while (var_r3_6 != 0);
                            }
                            var_r5_2 = var_r2_8;
                        }
                        temp_r2_6 = temp_r6_3->unk4;
                        temp_r1_5 = temp_r6_3->unk0;
                        var_r0_8 = temp_r1_5;
                        if (temp_r1_5 != temp_r2_6) {
                            do {
                                var_r0_8 += 0x10;
                            } while (var_r0_8 != temp_r2_6);
                        }
                        if (temp_r1_5 != 0) {
                            free(temp_r1_5);
                        }
                        temp_r6_3->unk0 = spF4;
                        temp_r6_3->unk4 = var_r5_2;
                        temp_r6_3->unkC = (void *) (spF4 + var_r8_2);
                    }
                    spD4 += 1;
                }
                if ((spC8 >= 0) && ((s32) var_sb >= 0)) {
                    temp_r5_5 = func_08008920(arg0);
                    temp_r1_6 = spE0 + (spEC + 4);
                    sp0 = var_sb;
                    sp4 = 2;
                    sp8 = (void *)1;
                    spC = 0;
                    func_0804EA94(&sp88, temp_r1_6->unk4, temp_r1_6->unk0 - arg0->unkC, spC8);
                    temp_r2_7 = *temp_r5_5;
                    if ((u32) temp_r2_7 <= 0x7FU) {
                        temp_r1_7 = temp_r5_5 + ((temp_r2_7 * 8) + 4);
                        temp_r1_7->unk0 = sp88;
                        temp_r1_7->unk4 = (u16) sp88.unk4;
                        *temp_r5_5 = temp_r2_7 + 1;
                    }
                }
                var_r4 = spE4;
                if (var_r4 < spBC) {
                    temp_r0_15 = var_r4 * 0x10;
                    spEC = temp_r0_15;
                    if ((s32) *((u8 *)spE0 + (temp_r0_15 + 4)) <= spC0) {
                        goto loop_21;
                    }
                }
            }
        }
        if (sp30 != 0) {
            func_080E54C4(spDC, sp2C->unk4);
            sp2C->unk8 = sp2C;
            sp2C->unk4 = 0;
            sp2C->unkC = sp2C;
            spDC->unk8 = 0;
        }
        if (sp2C != 0) {
            free();
        }
        if (sp18 != 0) {
            func_080E54C4(&sp10, sp14->unk4);
            sp14->unk8 = sp14;
            sp14->unk4 = 0;
            sp14->unkC = sp14;
            sp18 = 0;
        }
        if (sp14 != 0) {
            free();
        }
    }
    sp10 = 0U;
    sp10.unk2 = 0U;
    sp10.unk4 = 0;
    sp10.unk6 = 0;
    sp10.unk8 = 0;
    sp1C = 0;
    sp10.unk10 = 0;
    sp10.unk11 = 0;
    sp24 = 0;
    sp10.unk18 = 0;
    if ((s32) arg0->unkC >= (s32) (arg0->unk1C->unkE - 0xA0)) {
        arg0->unk5D0 = 0U;
    } else {
        arg0->unk5D0 = 1U;
    }
    temp_r1_8 = arg0->unkC;
    if (temp_r1_8 == 0) {
        arg0->unk598 = (u8) temp_r1_8;
    } else {
        arg0->unk598 = 1U;
    }
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x684);
    temp_r1_9 = temp_r3->unk8;
    if (temp_r1_9 != 0) {
        arg0->unk608 = 1U;
        arg0->unk640 = 1U;
        arg0->unk5D4 = (u16) ((temp_r3->unk10 + 2) * 8);
        arg0->unk5D6 = (u16) (arg0->unk648 - 8);
        arg0->unk60C = (u16) ((temp_r3->unk10 + 2) * 8);
        arg0->unk60E = (u16) (arg0->unk648 + 8);
    } else {
        arg0->unk608 = temp_r1_9;
        arg0->unk640 = temp_r1_9;
    }
    if (arg0->unk67C == 0) {

    } else {
        if (spB8 != 0) {
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x64C));
        }
        temp_r1_10 = arg0->unk64C;
        (*temp_r1_10)->unk10(&sp2C, temp_r1_10, *(arg0->unk650 + (((GenObj *)((u8 *)arg0 + 0x64C))->unkC * 4)));
        temp_r0_16 = (GenObj *)((u8 *)arg0 + 0x660);
        temp_r0_17 = (GenObj *)((u8 *)temp_r0_16 + 0xC);
        sp10 = arg0->unk660;
        sp10.unk4 = (s32) temp_r0_16->unk4;
        sp10.unk8 = (s32) temp_r0_16->unk8;
        temp_r1_11 = &(GenObj *)((u8 *)sp10 + 0xC);
        sp10.unkC = (s32) temp_r0_16->unkC;
        temp_r1_11->unk4 = (s32) temp_r0_17->unk4;
        temp_r1_11->unk8 = (s32) temp_r0_17->unk8;
        temp_r1_11->unkC = (s32) temp_r0_17->unkC;
        sp10 = (u16) arg0->unk644;
        sp10.unk2 = (u16) arg0->unk648;
        sp10.unk8 = 1;
        temp_r0_18 = (GenObj *)((u8 *)arg0 + 0x36C);
        sp10.unk4 = (s16) func_080074C0(temp_r0_18, temp_r0_18->unk4);
        temp_r5_6 = (GenObj *)((u8 *)arg0 + 0x364);
        sp10.unk6 = (s16) func_08007D4C(temp_r5_6, temp_r5_6->unk4);
        sp10.unk18 = 1;
        temp_r0_19 = func_08008920(arg0);
        var_r2_9 = 0;
        if (sp2C != 0) {
            var_r2_9 = sp2C.unk4;
        }
        func_0805E99C(temp_r0_19, sp2C, var_r2_9, &sp10);
        temp_r4_7 = func_08008910(arg0);
        temp_r2_8 = func_08007D4C(temp_r5_6, temp_r5_6->unk4);
        var_r3_7 = 0;
        if (sp34 != 0) {
            var_r3_7 = sp34.unk4;
        }
        func_08008F0C(&sp58, (u32) sp34, (temp_r2_8 << 5) + 0x06010000, var_r3_7);
        temp_r1_12 = temp_r4_7->unk4;
        if (temp_r1_12 != temp_r4_7->unkC) {
            if (temp_r1_12 != 0) {
                temp_r1_12->unk0 = (void *) sp58.unk0;
                temp_r1_12->unk4 = (s32) sp58.unk4;
                temp_r1_12->unk8 = (s32) sp58.unk8;
                temp_r1_12->unkC = (s32) sp58.unkC;
            }
            temp_r4_7->unk4 = (void *) (temp_r4_7->unk4 + 0x10);
        } else {
            spF0 = temp_r1_12;
            sp94 = 1;
            temp_r4_8 = (s32) (spF0 - temp_r4_7->unk0) >> 4;
            var_r0_9 = &sp90;
            *var_r0_9 = (u32) temp_r4_8;
            if ((u32) temp_r4_8 < (u32) sp94) {
                var_r0_9 = &sp94;
            }
            temp_r0_20 = temp_r4_8 + *var_r0_9;
            if (temp_r0_20 != 0) {
                temp_r4_9 = temp_r0_20 * 0x10;
                var_r0_10 = malloc(temp_r4_9);
                var_sb_2 = temp_r4_9;
                if (var_r0_10 == 0) {
                    var_r0_10 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_10 = 0;
                var_sb_2 = 0;
            }
            spF4 = var_r0_10;
            var_r2_10 = temp_r4_7->unk0;
            var_r3_8 = var_r0_10;
loop_161:
            if (var_r2_10 != spF0) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (void *) var_r2_10->unk0;
                    var_r3_8->unk4 = (s32) var_r2_10->unk4;
                    var_r3_8->unk8 = (s32) var_r2_10->unk8;
                    var_r3_8->unkC = (s32) var_r2_10->unkC;
                }
                var_r2_10 += 0x10;
                var_r3_8 += 0x10;
                goto loop_161;
            }
            if (sp94 == 1) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (void *) sp58.unk0;
                    var_r3_8->unk4 = (s32) sp58.unk4;
                    var_r3_8->unk8 = (s32) sp58.unk8;
                    var_r3_8->unkC = (s32) sp58.unkC;
                }
                var_r5_3 = (GenObj *)((u8 *)var_r3_8 + 0x10);
            } else {
                var_r3_9 = sp94;
                var_r2_11 = var_r3_8;
                if (var_r3_9 != 0) {
                    do {
                        if (var_r2_11 != 0) {
                            var_r2_11->unk0 = (void *) sp58.unk0;
                            var_r2_11->unk4 = (s32) sp58.unk4;
                            var_r2_11->unk8 = (s32) sp58.unk8;
                            var_r2_11->unkC = (s32) sp58.unkC;
                        }
                        var_r3_9 -= 1;
                        var_r2_11 += 0x10;
                    } while (var_r3_9 != 0);
                }
                var_r5_3 = var_r2_11;
            }
            temp_r2_9 = temp_r4_7->unk4;
            temp_r0_21 = temp_r4_7->unk0;
            var_r1_6 = temp_r0_21;
            if (temp_r0_21 != temp_r2_9) {
                do {
                    var_r1_6 += 0x10;
                } while (var_r1_6 != temp_r2_9);
            }
            if (temp_r0_21 != 0) {
                free();
            }
            temp_r4_7->unk0 = spF4;
            temp_r4_7->unk4 = var_r5_3;
            temp_r4_7->unkC = (void *) (spF4 + var_sb_2);
        }
    }
    if (arg0->unk598 == 0) {

    } else {
        if (spB8 != 0) {
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x568));
        }
        temp_r1_13 = arg0->unk568;
        (*temp_r1_13)->unk10(&sp2C, temp_r1_13, *(arg0->unk56C + (((GenObj *)((u8 *)arg0 + 0x568))->unkC * 4)));
        temp_r0_22 = (GenObj *)((u8 *)arg0 + 0x57C);
        temp_r0_23 = (GenObj *)((u8 *)temp_r0_22 + 0xC);
        sp10 = arg0->unk57C;
        sp10.unk4 = (s32) temp_r0_22->unk4;
        sp10.unk8 = (s32) temp_r0_22->unk8;
        temp_r1_14 = &(GenObj *)((u8 *)sp10 + 0xC);
        sp10.unkC = (s32) temp_r0_22->unkC;
        temp_r1_14->unk4 = (s32) temp_r0_23->unk4;
        temp_r1_14->unk8 = (s32) temp_r0_23->unk8;
        temp_r1_14->unkC = (s32) temp_r0_23->unkC;
        sp10 = (u16) arg0->unk564;
        sp10.unk2 = (u16) arg0->unk566;
        sp10.unk8 = 1;
        temp_r0_24 = (GenObj *)((u8 *)arg0 + 0x384);
        sp10.unk4 = (s16) func_080074C0(temp_r0_24, temp_r0_24->unk4);
        temp_r5_7 = (GenObj *)((u8 *)arg0 + 0x374);
        sp10.unk6 = (s16) func_08007D4C(temp_r5_7, temp_r5_7->unk4);
        sp10.unk18 = 1;
        temp_r0_25 = func_08008920(arg0);
        var_r2_12 = 0;
        if (sp2C != 0) {
            var_r2_12 = sp2C.unk4;
        }
        func_0805E99C(temp_r0_25, sp2C, var_r2_12, &sp10);
        temp_r4_10 = func_08008910(arg0);
        temp_r2_10 = func_08007D4C(temp_r5_7, temp_r5_7->unk4);
        var_r3_10 = 0;
        if (sp34 != 0) {
            var_r3_10 = sp34.unk4;
        }
        func_08008F0C((void **) &sp4C, (u32) sp34, (temp_r2_10 << 5) + 0x06010000, var_r3_10);
        temp_r1_15 = temp_r4_10->unk4;
        if (temp_r1_15 != temp_r4_10->unkC) {
            if (temp_r1_15 != 0) {
                temp_r1_15->unk0 = (u32) sp4C.unk0;
                temp_r1_15->unk4 = (s32) sp4C.unk4;
                temp_r1_15->unk8 = (s32) sp4C.unk8;
                temp_r1_15->unkC = (s32) sp4C.unkC;
            }
            temp_r4_10->unk4 = (void *) (temp_r4_10->unk4 + 0x10);
        } else {
            spF0 = temp_r1_15;
            sp9C = 1;
            temp_r4_11 = (s32) (spF0 - temp_r4_10->unk0) >> 4;
            var_r0_11 = &sp98;
            *var_r0_11 = (u32) temp_r4_11;
            if ((u32) temp_r4_11 < (u32) sp9C) {
                var_r0_11 = &sp9C;
            }
            temp_r0_26 = temp_r4_11 + *var_r0_11;
            if (temp_r0_26 != 0) {
                temp_r4_12 = temp_r0_26 * 0x10;
                var_r0_12 = malloc(temp_r4_12);
                var_sb_3 = temp_r4_12;
                if (var_r0_12 == 0) {
                    var_r0_12 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_12 = 0;
                var_sb_3 = 0;
            }
            spF4 = var_r0_12;
            var_r2_13 = temp_r4_10->unk0;
            var_r3_11 = var_r0_12;
loop_198:
            if (var_r2_13 != spF0) {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (u32) var_r2_13->unk0;
                    var_r3_11->unk4 = (s32) var_r2_13->unk4;
                    var_r3_11->unk8 = (s32) var_r2_13->unk8;
                    var_r3_11->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_11 += 0x10;
                goto loop_198;
            }
            if (sp9C == 1) {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (u32) sp4C.unk0;
                    var_r3_11->unk4 = (s32) sp4C.unk4;
                    var_r3_11->unk8 = (s32) sp4C.unk8;
                    var_r3_11->unkC = (s32) sp4C.unkC;
                }
                var_r5_4 = (GenObj *)((u8 *)var_r3_11 + 0x10);
            } else {
                var_r3_12 = sp9C;
                var_r2_14 = var_r3_11;
                if (var_r3_12 != 0) {
                    do {
                        if (var_r2_14 != 0) {
                            var_r2_14->unk0 = (u32) sp4C.unk0;
                            var_r2_14->unk4 = (s32) sp4C.unk4;
                            var_r2_14->unk8 = (s32) sp4C.unk8;
                            var_r2_14->unkC = (s32) sp4C.unkC;
                        }
                        var_r3_12 -= 1;
                        var_r2_14 += 0x10;
                    } while (var_r3_12 != 0);
                }
                var_r5_4 = var_r2_14;
            }
            temp_r2_11 = temp_r4_10->unk4;
            temp_r0_27 = temp_r4_10->unk0;
            var_r1_7 = temp_r0_27;
            if (temp_r0_27 != temp_r2_11) {
                do {
                    var_r1_7 += 0x10;
                } while (var_r1_7 != temp_r2_11);
            }
            if (temp_r0_27 != 0) {
                free();
            }
            temp_r4_10->unk0 = spF4;
            temp_r4_10->unk4 = var_r5_4;
            temp_r4_10->unkC = (void *) (spF4 + var_sb_3);
        }
    }
    if (arg0->unk5D0 == 0) {

    } else {
        if (spB8 != 0) {
            func_0805E8F0((GenObj *)((u8 *)arg0 + 0x5A0));
        }
        temp_r1_16 = arg0->unk5A0;
        (*temp_r1_16)->unk10(&sp2C, temp_r1_16, *(arg0->unk5A4 + (((GenObj *)((u8 *)arg0 + 0x5A0))->unkC * 4)));
        temp_r0_28 = (GenObj *)((u8 *)arg0 + 0x5B4);
        temp_r0_29 = (GenObj *)((u8 *)temp_r0_28 + 0xC);
        sp10 = arg0->unk5B4;
        sp10.unk4 = (s32) temp_r0_28->unk4;
        sp10.unk8 = (s32) temp_r0_28->unk8;
        temp_r1_17 = &(GenObj *)((u8 *)sp10 + 0xC);
        sp10.unkC = (s32) temp_r0_28->unkC;
        temp_r1_17->unk4 = (s32) temp_r0_29->unk4;
        temp_r1_17->unk8 = (s32) temp_r0_29->unk8;
        temp_r1_17->unkC = (s32) temp_r0_29->unkC;
        sp10 = (u16) arg0->unk59C;
        sp10.unk2 = (u16) arg0->unk59E;
        sp10.unk8 = 1;
        temp_r0_30 = (GenObj *)((u8 *)arg0 + 0x384);
        sp10.unk4 = (s16) func_080074C0(temp_r0_30, temp_r0_30->unk4);
        temp_r5_8 = (GenObj *)((u8 *)arg0 + 0x37C);
        sp10.unk6 = (s16) func_08007D4C(temp_r5_8, temp_r5_8->unk4);
        sp10.unk18 = 1;
        temp_r0_31 = func_08008920(arg0);
        var_r2_15 = 0;
        if (sp2C != 0) {
            var_r2_15 = sp2C.unk4;
        }
        func_0805E99C(temp_r0_31, sp2C, var_r2_15, &sp10);
        temp_r4_13 = func_08008910(arg0);
        temp_r2_12 = func_08007D4C(temp_r5_8, temp_r5_8->unk4);
        var_r3_13 = 0;
        if (sp34 != 0) {
            var_r3_13 = sp34.unk4;
        }
        func_08008F0C((void **) &sp4C, (u32) sp34, (temp_r2_12 << 5) + 0x06010000, var_r3_13);
        temp_r1_18 = temp_r4_13->unk4;
        if (temp_r1_18 != temp_r4_13->unkC) {
            if (temp_r1_18 != 0) {
                temp_r1_18->unk0 = (u32) sp4C.unk0;
                temp_r1_18->unk4 = (s32) sp4C.unk4;
                temp_r1_18->unk8 = (s32) sp4C.unk8;
                temp_r1_18->unkC = (s32) sp4C.unkC;
            }
            temp_r4_13->unk4 = (void *) (temp_r4_13->unk4 + 0x10);
        } else {
            spF0 = temp_r1_18;
            spA4 = 1;
            temp_r4_14 = (s32) (spF0 - temp_r4_13->unk0) >> 4;
            var_r0_13 = &spA0;
            *var_r0_13 = (u32) temp_r4_14;
            if ((u32) temp_r4_14 < (u32) spA4) {
                var_r0_13 = &spA4;
            }
            temp_r0_32 = temp_r4_14 + *var_r0_13;
            if (temp_r0_32 != 0) {
                temp_r4_15 = temp_r0_32 * 0x10;
                var_r0_14 = malloc(temp_r4_15);
                var_sb_4 = temp_r4_15;
                if (var_r0_14 == 0) {
                    var_r0_14 = func_080D3BC0(var_sb_4);
                }
            } else {
                var_r0_14 = 0;
                var_sb_4 = 0;
            }
            spF4 = var_r0_14;
            var_r2_16 = temp_r4_13->unk0;
            var_r3_14 = var_r0_14;
loop_235:
            if (var_r2_16 != spF0) {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (u32) var_r2_16->unk0;
                    var_r3_14->unk4 = (s32) var_r2_16->unk4;
                    var_r3_14->unk8 = (s32) var_r2_16->unk8;
                    var_r3_14->unkC = (s32) var_r2_16->unkC;
                }
                var_r2_16 += 0x10;
                var_r3_14 += 0x10;
                goto loop_235;
            }
            if (spA4 == 1) {
                if (var_r3_14 != 0) {
                    var_r3_14->unk0 = (u32) sp4C.unk0;
                    var_r3_14->unk4 = (s32) sp4C.unk4;
                    var_r3_14->unk8 = (s32) sp4C.unk8;
                    var_r3_14->unkC = (s32) sp4C.unkC;
                }
                var_r5_5 = (GenObj *)((u8 *)var_r3_14 + 0x10);
            } else {
                var_r3_15 = spA4;
                var_r2_17 = var_r3_14;
                if (var_r3_15 != 0) {
                    do {
                        if (var_r2_17 != 0) {
                            var_r2_17->unk0 = (u32) sp4C.unk0;
                            var_r2_17->unk4 = (s32) sp4C.unk4;
                            var_r2_17->unk8 = (s32) sp4C.unk8;
                            var_r2_17->unkC = (s32) sp4C.unkC;
                        }
                        var_r3_15 -= 1;
                        var_r2_17 += 0x10;
                    } while (var_r3_15 != 0);
                }
                var_r5_5 = var_r2_17;
            }
            temp_r2_13 = temp_r4_13->unk4;
            temp_r0_33 = temp_r4_13->unk0;
            var_r1_8 = temp_r0_33;
            if (temp_r0_33 != temp_r2_13) {
                do {
                    var_r1_8 += 0x10;
                } while (var_r1_8 != temp_r2_13);
            }
            if (temp_r0_33 != 0) {
                free();
            }
            temp_r4_13->unk0 = spF4;
            temp_r4_13->unk4 = var_r5_5;
            temp_r4_13->unkC = (void *) (spF4 + var_sb_4);
        }
    }
    if (arg0->unk640 == 0) {

    } else {
        temp_r4_16 = (GenObj *)((u8 *)arg0 + 0x610);
        func_0805E8F0(temp_r4_16);
        temp_r1_19 = arg0->unk610;
        (*temp_r1_19)->unk10(&sp2C, temp_r1_19, *(arg0->unk614 + (temp_r4_16->unkC * 4)));
        temp_r0_34 = (GenObj *)((u8 *)arg0 + 0x624);
        temp_r0_35 = (GenObj *)((u8 *)temp_r0_34 + 0xC);
        sp10 = arg0->unk624;
        sp10.unk4 = (s32) temp_r0_34->unk4;
        sp10.unk8 = (s32) temp_r0_34->unk8;
        temp_r1_20 = &(GenObj *)((u8 *)sp10 + 0xC);
        sp10.unkC = (s32) temp_r0_34->unkC;
        temp_r1_20->unk4 = (s32) temp_r0_35->unk4;
        temp_r1_20->unk8 = (s32) temp_r0_35->unk8;
        temp_r1_20->unkC = (s32) temp_r0_35->unkC;
        sp10 = (u16) arg0->unk60C;
        sp10.unk2 = (u16) arg0->unk60E;
        sp10.unk8 = 0;
        temp_r0_36 = (GenObj *)((u8 *)arg0 + 0x39C);
        sp10.unk4 = (s16) func_080074C0(temp_r0_36, temp_r0_36->unk4);
        temp_r4_17 = (GenObj *)((u8 *)arg0 + 0x394);
        sp10.unk6 = (s16) func_08007D4C(temp_r4_17, temp_r4_17->unk4);
        sp10.unk18 = 1;
        temp_r3_2 = func_08008920(arg0);
        var_r2_18 = 0;
        if (sp2C != 0) {
            var_r2_18 = sp2C.unk4;
        }
        func_0805E99C(temp_r3_2, sp2C, var_r2_18, &sp10);
        temp_r5_9 = func_08008910(arg0);
        temp_r2_14 = func_08007D4C(temp_r4_17, temp_r4_17->unk4);
        var_r3_16 = 0;
        if (sp34 != 0) {
            var_r3_16 = sp34.unk4;
        }
        func_08008F0C((void **) &sp4C, (u32) sp34, (temp_r2_14 << 5) + 0x06010000, var_r3_16);
        temp_r1_21 = temp_r5_9->unk4;
        if (temp_r1_21 != temp_r5_9->unkC) {
            if (temp_r1_21 != 0) {
                temp_r1_21->unk0 = (u32) sp4C.unk0;
                temp_r1_21->unk4 = (s32) sp4C.unk4;
                temp_r1_21->unk8 = (s32) sp4C.unk8;
                temp_r1_21->unkC = (s32) sp4C.unkC;
            }
            temp_r5_9->unk4 = (void *) (temp_r5_9->unk4 + 0x10);
        } else {
            spF0 = temp_r1_21;
            spAC = 1;
            temp_r4_18 = (s32) (spF0 - temp_r5_9->unk0) >> 4;
            var_r0_15 = &spA8;
            *var_r0_15 = (u32) temp_r4_18;
            if ((u32) temp_r4_18 < (u32) spAC) {
                var_r0_15 = &spAC;
            }
            temp_r0_37 = temp_r4_18 + *var_r0_15;
            if (temp_r0_37 != 0) {
                temp_r4_19 = temp_r0_37 * 0x10;
                var_r0_16 = malloc(temp_r4_19);
                var_sb_5 = temp_r4_19;
                if (var_r0_16 == 0) {
                    var_r0_16 = func_080D3BC0(var_sb_5);
                }
            } else {
                var_r0_16 = 0;
                var_sb_5 = 0;
            }
            spF4 = var_r0_16;
            var_r2_19 = temp_r5_9->unk0;
            var_r3_17 = var_r0_16;
            if (var_r2_19 != spF0) {
                do {
                    if (var_r3_17 != 0) {
                        var_r3_17->unk0 = (s32) var_r2_19->unk0;
                        var_r3_17->unk4 = (s32) var_r2_19->unk4;
                        var_r3_17->unk8 = (s32) var_r2_19->unk8;
                        var_r3_17->unkC = (s32) var_r2_19->unkC;
                    }
                    var_r2_19 += 0x10;
                    var_r3_17 += 0x10;
                } while (var_r2_19 != spF0);
            }
            if (spAC == 1) {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (u32) sp4C.unk0;
                    var_r3_17->unk4 = (s32) sp4C.unk4;
                    var_r3_17->unk8 = (s32) sp4C.unk8;
                    var_r3_17->unkC = (s32) sp4C.unkC;
                }
                var_r5_6 = (GenObj *)((u8 *)var_r3_17 + 0x10);
            } else {
                var_r3_18 = spAC;
                var_r2_20 = var_r3_17;
                if (var_r3_18 != 0) {
                    do {
                        if (var_r2_20 != 0) {
                            var_r2_20->unk0 = (u32) sp4C.unk0;
                            var_r2_20->unk4 = (s32) sp4C.unk4;
                            var_r2_20->unk8 = (s32) sp4C.unk8;
                            var_r2_20->unkC = (s32) sp4C.unkC;
                        }
                        var_r3_18 -= 1;
                        var_r2_20 += 0x10;
                    } while (var_r3_18 != 0);
                }
                var_r5_6 = var_r2_20;
            }
            temp_r2_15 = temp_r5_9->unk4;
            temp_r0_38 = temp_r5_9->unk0;
            var_r1_9 = temp_r0_38;
            if (temp_r0_38 != temp_r2_15) {
                do {
                    var_r1_9 += 0x10;
                } while (var_r1_9 != temp_r2_15);
            }
            if (temp_r0_38 != 0) {
                free();
            }
            temp_r5_9->unk0 = spF4;
            temp_r5_9->unk4 = var_r5_6;
            temp_r5_9->unkC = (void *) (spF4 + var_sb_5);
        }
    }
    if (arg0->unk608 == 0) {
        return;
    }
    temp_r4_20 = (GenObj *)((u8 *)arg0 + 0x5D8);
    func_0805E8F0(temp_r4_20);
    temp_r1_22 = arg0->unk5D8;
    (*temp_r1_22)->unk10(&sp2C, temp_r1_22, *(arg0->unk5DC + (temp_r4_20->unkC * 4)));
    temp_r0_39 = (GenObj *)((u8 *)arg0 + 0x5EC);
    temp_r0_40 = (GenObj *)((u8 *)temp_r0_39 + 0xC);
    sp10 = arg0->unk5EC;
    sp10.unk4 = (s32) temp_r0_39->unk4;
    sp10.unk8 = (s32) temp_r0_39->unk8;
    temp_r1_23 = &(GenObj *)((u8 *)sp10 + 0xC);
    sp10.unkC = (s32) temp_r0_39->unkC;
    temp_r1_23->unk4 = (s32) temp_r0_40->unk4;
    temp_r1_23->unk8 = (s32) temp_r0_40->unk8;
    temp_r1_23->unkC = (s32) temp_r0_40->unkC;
    sp10 = (u16) arg0->unk5D4;
    sp10.unk2 = (u16) arg0->unk5D6;
    sp10.unk8 = 0;
    temp_r0_41 = (GenObj *)((u8 *)arg0 + 0x39C);
    sp10.unk4 = (s16) func_080074C0(temp_r0_41, temp_r0_41->unk4);
    temp_r4_21 = (GenObj *)((u8 *)arg0 + 0x38C);
    sp10.unk6 = (s16) func_08007D4C(temp_r4_21, temp_r4_21->unk4);
    sp10.unk18 = 1;
    temp_r3_3 = func_08008920(arg0);
    var_r2_21 = 0;
    if (sp2C != 0) {
        var_r2_21 = sp2C.unk4;
    }
    func_0805E99C(temp_r3_3, sp2C, var_r2_21, &sp10);
    temp_r5_10 = func_08008910(arg0);
    temp_r2_16 = func_08007D4C(temp_r4_21, temp_r4_21->unk4);
    var_r3_19 = 0;
    if (sp34 != 0) {
        var_r3_19 = sp34.unk4;
    }
    func_08008F0C((void **) &sp4C, (u32) sp34, (temp_r2_16 << 5) + 0x06010000, var_r3_19);
    temp_r1_24 = temp_r5_10->unk4;
    if (temp_r1_24 != temp_r5_10->unkC) {
        if (temp_r1_24 != 0) {
            temp_r1_24->unk0 = (u32) sp4C.unk0;
            temp_r1_24->unk4 = (s32) sp4C.unk4;
            temp_r1_24->unk8 = (s32) sp4C.unk8;
            temp_r1_24->unkC = (s32) sp4C.unkC;
        }
        temp_r5_10->unk4 = (void *) (temp_r5_10->unk4 + 0x10);
        return;
    }
    spF0 = temp_r1_24;
    spB4 = 1;
    temp_r4_22 = (s32) (spF0 - temp_r5_10->unk0) >> 4;
    var_r0_17 = &spB0;
    *var_r0_17 = (u32) temp_r4_22;
    if ((u32) temp_r4_22 < (u32) spB4) {
        var_r0_17 = &spB4;
    }
    temp_r0_42 = temp_r4_22 + *var_r0_17;
    if (temp_r0_42 != 0) {
        temp_r4_23 = temp_r0_42 * 0x10;
        var_r0_18 = malloc(temp_r4_23);
        var_sb_6 = temp_r4_23;
        if (var_r0_18 == 0) {
            var_r0_18 = func_080D3BC0(var_sb_6);
        }
    } else {
        var_r0_18 = 0;
        var_sb_6 = 0;
    }
    spF4 = var_r0_18;
    var_r2_22 = temp_r5_10->unk0;
    var_r3_20 = var_r0_18;
    if (var_r2_22 != spF0) {
        do {
            if (var_r3_20 != 0) {
                var_r3_20->unk0 = (s32) var_r2_22->unk0;
                var_r3_20->unk4 = (s32) var_r2_22->unk4;
                var_r3_20->unk8 = (s32) var_r2_22->unk8;
                var_r3_20->unkC = (s32) var_r2_22->unkC;
            }
            var_r2_22 += 0x10;
            var_r3_20 += 0x10;
        } while (var_r2_22 != spF0);
    }
    temp_r1_25 = spB4;
    if (temp_r1_25 == 1) {
        if (var_r3_20 != 0) {
            var_r3_20->unk0 = (u32) sp4C.unk0;
            var_r3_20->unk4 = (s32) sp4C.unk4;
            var_r3_20->unk8 = (s32) sp4C.unk8;
            var_r3_20->unkC = (s32) sp4C.unkC;
        }
        var_r5_7 = (GenObj *)((u8 *)var_r3_20 + 0x10);
    } else {
        var_r3_21 = temp_r1_25;
        var_r2_23 = var_r3_20;
        if (var_r3_21 != 0) {
            do {
                if (var_r2_23 != 0) {
                    var_r2_23->unk0 = (u32) sp4C.unk0;
                    var_r2_23->unk4 = (s32) sp4C.unk4;
                    var_r2_23->unk8 = (s32) sp4C.unk8;
                    var_r2_23->unkC = (s32) sp4C.unkC;
                }
                var_r3_21 -= 1;
                var_r2_23 += 0x10;
            } while (var_r3_21 != 0);
        }
        var_r5_7 = var_r2_23;
    }
    temp_r2_17 = temp_r5_10->unk4;
    temp_r0_43 = temp_r5_10->unk0;
    var_r1_10 = temp_r0_43;
    if (temp_r0_43 != temp_r2_17) {
        do {
            var_r1_10 += 0x10;
        } while (var_r1_10 != temp_r2_17);
    }
    if (temp_r0_43 != 0) {
        free();
    }
    temp_r5_10->unk0 = spF4;
    temp_r5_10->unk4 = var_r5_7;
    temp_r5_10->unkC = (void *) (spF4 + var_sb_6);
}
