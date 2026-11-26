void func_08012720(u8 *arg0, s32 arg1) {
    u8 *p;
    void *v;
    s32 k;

    k = arg1;
    p = *(u8 **)(arg0 + 4);
    v = *(void **)(p + 0xAC);
    if (v == 0) {
        return;
    }
    if ((*(u8 *)(*(u32 *)(p + 0x8C) + 0x2210) << 0x1C) < 0) {
        ((void (*)(void *)) func_08050E68)(v);
    }
    (void)k;
}
