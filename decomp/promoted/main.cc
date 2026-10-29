
// DECOMP-MATCHED func_08000240 (dari main.s; cek manusia sebelum ke src/)
s32 func_08000528(s32);
s32 SoftReset(s32);

/* ATTEMPT-NOTE hermes: tulis manual dr asm (draf m2c rusak: void*->unk).
   Init hardware: reg 04000000, poll KEYCNT, matikan 4 channel DMA (pola
   volatile RMW + dead-load tiap grup), lalu SoftReset + loop selamanya. */
void func_08000240(void) {
    volatile u8 *base;
    volatile u16 *r;
    u16 v;

    func_08000528(0xFFFF);
    *(volatile u16 *)0x04000000 = 0x80;
    *(volatile u8 *)0x04000084 = 0;
    while (0xF & ~*(volatile u16 *)0x04000130) {
    }
    base = (volatile u8 *)0x040000B0;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    base += 0xC;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    base += 0xC;
    r = (volatile u16 *)(base + 0xA);
    v = *r;
    *r = 0xC5FF & v;
    *r = 0x7FFF & *r;
    v = *r;
    {
        volatile u8 *b2 = (volatile u8 *)0x040000D4;
        volatile u16 *r2 = (volatile u16 *)(b2 + 0xA);
        v = *r2;
        *r2 = 0xC5FF & v;
        *r2 = 0x7FFF & *r2;
        v = *r2;
    }
    (void)v;
    SoftReset(0xFF);
    while (1) {
    }
}
