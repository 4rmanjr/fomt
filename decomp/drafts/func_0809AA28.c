s32 func_0809AA28(u8 *arg0) {
    s32 count;
    u8 n;

    count = 0;
    n = *(u8 *) ((u8 *) arg0 + 0xA06);
    if (count < n) {
        u8 *p = arg0;
        s32 i = n;

        do {
            if ((p[0x13] << 0x1B) < 0) {
                count += 1;
            }
            p += 0x14;
        } while (--i);
    }
    return count;
}
