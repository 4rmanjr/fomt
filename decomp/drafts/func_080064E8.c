s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_080E8997;
extern ? gUnk_080E8BFC;
extern ? gUnk_080E8C14;

void func_080064E8(void *arg0, ? arg3) {
    ? *sp0;
s32 sp4;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    ? **sp3C;
    ? **sp40;
    ? **sp44;
    ? **sp48;
    s32 sp4C;
    void *sp50;
    void *sp54;
    void *sp58;
    ? *var_r1_2;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_r0_3;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r8_2;
    s32 var_sb;
    u32 var_r8;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r0_2;
    void *var_r0_5;
    void *var_r1;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r4;
    void *var_r4_2;

    if (arg0->unk4637 == 0) {
        return;
    }
    var_r8 = 1;
    sp40 = &sp0 + 0x14;
    sp44 = &sp0 + 0x18;
    sp48 = &sp0 + 0x24;
    sp50 = arg0 + 0x34A8;
    sp3C = &sp0 + 4;
loop_3:
    temp_r4 = var_r8 * 0x784;
    sp14 = 0x1E;
    sp40->unk2 = 2;
    func_0804E7A0(sp14, temp_r4 + arg0 + 0xC, 0);
    sp18 = 0x1E;
    sp44->unk2 = 2;
    sp0 = (var_r8 * 0x1F) + (arg0->unk4600 * 0xBA) + &gUnk_080E8997;
    func_0804E8F0(sp18, temp_r4 + arg0 + 0xC, 0, 0);
    temp_r5 = func_08008910(arg0);
    func_08008F0C(&sp4, temp_r4 + arg0 + 0xC, (0x780 * var_r8) + 0x06000000, 0x780);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp4.unk0;
            temp_r1->unk4 = (s32) sp4.unk4;
            temp_r1->unk8 = (s32) sp4.unk8;
            temp_r1->unkC = (s32) sp4.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        var_r8 += 1;
        sp4C = 0x3C00;
    } else {
        sp54 = temp_r1;
        sp20 = 1;
        temp_r4_2 = (s32) (temp_r1 - temp_r5->unk0) >> 4;
        sp1C = temp_r4_2;
        var_r0 = &sp1C;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp20;
        }
        temp_r0 = temp_r4_2 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sb = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        sp58 = var_r0_2;
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        var_r8 += 1;
        sp4C = 0x3C00;
        if (var_r2 != sp54) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp54);
        }
        if (sp20 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32 *) sp3C->unk0;
                var_r3->unk4 = (s32) sp3C->unk4;
                var_r3->unk8 = (s32) sp3C->unk8;
                var_r3->unkC = (s32) sp3C->unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp20;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32 *) sp3C->unk0;
                        var_r2_2->unk4 = (s32) sp3C->unk4;
                        var_r2_2->unk8 = (s32) sp3C->unk8;
                        var_r2_2->unkC = (s32) sp3C->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r0_2 = temp_r5->unk0;
        var_r1 = temp_r0_2;
        if (temp_r0_2 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_2 != 0) {
            free();
        }
        temp_r5->unk0 = sp58;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (sp58 + var_sb);
    }
    if (var_r8 <= 6U) {
        goto loop_3;
    }
    sp24 = 0x1E;
    sp48->unk2 = 2;
    func_0804E7A0(sp24, sp50, 0);
    temp_r2_2 = arg0->unk4600;
    switch (temp_r2_2) {                            /* irregular */
    case 0:
        var_r1_2 = &gUnk_080E8BFC;
        sp28.unk0 = 0x1E;
        sp28.unk2 = 2;
        var_r0_3 = sp28;
block_41:
        sp0 = var_r1_2;
        func_0804E8F0(var_r0_3, sp50, 0x18, 0);
        break;
    case 1:
        var_r1_2 = &gUnk_080E8C14;
        sp2C.unk0 = 0x1E;
        sp2C.unk2 = 2;
        var_r0_3 = sp2C;
        goto block_41;
    case 2:
        sp30.unk0 = 0x1E;
        sp30.unk2 = (s16) temp_r2_2;
        sp0 = &gUnk_080E8C14;
        func_0804E8F0(sp30, sp50, 0x18, 0);
        break;
    }
    temp_r5_2 = func_08008910(arg0);
    func_08008F0C(&sp4, sp50, (sp4C - 0x780) + 0x06000000, 0x780);
    temp_r1_2 = temp_r5_2->unk4;
    if (temp_r1_2 != temp_r5_2->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp4.unk0;
            temp_r1_2->unk4 = (s32) sp4.unk4;
            temp_r1_2->unk8 = (s32) sp4.unk8;
            temp_r1_2->unkC = (s32) sp4.unkC;
        }
        temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
    } else {
        sp54 = temp_r1_2;
        sp38 = 1;
        temp_r4_4 = (s32) (temp_r1_2 - temp_r5_2->unk0) >> 4;
        sp34 = temp_r4_4;
        var_r0_4 = &sp34;
        if ((u32) temp_r4_4 < 1U) {
            var_r0_4 = &sp38;
        }
        temp_r0_3 = temp_r4_4 + *var_r0_4;
        if (temp_r0_3 != 0) {
            temp_r4_5 = temp_r0_3 * 0x10;
            var_r0_5 = malloc(temp_r4_5);
            var_r8_2 = temp_r4_5;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        sp58 = var_r0_5;
        var_r2_3 = temp_r5_2->unk0;
        var_r3_3 = var_r0_5;
        if (var_r2_3 != sp54) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != sp54);
        }
        if (sp38 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp4.unk0;
                var_r3_3->unk4 = (s32) sp4.unk4;
                var_r3_3->unk8 = (s32) sp4.unk8;
                var_r3_3->unkC = (s32) sp4.unkC;
            }
            var_r4_2 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp38;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp4.unk0;
                        var_r2_4->unk4 = (s32) sp4.unk4;
                        var_r2_4->unk8 = (s32) sp4.unk8;
                        var_r2_4->unkC = (s32) sp4.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_3 = temp_r5_2->unk4;
        temp_r0_4 = temp_r5_2->unk0;
        var_r1_3 = temp_r0_4;
        if (temp_r0_4 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_4 != 0) {
            free();
        }
        temp_r5_2->unk0 = sp58;
        temp_r5_2->unk4 = var_r4_2;
        temp_r5_2->unkC = (void *) (sp58 + var_r8_2);
    }
    arg0->unk4637 = 0U;
}
