s32 func_08091420(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r4;
    u32 var_r3;

    temp_r4 = arg1 & 7;
    var_r3 = 0;
    var_r5 = 0;
    temp_r0 = arg2 - 0x12;
    switch (temp_r0) {
    case 0:
        var_r3 = 1;
        break;
    case 1:
        var_r3 = 2;
        break;
    case 2:
        var_r3 = 3;
        break;
    case 3:
        var_r3 = 4;
        break;
    case 10:
        var_r3 = 7;
        break;
    }
    if (temp_r4 == var_r3) {
        var_r5 = 1;
    } else if (temp_r4 > var_r3) {
        var_r5 = 2;
    } else if (temp_r4 < var_r3) {
        var_r5 = 3;
    }
    return var_r5;
}
