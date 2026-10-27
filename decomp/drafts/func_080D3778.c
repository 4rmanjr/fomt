void func_080D3778(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *dst;
    s32 n;

    dst = arg1;
    n = arg2 - 1;
    if (arg2 != 0) {
        arg2 = 0 - 1;
        do {
            *dst = *arg0;
            arg0 += 1;
            dst += 1;
            n -= 1;
        } while (n != arg2);
    }
}

/* ATTEMPT-NOTE opencode: dst-var (r4=arg1-copy), arg0 live sbg src; arg2=0-1 utk movs+rsbs(-1) di r2; incr arg0 dulu agar add-r4-dulu. */
