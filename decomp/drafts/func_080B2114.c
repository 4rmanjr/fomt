s32 __builtin_delete();                               /* extern */
s32 *__builtin_new(s32);                            /* extern */
s32 free();                                           /* extern */
s32 func_0800770C(s32 *);                             /* extern */
s32 func_08007714(s32 *, s32);                        /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
s32 func_0800835C(s32 *);                             /* extern */
s32 func_08008364(s32 *, s32);                        /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088D4(void *);                          /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 *func_08008940(void *);                         /* extern */
s32 *func_0800894C(void *);                         /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008C38(void *, s32, s32);                  /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_08008F0C(s32 *, void *, s32, u16);           /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32 *, void *, s32, s32);           /* extern */
s32 func_0804EA94(s32 *, s32, s32, s32);              /* extern */
s32 func_0804EC84(s32, s32 *, s32);                   /* extern */
s32 func_08050CC0(s32 *, s32, s32, s32);            /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
u8 func_08050D34(s32);                              /* extern */
u32 func_08050D3C(s32, s32, s32, s16 *);            /* extern */
s32 func_08050D5C(s32);                               /* extern */
s32 func_08050D8C(s32, s32 *);                          /* extern */
s32 func_08050DD8(s32);                               /* extern */
s32 *func_0805E824(s32 *, s32, s32, s32);           /* extern */
s32 func_0805E860(s32 *, s32);                        /* extern */
s32 func_080AF814(void *);                            /* extern */
s32 func_080B0934(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
s32 strlen(s32 *);                                  /* extern */
extern s32 gUnk_08107850;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    struct GenObj *unk14;
    s32 unk18;
    u8 _pad1C[1020];
    s32 unk418;
    u8 _pad41C[16];
    s32 unk42C;
    s32 unk430;
    s32 unk434;
    s32 unk438;
    u8 _pad43C[40];
    void *unk464;
    s32 unk468;
    u8 _pad46C[4];
    s32 unk470;
    u8 _pad474[4];
    s32 unk478;
    u8 _pad47C[16];
    void *unk48C;
    s32 unk490;
    u8 _pad494[4];
    s32 unk498;
    u8 _pad49C[4];
    s32 unk4A0;
    u8 _pad4A4[832];
    s32 unk7E4;
    u8 _pad7E8[4];
    s32 unk7EC;
    u8 _pad7F0[4];
    s32 unk7F4;
    u8 _pad7F8[4];
    s32 unk7FC;
    u8 _pad800[56];
    s32 unk838;
    u8 _pad83C[4];
    s32 unk840;
    s32 unk844;
    u8 _pad848[196];
    s32 unk90C;
    s32 unk90D;
    s32 unk90E;
    s32 unk910;
    u8 _pad914[21];
    s32 unk929;
    s32 unk92A;
    s32 unk92B;
    s32 unk92C;
} GenObj;
void func_080B2114(GenObj *arg0) {
    GenObj *sp0;                                       /* compiler-managed */
    s32 *sp4;
    s32 *sp8;                                       /* compiler-managed */
    s32 spC;
    s32 sp10;
    s32 sp1C;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    GenObj sp3C;
s32 sp44;
    s32 sp64;
    s32 *sp68;
    s32 *sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp80;
    s32 sp88;
    s32 sp8C;
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
s32 spB8;
s32 spBC;
s32 spC0;
    u32 spC4;
    u32 spC8;
    s16 spCC;
s32 spD4;
    u32 spD8;
    u32 spDC;
    s32 *spE0;
    s32 *spE4;
    GenObj *spE8;
    s32 **spEC;
    s32 spF0;
    s32 spF4;
    s32 spF8;
    s32 spFC;
    s32 **sp100;
    GenObj *sp104;
    s32 sp108;
    s32 sp10C;
    s32 *sp110;
    s32 sp114;
    s32 *sp118;
    s32 **sp11C;
    s32 *sp120;
    s32 **sp128;
    s32 **sp12C;
    void *sp130;
    void *sp134;
    void *sp138;
    s16 *temp_r0_2;
    s16 *temp_r5;
    s16 *temp_r5_7;
    s16 temp_r2_10;
    s16 temp_r2_4;
    s16 temp_r2_7;
    GenObj *temp_r0_10;
    s32 *temp_r0_17;
    GenObj *temp_r0_18;
    s32 *temp_r0_25;
    s32 *temp_r0_26;
    GenObj *temp_r0_27;
    GenObj *temp_r0_28;
    s32 *temp_r0_35;
    s32 *temp_r0_6;
    s32 *temp_r0_9;
    s32 *temp_r4;
    GenObj *temp_r4_13;
    s32 *temp_r4_28;
    s32 *temp_r4_29;
    s32 *temp_r4_2;
    GenObj *temp_r4_5;
    s32 *temp_r5_8;
    s32 *var_r0;
    s32 *var_r0_16;
    s32 *var_r0_4;
    s32 *var_r1_10;
    s32 temp_r0;
    s32 temp_r0_12;
    s32 temp_r0_15;
    s32 temp_r0_20;
    s32 temp_r0_23;
    s32 temp_r0_30;
    s32 temp_r0_33;
    s32 temp_r0_37;
    s32 temp_r0_39;
    s32 temp_r0_3;
    s32 temp_r0_41;
    s32 temp_r0_43;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r1_2;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r2;
    s32 temp_r2_13;
    s32 temp_r2_14;
    s32 temp_r2_16;
    s32 temp_r2_17;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_11;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_9;
    s32 temp_r6;
    s32 temp_r6_6;
    s32 temp_r6_7;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 var_r0_17;
    s32 var_r0_3;
    s32 var_r1_3;
    s32 var_r3_2;
    s32 var_r3_5;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    u16 var_r3_12;
    u16 var_r3_15;
    u16 var_r3_18;
    u16 var_r3_3;
    u16 var_r3_6;
    u16 var_r3_9;
    u32 *var_r0_10;
    u32 *var_r0_12;
    u32 *var_r0_14;
    u32 *var_r0_18;
    u32 *var_r0_20;
    u32 *var_r0_6;
    u32 *var_r0_8;
    u32 temp_r0_36;
    u32 var_r3_11;
    u32 var_r3_14;
    u32 var_r3_17;
    u32 var_r3_20;
    u32 var_r3_22;
    u32 var_r3_24;
    u32 var_r3_8;
    u8 temp_r7_4;
    GenObj *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_16;
    GenObj *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_22;
    void *temp_r0_24;
    GenObj *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_32;
    void *temp_r0_34;
    GenObj *temp_r0_38;
    void *temp_r0_40;
    GenObj *temp_r0_42;
    void *temp_r0_44;
    void *temp_r0_8;
    GenObj *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_9;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_15;
    void *temp_r2_18;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_8;
    void *temp_r2_9;
    GenObj *temp_r4_10;
    GenObj *temp_r4_14;
    void *temp_r4_15;
    GenObj *temp_r4_18;
    GenObj *temp_r4_21;
    void *temp_r4_22;
    GenObj *temp_r4_25;
    GenObj *temp_r4_6;
    void *temp_r4_7;
    GenObj *temp_r5_10;
    GenObj *temp_r5_12;
    GenObj *temp_r5_4;
    GenObj *temp_r5_5;
    GenObj *temp_r5_6;
    GenObj *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    GenObj *temp_r6_5;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *var_r0_11;
    void *var_r0_13;
    void *var_r0_15;
    void *var_r0_19;
    void *var_r0_21;
    void *var_r0_2;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_9;
    GenObj *var_r1;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3;
    GenObj *var_r3_10;
    GenObj *var_r3_13;
    GenObj *var_r3_16;
    GenObj *var_r3_19;
    GenObj *var_r3_21;
    GenObj *var_r3_23;
    GenObj *var_r3_4;
    GenObj *var_r3_7;
    void *var_r4;
    GenObj *var_r4_2;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r6;
    void *var_r6_2;

    var_sb = 0;
    arg0->unk844 = 0;
    arg0->unk929 = 1;
    sp110 = (s32 *) (&(GenObj *)((u8 *)sp0 + 0x28));
    sp128 = &(GenObj *)((u8 *)sp0 + 0x64);
    sp11C = &(GenObj *)((u8 *)sp0 + 0x34);
    sp118 = (s32 *) (&(GenObj *)((u8 *)sp0 + 0x30));
    var_r1 = (GenObj *)((u8 *)arg0 + 0x848);
    do {
        if (var_r1->unk0 != 5) {
            var_r1->unk0 = 0;
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x91A) + var_sb) = 1;
        }
        var_r1->unk14 = 0;
        *((u8 *)(GenObj *)((u8 *)arg0 + 0x91F) + var_sb) = 1;
        var_r1 += 4;
        var_sb += 1;
    } while (var_sb <= 4);
    arg0->unk90C = (u8) (arg0->unk90C - 5);
    temp_r0 = arg0->unk90C - arg0->unk90D;
    arg0->unk910 = temp_r0;
    if (temp_r0 < 0) {
        arg0->unk910 = 0;
    }
    if ((u32) arg0->unk90C > 0x63U) {
        arg0->unk90C = 0x63U;
    }
    if ((u32) arg0->unk90D > 0x63U) {
        arg0->unk90D = 0x63U;
    }
    if ((s32) arg0->unk910 > 0x63) {
        arg0->unk910 = 0x63;
    }
    sp28 = (s32) arg0->unk90C;
    sp2C = (s32) arg0->unk90D;
    sp30 = arg0->unk910;
    memcpy(&sp1C, sp110, 0xC);
    memcpy(&sp10, &sp1C, 0xC);
    spE0 = 0;
    temp_r0_2 = func_08008918(arg0);
    *sp110 = 0x1740;
    *temp_r0_2 = 0x1740;
    temp_r0_3 = arg0->unk418;
    if ((temp_r0_3 != 0) && (temp_r0_3 != 0)) {
        func_08050D0C(temp_r0_3, 3);
    }
    arg0->unk418 = 0;
    temp_r4 = __builtin_new(4);
    func_0800835C(sp110);
    func_0800770C(&sp2C);
    sp0 = 0;
    sp4 = sp110;
    sp8 = &sp2C;
    temp_r0_4 = func_08050CC0(temp_r4, 0, 0x18, 0);
    temp_r0_5 = arg0->unk418;
    if ((temp_r0_4 != temp_r0_5) && (temp_r0_5 != 0)) {
        func_08050D0C(temp_r0_5, 3);
    }
    arg0->unk418 = temp_r0_4;
    func_08007714(&sp2C, 2);
    func_08008364(sp110, 2);
    temp_sb = arg0->unk418;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4_2 = func_08008940(arg0);
    temp_r0_6 = func_0800894C(arg0);
    sp0 = temp_r4_2;
    sp4 = temp_r0_6;
    sp8 = (GenObj *)((u8 *)arg0 + 0x810);
    func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5);
    func_0804EC84(0, sp110, 0);
    var_sb_2 = 0;
    spE4 = sp110;
    spE8 = (GenObj *)((u8 *)arg0 + 0x8D0);
