extern void *gUnk_0300041C;
extern void *gUnk_03000420;

void func_080D0A14(void) {
    register s32 *ctr __asm__("r2");
    volatile u32 *dst;
    volatile u16 *h;
    s32 *g;

    ctr = *(s32 **)&gUnk_0300041C;
    if (*ctr == 1) {
        if ((u32) ctr[1] <= 2U) {
            (void) *(volatile u32 *)0x04000150;
            dst = (volatile u32 *)0x04000154;
            g = *(s32 **)&gUnk_03000420;
            *dst = g[1];
            __asm__ volatile("" : "+r"(dst));
            dst = (volatile u32 *)((u8 *)dst + 4);
            *(volatile u16 *)dst = 0x20;
            ctr[1] = ctr[1] + 1;
        }
    }
}
