s32 __builtin_delete(s32 *);                            /* extern */

void func_080ADC84(s32 *arg0, s32 arg1) {
    __builtin_delete(*arg0);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
