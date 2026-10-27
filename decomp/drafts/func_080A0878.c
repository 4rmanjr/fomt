s32 func_080A0878(s32 arg0, s32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 3;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x98;
    case 9:
        return arg0 + 0x154;
    case 16:
        return arg0 + 0x1E4;
    case 18:
        return arg0 + 0x210;
    case 22:
        return arg0 + 0x264;
    case 28:
        return arg0 + 0x2E4;
    }
}
