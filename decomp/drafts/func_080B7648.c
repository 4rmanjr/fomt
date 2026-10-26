s32 __builtin_delete();                               /* extern */
void *__builtin_new(s32);                           /* extern */
s32 free();                                           /* extern */
s32 func_08007128(s32 *);                               /* extern */
s32 func_08007184(s32 *, s32);                          /* extern */
s32 func_0800736C(s32 *);                             /* extern */
s32 func_080073E0(s32 *, s32);                          /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s32 func_08007874(s32 *);                               /* extern */
s32 func_080079E8(s32 *, s32);                          /* extern */
s32 func_08007B54(s32 *, s32);                        /* extern */
s32 func_08007C28(s32 *, s32);                          /* extern */
s32 func_08007D4C(s32 *, s32);                        /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008B88(void *, s32);                       /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_0805E824(void *, s32, s32, s32);         /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_0805E8F0(s32);                             /* extern */
s32 func_0805E99C(s32, s32, u16, void *);             /* extern */
s32 func_080B8578(void *);                            /* extern */
s32 func_080B8EBC(void *, u8, s32);                   /* extern */
s32 func_080B9464(void *, u16, u16);                /* extern */
s32 func_080B94A8(void *, s32, s32);                  /* extern */
s32 func_080B9844(void *, u8);                        /* extern */
s32 func_080B9AC0(void *);                            /* extern */
s32 func_080B9B50(void *, u8);                        /* extern */
s32 func_080B9E1C(void *, u8);                        /* extern */
s32 func_080B9F0C(void *, u8);                        /* extern */
s32 func_080B9F38(void *, u8);                        /* extern */
s32 func_080BA0C4(void *);                            /* extern */
s32 func_080BA284(void *);                            /* extern */
s32 func_080BA608(void *);                            /* extern */
s32 func_080BA6B8(void *);                            /* extern */
s32 func_080BA734(void *);                            /* extern */
s32 func_080BA7E4(void *, s32);                       /* extern */
s32 func_080BB8EC(void *, s32);                       /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkB;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    u8 _pad1C[36];
    struct GenObj *unk40;
    u8 _pad44[70];
    s32 unk8A;
    s32 unk8C;
    u8 _pad90[1];
    s32 unk91;
    u8 _pad95[4];
    s32 unk99;
    s32 unk9A;
    s32 unk9C;
    u8 _padA0[11];
    s32 unkAB;
    u8 _padAF[1745];
    s32 unk780;
    u8 _pad784[368];
    s32 unk8F4;
    void *unk8F8;
    s32 unk8FC;
    u8 _pad900[4];
    s32 unk904;
    u8 _pad908[4];
    s32 unk90C;
    u8 _pad910[28];
    s32 unk92C;
    u8 _pad930[4];
    s32 unk934;
    u8 _pad938[4];
    s32 unk93C;
    u8 _pad940[360];
    s32 unkAA8;
    u8 _padAAC[4];
    s32 unkAB0;
    u8 _padAB4[24];
    s32 unkACC;
    u8 _padAD0[4];
    s32 unkAD4;
    u8 _padAD8[89];
    s32 unkB31;
    u8 _padB35[36];
    s32 unkB59;
} GenObj;
void func_080B7648(GenObj *arg0) {
s32 sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
s32 sp10;
    s32 sp14;
s32 sp18;
    s32 sp1C;
s32 sp20;
    s32 sp24;
s32 sp28;
    s32 sp2C;
s32 sp30;
    s32 sp34;
GenObj sp38;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    u32 sp80;
    u32 sp84;
    u32 sp88;
    u32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    void *spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    u16 *spB0;
    u16 *spB4;
    GenObj *spB8;
    void *spBC;
    s32 *var_r0_9;
    s16 temp_r2_12;
    s16 temp_r2_2;
    s16 temp_r5_4;
    s32 *var_r0;
    s32 *var_r0_10;
    s32 *var_r0_12;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_20;
    s32 temp_r0_22;
    s32 temp_r0_25;
    s32 temp_r0_26;
    s32 temp_r0_29;
    s32 temp_r0_32;
    s32 temp_r0_7;
    s32 temp_r1_11;
    s32 temp_r1_17;
    s32 temp_r1_2;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 temp_r2_4;
    s32 temp_r2_6;
    s32 temp_r2_8;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_19;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_9;
    s32 temp_r6_3;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 var_r1_5;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_9;
    s32 var_sb;
    s32 var_sb_10;
    s32 var_sb_11;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_4;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sb_7;
    s32 var_sl;
    s32 var_sl_2;
    u16 var_r2_10;
    u16 var_r2_13;
    u16 var_r2_18;
    u16 var_r2_19;
    u16 var_r2_20;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r3_10;
    u16 var_r3_11;
    u16 var_r3_3;
    u16 var_r3_5;
    u16 var_r3_7;
    u16 var_r3_9;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 var_r8_7;
    u32 var_r8_8;
    u8 temp_r0_21;
    u8 temp_r0_31;
    u8 var_sb_8;
    u8 var_sb_9;
    void **temp_r1;
    void **temp_r1_13;
    void **var_r5_5;
    void *temp_r0;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_15;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_27;
    GenObj *temp_r0_28;
    GenObj *temp_r0_2;
    void *temp_r0_30;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    GenObj *temp_r1_10;
    GenObj *temp_r1_12;
    GenObj *temp_r1_14;
    void *temp_r1_15;
    GenObj *temp_r1_16;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_13;
    void *temp_r2_3;
    void *temp_r2_5;
    void *temp_r2_7;
    void *temp_r2_9;
    void *temp_r3;
    GenObj *temp_r4;
    void *temp_r4_18;
    GenObj *temp_r4_20;
    void *temp_r4_21;
    GenObj *temp_r4_22;
    GenObj *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r5_10;
    GenObj *temp_r5_2;
    GenObj *temp_r5_3;
    void *temp_r5_5;
    void *temp_r5_8;
    GenObj *temp_r6;
    GenObj *temp_r6_2;
    GenObj *var_ip;
    GenObj *var_ip_2;
    GenObj *var_ip_3;
    void *var_r0_11;
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
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    GenObj *var_r2;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    GenObj *var_r3_6;
    GenObj *var_r3_8;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    GenObj *var_r5_9;
    GenObj *var_r6;

    func_08007874(&sp0);
    sp4 = 0;
    func_08007874(&sp8);
    sp8.unk4 = 0;
    func_08007874(&sp10);
    sp10.unk4 = 0;
    func_08007874(&sp18);
    sp18.unk4 = 0;
    func_08007874();
    sp20.unk4 = 0;
    func_08007874(&sp28);
    sp28.unk4 = 0;
    func_08007C28(&sp0, sp4);
    sp4 = func_08007B54(&sp0, 6);
    sp90 = func_08007D4C(&sp0);
    func_08007C28(&sp8, spC);
    spC = func_08007B54(&sp8, 3);
    sp94 = func_08007D4C(&sp8);
    func_08007C28(&sp10, sp14);
    sp14 = func_08007B54(&sp10, 7);
    sp98 = func_08007D4C(&sp10);
    func_08007C28(&sp18, sp1C);
    sp1C = func_08007B54(&sp18, 3);
    sp9C = func_08007D4C(&sp18);
    func_08007C28(&sp20, sp24);
    sp24 = func_08007B54(&sp20, 2);
    func_08007C28(&sp28, sp2C);
    sp2C = func_08007B54(&sp28, 3);
    func_08007128(&sp30);
    sp34 = func_0800736C(&sp30);
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk780, 0, 0x100);
    if (temp_r0 != arg0->unk8F4) {
        __builtin_delete();
    }
    arg0->unk8F4 = temp_r0;
    temp_r0_2 = __builtin_new(0x1C);
    temp_r0_2->unk0 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    if (temp_r0_2 != arg0->unk8F8) {
        __builtin_delete();
    }
    arg0->unk8F8 = temp_r0_2;
    func_0805E860(arg0->unk8F4, 0);
    arg0->unk8F8->unk0 = 0x40;
    arg0->unk8F8->unk2 = 0x40;
    arg0->unk8F8->unk6 = (u16) sp90;
    temp_r4 = arg0->unk8F8;
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x724);
    temp_r4->unk4 = func_080074C0(temp_r0_3, temp_r0_3->unk4);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x8FC);
    temp_r0_4 = arg0->unk8F4;
    temp_r1 = temp_r0_4->unk0;
    (*temp_r1)->unk10(&sp38, temp_r1, *(temp_r0_4->unk4 + (temp_r0_4->unkC * 4)));
    memcpy(&sp38, &sp38, 0x20);
    temp_r0_5 = &(GenObj *)((u8 *)sp38 + 0xC);
    arg0->unk8FC = (s32) sp38;
    temp_r4_2->unk4 = (s32) sp38.unk4;
    temp_r4_2->unk8 = (s32) sp38.unk8;
    temp_r4_3 = (GenObj *)((u8 *)temp_r4_2 + 0xC);
    temp_r4_2->unkC = (s32) sp38.unkC;
    temp_r4_3->unk4 = (s32) temp_r0_5->unk4;
    temp_r4_3->unk8 = (s32) temp_r0_5->unk8;
    temp_r4_3->unkC = (s32) temp_r0_5->unkC;
    (temp_r4_3 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_5 + 0xC))->unk4;
    temp_r0_6 = func_08008910(arg0);
    temp_r1_2 = arg0->unk904;
    var_r3 = 0;
    if (temp_r1_2 != 0) {
        var_r3 = ((GenObj *)((u8 *)arg0 + 0x904))->unk4;
    }
    spB8 = temp_r0_6;
    func_08008F0C(&sp38, temp_r1_2, (sp90 << 5) + 0x06010000, var_r3);
    temp_r1_3 = spB8->unk4;
    if (temp_r1_3 != spB8->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp38;
            temp_r1_3->unk4 = (s32) sp38.unk4;
            temp_r1_3->unk8 = (s32) sp38.unk8;
            temp_r1_3->unkC = (s32) sp38.unkC;
        }
        spB8->unk4 = (void *) (spB8->unk4 + 0x10);
    } else {
        sp5C = 1;
        temp_r4_4 = (s32) (temp_r1_3 - spB8->unk0) >> 4;
        sp58 = temp_r4_4;
        var_r0 = &sp58;
        if ((u32) temp_r4_4 < 1U) {
            var_r0 = &sp5C;
        }
        temp_r0_7 = temp_r4_4 + *var_r0;
        if (temp_r0_7 != 0) {
            temp_r4_5 = temp_r0_7 * 0x10;
            var_r0_2 = malloc(temp_r4_5);
            var_sb = temp_r4_5;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        spBC = var_r0_2;
        var_r2 = spB8->unk0;
        var_r3_2 = var_r0_2;
        if (var_r2 != temp_r1_3) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != temp_r1_3);
        }
        if (sp5C == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp38;
                var_r3_2->unk4 = (s32) sp38.unk4;
                var_r3_2->unk8 = (s32) sp38.unk8;
                var_r3_2->unkC = (s32) sp38.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
        } else {
            var_r8 = sp5C;
            var_r2_2 = var_r3_2;
            if (sp5C != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp38;
                        var_r2_2->unk4 = (s32) sp38.unk4;
                        var_r2_2->unk8 = (s32) sp38.unk8;
                        var_r2_2->unkC = (s32) sp38.unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = spB8->unk4;
        temp_r0_8 = spB8->unk0;
        var_r1 = temp_r0_8;
        if (temp_r0_8 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_8 != 0) {
            free();
        }
        spB8->unk0 = spBC;
        spB8->unk4 = var_r5;
        spB8->unkC = (void *) (spBC + var_sb);
    }
    temp_r5 = func_08008910(arg0);
    temp_r8 = arg0->unk90C;
    temp_r0_9 = (GenObj *)((u8 *)arg0 + 0x724);
    temp_r2_2 = func_080074C0(temp_r0_9, temp_r0_9->unk4);
    var_r3_3 = 0;
    if (arg0->unk90C != 0) {
        var_r3_3 = ((GenObj *)((u8 *)arg0 + 0x90C))->unk4;
    }
    spB8 = temp_r5;
    func_08008F0C(&sp38, temp_r8, (temp_r2_2 << 5) + 0x05000200, var_r3_3);
    temp_r1_4 = spB8->unk4;
    if (temp_r1_4 != spB8->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp38;
            temp_r1_4->unk4 = (s32) sp38.unk4;
            temp_r1_4->unk8 = (s32) sp38.unk8;
            temp_r1_4->unkC = (s32) sp38.unkC;
        }
        spB8->unk4 = (void *) (spB8->unk4 + 0x10);
    } else {
        sp64 = 1;
        temp_r4_6 = (s32) (temp_r1_4 - spB8->unk0) >> 4;
        sp60 = temp_r4_6;
        var_r0_3 = &sp60;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_3 = &sp64;
        }
        temp_r0_10 = temp_r4_6 + *var_r0_3;
        if (temp_r0_10 != 0) {
            temp_r4_7 = temp_r0_10 * 0x10;
            var_r0_4 = malloc(temp_r4_7);
            var_sb_2 = temp_r4_7;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        spBC = var_r0_4;
        var_r2_3 = spB8->unk0;
        var_r3_4 = var_r0_4;
        if (var_r2_3 != temp_r1_4) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_3->unk0;
                    var_r3_4->unk4 = (s32) var_r2_3->unk4;
                    var_r3_4->unk8 = (s32) var_r2_3->unk8;
                    var_r3_4->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_3 != temp_r1_4);
        }
        if (sp64 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp38;
                var_r3_4->unk4 = (s32) sp38.unk4;
                var_r3_4->unk8 = (s32) sp38.unk8;
                var_r3_4->unkC = (s32) sp38.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_4 + 0x10);
        } else {
            var_r8_2 = sp64;
            var_r2_4 = var_r3_4;
            if (sp64 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp38;
                        var_r2_4->unk4 = (s32) sp38.unk4;
                        var_r2_4->unk8 = (s32) sp38.unk8;
                        var_r2_4->unkC = (s32) sp38.unkC;
                    }
                    var_r8_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r8_2 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_3 = spB8->unk4;
        temp_r0_11 = spB8->unk0;
        var_r1_2 = temp_r0_11;
        if (temp_r0_11 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        spB8->unk0 = spBC;
        spB8->unk4 = var_r5_2;
        spB8->unkC = (void *) (spBC + var_sb_2);
    }
    func_080B8578(arg0);
    temp_r5_2 = func_08008910(arg0);
    temp_r8_2 = arg0->unkAB0;
    temp_r2_4 = func_08007D4C(&sp20, sp24);
    var_r3_5 = 0;
    if (arg0->unkAB0 != 0) {
        var_r3_5 = ((GenObj *)((u8 *)arg0 + 0xAB0))->unk4;
    }
    spB8 = temp_r5_2;
    func_08008F0C(&sp38, temp_r8_2, (temp_r2_4 << 5) + 0x06010000, var_r3_5);
    temp_r1_5 = temp_r5_2->unk4;
    if (temp_r1_5 != temp_r5_2->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp38;
            temp_r1_5->unk4 = (s32) sp38.unk4;
            temp_r1_5->unk8 = (s32) sp38.unk8;
            temp_r1_5->unkC = (s32) sp38.unkC;
        }
        spB8->unk4 = (void *) (spB8->unk4 + 0x10);
    } else {
        sp6C = 1;
        temp_r4_8 = (s32) (temp_r1_5 - spB8->unk0) >> 4;
        sp68 = temp_r4_8;
        var_r0_5 = &sp68;
        if ((u32) temp_r4_8 < 1U) {
            var_r0_5 = &sp6C;
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
        spBC = var_r0_6;
        var_r2_5 = spB8->unk0;
        var_r3_6 = var_r0_6;
        if (var_r2_5 != temp_r1_5) {
            do {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) var_r2_5->unk0;
                    var_r3_6->unk4 = (s32) var_r2_5->unk4;
                    var_r3_6->unk8 = (s32) var_r2_5->unk8;
                    var_r3_6->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_6 += 0x10;
            } while (var_r2_5 != temp_r1_5);
        }
        if (sp6C == 1) {
            if (var_r3_6 != 0) {
                var_r3_6->unk0 = (s32) sp38;
                var_r3_6->unk4 = (s32) sp38.unk4;
                var_r3_6->unk8 = (s32) sp38.unk8;
                var_r3_6->unkC = (s32) sp38.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_6 + 0x10);
        } else {
            var_r8_3 = sp6C;
            var_r2_6 = var_r3_6;
            if (sp6C != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp38;
                        var_r2_6->unk4 = (s32) sp38.unk4;
                        var_r2_6->unk8 = (s32) sp38.unk8;
                        var_r2_6->unkC = (s32) sp38.unkC;
                    }
                    var_r8_3 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r8_3 != 0);
            }
            var_r5_3 = var_r2_6;
        }
        temp_r2_5 = spB8->unk4;
        temp_r0_13 = spB8->unk0;
        var_r1_3 = temp_r0_13;
        if (temp_r0_13 != temp_r2_5) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_5);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        spB8->unk0 = spBC;
        spB8->unk4 = var_r5_3;
        spB8->unkC = (void *) (spBC + var_sb_3);
    }
    temp_r5_3 = func_08008910(arg0);
    temp_r8_3 = arg0->unkAD4;
    temp_r2_6 = func_08007D4C(&sp28, sp2C);
    var_r3_7 = 0;
    if (arg0->unkAD4 != 0) {
        var_r3_7 = ((GenObj *)((u8 *)arg0 + 0xAD4))->unk4;
    }
    spB8 = temp_r5_3;
    func_08008F0C(&sp38, temp_r8_3, (temp_r2_6 << 5) + 0x06010000, var_r3_7);
    temp_r1_6 = temp_r5_3->unk4;
    if (temp_r1_6 != temp_r5_3->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) sp38;
            temp_r1_6->unk4 = (s32) sp38.unk4;
            temp_r1_6->unk8 = (s32) sp38.unk8;
            temp_r1_6->unkC = (s32) sp38.unkC;
        }
        spB8->unk4 = (void *) (spB8->unk4 + 0x10);
    } else {
        sp74 = 1;
        temp_r4_10 = (s32) (temp_r1_6 - spB8->unk0) >> 4;
        sp70 = temp_r4_10;
        var_r0_7 = &sp70;
        if ((u32) temp_r4_10 < 1U) {
            var_r0_7 = &sp74;
        }
        temp_r0_14 = temp_r4_10 + *var_r0_7;
        if (temp_r0_14 != 0) {
            temp_r4_11 = temp_r0_14 * 0x10;
            var_r0_8 = malloc(temp_r4_11);
            var_sb_4 = temp_r4_11;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_sb_4);
            }
        } else {
            var_r0_8 = 0;
            var_sb_4 = 0;
        }
        spBC = var_r0_8;
        var_r2_7 = spB8->unk0;
        var_r3_8 = var_r0_8;
        if (var_r2_7 != temp_r1_6) {
            do {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) var_r2_7->unk0;
                    var_r3_8->unk4 = (s32) var_r2_7->unk4;
                    var_r3_8->unk8 = (s32) var_r2_7->unk8;
                    var_r3_8->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_8 += 0x10;
            } while (var_r2_7 != temp_r1_6);
        }
        if (sp74 == 1) {
            if (var_r3_8 != 0) {
                var_r3_8->unk0 = (s32) sp38;
                var_r3_8->unk4 = (s32) sp38.unk4;
                var_r3_8->unk8 = (s32) sp38.unk8;
                var_r3_8->unkC = (s32) sp38.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_8 + 0x10);
        } else {
            var_r8_4 = sp74;
            var_r2_8 = var_r3_8;
            if (sp74 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp38;
                        var_r2_8->unk4 = (s32) sp38.unk4;
                        var_r2_8->unk8 = (s32) sp38.unk8;
                        var_r2_8->unkC = (s32) sp38.unkC;
                    }
                    var_r8_4 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r8_4 != 0);
            }
            var_r5_4 = var_r2_8;
        }
        temp_r2_7 = spB8->unk4;
        temp_r0_15 = spB8->unk0;
        var_r1_4 = temp_r0_15;
        if (temp_r0_15 != temp_r2_7) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_7);
        }
        if (temp_r0_15 != 0) {
            free();
        }
        spB8->unk0 = spBC;
        spB8->unk4 = var_r5_4;
        spB8->unkC = (void *) (spBC + var_sb_4);
    }
    var_sb_5 = 0;
    var_r5_5 = (GenObj *)((u8 *)arg0 + 0xAEC);
    do {
        if (var_sb_5 <= 7) {
            var_r1_5 = sp2C;
            var_r0_9 = &sp28;
        } else {
            var_r1_5 = sp24;
            var_r0_9 = &sp20;
        }
        (*var_r5_5)->unk6 = (s16) func_08007D4C(var_r0_9, var_r1_5);
        temp_r1_7 = *var_r5_5;
        var_r5_5 += 4;
        temp_r1_7->unk18 = 1;
        var_sb_5 += 1;
    } while (var_sb_5 <= 9);
    var_sb_6 = 0;
    var_r6 = (GenObj *)((u8 *)arg0 + 0xFFFFFE8A);
    var_r8_5 = 0;
    do {
        if (var_sb_6 <= 7) {
            temp_r4_12 = func_08008920(arg0);
            temp_r0_16 = arg0->unkACC;
            var_r2_9 = 0;
            if (temp_r0_16 != 0) {
                var_r2_9 = ((GenObj *)((u8 *)arg0 + 0xACC))->unk4;
            }
            func_0805E99C(temp_r4_12, temp_r0_16, var_r2_9, (var_r8_5 + arg0)->unkAEC);
        } else {
            *((u8 *)var_r8_5 + arg0)->unkAEC = (s16) ((u16) var_r6->unk0 >> 8);
            (var_r8_5 + arg0)->unkAEC->unk2 = (s16) ((u16) var_r6->unk2 >> 8);
            (var_r8_5 + arg0)->unkAEC->unk8 = (s16) var_r6->unkB;
            temp_r4_13 = func_08008920(arg0);
            temp_r1_8 = arg0->unkAA8;
            var_r2_10 = 0;
            if (temp_r1_8 != 0) {
                var_r2_10 = ((GenObj *)((u8 *)arg0 + 0xAA8))->unk4;
            }
            func_0805E99C(temp_r4_13, temp_r1_8, var_r2_10, (var_r8_5 + arg0)->unkAEC);
        }
        var_r6 += 0x40;
        var_r8_5 += 4;
        var_sb_6 += 1;
    } while (var_sb_6 <= 9);
    var_sb_7 = 0;
