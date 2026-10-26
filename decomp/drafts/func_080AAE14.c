s32 func_080DC57C(void *, s32);                       /* extern */

void func_080AAE14(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    temp_r4 = arg0 + 8;
    if (temp_r4->unk8 != 0) {
        func_080DC57C(temp_r4, temp_r4->unk4->unk4);
        temp_r0 = temp_r4->unk4;
        temp_r0->unk8 = temp_r0;
        temp_r4->unk4->unk4 = 0;
        temp_r0_2 = temp_r4->unk4;
        temp_r0_2->unkC = temp_r0_2;
        temp_r4->unk8 = 0;
    }
}
