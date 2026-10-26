s32 func_080A47B4(s32 *, s32);                          /* extern */
s32 func_080A4A00(s32 *, s32, u16, void **);            /* extern */
s32 func_080DCD2C(void *, ? *);                       /* extern */
s32 rand();                                         /* extern */
extern ? gUnk_080F1672;
extern ? gUnk_080F1678;
extern ? gUnk_080F1684;

u32 *func_080DCB7C(u32 *arg0, void **arg1, u8 arg2) {
    s32 sp0;
    s32 sp4;
    s8 sp8;
s32 spC;
    s32 sp5C;
    u32 sp60;
    s8 *sp64;
    s8 *sp68;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r6;
    s32 temp_sb;
    u16 var_r2;
    u16 var_r2_2;
    u32 temp_r1_2;
    u32 temp_r1_4;
    u32 temp_r2;
    u32 temp_r5;
    u8 temp_r4;
    void *temp_r0;
    void *temp_r0_2;

    sp5C = (s32) arg2;
    *arg0 = 0;
    temp_r1 = (*arg1)->unk7C(arg1);
    if (sp5C != 0) {
        var_r2 = gUnk_080F1684.unk2;
    } else {
        var_r2 = gUnk_080F1684.unk0;
    }
    sp0 = 6;
    sp4 = 0x1D;
    sp8 = 0;
    func_080A4A00(&spC, temp_r1, var_r2, arg1);
    spC.unk40 = 0x640000;
    spC.unk44 = 0x12C;
    spC.unk48 = 0x2666;
    spC.unk4C = (u8) gUnk_080F1684.unk4;
    spC.unk4D = 1;
    temp_r1_2 = *arg0;
    sp68 = &sp8;
    if (temp_r1_2 <= 4U) {
        temp_r0 = (temp_r1_2 * 0x50) + 4 + arg0;
        if (temp_r0 != 0) {
            func_080DCD2C(temp_r0, &spC);
        }
        *arg0 += 1;
    }
    func_080A47B4(&spC, 2);
    sp60 = 0;
    sp64 = &sp0 + 0x59;
    do {
        temp_r6 = rand() % 3;
        temp_r5 = (u32) rand() % 480U;
        temp_r4 = *((rand() % 3) + &gUnk_080F1672);
        temp_sb = *(((rand() % 3) * 4) + &gUnk_080F1678);
        temp_r1_3 = (*arg1)->unk7C(arg1);
        if (sp5C != 0) {
            var_r2_2 = ((temp_r6 * 8) + &gUnk_080F1684)->unk2;
        } else {
            var_r2_2 = *((temp_r6 * 8) + &gUnk_080F1684);
        }
        sp0 = 6;
        sp4 = 0x1D;
        *sp68 = 0;
        func_080A4A00(&spC, temp_r1_3, var_r2_2, arg1);
        spC.unk40 = (s32) (temp_r5 << 0x10);
        spC.unk44 = (s16) temp_r4;
        spC.unk48 = temp_sb;
        spC.unk4C = (u8) ((temp_r6 * 8) + &gUnk_080F1684)->unk4;
        *sp64 = 1;
        temp_r1_4 = *arg0;
        if (temp_r1_4 <= 4U) {
            temp_r0_2 = (temp_r1_4 * 0x50) + 4 + arg0;
            if (temp_r0_2 != 0) {
                func_080DCD2C(temp_r0_2, &spC);
            }
            *arg0 += 1;
        }
        func_080A47B4(&spC, 2);
        temp_r2 = sp60 + 1;
        sp60 = temp_r2;
    } while (temp_r2 <= 3U);
    return arg0;
}
