s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */
extern ? *gUnk_080FB1E4;
extern ? gUnk_08743058;
extern ? gUnk_08747A14;

void func_0805FBB8(s32 arg0) {
    s16 sp0;
    ? **var_r5;
    ? *temp_r0_9;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s32 var_r4;
    s32 var_r6;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(0x10661066, 0x0600E000, 0x800);
    func_08008EB8(0x10661066, 0x0600E800, 0x800);
    func_08008EB8(0x10661066, 0x0600F000, 0x800);
    Unpack(&gUnk_08743058, 0x06000000);
    func_08008E64(&gUnk_08747A14, 0x05000000, 0x40);
    *(s16 *)0x05000000 = 0x7FFF;
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1C40;
    *temp_r0 = 0x1C40;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1E43;
    temp_r0_2->unkE = 0x1E43;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x1D42;
    temp_r0_3->unkC = 0x1D42;
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0x1C41;
    temp_r0_4->unkA = 0x1C41;
    temp_r0_5 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_5->unk18 = 0;
    temp_r0_6 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_6->unk1A = 0;
    temp_r0_7 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_7->unk1C = 0;
    temp_r0_8 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_8->unk1E = 0;
    var_r6 = arg0 + 0x20;
    var_r5 = &gUnk_080FB1E4;
    var_r4 = 0x13;
    do {
        temp_r0_9 = *var_r5;
        var_r5 += 4;
        Unpack(temp_r0_9, var_r6);
        var_r6 += 0x500;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
