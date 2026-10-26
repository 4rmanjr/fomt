s32 func_080D0BA8(s32 *);                             /* extern */
extern void *gUnk_03000420;

void func_080D05DC(void) {
    s32 sp0;
    void *sp10;
    s32 sp18;

    gUnk_03000420->unk14 = 5;
    if (gUnk_03000420->unk30 != 0) {
        sp0 = 1;
        func_080D0BA8(&sp0);
    }
    sp0 = 4;
    sp10 = gUnk_03000420 + 0x24;
    sp18 = 2;
    sp0.unk1C = 0;
    func_080D0BA8();
    sp0 = 3;
    sp10 = gUnk_03000420 + 0x2C;
    sp18 = 2;
    sp0.unk1C = 0;
    func_080D0BA8();
    sp0 = 2;
    sp10 = gUnk_03000420 + 0x28;
    sp18 = 2;
    sp0.unk1C = 0;
    func_080D0BA8();
}
