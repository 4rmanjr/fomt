void func_080B3948(u8 *arg0) {
    u32 *p;
    u8 *q;
    s32 i;

    p = (u32 *)(arg0 + 0x85C);
    q = arg0 + 0x906;
    for (i = 4; i >= 0; i--) {
        if ((*p == 1) || (*p == 2)) {
            *q = *q + 1;
            if (*q == 0x3C) {
                *q = 0;
                *p = 0;
                q[0x19] = 1;
            }
        }
        p++;
        q++;
    }
}
