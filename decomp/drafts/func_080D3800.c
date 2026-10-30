void func_080D3800(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    u16 reg;

    n = arg2;
    reg = *(u16 *)0x04000204;
    reg &= 0xFFFC;
    reg |= 3;
    *(u16 *)0x04000204 = reg;
    n -= 1;
    if (n != -1) {
        do {
            *arg1 = *arg0;
            arg0 += 1;
            arg1 += 1;
            n -= 1;
        } while (n != -1);
    }
}
