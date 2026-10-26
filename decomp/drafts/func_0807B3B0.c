u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__4CoopUi(s32);                       /* extern */
s32 GetName__C6Animal(s32);                         /* extern */
s32 IsFestivalWinner__C6Animal(s32);                /* extern */
s32 free(void *);                                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, s32 *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0804E9F4(s32, u32, s32, s32, s32, s32);      /* extern */
u32 func_0807B8F4(void *, s32);                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_0875196C;
extern s32 gUnk_087519EC;
extern s32 gUnk_0875254C;
extern s32 gUnk_087525CC;
extern s32 gUnk_0875268C;
extern s32 gUnk_0875270C;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[8];
    s32 unk18;
    void *unk1C;
    s32 unk20;
} GenObj;
s32 func_0807B3B0(GenObj *arg0) {
s32 spC;
    s32 sp10;
    s32 *sp14;
    s32 *sp18;
GenObj sp1C;
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
    u32 sp54;
    u32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    void *sp68;
    void *sp6C;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_6;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_9;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r3;
    s32 var_r3_3;
    s32 var_r3_5;
    s32 var_r3_7;
    s32 var_r4;
    s32 var_sb_2;
    s32 var_sb_3;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 var_r5_4;
    u32 var_sb;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_8;
    void *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    void *temp_r1_4;
    GenObj *temp_r1_5;
    void *temp_r1_6;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    GenObj *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r1_2;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    GenObj *var_r3_6;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;

    sp4C = 4;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x24);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x20) + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r6;
    var_r3 = arg0->unk8;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0 - temp_r6) >> 4));
    sp54 = 0;
