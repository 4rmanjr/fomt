s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E596C(void *arg0, s32 arg1) {
    void *temp_r1;
    void *temp_r1_2;

    func_08050D0C(arg0 + 0x80, 2);
    temp_r1 = arg0->unk7C;
    if (temp_r1 != 0) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk78;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}
