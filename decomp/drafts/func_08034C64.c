s32 func_080D7ECC(s32, s32, s32 *, s32, s32);       /* extern */
extern ? gUnk_080F29C0;

u32 func_08034C64(u16 *arg1) {
    s32 sp4;
    s32 temp_r1;
    s32 temp_r4;
    s32 var_r2;
    u16 temp_r1_2;
    u32 temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    temp_r5 = *((gUnk_080F29C0.unk0() * 4) + gUnk_080F29C0.unk8);
    if (temp_r5 != 0) {
        temp_r1_2 = *arg1;
        var_r2 = ((u32) (temp_r1_2 << 0x1B) >> 0x1B) - 6;
        if (var_r2 < 0) {
            var_r2 += 0x18;
        }
        sp4 = (var_r2 * 0x3C) + ((u32) (temp_r1_2 << 0x15) >> 0x1A);
        temp_r4 = temp_r5->unk4;
        temp_r0 = ((s32) (func_080D7ECC(temp_r4, temp_r4 + (temp_r5->unk0 * 8), &sp4, 0, 0) - temp_r4) >> 3) - 1;
        if (temp_r0 < (u32) temp_r5->unk0) {
            temp_r0_2 = ((temp_r0 * 8) + temp_r5->unk4)->unk4;
            if (temp_r0_2 != 0) {
                temp_r1 = ((u32) (temp_r0_2->unkA << 0x16) >> 0x16) ^ 0x1D;
                return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
        }
        goto block_6;
    }
block_6:
    return 0U;
}
