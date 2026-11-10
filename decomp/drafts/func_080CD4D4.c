s32 func_080CADA8(s32);                               /* extern */
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 gUnk_0811785C;

void func_080CD4D4(s32 arg0) {
    register s32 g __asm__("r1");
    register s32 m __asm__("r2");
    u8 *q;
    u32 hi;
    u32 lo;
    volatile s32 spC;

    func_080CADA8(arg0 + 0x280);
    g = gUnk_0811785C;
    m = 0xFFFFFF00;
    spC = (s32) ((u8) (g + 0xF)) | (g & m);
    q = (u8 *) &spC;
    hi = q[1] << 6;
    lo = q[0] * 2;
    lo += 0x0600F080;
    func_080CAE60(arg0, hi + lo, 0x54, 2, 1, 0, 0x20);
}
