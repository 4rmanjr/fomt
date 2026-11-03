typedef struct GenObj__func_0803BDB8 {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
} GenObj__func_0803BDB8;
void func_0803BDB8(GenObj__func_0803BDB8 *arg0) {
register GenObj__func_0803BDB8 *a __asm__("r2");
register u8 b __asm__("r3");
u8 c;
    a = arg0;
    b = a->unkB;
    if ((((b >> 7)) | ((a->unkC & 0x7F) * 2)) != 0) {
        a->unkB = (u8) (0x7F & b);
        c = a->unkC;
        {
            register s32 neg __asm__("r0");
            neg = -0x80;
            __asm__ volatile ("" : "+r" (neg));
            neg &= c;
            a->unkC = (u8) neg;
        }
    }
}
