void *malloc(u32);
void *func_080D3BC0(u32);

u8 *func_080E43FC(u8 *arg0) {
    u8 *p;

    *(u32 *)(arg0 + 0xC) = 0;
    p = malloc(0x18);
    if (p == 0) p = func_080D3BC0(0x18);
    *(u32 *)(arg0 + 0xC) = (u32) p;
    *(u32 *)(arg0 + 0x10) = 0;
    *(u32 *)(arg0 + 0x14) = 0;
    *p = 0;
    *(u32 *)(p + 4) = 0;
    *(u32 *)(*(u32 *)(arg0 + 0xC) + 8) = *(u32 *)(arg0 + 0xC);
    *(u32 *)(*(u32 *)(arg0 + 0xC) + 0xC) = *(u32 *)(arg0 + 0xC);
    return arg0;
}
