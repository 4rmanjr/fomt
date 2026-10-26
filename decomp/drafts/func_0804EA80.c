s32 func_080098AC();                                  /* extern */
extern s32 vtable_unk_080E7868;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_0804EA80(GenObj *arg0) {
    arg0->unk8 = &vtable_unk_080E7868;
    func_080098AC();
}
