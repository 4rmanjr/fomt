void func_080DE184(void *arg0) {
    void **var_r4;
    void *temp_r2;
    void *temp_r5;

    var_r4 = arg0 + 0xC;
    temp_r5 = (arg0->unk8 * 4) + arg0 + 0xC;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                temp_r2->unk4C->unkC(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}
