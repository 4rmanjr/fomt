s32 func_080BC254(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i = 0;
    s32 n = arg1 * 2;
    u8 *dst;
    u8 *src;

    if (i >= n) {
        goto end;
    }
    dst = (u8 *)(arg0 + 0xB35);
    src = (u8 *)(arg2 * 2 + arg3);
    do {
        dst[i] = *src++;
        i++;
    } while (i < n);
end:
    return arg0 + 0xB35;
}
