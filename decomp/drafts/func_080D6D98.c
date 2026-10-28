s32 *func_080D6D98(s32 arg0, s32 arg1, s32 *arg2) {
    s32 off = arg1 * 4 - 4;
    s32 var_r1 = arg0 + off;
    s32 temp_r0;

    *(s32 **)var_r1 = arg2;
    if (var_r1 != arg0) {
        do {
            temp_r0 = var_r1;
            var_r1 -= 4;
            *(s32 **)var_r1 = (s32 *)temp_r0;
        } while (var_r1 != arg0);
    }
    return (s32 *)var_r1;
}
