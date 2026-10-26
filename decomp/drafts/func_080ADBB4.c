u8 *func_080E0E80(s32 *, void *, u32 *, s32, s32);    /* extern */
extern ? gUnk_081074F6;

s32 func_080ADBB4(u8 *arg0) {
    u32 sp4;
    s32 var_r2;
    u8 *temp_r0;
    u8 temp_r2;
    void *temp_r4;

    temp_r2 = *arg0;
    sp4 = (((u32) (temp_r2 << 0x1E) >> 0x1E) * 0x1E) + ((u32) (temp_r2 << 0x19) >> 0x1B);
    temp_r4 = &gUnk_081074F6 + 0x1B;
    temp_r0 = func_080E0E80(&gUnk_081074F6, temp_r4, &sp4, 0, 0);
    var_r2 = 0;
    if ((temp_r0 != temp_r4) && (sp4 >= (u32) *temp_r0)) {
        var_r2 = 1;
    }
    return var_r2;
}
