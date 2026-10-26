void func_080A0A1C(u8 *arg0, s32 arg1) {
    u32 sp0;
    u32 sp4;
    u32 *var_r1;
    u32 temp_r2;
    u8 temp_r3;

    temp_r3 = *arg0;
    temp_r2 = ((u32) (temp_r3 << 0x1A) >> 0x1A) + arg1;
    sp0 = temp_r2;
    sp4 = 0x3F;
    var_r1 = &sp0;
    if (temp_r2 > 0x3FU) {
        var_r1 = &sp4;
    }
    *arg0 = (-0x40 & temp_r3) | (*var_r1 & 0x3F);
}
