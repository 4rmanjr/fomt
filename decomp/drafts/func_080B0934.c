void func_080B0934(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    arg0->unk500->unk10 = 0;
    var_r2 = 0;
    do {
        temp_r1 = var_r2 * 4;
        (temp_r1 + arg0)->unk618->unk10 = 0;
        (temp_r1 + arg0)->unk6F4->unk10 = 0;
        var_r2 += 1;
    } while (var_r2 <= 4);
}
