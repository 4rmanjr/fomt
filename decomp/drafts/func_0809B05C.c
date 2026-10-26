u32 func_0809B05C(void *arg0) {
    u32 *var_r1;

    var_r1 = arg0 + 8 + (((arg0->unk8 - 1) * 8) + 4);
    if ((u32) arg0->unk120 >= (u32) *var_r1) {
        var_r1 = arg0 + 0x120;
    }
    return *var_r1;
}
