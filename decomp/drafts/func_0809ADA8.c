void func_0809ADA8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_r1_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r6;
    void *var_r3;
    void *var_r4;

    temp_r3 = arg0 + 8;
    var_r1 = 0;
    temp_r0 = arg0->unk8;
    if (temp_r0 == 0) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        temp_r0_2 = *(temp_r3 + (((temp_r0 - 1) * 8) + 4));
        if ((u32) arg0->unk120 < temp_r0_2) {
            arg0->unk120 = temp_r0_2;
        }
        temp_r0_3 = (temp_r3 + (((arg0->unk8 - 1) * 8) + 4))->unk4;
        if ((u32) arg0->unk124 < temp_r0_3) {
            arg0->unk124 = temp_r0_3;
        }
    }
    temp_r6 = arg0 + 8;
    var_r1_2 = arg0->unk8;
    if (var_r1_2 > 0x1DU) {
        do {
            if (var_r1_2 != 0) {
                temp_r0_4 = temp_r6 + ((var_r1_2 * 8) + 4);
                temp_r1 = arg0 + 0x14;
                if (temp_r1 != temp_r0_4) {
                    var_r3 = temp_r1;
                    var_r4 = arg0 + 0xC;
                    var_r2 = (s32) (temp_r0_4 - var_r3) >> 3;
                    if (var_r2 > 0) {
                        do {
                            temp_r0_5 = var_r3->unk0;
                            temp_r1_2 = var_r3->unk4;
                            var_r3 += 8;
                            var_r4->unk0 = temp_r0_5;
                            var_r4->unk4 = temp_r1_2;
                            var_r4 += 8;
                            var_r2 -= 1;
                        } while (var_r2 > 0);
                    }
                }
                arg0->unk8 = (u32) (arg0->unk8 - 1);
            }
            var_r1_2 = arg0->unk8;
        } while (var_r1_2 > 0x1DU);
    }
    sp0 = 0;
    sp4 = 0;
    if (var_r1_2 <= 0x1DU) {
        temp_r2 = temp_r6 + ((var_r1_2 * 8) + 4);
        if (temp_r2 != 0) {
            temp_r2->unk0 = sp0;
            temp_r2->unk4 = sp4;
        }
        arg0->unk8 = (u32) (arg0->unk8 + 1);
    }
}
