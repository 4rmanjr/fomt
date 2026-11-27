void func_0809C420(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;

    if (p[arg1] != 0) {
        if (arg1 == 0 || arg1 == 3) {
            p[arg1 + 0xC] = 0;
        }
    }
}
