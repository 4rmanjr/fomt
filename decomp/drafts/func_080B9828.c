void func_080B9828(s32 arg0, s32 arg1) {
    u8 *p;

    if ((arg1 << 0x18) != 0) {
        p = (u8 *) arg0 + 0xC0;
    } else {
        p = (u8 *) arg0 + 0x80;
    }
    *(s32 *) p = 1;
}
