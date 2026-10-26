u16 Sqrt(s32);                                      /* extern */
s32 func_080A58EC(s32 *, void *, s32, s32);           /* extern */

void func_080A59BC(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_r3;
    s32 var_r4;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 var_r4_2;
    u32 var_r7;

    var_r7 = arg3;
    func_080A58EC(&sp0, arg0, arg1, arg2);
    sp4 = sp0;
    if (var_r7 == 0) {
        var_r7 = 1;
    }
    temp_r3 = sp4.unk0 - arg0->unkA;
    temp_r2 = sp4.unk2 - arg0->unkE;
    if ((temp_r3 != 0) || (temp_r2 != 0)) {
        temp_r2_2 = (temp_r3 * temp_r3) + (temp_r2 * temp_r2);
        var_r4 = 0;
        if (temp_r2_2 <= 0x3FFFFFFFU) {
            do {
                var_r4 += 1;
            } while ((u32) (temp_r2_2 << (var_r4 * 2)) <= 0x3FFFFFFFU);
        }
        var_r4_2 = (u32) ((s32) Sqrt(temp_r2_2 << (var_r4 * 2)) >> var_r4) / var_r7;
        if (var_r4_2 == 0) {
            var_r4_2 = 1;
        }
        arg0->unk84 = (s32) ((s32) ((sp4.unk0 << 0x10) - arg0->unk8) / (s32) var_r4_2);
        arg0->unk88 = (s32) ((s32) ((sp4.unk2 << 0x10) - arg0->unkC) / (s32) var_r4_2);
        arg0->unk8C = var_r4_2;
        return;
    }
    arg0->unk8C = temp_r2;
}
