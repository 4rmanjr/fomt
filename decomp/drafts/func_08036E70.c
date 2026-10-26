s32 func_08035908(void *, s32);                       /* extern */
s32 func_08035940(void *, s32);                       /* extern */
s32 func_08035AE0(void *);                          /* extern */
u32 func_0809EAD8();                                /* extern */
s32 func_0809EAE0(s32);                             /* extern */
s32 func_080A0384(s32);                             /* extern */

void func_08036E70(void *arg0) {
    s32 temp_r0;
    s32 var_r5;
    s32 var_r7;

    temp_r0 = func_080A0384(arg0->unk34 + 0x1CD4);
    if (temp_r0 != 0) {
        var_r5 = 0x267;
        var_r7 = 0x26F;
        if (func_0809EAD8() <= 0x3BU) {
            if ((func_08035AE0(arg0) << 0x18) != 0) {
                var_r5 = 0xC;
            }
        } else if ((func_08035AE0(arg0) << 0x18) != 0) {
            var_r5 = 0x277;
        } else if ((func_0809EAE0(temp_r0) << 0x18) == 0) {
            var_r5 = 0x26B;
            var_r7 = 0x273;
        }
        func_08035908(arg0, var_r5);
        func_08035940(arg0, var_r7);
    }
}
