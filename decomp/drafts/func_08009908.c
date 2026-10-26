s32 func_08009908(void *arg0) {
    void *temp_r4;
    void *var_r5;

    var_r5 = arg0->unkC;
loop_1:
    if (var_r5 != (arg0 + 0x10)) {
        temp_r4 = var_r5;
        var_r5 = var_r5->unk4;
        if ((temp_r4->unk8->unk8(temp_r4) << 0x18) == 0) {
            arg0->unk8->unk14(arg0, temp_r4);
        }
        goto loop_1;
    }
    return 1;
}
