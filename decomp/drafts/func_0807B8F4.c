u32 GetAffection__C6Animal(s32);                    /* extern */

u32 func_0807B8F4(s32 arg1) {
    u32 sp0;
    u32 sp4;
    u32 *var_r3;
    u32 temp_r0;

    sp0 = 0xA;
    temp_r0 = GetAffection__C6Animal(arg1) / 25U;
    sp4 = temp_r0;
    var_r3 = &sp0;
    if (temp_r0 < 0xAU) {
        var_r3 = &sp4;
    }
    return *var_r3;
}
