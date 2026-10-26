extern s32 gUnk_03000408;

s32 func_08007CD8(s32 arg1) {
    s32 sp0;
    s32 temp_r1;
    s32 var_r2;
    u16 temp_r0;
    u16 temp_r2;
    u32 var_r0;
    u8 temp_r3;
    void *temp_r1_2;

    if (arg1 != 0) {
        sp0 = arg1;
        temp_r3 = sp0;
        var_r0 = 0;
        if ((u32) temp_r3 <= 0xFFU) {
            temp_r1 = *(gUnk_03000408 + ((temp_r3 >> 5) * 4)) & (1 << (0x1F & temp_r3));
            var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r1_2 = gUnk_03000408 + 0x20 + ((temp_r3 * 8) + 4);
            var_r2 = 0;
            if (((u32) (arg1 << 8) >> 0x10) == temp_r1_2->unk4) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                temp_r2 = temp_r1_2->unk2;
                temp_r0 = temp_r2 + 1;
                temp_r1_2->unk2 = temp_r0;
                if ((temp_r0 << 0x10) != 0) {
                    return arg1;
                }
                temp_r1_2->unk2 = temp_r2;
                goto block_10;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}
