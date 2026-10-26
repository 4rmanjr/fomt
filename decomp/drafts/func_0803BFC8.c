s32 func_0803BE50(void *, s32);                       /* extern */
s32 func_080E0C38(s32, s32);                          /* extern */
extern ? vtable_unk_080E77A4;

void func_0803BFC8(void *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk4 = &vtable_unk_080E77A4;
    temp_r0 = arg0->unk8;
    if (temp_r0 != 0) {
        func_080E0C38(temp_r0, 3);
    }
    func_0803BE50(arg0, arg1);
}
