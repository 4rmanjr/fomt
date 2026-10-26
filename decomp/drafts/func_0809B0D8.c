s32 func_0809B0D8(void *arg0) {
    s32 *var_r1;
    void *temp_r1;

    temp_r1 = arg0 + 0xFC + (((arg0->unkFC - 1) * 8) + 4);
    var_r1 = temp_r1 + 4;
    if ((u32) arg0->unk12C >= (u32) temp_r1->unk4) {
        var_r1 = arg0 + 0x12C;
    }
    return *var_r1;
}
