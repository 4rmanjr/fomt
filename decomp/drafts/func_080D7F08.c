void func_080D7F08(u8 *arg0) {
    u8 **slot;
    u8 *q;
    u8 *p;
    u32 i;

    i = 1;
    slot = (u8 **)(arg0 + 0xA8);
    for (; i <= 0x23; i++) {
        q = *slot;
        p = ((u8 * (*)(u8 *, s32))((void **)*(u32 **)q)[16])(q, i);
        if (p != 0) {
            ((void (*)(u8 *, s32))((void **)*(u32 **)(p + 0x14))[15])(p, 3);
        }
    }
}
