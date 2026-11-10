s32 func_080B9464(s32 arg1, s32 arg2) {
    u32 a;
    u32 b;
    s32 var_r2;
    s32 t1;
    s32 t2;

    a = (u32) arg1 << 0x10;
    b = (u32) arg2 << 0x10;
    t1 = (s32) (u32) (b >> 0x18) - 0x4C;
    t2 = (s32) (u32) (a >> 0x18) - 0x78;
    var_r2 = 0x384000 - (((t2 * t2) * 0x640) + ((t1 * t1) * 0x900));
    if ((u32) (var_r2 - 1) <= 0x2C6FEU) {
        var_r2 = 0;
    }
    return var_r2;
}
