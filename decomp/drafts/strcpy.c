/* note sesi: 2 varian. Ref: dst->r6, penunjuk->r3, src->r2; word-copy memakai
   ldm r2!,{r0}/stm r3!,{r0} (load+store via pointer u32 post-increment), lalu
   ldr word berikutnya untuk uji 0xFEFEFEFF. Draf 7extra/4operand/6regalloc. */
char *strcpy(char *dst, const char *src) {
    char *d = dst;
    char *p = d;
    const char *s = src;
    u32 w;

    if ((((u32) s | (u32) p) & 3) == 0) {
        w = *(const u32 *) s;
        if (((w + 0xFEFEFEFFU) & ~w & 0x80808080U) == 0) {
            do {
                *(u32 *) p++ = *(const u32 *) s++;
                s += 4;
                w = *(const u32 *) s;
            } while (((w + 0xFEFEFEFFU) & ~w & 0x80808080U) == 0);
        }
    }
    while ((*p++ = *s++) != 0) {
    }
    return dst;
}
