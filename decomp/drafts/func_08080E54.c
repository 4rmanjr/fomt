s32 func_080C8360();                                  /* extern */
extern s32 vtable_unk_080E7CB0;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_08080E54(GenObj *arg0) {
    arg0->unk4 = &vtable_unk_080E7CB0;
    func_080C8360();
}
