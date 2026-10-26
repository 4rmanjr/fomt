s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_08009984(s32);                               /* extern */

void func_0800956C(s32 arg0) {
    u16 sp0;

    sp0 = 1 & func_08000528(1);
    func_08009984(arg0);
    if (sp0 != 0) {
        func_080004F4();
    }
}
