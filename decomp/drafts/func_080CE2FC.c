s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_08527094;

void *func_080CE2FC(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;
    void *temp_r6;
    void *var_r0;

    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 2);
    temp_r4_2 = arg0 + 0xC;
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 + 8;
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r6 = arg0 + 0x1C;
    func_0805E6CC(temp_r6, &gUnk_08527094);
    temp_r0 = arg0 + 0x4C;
    arg0->unk4C = 0;
    temp_r0->unk2 = 0;
    func_0805E824(temp_r0 + 4, temp_r6, 0, 0x100);
    temp_r0_2 = arg0 + 0x64;
    arg0->unk64 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r0_3 = temp_r0_2 + 0x1C;
    temp_r0_2->unk1C = 0;
    temp_r0_4 = temp_r0_3 + 4;
    temp_r0_3->unk4 = 0;
    temp_r0_4->unk2 = 0;
    func_0805E824(temp_r0_4 + 4, temp_r6, 1, 0x100);
    temp_r0_5 = arg0 + 0x9C;
    arg0->unk9C = 0;
    temp_r0_5->unk2 = 0;
    temp_r0_5->unk4 = 0;
    temp_r0_5->unk6 = 0;
    temp_r0_5->unk8 = 0;
    temp_r0_5->unkC = 0;
    temp_r0_5->unk10 = 0;
    temp_r0_5->unk11 = 0;
    temp_r0_5->unk14 = 0;
    temp_r0_5->unk18 = 0;
    temp_r0_5->unk1C = 0;
    (temp_r0_5 + 0x1C)->unk4 = 0;
    temp_r5 = arg0 + 0xC0;
    temp_r5->unk4 = 0;
    var_r0 = malloc(0xC);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0xC);
    }
    var_r0->unk0 = var_r0;
    var_r0->unk4 = var_r0;
    temp_r5->unk4 = var_r0;
    return arg0;
}
