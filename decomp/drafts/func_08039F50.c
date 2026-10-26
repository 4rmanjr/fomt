s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
extern ? vtable_unk_080E76BC;

void func_08039F50(void *arg0, s32 arg1) {
    void *temp_r1;

    arg0->unk4C = &vtable_unk_080E76BC;
    temp_r1 = arg0->unk48;
    if (temp_r1 != 0) {
        temp_r1->unk24->unk8(temp_r1, 3);
    }
    func_080A47B4(arg0 + 8, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
