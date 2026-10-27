s32 func_080098AC(void *, s32);                  /* extern */
extern s32 vtable_unk_080E7848;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_0804EE1C(GenObj *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E7848;
    func_080098AC(arg0, arg1);
}
