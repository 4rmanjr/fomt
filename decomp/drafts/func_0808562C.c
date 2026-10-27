s32 func_080C8360(void *, s32);                  /* extern */
extern s32 vtable_unk_080E7D30;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_0808562C(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D30;
    func_080C8360(arg0, arg1);
}
