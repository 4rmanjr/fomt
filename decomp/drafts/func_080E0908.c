s32 _._13AScriptEngine(void *, s32);                  /* extern */
s32 free();                                           /* extern */
s32 func_080007EC(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08009324(s32, s32);                          /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E7708;
extern s32 vtable_unk_080E7714;
extern s32 vtable_unk_080E7728;

typedef struct GenObj {
    void *unk0;
    u8 _pad4[4];
    void *unk8;
    u8 _padC[844];
    void *unk358;
    s32 unk35C;
    u8 _pad360[8];
    s32 unk368;
    s32 unk36C;
    s32 unk370;
    u8 _pad374[20];
    s32 unk388;
} GenObj;
void func_080E0908(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    void **temp_r1;
    void **temp_r1_2;

    arg0->unk8 = &vtable_unk_080E7708;
    arg0->unk358 = &vtable_unk_080E7714;
    arg0->unk0 = &vtable_unk_080E7728;
    if (arg0->unk388 != 0) {
        free();
    }
    temp_r0 = arg0->unk370;
    if (temp_r0 != 0) {
        func_08009324(temp_r0, 3);
    }
    temp_r0_2 = arg0->unk36C;
    if (temp_r0_2 != 0) {
        func_08050D0C(temp_r0_2, 3);
    }
    temp_r1 = arg0->unk368;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk35C;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    _._13AScriptEngine(arg0 + 0xC, 0);
    func_080086BC(arg0 + 4, 0);
    func_080007EC(arg0, arg1);
}
