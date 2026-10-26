s32 func_080007EC(void *, s32);                       /* extern */
extern ? vtable_unk_080E7934;

void func_080521BC(void *arg0, s32 arg1) {
    void **temp_r1;
    void *temp_r1_2;

    arg0->unk0 = &vtable_unk_080E7934;
    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk4;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}
