s32 func_080007EC(void *, s32);                       /* extern */
extern ? vtable_unk_080E850C;

void func_080B3C0C(void *arg0, s32 arg1) {
    void *temp_r1;

    arg0->unk0 = &vtable_unk_080E850C;
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
