void func_0801D8CC(void *arg0) {
    void **var_r4;
    void **var_r4_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r5;
    void *temp_r5_2;

    arg0->unk103C = 1;
    if (arg0->unk1038->unk34C4 != 0) {
        var_r4 = arg0 + 8;
        temp_r5 = arg0 + 0x198;
        if (var_r4 != temp_r5) {
            do {
                temp_r2 = *var_r4;
                if (temp_r2 != 0) {
                    temp_r2->unk14->unk20(temp_r2);
                }
                var_r4 += 4;
            } while (var_r4 != temp_r5);
        }
    } else {
        var_r4_2 = arg0 + 8;
        temp_r5_2 = arg0 + 0x198;
        if (var_r4_2 != temp_r5_2) {
            do {
                temp_r2_2 = *var_r4_2;
                if (temp_r2_2 != 0) {
                    temp_r2_2->unk14->unk20(temp_r2_2);
                }
                var_r4_2 += 4;
            } while (var_r4_2 != temp_r5_2);
        }
    }
}
