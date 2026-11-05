s32 func_080D0A54();                                  /* extern */
extern s32 *gUnk_03000420;

void func_080D0A94(s32 arg0) {
    register s32 **gp __asm__("r5");
    register u32 off __asm__("r4");
    register s32 *t1 __asm__("r1");
    register u32 v __asm__("r2");
    s32 *t2;

    gp = &gUnk_03000420;
    t1 = *gp;
    off = 0x17C;
    __asm__ volatile("" : "+r"(off));
    t1 = (s32 *)((u8 *)t1 + off);
    v = 1;
    *t1 = (s32) v;
    func_080D0A54();
    t2 = (s32 *)((u8 *)*gp + off);
    *t2 = 0;
}
