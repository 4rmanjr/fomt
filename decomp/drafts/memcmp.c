/* note sesi: 4 varian. Sisa 5missing/4extra/14regalloc: ref r4=n, r3=p1, r2=p2;
   draf menaruh salinan di register lain walau urutan deklarasi sudah diubah
   (p2-dulu, p1-dulu, cnt-lokal). Ekor sudah memakai pola 22 (`while (cnt-- > 0)`). */
s32 memcmp(const void *s1, const void *s2, u32 n) {
    u32 cnt = n;
    const u8 *p1 = s1;
    const u8 *p2 = s2;

    if (cnt > 3) {
        if ((((u32) p1 | (u32) p2) & 3) == 0) {
            do {
                if (*(const u32 *) p1 != *(const u32 *) p2) {
                    goto bytes;
                }
                p1 += 4;
                p2 += 4;
                cnt -= 4;
            } while (cnt > 3);
        }
    }
bytes:
    while (cnt-- > 0) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}
