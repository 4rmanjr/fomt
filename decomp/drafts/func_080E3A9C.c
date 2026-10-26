void func_080E3A9C(void *arg0, u32 arg1) {
    s32 var_r4;
    s8 *var_r0;

    switch (arg1) {
    case 0:
        arg0->unk1B8 = 0;
        return;
    case 1:
        arg0->unk1B8 = 1;
        var_r4 = 0x1B9;
block_7:
        var_r0 = arg0 + var_r4;
block_8:
        *var_r0 = 0;
    default:
        return;
    case 2:
        arg0->unk1B8 = 1;
        arg0->unk1B9 = 1;
        arg0->unk1BA = 1;
        var_r0 = arg0 + 0x1BB;
        goto block_8;
    case 3:
        arg0->unk1B8 = 1;
        arg0->unk1B9 = 1;
        arg0->unk1BA = 0;
        arg0->unk1BB = 1;
        return;
    case 4:
        arg0->unk1B8 = 1;
        arg0->unk1B9 = 1;
        arg0->unk1BA = 0;
        var_r4 = 0x1BB;
        goto block_7;
    }
}
