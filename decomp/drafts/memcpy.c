s32 memcpy(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r3;
    void *temp_r3_2;

    var_r2 = arg2;
    var_r4 = arg0;
    var_r3 = arg1;
    if ((var_r2 > 0xFU) && !((var_r3 | arg0) & 3)) {
        var_r1 = arg0;
        do {
            temp_r3 = var_r3 + 4;
            var_r1->unk0 = (s32) var_r3->unk0;
            temp_r1 = var_r1 + 4;
            temp_r3_2 = temp_r3 + 4;
            var_r1->unk4 = (s32) var_r3->unk4;
            temp_r1_2 = temp_r1 + 4;
            temp_r1->unk4 = (s32) temp_r3->unk4;
            var_r3 = temp_r3_2 + 4 + 4;
            temp_r1_2->unk4 = (s32) temp_r3_2->unk4;
            var_r1 = temp_r1_2 + 4 + 4;
            var_r2 -= 0x10;
        } while (var_r2 > 0xFU);
        if (var_r2 > 3U) {
            do {
                temp_r0 = *var_r3;
                var_r3 += 4;
                *var_r1 = temp_r0;
                var_r1 += 4;
                var_r2 -= 4;
            } while (var_r2 > 3U);
        }
        var_r4 = var_r1;
    }
    var_r2_2 = var_r2 - 1;
    if (var_r2_2 != -1) {
        do {
            *var_r4 = (u8) *var_r3;
            var_r3 += 1;
            var_r4 += 1;
            var_r2_2 -= 1;
        } while (var_r2_2 != -1);
    }
    return arg0;
}
