void func_08059780(void *arg0, s32 arg1) {
    s32 var_r3;
    u16 *var_r2;
    u16 temp_r0_2;
    u16 temp_r3;
    u16 var_r3_2;
    u32 var_r2_2;
    void *temp_r0;

    arg0->unk1420 = 0U;
    var_r3 = 0;
    var_r2 = arg0 + 0x1456;
    do {
        if (var_r3 != arg0->unk140A) {
            arg0->unk1420 = (u16) (*var_r2 + arg0->unk1420);
        }
        var_r2 += 0x2C;
        var_r3 += 1;
    } while (var_r3 <= 3);
    var_r2_2 = (u32) (arg0->unk1410 - (0x32 * (s16) arg0->unk1420)) / 50U;
    if ((s32) var_r2_2 > 0x63) {
        var_r2_2 = 0x63;
    }
    temp_r0 = arg0 + (arg0->unk140A * 0x2C);
    temp_r3 = temp_r0->unk1456;
    if (((s16) temp_r0->unk1456 != var_r2_2) || (arg1 <= 0)) {
        if ((temp_r3 == 0) && (arg1 < 0)) {
            var_r3_2 = (u16) var_r2_2;
        } else {
            temp_r0_2 = (s16) temp_r3 + arg1;
            var_r3_2 = temp_r0_2;
            if ((s32) (s16) temp_r0_2 > (s32) var_r2_2) {
                var_r3_2 = (u16) var_r2_2;
            }
            if ((s32) (var_r3_2 << 0x10) < 0) {
                goto block_14;
            }
        }
    } else {
block_14:
        var_r3_2 = 0;
    }
    (arg0 + (arg0->unk140A * 0x2C))->unk1456 = var_r3_2;
    arg0->unk1420 = (u16) ((s16) var_r3_2 + arg0->unk1420);
    arg0->unk1414 = (s32) (arg0->unk1410 - (0x32 * (s16) arg0->unk1420));
}
