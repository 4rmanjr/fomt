? *func_080D6D98(s32 arg0, s32 arg1, ? *arg2) {
    ? *temp_r0;
    ? *var_r1;

    var_r1 = arg0 + ((arg1 * 4) - 4);
    *var_r1 = arg2;
    if (var_r1 != arg0) {
        do {
            temp_r0 = var_r1;
            var_r1 -= 4;
            *var_r1 = temp_r0;
        } while (var_r1 != arg0);
    }
    return var_r1;
}
