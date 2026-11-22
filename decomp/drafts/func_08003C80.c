s32 func_08008E64(s32, s32, s32);                    /* extern */
s32 func_08008EB8(s32, s32, s32);                    /* extern */
s32 func_0804E7A0(s32, void *, s32);                 /* extern */
s32 func_0804E8F0(s32, void *, s32, s32, s32);       /* extern */
extern s32 gUnk_080E8704;

typedef struct Buf3C80 {
    s32 head;
    u8 data[0x2D00];
} Buf3C80;

void func_08003C80(void) {
    Buf3C80 work;
    s16 s0[2];
    s16 s1[2];
    s16 s2[2];
    s16 s3[2];
    s16 *p0;
    s16 **pp0;
    s16 *p1;
    s16 *p2;
    s16 *p3;
    /* pb dibungkus agregat: alamatnya tidak bisa dipromosikan ke register,
       jadi pointer-nya harus tinggal di slot stack seperti ref */
    struct { u8 *p; } pbw;
    u32 n;
    u32 row;
    u32 col;
    s32 i;
    s32 v5;
    s32 v0;
    s32 v1;
    s32 v2;
    u16 *dst;
    s32 *g;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E800, 0x800);
    n = 0;
    row = 0;
    p0 = s0;
    pp0 = &p0;
    pbw.p = work.data;
    p1 = s1;
    p2 = s2;
    p3 = s3;
    do {
        col = 0;
        dst = (u16 *) (0x0600E840 + (row << 6));
        row += 1;
        do {
            *dst = n;
            n += 1;
            dst += 1;
            col += 1;
        } while (col <= 0x1DU);
    } while (row <= 0xBU);
    s0[0] = 0x1E;
    (*pp0)[1] = 0xC;
    func_0804E7A0(*(s32 *) s0, pbw.p, 0);
    i = 0;
    do {
        g = (s32 *) ((u8 *) &gUnk_080E8704 + i * 0xC);
        v5 = i << 4;
        v0 = g[0];
        s1[0] = 0x1E;
        p1[1] = 0xC;
        func_0804E8F0(*(s32 *) s1, pbw.p, 0x10, v5, v0);
        v1 = g[1];
        s2[0] = 0x1E;
        p2[1] = 0xC;
        func_0804E8F0(*(s32 *) s2, pbw.p, 0x80, v5, v1);
        v2 = g[2];
        s3[0] = 0x1E;
        p3[1] = 0xC;
        func_0804E8F0(*(s32 *) s3, pbw.p, 0xC0, v5, v2);
        i += 1;
    } while (i <= 5);
    func_08008E64(pbw.p, 0x06000000, 0x2D00);
}
