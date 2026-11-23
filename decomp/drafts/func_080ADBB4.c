u8 *func_080E0E80(s32 *, void *, u32 *, s32, s32);    /* extern */
extern s32 gUnk_081074F6;

s32 func_080ADBB4(u8 *arg0) {
    u32 sp4;
    s32 var_r2;
    u8 *temp_r0;
    u8 *temp_r4;
    u8 temp_r2;
    u32 lo;
    u32 hi;
    s32 *p;

    temp_r2 = *arg0;
    lo = (u32) (temp_r2 << 0x1E) >> 0x1E;
    hi = (u32) (temp_r2 << 0x19) >> 0x1B;
    sp4 = (((lo << 4) - lo) << 1) + hi;
    p = &gUnk_081074F6;
    temp_r4 = (u8 *) p + 0x1B;
    temp_r0 = func_080E0E80(p, temp_r4, &sp4, 0, 0);
    var_r2 = 0;
    if ((temp_r0 != temp_r4) && (sp4 >= (u32) *temp_r0)) {
        var_r2 = 1;
    }
    return var_r2;
}
