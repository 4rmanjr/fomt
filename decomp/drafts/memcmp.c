s32 memcmp(const void *s1, const void *s2, u32 n) {
    const u8 *p2 = s2;
    const u8 *p1 = s1;

    if (n < 4) {
        goto bytes;
    }
    if (((u32) p1 | (u32) p2) & 3) {
        goto bytes;
    }
word:
    p1 += 4;
    p2 += 4;
    n -= 4;
    if (n < 4) {
        goto bytes;
    }
    if (*(const u32 *) p1 == *(const u32 *) p2) {
        goto word;
    }
bytes:
    while (n != 0) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
        n--;
    }
    return 0;
}
