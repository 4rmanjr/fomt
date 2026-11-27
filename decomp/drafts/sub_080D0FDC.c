s32 sub_080D0FDC(s32 arg0, u32 arg1, u32 arg2) {
    if (arg2 & 8) arg0 += arg1 >> 3;
    if (arg2 & 4) arg0 += arg1 >> 2;
    if (arg2 & 2) arg0 += arg1 >> 1;
    return arg0;
}
