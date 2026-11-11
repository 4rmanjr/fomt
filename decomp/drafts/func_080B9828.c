void func_080B9828(s32 arg0, s32 arg1) {
    if ((arg1 << 0x18) != 0) {
        *(s32 *) (arg0 + 0xC0) = 1;
    } else {
        *(s32 *) (arg0 + 0x80) = 1;
    }
}
