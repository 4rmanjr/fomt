extern s32 gUnk_080F161C;

u16 func_080378EC(s32 arg0, s32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F161C;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
