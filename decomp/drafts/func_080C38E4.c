s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008C28(void *, s32);                       /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E958(s32, void *, s32, s32, ? *, s32, s32); /* extern */
s32 func_0804EC84(u8, ? *, s32);                      /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_08108000;

void func_080C38E4(void *arg0, s32 arg1, ? arg3) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    void *sp38;
    void *sp3C;
    s32 *var_r0;
    s32 temp_r0_3;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r3_2;
    s32 var_sl;
    u8 temp_r0;
    u8 temp_r1_2;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4;

    if (arg1 != 0x3C) {
        return;
    }
    temp_r0 = arg0->unk97B - 1;
    arg0->unk97B = temp_r0;
    if (temp_r0 == 9) {
        func_08008C28(arg0 + 0x810, 0x180);
    }
    func_0804EC84(arg0->unk97B, &spC, 0);
    if ((u32) arg0->unk97B <= 9U) {
        memcpy(&sp10, &gUnk_08108000, 2);
        spC.unk1 = (u8) spC.unk0;
        spC.unk0 = 0x30U;
    }
    sp24.unk0 = 4;
    sp24.unk2 = 2;
    temp_r4 = arg0 + 0xC;
    func_0804E7A0(sp24, temp_r4, 0);
    if ((u32) arg0->unk97B > 9U) {
        sp28.unk0 = 4;
        sp28.unk2 = 2;
        func_0804E958(sp28, temp_r4, 0, 0, &spC, 0, 1);
    } else {
        sp2C.unk0 = 4;
        sp2C.unk2 = 2;
        func_0804E958(sp2C, temp_r4, 0, 0, &spC, 0, 3);
    }
    temp_r4_2 = func_08008910(arg0);
    temp_r0_2 = arg0 + 0x83C;
    func_08008F0C(&sp14, temp_r4, (func_08007D4C(temp_r0_2, temp_r0_2->unk4) << 5) + 0x06010000, 0x100);
    temp_r1 = temp_r4_2->unk4;
    if (temp_r1 != temp_r4_2->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp14.unk0;
            temp_r1->unk4 = (s32) sp14.unk4;
            temp_r1->unk8 = (s32) sp14.unk8;
            temp_r1->unkC = (s32) sp14.unkC;
        }
        temp_r4_2->unk4 = (void *) (temp_r4_2->unk4 + 0x10);
    } else {
        sp38 = temp_r1;
        sp34 = 1;
        temp_r4_3 = (s32) (temp_r1 - temp_r4_2->unk0) >> 4;
        sp30 = temp_r4_3;
        var_r0 = &sp30;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp34;
        }
        temp_r0_3 = temp_r4_3 + *var_r0;
        if (temp_r0_3 != 0) {
            temp_r4_4 = temp_r0_3 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_sl = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp3C = var_r0_2;
        var_r2 = temp_r4_2->unk0;
        var_r3 = var_r0_2;
        if (var_r2 != sp38) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp38);
        }
        if (sp34 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp14.unk0;
                var_r3->unk4 = (s32) sp14.unk4;
                var_r3->unk8 = (s32) sp14.unk8;
                var_r3->unkC = (s32) sp14.unkC;
            }
            var_r4 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp34;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp14.unk0;
                        var_r2_2->unk4 = (s32) sp14.unk4;
                        var_r2_2->unk8 = (s32) sp14.unk8;
                        var_r2_2->unkC = (s32) sp14.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2 = temp_r4_2->unk4;
        temp_r0_4 = temp_r4_2->unk0;
        var_r1 = temp_r0_4;
        if (temp_r0_4 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_4 != 0) {
            free();
        }
        temp_r4_2->unk0 = sp3C;
        temp_r4_2->unk4 = var_r4;
        temp_r4_2->unkC = (void *) (sp3C + var_sl);
    }
    temp_r1_2 = arg0->unk97B;
    if (temp_r1_2 == 0) {
        arg0->unk97F = temp_r1_2;
        arg0->unk89C = 5;
        func_08008C28(arg0 + 0x810, 0x100);
        func_08008B6C(arg0 + 0x818, 0xBB);
    }
}
