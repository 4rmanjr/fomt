void func_080BA1A4(u8 *arg0) {
    s32 st;

    st = *(s32 *) (arg0 + 8);
    if (st == 0) {
        *(u16 *) (arg0 + 0x20) -= *(u8 *) (arg0 + 0x23);
    } else if (st == 1) {
        *(u16 *) (arg0 + 0x1E) += *(u8 *) (arg0 + 0x23);
    } else if (st == 2) {
        *(u16 *) (arg0 + 0x20) += *(u8 *) (arg0 + 0x23);
    } else if (st == 3) {
        *(u16 *) (arg0 + 0x1E) -= *(u8 *) (arg0 + 0x23);
    }
}
