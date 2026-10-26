s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32);                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_08077A1C(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s8 sp2C;
s32 sp30;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    void *sp50;
    s32 *var_r0_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r8;
    s32 var_r2;
    s32 var_r3;
    s32 var_r3_3;
    s32 var_sb;
    s8 *var_r0;
    u8 *temp_r1;
    u8 *var_r1;
    void *temp_r0_2;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r5;
    void *var_r0_3;
    void *var_r1_2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r3_2;
    void *var_r4;

    temp_r8 = (arg0->unk71C + 0xB) & 0xF;
    sp40.unk0 = 0x1C;
    sp40.unk2 = 2;
    func_0804E7A0(sp40, arg0 + 0x14, 0);
    if (arg0->unk728 != 0) {
        if (*((arg0->unk71C * 4) + arg0->unk72C) != 0) {
            var_r0 = &sp0 + 0x2A;
            do {
                *var_r0 = 0x20;
                var_r0 -= 1;
            } while ((s32) var_r0 >= (s32) &spC);
            sp2C = 0;
            var_r3 = 0;
            temp_r1 = *((arg0->unk71C * 4) + arg0->unk72C);
            if (*temp_r1 != 0) {
                do {
                    var_r3 += 1;
                } while (*(temp_r1 + var_r3) != 0);
            }
            if (var_r3 > 0) {
                var_r2 = 0;
                if (var_r3 > 0) {
                    var_r1 = ((s32) (0x1C - var_r3) >> 1) + sp + 0xC;
                    do {
                        *var_r1 = *(*((arg0->unk71C * 4) + arg0->unk72C) + var_r2);
                        var_r1 += 1;
                        var_r2 += 1;
                    } while (var_r2 < var_r3);
                }
            }
            sp44.unk0 = 0x1C;
            sp44.unk2 = 2;
            sp0 = &spC;
            sp4 = 0;
            sp8 = 1;
            func_0804E958(sp44, arg0 + 0x14, 0);
        } else {
            arg0->unk728 = 0U;
        }
    }
    arg0->unk71C = (s32) (arg0->unk71C + 1);
    temp_r5 = func_08008910(arg0);
    func_08008F0C(&sp30, arg0 + 0x14, (temp_r8 * 0x700) + 0x06000C00, 0x700);
    temp_r1_2 = temp_r5->unk4;
    if (temp_r1_2 != temp_r5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp30.unk0;
            temp_r1_2->unk4 = (s32) sp30.unk4;
            temp_r1_2->unk8 = (s32) sp30.unk8;
            temp_r1_2->unkC = (s32) sp30.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        return;
    }
    sp4C = 1;
    temp_r4 = (s32) (temp_r1_2 - temp_r5->unk0) >> 4;
    sp48 = temp_r4;
    var_r0_2 = &sp48;
    if ((u32) temp_r4 < 1U) {
        var_r0_2 = &sp4C;
    }
    temp_r0 = temp_r4 + *var_r0_2;
    if (temp_r0 != 0) {
        temp_r4_2 = temp_r0 * 0x10;
        var_r0_3 = malloc(temp_r4_2);
        var_sb = temp_r4_2;
        if (var_r0_3 == 0) {
            var_r0_3 = func_080D3BC0(var_sb);
        }
    } else {
        var_r0_3 = 0;
        var_sb = 0;
    }
    sp50 = var_r0_3;
    var_r2_2 = temp_r5->unk0;
    var_r3_2 = var_r0_3;
    if (var_r2_2 != temp_r1_2) {
        do {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) var_r2_2->unk0;
                var_r3_2->unk4 = (s32) var_r2_2->unk4;
                var_r3_2->unk8 = (s32) var_r2_2->unk8;
                var_r3_2->unkC = (s32) var_r2_2->unkC;
            }
            var_r2_2 += 0x10;
            var_r3_2 += 0x10;
        } while (var_r2_2 != temp_r1_2);
    }
    if (sp4C == 1) {
        if (var_r3_2 != 0) {
            var_r3_2->unk0 = (s32) sp30.unk0;
            var_r3_2->unk4 = (s32) sp30.unk4;
            var_r3_2->unk8 = (s32) sp30.unk8;
            var_r3_2->unkC = (s32) sp30.unkC;
        }
        var_r4 = var_r3_2 + 0x10;
    } else {
        var_r3_3 = sp4C;
        var_r2_3 = var_r3_2;
        if (var_r3_3 != 0) {
            do {
                if (var_r2_3 != 0) {
                    var_r2_3->unk0 = (s32) sp30.unk0;
                    var_r2_3->unk4 = (s32) sp30.unk4;
                    var_r2_3->unk8 = (s32) sp30.unk8;
                    var_r2_3->unkC = (s32) sp30.unkC;
                }
                var_r3_3 -= 1;
                var_r2_3 += 0x10;
            } while (var_r3_3 != 0);
        }
        var_r4 = var_r2_3;
    }
    temp_r2 = temp_r5->unk4;
    temp_r0_2 = temp_r5->unk0;
    var_r1_2 = temp_r0_2;
    if (temp_r0_2 != temp_r2) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r2);
    }
    if (temp_r0_2 != 0) {
        free();
    }
    temp_r5->unk0 = sp50;
    temp_r5->unk4 = var_r4;
    temp_r5->unkC = (void *) (sp50 + var_sb);
}
