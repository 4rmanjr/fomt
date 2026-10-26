/* Warning: missing "bx $lr" in last block of func_080B0BB8 (.L080B0BF6.1). */

? .L080B1B1C(void *);                               /* extern */
s32 func_080088DC(void *);                          /* extern */
s16 *func_08008918(void *);                         /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_0800894C(void *);                          /* extern */
s32 func_08050D3C(s32, s32, s32, s16 *);              /* extern */
s32 func_08050E50(s32, u16);                          /* extern */
u16 func_080B3A10(void *);                          /* extern */
extern ? gUnk_08107588;
extern ? gUnk_0810759C;

void func_080B0BB8(void *arg0) {
    s32 sp0;
    s32 sp4;
    void *sp8;
    s16 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 *spA8;
    s32 *spAC;
    s32 *spB0;
    s32 *spB4;
    s16 *temp_r0;
    s16 *temp_r5;
    s32 *var_r3;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_sl;

    sp68 = 0;
    sp6C = 0;
    sp70 = 0;
    var_sl = 0;
    var_r3 = &sp0 + 0x20;
    spA8 = var_r3;
    spAC = &sp0 + 0x34;
    spB0 = &sp0 + 0x3C;
    spB4 = &sp0 + 0x50;
    do {
        *var_r3 = 0;
        var_r3 += 4;
        *(spAC + var_sl) = 0;
        var_sl += 1;
    } while (var_sl <= 4);
    sp74 = 0;
    sp78 = 0;
    spB0->unk0 = gUnk_08107588.unk0;
    spB0->unk4 = (s32) gUnk_08107588.unk4;
    spB0->unk8 = (s32) gUnk_08107588.unk8;
    spB0->unkC = (s32) gUnk_08107588.unkC;
    (spB0 + 0xC)->unk4 = (s32) (&gUnk_08107588 + 0xC)->unk4;
    spB4->unk0 = gUnk_0810759C.unk0;
    spB4->unk4 = (s32) gUnk_0810759C.unk4;
    spB4->unk8 = (s32) gUnk_0810759C.unk8;
    spB4->unkC = (s32) gUnk_0810759C.unkC;
    (spB4 + 0xC)->unk4 = (s32) (&gUnk_0810759C + 0xC)->unk4;
    sp7C = 0;
    sp80 = 0;
    sp84 = 0;
    sp88 = 0;
    sp8C = 0;
    sp90 = 0;
    temp_r0 = func_08008918(arg0);
    sp64 = 0x1740;
    *temp_r0 = 0x1740;
    temp_r0_2 = arg0->unk418;
    sp98 = temp_r0_2;
    sp9C = func_080088DC(arg0);
    spA0 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0_3 = func_0800894C(arg0);
    sp0 = temp_r4;
    sp4 = temp_r0_3;
    sp8 = arg0 + 0x810;
    func_08050D3C(temp_r0_2, sp9C, spA0, temp_r5);
    temp_r4_2 = arg0->unk418;
    func_08050E50(temp_r4_2, func_080B3A10(arg0));
    .L080B1B1C(arg0 + 0x838);
}
