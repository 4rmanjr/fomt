s32 memset(s32 arg0, u8 arg1, u32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r2;
    u8 var_r4;
    void *temp_r1;
    void *temp_r1_2;

    var_r2 = arg2;
    var_r4 = arg1;
    var_r3 = arg0;
    if ((var_r2 > 3U) && !(3 & arg0)) {
        var_r1 = arg0;
        var_r4 = var_r4;
        temp_r3 = (var_r4 << 8) | var_r4;
        temp_r3_2 = temp_r3 | (temp_r3 << 0x10);
        if (var_r2 > 0xFU) {
            do {
                var_r1->unk0 = temp_r3_2;
                temp_r1 = var_r1 + 4;
                var_r1->unk4 = temp_r3_2;
                temp_r1_2 = temp_r1 + 4;
                temp_r1->unk4 = temp_r3_2;
                temp_r1_2->unk4 = temp_r3_2;
                var_r1 = temp_r1_2 + 4 + 4;
                var_r2 -= 0x10;
            } while (var_r2 > 0xFU);
        }
loop_6:
        if (var_r2 > 3U) {
            *var_r1 = temp_r3_2;
            var_r1 += 4;
            var_r2 -= 4;
            goto loop_6;
        }
        var_r3 = var_r1;
    }
loop_9:
    temp_r0 = var_r2;
    var_r2 -= 1;
    if (temp_r0 != 0) {
        *var_r3 = var_r4;
        var_r3 += 1;
        goto loop_9;
    }
    return arg0;
}
