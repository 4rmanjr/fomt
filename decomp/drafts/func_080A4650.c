extern s32 gUnk_08105708;

s32 func_080A4650(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 *base;
    u8 *e;
    s32 idx;
    u32 key;
    s32 res;
    u16 cur;

    base = (u8 *) &gUnk_08105708;
    idx = arg3 << 2;
    idx += arg2 << 4;
    e = *(u8 **) (base + idx);
    key = (u16) ((((arg0 << 4) - arg0) << 2) + arg1);
    res = 0;
    cur = *(u16 *) e;
    while (1) {
        if (cur == 0xFFFF) {
            return res;
        }
        if (cur > key) {
            return res;
        }
        res = e[2];
        e += 4;
        cur = *(u16 *) e;
    }
}
