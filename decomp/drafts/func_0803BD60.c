s32 func_0803BCF8(s32);                                  /* extern */

typedef struct GenObj__func_0803BD60 {
    u8 _pad0[11];
    u8 unkB;
    u8 unkC;
    u8 unkD;
} GenObj__func_0803BD60;
void func_0803BD60(GenObj__func_0803BD60 *arg0) {
register s32 neg __asm__("r0");
u8 b;
u8 c;
    func_0803BCF8((s32)arg0);
    b = arg0->unkB;
    arg0->unkB = (u8) (b | 0x80);
    c = arg0->unkC;
    neg = -0x80;
    __asm__ volatile ("" : "+r" (neg));
    neg &= c;
    neg |= 1;
    arg0->unkC = (u8) neg;
    arg0->unkD = 9;
}
