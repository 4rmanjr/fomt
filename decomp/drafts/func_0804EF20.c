s32 CpuFastSet(s32 *, s32, s32);                      /* extern */

typedef union F14 {
    u16 u;
    u8 b[2];
} F14;

typedef struct GenObj {
    u8 _pad0[0xC];
    u8 *unkC;
    u8 *unk10;
    F14 f;
} GenObj;

s32 func_0804EF20(GenObj *arg0) {
    register GenObj *p __asm__("r5");
    register u8 f __asm__("r6");
    u8 *end;
    u8 *src;
    u8 *dst;

    p = arg0;
    src = p->unkC;
    dst = p->unk10;
    f = p->f.b[1];
    if (f & 0x80) {
        register s32 neg __asm__("r0");
        register u32 bit __asm__("r0");
        register u32 v __asm__("r1");
        u32 v6;
        u32 m0;
        u32 m1;

        end = dst + ((u32) (p->f.u << 0x12) >> 0xD);
        bit = (u32) (f << 0x19) >> 0x1F;
        __asm__ volatile("" : "+r"(bit));
        v = 1;
        __asm__ volatile("" : "+r"(v));
        v = v ^ bit;
        v6 = v << 6;
        neg = 0x41;
        __asm__ volatile("" : "+r"(neg));
        neg = -neg;
        neg = neg & f;
        neg = neg | v6;
        p->f.b[1] = (u8) neg;
        m0 = 0x0F0F0F0F << (v << 2);
        m1 = ~m0;
        do {
            *(u32 *) dst = *(u32 *) src & m0;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m1;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m0;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m1;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m0;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m1;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m0;
            src += 4; dst += 4;
            *(u32 *) dst = *(u32 *) src & m1;
            src += 4; dst += 4;
        } while (dst != end);
        return 1;
    }
    CpuFastSet(src, (s32) dst, (s32) ((u32) (p->f.u << 0x12) >> 0xF));
    return 0;
}
