void func_080E2170(u8 *arg0, u8 **arg1) {
    u8 *n;
    u8 *p;

    n = *(u8 **)(arg0 + 0xC);
    *(u8 **)(arg0 + 0xC) = *(u8 **)(n + 8);
    if (*(u8 **)(n + 8) != 0) {
        *(u8 **)(*(u8 **)(n + 8) + 4) = arg0;
    }
    *(u8 **)(n + 4) = *(u8 **)(arg0 + 4);
    if (arg0 == *arg1) {
        *arg1 = n;
    } else {
        p = *(u8 **)(arg0 + 4);
        if (arg0 == *(u8 **)(p + 8)) {
            *(u8 **)(p + 8) = n;
        } else {
            *(u8 **)(p + 0xC) = n;
        }
    }
    *(u8 **)(n + 8) = arg0;
    *(u8 **)(arg0 + 4) = n;
}
