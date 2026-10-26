s32 GetAffection__C6Animal(s32);                    /* extern */
u32 GetCapacity__C4Barn(s32);                       /* extern */
s32 GetCow__4BarnUi(s32);                           /* extern */
s32 GetName__C6Animal(s32);                         /* extern */
s32 GetSheep__4BarnUi(s32);                         /* extern */
s32 IsFestivalWinner__C6Animal(s32);                /* extern */
s32 free(void *);                                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0804E9F4(s32, u32, s32, s32, s32, s32);      /* extern */
u32 func_08085EC4(void *, s32);                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_0875196C;
extern ? gUnk_087519EC;
extern ? gUnk_08751B4C;
extern ? gUnk_08751BCC;
extern ? gUnk_0875254C;
extern ? gUnk_087525CC;
extern ? gUnk_0875320C;
extern ? gUnk_0875328C;

s32 func_0808586C(void *arg0, s32 arg1) {
s32 spC;
    s32 sp10;
    ? *sp14;
    ? *sp18;
s32 sp1C;
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
    u32 sp58;
    s32 sp5C;
    s32 sp60;
    u32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    void *sp74;
    ? *var_r0;
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_8;
    s32 *var_r1_2;
    s32 temp_r0;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_ip_2;
    s32 var_ip_4;
    s32 var_ip_6;
    s32 var_r1;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_sb;
    s32 var_sb_2;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_sl;
    void *temp_r0_10;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r4;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *var_ip;
    void *var_ip_3;
    void *var_ip_5;
    void *var_r0_10;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_7;
    void *var_r0_9;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;

    sp50 = arg1;
    sp54 = 4;
    temp_r6 = arg0 + 0x24;
    temp_r0 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r6;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0 - temp_r6) >> 4));
    sp58 = 0;
