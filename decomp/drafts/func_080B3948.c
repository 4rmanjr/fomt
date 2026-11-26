void func_080B3948(u8 *arg0) {
    s32 *p;
    u8 *q;
    s32 i;
    s32 t;

    p = (s32 *)(arg0 + 0x85C);
    q = arg0 + 0x906;
    i = 4;
    do {
        t = *p;
        if (t <= 2) {
            if (t < 1) {
            } else {
                q[0]++;
                if (q[0] == 0x3C) {
                    q[0] = 0;
                    *p = 0;
                    q[0x19] = 1;
                }
            }
        }
        p++;
        q++;
        i--;
    } while (i >= 0);
}
