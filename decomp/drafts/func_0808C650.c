s32 func_080E3504();                                  /* extern */
extern s32 vtable_unk_080E7D84;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_0808C650(GenObj *arg0) {
    arg0->unk4 = &vtable_unk_080E7D84;
    func_080E3504();
}
