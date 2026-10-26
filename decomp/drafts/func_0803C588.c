s32 func_0803BE50(void *, s32);                       /* extern */
s32 func_0803C7A0(void *, s32);                       /* extern */
extern ? vtable_unk_080E77E0;

void func_0803C588(void *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C7A0(arg0 + 8, 2);
    func_0803BE50(arg0, arg1);
}
