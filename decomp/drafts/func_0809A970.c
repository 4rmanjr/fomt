void func_0809A970(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *src;
    u16 v12;
    u32 d12;
    u8 v13;
    u32 d13;
    u16 *sp;
    u16 *dp;
    s32 i;

    src = (u8 *)arg0 + arg2 * 0x14;
    *(u16 *)arg1 = *(u16 *)src;
    v12 = *(u16 *)(src + 0x12);
    d12 = *(u16 *)(arg1 + 0x12);
    *(u16 *)(arg1 + 0x12) = (u16)(((v12 << 0x14) >> 0x14) | (d12 & 0xFFFFF000u));
    v13 = src[0x13];
    d13 = arg1[0x13];
    arg1[0x13] = (u8)((v13 & 0x10) | (d13 & ~0x10u));
    sp = (u16 *)(src + 2);
    dp = (u16 *)(arg1 + 2);
    i = 7;
    do {
        *dp = *sp;
        sp++;
        dp++;
        i--;
    } while (i >= 0);
}
