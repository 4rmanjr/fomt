s32 free(void *);                                     /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_080CAD18(void *, s32, u16, u32);             /* extern */
s32 func_080CAE60(void *, s32, u16, s32);             /* extern */
s32 func_080CAEEC(void *, u32, s32, s32);             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_08117860;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk1;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[616];
    s32 unk278;
} GenObj;
void func_080CB304(void *arg0, s32 arg1, s32 arg2, u16 arg3, u32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
GenObj spC;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    GenObj *sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *sp40;
    s32 sp44;
    s32 sp48;
    void *sp4C;
    s32 *var_r0;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_ip;
    s32 var_r3_3;
    s32 var_r8;
    s32 var_sb;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;
    GenObj *temp_r5;
    GenObj *temp_r5_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r2;
    GenObj *var_r2_2;
    void *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r3;
    GenObj *var_r3_2;
    void *var_r4;
    void *var_r4_2;

    sp30 = arg0;
    sp48 = arg1;
    temp_r4 = (sp48 * 0xC) + (GenObj *)((u8 *)sp30 + 0x218);
    func_080CAD18(temp_r4, arg2, arg3, arg4);
    temp_r5 = sp30->unk278;
    func_08008F0C(&spC, temp_r4->unk4, (sp48 << 7) + 0x06000680, 0x80);
    temp_r1 = temp_r5->unk4;
    if (temp_r1 != temp_r5->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) spC;
            temp_r1->unk4 = (s32) spC.unk4;
            temp_r1->unk8 = (s32) spC.unk8;
            temp_r1->unkC = (s32) spC.unkC;
        }
        temp_r5->unk4 = (void *) (temp_r5->unk4 + 0x10);
        sp38 = sp48 * 2;
        sp44 = sp48 << 5;
        sp3C = sp48 * 4;
        sp40 = &sp0 + 0x2C;
        sp34 = sp48 + 3;
    } else {
        sp4C = temp_r1;
        sp20 = 1;
        temp_r4_2 = (s32) (sp4C - temp_r5->unk0) >> 4;
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
        var_r2 = temp_r5->unk0;
        var_r3 = var_r0_2;
        sp38 = sp48 * 2;
        sp44 = sp48 << 5;
        sp3C = sp48 * 4;
        sp40 = &sp0 + 0x2C;
        sp34 = sp48 + 3;
        if (var_r2 != sp4C) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp4C);
        }
        if (sp20 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) spC;
                var_r3->unk4 = (s32) spC.unk4;
                var_r3->unk8 = (s32) spC.unk8;
                var_r3->unkC = (s32) spC.unkC;
            }
            var_r4 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_ip = sp20;
            var_r2_2 = var_r3;
            if (sp20 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) spC;
                        var_r2_2->unk4 = (s32) spC.unk4;
                        var_r2_2->unk8 = (s32) spC.unk8;
                        var_r2_2->unkC = (s32) spC.unkC;
                    }
                    var_ip -= 1;
                    var_r2_2 += 0x10;
                } while (var_ip != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r5->unk4;
        temp_r1_2 = temp_r5->unk0;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        temp_r5->unk0 = var_r0_2;
        temp_r5->unk4 = var_r4;
        temp_r5->unkC = (void *) (var_sb + var_r0_2);
    }
    temp_r5_2 = sp30->unk278;
    func_08008F0C(&spC, (((sp38 + sp48) * 4) + (GenObj *)((u8 *)sp30 + 0x218))->unk8, sp44 + 0x05000060, 0x20);
    temp_r1_3 = temp_r5_2->unk4;
    if (temp_r1_3 != temp_r5_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) spC;
            temp_r1_3->unk4 = (s32) spC.unk4;
            temp_r1_3->unk8 = (s32) spC.unk8;
            temp_r1_3->unkC = (s32) spC.unkC;
        }
        temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
    } else {
        sp28 = 1;
        temp_r4_4 = (s32) (temp_r1_3 - temp_r5_2->unk0) >> 4;
        sp24 = temp_r4_4;
        var_r0_4 = &sp24;
        if ((u32) temp_r4_4 < 1U) {
            var_r0_4 = &sp28;
        }
        temp_r0_2 = temp_r4_4 + *var_r0_4;
        if (temp_r0_2 != 0) {
            temp_r4_5 = temp_r0_2 * 0x10;
            var_r0_5 = malloc(temp_r4_5);
            var_r8 = temp_r4_5;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_5 = 0;
            var_r8 = 0;
        }
        sp4C = var_r0_5;
        var_r2_3 = temp_r5_2->unk0;
        var_r3_2 = var_r0_5;
        if (var_r2_3 != temp_r1_3) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_3->unk0;
                    var_r3_2->unk4 = (s32) var_r2_3->unk4;
                    var_r3_2->unk8 = (s32) var_r2_3->unk8;
                    var_r3_2->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_3 != temp_r1_3);
        }
        if (sp28 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) spC;
                var_r3_2->unk4 = (s32) spC.unk4;
                var_r3_2->unk8 = (s32) spC.unk8;
                var_r3_2->unkC = (s32) spC.unkC;
            }
            var_r4_2 = (GenObj *)((u8 *)var_r3_2 + 0x10);
        } else {
            var_r3_3 = sp28;
            var_r2_4 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) spC;
                        var_r2_4->unk4 = (s32) spC.unk4;
                        var_r2_4->unk8 = (s32) spC.unk8;
                        var_r2_4->unkC = (s32) spC.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_2 = temp_r5_2->unk4;
        temp_r1_4 = temp_r5_2->unk0;
        var_r0_6 = temp_r1_4;
        if (temp_r1_4 != temp_r2_2) {
            do {
                var_r0_6 += 0x10;
            } while (var_r0_6 != temp_r2_2);
        }
        if (temp_r1_4 != 0) {
            free(temp_r1_4);
        }
        temp_r5_2->unk0 = sp4C;
        temp_r5_2->unk4 = var_r4_2;
        temp_r5_2->unkC = (void *) (sp4C + var_r8);
    }
    sp2C = *((u8 *)sp3C + &gUnk_08117860);
    sp0 = 2;
    sp4 = (s32) (u16) sp34;
    sp8 = 0x20;
    func_080CAE60(sp30, (sp40->unk1 << 6) + ((sp2C * 2) + 0x0600F000), (u16) (sp3C + 0x34), 2);
    sp0 = 1;
    sp4 = 0;
    sp8 = 0x20;
    func_080CAE60(sp30, (sp40->unk1 << 6) + ((sp2C * 2) + 0x0600F080), 0x54U, 2);
    if (arg4 > 1U) {
        sp0 = 0;
        sp4 = 0x20;
        func_080CAEEC(sp30, arg4, (sp40->unk1 << 6) + ((sp40->unk0 * 2) + 0x0600F082), 0x20);
    }
}
