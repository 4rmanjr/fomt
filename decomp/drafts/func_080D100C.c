extern ? gUnk_03000450;

s32 func_080D100C(s32 arg0, s32 arg1) {
    s32 *temp_r2;
    s32 temp_r0;

    temp_r2 = &gUnk_03000450 + (arg0 * 4);
    temp_r0 = *temp_r2;
    *temp_r2 = arg1;
    return temp_r0;
}
