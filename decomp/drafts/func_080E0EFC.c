void func_080E0EFC(u32 arg0, s32 arg1) {
    register u32 var_r5 __asm__("r5");
    u32 var_r1;
    register s8 *var_r4 __asm__("r4");
    register u32 var_r2 __asm__("r2");

    var_r5 = arg0;
    var_r4 = arg1 + 1;
    var_r2 = 0x19999999U;
    var_r1 = 0xA;
    if (var_r5 >= var_r1) {
        var_r4 += 1;
loop_2:
        var_r1 *= 0xA;
        if (var_r5 >= var_r1) {
            var_r4 += 1;
            if (var_r1 <= var_r2) {
                goto loop_2;
            }
        }
    }
    *var_r4 = 0;
    do {
        u32 var_q;
        u32 var_t;
        register u32 var_d __asm__("r1");

        var_r4 -= 1;
        var_q = var_r5 / 10U;
        var_t = var_q * 10;
        var_d = var_r5 - var_t;
        *var_r4 = var_d + 0x30;
        var_r5 = var_q;
    } while (var_r5 != 0);
}
