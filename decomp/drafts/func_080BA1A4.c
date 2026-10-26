void func_080BA1A4(void *arg0) {
    s32 temp_r0;
    u16 var_r0;

    temp_r0 = arg0->unk8;
    switch (temp_r0) {                              /* irregular */
    case 0:
        arg0->unk20 = (u16) (arg0->unk20 - arg0->unk23);
        return;
    case 1:
        var_r0 = arg0->unk1E + arg0->unk23;
block_8:
        arg0->unk1E = var_r0;
        return;
    case 2:
        arg0->unk20 = (u16) (arg0->unk20 + arg0->unk23);
        return;
    case 3:
        var_r0 = arg0->unk1E - arg0->unk23;
        goto block_8;
    }
}
