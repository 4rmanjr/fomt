void *memset(void *dst, u32 c, u32 n) {
    u8 *d = dst;
    u32 *dw;
    u32 fill;

    if (n < 4) {
        goto bytes;
    }
    if (((u32) d & 3) != 0) {
        goto bytes;
    }
    dw = (u32 *) d;
    c &= 0xFF;
    fill = c | (c << 8);
    fill |= fill << 16;
    while (n >= 16) {
        *dw++ = fill;
        *dw++ = fill;
        *dw++ = fill;
        *dw++ = fill;
        n -= 16;
    }
    while (n >= 4) {
        *dw++ = fill;
        n -= 4;
    }
    d = (u8 *) dw;
bytes:
    while (n != 0) {
        *d++ = (u8) c;
        n--;
    }
    return dst;
}
