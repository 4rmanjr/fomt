typedef struct V4_25248 {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} V4_25248;

s32 func_080AC070(s32, V4_25248 *);                       /* extern */

s32 func_08025248(s32 arg0, s32 arg1, V4_25248 *arg2, s32 arg3, u32 arg4) {
    V4_25248 v;
    s32 i;
    u32 n;

    n = arg4;
    v = *arg2;
    i = 1;
    if ((u32) i > n) {
        goto done;
    }
    do {
        *(u16 *) ((u8 *) &v.a + 1 * 2) += arg3;
        *(u16 *) ((u8 *) &v.a + 3 * 2) += arg3;
        if ((func_080AC070(arg1, &v) << 0x18) == 0) {
            break;
        }
        i++;
    } while ((u32) i <= n);
done:
    return i;
}
