s32 func_080088CC();                                /* extern */
s32 func_080C0B94(s32);                               /* extern */
s32 func_080C0CA4(s32);                               /* extern */

void func_080C0B70(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_080088CC();
    func_080C0CA4(arg0);
    if (!(8 & temp_r4)) {
        func_080C0B94(arg0);
    }
}
