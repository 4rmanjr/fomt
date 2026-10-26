s32 func_080CE510(void *, s32, s32, s32, s32, s32);   /* extern */

s32 func_080CEBC0(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = arg0->unkBC;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        var_r0 = 7;
    }
    arg0->unkBC = var_r0;
    func_080CE510(arg0, arg0->unkBC + 1, 0x0600F0F6, 0x20, 0, 0x20);
    return arg0->unkBC;
}
