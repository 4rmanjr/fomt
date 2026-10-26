void func_080B3948(s32 arg0) {
    s32 *var_r2;
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r0_2;
    void *var_r1;

    var_r2 = arg0 + 0x85C;
    var_r1 = arg0 + 0x906;
    var_r4 = 4;
    do {
        temp_r0 = *var_r2;
        if ((temp_r0 <= 2) && (temp_r0 >= 1)) {
            temp_r0_2 = var_r1->unk0 + 1;
            var_r1->unk0 = temp_r0_2;
            if (temp_r0_2 == 0x3C) {
                var_r1->unk0 = 0U;
                *var_r2 = 0;
                var_r1->unk19 = 1;
            }
        }
        var_r2 += 4;
        var_r1 += 1;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
