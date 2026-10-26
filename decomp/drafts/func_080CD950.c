s32 func_080CADF0(void *, s32);                       /* extern */
extern ? vtable_unk_080E85BC;

void func_080CD950(void *arg0, s32 arg1) {
    void *temp_r2;
    void *var_r0;

    arg0->unk210 = &vtable_unk_080E85BC;
    temp_r2 = arg0 + 0x214 + ((arg0->unk214 * 0xC) + 4);
    var_r0 = arg0 + 0x218;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0xC;
        } while (var_r0 != temp_r2);
    }
    func_080CADF0(arg0, arg1);
}
