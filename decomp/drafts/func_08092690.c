s32 func_080E3504();                                  /* extern */
extern s32 vtable_unk_080E7DD8;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_08092690(GenObj *arg0) {
    arg0->unk4 = &vtable_unk_080E7DD8;
    func_080E3504();
}
