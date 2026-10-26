s32 __builtin_delete(void *);                         /* extern */
s32 func_080D6B00(void *, s32);                       /* extern */
s32 func_080D6C08(void *, s32);                       /* extern */

void func_080D4480(void *arg0, s32 arg1) {
    s32 temp_r1;
    void *var_r0;

    temp_r1 = arg0 + 0x1CA0 + (arg0->unk1CA0 + 4);
    var_r0 = arg0 + 0x1CA4;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 1;
        } while (var_r0 != temp_r1);
    }
    func_080D6B00(arg0 + 0x1C38, 2);
    func_080D6C08(arg0 + 0x1AA8, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