loop_122:
    if ((sp58 < GetCapacity__C4Barn(arg0->unk8 + 0x5F0)) && (*(arg0 + 0x6AC + (sp58 * 8)) != -1)) {
        sp5C = 0;
        sp60 = 0;
        if (sp50 == 0x1E) {
            sp5C = GetCow__4BarnUi(arg0->unk8 + 0x5F0);
        } else {
            sp60 = GetSheep__4BarnUi(arg0->unk8 + 0x5F0);
        }
        sp10 = 0x10;
        spC.unk0 = (s16) (sp54 * 8);
        if (sp50 == 0x1E) {
            sp14 = &gUnk_08751B4C;
            var_r0 = &gUnk_08751BCC;
        } else {
            sp14 = &gUnk_0875320C;
            var_r0 = &gUnk_0875328C;
        }
        sp18 = var_r0;
        temp_r0_2 = arg0->unk20;
        temp_r4 = arg0 + 0x20;
        if (temp_r0_2 <= 0x27U) {
            temp_r0_3 = temp_r4 + ((temp_r0_2 * 0x10) + 4);
            if (temp_r0_3 != 0) {
                temp_r0_3->unk0 = (s32) spC.unk0;
                temp_r0_3->unk4 = (s32) spC.unk4;
                temp_r0_3->unk8 = (s32) spC.unk8;
                temp_r0_3->unkC = (s32) spC.unkC;
            }
            arg0->unk20 = (u32) (arg0->unk20 + 1);
        }
        if (sp50 == 0x1E) {
            if ((IsFestivalWinner__C6Animal(sp5C) << 0x18) != 0) {
                sp10 = 0x20;
                sp14 = &gUnk_0875196C;
                sp18 = &gUnk_087519EC;
                temp_r0_4 = arg0->unk20;
                if (temp_r0_4 <= 0x27U) {
                    temp_r0_5 = temp_r4 + ((temp_r0_4 * 0x10) + 4);
                    if (temp_r0_5 != 0) {
                        var_r1_2 = &spC + 0xC;
                        temp_r0_5->unk0 = (s32) spC.unk0;
                        temp_r0_5->unk4 = (s32) spC.unk4;
                        temp_r0_5->unk8 = (s32) spC.unk8;
                        var_r0_2 = temp_r0_5 + 0xC;
                        goto block_22;
                    }
                    goto block_23;
                }
            }
        } else if ((IsFestivalWinner__C6Animal(sp60) << 0x18) != 0) {
            sp10 = 0x20;
            sp14 = &gUnk_0875196C;
            sp18 = &gUnk_087519EC;
            temp_r0_6 = arg0->unk20;
            if (temp_r0_6 <= 0x27U) {
                temp_r0_7 = temp_r4 + ((temp_r0_6 * 0x10) + 4);
                if (temp_r0_7 != 0) {
                    var_r1_2 = &spC + 0xC;
                    temp_r0_7->unk0 = (s32) spC.unk0;
                    temp_r0_7->unk4 = (s32) spC.unk4;
                    temp_r0_7->unk8 = (s32) spC.unk8;
                    var_r0_2 = temp_r0_7 + 0xC;
block_22:
                    *var_r0_2 = *var_r1_2;
                }
block_23:
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
        }
        temp_r5 = sp58 * 0x304;
        sp2C.unk0 = 0xC;
        sp2C.unk2 = 2;
        func_0804E7A0(sp2C, temp_r5 + arg0 + 0x774, 0);
        if (sp50 == 0x1E) {
            temp_r2 = GetName__C6Animal(sp5C);
            sp30.unk0 = 0xC;
            sp30.unk2 = 2;
            func_0804E958(sp30, temp_r5 + arg0 + 0x774, 0, 0, temp_r2, 0, 1);
        } else {
            temp_r2_2 = GetName__C6Animal(sp60);
            sp34.unk0 = 0xC;
            sp34.unk2 = 2;
            func_0804E958(sp34, temp_r5 + arg0 + 0x774, 0, 0, temp_r2_2, 0, 1);
        }
        temp_r0_8 = ((sp58 + 9) * 0x18) + 0xD0;
        temp_r5_2 = func_08008910(arg0);
        func_08008F0C(&sp1C, (sp58 * 0x304) + arg0 + 0x774, (temp_r0_8 << 5) + 0x06000000, 0x300);
        temp_r1 = temp_r5_2->unk4;
        if (temp_r1 != temp_r5_2->unkC) {
            if (temp_r1 != 0) {
                temp_r1->unk0 = (s32) sp1C.unk0;
                temp_r1->unk4 = (s32) sp1C.unk4;
                temp_r1->unk8 = (s32) sp1C.unk8;
                temp_r1->unkC = (s32) sp1C.unkC;
            }
            temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
            sp6C = sp54 << 6;
            var_sl = temp_r0_8 << 0x10;
            sp68 = sp54 + 2;
            sp64 = sp58 + 1;
        } else {
            sp74 = temp_r1;
            sp3C = 1;
            temp_r4_2 = (s32) (temp_r1 - temp_r5_2->unk0) >> 4;
            sp38 = temp_r4_2;
            var_r0_3 = &sp38;
            if ((u32) temp_r4_2 < 1U) {
                var_r0_3 = &sp3C;
            }
            temp_r0_9 = temp_r4_2 + *var_r0_3;
            if (temp_r0_9 != 0) {
                temp_r4_3 = temp_r0_9 * 0x10;
                var_r0_4 = malloc(temp_r4_3);
                sp70 = temp_r4_3;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(temp_r4_3);
                }
            } else {
                var_r0_4 = 0;
                sp70 = 0;
            }
            var_r2 = temp_r5_2->unk0;
            var_ip = var_r0_4;
            sp6C = sp54 << 6;
            var_sl = temp_r0_8 << 0x10;
            sp68 = sp54 + 2;
            sp64 = sp58 + 1;
            if (var_r2 != sp74) {
                do {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) var_r2->unk0;
                        var_ip->unk4 = (s32) var_r2->unk4;
                        var_ip->unk8 = (s32) var_r2->unk8;
                        var_ip->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_ip += 0x10;
                } while (var_r2 != sp74);
            }
            if (sp3C == 1) {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) sp1C.unk0;
                    var_ip->unk4 = (s32) sp1C.unk4;
                    var_ip->unk8 = (s32) sp1C.unk8;
                    var_ip->unkC = (s32) sp1C.unkC;
                }
                var_r4 = var_ip + 0x10;
            } else {
                var_ip_2 = sp3C;
                var_r2_2 = var_ip;
                if (sp3C != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) sp1C.unk0;
                            var_r2_2->unk4 = (s32) sp1C.unk4;
                            var_r2_2->unk8 = (s32) sp1C.unk8;
                            var_r2_2->unkC = (s32) sp1C.unkC;
                        }
                        var_ip_2 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_ip_2 != 0);
                }
                var_r4 = var_r2_2;
            }
            temp_r2_3 = temp_r5_2->unk4;
            temp_r0_10 = temp_r5_2->unk0;
            var_r1_3 = temp_r0_10;
            if (temp_r0_10 != temp_r2_3) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2_3);
            }
            if (temp_r0_10 != 0) {
                free();
            }
            temp_r5_2->unk0 = var_r0_4;
            temp_r5_2->unk4 = var_r4;
            temp_r5_2->unkC = (void *) (sp70 + var_r0_4);
        }
        func_0804E9F4(arg0->unk1C->unk18 + sp6C + 0xC, var_sl >> 0x10, 0xC, 2, 0, 0x20);
        temp_r5_3 = func_08008910(arg0);
        func_08008F0C(&sp1C, &gUnk_0875254C, 0x06006500, 0x80);
        temp_r1_2 = temp_r5_3->unk4;
        if (temp_r1_2 != temp_r5_3->unkC) {
            if (temp_r1_2 != 0) {
                temp_r1_2->unk0 = (s32) sp1C.unk0;
                temp_r1_2->unk4 = (s32) sp1C.unk4;
                temp_r1_2->unk8 = (s32) sp1C.unk8;
                temp_r1_2->unkC = (s32) sp1C.unkC;
            }
            temp_r5_3->unk4 = (void *) (temp_r5_3->unk4 + 0x10);
        } else {
            sp74 = temp_r1_2;
            sp44 = 1;
            temp_r4_4 = (s32) (sp74 - temp_r5_3->unk0) >> 4;
            sp40 = temp_r4_4;
            var_r0_5 = &sp40;
            if ((u32) temp_r4_4 < 1U) {
                var_r0_5 = &sp44;
            }
            temp_r0_11 = temp_r4_4 + *var_r0_5;
            if (temp_r0_11 != 0) {
                temp_r4_5 = temp_r0_11 * 0x10;
                var_r0_6 = malloc(temp_r4_5);
                var_sb = temp_r4_5;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_6 = 0;
                var_sb = 0;
            }
            var_r2_3 = temp_r5_3->unk0;
            var_ip_3 = var_r0_6;
            if (var_r2_3 != sp74) {
                do {
                    if (var_ip_3 != 0) {
                        var_ip_3->unk0 = (s32) var_r2_3->unk0;
                        var_ip_3->unk4 = (s32) var_r2_3->unk4;
                        var_ip_3->unk8 = (s32) var_r2_3->unk8;
                        var_ip_3->unkC = (s32) var_r2_3->unkC;
                    }
                    var_r2_3 += 0x10;
                    var_ip_3 += 0x10;
                } while (var_r2_3 != sp74);
            }
            if (sp44 == 1) {
                if (var_ip_3 != 0) {
                    var_ip_3->unk0 = (s32) sp1C.unk0;
                    var_ip_3->unk4 = (s32) sp1C.unk4;
                    var_ip_3->unk8 = (s32) sp1C.unk8;
                    var_ip_3->unkC = (s32) sp1C.unkC;
                }
                var_r4_2 = var_ip_3 + 0x10;
            } else {
                var_ip_4 = sp44;
                var_r2_4 = var_ip_3;
                if (sp44 != 0) {
                    do {
                        if (var_r2_4 != 0) {
                            var_r2_4->unk0 = (s32) sp1C.unk0;
                            var_r2_4->unk4 = (s32) sp1C.unk4;
                            var_r2_4->unk8 = (s32) sp1C.unk8;
                            var_r2_4->unkC = (s32) sp1C.unkC;
                        }
                        var_ip_4 -= 1;
                        var_r2_4 += 0x10;
                    } while (var_ip_4 != 0);
                }
                var_r4_2 = var_r2_4;
            }
            temp_r2_4 = temp_r5_3->unk4;
            temp_r1_3 = temp_r5_3->unk0;
            var_r0_7 = temp_r1_3;
            if (temp_r1_3 != temp_r2_4) {
                do {
                    var_r0_7 += 0x10;
                } while (var_r0_7 != temp_r2_4);
            }
            if (temp_r1_3 != 0) {
                free(temp_r1_3);
            }
            temp_r5_3->unk0 = var_r0_6;
            temp_r5_3->unk4 = var_r4_2;
            temp_r5_3->unkC = (void *) (var_sb + var_r0_6);
        }
        temp_r5_4 = func_08008910(arg0);
        func_08008F0C(&sp1C, &gUnk_087525CC, 0x05000020, 0x20);
        temp_r1_4 = temp_r5_4->unk4;
        if (temp_r1_4 != temp_r5_4->unkC) {
            if (temp_r1_4 != 0) {
                temp_r1_4->unk0 = (s32) sp1C.unk0;
                temp_r1_4->unk4 = (s32) sp1C.unk4;
                temp_r1_4->unk8 = (s32) sp1C.unk8;
                temp_r1_4->unkC = (s32) sp1C.unkC;
            }
            temp_r5_4->unk4 = (void *) (temp_r5_4->unk4 + 0x10);
        } else {
            sp74 = temp_r1_4;
            sp4C = 1;
            temp_r4_6 = (s32) (sp74 - temp_r5_4->unk0) >> 4;
            sp48 = temp_r4_6;
            var_r0_8 = &sp48;
            if ((u32) temp_r4_6 < 1U) {
                var_r0_8 = &sp4C;
            }
            temp_r0_12 = temp_r4_6 + *var_r0_8;
            if (temp_r0_12 != 0) {
                temp_r4_7 = temp_r0_12 * 0x10;
                var_r0_9 = malloc(temp_r4_7);
                var_sb_2 = temp_r4_7;
                if (var_r0_9 == 0) {
                    var_r0_9 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_9 = 0;
                var_sb_2 = 0;
            }
            var_r2_5 = temp_r5_4->unk0;
            var_ip_5 = var_r0_9;
            if (var_r2_5 != sp74) {
                do {
                    if (var_ip_5 != 0) {
                        var_ip_5->unk0 = (s32) var_r2_5->unk0;
                        var_ip_5->unk4 = (s32) var_r2_5->unk4;
                        var_ip_5->unk8 = (s32) var_r2_5->unk8;
                        var_ip_5->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_ip_5 += 0x10;
                } while (var_r2_5 != sp74);
            }
            if (sp4C == 1) {
                if (var_ip_5 != 0) {
                    var_ip_5->unk0 = (s32) sp1C.unk0;
                    var_ip_5->unk4 = (s32) sp1C.unk4;
                    var_ip_5->unk8 = (s32) sp1C.unk8;
                    var_ip_5->unkC = (s32) sp1C.unkC;
                }
                var_r4_3 = var_ip_5 + 0x10;
            } else {
                var_ip_6 = sp4C;
                var_r2_6 = var_ip_5;
                if (sp4C != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) sp1C.unk0;
                            var_r2_6->unk4 = (s32) sp1C.unk4;
                            var_r2_6->unk8 = (s32) sp1C.unk8;
                            var_r2_6->unkC = (s32) sp1C.unkC;
                        }
                        var_ip_6 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_ip_6 != 0);
                }
                var_r4_3 = var_r2_6;
            }
            temp_r2_5 = temp_r5_4->unk4;
            temp_r1_5 = temp_r5_4->unk0;
            var_r0_10 = temp_r1_5;
            if (temp_r1_5 != temp_r2_5) {
                do {
                    var_r0_10 += 0x10;
                } while (var_r0_10 != temp_r2_5);
            }
            if (temp_r1_5 != 0) {
                free(temp_r1_5);
            }
            temp_r5_4->unk0 = var_r0_9;
            temp_r5_4->unk4 = var_r4_3;
            temp_r5_4->unkC = (void *) (var_sb_2 + var_r0_9);
        }
        if (sp50 == 0x1E) {
            var_r5 = 0;
            var_r4_4 = 0x26;
loop_116:
            if (var_r5 < func_08085EC4(arg0, GetAffection__C6Animal(sp5C))) {
                func_0804E9F4(arg0->unk1C->unk18 + ((sp54 + 1) << 6) + var_r4_4, 0x03280000U >> 0x10, 1, 1, 1, 0x20);
                var_r4_4 += 2;
                var_r5 += 1;
                goto loop_116;
            }
        } else {
            var_r5_2 = 0;
            var_r4_5 = 0x26;
loop_120:
            if (var_r5_2 < func_08085EC4(arg0, GetAffection__C6Animal(sp60))) {
                func_0804E9F4(arg0->unk1C->unk18 + ((sp54 + 1) << 6) + var_r4_5, 0x03280000U >> 0x10, 1, 1, 0x20);
                var_r4_5 += 2;
                var_r5_2 += 1;
                goto loop_120;
            }
        }
        sp54 = sp68;
        sp58 = sp64;
        goto loop_122;
    }
    return sp54;
}