loop_139:
    temp_r1_9 = var_sb_7 * 4;
    temp_r5_4 = sp9C + temp_r1_9;
    (temp_r1_9 + arg0)->unk924->unk6 = temp_r5_4;
    temp_r6 = func_08008910(arg0);
    temp_r2_8 = var_sb_7 << 5;
    temp_r2_9 = temp_r2_8 + arg0;
    var_r3_9 = 0;
    if (temp_r2_9->unk934 != 0) {
        var_r3_9 = ((GenObj *)((u8 *)temp_r2_9 + 0x934))->unk4;
    }
    func_08008F0C(&sp38, (temp_r2_8 + arg0)->unk934, (temp_r5_4 << 5) + 0x06010000, var_r3_9);
    spA0 = &sp0 + 0x38;
    temp_r1_10 = temp_r6->unk4;
    if (temp_r1_10 != temp_r6->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) sp38;
            temp_r1_10->unk4 = (s32) sp38.unk4;
            temp_r1_10->unk8 = (s32) sp38.unk8;
            temp_r1_10->unkC = (s32) sp38.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        var_sb_7 += 1;
    } else {
        sp7C = 1;
        temp_r4_14 = (s32) (temp_r1_10 - temp_r6->unk0) >> 4;
        sp78 = temp_r4_14;
        var_r0_10 = &sp78;
        if ((u32) temp_r4_14 < 1U) {
            var_r0_10 = &sp7C;
        }
        temp_r0_17 = temp_r4_14 + *var_r0_10;
        if (temp_r0_17 != 0) {
            temp_r4_15 = temp_r0_17 * 0x10;
            var_r0_11 = malloc(temp_r4_15);
            var_sl = temp_r4_15;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_11 = 0;
            var_sl = 0;
        }
        spBC = var_r0_11;
        var_r2_11 = temp_r6->unk0;
        var_ip = var_r0_11;
        var_sb_7 += 1;
        if (var_r2_11 != temp_r1_10) {
            do {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) var_r2_11->unk0;
                    var_ip->unk4 = (s32) var_r2_11->unk4;
                    var_ip->unk8 = (s32) var_r2_11->unk8;
                    var_ip->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_ip += 0x10;
            } while (var_r2_11 != temp_r1_10);
        }
        if (sp7C == 1) {
            if (var_ip != 0) {
                var_ip->unk0 = (s32) spA0->unk0;
                var_ip->unk4 = (s32) spA0->unk4;
                var_ip->unk8 = (s32) spA0->unk8;
                var_ip->unkC = (s32) spA0->unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_ip + 0x10);
        } else {
            var_r8_6 = sp7C;
            var_r2_12 = var_ip;
            if (sp7C != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) spA0->unk0;
                        var_r2_12->unk4 = (s32) spA0->unk4;
                        var_r2_12->unk8 = (s32) spA0->unk8;
                        var_r2_12->unkC = (s32) spA0->unkC;
                    }
                    var_r8_6 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r8_6 != 0);
            }
            var_r5_6 = var_r2_12;
        }
        temp_r2_10 = temp_r6->unk4;
        temp_r0_18 = temp_r6->unk0;
        var_r1_6 = temp_r0_18;
        if (temp_r0_18 != temp_r2_10) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_10);
        }
        if (temp_r0_18 != 0) {
            free();
        }
        temp_r6->unk0 = spBC;
        temp_r6->unk4 = var_r5_6;
        temp_r6->unkC = (void *) (spBC + var_sl);
    }
    if (var_sb_7 <= 1) {
        goto loop_139;
    }
    func_080BA7E4(arg0, sp98);
    var_r0_12 = (GenObj *)((u8 *)arg0 + 0xB14);
