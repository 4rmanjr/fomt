s32 __builtin_delete(s32 **);                         /* extern */
extern char vtable_unk_080E78F0;

void func_080E103C(s32 **arg0, s32 arg1) {
    *arg0 = (s32 *) &vtable_unk_080E78F0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
