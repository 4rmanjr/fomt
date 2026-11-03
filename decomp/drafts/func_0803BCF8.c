s32 func_08009940(void *, void *);                    /* extern */

typedef struct GenObj__func_0803BCF8 {
    u8 _pad0[10];
    u16 unkA;
    u8 unkC;
    u8 unkD;
} GenObj__func_0803BCF8;
void func_0803BCF8(GenObj__func_0803BCF8 *arg0) {
register s32 b7 __asm__("r0");
s32 temp_r1;
s32 temp_r5;
u8 temp_r3;
u8 *temp_r6;
register s32 neg __asm__("r0");
s32 u;
u8 c;
    b7 = ((u8 *)&arg0->unkA)[1] >> 7;
    u = arg0->unkC;
    u &= 0x7F;
    temp_r5 = u * 2;
    temp_r5 |= b7;
    if (temp_r5 == 0) {
        temp_r6 = (u8 *)arg0 + 0x10;
        if ((((u32)arg0->unkA << 0x11) >> 0x18) != 1) {
            func_08009940(temp_r6, (u8 *)arg0 + 0x2C);
        }
        func_08009940(temp_r6, (u8 *)arg0 + 0x44);
        arg0->unkD = (u8)temp_r5;
    }
    temp_r3 = ((u8 *)&arg0->unkA)[1];
    b7 = temp_r3 >> 7;
    u = arg0->unkC;
    u &= 0x7F;
    temp_r1 = b7 | (u * 2);
    if (temp_r1 >= 0) {
        if (temp_r1 <= 2) {
            u8 nb = (u8) (0x80 | temp_r3);
            ((u8 *)&arg0->unkA)[1] = nb;
            c = arg0->unkC;
            neg = -0x80;
            __asm__ volatile ("" : "+r" (neg));
            neg &= c;
            arg0->unkC = (u8) neg;
        }
    }
}
