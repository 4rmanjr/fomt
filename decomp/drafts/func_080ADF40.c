s32 func_080ADF40(u8 *arg0) {
    s32 a;
    s32 b;
    s32 sum;
    s32 t;

    a = *(u16 *)(arg0 + 6);
    b = *(u16 *)(arg0 + 4);
    sum = a + b;
    t = 0;
    if ((sum & 0xFF) != 0) t = sum;
    *(u16 *)(arg0 + 6) = t;
    return (sum >> 8) - (a >> 8);
}
