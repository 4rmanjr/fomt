s32 *func_080D770C(s32 arg0, s32 arg1, s32 *arg2) {
    s32 tmp;
    s32 *var_r1;
    s32 *t;

    tmp = (arg1 << 3) - 8;
    var_r1 = (s32 *)(arg0 + tmp);
    *var_r1 = (s32)arg2;
    if (var_r1 != (s32 *)arg0) {
        do {
            t = var_r1;
            var_r1 -= 2;
            *var_r1 = (s32)t;
        } while (var_r1 != (s32 *)arg0);
    }
    return var_r1;
}
