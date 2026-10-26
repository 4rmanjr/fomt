extern ? vtable_unk_080E7748;

void func_0803B6FC(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r4;

    arg0->unk0 = &vtable_unk_080E7748;
    temp_r4 = *arg1;
    *arg1 = 0;
    arg0->unk4 = temp_r4;
    arg0->unk8 = arg2;
}
