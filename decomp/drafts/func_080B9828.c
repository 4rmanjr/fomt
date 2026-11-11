void func_080B9828(s32 arg0, s32 arg1) {
    s32 *p;

    if ((arg1 << 0x18) == 0) {
        p = (s32 *) ((u8 *) arg0 + 0x80);
    } else {
        p = (s32 *) ((u8 *) arg0 + 0xC0);
    }
    *p = 1;
}
