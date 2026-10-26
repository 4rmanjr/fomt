s32 func_080A0930(s32 arg0, s32 arg1) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = arg1 - 0x24;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        var_r1 = 0x33C;
block_10:
        return arg0 + var_r1;
    case 1:
        var_r1 = 0x360;
        goto block_10;
    case 2:
        var_r1 = 0x384;
        goto block_10;
    case 3:
        var_r1 = 0x3A8;
        goto block_10;
    case 4:
        var_r1 = 0x3CC;
        goto block_10;
    case 5:
        var_r1 = 0x3F0;
        goto block_10;
    case 6:
        var_r1 = 0x414;
        goto block_10;
    }
}
