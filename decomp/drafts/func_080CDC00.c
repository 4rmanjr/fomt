extern ? gUnk_0811788C;

s32 func_080CDC00(void *arg0) {
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r5;

    temp_r1 = arg0->unk0;
    temp_r0 = temp_r1->unk78;
    temp_r6 = temp_r0->unk298;
    arg0->unkC = temp_r6;
    temp_r5 = temp_r1->unk7C;
    temp_r4 = temp_r5->unk298 + 9;
    arg0->unk10 = temp_r4;
    temp_r3 = arg0->unk4;
    temp_r1_2 = &gUnk_0811788C + 8;
    var_r2 = *((temp_r3 * 0x10) + temp_r1_2);
    if (var_r2 <= 8) {
        if (var_r2 == 0) {
            if (temp_r0->unk27C == 0) {
                var_r2 = temp_r3;
            }
        } else if (var_r2 > temp_r6) {
            do {
                if (temp_r6 <= 4) {
                    var_r2 = temp_r6;
                } else {
                    var_r2 = *((var_r2 * 0x10) + temp_r1_2);
                }
            } while (var_r2 > temp_r6);
        }
        if (var_r2 == 4) {
            temp_r1_3 = arg0->unk8;
            if ((temp_r1_3 == arg0->unkC) && (temp_r1_3 > 4)) {
                goto block_26;
            }
        }
    } else {
        if (var_r2 == 9) {
            if (temp_r5->unk27C == 0) {
                var_r2 = 0;
            }
        } else if (var_r2 > temp_r4) {
            do {
                if (temp_r4 <= 0xD) {
                    var_r2 = temp_r4;
                } else {
                    var_r2 = *((var_r2 * 0x10) + temp_r1_2);
                }
            } while (var_r2 > temp_r4);
        }
        if (var_r2 == 0xD) {
            temp_r1_4 = arg0->unk8;
            if ((temp_r1_4 == arg0->unk10) && (temp_r1_4 > 0xD)) {
block_26:
                var_r2 = arg0->unk8;
            }
        }
    }
    if (var_r2 != temp_r3) {
        arg0->unk8 = temp_r3;
        arg0->unk4 = var_r2;
    }
    return var_r2;
}
