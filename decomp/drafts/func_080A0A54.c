void func_080A0A54(u16 *arg0, s32 arg1) {
    u32 sp0;
    u32 sp4;
    u16 temp_r3;
    u32 *var_r0;
    u32 temp_r2;

    temp_r3 = *arg0;
    temp_r2 = ((u32) (temp_r3 << 0x13) >> 0x19) + arg1;
    sp0 = temp_r2;
    sp4 = 0x7F;
    var_r0 = &sp0;
    if (temp_r2 > 0x7FU) {
        var_r0 = &sp4;
    }
    *arg0 = (0xFFFFE03F & temp_r3) | ((*var_r0 & 0x7F) << 6);
}
