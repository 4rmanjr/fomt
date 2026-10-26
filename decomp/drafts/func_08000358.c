s32 func_080006A4(s32, s32, s32 *, s32);              /* extern */
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

void func_08000358(s32 arg0) {
    s32 sp0;

    func_080006A4(arg0, 0, &gUnk_080E862C, 0x20);
    if (gUnk_03000400 == 0) {
        sp0 = gUnk_03000400;
        func_080006A4(arg0, 0x20, &sp0, 4);
        if (gUnk_03000400 == 0) {
            func_080006A4(arg0, 0x24, &sp0, 4);
        }
    }
}
