
// DECOMP-MATCHED strlen (dari code_libc_string.s; cek manusia sebelum ke src/)
s32 strlen(const char *s) {
    const char *start = s;
    u32 v;
    const u32 *w;

    if (!((u32)s & 3)) {
        w = (const u32 *)s;
        v = *w;
        v = (v + 0xFEFEFEFF) & ~v;
        while (!(v & 0x80808080)) {
            w++;
            v = *w;
            v = (v + 0xFEFEFEFF) & ~v;
        }
        s = (const char *)w;
    }
    while (*s != 0) {
        s++;
    }
    return s - start;
}
