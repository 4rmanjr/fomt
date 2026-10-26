extern s32 gUnk_03000408;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
u32 func_08007D4C(s32 arg1) {
    s32 sp0;
    s32 temp_r1_2;
    s32 var_r2;
    u32 var_r0;
    u8 temp_r3;
    void *temp_r1;

    if (arg1 != 0) {
        sp0 = arg1;
        temp_r3 = sp0;
        var_r0 = 0;
        if ((u32) temp_r3 <= 0xFFU) {
            temp_r1_2 = *(gUnk_03000408 + ((temp_r3 >> 5) * 4)) & (1 << (0x1F & temp_r3));
            var_r0 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r1 = gUnk_03000408 + 0x20 + ((temp_r3 * 8) + 4);
            var_r2 = 0;
            if (((u32) (arg1 << 8) >> 0x10) == temp_r1->unk4) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                return (u32) (temp_r1->unk0 << 0x16) >> 0x16;
            }
            goto block_8;
        }
        goto block_8;
    }
block_8:
    return -1U;
}
