u32 func_08085EC4(s32 arg0, u32 arg1) {
    u32 st[2];
    u32 *q;
    u32 *p;
    u32 ten;
    ten = 10;
    st[0] = ten;
    st[1] = arg1 / 25U;
    q = &st[1];
    p = &st[0];
    if (ten > st[1]) {
        p = q;
    }
    return *p;
}
