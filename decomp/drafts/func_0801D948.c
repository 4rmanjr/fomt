void func_0801D948(void *arg0) {
    void **var_r4;
    void *temp_r2;
    void *temp_r5;

    arg0->unk103C = 0;
    if (arg0->unk1038->unk34C4 != 0) {
        arg0->unk8->unk14->unk24();
        return;
    }
    var_r4 = arg0 + 8;
    temp_r5 = arg0 + 0x198;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                temp_r2->unk14->unk24(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}
