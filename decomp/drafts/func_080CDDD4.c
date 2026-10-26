s32 free();                                           /* extern */
s16 func_080074C0(void *, s32);                     /* extern */
s16 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, ? *);                /* extern */
s32 func_080CE120(s32 *, void *, s32);                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_080CDDD4(void *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
s32 sp3C;
s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    void *sp60;
    void *sp64;
    void *sp68;
    void *sp6C;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 var_r3_5;
    s32 var_r8;
    s32 var_sb;
    s32 var_sl;
    u16 var_r2;
    u16 var_r3;
    u16 var_r3_3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_6;
    void *temp_r6;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r5;
    void *var_r5_2;

    arg0->unk88 = 1U;
    func_080CE120(&sp4C, arg0->unk0, arg0->unk4);
    arg0->unk54 = (u16) sp4C.unk0;
    arg0->unk56 = (u16) sp4C.unk1;
    sp0.unk0 = 0U;
    sp0.unk2 = 0U;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    if (arg0->unk88 == 0) {
        return;
    }
    temp_r4 = arg0 + 0x58;
    if (arg0->unk0->unk88 == 3) {
        func_0805E8F0(temp_r4);
    }
    temp_r1 = arg0->unk58;
    (*temp_r1)->unk10(&sp1C, temp_r1, *(arg0->unk5C + (temp_r4->unkC * 4)));
    temp_r0 = arg0 + 0x6C;
    temp_r0_2 = temp_r0 + 0xC;
    sp0.unk0 = (s32) arg0->unk6C;
    sp0.unk4 = (s32) temp_r0->unk4;
    sp0.unk8 = (s32) temp_r0->unk8;
    temp_r1_2 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0->unkC;
    temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2->unkC = (s32) temp_r0_2->unkC;
    sp0.unk0 = (u16) arg0->unk54;
    sp0.unk2 = (u16) arg0->unk56;
    sp0.unk8 = 1;
    temp_r4_2 = arg0 + 0x1C;
    sp0.unk4 = func_080074C0(temp_r4_2, temp_r4_2->unk4);
    temp_r6 = arg0 + 0x14;
    sp0.unk6 = func_08007D4C(temp_r6, temp_r6->unk4);
    sp0.unk18 = 1;
    temp_r0_3 = func_08008920(arg0->unk0);
    var_r2 = 0;
    sp60 = temp_r4_2;
    if (sp1C != 0) {
        var_r2 = sp1C.unk4;
    }
    func_0805E99C(temp_r0_3, sp1C, var_r2, &sp0);
    temp_r4_3 = func_08008910(arg0->unk0);
    temp_r2 = func_08007D4C(temp_r6, temp_r6->unk4);
    var_r3 = 0;
    if (sp24 != 0) {
        var_r3 = sp24.unk4;
    }
    sp68 = temp_r4_3;
    func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010000, var_r3);
    temp_r1_3 = temp_r4_3->unk4;
    if (temp_r1_3 != temp_r4_3->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp3C.unk0;
            temp_r1_3->unk4 = (s32) sp3C.unk4;
            temp_r1_3->unk8 = (s32) sp3C.unk8;
            temp_r1_3->unkC = (s32) sp3C.unkC;
        }
        sp68->unk4 = (void *) (sp68->unk4 + 0x10);
        sp64 = &sp0 + 0x2C;
    } else {
        sp54 = 1;
        temp_r4_4 = (s32) (temp_r1_3 - sp68->unk0) >> 4;
        sp50 = temp_r4_4;
        var_r0 = &sp50;
        if ((u32) temp_r4_4 < 1U) {
            var_r0 = &sp54;
        }
        temp_r0_4 = temp_r4_4 + *var_r0;
        if (temp_r0_4 != 0) {
            temp_r4_5 = temp_r0_4 * 0x10;
            var_r0_2 = malloc(temp_r4_5);
            var_sl = temp_r4_5;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp6C = var_r0_2;
        var_r2_2 = sp68->unk0;
        var_r3_2 = var_r0_2;
        sp64 = &sp0 + 0x2C;
        if (var_r2_2 != temp_r1_3) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_2->unk0;
                    var_r3_2->unk4 = (s32) var_r2_2->unk4;
                    var_r3_2->unk8 = (s32) var_r2_2->unk8;
                    var_r3_2->unkC = (s32) var_r2_2->unkC;
                }
                var_r2_2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_2 != temp_r1_3);
        }
        if (sp54 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp3C.unk0;
                var_r3_2->unk4 = (s32) sp3C.unk4;
                var_r3_2->unk8 = (s32) sp3C.unk8;
                var_r3_2->unkC = (s32) sp3C.unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r8 = sp54;
            var_r2_3 = var_r3_2;
            if (sp54 != 0) {
                do {
                    if (var_r2_3 != 0) {
                        var_r2_3->unk0 = (s32) sp3C.unk0;
                        var_r2_3->unk4 = (s32) sp3C.unk4;
                        var_r2_3->unk8 = (s32) sp3C.unk8;
                        var_r2_3->unkC = (s32) sp3C.unkC;
                    }
                    var_r8 -= 1;
                    var_r2_3 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5 = var_r2_3;
        }
        temp_r2_2 = sp68->unk4;
        temp_r0_5 = sp68->unk0;
        var_r1 = temp_r0_5;
        if (temp_r0_5 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        sp68->unk0 = sp6C;
        sp68->unk4 = var_r5;
        sp68->unkC = (void *) (sp6C + var_sl);
    }
    temp_r4_6 = func_08008910(arg0->unk0);
    temp_r2_3 = func_080074C0(sp60, sp60->unk4);
    var_r3_3 = 0;
    if (sp2C != 0) {
        var_r3_3 = sp64->unk4;
    }
    func_08008F0C(&sp3C, sp2C, (temp_r2_3 << 5) + 0x05000200, var_r3_3);
    temp_r1_4 = temp_r4_6->unk4;
    if (temp_r1_4 != temp_r4_6->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp3C.unk0;
            temp_r1_4->unk4 = (s32) sp3C.unk4;
            temp_r1_4->unk8 = (s32) sp3C.unk8;
            temp_r1_4->unkC = (s32) sp3C.unkC;
        }
        temp_r4_6->unk4 = (void *) (temp_r4_6->unk4 + 0x10);
        return;
    }
    sp5C = 1;
    temp_r4_7 = (s32) (temp_r1_4 - temp_r4_6->unk0) >> 4;
    sp58 = temp_r4_7;
    var_r0_3 = &sp58;
    if ((u32) temp_r4_7 < 1U) {
        var_r0_3 = &sp5C;
    }
    temp_r0_6 = temp_r4_7 + *var_r0_3;
    if (temp_r0_6 != 0) {
        temp_r4_8 = temp_r0_6 * 0x10;
        var_r0_4 = malloc(temp_r4_8);
        var_sb = temp_r4_8;
        if (var_r0_4 == 0) {
            var_r0_4 = func_080D3BC0(var_sb);
        }
    } else {
        var_r0_4 = 0;
        var_sb = 0;
    }
    sp6C = var_r0_4;
    var_r2_4 = temp_r4_6->unk0;
    var_r3_4 = var_r0_4;
    if (var_r2_4 != temp_r1_4) {
        do {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) var_r2_4->unk0;
                var_r3_4->unk4 = (s32) var_r2_4->unk4;
                var_r3_4->unk8 = (s32) var_r2_4->unk8;
                var_r3_4->unkC = (s32) var_r2_4->unkC;
            }
            var_r2_4 += 0x10;
            var_r3_4 += 0x10;
        } while (var_r2_4 != temp_r1_4);
    }
    if (sp5C == 1) {
        if (var_r3_4 != 0) {
            var_r3_4->unk0 = (s32) sp3C.unk0;
            var_r3_4->unk4 = (s32) sp3C.unk4;
            var_r3_4->unk8 = (s32) sp3C.unk8;
            var_r3_4->unkC = (s32) sp3C.unkC;
        }
        var_r5_2 = var_r3_4 + 0x10;
    } else {
        var_r3_5 = sp5C;
        var_r2_5 = var_r3_4;
        if (var_r3_5 != 0) {
            do {
                if (var_r2_5 != 0) {
                    var_r2_5->unk0 = (s32) sp3C.unk0;
                    var_r2_5->unk4 = (s32) sp3C.unk4;
                    var_r2_5->unk8 = (s32) sp3C.unk8;
                    var_r2_5->unkC = (s32) sp3C.unkC;
                }
                var_r3_5 -= 1;
                var_r2_5 += 0x10;
            } while (var_r3_5 != 0);
        }
        var_r5_2 = var_r2_5;
    }
    temp_r2_4 = temp_r4_6->unk4;
    temp_r0_7 = temp_r4_6->unk0;
    var_r1_2 = temp_r0_7;
    if (temp_r0_7 != temp_r2_4) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r2_4);
    }
    if (temp_r0_7 != 0) {
        free();
    }
    temp_r4_6->unk0 = sp6C;
    temp_r4_6->unk4 = var_r5_2;
    temp_r4_6->unkC = (void *) (sp6C + var_sb);
}
