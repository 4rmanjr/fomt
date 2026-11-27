void func_080A0A1C(u8 *arg0, s32 arg1) {
    u32 v;
    u32 n;
    u32 x;

    v = *arg0;
    n = (v & 0x3F) + arg1;
    x = (n > 0x3F) ? 0x3F : n;
    *arg0 = (v & 0xFFFFFFC0) | (x & 0x3F);
}
