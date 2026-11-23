void func_080B97FC(u8 *arg0, s32 arg1) {
    if ((arg1 << 0x18) != 0) {
        *(s32 *) (arg0 + 0x80) = 4;
        *(s32 *) (arg0 + 0xC0) = 2;
    } else {
        *(s32 *) (arg0 + 0x80) = 2;
        *(s32 *) (arg0 + 0xC0) = 4;
    }
}
