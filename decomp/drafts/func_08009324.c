void __builtin_delete(void *);                          /* extern */

void func_08009324(void *arg0, s32 arg1) {
    __builtin_delete((void *) *(s32 *) arg0);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
