typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
} GenObj;
void func_080ADD08(GenObj *arg0, void **arg1) {
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r2;

    temp_r1 = *arg1;
    temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 0xC);
    arg0->unk0 = (s32) temp_r1->unk0;
    arg0->unk4 = (s32) temp_r1->unk4;
    arg0->unk8 = (s32) temp_r1->unk8;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0xC);
    arg0->unkC = (s32) temp_r1->unkC;
    temp_r2->unk4 = (s32) temp_r1_2->unk4;
    temp_r2->unk8 = (s32) temp_r1_2->unk8;
    temp_r2->unkC = (s32) temp_r1_2->unkC;
    ((GenObj *)((u8 *)temp_r2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4;
}
