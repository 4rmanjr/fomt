void func_080A0A1C(u8 *arg0, s32 arg1) {
    u32 v;
    u32 clamp;
    u32 *p;
    u8 b;

    b = *arg0;
    v = ((u32) (b << 0x1A) >> 0x1A) + arg1;
    clamp = 0x3FU;
    p = (v > 0x3FU) ? &clamp : &v;
    *arg0 = (b & 0xC0) | (*p & 0x3F);
}
