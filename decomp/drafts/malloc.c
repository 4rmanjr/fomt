extern void *gUnk_03000418;

void *malloc(s32 arg0) {
    s32 temp_r5;
    u32 temp_r1;
    u32 temp_r4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;
    void *var_r2;

    temp_r4 = ((u32) (arg0 + 3) >> 2) * 4;
    var_r2 = gUnk_03000418;
    if (var_r2 != 0) {
loop_1:
        temp_r5 = var_r2->unk4;
        if ((temp_r5 == 0) && (temp_r1 = var_r2->unk0, (temp_r1 >= temp_r4))) {
            if (temp_r1 >= (u32) (temp_r4 + 0x20)) {
                temp_r0 = var_r2 + temp_r4;
                temp_r3 = temp_r0 + 0x10;
                temp_r0->unk10 = (s32) ((temp_r1 - 0x10) - temp_r4);
                temp_r3->unk4 = temp_r5;
                temp_r3->unk8 = var_r2;
                temp_r3->unkC = (void *) var_r2->unkC;
                temp_r0_2 = var_r2->unkC;
                if (temp_r0_2 != 0) {
                    temp_r0_2->unk8 = temp_r3;
                }
                var_r2->unk0 = temp_r4;
                var_r2->unkC = temp_r3;
            }
            var_r2->unk4 = 1;
        } else {
            var_r2 = var_r2->unkC;
            if (var_r2 != 0) {
                goto loop_1;
            }
        }
        if (var_r2 == 0) {
            goto block_10;
        }
        return var_r2 + 0x10;
    }
block_10:
    return 0;
}
