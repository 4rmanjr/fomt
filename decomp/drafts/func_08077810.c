s32 Unpack(s32 *, s32);                                 /* extern */
s16 *func_08008918(s32);                            /* extern */
s32 func_08008E64(s32 *, s32, s32);                     /* extern */
s32 func_08008EB8(s32, s32 *, s32);                     /* extern */
extern s32 gUnk_0874E648;
extern s32 gUnk_0874EB40;
extern s32 gUnk_0874ECCC;

void func_08077810(s32 arg0) {
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s16 *var_r1;
    s16 *var_r2_2;
    s16 var_r3;
    s32 var_r2;
    s32 var_r5;
    u16 temp_r4;
    u16 var_r6;

    temp_r0 = func_08008918();
    unksp0 = 0;
    temp_r0->unk14 = 0;
    temp_r0_2 = func_08008918(arg0);
    unksp0 = 0;
    temp_r0_2->unk16 = 0;
    temp_r0_3 = func_08008918(arg0);
    unksp0 = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = func_08008918(arg0);
    unksp0 = 0;
    temp_r0_4->unk1A = 0;
    temp_r0_5 = func_08008918(arg0);
    unksp0 = 0;
    temp_r0_5->unk1C = 0;
    temp_r0_6 = func_08008918(arg0);
    unksp0 = 0;
    temp_r0_6->unk1E = 0;
    func_08008EB8(0, (s32 *)0x06007FE0, 0x20);
    func_08008EB8(0, (s32 *)0x0600FFE0, 0x20);
    func_08008EB8(-1, (s32 *)0x0600C800, 0x800);
    func_08008EB8(-1, (s32 *)0x0600F000, 0x800);
    temp_r0_7 = func_08008918(arg0);
    unksp0 = 0x240;
    *temp_r0_7 = 0x240;
    temp_r0_8 = func_08008918(arg0);
    unksp0 = 0x994A;
    temp_r0_8->unkC = 0x994A;
    temp_r0_9 = func_08008918(arg0);
    unksp0 = 0x1E42;
    temp_r0_9->unkA = 0x1E42;
    Unpack(&gUnk_0874E648, 0x06008000);
    func_08008E64(&gUnk_0874EB40, 0x05000000, 0x20);
    Unpack(&gUnk_0874ECCC, 0x0600C800);
    *(s16 *)0x05000000 = 0;
    (void *)0x05000042->unk0 = 0x7BDE;
    (void *)0x05000042->unk2 = 0x3DEF;
    func_08008EB8(-1, &unksp4, 0x800);
    var_r6 = 0x2060;
    var_r2 = 0;
    do {
        var_r5 = 0;
        temp_r4 = var_r6 + 0x38;
        var_r3 = var_r6 + 0x1C;
        var_r2_2 = (((var_r2 * 2) + 1) << 6) + &unksp6;
        var_r1 = (var_r2 << 7) + &unksp6;
loop_2:
        *var_r1 = var_r6 + var_r5;
        *var_r2_2 = var_r3;
        var_r3 += 1;
        var_r2_2 += 2;
        var_r1 += 2;
        var_r5 += 1;
        if (var_r5 <= 0x1B) {
            goto loop_2;
        }
        var_r6 = temp_r4;
        var_r2 += 1;
    } while (var_r2 <= 0xF);
    func_08008E64(&unksp4, 0x0600F000, 0x800);
}
