s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32, s32);                         /* extern */
s32 func_0809C420(s32, s32);                          /* extern */

u8 func_0809C474(s32 arg0) {
    s32 temp_r0;
    u8 var_r6;

    temp_r0 = func_0809C22C();
    var_r6 = 0;
    if (*(arg0 + temp_r0) != 0) {
        if ((temp_r0 == 1) || (temp_r0 == 4)) {
            var_r6 = func_0809C3E0(arg0, temp_r0);
        }
        if ((temp_r0 == 0) || (temp_r0 == 3)) {
            func_0809C420(arg0, temp_r0);
        }
    }
    return var_r6;
}
