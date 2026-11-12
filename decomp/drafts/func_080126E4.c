s32 func_08050E68(s32, s32);                          /* extern */
s32 func_0809FE3C(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[164];
    struct GenObj *unkAC;
    u8 _padB0[8544];
    u8 unk2210;
} GenObj;

void func_080126E4(GenObj *arg0) {
    register GenObj *t __asm__("r2");
    GenObj *v;
    GenObj *u;
    u8 *p;
    register u8 *q __asm__("r0");
    register u32 off __asm__("r3");

    t = arg0->unk4;
    p = (u8 *) t + 0xAC;
    v = *(GenObj **) p;
    if (v != 0) {
        u = *(GenObj **) (p - 0x20);
        off = 0x2210;
        __asm__ volatile("" : "+r"(off));
        q = (u8 *) u + off;
        if ((*q << 0x1C) < 0) {
            off = 0x1CD4;
            __asm__ volatile("" : "+r"(off));
            func_08050E68((s32) v, func_0809FE3C((u8 *) u + off));
        }
    }
}
