s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008E64(s32 *, s32, s32);                   /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_0804E5AC(s32, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_08051320(s32, s32, s32, s32);                /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern ? gUnk_08101008;
extern s32 gUnk_08750C8C;

void func_0809800C(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s16 spC;
    s32 sp10;
    s32 *sp18;
    s32 *sp20;
    s32 sp28;
s32 sp30;
s32 sp54;
s32 sp94;
s32 sp98;
    s32 *sp9C;
    s32 *spA0;
    s32 *spA4;
    s32 *spA8;
    void *spAC;
    s32 *spB0;
    s32 *spB4;
    s16 *temp_r0;
    s16 *temp_r0_10;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s16 *var_r1_2;
    s16 *var_r2;
    s16 var_r3;
    s32 temp_r0_11;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5_2;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u16 var_r5;
    u8 temp_r4_2;
    void **temp_r1;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_16;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r7;

    temp_r0 = func_08008918();
    spC = 0;
    temp_r0->unk14 = 0;
    temp_r0_2 = func_08008918(arg0);
    spC = 0;
    temp_r0_2->unk16 = 0;
    temp_r0_3 = func_08008918(arg0);
    spC = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = func_08008918(arg0);
    spC = 0;
    temp_r0_4->unk1A = 0;
    temp_r0_5 = func_08008918(arg0);
    spC = 0;
    temp_r0_5->unk1C = 0;
    temp_r0_6 = func_08008918(arg0);
    spC = 0;
    temp_r0_6->unk1E = 0;
    func_08008EB8(0, (void *)0x06000000, 0x8000);
    func_08008EB8(-1, (void *)0x0600E000, 0x800);
    func_08008EB8(-1, (void *)0x0600F800, 0x800);
    func_08008EB8(-1, (void *)0x0600F000, 0x800);
    temp_r0_7 = func_08008918(arg0);
    spC = 0x1E40;
    *temp_r0_7 = 0x1E40;
    temp_r0_8 = func_08008918(arg0);
    spC = 0x1C43;
    temp_r0_8->unkE = 0x1C43;
    temp_r0_9 = func_08008918(arg0);
    spC = 0x1F41;
    temp_r0_9->unkC = 0x1F41;
    temp_r0_10 = func_08008918(arg0);
    spC = 0x1E42;
    temp_r0_10->unkA = 0x1E42;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, (void *)0x0600E000, 0x800);
    sp0 = 3;
    sp4 = 0;
    sp8 = 0;
    func_08051320(0x0600F800, 0, 0, 0x20);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    *(s16 *)0x05000042 = 0;
    (void *)0x05000040->unk4 = 0x4218;
    func_08008EB8(-1, arg0 + 0x2BD0, 0x800);
    var_r5 = 0x2100;
    var_r1 = 0;
    spA4 = &sp0 + 0x10;
    spA8 = &sp0 + 0x18;
    spB0 = &sp0 + 0x20;
    spB4 = &sp0 + 0x28;
    spA0 = arg0 + 0x15C;
    spAC = arg0 + 0xC8;
    temp_r7 = arg0 + 0x2BD4;
    do {
        var_r4 = 0;
        temp_r0_11 = var_r1 * 2;
        var_r3 = var_r5 + 0x14;
        var_r2 = ((temp_r0_11 + 5) << 6) + temp_r7;
        var_r1_2 = ((temp_r0_11 + 4) << 6) + temp_r7;
loop_2:
        *var_r1_2 = var_r5 + var_r4;
        *var_r2 = var_r3;
        var_r3 += 1;
        var_r2 += 2;
        var_r1_2 += 2;
        var_r4 += 1;
        if (var_r4 <= 0x13) {
            goto loop_2;
        }
        var_r5 += 0x28;
        var_r1 += 1;
    } while (var_r1 <= 7);
    func_08008E64(arg0 + 0x2BD0, 0x0600F000, 0x800);
    temp_r0_12 = arg0 + 0x310;
    func_08008E64(&gUnk_08750C8C, (func_08007D4C(temp_r0_12, temp_r0_12->unk4) << 5) + 0x06010000, 0x1C0);
    sp10 = 0;
    spA4->unk4 = 0;
    sp18 = 0;
    spA8->unk4 = 0U;
    sp20 = 0;
    spB0->unk4 = 0U;
    sp28 = 0;
    spB4->unk4 = 0;
    temp_r1 = arg0->unk158;
    (*temp_r1)->unk10(&sp30, temp_r1, *(*spA0 + ((arg0 + 0x158)->unkC * 4)));
    memcpy(&sp30, &sp30, 0x20);
    temp_r4 = &sp30 + 0xC;
    spA4->unk0 = sp30.unk0;
    spA4->unk4 = (s32) sp30.unk4;
    spA4->unk8 = (s32) sp30.unk8;
    temp_r5 = spA4 + 0xC;
    spA4->unkC = (s32) sp30.unkC;
    temp_r5->unk4 = (s32) temp_r4->unk4;
    temp_r5->unk8 = (s32) temp_r4->unk8;
    temp_r5->unkC = (s32) temp_r4->unkC;
    (temp_r5 + 0xC)->unk4 = (s32) (temp_r4 + 0xC)->unk4;
    temp_r0_13 = arg0 + 0x2E8;
    temp_r1_2 = (func_080074C0(temp_r0_13, temp_r0_13->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (sp20 != 0) {
        var_r2_2 = spB0->unk4;
    }
    func_08008E64(sp20, temp_r1_2, (s32) var_r2_2);
    func_0805E790(&sp30, spAC, 0);
    temp_r0_14 = &sp30 + 0xC;
    spA4->unk0 = sp30.unk0;
    spA4->unk4 = (s32) sp30.unk4;
    spA4->unk8 = (s32) sp30.unk8;
    temp_r1_3 = spA4 + 0xC;
    spA4->unkC = (s32) sp30.unkC;
    temp_r1_3->unk4 = (s32) temp_r0_14->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_14->unk8;
    temp_r1_3->unkC = (s32) temp_r0_14->unkC;
    (temp_r1_3 + 0xC)->unk4 = (s32) (temp_r0_14 + 0xC)->unk4;
    temp_r0_15 = arg0 + 0x2F8;
    temp_r1_4 = (func_080074C0(temp_r0_15, temp_r0_15->unk4) << 5) + 0x05000200;
    var_r2_3 = 0;
    if (sp20 != 0) {
        var_r2_3 = spB0->unk4;
    }
    func_08008E64(sp20, temp_r1_4, (s32) var_r2_3);
    temp_r0_16 = arg0 + 0x2F0;
    temp_r1_5 = (func_08007D4C(temp_r0_16, temp_r0_16->unk4) << 5) + 0x06010000;
    var_r2_4 = 0;
    if (sp18 != 0) {
        var_r2_4 = spA8->unk4;
    }
    func_08008E64(sp18, temp_r1_5, (s32) var_r2_4);
    func_08008EB8(0, (func_08007D4C(arg0 + 0x300, arg0->unk304) << 5) + 0x06010000, 0x700);
    var_r5_2 = 0;
    sp9C = &sp0 + 0x54;
    do {
        temp_r4_2 = *(var_r5_2 + &gUnk_08101008);
        if (temp_r4_2 != 0) {
            sp94.unk0 = 1;
            sp94.unk2 = 2;
            func_0804E7A0((s32) sp94.unk0, &sp54, 0);
            sp98.unk0 = 1;
            sp98.unk2 = 2;
            sp0 = (s32) temp_r4_2;
            sp4 = 0;
            sp8 = 1;
            func_0804E5AC((s32) sp98.unk0, &sp54, 0, 0);
            func_08008E64(sp9C, ((func_08007D4C(arg0 + 0x300, arg0->unk304) + (var_r5_2 * 2)) << 5) + 0x06010000, 0x40);
        }
        var_r5_2 += 1;
    } while (var_r5_2 <= 0x15);
    temp_r4_3 = arg0 + 0x308;
    *(0x05000200 + (func_080074C0(temp_r4_3, temp_r4_3->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4_3, temp_r4_3->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4_3, temp_r4_3->unk4) << 5)) = 0x4218;
}
