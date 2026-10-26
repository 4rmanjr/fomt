s32 _._13AScriptEngine(void *, s32);                  /* extern */
s32 func_080007EC(void *, s32);                       /* extern */
s32 func_080D4480(s32, s32);                          /* extern */
s32 func_080D7E64(void *, s32);                       /* extern */
extern s32 gUnk_0300040C;
extern ? vtable_unk_080E5BF8;

void func_08010158(void *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk0 = &vtable_unk_080E5BF8;
    gUnk_0300040C = 0;
    func_080D7E64(arg0 + 0x378, 2);
    _._13AScriptEngine(arg0 + 8, 2);
    temp_r0 = arg0->unk4;
    if (temp_r0 != 0) {
        func_080D4480(temp_r0, 3);
    }
    func_080007EC(arg0, arg1);
}
