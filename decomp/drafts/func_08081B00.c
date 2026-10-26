s32 __builtin_delete(s32);                            /* extern */
s32 func_080C8360(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7CCC;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1700];
    s32 unk6AC;
} GenObj;
void func_08081B00(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E7CCC;
    __builtin_delete(arg0->unk6AC);
    func_080C8360(arg0, arg1);
}
