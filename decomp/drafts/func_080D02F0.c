s32 func_080D0ABC();                                /* extern */
s32 func_080D0B14(s32, s32);                        /* extern */
s32 func_080D0BA8(s32 *);                          /* extern */

extern s32 *gUnk_03000420;

void func_080D02F0(void) {
    s32 buf[8];
    s32 *base;
    s32 temp;

    base = gUnk_03000420;
    temp = base[0];
    if (temp == 0) {
        base[0] = 1;
        base[5] = temp;
        base[6] = temp;
        base[7] = temp;
        base[8] = 1;
        base[96] = temp;
        base[97] = temp;
        base[95] = temp;
        base[3] = temp;
        base[4] = temp;
        buf[0] = temp;
        func_080D0BA8(buf);
        func_080D0B14(0, 0);
        func_080D0ABC();
    }
}
