u8 *strcpy(u8 *dst, u8 *src) {
    u8 *s = src;
    u8 *d = dst;
    u32 w;

    if ((((u32) s | (u32) d) & 3) == 0) {
        w = *(u32 *) s;
        while (((w - 0x01010101) & ~w & 0x80808080) == 0) {
            *(u32 *) d = *(u32 *) s;
            s += 4;
            d += 4;
            w = *(u32 *) s;
        }
    }
    while ((*d++ = *s++) != 0) {
    }
    return dst;
}
