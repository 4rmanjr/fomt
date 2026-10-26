extern s32 gUnk_03000430;

u16 func_080D101C(s32 arg0, u16 arg1) {
    u16 *temp_r2;
    u16 temp_r0;

    temp_r2 = &gUnk_03000430 + (arg0 * 2);
    temp_r0 = *temp_r2;
    *temp_r2 = arg1;
    return temp_r0;
}
