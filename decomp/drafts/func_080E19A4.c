s32 memcpy(s8 *, s32, u32);                           /* extern */
s32 strcpy(void *, s8 *);                             /* extern */
u32 strlen(s32);                                    /* extern */

s8 *func_080E19A4(s8 *arg0, void *arg1, s32 arg2) {
    s8 sp0;
    s32 temp_r6;
    u32 var_r4;

    if (arg2 == 0xFF) {
        temp_r6 = arg1->unk4;
        var_r4 = strlen(temp_r6);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        memcpy(&sp0, temp_r6, var_r4);
        (&sp0)[var_r4] = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, &sp0);
    } else {
        sp0 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
    }
    return arg0;
}
