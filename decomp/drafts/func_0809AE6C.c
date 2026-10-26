void func_0809AE6C(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r0_9;
    s32 temp_r1_3;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_3;
    s32 var_r3_2;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r1_4;
    u32 temp_r3_2;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r4;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r2_2;
    void *var_r3;
    void *var_r3_3;
    void *var_r5;

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
    temp_r0_4 = arg0 + 0xFC;
    var_r1_2 = 0;
    temp_r3_2 = arg0->unkFC;
    if (temp_r3_2 == 0) {
        var_r1_2 = 1;
    }
    if (var_r1_2 == 0) {
        temp_r0_5 = *(temp_r0_4 + (((temp_r3_2 - 1) * 8) + 4));
        if ((u32) arg0->unk128 < temp_r0_5) {
            arg0->unk128 = temp_r0_5;
        }
        temp_r0_6 = (temp_r0_4 + (((arg0->unkFC - 1) * 8) + 4))->unk4;
        if ((u32) arg0->unk12C < temp_r0_6) {
            arg0->unk12C = temp_r0_6;
        }
    }
    temp_r1 = arg0 + 8;
    temp_r4 = arg0 + 0xC;
    if ((u32) arg0->unkFC > 3U) {
        do {
            temp_r0_7 = arg0->unkFC;
            if (temp_r0_7 != 0) {
                temp_r0_8 = temp_r0_4 + ((temp_r0_7 * 8) + 4);
                temp_r1_2 = arg0 + 0x108;
                if (temp_r1_2 != temp_r0_8) {
                    var_r3 = temp_r1_2;
                    var_r5 = arg0 + 0x100;
                    var_r2 = (s32) (temp_r0_8 - var_r3) >> 3;
                    if (var_r2 > 0) {
                        do {
                            temp_r0_9 = var_r3->unk0;
                            temp_r1_3 = var_r3->unk4;
                            var_r3 += 8;
                            var_r5->unk0 = temp_r0_9;
                            var_r5->unk4 = temp_r1_3;
                            var_r5 += 8;
                            var_r2 -= 1;
                        } while (var_r2 > 0);
                    }
                }
                arg0->unkFC = (u32) (arg0->unkFC - 1);
            }
        } while ((u32) arg0->unkFC > 3U);
    }
    sp0 = 0;
    sp4 = 0;
    temp_r0_10 = arg0->unkFC;
    if (temp_r0_10 <= 3U) {
        temp_r2 = temp_r0_4 + ((temp_r0_10 * 8) + 4);
        if (temp_r2 != 0) {
            temp_r2->unk0 = sp0;
            temp_r2->unk4 = sp4;
        }
        arg0->unkFC = (u32) (arg0->unkFC + 1);
    }
    sp8 = 0;
    sp8.unk4 = 0;
    temp_r0_11 = arg0->unk8;
    if (temp_r0_11 < 1U) {
        var_r1_3 = temp_r4;
        temp_r0_12 = temp_r1 + ((temp_r0_11 * 8) + 4);
        if (var_r1_3 != temp_r0_12) {
            do {
                var_r1_3->unk0 = sp8;
                var_r1_3->unk4 = spC;
                var_r1_3 += 8;
            } while (var_r1_3 != temp_r0_12);
        }
        temp_r1_4 = arg0->unk8;
        var_r3_2 = 1 - temp_r1_4;
        var_r2_2 = temp_r1 + ((temp_r1_4 * 8) + 4);
        if (var_r3_2 != 0) {
            do {
                if (var_r2_2 != 0) {
                    var_r2_2->unk0 = (s32) sp8.unk0;
                    var_r2_2->unk4 = (s32) sp8.unk4;
                }
                var_r3_2 -= 1;
                var_r2_2 += 8;
            } while (var_r3_2 != 0);
        }
        arg0->unk8 = 1U;
        return;
    }
    var_r3_3 = temp_r4;
    var_r2_3 = 1;
    do {
        var_r3_3->unk0 = sp8;
        var_r3_3->unk4 = spC;
        var_r3_3 += 8;
        var_r2_3 -= 1;
    } while (var_r2_3 != 0);
    temp_r0_13 = temp_r1 + ((arg0->unk8 * 8) + 4);
    var_r1_4 = var_r3_3;
    if (var_r1_4 != temp_r0_13) {
        do {
            var_r1_4 += 8;
        } while (var_r1_4 != temp_r0_13);
    }
    arg0->unk8 = (u32) (arg0->unk8 - ((s32) (temp_r0_13 - var_r3_3) >> 3));
}
