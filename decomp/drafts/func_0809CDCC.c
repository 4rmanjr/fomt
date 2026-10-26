s32 func_0809CDCC(s32 arg0) {
    s32 *var_r1;
    s32 var_r3;
    u32 var_r2;

    var_r3 = 1;
    var_r2 = 8;
    var_r1 = arg0 + 0x40;
    do {
        if (*var_r1 == 0) {
            var_r3 = 0;
        }
        var_r1 += 8;
        var_r2 += 1;
    } while (var_r2 <= 0x3AU);
    return var_r3;
}
