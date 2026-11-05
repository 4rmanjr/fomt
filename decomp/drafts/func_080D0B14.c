void func_080D0B14(s32 arg0, s32 arg1) {
    register u16 saved __asm__("r4");
    register volatile u32 *dst __asm__("r1");
    volatile u16 *reg208;
    volatile u16 *h134;
    volatile u16 *ha;
    volatile u16 *hb;
    register volatile u16 *hr __asm__("r0");
    register u32 val __asm__("r0");
    register u16 temp __asm__("r1");
    register u32 c8 __asm__("r2");

    reg208 = (volatile u16 *)0x04000208;
    temp = *reg208;
    __asm__ volatile("" : "+r"(temp));
    saved = temp;
    *reg208 = 0;
    if (arg0 != 0) {
        h134 = (volatile u16 *)0x04000134;
        c8 = 0x80;
        __asm__ volatile("" : "+r"(c8));
        c8 = c8 << 8;
        __asm__ volatile("" : "+r"(c8));
        val = c8;
        *h134 = (u16) val;
    }
    h134 = (volatile u16 *)0x04000134;
    c8 = 0xC0;
    __asm__ volatile("" : "+r"(c8));
    c8 = c8 << 8;
    __asm__ volatile("" : "+r"(c8));
    val = c8;
    *h134 = (u16) val;
    if (arg1 == 0) {
        ha = (volatile u16 *)0x04000158;
        *ha = arg1;
    } else {
        hb = (volatile u16 *)0x04000158;
        *hb = 0x30;
    }
    (void) *(volatile u32 *)0x04000150;
    dst = (volatile u32 *)0x04000154;
    *dst = 0;
    __asm__ volatile("" : "+r"(dst));
    dst = (volatile u32 *)((u8 *)dst - 0x14);
    *(volatile u16 *)dst = 0x47;
    __asm__ volatile("" : "+r"(dst));
    dst = (volatile u32 *)((u8 *)dst + 0xC2);
    *(volatile u16 *)dst = 0x80;
    hr = (volatile u16 *)0x04000208;
    *hr = saved;
}
