s32 rand();                                         /* extern */

void func_080B9F0C(s32 arg0, s32 arg1) {
    register u32 t asm("r5");
    s32 p;
    s32 r;
    u32 v;

    t = (u32) (arg1 << 0x18);
    t >>= 0x12;
    p = arg0 + 0x6C;
    *(u32 *)(p + t) = 2;
    r = rand();
    v = (u32) (r & 0xFFFF) >> 0xE;
    arg0 += 0x74;
    *(u32 *)(arg0 + t) = v;
}
