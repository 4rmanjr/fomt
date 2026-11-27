u8 *func_080E0E80(u8 *arg0, u8 *arg1, u32 *arg2) {
    s32 len;
    s32 half;
    u8 *mid;
    s32 gt;

    len = arg1 - arg0;
    while (len > 0) {
        half = len >> 1;
        mid = arg0 + half;
        gt = 0;
        if (*mid >= *arg2) {
            gt = 0;
        } else {
            gt = 1;
        }
        if (gt != 0) {
            arg0 = mid + 1;
            len = len - half - 1;
        } else {
            len = half;
        }
    }
    return arg0;
}
