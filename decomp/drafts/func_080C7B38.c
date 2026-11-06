extern s32 gUnk_08108268;

u16 func_080C7B38(s32 arg0) {
    u8 *base = (u8 *)&gUnk_08108268;
    s32 offset1 = 0x8BC;
    s32 r1;
    u16 *p1;
    s32 r2;

    r1 = *(s32 *)(arg0 + offset1);
    p1 = (u16 *)(base + (r1 * 2));
    r2 = *(s32 *)(arg0 + 0x980);
    return (r2 * 0x54) + *p1;
}
