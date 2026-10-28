void func_08007844(s32 *arg0, s32 arg1, u32 arg2) {
    if (arg2 <= 4U) {
        *arg0 &= ~(((1 << (1 << arg2)) - 1) << (0x1F & arg1));
    } else if (arg2 == 5) {
        *arg0 = 0;
    }
}
