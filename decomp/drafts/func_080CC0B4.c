struct GenObj__func_080CADA8;
void func_080CADA8(struct GenObj__func_080CADA8 *);
s32 func_080CAE60(s32, s32, s32, s32, s32, s32, s32);
extern s32 gUnk_0811785C;

void func_080CC0B4(s32 arg0) {
    s32 tmp;
    s32 t;
    u8 *tp;

    func_080CADA8((struct GenObj__func_080CADA8 *)(arg0 + 0x280));
    tmp = gUnk_0811785C;
    tp = (u8 *)&tmp;
    {
        register s32 b1 __asm__("r1");
        b1 = ((s32)tp[1] << 6);
        t = ((s32)*tp * 2) + 0x0600F000;
        func_080CAE60(arg0, b1 + t, 0x54, 2, 2, 0, 0x20);
    }
    {
        register s32 b1 __asm__("r1");
        b1 = ((s32)tp[1] << 6);
        t = ((s32)*tp * 2) + 0x0600F080;
        func_080CAE60(arg0, b1 + t, 0x54, 2, 1, 0, 0x20);
    }
}
