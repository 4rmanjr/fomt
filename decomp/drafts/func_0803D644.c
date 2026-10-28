u8 *func_080E0E80(s32 *, void *, u32 *, s32, s32);    /* extern */
extern s32 gUnk_080F1A66;

s32 func_0803D644(s32 arg0, s32 arg1) {
    u32 sp4;
    s32 var_r2;
    u8 *temp_r0;
    u8 *temp_r4;
    s32 t;
    s32 *p;

    t = (((arg0 << 4) - arg0) << 1) - 1;
    sp4 = t + arg1;
    p = &gUnk_080F1A66;
    temp_r4 = (u8 *)p + 0xE;
    temp_r0 = func_080E0E80(p, temp_r4, &sp4, 0, 0);
    var_r2 = 0;
    if ((temp_r0 != temp_r4) && (sp4 >= (u32) *temp_r0)) {
        var_r2 = 1;
    }
    return var_r2;
}
