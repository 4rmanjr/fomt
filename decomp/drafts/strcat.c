/* note sesi: 2 varian. Ref: p->r2, dst->r4 (dikembalikan), src->r6; pemindaian
   word `adds r2,#4; ldr r1,[r2]` (tanpa ldm/stm), lalu `bl strcpy`.
   Draf 4extra/5operand/13regalloc: salinan dst/src belum jatuh ke r4/r6. */
s32 strcpy(char *, const char *);

char *strcat(char *dst, const char *src) {
    char *p = dst;
    u32 w;

    if (((u32) p & 3) == 0) {
        w = *(const u32 *) p;
        if (((w + 0xFEFEFEFFU) & ~w & 0x80808080U) == 0) {
            do {
                p += 4;
                w = *(const u32 *) p;
            } while (((w + 0xFEFEFEFFU) & ~w & 0x80808080U) == 0);
        }
    }
    while (*p != 0) {
        p++;
    }
    strcpy(p, src);
    return dst;
}
