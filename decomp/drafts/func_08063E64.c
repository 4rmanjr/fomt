u32 GetAffection__C6Animal();                       /* extern */

u32 func_08063E64(void) {
    u32 sp0;
    u32 sp4;
    u32 *var_r3;
    u32 temp_r0;

    sp0 = 0xA;
    temp_r0 = GetAffection__C6Animal() / 25U;
    sp4 = temp_r0;
    var_r3 = &sp0;
    if (temp_r0 < 0xAU) {
        var_r3 = &sp4;
    }
    return *var_r3;
}
