s32 func_08011464(s32 *arg0, u32 arg1) {
    register s32 *ptr __asm__ ("r4") = arg0;
    register u32 var_r2 __asm__ ("r2") = arg1;
    register s32 temp_r3 __asm__ ("r3");
    register s32 shift __asm__ ("r1");
    s32 mask;

    if (var_r2 > 0x63U) {
        var_r2 = 0x63;
    }
    temp_r3 = *ptr;
    if ((u32) ((u32) (temp_r3 << 0xE) >> 0x1B) < var_r2) {
        shift = 0x1F;
        shift &= var_r2;
        shift <<= 0xD;
        mask = 0xFFFC1FFF;
        mask &= temp_r3;
        *ptr = shift | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE worker-11464: register-pin r4/r2/r3/r1 agar push{r4,lr}+regalloc pas; pola store tiru 11498 (shift-var, mask-var). */
