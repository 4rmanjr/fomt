extern s32 gUnk_080F16AE;

u16 func_08039D4C(s32 arg0, s32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F16AE;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
