extern void *gUnk_03000410;

void func_080D78E0(void) {
    u8 *p;
    u8 *q;
    void (*fn)(void *);

    p = (u8 *)*(void **)gUnk_03000410;
    q = (u8 *)*(u32 *)(p + 8);
    fn = (void (*)(void *))*(u32 *)(q + 8);
    fn(p);
}
