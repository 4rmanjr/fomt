extern void *gUnk_03000404;

u32 func_080074C0(s32 arg1) {
    s32 temp_r1;
    s32 var_r2;
    u32 temp_r2;
    u32 var_r0;
    u32 var_r0_2;

    if (arg1 != 0) {
        temp_r2 = (u32) (arg1 << 0x1C) >> 0x1C;
        var_r0_2 = 0;
        if (temp_r2 <= 0xFU) {
            temp_r1 = gUnk_03000404->unk44 & (1 << temp_r2);
            var_r0_2 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0_2 != 0) {
            var_r2 = 0;
            if (((u32) (arg1 << 0xC) >> 0x10) == ((temp_r2 * 4) + gUnk_03000404)->unk6) {
                var_r2 = 1;
            }
            var_r0 = temp_r2;
            if (var_r2 == 0) {
                goto block_7;
            }
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_r0 = -1U;
    }
    return var_r0;
}
