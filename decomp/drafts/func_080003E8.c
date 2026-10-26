s32 func_080006A4(s32, s32, s32 *, s32);              /* extern */
s32 func_080006E4(s32, s32 *, s32, s32);              /* extern */
extern u16 gUnk_03000400;

void func_080003E8(s32 arg0, s32 arg1) {
    s32 sp0;

    sp0 = 0;
    func_080006E4(arg0, &sp0, 0x20, 4);
    if (gUnk_03000400 == 0) {
        sp0 |= 1 << arg1;
        func_080006A4(arg0, 0x20, &sp0, 4);
    }
}
