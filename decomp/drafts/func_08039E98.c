void *__builtin_new(s32);                           /* extern */
s32 func_080A4740(void *, void **, s32, s32);         /* extern */
s32 func_080A4A00(void *, void **, s16, void **, s32, s32); /* extern */
extern s32 vtable_unk_080E602C;
extern s32 vtable_unk_080E76BC;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    void *unk24;
    u8 _pad28[32];
    s32 unk48;
    void *unk4C;
} GenObj;
void *func_08039E98(GenObj *arg0, void **arg1, s16 arg2, s8 arg3) {
    s8 sp8;
    u16 *spC;
    void **temp_r1;
    void **temp_r4;
    GenObj *temp_r6;
    GenObj *var_r5;

    arg0->unk4C = &vtable_unk_080E76BC;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    temp_r1 = (*arg1)->unk68(arg1);
    sp8 = 0;
    func_080A4A00((GenObj *)((u8 *)arg0 + 8), temp_r1, arg2, arg1, 3, 0x1B);
    if (arg3 == 1) {
        var_r5 = __builtin_new(0x4C);
        temp_r4 = (*arg1)->unk68(arg1);
        func_080A4740(var_r5, arg1, 2, 0xF);
        var_r5->unk24 = &vtable_unk_080E602C;
        temp_r6 = *temp_r4;
        temp_r6->unkC(&spC, temp_r4, 0x91A);
        temp_r6->unk10((GenObj *)((u8 *)var_r5 + 0x28), temp_r4, *spC);
        var_r5->unk48 = arg3;
    } else {
        var_r5 = 0;
    }
    arg0->unk48 = var_r5;
    return arg0;
}
