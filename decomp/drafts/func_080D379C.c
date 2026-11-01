extern void func_080D3778(u8 *, u8 *, s32);

void func_080D379C(s32 arg0, s32 arg1, s32 arg2) {
    u8 buf[0x80];
    u16 *src;
    u16 *dst;
    u32 one;
    u32 tfn;
    u32 x;
    u32 n;
    u16 reg;

    reg = *(u16 *)0x04000204;
    reg &= 0xFFFC;
    reg |= 3;
    *(u16 *)0x04000204 = reg;
    /* sama seperti D3870: jangkar `one` agar jadi `movs r0,#1; bics r3,r0`. */
    src = (u16 *)(u32)func_080D3778;
    one = 1;
    __asm__ volatile ("" : "+r" (one));
    src = (u16 *)((u32)src & ~one);
    dst = (u16 *)buf;
    x = ((u32)func_080D379C - (u32)func_080D3778) << 15;
    goto test;
    do {
        *dst = *src;
        src += 1;
        dst += 1;
        x = (n - 1) << 16;
    test:
        n = x >> 16;
    } while (n != 0);
    /* target panggil = buf+1 (bit Thumb); hitung setelah loop agar tetap
       `mov r3,sp` (C murni selalu di-hoist sebelum loop -> r4). */
    __asm__ volatile ("mov %0, sp" : "=r" (tfn));
    tfn += 1;
    ((void (*)(s32, s32, s32))tfn)(arg0, arg1, arg2);
}
