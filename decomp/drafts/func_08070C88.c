s32 func_08076E0C(void *, s32);                  /* extern */
extern s32 vtable_unk_080E7B2C;

typedef struct GenObj {
    u8 _pad0[1460];
    void *unk5B4;
} GenObj;
void func_08070C88(GenObj *arg0, s32 arg1) {
    arg0->unk5B4 = &vtable_unk_080E7B2C;
    func_08076E0C(arg0, arg1);
}
