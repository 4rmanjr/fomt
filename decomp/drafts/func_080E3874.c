s32 func_080E3874(u8 *arg0) {
    if (arg0[0x1B8] != 0) {
        if (arg0[0x1BB] != 0) return 0;
        return 1;
    }
    if (((s32 (*)(u8 *))((void **)*(u32 **)arg0)[0x13])(arg0) != 0) return 0;
    return 1;
}
