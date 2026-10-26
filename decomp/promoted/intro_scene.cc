
// DECOMP-MATCHED func_080036F8 (dari intro_scene.s; cek manusia sebelum ke src/)
s32 __builtin_new(s32);                               /* extern */
s32 func_08000914();                                /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080036F8(GenObj *arg0) {
    arg0->unk0 = &vtable_unk_080E5A18;
    __builtin_new(0x6D34);
    arg0->unk4 = func_08000914();
    return arg0;
}

// DECOMP-MATCHED func_0800371C (dari intro_scene.s; cek manusia sebelum ke src/)
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A18;

typedef struct GenObj {
    void *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_0800371C(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5A18;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
