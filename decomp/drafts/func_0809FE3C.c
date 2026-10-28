s32 *func_0809EACC(s32);                              /* extern */
extern s32 gUnk_08104108;
extern s32 gUnk_08104258;

s32 *func_0809FE3C(s32 arg0, u32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (arg1 <= 0x2AU) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        return &gUnk_08104108;
    }
    switch (arg1) {                                 /* irregular */
    case 35:
        return func_0809EACC(arg0 + 4);
    case 0:
        /* fallthrough */
    default:
        {
            u8 *p = (u8 *)&gUnk_08104258;
            arg1 = (u32)(p + (arg1 << 3));
            return *(s32 *)arg1;
        }
    }
}
