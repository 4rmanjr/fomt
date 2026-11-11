void func_08024C74(u8 *arg0) {
    u8 *p = arg0;
    u8 zero = 0;

    arg0 += 0x3C;
    *arg0 = zero;
    arg0 += 2;
    *arg0 = zero;
    arg0 += 0x68;
    *(u16 *) arg0 = zero;
}
