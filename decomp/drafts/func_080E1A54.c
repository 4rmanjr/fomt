s32 func_08076E0C(void *, s32);                  /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[2500];
    void *unk9C4;
} GenObj;
void func_080E1A54(GenObj *arg0, s32 arg1) {
    arg0->unk9C4 = &vtable_unk_080E5A28;
    func_08076E0C(arg0, arg1);
}
