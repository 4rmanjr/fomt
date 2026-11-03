typedef struct GenObj__func_0803BD88 {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
} GenObj__func_0803BD88;
void func_0803BD88(GenObj__func_0803BD88 *arg0) {
register GenObj__func_0803BD88 *a __asm__("r2");
register u8 b __asm__("r3");
s32 seven;
s32 neg;
u8 c;
    a = arg0;
    b = a->unkB;
    if ((((b >> 7)) | ((a->unkC & (seven = 0x7F, seven)) * 2)) != 0) {
        a->unkB = (u8) (seven & b);
        c = a->unkC;
        neg = -0x80;
        __asm__ volatile ("" : "+r" (neg));
        neg &= c;
        neg |= 1;
        a->unkC = (u8) neg;
    }
}
