void func_0800934C(void **arg0, s16 arg1, s32 arg2, s32 arg3) {
    s16 var_r0;
    void *temp_r2;

    temp_r2 = *arg0;
    var_r0 = arg1;
    if ((s32) var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    temp_r2->unk4 = (s16) (0 - var_r0);
    temp_r2->unk8 = arg2;
    temp_r2->unkC = (s8) ((u32) ((0 - arg3) | arg3) >> 0x1F);
    temp_r2->unkE = 0xFFFF;
}
