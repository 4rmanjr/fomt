void func_0809C420(u8 *arg0, s32 arg1) {
    u8 *p;

    if (arg0[arg1] == 0) return;
    if (arg1 != 0 && arg1 != 3) return;
    p = arg0 + 0xC;
    p[arg1] = 0;
}
