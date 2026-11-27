s32 func_08024CA0(u8 *arg0) {
    s32 (*fn)(u8 *);
    s8 v;

    fn = *(s32 (**)(u8 *))(*(u8 **)(arg0 + 0x14) + 0x28);
    v = ((s8 *) arg0)[0x3C];
    if ((s8) fn(arg0) != 0) return 0;
    return v <= 0x2A && v >= 0x24;
}
