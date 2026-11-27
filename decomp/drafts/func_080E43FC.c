s32 malloc(s32);
s32 func_080D3BC0(s32);

u8 *func_080E43FC(u8 *arg0) {
    u8 *r4 = arg0 + 8;
    u8 *p;
    u8 *q;

    *(u32 *)(r4 + 4) = 0;
    p = (u8 *)malloc(0x18);
    if (p == 0) {
        p = (u8 *)func_080D3BC0(0x18);
    }
    *(u32 *)(r4 + 4) = (u32)p;
    *(u32 *)(r4 + 8) = 0;
    *(u32 *)(r4 + 0xC) = 0;
    *(u8 *)p = 0;
    *(u32 *)(p + 4) = 0;
    q = *(u8 **)(r4 + 4);
    *(u32 *)(q + 8) = (u32)q;
    q = *(u8 **)(r4 + 4);
    *(u32 *)(q + 0xC) = (u32)q;
    return arg0;
}
