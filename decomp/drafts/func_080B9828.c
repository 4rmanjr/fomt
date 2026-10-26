void func_080B9828(s32 arg0, s32 arg1) {
    s32 *var_r1;

    if ((arg1 << 0x18) != 0) {
        var_r1 = arg0 + 0xC0;
    } else {
        var_r1 = arg0 + 0x80;
    }
    *var_r1 = 1;
}
