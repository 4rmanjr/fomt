u32 func_080A1EA8();                                /* extern */

s32 func_080A1ED4(s32 arg0) {
    u32 temp_r0;

    temp_r0 = func_080A1EA8();
    return ((s32) *((u8 *)arg0 + (temp_r0 >> 3)) >> (7 & temp_r0)) & 1;
}
