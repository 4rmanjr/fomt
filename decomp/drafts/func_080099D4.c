void func_080099D4(void *arg0, void *arg1) {
    s32 *temp_r1;
    s32 *temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = arg0->unkC;
    arg0->unkC = (s32) arg1->unkC;
    arg1->unkC = temp_r3;
    temp_r2 = arg0->unk10;
    temp_r1 = arg1->unk10;
    temp_r3_2 = *temp_r2;
    *temp_r2 = *temp_r1;
    *temp_r1 = temp_r3_2;
}
