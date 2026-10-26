void func_08010024(s32 *arg0) {
    s32 temp_r5;
    s32 var_r1;
    void *temp_r0;

    temp_r5 = arg0 + 4;
    temp_r0 = arg0 + (*arg0 + 4);
    var_r1 = temp_r5;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 1;
        } while (var_r1 != temp_r0);
    }
    *arg0 -= temp_r0 - temp_r5;
}
