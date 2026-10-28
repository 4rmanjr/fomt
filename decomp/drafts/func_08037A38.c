extern s32 gUnk_080F1644;

u16 func_08037A38(s32 arg0, s32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F1644;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
