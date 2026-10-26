s32 func_08009324(void *, s32);                       /* extern */
s32 func_080098AC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
} GenObj;
void func_080094B8(GenObj *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E5B80;
    func_08009324(arg0 + 0xC, 2);
    func_080098AC(arg0, arg1);
}
