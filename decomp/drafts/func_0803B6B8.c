s32 memcpy(s32 *, s32, u32);                            /* extern */
s32 strcpy(s32, ? *);                                 /* extern */
u32 strlen(s32);                                    /* extern */

void func_0803B6B8(s32 arg0, s32 arg1, s32 arg2) {
s32 sp0;
    u32 var_r4;

    var_r4 = strlen(arg2);
    if (var_r4 > 0x16U) {
        var_r4 = 0x16;
    }
    memcpy(&sp0, arg2, var_r4);
    *(&sp0 + var_r4) = 0;
    strcpy((arg1 * 0x18) + arg0 + 8, &sp0);
}
