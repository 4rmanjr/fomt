s32 memcpy(s32, s32, u32);                            /* extern */
u32 strlen(s32);                                    /* extern */

void func_0809EB20(s32 arg0, s32 arg1) {
    s32 temp_r6;
    u32 var_r4;

    temp_r6 = arg0 + 0x14;
    var_r4 = strlen(arg1);
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy(temp_r6, arg1, var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
}
