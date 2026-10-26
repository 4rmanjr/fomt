u32 *func_080E3398(s32, s32, u32 *, s32, s32);      /* extern */

s32 func_0807AFF4(void *arg0) {
    u32 sp4;
    s32 temp_r4;
    s32 var_r2;
    u32 *temp_r0;

    temp_r4 = (arg0 + 0xA60)->unk4;
    sp4 = (u16) arg0->unk840 >> 4;
    temp_r0 = func_080E3398(arg0->unkA60, temp_r4, &sp4, 0, 0);
    var_r2 = 0;
    if ((temp_r0 != temp_r4) && (sp4 >= (u32) *temp_r0)) {
        var_r2 = 1;
    }
    return var_r2;
}