loop_290:
    if (*var_r0_12 == 2) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        func_080BA608(arg0);
        if (arg0->unkB31 != 0) {
            temp_r4_16 = func_08008920(arg0);
            temp_r1_11 = arg0->unk8FC;
            var_r2_13 = 0;
            if (temp_r1_11 != 0) {
                var_r2_13 = ((GenObj *)((u8 *)arg0 + 0x8FC))->unk4;
            }
            func_0805E99C(temp_r4_16, temp_r1_11, var_r2_13, arg0->unk8F8);
            spB0 = (GenObj *)((u8 *)arg0 + 0x8C);
            spB4 = (GenObj *)((u8 *)arg0 + 0xCC);
        } else {
            func_080BA6B8(arg0);
            func_080BA284(arg0);
            var_sb_8 = 0;
            spB0 = (GenObj *)((u8 *)arg0 + 0x8C);
            spB4 = (GenObj *)((u8 *)arg0 + 0xCC);
loop_175:
            temp_r4_17 = var_sb_8 << 6;
            temp_r5_5 = arg0 + temp_r4_17;
            *((u8 *)(GenObj *)((u8 *)arg0 + 0x84) + temp_r4_17) = func_080B9464(arg0, temp_r5_5->unk8A, ((GenObj *)((u8 *)temp_r5_5 + 0x8A))->unk2);
            if (temp_r5_5->unk9C == 0) {
                if ((temp_r5_5->unk99 != 0) && (temp_r5_5->unk9A == 0)) {
                    if (var_sb_8 == 0) {
                        func_080B94A8(arg0, 0, 1);
                    } else {
                        func_080B94A8(arg0, 1, 0);
                    }
                }
                temp_r4_18 = arg0 + temp_r4_17;
                if (temp_r4_18->unk9A == 1) {
                    func_080B9844(arg0, var_sb_8);
                }
                if (temp_r4_18->unk9C != 0) {
                    goto block_184;
                }
            } else {
block_184:
                temp_r5_6 = var_sb_8 << 6;
                temp_r0_19 = arg0 + temp_r5_6;
                if ((u32) temp_r0_19->unk91 > (u32) arg0->unkB59) {
                    func_080BA0C4(arg0 + (temp_r5_6 + 0x6C));
                    temp_r0_19->unk91 = 0U;
                }
                temp_r0_20 = *((u8 *)(GenObj *)((u8 *)arg0 + 0x7C) + temp_r5_6);
                switch (temp_r0_20) {               /* irregular */
                case 0:
                    func_08008B88((GenObj *)((u8 *)arg0 + 0x70C), 0xCC);
                    func_080B9B50(arg0, var_sb_8);
                    break;
                case 1:
                    if (temp_r0_19->unk91 == 0) {
                        func_080B9F0C(arg0, var_sb_8);
                    }
                    break;
                case 2:
                    if (temp_r0_19->unk91 == 0) {
                        func_080B9F38(arg0, var_sb_8);
                    }
                    break;
                case 3:
                    if (temp_r0_19->unk91 == 0) {
                        func_080B9E1C(arg0, var_sb_8);
                    }
                    break;
                }
                temp_r1_12 = (GenObj *)((u8 *)arg0 + 0x91);
                arg0->unk91 = (u8) (arg0->unk91 + 1);
                temp_r1_12->unk40 = (u8) (temp_r1_12->unk40 + 1);
            }
            temp_r0_21 = var_sb_8 + 1;
            var_sb_8 = temp_r0_21;
            if ((u32) temp_r0_21 <= 1U) {
                goto loop_175;
            }
            func_080BA734(arg0);
            func_080B9AC0(arg0);
        }
        var_sb_9 = 0;