loop_19:
    temp_r5_2 = var_sb_2 * 0x104;
    sp64 = 4;
    sp128->unk2 = 2;
    func_0804E7A0(sp64, temp_r5_2 + (GenObj *)((u8 *)arg0 + 0x110), 0);
    if (var_sb_2 != 1) {
        temp_r2 = 0x20 - (strlen(spE4) * 8);
        sp68.unk0 = 4;
        sp68.unk2 = 2;
        sp0 = spE4;
        sp4 = 0;
        sp8 = (s32 *)5;
        func_0804E958(sp68, temp_r5_2 + (GenObj *)((u8 *)arg0 + 0x110), temp_r2, 0);
    } else {
        temp_r2_2 = 0x20 - (strlen(spE4) * 8);
        sp6C.unk0 = 4;
        sp6C.unk2 = 2;
        sp0 = spE4;
        sp4 = 0;
        sp8 = (s32 *)7;
        func_0804E958(sp6C, (GenObj *)((u8 *)arg0 + 0x214), temp_r2_2, 0);
    }
    temp_r6_2 = func_08008910(arg0);
    temp_r5_3 = var_sb_2 * 8;
    func_08008F0C(&sp34, (var_sb_2 * 0x104) + (GenObj *)((u8 *)arg0 + 0x110), ((temp_r5_3 + func_08007D4C(spE8, spE8->unk4)) << 5) + 0x06010000, 0x100U);
    spEC = sp11C;
    temp_r1 = temp_r6_2->unk4;
    sp114 = temp_r5_3;
    if (temp_r1 != temp_r6_2->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32 *) sp11C->unk0;
            temp_r1->unk4 = (s32) sp11C->unk4;
            temp_r1->unk8 = (s32) sp11C->unk8;
            temp_r1->unkC = (s32) sp11C->unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
        sp10C = var_sb_2 + 1;
    } else {
        sp130 = temp_r1;
        sp74 = 1;
        temp_r4_3 = (s32) (temp_r1 - temp_r6_2->unk0) >> 4;
        sp70 = temp_r4_3;
        var_r0 = &sp70;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp74;
        }
        temp_r0_7 = temp_r4_3 + *var_r0;
        if (temp_r0_7 != 0) {
            temp_r4_4 = temp_r0_7 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_r8 = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp134 = var_r0_2;
        var_r2 = temp_r6_2->unk0;
        var_r3 = var_r0_2;
        sp10C = var_sb_2 + 1;
        if (var_r2 != sp130) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp130);
        }
        if (sp74 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32 *) spEC->unk0;
                var_r3->unk4 = (s32) spEC->unk4;
                var_r3->unk8 = (s32) spEC->unk8;
                var_r3->unkC = (s32) spEC->unkC;
            }
            var_r4 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp74;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32 *) spEC->unk0;
                        var_r2_2->unk4 = (s32) spEC->unk4;
                        var_r2_2->unk8 = (s32) spEC->unk8;
                        var_r2_2->unkC = (s32) spEC->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2_3 = temp_r6_2->unk4;
        temp_r0_8 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_8;
        if (temp_r0_8 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_8 != 0) {
            free();
        }
        temp_r6_2->unk0 = sp134;
        temp_r6_2->unk4 = var_r4;
        temp_r6_2->unkC = (void *) (sp134 + var_r8);
    }
    func_08008EB8(0, sp114 + 0x448 + arg0, 8);
    if (var_sb_2 != 2) {
        var_r4_2 = sp114 + (GenObj *)((u8 *)arg0 + 0x448);
        temp_r3 = func_08007D4C(spE8, spE8->unk4) + sp114;
        sp0 = (s32 *)2;
        sp4 = 0;
        sp8 = (s32 *)2;
        spC = 1;
        func_0804EA94(&sp78, 0x78, (var_sb_2 * 0x10) + 0x6D, temp_r3);
        var_r0_3 = sp78;
        var_r1_3 = sp7C;
    } else {
        var_r4_2 = (GenObj *)((u8 *)arg0 + 0x458);
        temp_r3_2 = func_08007D4C(spE8, spE8->unk4) + 0x10;
        sp0 = var_sb_2;
        sp4 = 0;
        sp8 = var_sb_2;
        spC = 1;
        func_0804EA94(&sp80, 0xB8, 0x8D, temp_r3_2);
        var_r0_3 = sp80;
        var_r1_3 = sp84;
    }
    var_r4_2->unk0 = var_r0_3;
    var_r4_2->unk4 = var_r1_3;
    var_sb_2 = sp10C;
    if (sp10C <= 2) {
        goto loop_19;
    }
    temp_r0_9 = func_0805E824(__builtin_new(0x14), arg0->unk42C, 0, 0x100);
    if (temp_r0_9 != sp0) {
        __builtin_delete();
    }
    sp0 = temp_r0_9;
    temp_r0_10 = __builtin_new(0x1C);
    temp_r0_10->unk0 = 0;
    temp_r0_10->unk2 = 0;
    temp_r0_10->unk4 = 0;
    temp_r0_10->unk6 = 0;
    temp_r0_10->unk8 = 0;
    temp_r0_10->unkC = 0;
    temp_r0_10->unk10 = 0;
    temp_r0_10->unk11 = 0;
    temp_r0_10->unk14 = 0;
    temp_r0_10->unk18 = 0;
    if (temp_r0_10 != arg0->unk464) {
        __builtin_delete();
    }
    arg0->unk464 = temp_r0_10;
    func_0805E860(sp0, 1);
    arg0->unk464->unk0 = 0x70;
    arg0->unk464->unk2 = 0x75;
    temp_r4_5 = arg0->unk464;
    temp_r5_4 = (GenObj *)((u8 *)arg0 + 0x8D0);
    temp_r4_5->unk6 = (s16) (func_08007D4C(temp_r5_4, temp_r5_4->unk4) + 0x24);
    arg0->unk464->unk4 = 9;
    arg0->unk464->unk18 = 1;
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x468);
    temp_r1_2 = sp0->unk0;
    (*temp_r1_2)->unk10(&sp44, temp_r1_2, *(sp0->unk4 + (sp0->unkC * 4)));
    memcpy(sp124, sp124, 0x20);
    temp_r0_11 = sp124 + 0xC;
    arg0->unk468 = (s32) sp124->unk0;
    temp_r4_6->unk4 = (s32) sp124->unk4;
    temp_r4_6->unk8 = (s32) sp124->unk8;
    temp_r4_7 = (GenObj *)((u8 *)temp_r4_6 + 0xC);
    temp_r4_6->unkC = (s32) sp124->unkC;
    temp_r4_7->unk4 = (s32) temp_r0_11->unk4;
    temp_r4_7->unk8 = (s32) temp_r0_11->unk8;
    temp_r4_7->unkC = (s32) temp_r0_11->unkC;
    (temp_r4_7 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_11 + 0xC))->unk4;
    temp_r6_3 = func_08008910(arg0);
    temp_r7 = arg0->unk470;
    temp_r2_4 = func_08007D4C(temp_r5_4, temp_r5_4->unk4);
    var_r3_3 = 0;
    if (arg0->unk470 != 0) {
        var_r3_3 = ((GenObj *)((u8 *)arg0 + 0x470))->unk4;
    }
    func_08008F0C(&sp30, temp_r7, (temp_r2_4 << 5) + 0x06010480, var_r3_3);
    temp_r1_3 = temp_r6_3->unk4;
    if (temp_r1_3 != temp_r6_3->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp118->unk0;
            temp_r1_3->unk4 = (s32) sp118->unk4;
            temp_r1_3->unk8 = (s32) sp118->unk8;
            temp_r1_3->unkC = (s32) sp118->unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
    } else {
        sp134 = temp_r1_3;
        sp8C = 1;
        temp_r4_8 = (s32) (temp_r1_3 - temp_r6_3->unk0) >> 4;
        sp88 = temp_r4_8;
        var_r0_4 = &sp88;
        if ((u32) temp_r4_8 < 1U) {
            var_r0_4 = &sp8C;
        }
        temp_r0_12 = temp_r4_8 + *var_r0_4;
        if (temp_r0_12 != 0) {
            temp_r4_9 = temp_r0_12 * 0x10;
            var_r0_5 = malloc(temp_r4_9);
            var_r8_2 = temp_r4_9;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        sp138 = var_r0_5;
        var_r2_3 = temp_r6_3->unk0;
        var_r3_4 = var_r0_5;
        if (var_r2_3 != sp134) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_3->unk0;
                    var_r3_4->unk4 = (s32) var_r2_3->unk4;
                    var_r3_4->unk8 = (s32) var_r2_3->unk8;
                    var_r3_4->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_3 != sp134);
        }
        if (sp8C == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp118->unk0;
                var_r3_4->unk4 = (s32) sp118->unk4;
                var_r3_4->unk8 = (s32) sp118->unk8;
                var_r3_4->unkC = (s32) sp118->unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3_4 + 0x10);
        } else {
            var_r3_5 = sp8C;
            var_r2_4 = var_r3_4;
            if (var_r3_5 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp118->unk0;
                        var_r2_4->unk4 = (s32) sp118->unk4;
                        var_r2_4->unk8 = (s32) sp118->unk8;
                        var_r2_4->unkC = (s32) sp118->unkC;
                    }
                    var_r3_5 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_5 != 0);
            }
            var_r5 = var_r2_4;
        }
        temp_r2_5 = temp_r6_3->unk4;
        temp_r0_13 = temp_r6_3->unk0;
        var_r1_4 = temp_r0_13;
        if (temp_r0_13 != temp_r2_5) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_5);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        temp_r6_3->unk0 = sp138;
        temp_r6_3->unk4 = var_r5;
        temp_r6_3->unkC = (void *) (sp138 + var_r8_2);
    }
    temp_r4_10 = func_08008910(arg0);
    temp_r0_14 = arg0->unk478;
    var_r3_6 = 0;
    if (temp_r0_14 != 0) {
        var_r3_6 = ((GenObj *)((u8 *)arg0 + 0x478))->unk4;
    }
    func_08008F0C(&sp30, temp_r0_14, 0x05000320, var_r3_6);
    temp_r1_4 = temp_r4_10->unk4;
    if (temp_r1_4 != temp_r4_10->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp118->unk0;
            temp_r1_4->unk4 = (s32) sp118->unk4;
            temp_r1_4->unk8 = (s32) sp118->unk8;
            temp_r1_4->unkC = (s32) sp118->unkC;
        }
        temp_r4_10->unk4 = (void *) (temp_r4_10->unk4 + 0x10);
    } else {
        sp134 = temp_r1_4;
        sp94 = 1;
        temp_r4_11 = (s32) (sp134 - temp_r4_10->unk0) >> 4;
        var_r0_6 = &sp90;
        *var_r0_6 = (u32) temp_r4_11;
        if ((u32) temp_r4_11 < (u32) sp94) {
            var_r0_6 = &sp94;
        }
        temp_r0_15 = temp_r4_11 + *var_r0_6;
        if (temp_r0_15 != 0) {
            temp_r4_12 = temp_r0_15 * 0x10;
            var_r0_7 = malloc(temp_r4_12);
            var_r8_3 = temp_r4_12;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_7 = 0;
            var_r8_3 = 0;
        }
        sp138 = var_r0_7;
        var_r2_5 = temp_r4_10->unk0;
        var_r3_7 = var_r0_7;
        if (var_r2_5 != sp134) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_5->unk0;
                    var_r3_7->unk4 = (s32) var_r2_5->unk4;
                    var_r3_7->unk8 = (s32) var_r2_5->unk8;
                    var_r3_7->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_5 != sp134);
        }
        if (sp94 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) sp118->unk0;
                var_r3_7->unk4 = (s32) sp118->unk4;
                var_r3_7->unk8 = (s32) sp118->unk8;
                var_r3_7->unkC = (s32) sp118->unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = sp94;
            var_r2_6 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp118->unk0;
                        var_r2_6->unk4 = (s32) sp118->unk4;
                        var_r2_6->unk8 = (s32) sp118->unk8;
                        var_r2_6->unkC = (s32) sp118->unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_2 = var_r2_6;
        }
        temp_r2_6 = temp_r4_10->unk4;
        temp_r0_16 = temp_r4_10->unk0;
        var_r1_5 = temp_r0_16;
        if (temp_r0_16 != temp_r2_6) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_6);
        }
        if (temp_r0_16 != 0) {
            free();
        }
        temp_r4_10->unk0 = sp138;
        temp_r4_10->unk4 = var_r5_2;
        temp_r4_10->unkC = (void *) (sp138 + var_r8_3);
    }
    temp_r0_17 = func_0805E824(__builtin_new(0x14), arg0->unk430, 0, 0x100);
    if (temp_r0_17 != sp0) {
        __builtin_delete();
    }
    sp0 = temp_r0_17;
    temp_r0_18 = __builtin_new(0x1C);
    temp_r0_18->unk0 = 0;
    temp_r0_18->unk2 = 0;
    temp_r0_18->unk4 = 0;
    temp_r0_18->unk6 = 0;
    temp_r0_18->unk8 = 0;
    temp_r0_18->unkC = 0;
    temp_r0_18->unk10 = 0;
    temp_r0_18->unk11 = 0;
    temp_r0_18->unk14 = 0;
    temp_r0_18->unk18 = 0;
    if (temp_r0_18 != arg0->unk48C) {
        __builtin_delete();
    }
    arg0->unk48C = temp_r0_18;
    func_0805E860(sp0, 0);
    arg0->unk48C->unk0 = 0x68;
    arg0->unk48C->unk2 = 0x7D;
    temp_r4_13 = arg0->unk48C;
    temp_r5_5 = (GenObj *)((u8 *)arg0 + 0x8D0);
    temp_r4_13->unk6 = (s16) (func_08007D4C(temp_r5_5, temp_r5_5->unk4) + 0x28);
    arg0->unk48C->unk4 = 0xB;
    arg0->unk48C->unk18 = 1;
    temp_r4_14 = (GenObj *)((u8 *)arg0 + 0x490);
    temp_r1_5 = sp0->unk0;
    (*temp_r1_5)->unk10(&sp30, temp_r1_5, *(sp0->unk4 + (sp0->unkC * 4)));
    memcpy(sp118, sp118, 0x20);
    temp_r0_19 = (GenObj *)((u8 *)sp118 + 0xC);
    arg0->unk490 = (s32) sp118->unk0;
    temp_r4_14->unk4 = (s32) sp118->unk4;
    temp_r4_14->unk8 = (s32) sp118->unk8;
    temp_r4_15 = (GenObj *)((u8 *)temp_r4_14 + 0xC);
    temp_r4_14->unkC = (s32) sp118->unkC;
    temp_r4_15->unk4 = (s32) temp_r0_19->unk4;
    temp_r4_15->unk8 = (s32) temp_r0_19->unk8;
    temp_r4_15->unkC = (s32) temp_r0_19->unkC;
    (temp_r4_15 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_19 + 0xC))->unk4;
    temp_r6_4 = func_08008910(arg0);
    temp_r7_2 = arg0->unk498;
    temp_r2_7 = func_08007D4C(temp_r5_5, temp_r5_5->unk4);
    var_r3_9 = 0;
    if (arg0->unk498 != 0) {
        var_r3_9 = ((GenObj *)((u8 *)arg0 + 0x498))->unk4;
    }
    func_08008F0C(sp118, temp_r7_2, (temp_r2_7 << 5) + 0x06010500, var_r3_9);
    temp_r1_6 = temp_r6_4->unk4;
    if (temp_r1_6 != temp_r6_4->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) sp118->unk0;
            temp_r1_6->unk4 = (s32) sp118->unk4;
            temp_r1_6->unk8 = (s32) sp118->unk8;
            temp_r1_6->unkC = (s32) sp118->unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
    } else {
        sp134 = temp_r1_6;
        sp9C = 1;
        temp_r4_16 = (s32) (sp134 - temp_r6_4->unk0) >> 4;
        var_r0_8 = &sp98;
        *var_r0_8 = (u32) temp_r4_16;
        if ((u32) temp_r4_16 < (u32) sp9C) {
            var_r0_8 = &sp9C;
        }
        temp_r0_20 = temp_r4_16 + *var_r0_8;
        if (temp_r0_20 != 0) {
            temp_r4_17 = temp_r0_20 * 0x10;
            var_r0_9 = malloc(temp_r4_17);
            var_r8_4 = temp_r4_17;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_9 = 0;
            var_r8_4 = 0;
        }
        sp138 = var_r0_9;
        var_r2_7 = temp_r6_4->unk0;
        var_r3_10 = var_r0_9;
loop_139:
        if (var_r2_7 != sp134) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32) var_r2_7->unk0;
                var_r3_10->unk4 = (s32) var_r2_7->unk4;
                var_r3_10->unk8 = (s32) var_r2_7->unk8;
                var_r3_10->unkC = (s32) var_r2_7->unkC;
            }
            var_r2_7 += 0x10;
            var_r3_10 += 0x10;
            goto loop_139;
        }
        if (sp9C == 1) {
            if (var_r3_10 != 0) {
                var_r3_10->unk0 = (s32) sp118->unk0;
                var_r3_10->unk4 = (s32) sp118->unk4;
                var_r3_10->unk8 = (s32) sp118->unk8;
                var_r3_10->unkC = (s32) sp118->unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_10 + 0x10);
        } else {
            var_r3_11 = sp9C;
            var_r2_8 = var_r3_10;
            if (var_r3_11 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp118->unk0;
                        var_r2_8->unk4 = (s32) sp118->unk4;
                        var_r2_8->unk8 = (s32) sp118->unk8;
                        var_r2_8->unkC = (s32) sp118->unkC;
                    }
                    var_r3_11 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_11 != 0);
            }
            var_r5_3 = var_r2_8;
        }
        temp_r2_8 = temp_r6_4->unk4;
        temp_r0_21 = temp_r6_4->unk0;
        var_r1_6 = temp_r0_21;
        if (temp_r0_21 != temp_r2_8) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_8);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        temp_r6_4->unk0 = sp138;
        temp_r6_4->unk4 = var_r5_3;
        temp_r6_4->unkC = (void *) (sp138 + var_r8_4);
    }
    temp_r4_18 = func_08008910(arg0);
    temp_r0_22 = arg0->unk4A0;
    var_r3_12 = 0;
    if (temp_r0_22 != 0) {
        var_r3_12 = ((GenObj *)((u8 *)arg0 + 0x4A0))->unk4;
    }
    func_08008F0C(&sp30, temp_r0_22, 0x05000360, var_r3_12);
    temp_r1_7 = temp_r4_18->unk4;
    if (temp_r1_7 != temp_r4_18->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) sp118->unk0;
            temp_r1_7->unk4 = (s32) sp118->unk4;
            temp_r1_7->unk8 = (s32) sp118->unk8;
            temp_r1_7->unkC = (s32) sp118->unkC;
        }
        temp_r4_18->unk4 = (void *) (temp_r4_18->unk4 + 0x10);
    } else {
        sp134 = temp_r1_7;
        spA4 = 1;
        temp_r4_19 = (s32) (sp134 - temp_r4_18->unk0) >> 4;
        var_r0_10 = &spA0;
        *var_r0_10 = (u32) temp_r4_19;
        if ((u32) temp_r4_19 < (u32) spA4) {
            var_r0_10 = &spA4;
        }
        temp_r0_23 = temp_r4_19 + *var_r0_10;
        if (temp_r0_23 != 0) {
            temp_r4_20 = temp_r0_23 * 0x10;
            var_r0_11 = malloc(temp_r4_20);
            var_r8_5 = temp_r4_20;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_11 = 0;
            var_r8_5 = 0;
        }
        sp138 = var_r0_11;
        var_r2_9 = temp_r4_18->unk0;
        var_r3_13 = var_r0_11;
        if (var_r2_9 != sp134) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_9->unk0;
                    var_r3_13->unk4 = (s32) var_r2_9->unk4;
                    var_r3_13->unk8 = (s32) var_r2_9->unk8;
                    var_r3_13->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_9 != sp134);
        }
        if (spA4 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) sp118->unk0;
                var_r3_13->unk4 = (s32) sp118->unk4;
                var_r3_13->unk8 = (s32) sp118->unk8;
                var_r3_13->unkC = (s32) sp118->unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = spA4;
            var_r2_10 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) sp118->unk0;
                        var_r2_10->unk4 = (s32) sp118->unk4;
                        var_r2_10->unk8 = (s32) sp118->unk8;
                        var_r2_10->unkC = (s32) sp118->unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_4 = var_r2_10;
        }
        temp_r2_9 = temp_r4_18->unk4;
        temp_r0_24 = temp_r4_18->unk0;
        var_r1_7 = temp_r0_24;
        if (temp_r0_24 != temp_r2_9) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_9);
        }
        if (temp_r0_24 != 0) {
            free();
        }
        temp_r4_18->unk0 = sp138;
        temp_r4_18->unk4 = var_r5_4;
        temp_r4_18->unkC = (void *) (sp138 + var_r8_5);
    }
    if ((s32) arg0->unk910 < (s32) arg0->unk90E) {
        temp_r0_25 = func_0805E824(__builtin_new(0x14), arg0->unk438, 0, 0x100);
        if (temp_r0_25 != arg0->unk7E4) {
            __builtin_delete();
        }
        arg0->unk7E4 = temp_r0_25;
    } else {
        temp_r0_26 = func_0805E824(__builtin_new(0x14), arg0->unk434, 0, 0x100);
        if (temp_r0_26 != arg0->unk7E4) {
            __builtin_delete();
        }
        arg0->unk7E4 = temp_r0_26;
        arg0->unk92C = 1U;
    }
    temp_r0_27 = __builtin_new(0x1C);
    temp_r0_27->unk0 = 0;
    temp_r0_27->unk2 = 0;
    temp_r0_27->unk4 = 0;
    temp_r0_27->unk6 = 0;
    temp_r0_27->unk8 = 0;
    temp_r0_27->unkC = 0;
    temp_r0_27->unk10 = 0;
    temp_r0_27->unk11 = 0;
    temp_r0_27->unk14 = 0;
    temp_r0_27->unk18 = 0;
    if (temp_r0_27 != sp0) {
        __builtin_delete();
    }
    sp0 = temp_r0_27;
    func_0805E860(arg0->unk7E4, 0);
    sp0->unk0 = 0x40;
    sp0->unk2 = 0x40;
    temp_r5_6 = (GenObj *)((u8 *)arg0 + 0x8D8);
    temp_r0_27->unk6 = func_08007D4C(temp_r5_6, temp_r5_6->unk4);
    sp0->unk4 = 0xC;
    sp0->unk18 = 1;
    temp_r4_21 = (GenObj *)((u8 *)arg0 + 0x7EC);
    temp_r0_28 = arg0->unk7E4;
    temp_r1_8 = temp_r0_28->unk0;
    (*temp_r1_8)->unk10(&sp30, temp_r1_8, *(temp_r0_28->unk4 + (temp_r0_28->unkC * 4)));
    memcpy(sp118, sp118, 0x20);
    temp_r0_29 = (GenObj *)((u8 *)sp118 + 0xC);
    arg0->unk7EC = (s32) sp118->unk0;
    temp_r4_21->unk4 = (s32) sp118->unk4;
    temp_r4_21->unk8 = (s32) sp118->unk8;
    temp_r4_22 = (GenObj *)((u8 *)temp_r4_21 + 0xC);
    temp_r4_21->unkC = (s32) sp118->unkC;
    temp_r4_22->unk4 = (s32) temp_r0_29->unk4;
    temp_r4_22->unk8 = (s32) temp_r0_29->unk8;
    temp_r4_22->unkC = (s32) temp_r0_29->unkC;
    (temp_r4_22 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_29 + 0xC))->unk4;
    temp_r6_5 = func_08008910(arg0);
    temp_r7_3 = arg0->unk7F4;
    temp_r2_10 = func_08007D4C(temp_r5_6, temp_r5_6->unk4);
    var_r3_15 = 0;
    if (arg0->unk7F4 != 0) {
        var_r3_15 = ((GenObj *)((u8 *)arg0 + 0x7F4))->unk4;
    }
    func_08008F0C(sp118, temp_r7_3, (temp_r2_10 << 5) + 0x06010000, var_r3_15);
    temp_r1_9 = temp_r6_5->unk4;
    if (temp_r1_9 != temp_r6_5->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) sp118->unk0;
            temp_r1_9->unk4 = (s32) sp118->unk4;
            temp_r1_9->unk8 = (s32) sp118->unk8;
            temp_r1_9->unkC = (s32) sp118->unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        sp134 = temp_r1_9;
        spAC = 1;
        temp_r4_23 = (s32) (sp134 - temp_r6_5->unk0) >> 4;
        var_r0_12 = &spA8;
        *var_r0_12 = (u32) temp_r4_23;
        if ((u32) temp_r4_23 < (u32) spAC) {
            var_r0_12 = &spAC;
        }
        temp_r0_30 = temp_r4_23 + *var_r0_12;
        if (temp_r0_30 != 0) {
            temp_r4_24 = temp_r0_30 * 0x10;
            var_r0_13 = malloc(temp_r4_24);
            var_r8_6 = temp_r4_24;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_13 = 0;
            var_r8_6 = 0;
        }
        sp138 = var_r0_13;
        var_r2_11 = temp_r6_5->unk0;
        var_r3_16 = var_r0_13;
