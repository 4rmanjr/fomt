s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
extern ? vtable_unk_080E65E0;

void func_080DC764(void *arg0, s32 arg1) {
    s32 temp_r5;
    void *var_r4;

    temp_r5 = arg0 + 0xCC + ((arg0->unkCC * 0x48) + 4);
    var_r4 = arg0 + 0xD0;
    if (var_r4 != temp_r5) {
        do {
            func_080A47B4(var_r4 + 4, 2);
            var_r4 += 0x48;
        } while (var_r4 != temp_r5);
    }
    func_080A47B4(arg0 + 0x8C, 2);
    func_080A47B4(arg0 + 0x48, 2);
    func_080A47B4(arg0 + 8, 2);
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
