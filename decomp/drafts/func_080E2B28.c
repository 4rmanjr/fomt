void *func_080E2B28(void *arg0) {
    void *temp_r0;
    void *temp_r2;
    void *var_r1;

    var_r1 = arg0;
    temp_r0 = var_r1->unkC;
    if (temp_r0 != 0) {
        var_r1 = temp_r0;
        if (var_r1->unk8 != 0) {
            do {
                var_r1 = var_r1->unk8;
            } while (var_r1->unk8 != 0);
        }
    } else {
loop_5:
        temp_r2 = var_r1->unk4;
        if (var_r1 == temp_r2->unkC) {
            var_r1 = temp_r2;
            goto loop_5;
        }
        if (var_r1->unkC != temp_r2) {
            var_r1 = temp_r2;
        }
    }
    return var_r1;
}
