s32 func_080002E0();                                /* extern */
s32 func_080006E4(s32, s32 *, s32, s32);              /* extern */
extern u16 gUnk_03000400;

s32 func_080003A0(s32 arg0) {
    s32 sp0;

    if ((func_080002E0() << 0x18) != 0) {
        sp0 = 0;
        func_080006E4(arg0, &sp0, 0x20, 4);
        if (gUnk_03000400 == 0) {
            return sp0;
        }
    }
    return 0;
}
