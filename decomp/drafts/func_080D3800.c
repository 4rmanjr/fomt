void func_080D3800(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r3;
    u8 *var_r4;
    u8 *var_r5;

    var_r5 = arg0;
    var_r4 = arg1;
    *(u16 *)0x04000204 = (*(u16 *)0x04000204 & 0xFFFC) | 3;
    var_r3 = arg2 - 1;
    if (var_r3 != -1) {
        do {
            *var_r4 = *var_r5;
            var_r5 += 1;
            var_r4 += 1;
            var_r3 -= 1;
        } while (var_r3 != -1);
    }
}
