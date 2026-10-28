s32 func_0801A8C0(s32 arg0, u32 arg1) {
    if (arg1 <= 5U) {
        return 3;
    } else if (arg1 <= 0xBU) {
        return 0;
    } else if (arg1 > 0x11U) {
        return 2;
    }
    return 1;
}
