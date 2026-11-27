u32 *func_080E3398(s32, s32, u32 *, s32, s32);      /* extern */

s32 func_0807AFF4(u8 *arg0) {
    s32 *pr;
    s32 a;
    s32 b;
    u32 sp4;
    u32 *r;
    s32 v;

    pr = (s32 *) (arg0 + 0xA60);
    a = pr[0];
    b = pr[1];
    sp4 = (u32) (*(u16 *) (arg0 + 0x840)) >> 4;
    r = func_080E3398(a, b, &sp4, 0, 0);
    v = 0;
    if (r != (u32 *) b) {
        if (sp4 >= *r) {
            v = 1;
        }
    }
    return v;
}
