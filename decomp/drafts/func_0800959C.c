s32 func_0800956C(void *);                            /* extern */
s32 func_080098DC(void *, s32);                       /* extern */
extern ? vtable_unk_080E5B90;

void func_0800959C(void *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E5B90;
    func_0800956C(arg0);
    func_080098DC(arg0, arg1);
}
