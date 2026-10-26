s32 __builtin_delete(s32 **);                           /* extern */
extern ? vtable_unk_080E61A0;

void func_080E4544(s32 **arg0, s32 arg1) {
    *arg0 = &vtable_unk_080E61A0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
