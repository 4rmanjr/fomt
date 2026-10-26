void func_08077E34(s32 arg1, u16 *arg2) {
    u16 *var_r2;
    u16 *var_r3_2;
    u32 var_r1;
    u32 var_r3;

    var_r2 = arg2;
    var_r3 = 0;
    do {
        var_r1 = 0;
        var_r3_2 = (arg1 << 0xB) + ((var_r3 << 6) + 0x06000000);
loop_2:
        *var_r3_2 = *var_r2;
        var_r2 += 2;
        var_r3_2 += 2;
        var_r1 += 1;
        if (var_r1 <= 0x1DU) {
            goto loop_2;
        }
        var_r3 += 1;
    } while (var_r3 <= 0xCU);
}
