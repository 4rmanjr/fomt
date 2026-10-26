s32 func_080098AC(void *, s32);                       /* extern */
s32 func_08009984(void *);                            /* extern */
extern ? vtable_unk_080E5BB4;

void func_080098DC(void *arg0, s32 arg1) {
    arg0->unk8 = &vtable_unk_080E5BB4;
    func_08009984(arg0);
    func_080098AC(arg0 + 0x10, 2);
    func_080098AC(arg0, arg1);
}
