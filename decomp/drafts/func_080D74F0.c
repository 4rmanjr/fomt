s32 func_080D7480(u8 *, s32);
void func_080D6ECC(u8 *);

u32 func_080D74F0(u8 *arg0, u32 arg1) {
    s32 sp0;
    s32 var_r0;
    s32 var_r3;
    u32 t;
    u32 v;
    u32 var_r1;
    u8 *p;

    if (arg1 <= 7U) {
        var_r3 = 0;
        p = arg0 + 4;
        do {
            t = *p;
            if (t == 0) {
                sp0 = var_r3;
                v = (u32)func_080D7480(p, (s32)arg1);
                var_r0 = 0;
                if (v <= 0x7FU) {
                    var_r0 = 1;
                }
                if (var_r0 != 0) {
                    *(u8 *)(arg0 + 1) = (u8)t;
                    var_r1 = 0;
                    if (*(u8 *)(arg0 + 4) != 0) {
                        var_r1 = (u32)(0 - (u32)*(u8 *)(arg0 + 0x20)) >> 0x1F;
                    }
                    *(u8 *)arg0 = (u8)var_r1;
                    return ((u32)var_r3 << 7) | v;
                }
            }
            p += 0x1C;
            var_r3 += 1;
        } while (var_r3 <= 1);
        return 0x100;
    }
    if ((arg1 == 8U) && (*(u8 *)(arg0 + 1) != 0)) {
        func_080D6ECC(arg0);
        return 0;
    }
    return 0x100;
}
