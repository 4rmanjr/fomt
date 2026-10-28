s32 __builtin_delete(void *);                         /* extern */
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                               /* extern */
s32 func_080D100C(s32, s32);                          /* extern */
extern s32 gUnk_03000414;
extern s32 vtable_unk_080E857C;
extern s32 vtable_unk_080E8594;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    void *unkC;
    s32 unk10;
    void *unk14;
} GenObj;
void func_080E5478(GenObj *arg0, s32 arg1) {
    arg0->unk14 = &vtable_unk_080E857C;
    func_08000528(4);
    func_080D100C(2, arg0->unk10);
    arg0->unkC = &vtable_unk_080E8594;
    gUnk_03000414 = arg0->unk8;
    if (arg0->unk4 != 0) {
        func_080004F4();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
