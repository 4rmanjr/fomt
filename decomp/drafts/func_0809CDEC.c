u32 func_0809CDEC(s32 arg0) {
    s32 *var_r1;
    u32 var_r2;
    u32 var_r3;
    u32 cap;

    var_r2 = 0;
    var_r3 = 8;
    cap = 0x3B9AC9FFU;
    var_r1 = arg0 + 0x40;
    do {
        var_r2 += *var_r1;
        if (var_r2 > cap) {
            var_r2 = 0x3B9ACA00;
        }
        var_r1 += 2;
        var_r3 += 1;
    } while (var_r3 <= 0x3AU);
    return var_r2;
}
