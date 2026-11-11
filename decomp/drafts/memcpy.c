/* note sesi: struktur SUDAH identik (12 regalloc, 0 struktural). Ref: dst->r5,
   penunjuk->r4, src->r3, n tetap r2; ekor memakai pola 22 bentuk NEG
   (`subs; mov #1; rsbs; cmp`) = `while (n-- != 0)`. Sisa hanya pemetaan register. */
void *memcpy(void *dst, const void *src, u32 n) {
    u8 *d = (u8 *) dst;
    u8 *p = d;
    const u8 *s = (const u8 *) src;
    u32 *dw;
    const u32 *sw;

    if (n > 15 && ((((u32) s) | ((u32) p)) & 3) == 0) {
        dw = (u32 *) p;
        sw = (const u32 *) s;
        while (n > 15) {
            *dw++ = *sw++;
            *dw++ = *sw++;
            *dw++ = *sw++;
            *dw++ = *sw++;
            n -= 16;
        }
        while (n > 3) {
            *dw++ = *sw++;
            n -= 4;
        }
        s = (const u8 *) sw;
        p = (u8 *) dw;
    }
    while (n-- != 0) {
        *p++ = *s++;
    }
    return dst;
}