loop_208:
        if ((u32) *spB0 > (u32) *spB4) {
            func_080B8EBC(arg0, var_sb_9, sp94);
        } else {
            func_080B8EBC(arg0, (u8) (1 - var_sb_9), sp94);
        }
        temp_r3 = arg0 + (var_sb_9 << 6);
        spA4 = var_sb_9 + 1;
        if (temp_r3->unkAB == 0) {

        } else {
            temp_r4_19 = var_sb_9 * 4;
            *((u8 *)temp_r4_19 + arg0)->unk924 = ((u16) temp_r3->unk8A >> 8) - 9;
            (temp_r4_19 + arg0)->unk924->unk2 = (s16) (((u16) temp_r3->unk8C >> 8) - 0x20);
            temp_r0_22 = func_0805E8F0((temp_r4_19 + arg0)->unk91C) << 0x1E;
            spA8 = temp_r4_19;
            temp_r5_7 = var_sb_9 << 5;
            spAC = temp_r5_7;
            if (temp_r0_22 >= 0) {

            } else {
                temp_r5_8 = temp_r5_7 + arg0;
                temp_r4_20 = (GenObj *)((u8 *)temp_r5_8 + 0x92C);
                temp_r0_23 = (spA8 + arg0)->unk91C;
                temp_r1_13 = temp_r0_23->unk0;
                (*temp_r1_13)->unk10(&sp38, temp_r1_13, *(temp_r0_23->unk4 + (temp_r0_23->unkC * 4)));
                memcpy(&sp38, &sp38, 0x20);
                temp_r0_24 = &(GenObj *)((u8 *)sp38 + 0xC);
                temp_r5_8->unk92C = (s32) sp38;
                temp_r4_20->unk4 = (s32) sp38.unk4;
                temp_r4_20->unk8 = (s32) sp38.unk8;
                temp_r4_21 = (GenObj *)((u8 *)temp_r4_20 + 0xC);
                temp_r4_20->unkC = (s32) sp38.unkC;
                temp_r4_21->unk4 = (s32) temp_r0_24->unk4;
                temp_r4_21->unk8 = (s32) temp_r0_24->unk8;
                temp_r4_21->unkC = (s32) temp_r0_24->unkC;
                (temp_r4_21 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_24 + 0xC))->unk4;
                temp_r4_22 = func_08008910(arg0);
                temp_r0_25 = temp_r5_8->unk934;
                var_r3_10 = 0;
                if (temp_r0_25 != 0) {
                    var_r3_10 = ((GenObj *)((u8 *)temp_r5_8 + 0x934))->unk4;
                }
                func_08008F0C(&sp38, temp_r0_25, ((spA8 + sp9C) << 5) + 0x06010000, var_r3_10);
                temp_r1_14 = temp_r4_22->unk4;
                if (temp_r1_14 != temp_r4_22->unkC) {
                    if (temp_r1_14 != 0) {
                        temp_r1_14->unk0 = (s32) sp38;
                        temp_r1_14->unk4 = (s32) sp38.unk4;
                        temp_r1_14->unk8 = (s32) sp38.unk8;
                        temp_r1_14->unkC = (s32) sp38.unkC;
                    }
                    temp_r4_22->unk4 = (void *) (temp_r4_22->unk4 + 0x10);
                } else {
                    sp84 = 1;
                    temp_r4_23 = (s32) (temp_r1_14 - temp_r4_22->unk0) >> 4;
                    var_r0_13 = &sp80;
                    *var_r0_13 = (u32) temp_r4_23;
                    if ((u32) temp_r4_23 < (u32) sp84) {
                        var_r0_13 = &sp84;
                    }
                    temp_r0_26 = temp_r4_23 + *var_r0_13;
                    if (temp_r0_26 != 0) {
                        temp_r4_24 = temp_r0_26 * 0x10;
                        var_r0_14 = malloc(temp_r4_24);
                        var_sl_2 = temp_r4_24;
                        if (var_r0_14 == 0) {
                            var_r0_14 = func_080D3BC0(var_sl_2);
                        }
                    } else {
                        var_r0_14 = 0;
                        var_sl_2 = 0;
                    }
                    spBC = var_r0_14;
                    var_r2_14 = temp_r4_22->unk0;
                    var_ip_2 = var_r0_14;
                    spA4 = var_sb_9 + 1;
                    if (var_r2_14 != temp_r1_14) {
                        do {
                            if (var_ip_2 != 0) {
                                var_ip_2->unk0 = (s32) var_r2_14->unk0;
                                var_ip_2->unk4 = (s32) var_r2_14->unk4;
                                var_ip_2->unk8 = (s32) var_r2_14->unk8;
                                var_ip_2->unkC = (s32) var_r2_14->unkC;
                            }
                            var_r2_14 += 0x10;
                            var_ip_2 += 0x10;
                        } while (var_r2_14 != temp_r1_14);
                    }
                    if (sp84 == 1) {
                        if (var_ip_2 != 0) {
                            var_ip_2->unk0 = (s32) sp38;
                            var_ip_2->unk4 = (s32) sp38.unk4;
                            var_ip_2->unk8 = (s32) sp38.unk8;
                            var_ip_2->unkC = (s32) sp38.unkC;
                        }
                        var_r5_7 = (GenObj *)((u8 *)var_ip_2 + 0x10);
                    } else {
                        var_r8_7 = sp84;
                        var_r2_15 = var_ip_2;
                        if (sp84 != 0) {
                            do {
                                if (var_r2_15 != 0) {
                                    var_r2_15->unk0 = (s32) sp38;
                                    var_r2_15->unk4 = (s32) sp38.unk4;
                                    var_r2_15->unk8 = (s32) sp38.unk8;
                                    var_r2_15->unkC = (s32) sp38.unkC;
                                }
                                var_r8_7 -= 1;
                                var_r2_15 += 0x10;
                            } while (var_r8_7 != 0);
                        }
                        var_r5_7 = var_r2_15;
                    }
                    temp_r2_11 = temp_r4_22->unk4;
                    temp_r0_27 = temp_r4_22->unk0;
                    var_r1_7 = temp_r0_27;
                    if (temp_r0_27 != temp_r2_11) {
                        do {
                            var_r1_7 += 0x10;
                        } while (var_r1_7 != temp_r2_11);
                    }
                    if (temp_r0_27 != 0) {
                        free();
                    }
                    temp_r4_22->unk0 = spBC;
                    temp_r4_22->unk4 = var_r5_7;
                    temp_r4_22->unkC = (void *) (spBC + var_sl_2);
                }
                temp_r6_2 = func_08008910(arg0);
                temp_r5_9 = (spAC + arg0)->unk93C;
                temp_r0_28 = (GenObj *)((u8 *)arg0 + 0x71C);
                temp_r2_12 = func_080074C0(temp_r0_28, temp_r0_28->unk4);
                temp_r1_15 = spAC + arg0;
                var_r3_11 = 0;
                if (temp_r1_15->unk93C != 0) {
                    var_r3_11 = ((GenObj *)((u8 *)temp_r1_15 + 0x93C))->unk4;
                }
                func_08008F0C(&sp38, temp_r5_9, (temp_r2_12 << 5) + 0x05000200, var_r3_11);
                temp_r1_16 = temp_r6_2->unk4;
                if (temp_r1_16 != temp_r6_2->unkC) {
                    if (temp_r1_16 != 0) {
                        temp_r1_16->unk0 = (s32) sp38;
                        temp_r1_16->unk4 = (s32) sp38.unk4;
                        temp_r1_16->unk8 = (s32) sp38.unk8;
                        temp_r1_16->unkC = (s32) sp38.unkC;
                    }
                    temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
                } else {
                    sp8C = 1;
                    temp_r4_25 = (s32) (temp_r1_16 - temp_r6_2->unk0) >> 4;
                    var_r0_15 = &sp88;
                    *var_r0_15 = (u32) temp_r4_25;
                    if ((u32) temp_r4_25 < (u32) sp8C) {
                        var_r0_15 = &sp8C;
                    }
                    temp_r0_29 = temp_r4_25 + *var_r0_15;
                    if (temp_r0_29 != 0) {
                        temp_r4_26 = temp_r0_29 * 0x10;
                        var_r0_16 = malloc(temp_r4_26);
                        var_sb_10 = temp_r4_26;
                        if (var_r0_16 == 0) {
                            var_r0_16 = func_080D3BC0(var_sb_10);
                        }
                    } else {
                        var_r0_16 = 0;
                        var_sb_10 = 0;
                    }
                    spBC = var_r0_16;
                    var_r2_16 = temp_r6_2->unk0;
                    var_ip_3 = var_r0_16;
                    if (var_r2_16 != temp_r1_16) {
                        do {
                            if (var_ip_3 != 0) {
                                var_ip_3->unk0 = (s32) var_r2_16->unk0;
                                var_ip_3->unk4 = (s32) var_r2_16->unk4;
                                var_ip_3->unk8 = (s32) var_r2_16->unk8;
                                var_ip_3->unkC = (s32) var_r2_16->unkC;
                            }
                            var_r2_16 += 0x10;
                            var_ip_3 += 0x10;
                        } while (var_r2_16 != temp_r1_16);
                    }
                    if (sp8C == 1) {
                        if (var_ip_3 != 0) {
                            var_ip_3->unk0 = (s32) sp38;
                            var_ip_3->unk4 = (s32) sp38.unk4;
                            var_ip_3->unk8 = (s32) sp38.unk8;
                            var_ip_3->unkC = (s32) sp38.unkC;
                        }
                        var_r5_8 = (GenObj *)((u8 *)var_ip_3 + 0x10);
                    } else {
                        var_r8_8 = sp8C;
                        var_r2_17 = var_ip_3;
                        if (sp8C != 0) {
                            do {
                                if (var_r2_17 != 0) {
                                    var_r2_17->unk0 = (s32) sp38;
                                    var_r2_17->unk4 = (s32) sp38.unk4;
                                    var_r2_17->unk8 = (s32) sp38.unk8;
                                    var_r2_17->unkC = (s32) sp38.unkC;
                                }
                                var_r8_8 -= 1;
                                var_r2_17 += 0x10;
                            } while (var_r8_8 != 0);
                        }
                        var_r5_8 = var_r2_17;
                    }
                    temp_r2_13 = temp_r6_2->unk4;
                    temp_r0_30 = temp_r6_2->unk0;
                    var_r1_8 = temp_r0_30;
                    if (temp_r0_30 != temp_r2_13) {
                        do {
                            var_r1_8 += 0x10;
                        } while (var_r1_8 != temp_r2_13);
                    }
                    if (temp_r0_30 != 0) {
                        free();
                    }
                    temp_r6_2->unk0 = spBC;
                    temp_r6_2->unk4 = var_r5_8;
                    temp_r6_2->unkC = (void *) (spBC + var_sb_10);
                }
            }
            temp_r6_3 = func_08008920(arg0);
            temp_r5_10 = spAC + arg0;
            var_r2_18 = 0;
            if (temp_r5_10->unk92C != 0) {
                var_r2_18 = ((GenObj *)((u8 *)temp_r5_10 + 0x92C))->unk4;
            }
            func_0805E99C(temp_r6_3, (spAC + arg0)->unk92C, var_r2_18, (spA8 + arg0)->unk924);
        }
        temp_r0_31 = (u8) spA4;
        var_sb_9 = temp_r0_31;
        if ((u32) temp_r0_31 <= 1U) {
            goto loop_208;
        }
        func_080BB8EC(arg0, sp98);
        var_sb_11 = 0;
        var_r5_9 = (GenObj *)((u8 *)arg0 + 0xFFFFFE8A);
        var_r8_9 = 0;
        do {
            if (var_sb_11 <= 7) {
                temp_r4_27 = func_08008920(arg0);
                temp_r0_32 = arg0->unkACC;
                var_r2_19 = 0;
                if (temp_r0_32 != 0) {
                    var_r2_19 = ((GenObj *)((u8 *)arg0 + 0xACC))->unk4;
                }
                func_0805E99C(temp_r4_27, temp_r0_32, var_r2_19, (var_r8_9 + arg0)->unkAEC);
            } else {
                *((u8 *)var_r8_9 + arg0)->unkAEC = (s16) ((u16) var_r5_9->unk0 >> 8);
                (var_r8_9 + arg0)->unkAEC->unk2 = (s16) ((u16) var_r5_9->unk2 >> 8);
                (var_r8_9 + arg0)->unkAEC->unk8 = (s16) var_r5_9->unkB;
                temp_r4_28 = func_08008920(arg0);
                temp_r1_17 = arg0->unkAA8;
                var_r2_20 = 0;
                if (temp_r1_17 != 0) {
                    var_r2_20 = ((GenObj *)((u8 *)arg0 + 0xAA8))->unk4;
                }
                func_0805E99C(temp_r4_28, temp_r1_17, var_r2_20, (var_r8_9 + arg0)->unkAEC);
            }
            var_r5_9 += 0x40;
            var_r8_9 += 4;
            var_sb_11 += 1;
        } while (var_sb_11 <= 9);
        var_r0_12 = (GenObj *)((u8 *)arg0 + 0xB14);
        goto loop_290;
    }
    func_080073E0(&sp30, sp34);
    func_08007184(&sp30, 2);
    func_08007C28(&sp28, sp2C);
    func_080079E8(&sp28, 2);
    func_08007C28(&sp20, sp24);
    func_080079E8(&sp20, 2);
    func_08007C28(&sp18, sp1C);
    func_080079E8(&sp18, 2);
    func_08007C28(&sp10, sp14);
    func_080079E8(&sp10, 2);
    func_08007C28(&sp8, spC);
    func_080079E8(&sp8, 2);
    func_08007C28(&sp0, sp4);
    func_080079E8(&sp0, 2);
}
