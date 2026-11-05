void func_080D0AE0(void) {
    register volatile u16 *reg208 __asm__("r4");
    volatile u16 *reg200;
    u32 ime;

    reg208 = (volatile u16 *)0x04000208;
    ime = *reg208;
    *reg208 = 0;
    reg200 = (volatile u16 *)0x04000200;
    *reg200 &= 0xFF7F;
    *(volatile u16 *)0x04000202 = 0x80;
    *reg208 = ime;
}
