extern s32 gUnk_080F16D2;

s16 func_0803A320(s32 arg0, s32 arg1) {
    s8 *temp_r0 = (s8 *) &gUnk_080F16D2;

    return *(s16 *) (temp_r0 + (((s32) (arg1 << 0x10)) >> 0xF));
}
