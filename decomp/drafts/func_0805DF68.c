void func_0805DF68(u8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4) {
    s32 i;
    u16 n;

    i = *(s16 *)(arg0 + 0x2CE);
    *(u16 *)(arg0 + 0x14E + (i << 3)) = arg1;
    *(u16 *)(arg0 + 0x150 + (i << 3)) = arg2;
    *(u16 *)(arg0 + 0x152 + (i << 3)) = arg3;
    *(u16 *)(arg0 + 0x154 + (i << 3)) = arg4;
    n = *(u16 *)(arg0 + 0x2CE);
    *(u16 *)(arg0 + 0x2CE) = n + 1;
}
