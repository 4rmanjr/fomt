void *func_080E0E80(void *arg0, s32 arg1, u32 *arg2) {
    s32 temp_r2;
    s32 var_r3;
    s32 var_r4;
    u8 *temp_r5;
    void *var_r6;

    var_r6 = arg0;
    var_r3 = arg1 - var_r6;
loop_1:
    if (var_r3 > 0) {
        temp_r2 = var_r3 >> 1;
        temp_r5 = var_r6 + temp_r2;
        var_r4 = 0;
        if ((u32) *temp_r5 < (u32) *arg2) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            var_r6 = temp_r5 + 1;
            var_r3 = (var_r3 - temp_r2) - 1;
        } else {
            var_r3 = temp_r2;
        }
        goto loop_1;
    }
    return var_r6;
}
