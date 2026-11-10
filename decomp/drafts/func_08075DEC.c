s32 func_080098AC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7B68;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_08075DEC(GenObj *arg0, s32 arg1) {
    arg0->unk8 = (s32) &vtable_unk_080E7B68;
    func_080098AC(arg0, arg1);
}
