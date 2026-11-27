extern u8 gUnk_081036C0[];

s32 func_0809C3E0(u8 *arg0, s32 arg1) {
    s32 res;
    u8 *cur;
    u8 *p;

    res = 0;
    p = arg0 + arg1;
    if (*p != 0) {
        cur = (u8 *)(arg0 + 0xC) + arg1;
        if (*cur < gUnk_081036C0[arg1]) {
            *cur = *cur + 1;
        } else {
            *p = 0;
            *((u8 *)(arg0 + 6) + arg1) = 1;
            res = 1;
        }
    }
    return res;
}
