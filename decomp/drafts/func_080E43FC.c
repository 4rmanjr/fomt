void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

s32 func_080E43FC(s32 arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;
    void *var_r0;

    temp_r4 = arg0 + 8;
    temp_r4->unk4 = 0;
    var_r0 = malloc(0x18);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0x18);
    }
    temp_r4->unk4 = var_r0;
    temp_r4->unk8 = 0;
    temp_r4->unkC = 0;
    var_r0->unk0 = 0;
    var_r0->unk4 = 0;
    temp_r0 = temp_r4->unk4;
    temp_r0->unk8 = temp_r0;
    temp_r0_2 = temp_r4->unk4;
    temp_r0_2->unkC = temp_r0_2;
    return arg0;
}
