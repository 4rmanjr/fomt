s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(void *, s32);                       /* extern */
s32 func_08094268(void *, s32);                       /* extern */
s32 func_08094814(s32, s32);                          /* extern */
s32 func_080D02EC();                                  /* extern */
extern s32 vtable_unk_080E7DF4;
extern s32 vtable_unk_080E7F00;
extern s32 vtable_unk_080E7F0C;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    void *unk8;
    u8 _padC[444];
    s32 unk1C8;
} GenObj;
void func_08093308(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk8 = &vtable_unk_080E7DF4;
    arg0->unk4 = &vtable_unk_080E7F00;
    func_08050D0C(arg0 + 0x1D0, 2);
    temp_r0 = arg0->unk1C8;
    if (temp_r0 != 0) {
        func_08094814(temp_r0, 3);
    }
    arg0->unk8 = &vtable_unk_080E7F0C;
    func_080D02EC();
    func_08094268(arg0 + 8, 0);
    func_080086BC(arg0, arg1);
}
