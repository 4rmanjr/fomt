typedef struct GenObj__func_0803BD88 {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
} GenObj__func_0803BD88;
void func_0803BD88(GenObj__func_0803BD88 *arg0) {
register GenObj__func_0803BD88 *a __asm__("r2");
register u8 b __asm__("r3");
u8 c;
s32 u;
s32 t;
s32 t2;
s32 seven;
s32 b7v;
    a = arg0;
    b = a->unkB;
    b7v = b >> 7;
    u = a->unkC;
    seven = 0x7F;
    t = ((u & seven) * 2) | b7v;
    if (t != 0) {
        t2 = seven & b;
        a->unkB = (u8) t2;
        c = a->unkC;
        {
            register s32 neg __asm__("r0");
            neg = -0x80;
            __asm__ volatile ("" : "+r" (neg));
            neg &= c;
            neg |= 1;
            a->unkC = (u8) neg;
        }
    }
}
