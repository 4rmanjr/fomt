s32 func_0809D79C(s32 arg0) {
    s32 r0;
    s32 r2;

    if ((u32) arg0 <= 9) return arg0;
    if (arg0 == 0xFF) return 0x19;
    if ((u32) arg0 > 0x4F) return 0x18;
    r0 = 0xA;
    r2 = 0x13;
    if ((u32) arg0 < 0x13) return r0;
    if (arg0 == 0x13) return 0xB;
    for (;;) {
        r0 += 2;
        r2 += 0xA;
        if (r2 > 0x4F) return r0;
        if (arg0 < r2) return r0;
        if (arg0 != r2) continue;
        return r0 + 1;
    }
}
