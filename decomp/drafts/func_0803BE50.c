s32 __builtin_delete(void *);                         /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_080098DC(s32, s32);                          /* extern */
extern ? vtable_unk_080E7778;

void func_0803BE50(void *arg0, s32 arg1) {
    void *temp_r4;

    arg0->unk4 = &vtable_unk_080E7778;
    temp_r4 = arg0->unk0;
    if (temp_r4 != 0) {
        func_080098AC(temp_r4 + 0x44, 2);
        func_080098AC(temp_r4 + 0x2C, 2);
        func_080098DC(temp_r4 + 0x10, 2);
        __builtin_delete(temp_r4);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
