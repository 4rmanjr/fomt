s32 func_08011588(u8 *arg0, s32 arg1) {
    s32 sum = 0;
    u8 *p;
    s32 n;
    if ((arg0 != 0) && (arg1 != 0)) {
        p = arg0;
        n = arg1;
        do {
            sum += *p;
            p++;
            n--;
        } while (n != 0);
    }
    return sum;
}
