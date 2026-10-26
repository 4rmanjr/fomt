u32 GetPlayerEventCount__C12Bachelorette(s32);      /* extern */

s32 func_080A0490(s32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 5U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 5U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 5U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 5U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 5U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) <= 5U) {
        return 0;
    }
    return 0x1F;
}
