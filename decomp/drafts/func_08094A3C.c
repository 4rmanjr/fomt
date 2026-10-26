s32 func_03000C08(s32 *, void *);                     /* extern */

void func_08094A3C(s8 *arg0, u8 *arg1) {
    s32 *temp_r1;
    s32 *var_r4;
    u32 var_r6;
    u8 temp_r2;
    void *temp_r0;
    void *temp_r3;
    void *temp_r5;

    var_r6 = 0;
    do {
        temp_r1 = (var_r6 * 0x204) + 4 + arg0;
        var_r4 = temp_r1 + 4;
        temp_r5 = temp_r1 + ((*temp_r1 * 4) + 4);
        func_03000C08(var_r4, temp_r5);
        var_r6 += 1;
        if (var_r4 != temp_r5) {
            do {
                temp_r3 = ((*var_r4 & 0x7F) * 8) + (arg0 + 0x814);
                temp_r2 = *arg1;
                if ((u32) temp_r2 <= 0x7FU) {
                    temp_r0 = arg1 + ((temp_r2 * 8) + 4);
                    temp_r0->unk0 = (s32) temp_r3->unk0;
                    temp_r0->unk4 = (u16) temp_r3->unk4;
                    *arg1 = temp_r2 + 1;
                }
                var_r4 += 4;
            } while (var_r4 != temp_r5);
        }
    } while (var_r6 <= 3U);
    *arg0 = 0;
}
