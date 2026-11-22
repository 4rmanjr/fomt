s32 strcpy(s32, s32);                                 /* extern */

u32 func_08006C60(s32 arg0) {
    register u8 *rp4 __asm__("r4");
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    register s32 rp5 __asm__("r5");
    register s32 rp6 __asm__("r6");
    u8 *temp_r1;
    u8 temp_r0;
    u8 *base;
    u8 *endp;

    rp6 = 0;
    rp5 = 0;
    rp4 = (u8 *) (arg0 + 0x4629);
    strcpy((s32) rp4, arg0 + 0x461C);
    var_r1 = 0;
    do {
        temp_r0 = rp4[var_r1];
        if (temp_r0 == 0x5F) {
            rp5 += 1;
            var_r0 = var_r1 + 1;
        } else {
            if (temp_r0 == 0x20) {
                rp5 += 1;
            }
            rp6 = var_r1 + 1;
            var_r0 = rp6;
        }
        var_r1 = var_r0;
    } while (var_r1 <= 0xB);
    if (rp5 == 0xC) {
        rp6 = 0;
    } else {
        for (var_r2 = 0; var_r2 < rp6; var_r2 += 1) {
            base = (u8 *) (arg0 + 0x4629);
            temp_r1 = base + var_r2;
            if (*temp_r1 == 0x5F) {
                *temp_r1 = 0x20;
            }
        }
    }
    endp = (u8 *) (arg0 + 0x4629);
    endp[rp6] = 0;
    return (u32) ((0 - rp6) | rp6) >> 0x1F;
}
