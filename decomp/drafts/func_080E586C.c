s32 free();                                           /* extern */

void func_080E586C(void *arg0) {
    ? *temp_r0;
    ? *temp_r0_2;
    ? *temp_r0_3;
    ? *var_r4;

    temp_r0 = arg0->unk4;
    var_r4 = temp_r0->unk0;
    if (var_r4 != temp_r0) {
        do {
            temp_r0_2 = var_r4;
            var_r4 = *var_r4;
            if (temp_r0_2 != 0) {
                free();
            }
        } while (var_r4 != arg0->unk4);
    }
    temp_r0_3 = arg0->unk4;
    temp_r0_3->unk0 = temp_r0_3;
    temp_r0_3->unk4 = temp_r0_3;
}
