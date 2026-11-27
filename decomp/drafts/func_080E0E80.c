u8 *func_080E0E80(u8 *arg0, u8 *arg1, u8 **arg2) {
    s32 n;
    s32 h;
    u8 *p;
    s32 c;

    n = arg1 - arg0;
    while (n > 0) {
        h = n >> 1;
        p = arg0 + h;
        c = 0;
        if (*p < *(*arg2)) {
            c = 1;
        }
        if (c != 0) {
            arg0 = p + 1;
            n = n - h - 1;
        } else {
            n = h;
        }
    }
    return arg0;
}
