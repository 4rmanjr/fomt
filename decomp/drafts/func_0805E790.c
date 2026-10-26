void *func_0805E790(void *arg0, void *arg1, u32 arg2) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    if (arg2 < (u32) arg1->unk22) {
        temp_r0 = arg1->unk8 + (arg2 * 0x10);
        arg0->unk0 = (s32) ((temp_r0->unk2 * 8) + arg1->unkC);
        arg0->unk4 = (u16) temp_r0->unk0;
        arg0->unk8 = (s32) ((temp_r0->unk6 << 5) + arg1->unk10);
        arg0->unkC = (s16) (temp_r0->unk4 << 5);
        arg0->unk10 = (s32) ((temp_r0->unkA << 5) + arg1->unk14);
        arg0->unk14 = (s16) (temp_r0->unk8 << 5);
        arg0->unk18 = (s32) ((temp_r0->unkE * 8) + arg1->unk18);
        arg0->unk1C = (u16) temp_r0->unkC;
    } else {
        arg0->unk0 = 0;
        arg0->unk4 = 0U;
        temp_r1 = arg0 + 8;
        arg0->unk8 = 0;
        temp_r1->unk4 = 0;
        temp_r1_2 = temp_r1 + 8;
        arg0->unk10 = 0;
        temp_r1_2->unk4 = 0;
        arg0->unk18 = 0;
        (temp_r1_2 + 8)->unk4 = 0;
    }
    return arg0;
}
