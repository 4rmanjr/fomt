void func_080ADD08(void *arg0, void **arg1) {
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;

    temp_r1 = *arg1;
    temp_r1_2 = temp_r1 + 0xC;
    arg0->unk0 = (s32) temp_r1->unk0;
    arg0->unk4 = (s32) temp_r1->unk4;
    arg0->unk8 = (s32) temp_r1->unk8;
    temp_r2 = arg0 + 0xC;
    arg0->unkC = (s32) temp_r1->unkC;
    temp_r2->unk4 = (s32) temp_r1_2->unk4;
    temp_r2->unk8 = (s32) temp_r1_2->unk8;
    temp_r2->unkC = (s32) temp_r1_2->unkC;
    (temp_r2 + 0xC)->unk4 = (s32) (temp_r1_2 + 0xC)->unk4;
}
