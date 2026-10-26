s32 func_0809AAD4(void *arg0) {
    s32 var_r3;
    u8 temp_r0;
    u8 var_r2;
    void *var_r1;

    var_r1 = arg0;
    var_r3 = 0;
    temp_r0 = var_r1->unkA06;
    if ((s32) temp_r0 > 0) {
        var_r2 = temp_r0;
        do {
            if (((u32) var_r1->unk0 <= 0xABU) && ((s32) (var_r1->unk13 << 0x1B) < 0)) {
                var_r3 += 1;
            }
            var_r1 += 0x14;
            var_r2 -= 1;
        } while (var_r2 != 0);
    }
    return var_r3;
}
