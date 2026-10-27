u32 GetPlayerEventCount__C12Bachelorette(s32);      /* extern */

s32 func_080A041C(s32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 4U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 4U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 4U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 4U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 4U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) > 4U) {
        return 0x1F;
    }
    return 0;
}

/* ATTEMPT-NOTE hermes3: ekor dibalik (bhi, bukan bls): if (>) return 0x1F; return 0. */
