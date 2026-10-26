u32 func_08085EC4(u32 arg1) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;

    sp0 = 0xA;
    temp_r0 = arg1 / 25U;
    sp4 = temp_r0;
    var_r2 = &sp0;
    if (temp_r0 < 0xAU) {
        var_r2 = &sp4;
    }
    return *var_r2;
}
