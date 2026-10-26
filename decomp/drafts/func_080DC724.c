s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(s32, s32);                          /* extern */
extern ? vtable_unk_080E65E0;

void func_080DC724(void *arg0, s32 arg1) {
    func_080A47B4(arg0 + 0x8C, 2);
    func_080A47B4(arg0 + 0x48, 2);
    func_080A47B4(arg0 + 8, 2);
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
