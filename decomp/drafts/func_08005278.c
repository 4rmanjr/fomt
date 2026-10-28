s32 free();                                           /* extern */
s32 func_080088DC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 *func_08008940(void *);                           /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_08050D3C(s32, s32, s32, s16 *);              /* extern */
s32 func_08051320(s32, s32, s32, s32);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_080E8958;
extern s32 gUnk_080E8968;
extern s32 gUnk_080E8978;
extern s32 gUnk_080E8988;
extern s32 gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 gUnk_080F9F78;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[6684];
    s32 unk1A2C;
} GenObj;
void func_08005278(GenObj *arg0) {
    s32 *sp0;
    s32 sp4;
    void *sp8;
s32 spC;
s32 sp10;
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
    GenObj *sp4C;
    GenObj *sp50;
    void *sp54;
    void *sp58;
    GenObj *sp5C;
    s32 sp60;
    GenObj *sp64;
    GenObj *sp68;
    void *sp6C;
    GenObj *sp70;
    GenObj *sp74;
    GenObj *sp78;
    s32 sp7C;
    void *sp80;
    s32 sp84;
    void *sp88;
    void *sp8C;
    void *sp90;
    s32 *temp_r4_5;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r5;
    s16 *var_r0_5;
    s16 *var_r2_5;
    s16 *var_r2_6;
    s16 var_r3_5;
    s16 var_r3_6;
    s16 var_r4_4;
    s16 var_r4_5;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6_3;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_sb;
    s32 var_sb_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r5_5;
    u32 var_r8;
    u32 var_r8_2;
    u32 var_r8_3;
    u32 var_r8_4;
    u32 var_r8_5;
    u32 var_r8_6;
    u32 var_r8_7;
    u32 var_r8_8;
    void *temp_r0_5;
    void *temp_r0_7;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    GenObj *temp_r6;
    GenObj *temp_r6_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r3;
    GenObj *var_r3_3;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r5;
    void *var_r5_2;

    func_08008E64(gUnk_080F9F70, 0x06004B00, gUnk_080F9F74);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    temp_r0 = func_08008918(arg0);
    spC = 0x1740;
    *temp_r0 = 0x1740;
    temp_r0_2 = func_08008918(arg0);
    spC = 0x1841;
    temp_r0_2[5] = 0x1841;
    temp_r0_3 = func_08008918(arg0);
    spC = 0x1F01;
    temp_r0_3[6] = 0x1F01;
    sp0 = (s32 *)0x14;
    sp4 = 0x258;
    sp8 = 0;
    func_08051320(0x0600F800, 0, 0, 0x1E);
    func_08008EB8(0, 0x06FFC000, 0x20);
    var_r8 = 0;
    sp64 = (GenObj *)(&sp0 + 0x28);
    sp68 = (GenObj *)(&sp0 + 0x2C);
    sp70 = (GenObj *)(&sp0 + 0x30);
    sp74 = (GenObj *)(&sp0 + 0x34);
    sp78 = (GenObj *)(&sp0 + 0x38);
    sp5C = (GenObj *)(&sp0 + 0x10);
    var_r4 = (GenObj *)((u8 *)arg0 + 0xC);
    do {
        sp20 = 0xC;
        ((GenObj *)&sp20)->unk2 = 2;
        func_0804E7A0(sp20, var_r4, 0);
        var_r4 += 0x304;
        var_r8 += 1;
    } while (var_r8 <= 3U);
    var_r8_2 = 0;
    sp54 = (GenObj *)((u8 *)arg0 + 0xFA0);
    sp58 = (GenObj *)((u8 *)arg0 + 0x1324);
    sp6C = (GenObj *)((u8 *)arg0 + 0x16A8);
    var_r4_2 = (GenObj *)((u8 *)arg0 + 0xC1C);
    do {
        sp24 = 0xE;
        ((GenObj *)&sp24)->unk2 = 2;
        func_0804E7A0(sp24, var_r4_2, 0);
        var_r4_2 += 0x384;
        var_r8_2 += 1;
    } while (var_r8_2 <= 3U);
    var_r8_3 = 0;
    var_r4_3 = (GenObj *)((u8 *)arg0 + 0xC);
    do {
        sp28 = 0xC;
        sp64->unk2 = 2;
        sp0 = (var_r8_3 * 0x10) + (GenObj *)((u8 *)arg0 + 0x1A34);
        func_0804E8F0(sp28, var_r4_3, 0, 0);
        var_r4_3 += 0x304;
        var_r8_3 += 1;
    } while (var_r8_3 <= 3U);
    sp2C = 0xE;
    sp68->unk2 = 2;
    sp0 = &gUnk_080E8958;
    func_0804E8F0(sp2C, (GenObj *)((u8 *)arg0 + 0xC1C), 0, 0);
    sp30 = 0xE;
    sp70->unk2 = 2;
    sp0 = &gUnk_080E8968;
    func_0804E8F0(sp30, sp54, 0, 0);
    sp34 = 0xE;
    sp74->unk2 = 2;
    sp0 = &gUnk_080E8978;
    func_0804E8F0(sp34, sp58, 0, 0);
    sp38 = 0xE;
    sp78->unk2 = 2;
    sp0 = &gUnk_080E8988;
    func_0804E8F0(sp38, sp6C, 0, 0);
    var_r8_4 = 0;
    sp4C = sp5C;
    sp84 = 0x06000000;
    sp88 = (GenObj *)((u8 *)arg0 + 0xC);
loop_7:
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp10, sp88, sp84, 0x300);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = sp4C->unk0;
            temp_r1->unk4 = sp4C->unk4;
            temp_r1->unk8 = sp4C->unk8;
            temp_r1->unkC = sp4C->unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        sp60 = 0xC00;
    } else {
        sp8C = temp_r1;
        sp40 = 1;
        temp_r4 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
        sp3C = temp_r4;
        var_r0 = &sp3C;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp40;
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
        sp90 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
        sp60 = 0xC00;
        if (var_r2 != sp8C) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = var_r2->unk0;
                    var_r3->unk4 = var_r2->unk4;
                    var_r3->unk8 = var_r2->unk8;
                    var_r3->unkC = var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp8C);
        }
        if (sp40 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = sp4C->unk0;
                var_r3->unk4 = sp4C->unk4;
                var_r3->unk8 = sp4C->unk8;
                var_r3->unkC = sp4C->unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp40;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = sp4C->unk0;
                        var_r2_2->unk4 = sp4C->unk4;
                        var_r2_2->unk8 = sp4C->unk8;
                        var_r2_2->unkC = sp4C->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_5 = temp_r6->unk0;
        var_r1 = temp_r0_5;
        if (temp_r0_5 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        temp_r6->unk0 = sp90;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp90 + var_sb);
    }
    sp84 += 0x300;
    sp88 += 0x304;
    var_r8_4 += 1;
    if (var_r8_4 <= 3U) {
        goto loop_7;
    }
    var_r8_5 = 0;
    sp50 = (GenObj *)(&sp0 + 0xC);
    sp7C = sp60 + 0x06000000;
    sp80 = (GenObj *)((u8 *)arg0 + 0xC1C);
