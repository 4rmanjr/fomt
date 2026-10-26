s32 func_08007128(s32);                               /* extern */
s32 func_08007874();                                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

s32 func_080E2DC8(s32 arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r0;
    void *var_r0_2;

    func_08007874();
    temp_r4 = arg0 + 4;
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
    func_08007128(arg0 + 0x14);
    temp_r4_2 = arg0 + 0x18;
    temp_r4_2->unk4 = 0;
    var_r0_2 = malloc(0x18);
    if (var_r0_2 == 0) {
        var_r0_2 = func_080D3BC0(0x18);
    }
    temp_r4_2->unk4 = var_r0_2;
    temp_r4_2->unk8 = 0;
    temp_r4_2->unkC = 0;
    var_r0_2->unk0 = 0;
    var_r0_2->unk4 = 0;
    temp_r0_3 = temp_r4_2->unk4;
    temp_r0_3->unk8 = temp_r0_3;
    temp_r0_4 = temp_r4_2->unk4;
    temp_r0_4->unkC = temp_r0_4;
    return arg0;
}
