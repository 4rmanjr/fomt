s32 __builtin_delete(s32 *);                          /* extern */
s32 func_0804F69C(s32, s32);                          /* extern */

void func_08050D0C(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_0804F69C(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
