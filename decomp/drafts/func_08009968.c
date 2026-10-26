void func_08009968(void *arg1) {
    ? **temp_r2;

    temp_r2 = arg1->unk0;
    if (temp_r2 != 0) {
        *temp_r2 = arg1->unk4;
        *arg1->unk4 = temp_r2;
        arg1->unk0 = 0;
        arg1->unk4 = 0;
    }
}