loop_209:
        if (var_r2_11 != sp134) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32) var_r2_11->unk0;
                var_r3_16->unk4 = (s32) var_r2_11->unk4;
                var_r3_16->unk8 = (s32) var_r2_11->unk8;
                var_r3_16->unkC = (s32) var_r2_11->unkC;
            }
            var_r2_11 += 0x10;
            var_r3_16 += 0x10;
            goto loop_209;
        }
        if (spAC == 1) {
            if (var_r3_16 != 0) {
                var_r3_16->unk0 = (s32) sp118->unk0;
                var_r3_16->unk4 = (s32) sp118->unk4;
                var_r3_16->unk8 = (s32) sp118->unk8;
                var_r3_16->unkC = (s32) sp118->unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_16 + 0x10);
        } else {
            var_r3_17 = spAC;
            var_r2_12 = var_r3_16;
            if (var_r3_17 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) sp118->unk0;
                        var_r2_12->unk4 = (s32) sp118->unk4;
                        var_r2_12->unk8 = (s32) sp118->unk8;
                        var_r2_12->unkC = (s32) sp118->unkC;
                    }
                    var_r3_17 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_17 != 0);
            }
            var_r5_5 = var_r2_12;
        }
        temp_r2_11 = temp_r6_5->unk4;
        temp_r0_31 = temp_r6_5->unk0;
        var_r1_8 = temp_r0_31;
        if (temp_r0_31 != temp_r2_11) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_11);
        }
        if (temp_r0_31 != 0) {
            free();
        }
        temp_r6_5->unk0 = sp138;
        temp_r6_5->unk4 = var_r5_5;
        temp_r6_5->unkC = (void *) (sp138 + var_r8_6);
    }
    temp_r4_25 = func_08008910(arg0);
    temp_r0_32 = arg0->unk7FC;
    var_r3_18 = 0;
    if (temp_r0_32 != 0) {
        var_r3_18 = ((GenObj *)((u8 *)arg0 + 0x7FC))->unk4;
    }
    func_08008F0C(&sp30, temp_r0_32, 0x05000380, var_r3_18);
    temp_r1_10 = temp_r4_25->unk4;
    if (temp_r1_10 != temp_r4_25->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) sp118->unk0;
            temp_r1_10->unk4 = (s32) sp118->unk4;
            temp_r1_10->unk8 = (s32) sp118->unk8;
            temp_r1_10->unkC = (s32) sp118->unkC;
        }
        temp_r4_25->unk4 = (void *) (temp_r4_25->unk4 + 0x10);
    } else {
        sp134 = temp_r1_10;
        spB4 = 1;
        temp_r4_26 = (s32) (sp134 - temp_r4_25->unk0) >> 4;
        var_r0_14 = &spB0;
        *var_r0_14 = (u32) temp_r4_26;
        if ((u32) temp_r4_26 < (u32) spB4) {
            var_r0_14 = &spB4;
        }
        temp_r0_33 = temp_r4_26 + *var_r0_14;
        if (temp_r0_33 != 0) {
            temp_r4_27 = temp_r0_33 * 0x10;
            var_r0_15 = malloc(temp_r4_27);
            var_r8_7 = temp_r4_27;
            if (var_r0_15 == 0) {
                var_r0_15 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_15 = 0;
            var_r8_7 = 0;
        }
        sp138 = var_r0_15;
        var_r2_13 = temp_r4_25->unk0;
        var_r3_19 = var_r0_15;
        if (var_r2_13 != sp134) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_13->unk0;
                    var_r3_19->unk4 = (s32) var_r2_13->unk4;
                    var_r3_19->unk8 = (s32) var_r2_13->unk8;
                    var_r3_19->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_13 != sp134);
        }
        if (spB4 == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) sp118->unk0;
                var_r3_19->unk4 = (s32) sp118->unk4;
                var_r3_19->unk8 = (s32) sp118->unk8;
                var_r3_19->unkC = (s32) sp118->unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = spB4;
            var_r2_14 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) sp118->unk0;
                        var_r2_14->unk4 = (s32) sp118->unk4;
                        var_r2_14->unk8 = (s32) sp118->unk8;
                        var_r2_14->unkC = (s32) sp118->unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r5_6 = var_r2_14;
        }
        temp_r2_12 = temp_r4_25->unk4;
        temp_r0_34 = temp_r4_25->unk0;
        var_r1_9 = temp_r0_34;
        if (temp_r0_34 != temp_r2_12) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_12);
        }
        if (temp_r0_34 != 0) {
            free();
        }
        temp_r4_25->unk0 = sp138;
        temp_r4_25->unk4 = var_r5_6;
        temp_r4_25->unkC = (void *) (sp138 + var_r8_7);
    }
    func_080B0934(arg0);
    func_08008C38((GenObj *)((u8 *)arg0 + 0x80C), 0xCD, 0xFFFF);
    func_080AF814(arg0);
    spF0 = 0;
    spF4 = 0;
    var_r0_16 = (GenObj *)((u8 *)sp118 + 8);
    do {
        *var_r0_16 = 0;
        var_r0_16 -= 4;
    } while ((s32) var_r0_16 >= (s32) sp118);
    spF8 = 0;
