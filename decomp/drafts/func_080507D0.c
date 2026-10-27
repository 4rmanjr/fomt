extern s32 gUnk_080F9F3C;

u8 func_080507D0(u32 arg0, s32 arg1) {
    s32 var_r1;
    u32 var_r2;

    var_r1 = arg1;
    var_r2 = arg0;
    if (var_r2 > 7U) {
        var_r2 = 0;
    }
    if ((u32) (var_r1 - 1) > 5U) {
        var_r1 = 1;
    }
    return *((u8 *)((var_r2 * 2 + var_r2) * 2 + var_r1 + (u8 *)&gUnk_080F9F3C));
}

/* ATTEMPT-NOTE opencode: *6 via (v*2+v)*2 (lsl/add/lsl); base (u8*) agar byte-arith + ldrb. */
