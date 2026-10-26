u32 GetAge__C6Animal(s32);                          /* extern */
s32 GetName__C6Animal(s32);                         /* extern */
s32 IsFestivalWinner__C6Animal(s32);                /* extern */
s32 free(void *);                                     /* extern */
s32 func_0804E9F4(s32, u16, s32, s32);                /* extern */
s32 func_0804EDB4(u32, s32, s32, s32);                /* extern */
s32 func_08063E04(void *, s32, s32);                /* extern */
u32 func_08063E64(s32);                             /* extern */
u16 func_08063E8C(s32);                             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

void func_08063EB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
s32 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    u8 sp38;
    void *sp3C;
    s32 sp40;
    s32 sp44;
    s32 *sp48;
    void *sp4C;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    u8 *sp60;                                       /* compiler-managed */
    void *sp64;
    void *sp68;
    s16 temp_r2;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5;
    s32 temp_r6_3;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r5_2;
    s32 var_r5_4;
    s32 var_sb;
    s32 var_sb_2;
    u16 temp_r1_5;
    u16 temp_r4_4;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r4_8;
    u32 var_r2_5;
    u32 var_r3_5;
    u32 var_r4;
    u32 var_r5_5;
    u8 temp_r0_5;
    u8 temp_r4_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r6;
    void *temp_r6_2;
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
    void *var_r5;
    void *var_r5_3;

    sp3C = arg0;
    sp40 = arg1;
    sp44 = arg2;
    temp_r4 = sp40 * 5;
    temp_r5 = temp_r4 + 5;
    temp_r2 = temp_r5 * 8;
    sp8.unk0 = temp_r2;
    spC = 8;
    sp10 = arg3;
    sp14 = arg4;
    temp_r6 = sp3C + 0x594;
    sp48 = &sp0 + 8;
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp8.unk0;
            temp_r1->unk4 = (s32) sp8.unk4;
            temp_r1->unk8 = (s32) sp8.unk8;
            temp_r1->unkC = (s32) sp8.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        sp58 = (s32) temp_r2;
        sp54 = temp_r4 + 7;
        sp5C = temp_r5 << 6;
        sp60 = (u8 *) (&sp0 + 0x38);
    } else {
        sp64 = temp_r1;
        sp2C = 1;
        temp_r4_2 = (s32) (sp64 - sp3C->unk594) >> 4;
        sp28 = temp_r4_2;
        var_r0 = &sp28;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &sp2C;
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
        sp68 = var_r0_2;
        var_r2 = sp3C->unk594;
        var_r3 = var_r0_2;
        sp58 = temp_r5 * 8;
        sp54 = temp_r5 + 2;
        sp5C = temp_r5 << 6;
        sp60 = &sp0 + 0x38;
        if (var_r2 != sp64) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp64);
        }
        if (sp2C == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp48->unk0;
                var_r3->unk4 = (s32) sp48->unk4;
                var_r3->unk8 = (s32) sp48->unk8;
                var_r3->unkC = (s32) sp48->unkC;
            }
            var_r5 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp2C;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp48->unk0;
                        var_r2_2->unk4 = (s32) sp48->unk4;
                        var_r2_2->unk8 = (s32) sp48->unk8;
                        var_r2_2->unkC = (s32) sp48->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_2 = temp_r6->unk4;
        temp_r1_2 = sp3C->unk594;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2_2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2_2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        sp3C->unk594 = sp68;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp68 + var_sb);
    }
    sp4C = sp3C->unk4;
    if ((IsFestivalWinner__C6Animal(sp44) << 0x18) != 0) {
        sp0 = 1;
        sp4 = 0x20;
        func_0804E9F4(sp4C->unk18 + ((temp_r5 - 2) << 6) + 2, 0xA0U, 2, 2);
    }
    temp_r0_2 = func_08063E64(sp44);
    var_r4 = 0;
    if (temp_r0_2 > 0U) {
        var_r5_2 = 0xA;
        do {
            sp0 = 2;
            sp4 = 0x20;
            func_0804E9F4(sp4C->unk18 + (sp54 << 6) + var_r5_2, 0xA4U, 1, 1);
            var_r5_2 += 2;
            var_r4 += 1;
        } while (var_r4 < temp_r0_2);
    }
    sp18 = (u16) sp58;
    sp18.unk4 = func_08063E04(sp3C, sp40, GetName__C6Animal(sp44));
    temp_r4_4 = ((3 & sp40) * 0x18) + 0x180;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(sp4C->unk18 + sp5C + 6, temp_r4_4, 0xC, 2);
    sp18.unk8 = (s32) ((temp_r4_4 << 5) + 0x06000000);
    sp18.unkC = 0x300;
    temp_r6_2 = sp3C + 0x5A4;
    temp_r1_3 = temp_r6_2->unk4;
    if (temp_r1_3 != temp_r6_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp18;
            temp_r1_3->unk4 = (s32) sp18.unk4;
            temp_r1_3->unk8 = (s32) sp18.unk8;
            temp_r1_3->unkC = sp24;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp34 = 1;
        temp_r4_5 = (s32) (temp_r1_3 - sp3C->unk5A4) >> 4;
        sp30 = temp_r4_5;
        var_r0_4 = &sp30;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_4 = &sp34;
        }
        temp_r0_3 = temp_r4_5 + *var_r0_4;
        if (temp_r0_3 != 0) {
            temp_r4_6 = temp_r0_3 * 0x10;
            var_r0_5 = malloc(temp_r4_6);
            var_sb_2 = temp_r4_6;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_5 = 0;
            var_sb_2 = 0;
        }
        sp68 = var_r0_5;
        var_r2_3 = sp3C->unk5A4;
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
        if (sp34 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp18;
                var_r3_3->unk4 = (s32) sp18.unk4;
                var_r3_3->unk8 = (s32) sp18.unk8;
                var_r3_3->unkC = sp24;
            }
            var_r5_3 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = sp34;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp18;
                        var_r2_4->unk4 = (s32) sp18.unk4;
                        var_r2_4->unk8 = (s32) sp18.unk8;
                        var_r2_4->unkC = sp24;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_3 = var_r2_4;
        }
        temp_r2_3 = temp_r6_2->unk4;
        temp_r1_4 = sp3C->unk5A4;
        var_r0_6 = temp_r1_4;
        if (temp_r1_4 != temp_r2_3) {
            do {
                var_r0_6 += 0x10;
            } while (var_r0_6 != temp_r2_3);
        }
        if (temp_r1_4 != 0) {
            free(temp_r1_4);
        }
        sp3C->unk5A4 = sp68;
        temp_r6_2->unk4 = var_r5_3;
        temp_r6_2->unkC = (void *) (sp68 + var_sb_2);
    }
    temp_r4_7 = sp4C->unk18 + sp5C + 0x20;
    temp_r1_5 = func_08063E8C(sp44);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(temp_r4_7, temp_r1_5, 8, 2);
    temp_r0_4 = GetAge__C6Animal(sp44) / 120U;
    sp0 = 0x20;
    func_0804EDB4(temp_r0_4, sp4C->unk18 + sp5C + 0x34, 0x120, 0);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(sp4C->unk18 + sp5C + 0x36, 0x98U, 2, 2);
    var_r5_4 = 0;
    if ((u32) ((u32) (sp3C->unk58C->unk12 << 0x1B) >> 0x1B) <= 5U) {
        var_r5_4 = 1;
    }
    temp_r4_8 = GetAge__C6Animal(sp44) + var_r5_4;
    *sp60 = (u8) sp3C->unk58C->unk11;
    if (temp_r4_8 <= 0x1DU) {
        var_r5_5 = temp_r4_8;
        var_r3_5 = 0;
    } else {
        var_r5_5 = temp_r4_8 % 30U;
        var_r3_5 = temp_r4_8 / 30U;
    }
    temp_r0_5 = sp38;
    var_r2_5 = ((u32) (temp_r0_5 << 0x19) >> 0x1B) - (var_r5_5 - 0x1E);
    if (var_r2_5 <= 0x1DU) {
        var_r3_5 += 1;
    } else {
        var_r2_5 -= 0x1E;
    }
    temp_r4_9 = (((-4 & sp38) | ((((u32) (temp_r0_5 << 0x1E) >> 0x1E) - var_r3_5) & 3)) & ~0x7C) | ((var_r2_5 & 0x1F) * 4);
    sp38 = temp_r4_9;
    temp_r6_3 = sp54 << 6;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(sp4C->unk18 + temp_r6_3 + 0x22, (u16) ((u32) ((((u32) (temp_r4_9 << 0x1E) >> 0x1E) * 0xC0000) + 0x680000) >> 0x10), 6, 2);
    sp0 = 0x20;
    func_0804EDB4(((u32) (temp_r4_9 << 0x19) >> 0x1B) + 1, sp4C->unk18 + temp_r6_3 + 0x34, 0x120, 0);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(sp4C->unk18 + temp_r6_3 + 0x36, 0x9CU, 2, 2);
}
