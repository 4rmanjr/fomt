#define DETECTNULL(x) (((x) - 0x01010101) & ~(x) & 0x80808080)

char *strcpy(char *dst0, const char *src0) {
    register char *sav __asm__("r6") = dst0;
    char *dst;
    const char *src;
    u32 x;

    dst = sav;
    src = src0;
    if (((((u32)src) | ((u32)dst)) & 3) == 0) {
        x = *(const u32 *)src;
        while (DETECTNULL(x) == 0) {
            *(u32 *)dst = *(const u32 *)src;
            src += 4;
            dst += 4;
            x = *(const u32 *)src;
        }
    }
    while ((*dst++ = *src++) != 0) {
    }
    return sav;
}
