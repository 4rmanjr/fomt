void func_08012720(u8 *arg0) {
    register u8 *p __asm__("r2");
    register void *v __asm__("r3");
    u8 *t;

    p = *(u8 **)(arg0 + 4);
    t = p + 0xAC;
    v = *(void **)t;
    if (v == 0) {
        return;
    }
    if ((*(u8 *)(*(u32 *)(t - 0x20) + 0x2210) << 0x1C) < 0) {
        ((void (*)(void *)) func_08050E68)(v);
    }
}
