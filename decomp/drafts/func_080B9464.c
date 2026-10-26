s32 func_080B9464(s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r2;

    temp_r1 = ((u32) (arg1 << 0x10) >> 0x18) - 0x78;
    temp_r2 = ((u32) (arg2 << 0x10) >> 0x18) - 0x4C;
    var_r2 = 0x384000 - ((temp_r1 * temp_r1 * 0x640) + (temp_r2 * temp_r2 * 0x900));
    if ((u32) (var_r2 - 1) <= 0x2C6FEU) {
        var_r2 = 0;
    }
    return var_r2;
}
