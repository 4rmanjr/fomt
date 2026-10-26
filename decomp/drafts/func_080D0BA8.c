extern void *gUnk_03000420;

void func_080D0BA8(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;

    gUnk_03000420->unk38 = (u32) ((u32) (gUnk_03000420->unk38 + 1) % 10U);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    temp_r4 = gUnk_03000420 + (gUnk_03000420->unk38 << 5);
    temp_r4_2 = temp_r4 + 0x3C;
    temp_r5 = arg0 + 0xC;
    temp_r4->unk3C = (s32) arg0->unk0;
    temp_r4_2->unk4 = (s32) arg0->unk4;
    temp_r4_2->unk8 = (s32) arg0->unk8;
    temp_r4_3 = temp_r4_2 + 0xC;
    temp_r4_2->unkC = (s32) arg0->unkC;
    temp_r4_3->unk4 = (s32) temp_r5->unk4;
    temp_r4_3->unk8 = (s32) temp_r5->unk8;
    temp_r4_3->unkC = (s32) temp_r5->unkC;
    (temp_r4_3 + 0xC)->unk4 = (s32) (temp_r5 + 0xC)->unk4;
}
