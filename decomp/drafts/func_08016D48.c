extern void *gUnk_0300040C;

void func_08016D48(void *arg0) {
    u16 temp_r3;
    void **temp_r0;
    void *temp_r1;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r0 = temp_r4->unkA8;
    temp_r1 = gUnk_0300040C + 0x36C;
    temp_r3 = (*temp_r0)->unk40(temp_r0, 0)->unk4;
    gUnk_0300040C->unk36C = 1;
    temp_r1->unk4 = (s32) temp_r3;
    temp_r1->unk8 = (u16) temp_r4->unk8C->unk12;
}
