s32 func_080D0CD4(u32 arg0) {
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r2;

    if ((arg0 > 0xFFFFU) || (temp_r3 = 0xFF & arg0, temp_r2 = (s32) (0xFF00 & arg0) >> 8, ((u32) (temp_r3 - 0x40) > 0xBCU)) || ((u32) temp_r2 <= 0x80U) || ((u32) temp_r2 > 0xEAU) || ((u32) (temp_r2 - 0xA0) <= 0x3FU)) {
        return -1;
    }
    if ((u32) temp_r2 <= 0x9FU) {
        var_r2 = temp_r2 - 0x81;
    } else {
        var_r2 = temp_r2 - 0xC1;
    }
    return (var_r2 * 0xBD) + (temp_r3 - 0x40);
}