loop_362:
    if (arg0->unk838 == 4) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        var_r1_10 = (GenObj *)((u8 *)arg0 + 0x840);
        if (arg0->unk840 == 0) {
            temp_r3_3 = spF0 + 1;
            spF0 = temp_r3_3;
            if (temp_r3_3 != 0x78) {

            } else {
                spF0 = 0;
                var_r0_17 = 1;
                goto block_360;
            }
        } else {
            spFC = func_080088D4(arg0);
            temp_r7_4 = func_08050D34(arg0->unk418);
            temp_sb_2 = arg0->unk418;
            temp_r8_2 = func_080088DC(arg0);
            temp_r6_6 = func_08008920(arg0);
            temp_r5_7 = func_08008918(arg0);
            temp_r4_28 = func_08008940(arg0);
            temp_r0_35 = func_0800894C(arg0);
            sp0 = temp_r4_28;
            sp4 = temp_r0_35;
            sp8 = (GenObj *)((u8 *)arg0 + 0x810);
            temp_r0_36 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_6, temp_r5_7);
            switch (temp_r0_36) {                   /* switch 1 */
            case 1:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
            case 6:                                 /* switch 1 */
                break;
            case 0:                                 /* switch 1 */
                func_08050D5C(arg0->unk418);
                break;
            case 3:                                 /* switch 1 */
                if (temp_r7_4 == 1) {
                    func_08050D8C(arg0->unk418, &gUnk_08107850);
                    func_08050DD8(arg0->unk418);
                    arg0->unk92A = temp_r7_4;
                }
                break;
            }
            temp_r0_37 = arg0->unk840;
            switch (temp_r0_37) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                temp_r3_4 = spF4 + 1;
                spF4 = temp_r3_4;
                if (temp_r3_4 == 0x3C) {
                    arg0->unk92B = 1;
                    if (arg0->unk92C == 0) {
                        func_08008B6C((GenObj *)((u8 *)arg0 + 0x814), 0xB7);
                    } else {
                        func_08008B6C((GenObj *)((u8 *)arg0 + 0x814), 0xB6);
                    }
                }
                if (spF4 == 0xF0) {
                    spF4 = 0;
                    var_r1_10 = (GenObj *)((u8 *)arg0 + 0x840);
                    var_r0_17 = 3;
block_360:
                    *var_r1_10 = var_r0_17;
                }
                break;
            case 3:                                 /* switch 2 */
                temp_r6_7 = spF4 + 1;
                spF4 = temp_r6_7;
                if ((9 & spFC) || (temp_r6_7 == 0x258)) {
                    var_r1_10 = (GenObj *)((u8 *)arg0 + 0x838);
                    var_r0_17 = 5;
                    goto block_360;
                }
                break;
            case 1:                                 /* switch 2 */
                if (arg0->unk92A == 0) {

                } else {
                    temp_r5_8 = spE0 + 1;
                    spE0 = temp_r5_8;
                    sp108 = spF8 * 4;
                    if (temp_r5_8 != (s32 *)0x14) {

                    } else {
                        spE0 = 0;
                        temp_r4_29 = &sp118[spF8];
                        *temp_r4_29 += 1;
                        func_08008B6C((GenObj *)((u8 *)arg0 + 0x814), 0xA6);
                        func_0804EC84(*temp_r4_29, sp110, 0);
                        temp_r5_9 = spF8 * 0x104;
                        spB8 = 4;
                        spB8.unk2 = 2;
                        func_0804E7A0((s32) spB8, temp_r5_9 + (GenObj *)((u8 *)arg0 + 0x110), 0);
                        if (spF8 != 1) {
                            temp_r2_13 = 0x20 - (strlen(sp110) * 8);
                            spBC = 4;
                            spBC.unk2 = 2;
                            sp0 = sp110;
                            sp4 = spE0;
                            sp8 = (s32 *)5;
                            func_0804E958((s32 *) spBC, temp_r5_9 + (GenObj *)((u8 *)arg0 + 0x110), temp_r2_13, 0);
                        } else {
                            temp_r2_14 = 0x20 - (strlen(sp110) * 8);
                            spC0 = 4;
                            spC0.unk2 = 2;
                            sp0 = sp110;
                            sp4 = spE0;
                            sp8 = (s32 *)7;
                            func_0804E958((s32 *) spC0, (GenObj *)((u8 *)arg0 + 0x214), temp_r2_14, 0);
                        }
                        temp_r5_10 = func_08008910(arg0);
                        temp_r0_38 = (GenObj *)((u8 *)arg0 + 0x8D0);
                        func_08008F0C(&sp3C, (spF8 * 0x104) + (GenObj *)((u8 *)arg0 + 0x110), (((spF8 * 8) + func_08007D4C(temp_r0_38, temp_r0_38->unk4)) << 5) + 0x06010000, 0x100U);
                        temp_r1_11 = temp_r5_10->unk4;
                        sp120 = &sp3C;
                        if (temp_r1_11 != temp_r5_10->unkC) {
                            if (temp_r1_11 != 0) {
                                temp_r1_11->unk0 = (s32) sp3C;
                                temp_r1_11->unk4 = (s32) sp3C.unk4;
                                temp_r1_11->unk8 = (s32) sp3C.unk8;
                                temp_r1_11->unkC = (s32) sp3C.unkC;
                            }
                            temp_r5_10->unk4 = (void *) (temp_r5_10->unk4 + 0x10);
                        } else {
                            sp134 = temp_r1_11;
                            spC8 = 1;
                            temp_r4_30 = (s32) (sp134 - temp_r5_10->unk0) >> 4;
                            var_r0_18 = &spC4;
                            *var_r0_18 = (u32) temp_r4_30;
                            if ((u32) temp_r4_30 < (u32) spC8) {
                                var_r0_18 = &spC8;
                            }
                            temp_r0_39 = temp_r4_30 + *var_r0_18;
                            if (temp_r0_39 != 0) {
                                temp_r4_31 = temp_r0_39 * 0x10;
                                var_r0_19 = malloc(temp_r4_31);
                                var_r8_8 = temp_r4_31;
                                if (var_r0_19 == 0) {
                                    var_r0_19 = func_080D3BC0(var_r8_8);
                                }
                            } else {
                                var_r0_19 = 0;
                                var_r8_8 = 0;
                            }
                            sp138 = var_r0_19;
                            var_r2_15 = temp_r5_10->unk0;
                            var_r3_21 = var_r0_19;
                            if (var_r2_15 != sp134) {
                                do {
                                    if (var_r3_21 != 0) {
                                        var_r3_21->unk0 = (s32) var_r2_15->unk0;
                                        var_r3_21->unk4 = (s32) var_r2_15->unk4;
                                        var_r3_21->unk8 = (s32) var_r2_15->unk8;
                                        var_r3_21->unkC = (s32) var_r2_15->unkC;
                                    }
                                    var_r2_15 += 0x10;
                                    var_r3_21 += 0x10;
                                } while (var_r2_15 != sp134);
                            }
                            if (spC8 == 1) {
                                if (var_r3_21 != 0) {
                                    var_r3_21->unk0 = (s32) sp3C;
                                    var_r3_21->unk4 = (s32) sp3C.unk4;
                                    var_r3_21->unk8 = (s32) sp3C.unk8;
                                    var_r3_21->unkC = (s32) sp3C.unkC;
                                }
                                var_r6 = (GenObj *)((u8 *)var_r3_21 + 0x10);
                            } else {
                                var_r3_22 = spC8;
                                var_r2_16 = var_r3_21;
                                if (var_r3_22 != 0) {
                                    do {
                                        if (var_r2_16 != 0) {
                                            var_r2_16->unk0 = (s32) sp3C;
                                            var_r2_16->unk4 = (s32) sp3C.unk4;
                                            var_r2_16->unk8 = (s32) sp3C.unk8;
                                            var_r2_16->unkC = (s32) sp3C.unkC;
                                        }
                                        var_r3_22 -= 1;
                                        var_r2_16 += 0x10;
                                    } while (var_r3_22 != 0);
                                }
                                var_r6 = var_r2_16;
                            }
                            temp_r2_15 = temp_r5_10->unk4;
                            temp_r0_40 = temp_r5_10->unk0;
                            var_r1_11 = temp_r0_40;
                            if (temp_r0_40 != temp_r2_15) {
                                do {
                                    var_r1_11 += 0x10;
                                } while (var_r1_11 != temp_r2_15);
                            }
                            if (temp_r0_40 != 0) {
                                free();
                            }
                            temp_r5_10->unk0 = sp138;
                            temp_r5_10->unk4 = var_r6;
                            temp_r5_10->unkC = (void *) (sp138 + var_r8_8);
                        }
                    }
                    if (*((u8 *)sp118 + sp108) == (sp108 + sp)->unk10) {
                        spF8 += 1;
                    }
                    if (!(9 & spFC)) {

                    } else {
                        var_sb_3 = 0;
                        sp12C = &(GenObj *)((u8 *)sp0 + 0xCC);
                        sp100 = &(GenObj *)((u8 *)sp0 + 0xD0);
loop_314:
                        temp_r0_41 = ((var_sb_3 * 4) + sp)->unk10;
                        sp118[var_sb_3] = temp_r0_41;
                        func_0804EC84(temp_r0_41, sp110, 0);
                        temp_r5_11 = var_sb_3 * 0x104;
                        spCC = 4;
                        sp12C->unk2 = 2;
                        func_0804E7A0((s32) spCC, temp_r5_11 + (GenObj *)((u8 *)arg0 + 0x110), 0);
                        if (var_sb_3 != 1) {
                            temp_r2_16 = 0x20 - (strlen(sp110) * 8);
                            sp100->unk0 = 4;
                            sp100->unk2 = 2;
                            sp0 = sp110;
                            sp4 = 0;
                            sp8 = (s32 *)5;
                            func_0804E958(sp100->unk0, temp_r5_11 + (GenObj *)((u8 *)arg0 + 0x110), temp_r2_16, 0);
                        } else {
                            temp_r2_17 = 0x20 - (strlen(sp110) * 8);
                            spD4 = 4;
                            spD4.unk2 = 2;
                            sp0 = sp110;
                            sp4 = 0;
                            sp8 = (s32 *)7;
                            func_0804E958((s32 *) spD4, (GenObj *)((u8 *)arg0 + 0x214), temp_r2_17, 0);
                        }
                        temp_r5_12 = func_08008910(arg0);
                        temp_r0_42 = (GenObj *)((u8 *)arg0 + 0x8D0);
                        func_08008F0C(&sp3C, (var_sb_3 * 0x104) + (GenObj *)((u8 *)arg0 + 0x110), (((var_sb_3 * 8) + func_08007D4C(temp_r0_42, temp_r0_42->unk4)) << 5) + 0x06010000, 0x100U);
                        sp104 = sp120;
                        temp_r1_12 = temp_r5_12->unk4;
                        if (temp_r1_12 != temp_r5_12->unkC) {
                            if (temp_r1_12 != 0) {
                                temp_r1_12->unk0 = (s32) sp120->unk0;
                                temp_r1_12->unk4 = (s32) sp120->unk4;
                                temp_r1_12->unk8 = (s32) sp120->unk8;
                                temp_r1_12->unkC = (s32) sp120->unkC;
                            }
                            temp_r5_12->unk4 = (void *) (temp_r5_12->unk4 + 0x10);
                            sp10C = var_sb_3 + 1;
                        } else {
                            sp134 = temp_r1_12;
                            spDC = 1;
                            temp_r4_32 = (s32) (sp134 - temp_r5_12->unk0) >> 4;
                            var_r0_20 = &spD8;
                            *var_r0_20 = (u32) temp_r4_32;
                            if ((u32) temp_r4_32 < (u32) spDC) {
                                var_r0_20 = &spDC;
                            }
                            temp_r0_43 = temp_r4_32 + *var_r0_20;
                            if (temp_r0_43 != 0) {
                                temp_r4_33 = temp_r0_43 * 0x10;
                                var_r0_21 = malloc(temp_r4_33);
                                var_r8_9 = temp_r4_33;
                                if (var_r0_21 == 0) {
                                    var_r0_21 = func_080D3BC0(var_r8_9);
                                }
                            } else {
                                var_r0_21 = 0;
                                var_r8_9 = 0;
                            }
                            sp138 = var_r0_21;
                            var_r2_17 = temp_r5_12->unk0;
                            var_r3_23 = var_r0_21;
                            sp10C = var_sb_3 + 1;
                            if (var_r2_17 != sp134) {
                                do {
                                    if (var_r3_23 != 0) {
                                        var_r3_23->unk0 = (s32) var_r2_17->unk0;
                                        var_r3_23->unk4 = (s32) var_r2_17->unk4;
                                        var_r3_23->unk8 = (s32) var_r2_17->unk8;
                                        var_r3_23->unkC = (s32) var_r2_17->unkC;
                                    }
                                    var_r2_17 += 0x10;
                                    var_r3_23 += 0x10;
                                } while (var_r2_17 != sp134);
                            }
                            if (spDC == 1) {
                                if (var_r3_23 != 0) {
                                    var_r3_23->unk0 = (s32) sp104->unk0;
                                    var_r3_23->unk4 = (s32) sp104->unk4;
                                    var_r3_23->unk8 = (s32) sp104->unk8;
                                    var_r3_23->unkC = (s32) sp104->unkC;
                                }
                                var_r6_2 = (GenObj *)((u8 *)var_r3_23 + 0x10);
                            } else {
                                var_r3_24 = spDC;
                                var_r2_18 = var_r3_23;
                                if (var_r3_24 != 0) {
                                    do {
                                        if (var_r2_18 != 0) {
                                            var_r2_18->unk0 = (s32) sp104->unk0;
                                            var_r2_18->unk4 = (s32) sp104->unk4;
                                            var_r2_18->unk8 = (s32) sp104->unk8;
                                            var_r2_18->unkC = (s32) sp104->unkC;
                                        }
                                        var_r3_24 -= 1;
                                        var_r2_18 += 0x10;
                                    } while (var_r3_24 != 0);
                                }
                                var_r6_2 = var_r2_18;
                            }
                            temp_r2_18 = temp_r5_12->unk4;
                            temp_r0_44 = temp_r5_12->unk0;
                            var_r1_12 = temp_r0_44;
                            if (temp_r0_44 != temp_r2_18) {
                                do {
                                    var_r1_12 += 0x10;
                                } while (var_r1_12 != temp_r2_18);
                            }
                            if (temp_r0_44 != 0) {
                                free();
                            }
                            temp_r5_12->unk0 = sp138;
                            temp_r5_12->unk4 = var_r6_2;
                            temp_r5_12->unkC = (void *) (sp138 + var_r8_9);
                        }
                        var_sb_3 = sp10C;
                        if (sp10C <= 2) {
                            goto loop_314;
                        }
                    }
                    if ((sp30 == sp10) && (sp118->unk4 == sp14) && (sp118->unk8 == sp18)) {
                        var_r1_10 = (GenObj *)((u8 *)arg0 + 0x840);
                        var_r0_17 = 2;
                        goto block_360;
                    }
                }
                break;
            }
        }
        func_080AF814(arg0);
        goto loop_362;
    }
}
