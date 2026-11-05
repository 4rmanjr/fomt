void func_080CA6F4(void) {
    register volatile u16 *reg4 __asm__("r2");
    register u32 m __asm__("r3");
    register u32 w __asm__("r2");
    register u32 v __asm__("r0");
    volatile u16 *regc;
    u16 t;

    t = *(volatile u8 *)0x04000006;
    switch (t) {
    case 0x17:
        reg4 = (volatile u16 *)0x04000004;
        t = *reg4;
        if ((2 & t) == 0) {
            register u32 m2 __asm__("r0");
            m = 2;
            do {
                t = *reg4;
                m2 = m;
                __asm__ volatile("" : "+r"(m2));
            } while ((m2 & t) == 0);
        }
        regc = (volatile u16 *)0x0400000C;
        w = 0x3E43;
        __asm__ volatile("" : "+r"(w));
        v = w;
        *regc = (u16) v;
        reg4 = (volatile u16 *)0x04000004;
        *reg4 = 0xFF & *reg4;
        v = 0x9F << 8;
        *reg4 = v | *reg4;
        break;
    case 0x9F:
        regc = (volatile u16 *)0x0400000C;
        w = 0x3E41;
        __asm__ volatile("" : "+r"(w));
        v = w;
        *regc = (u16) v;
        reg4 = (volatile u16 *)0x04000004;
        *reg4 = 0xFF & *reg4;
        v = 0xB8 << 5;
        *reg4 = v | *reg4;
        break;
    }
}
