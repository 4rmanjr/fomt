s32 func_080A0930(s32 arg0, s32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 0x24;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x33C;
    case 1:
        return arg0 + 0x360;
    case 2:
        return arg0 + 0x384;
    case 3:
        return arg0 + 0x3A8;
    case 4:
        return arg0 + 0x3CC;
    case 5:
        return arg0 + 0x3F0;
    case 6:
        return arg0 + 0x414;
    }
}
