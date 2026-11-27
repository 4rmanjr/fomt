s32 func_0805E894(u8 *);

u32 func_080370D8(u8 *arg0) {
    u8 *q;
    s32 t;
    u32 r4;

    arg0 = *(u8 **)(arg0 + 0x10);
    if (arg0 == 0) {
        return 1;
    }
    r4 = 0;
    q = arg0 + 0x30;
    t = 0;
    if (*(u16 *)(q + 0xE) != 0) {
        t = *(s16 *)(q + 0x10);
        t = ((0 - t) | t) >> 0x1F;
    }
    if (t == 0) {
        r4 = 1;
    } else {
        if ((s8)func_0805E894(q) != 0) {
            r4 = 1;
        }
    }
    return r4;
}
