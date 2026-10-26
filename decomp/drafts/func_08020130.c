s32 func_0805E894(void *);                          /* extern */

s32 func_08020130(void *arg0) {
    s16 temp_r1;
    s32 temp_r0;
    s32 var_r4;
    u32 var_r1;
    void *temp_r2;

    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        var_r4 = 0;
        temp_r2 = temp_r0 + 0x30;
        var_r1 = 0;
        if (temp_r2->unkE != 0) {
            temp_r1 = temp_r2->unk10;
            var_r1 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if ((var_r1 == 0) || ((func_0805E894(temp_r2) << 0x18) != 0)) {
            var_r4 = 1;
        }
        return var_r4;
    }
    return 1;
}
