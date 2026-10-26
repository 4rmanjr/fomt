s32 func_080D379C(s32, s32);                          /* extern */
extern s16 gUnk_03000400;

s32 func_080006E4(s32 arg1, s32 arg2, s32 arg3) {
    gUnk_03000400 = 0;
    if (arg3 != 0) {
        func_080D379C(0x0E000000 | arg2, arg1);
        return 1;
    }
    return 0;
}
