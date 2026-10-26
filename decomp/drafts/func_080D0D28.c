s32 func_03000714(void *, s32);                       /* extern */
s32 func_0300085C(s32 *, s32);                          /* extern */
s32 func_080D0CD4(s32);                             /* extern */
s32 memset(s32, s32, s32);                            /* extern */
extern ? gUnk_08117B20;
extern ? gUnk_08117B2C;
extern ? gUnk_08117B38;
extern ? gUnk_08117B44;
extern ? gUnk_08117B50;
extern ? gUnk_08117B5C;
extern ? gUnk_08117B68;
extern ? gUnk_08117B74;
extern ? gUnk_08117B80;
extern ? gUnk_08117B8C;
extern ? gUnk_08117B98;
extern ? gUnk_08117BA4;
extern ? gUnk_08117BB0;
extern ? gUnk_08117BBC;
extern ? gUnk_08117BC8;
extern ? gUnk_084F90CC;
extern ? gUnk_084FA7A0;
extern ? gUnk_084FA9A0;
extern ? gUnk_08523290;

s32 func_080D0D28(s32 arg0, s32 arg1) {
    ? *var_r0_2;
    s16 var_r5;
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r6;
    u32 temp_r0;

    var_r6 = 0;
    var_r5 = -1;
    temp_r0 = arg1 - 0xB1;
    switch (temp_r0) {                              /* irregular */
    case 3:
        var_r0_2 = &gUnk_08117B20;
block_18:
        func_0300085C(var_r0_2, arg0);
        return 1;
    case 5:
        var_r0_2 = &gUnk_08117B2C;
        goto block_18;
    case 6:
        var_r0_2 = &gUnk_08117B38;
        goto block_18;
    case 0:
        var_r0_2 = &gUnk_08117B44;
        goto block_18;
    case 1:
        var_r0_2 = &gUnk_08117B50;
        goto block_18;
    case 2:
        var_r0_2 = &gUnk_08117B5C;
        goto block_18;
    case 10:
        var_r0_2 = &gUnk_08117B68;
        goto block_18;
    case 11:
        var_r0_2 = &gUnk_08117B74;
        goto block_18;
    case 12:
        var_r0_2 = &gUnk_08117B80;
        goto block_18;
    case 13:
        var_r0_2 = &gUnk_08117B8C;
        goto block_18;
    case 14:
        var_r0_2 = &gUnk_08117B98;
        goto block_18;
    case 15:
        var_r0_2 = &gUnk_08117BA4;
        goto block_18;
    case 16:
        var_r0_2 = &gUnk_08117BB0;
        goto block_18;
    case 17:
        var_r0_2 = &gUnk_08117BBC;
        goto block_18;
    case 18:
        var_r0_2 = &gUnk_08117BC8;
        goto block_18;
    default:
        if (arg1 > 0) {
            if (arg1 <= 0xFF) {
                var_r5 = *((arg1 * 2) + &gUnk_084FA7A0);
                var_r6 = 1;
            } else if (arg1 <= 0xFFFF) {
                temp_r0_2 = func_080D0CD4(arg1);
                if (temp_r0_2 >= 0) {
                    var_r5 = *((temp_r0_2 * 2) + &gUnk_08523290);
                    var_r6 = 2;
                }
            }
        }
        if (arg0 != 0) {
            if ((s32) var_r5 >= 0) {
                if (var_r6 != 1) {
                    func_03000714((var_r5 * 0x18) + &gUnk_084FA9A0, arg0);
                } else {
                    func_0300085C((var_r5 * 0xC) + &gUnk_084F90CC, arg0);
                }
            } else {
                memset(arg0, 0, 0x80);
            }
        }
        var_r0 = 0;
        if ((s32) var_r5 >= 0) {
            var_r0 = var_r6;
        }
        return var_r0;
    }
}
