s32 func_080B9464(s32 arg0, s32 arg1, s32 arg2) {
    u32 a;
    u32 b;
    s32 t1;
    s32 t2;
    s32 r;

    a = (u32) arg1 << 0x10;
    b = (u32) arg2 << 0x10;
    t1 = (s32) (u32) (a >> 0x18) - 0x78;
    t2 = (s32) (u32) (b >> 0x18) - 0x4C;
    r = 0x384000 - ((t1 * t1) * 0x640 + (t2 * t2) * 0x900);
    if ((u32) (r - 1) <= 0x2C6FEU) {
        r = 0;
    }
    return r;
}
