s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_08009940(s32, s32);                            /* extern */

void func_080095C0(s32 arg0, ? arg1) {
    u16 sp0;

    sp0 = 1 & func_08000528(1);
    func_08009940(arg0, arg1);
    if (sp0 != 0) {
        func_080004F4();
    }
}
