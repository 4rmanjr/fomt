void func_080E21A8(u8 *arg0, u8 **arg1) {
    u8 *n;
    u8 *p;

    n = *(u8 **)(arg0 + 8);
    *(u8 **)(arg0 + 8) = *(u8 **)(n + 0xC);
    if (*(u8 **)(n + 0xC) != 0) {
        *(u8 **)(*(u8 **)(n + 0xC) + 4) = arg0;
    }
    *(u8 **)(n + 4) = *(u8 **)(arg0 + 4);
    if (arg0 == *arg1) {
        *arg1 = n;
    } else {
        p = *(u8 **)(arg0 + 4);
        if (arg0 == *(u8 **)(p + 0xC)) {
            *(u8 **)(p + 0xC) = n;
        } else {
            *(u8 **)(p + 8) = n;
        }
    }
    *(u8 **)(n + 0xC) = arg0;
    *(u8 **)(arg0 + 4) = n;
}
