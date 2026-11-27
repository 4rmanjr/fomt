s32 func_080E38B0(u8 *arg0) {
    u8 *p;

    if (arg0[0x1B8] != 0) return arg0[0x1BA];
    p = *(u8 **)(arg0 + 0x14);
    if (*(u32 *)(p + 4) == 0) return 0;
    if (*(u32 *)(p + 4) == *(u32 *)(arg0 + 0x18)) return 0;
    return 1;
}