loop_38:
    temp_r6_2 = func_08008910(arg0);
    func_08008F0C(&spC, sp80, sp7C, 0x380);
    temp_r1_2 = temp_r6_2->unk4;
    if (temp_r1_2 != temp_r6_2->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (GenObj *)spC;
            temp_r1_2->unk4 = ((GenObj *)&spC)->unk4;
            temp_r1_2->unk8 = ((GenObj *)&spC)->unk8;
            temp_r1_2->unkC = ((GenObj *)&spC)->unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp8C = temp_r1_2;
        sp48 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - temp_r6_2->unk0) >> 4;
        sp44 = temp_r4_3;
        var_r0_3 = &sp44;
        if ((u32) temp_r4_3 < 1U) {
            var_r0_3 = &sp48;
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
        sp90 = var_r0_4;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_4;
loop_52:
        if (var_r2_3 != sp8C) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = var_r2_3->unk0;
                var_r3_3->unk4 = var_r2_3->unk4;
                var_r3_3->unk8 = var_r2_3->unk8;
                var_r3_3->unkC = var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_3 += 0x10;
            goto loop_52;
        }
        if (sp48 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = sp50->unk0;
                var_r3_3->unk4 = sp50->unk4;
                var_r3_3->unk8 = sp50->unk8;
                var_r3_3->unkC = sp50->unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
        } else {
            var_r3_4 = sp48;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = sp50->unk0;
                        var_r2_4->unk4 = sp50->unk4;
                        var_r2_4->unk8 = sp50->unk8;
                        var_r2_4->unkC = sp50->unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r0_7 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_7;
        if (temp_r0_7 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r6_2->unk0 = sp90;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (sp90 + var_sb_2);
    }
    sp7C += 0x380;
    sp80 += 0x384;
    var_r8_5 += 1;
    if (var_r8_5 <= 3U) {
        goto loop_38;
    }
    func_08008EB8(-1, 0x0600C000, 0x800);
    var_r8_6 = 0;
    do {
        var_r5_3 = 0;
        var_r0_5 = (s16 *)((var_r8_6 << 6) + 0x0600C000);
loop_71:
        *var_r0_5 = 0x64;
        var_r0_5 += 2;
        var_r5_3 += 1;
        if (var_r5_3 <= 0x1DU) {
            goto loop_71;
        }
        var_r8_6 += 1;
    } while (var_r8_6 <= 0x13U);
    var_r5_4 = 2;
    do {
        var_r8_7 = 0;
        var_r1_3 = var_r5_4 * 2;
        var_r4_4 = var_r5_4 + 0x6C;
        var_r3_5 = var_r5_4 + 0x5E;
        var_r2_5 = (s16 *)(var_r1_3 + 0x0600C040);
loop_75:
        *var_r2_5 = var_r3_5;
        *(s16 *)(0x0600C080 + var_r1_3) = var_r4_4;
        var_r4_4 += 0x1C;
        var_r3_5 += 0x1C;
        var_r2_5 += 0xC0;
        var_r1_3 += 0xC0;
        var_r8_7 += 1;
        if (var_r8_7 <= 3U) {
            goto loop_75;
        }
        var_r5_4 += 1;
    } while (var_r5_4 <= 0xFU);
    var_r5_5 = 0x10;
    do {
        var_r8_8 = 0;
        var_r1_4 = var_r5_5 * 2;
        var_r4_5 = var_r5_5 + 0xC + 0xFFF0;
        var_r3_6 = var_r5_5 + 0xFFF0;
        var_r2_6 = (s16 *)(var_r1_4 + 0x0600C040);
loop_79:
        *var_r2_6 = var_r3_6;
        *(s16 *)(0x0600C080 + var_r1_4) = var_r4_5;
        var_r4_5 += 0x18;
        var_r3_6 += 0x18;
        var_r2_6 += 0xC0;
        var_r1_4 += 0xC0;
        var_r8_8 += 1;
        if (var_r8_8 <= 3U) {
            goto loop_79;
        }
        var_r5_5 += 1;
    } while (var_r5_5 <= 0x1BU);
    temp_sb = arg0->unk1A2C;
    temp_r8 = func_080088DC(arg0);
    temp_r6_3 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4_5 = func_08008940(arg0);
    temp_r0_8 = func_0800894C(arg0);
    sp0 = temp_r4_5;
    sp4 = temp_r0_8;
    sp8 = (GenObj *)((u8 *)arg0 + 0x1A30);
    func_08050D3C(temp_sb, temp_r8, temp_r6_3, temp_r5);
}
