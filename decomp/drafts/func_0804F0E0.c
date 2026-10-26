s32 func_0804E7A0(s32, s32, s32);                     /* extern */

void func_0804F0E0(void *arg0) {
    s32 sp0;
    void *sp4;
    s32 *temp_r6;
    s32 temp_r1;
    s32 var_r1;
    s32 var_r7;
    void *temp_r5;
    void *var_r3;

    var_r3 = arg0;
    var_r1 = 0;
    do {
        var_r7 = 0;
        temp_r6 = (var_r1 * 4) + var_r3 + 8;
loop_2:
        temp_r5 = *temp_r6 + (var_r7 * 0x10);
        sp0.unk0 = 4;
        sp0.unk2 = 2;
        sp4 = var_r3;
        func_0804E7A0(sp0, temp_r5->unk0 + 4, 0);
        temp_r1 = (temp_r5 + 4)->unk4;
        temp_r5->unkC = (s8) ((u32) ((0 - temp_r1) | temp_r1) >> 0x1F);
        var_r7 += 1;
        if (var_r7 <= 6) {
            goto loop_2;
        }
        var_r1 += 1;
    } while (var_r1 <= 2);
    var_r3->unk16 = 0;
    var_r3->unk14 = 0;
    var_r3->unk19 = 1;
    var_r3->unk1A = 1;
    var_r3->unk1B = 0;
}