loop_103:
    if ((sp54 < GetCapacity__C4Coop(var_r3 + 0x410)) && (*((u8 *)(GenObj *)((u8 *)arg0 + 0x6AC) + (sp54 * 8)) != -1)) {
        sp50 = GetChicken__4CoopUi(arg0->unk8 + 0x410);
        sp10 = 0x10;
        spC = (s16) (sp4C * 8);
        sp14 = &gUnk_0875268C;
        sp18 = &gUnk_0875270C;
        temp_r1 = (GenObj *)((u8 *)arg0 + 0x20);
        temp_r0_2 = arg0->unk20;
        if (temp_r0_2 <= 0x27U) {
            temp_r0_3 = temp_r1 + ((temp_r0_2 * 0x10) + 4);
            if (temp_r0_3 != 0) {
                temp_r0_3->unk0 = (s32) spC;
                temp_r0_3->unk4 = (s32) spC.unk4;
                temp_r0_3->unk8 = (s32) spC.unk8;
                temp_r0_3->unkC = (s32) spC.unkC;
            }
            arg0->unk20 = (u32) (arg0->unk20 + 1);
        }
        if ((IsFestivalWinner__C6Animal(sp50) << 0x18) != 0) {
            sp10 = 0x20;
            sp14 = &gUnk_0875196C;
            sp18 = &gUnk_087519EC;
            temp_r0_4 = arg0->unk20;
            if (temp_r0_4 <= 0x27U) {
                temp_r0_5 = temp_r1 + ((temp_r0_4 * 0x10) + 4);
                if (temp_r0_5 != 0) {
                    temp_r0_5->unk0 = (s32) spC;
                    temp_r0_5->unk4 = (s32) spC.unk4;
                    temp_r0_5->unk8 = (s32) spC.unk8;
                    temp_r0_5->unkC = (s32) spC.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
        }
        temp_r4 = sp54 * 0x304;
        sp2C = 0xC;
        sp2C.unk2 = 2;
        func_0804E7A0(sp2C, temp_r4 + (GenObj *)((u8 *)arg0 + 0x710) + 4, 0);
        temp_r2 = GetName__C6Animal(sp50);
        sp30 = 0xC;
        sp30.unk2 = 2;
        func_0804E958(sp30, temp_r4 + (GenObj *)((u8 *)arg0 + 0x710) + 4, 0, 0, temp_r2, 0, 1);
        temp_r0_6 = ((sp54 + 4) * 0x18) + 0xD0;
        temp_r6_2 = func_08008910(arg0);
        func_08008F0C(&sp1C, temp_r4 + (GenObj *)((u8 *)arg0 + 0x710) + 4, (temp_r0_6 << 5) + 0x06000000, 0x300);
        temp_r1_2 = temp_r6_2->unk4;
        if (temp_r1_2 != temp_r6_2->unkC) {
            if (temp_r1_2 != 0) {
                temp_r1_2->unk0 = (s32) sp1C;
                temp_r1_2->unk4 = (s32) sp1C.unk4;
                temp_r1_2->unk8 = (s32) sp1C.unk8;
                temp_r1_2->unkC = (s32) sp1C.unkC;
            }
            temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
            sp60 = sp4C << 6;
            var_sb = temp_r0_6 << 0x10;
            sp5C = sp4C + 2;
            sp58 = sp54 + 1;
        } else {
            sp68 = temp_r1_2;
            sp38 = 1;
            temp_r4_2 = (s32) (temp_r1_2 - temp_r6_2->unk0) >> 4;
            sp34 = temp_r4_2;
            var_r0 = &sp34;
            if ((u32) temp_r4_2 < 1U) {
                var_r0 = &sp38;
            }
            temp_r0_7 = temp_r4_2 + *var_r0;
            if (temp_r0_7 != 0) {
                temp_r4_3 = temp_r0_7 * 0x10;
                var_r0_2 = malloc(temp_r4_3);
                sp64 = temp_r4_3;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(temp_r4_3);
                }
            } else {
                var_r0_2 = 0;
                sp64 = 0;
            }
            sp6C = var_r0_2;
            var_r2 = temp_r6_2->unk0;
            var_r3_2 = var_r0_2;
            sp60 = sp4C << 6;
            var_sb = temp_r0_6 << 0x10;
            sp5C = sp4C + 2;
            sp58 = sp54 + 1;
            if (var_r2 != sp68) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != sp68);
            }
            if (sp38 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) sp1C;
                    var_r3_2->unk4 = (s32) sp1C.unk4;
                    var_r3_2->unk8 = (s32) sp1C.unk8;
                    var_r3_2->unkC = (s32) sp1C.unkC;
                }
                var_r5 = (GenObj *)((u8 *)var_r3_2 + 0x10);
            } else {
                var_r3_3 = sp38;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp1C;
                            var_r2_2->unk4 = (s32) sp1C.unk4;
                            var_r2_2->unk8 = (s32) sp1C.unk8;
                            var_r2_2->unkC = (s32) sp1C.unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r2_2 = temp_r6_2->unk4;
            temp_r0_8 = temp_r6_2->unk0;
            var_r1_2 = temp_r0_8;
            if (temp_r0_8 != temp_r2_2) {
                do {
                    var_r1_2 += 0x10;
                } while (var_r1_2 != temp_r2_2);
            }
            if (temp_r0_8 != 0) {
                free();
            }
            temp_r6_2->unk0 = sp6C;
            temp_r6_2->unk4 = var_r5;
            temp_r6_2->unkC = (void *) (sp64 + sp6C);
        }
        func_0804E9F4(arg0->unk1C->unk18 + sp60 + 0xC, var_sb >> 0x10, 0xC, 2, 0, 0x20);
        temp_r6_3 = func_08008910(arg0);
        func_08008F0C(&sp1C, &gUnk_0875254C, 0x06003E00, 0x80);
        temp_r1_3 = temp_r6_3->unk4;
        if (temp_r1_3 != temp_r6_3->unkC) {
            if (temp_r1_3 != 0) {
                temp_r1_3->unk0 = (s32) sp1C;
                temp_r1_3->unk4 = (s32) sp1C.unk4;
                temp_r1_3->unk8 = (s32) sp1C.unk8;
                temp_r1_3->unkC = (s32) sp1C.unkC;
            }
            temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
        } else {
            sp68 = temp_r1_3;
            sp40 = 1;
            temp_r4_4 = (s32) (sp68 - temp_r6_3->unk0) >> 4;
            sp3C = temp_r4_4;
            var_r0_3 = &sp3C;
            if ((u32) temp_r4_4 < 1U) {
                var_r0_3 = &sp40;
            }
            temp_r0_9 = temp_r4_4 + *var_r0_3;
            if (temp_r0_9 != 0) {
                temp_r4_5 = temp_r0_9 * 0x10;
                var_r0_4 = malloc(temp_r4_5);
                var_sb_2 = temp_r4_5;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_4 = 0;
                var_sb_2 = 0;
            }
            sp6C = var_r0_4;
            var_r2_3 = temp_r6_3->unk0;
            var_r3_4 = var_r0_4;
            if (var_r2_3 != sp68) {
                do {
                    if (var_r3_4 != 0) {
                        var_r3_4->unk0 = (s32) var_r2_3->unk0;
                        var_r3_4->unk4 = (s32) var_r2_3->unk4;
                        var_r3_4->unk8 = (s32) var_r2_3->unk8;
                        var_r3_4->unkC = (s32) var_r2_3->unkC;
                    }
                    var_r2_3 += 0x10;
                    var_r3_4 += 0x10;
                } while (var_r2_3 != sp68);
            }
            if (sp40 == 1) {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) sp1C;
                    var_r3_4->unk4 = (s32) sp1C.unk4;
                    var_r3_4->unk8 = (s32) sp1C.unk8;
                    var_r3_4->unkC = (s32) sp1C.unkC;
                }
                var_r5_2 = (GenObj *)((u8 *)var_r3_4 + 0x10);
            } else {
                var_r3_5 = sp40;
                var_r2_4 = var_r3_4;
                if (var_r3_5 != 0) {
                    do {
                        if (var_r2_4 != 0) {
                            var_r2_4->unk0 = (s32) sp1C;
                            var_r2_4->unk4 = (s32) sp1C.unk4;
                            var_r2_4->unk8 = (s32) sp1C.unk8;
                            var_r2_4->unkC = (s32) sp1C.unkC;
                        }
                        var_r3_5 -= 1;
                        var_r2_4 += 0x10;
                    } while (var_r3_5 != 0);
                }
                var_r5_2 = var_r2_4;
            }
            temp_r2_3 = temp_r6_3->unk4;
            temp_r1_4 = temp_r6_3->unk0;
            var_r0_5 = temp_r1_4;
            if (temp_r1_4 != temp_r2_3) {
                do {
                    var_r0_5 += 0x10;
                } while (var_r0_5 != temp_r2_3);
            }
            if (temp_r1_4 != 0) {
                free(temp_r1_4);
            }
            temp_r6_3->unk0 = sp6C;
            temp_r6_3->unk4 = var_r5_2;
            temp_r6_3->unkC = (void *) (sp6C + var_sb_2);
        }
        temp_r6_4 = func_08008910(arg0);
        func_08008F0C(&sp1C, &gUnk_087525CC, 0x05000020, 0x20);
        temp_r1_5 = temp_r6_4->unk4;
        if (temp_r1_5 != temp_r6_4->unkC) {
            if (temp_r1_5 != 0) {
                temp_r1_5->unk0 = (s32) sp1C;
                temp_r1_5->unk4 = (s32) sp1C.unk4;
                temp_r1_5->unk8 = (s32) sp1C.unk8;
                temp_r1_5->unkC = (s32) sp1C.unkC;
            }
            temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
        } else {
            sp68 = temp_r1_5;
            sp48 = 1;
            temp_r4_6 = (s32) (sp68 - temp_r6_4->unk0) >> 4;
            sp44 = temp_r4_6;
            var_r0_6 = &sp44;
            if ((u32) temp_r4_6 < 1U) {
                var_r0_6 = &sp48;
            }
            temp_r0_10 = temp_r4_6 + *var_r0_6;
            if (temp_r0_10 != 0) {
                temp_r4_7 = temp_r0_10 * 0x10;
                var_r0_7 = malloc(temp_r4_7);
                var_sb_3 = temp_r4_7;
                if (var_r0_7 == 0) {
                    var_r0_7 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_7 = 0;
                var_sb_3 = 0;
            }
            sp6C = var_r0_7;
            var_r2_5 = temp_r6_4->unk0;
            var_r3_6 = var_r0_7;
loop_84:
            if (var_r2_5 != sp68) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) var_r2_5->unk0;
                    var_r3_6->unk4 = (s32) var_r2_5->unk4;
                    var_r3_6->unk8 = (s32) var_r2_5->unk8;
                    var_r3_6->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_6 += 0x10;
                goto loop_84;
            }
            if (sp48 == 1) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) sp1C;
                    var_r3_6->unk4 = (s32) sp1C.unk4;
                    var_r3_6->unk8 = (s32) sp1C.unk8;
                    var_r3_6->unkC = (s32) sp1C.unkC;
                }
                var_r5_3 = (GenObj *)((u8 *)var_r3_6 + 0x10);
            } else {
                var_r3_7 = sp48;
                var_r2_6 = var_r3_6;
                if (var_r3_7 != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) sp1C;
                            var_r2_6->unk4 = (s32) sp1C.unk4;
                            var_r2_6->unk8 = (s32) sp1C.unk8;
                            var_r2_6->unkC = (s32) sp1C.unkC;
                        }
                        var_r3_7 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_r3_7 != 0);
                }
                var_r5_3 = var_r2_6;
            }
            temp_r2_4 = temp_r6_4->unk4;
            temp_r1_6 = temp_r6_4->unk0;
            var_r0_8 = temp_r1_6;
            if (temp_r1_6 != temp_r2_4) {
                do {
                    var_r0_8 += 0x10;
                } while (var_r0_8 != temp_r2_4);
            }
            if (temp_r1_6 != 0) {
                free(temp_r1_6);
            }
            temp_r6_4->unk0 = sp6C;
            temp_r6_4->unk4 = var_r5_3;
            temp_r6_4->unkC = (void *) (sp6C + var_sb_3);
        }
        var_r5_4 = 0;
        var_r4 = 0x26;
loop_101:
        if (var_r5_4 < func_0807B8F4(arg0, sp50)) {
            func_0804E9F4(arg0->unk1C->unk18 + ((sp4C + 1) << 6) + var_r4, 0x01F00000U >> 0x10, 1, 1, 1, 0x20);
            var_r4 += 2;
            var_r5_4 += 1;
            goto loop_101;
        }
        sp4C = sp5C;
        sp54 = sp58;
        var_r3 = arg0->unk8;
        goto loop_103;
    }
    return sp4C;
}
