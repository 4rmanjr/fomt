u8 *func_0805E760(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 i;
    u8 *p;
    u16 v1;
    u16 v2;
    u32 base;

    if (arg2 >= *(u16 *)(arg1 + 0x20)) {
        *(u32 *)arg0 = 0;
        *(u16 *)(arg0 + 4) = 0;
        return arg0;
    }
    i = arg2 << 2;
    p = (u8 *)(*(u32 *)(arg1 + 4) + i);
    v1 = *(u16 *)(p + 2);
    v2 = *(u16 *)p;
    base = *(u32 *)(arg1 + 0x1C);
    *(u32 *)arg0 = base + (v1 << 2);
    *(u16 *)(arg0 + 4) = v2;
    return arg0;
}
