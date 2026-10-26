s32 free(void *);                                     /* extern */
s32 func_08008F0C(s32 *, ? *, s32, s32);                /* extern */
s32 func_080A5EA0();                                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_08698E14;
extern ? gUnk_086D5508;

void func_080CFC7C(void *arg0, void *arg1) {
s32 sp0;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *sp20;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r8;
    s32 var_r8_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r4;
    void *var_r4_2;

    func_080A5EA0();
    if (arg0->unk4 != 0x3E) {
        return;
    }
    func_08008F0C(&sp0, &gUnk_086D5508, 0x06005FC0, 0xE60);
    temp_r1 = arg1->unk4;
    if (temp_r1 != arg1->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp0.unk0;
            temp_r1->unk4 = (s32) sp0.unk4;
            temp_r1->unk8 = (s32) sp0.unk8;
            temp_r1->unkC = (s32) sp0.unkC;
        }
        arg1->unk4 = (void *) (arg1->unk4 + 0x10);
    } else {
        sp14 = 1;
        temp_r4 = (s32) (temp_r1 - arg1->unk0) >> 4;
        sp10 = temp_r4;
        var_r0 = &sp10;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp14;
        }
        temp_r0 = temp_r4 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_2 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_r8 = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp20 = var_r0_2;
        var_r2 = arg1->unk0;
        var_r3 = var_r0_2;
        if (var_r2 != temp_r1) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != temp_r1);
        }
        if (sp14 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp0.unk0;
                var_r3->unk4 = (s32) sp0.unk4;
                var_r3->unk8 = (s32) sp0.unk8;
                var_r3->unkC = (s32) sp0.unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp14;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp0.unk0;
                        var_r2_2->unk4 = (s32) sp0.unk4;
                        var_r2_2->unk8 = (s32) sp0.unk8;
                        var_r2_2->unkC = (s32) sp0.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = arg1->unk4;
        temp_r1_2 = arg1->unk0;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        arg1->unk0 = sp20;
        arg1->unk4 = var_r4;
        arg1->unkC = (void *) (sp20 + var_r8);
    }
    func_08008F0C(&sp0, &gUnk_08698E14, 0x06006E20, 0x11E0);
    temp_r1_3 = arg1->unk4;
    if (temp_r1_3 != arg1->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0.unk0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        arg1->unk4 = (void *) (arg1->unk4 + 0x10);
        return;
    }
    sp1C = 1;
    temp_r4_3 = (s32) (temp_r1_3 - arg1->unk0) >> 4;
    sp18 = temp_r4_3;
    var_r0_4 = &sp18;
    if ((u32) temp_r4_3 < 1U) {
        var_r0_4 = &sp1C;
    }
    temp_r0_2 = temp_r4_3 + *var_r0_4;
    if (temp_r0_2 != 0) {
        temp_r4_4 = temp_r0_2 * 0x10;
        var_r0_5 = malloc(temp_r4_4);
        var_r8_2 = temp_r4_4;
        if (var_r0_5 == 0) {
            var_r0_5 = func_080D3BC0(var_r8_2);
        }
    } else {
        var_r0_5 = 0;
        var_r8_2 = 0;
    }
    sp20 = var_r0_5;
    var_r2_3 = arg1->unk0;
    var_r3_3 = var_r0_5;
    if (var_r2_3 != temp_r1_3) {
        do {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) var_r2_3->unk0;
                var_r3_3->unk4 = (s32) var_r2_3->unk4;
                var_r3_3->unk8 = (s32) var_r2_3->unk8;
                var_r3_3->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_3 += 0x10;
        } while (var_r2_3 != temp_r1_3);
    }
    if (sp1C == 1) {
        if (var_r3_3 != 0) {
            var_r3_3->unk0 = (s32) sp0.unk0;
            var_r3_3->unk4 = (s32) sp0.unk4;
            var_r3_3->unk8 = (s32) sp0.unk8;
            var_r3_3->unkC = (s32) sp0.unkC;
        }
        var_r4_2 = var_r3_3 + 0x10;
    } else {
        var_r3_4 = sp1C;
        var_r2_4 = var_r3_3;
        if (var_r3_4 != 0) {
            do {
                if (var_r2_4 != 0) {
                    var_r2_4->unk0 = (s32) sp0.unk0;
                    var_r2_4->unk4 = (s32) sp0.unk4;
                    var_r2_4->unk8 = (s32) sp0.unk8;
                    var_r2_4->unkC = (s32) sp0.unkC;
                }
                var_r3_4 -= 1;
                var_r2_4 += 0x10;
            } while (var_r3_4 != 0);
        }
        var_r4_2 = var_r2_4;
    }
    temp_r2_2 = arg1->unk4;
    temp_r1_4 = arg1->unk0;
    var_r0_6 = temp_r1_4;
    if (temp_r1_4 != temp_r2_2) {
        do {
            var_r0_6 += 0x10;
        } while (var_r0_6 != temp_r2_2);
    }
    if (temp_r1_4 != 0) {
        free(temp_r1_4);
    }
    arg1->unk0 = sp20;
    arg1->unk4 = var_r4_2;
    arg1->unkC = (void *) (sp20 + var_r8_2);
}
