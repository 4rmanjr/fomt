s32 __builtin_delete(s32 *);                            /* extern */
s32 free();                                           /* extern */
s32 func_08007184(s32 *, s32);                          /* extern */
s32 func_080073E0(s32 *, s32);                          /* extern */

void func_08007714(s32 *arg0, s32 arg1) {
    ? *temp_r0;
    ? *var_r4;
    s32 temp_r5;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        temp_r5 = temp_r0->unk4;
        var_r4 = temp_r0->unk0;
        if (var_r4 != temp_r5) {
            do {
                func_080073E0(var_r4, var_r4->unk4);
                func_08007184(var_r4, 2);
                var_r4 += 8;
            } while (var_r4 != temp_r5);
        }
        if (temp_r0->unk0 != 0) {
            free();
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
