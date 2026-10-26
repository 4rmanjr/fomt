s32 __builtin_delete(s32 **);                           /* extern */
s32 func_080AC85C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E61A0;

void func_080E44B8(s32 **arg0, s32 arg1) {
    func_080AC85C(arg0 + 4, 2);
    *arg0 = &vtable_unk_080E61A0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
