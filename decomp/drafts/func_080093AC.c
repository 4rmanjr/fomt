s32 func_080093AC(u8 *arg0) {
    u8 *p;
    s32 v;
    u16 a;
    s32 t;
    s32 m;
    register s32 q asm("r3");
    s32 n1;
    s32 n2;
    register s32 q3 asm("r0");
    u16 *w;
    register u16 *w2 asm("r1");

    p = *(u8 **) arg0;
    v = *(s16 *) (p + 4);
    if (v == 0) {
        goto zero;
    }
    a = *(u16 *) (p + 0xE);
    t = *(s32 *) (p + 8);
    if (t != 0) {
        m = 0;
        if (t != 1) {
            if (t == 2) {
                m = 0xC0;
            }
        } else {
            m = 0x80;
        }
        q = *(s32 *) p;
        if (q != 0) {
            w = (u16 *) (q + 0x50);
            *w = (*w & 0xFF3F) | m;
        } else {
            w = (u16 *) 0x04000050;
            *w = (*w & 0xFF3F) | m;
        }
        if (q != 0) {
            w2 = (u16 *) (q + 0x54);
        } else {
            w2 = (u16 *) 0x04000054;
        }
        if ((u32) a > 0xFFFEU) {
            n1 = 0x10;
        } else if (a == 0) {
            n1 = 0;
        } else {
            n1 = ((u32) (a * 0xF) >> 16) + 1;
        }
        *w2 = n1;
    }
    if (*(u8 *) (p + 0xC) != 0) {
        if ((u32) a > 0xFFFEU) {
            n2 = 0xF;
        } else if (a == 0) {
            n2 = 0;
        } else {
            n2 = ((u32) (a * 0xE) >> 16) + 1;
        }
        n2 = n2 | (n2 << 4);
        n2 = n2 | (n2 << 8);
        q3 = *(s32 *) p;
        if (q3 != 0) {
            *((u16 *) (q3 + 0x4C)) = n2;
        } else {
            *((u16 *) 0x0400004C) = n2;
        }
    }
    if (((v >= 0) && (a == 0xFFFF)) || ((v < 0) && (a == 0))) {
        n1 = 0;
        *(u16 *) (p + 4) = n1;
        return n1;
    }
    n1 = a + v;
    if (n1 < 0) {
        n1 = 0;
    } else if (n1 > 0xFFFF) {
        n1 = 0xFFFF;
    }
    *(u16 *) (p + 0xE) = n1;
    return 1;
zero:
    return 0;
}
