void func_080A0A54(u16 *arg0, s32 arg1) {
    u32 v;
    u32 n;
    u32 x;

    v = *arg0;
    n = ((v << 19) >> 25) + arg1;
    x = (n > 0x7F) ? 0x7F : n;
    *arg0 = (v & 0xE03F) | ((x & 0x7F) << 6);
}
