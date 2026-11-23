s32 func_0809AAD4(u8 *arg0) {
    s32 count;
    s32 n;
    u8 *p;
    u8 lim;

    count = 0;
    lim = arg0[0xA06];
    if (count < (s32) lim) {
        n = lim;
        p = arg0;
        do {
            if ((*(u16 *) p <= 0xAB) && ((*(u8 *) (p + 0x13) << 0x1B) < 0)) {
                count += 1;
            }
            p += 0x14;
            n -= 1;
        } while (n != 0);
    }
    return count;
}
