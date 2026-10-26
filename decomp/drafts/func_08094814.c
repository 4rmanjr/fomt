s32 __builtin_delete(void *);                         /* extern */
s32 __builtin_vec_delete();                           /* extern */

void func_08094814(void *arg0, s32 arg1) {
    if (arg0->unk4 != 0) {
        __builtin_vec_delete();
    }
    if (arg0->unk8 != 0) {
        __builtin_vec_delete();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
