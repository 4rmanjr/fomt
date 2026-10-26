void free(s32 arg0) {
    s32 *temp_r0;
    s32 *temp_r1;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *var_r3;

    if (arg0 == 0) {
        return;
    }
    var_r3 = (s32 *)(arg0 - 0x10);
    temp_r2 = (s32 *)var_r3[2];
    if ((temp_r2 != 0) && (temp_r2[1] == 0)) {
        temp_r2[0] = (s32) (temp_r2[0] + 0x10 + var_r3[0]);
        temp_r2[3] = var_r3[3];
        temp_r0 = (s32 *)var_r3[3];
        if (temp_r0 != 0) {
            temp_r0[2] = (s32)temp_r2;
        }
        var_r3 = temp_r2;
    }
    temp_r2_2 = (s32 *)var_r3[3];
    if ((temp_r2_2 != 0) && (temp_r2_2[1] == 0)) {
        var_r3[0] = (s32) (var_r3[0] + 0x10 + temp_r2_2[0]);
        var_r3[3] = temp_r2_2[3];
        temp_r1 = (s32 *)temp_r2_2[3];
        if (temp_r1 != 0) {
            temp_r1[2] = (s32)var_r3;
        }
    }
    var_r3[1] = 0;
}
