void func_080CECD0(void *arg0) {
    register void *o __asm__("r2");
    register u8 *p __asm__("r0");
    register s32 zz __asm__("r1");

    o = arg0;
    __asm__ volatile("" : "+r"(o));
    p = (u8 *) arg0;
    __asm__ volatile("" : "+r"(p));
    p += 0x84;
    zz = 0;
    *p = (u8) zz;
    p -= 0x1C;
    *p = (u8) zz;
    *(s32 *) ((u8 *) o + 0x7C) = 0x12;
    p = (u8 *) o;
    p += 0x80;
    *(s32 *) p = zz;
}
