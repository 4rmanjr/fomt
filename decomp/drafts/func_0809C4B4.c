s32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(s32);                              /* extern */

u8 func_0809C4B4(s32 arg0) {
    s32 temp_r0;
    u8 var_r2;

    temp_r0 = func_0809C22C();
    var_r2 = 0;
    if ((*(arg0 + temp_r0) != 0) && ((temp_r0 == 5) || (temp_r0 == 2))) {
        var_r2 = func_0809C3E0(arg0);
    }
    return var_r2;
}
