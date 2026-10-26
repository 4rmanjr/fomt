extern void *gUnk_03000420;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[44];
    s32 unk3C;
} GenObj;
void func_080D0BA8(GenObj *arg0) {
    void *temp_r4;
    GenObj *temp_r4_2;
    void *temp_r4_3;
    GenObj *temp_r5;

    gUnk_03000420->unk38 = (u32) ((u32) (gUnk_03000420->unk38 + 1) % 10U);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    temp_r4 = gUnk_03000420 + (gUnk_03000420->unk38 << 5);
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 0x3C);
    temp_r5 = (GenObj *)((u8 *)arg0 + 0xC);
    temp_r4->unk3C = (s32) arg0->unk0;
    temp_r4_2->unk4 = (s32) arg0->unk4;
    temp_r4_2->unk8 = (s32) arg0->unk8;
    temp_r4_3 = (GenObj *)((u8 *)temp_r4_2 + 0xC);
    temp_r4_2->unkC = (s32) arg0->unkC;
    temp_r4_3->unk4 = (s32) temp_r5->unk4;
    temp_r4_3->unk8 = (s32) temp_r5->unk8;
    temp_r4_3->unkC = (s32) temp_r5->unkC;
    (temp_r4_3 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r5 + 0xC))->unk4;
}
