typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[8];
    s32 unk10;
    u8 _pad14[12];
    s32 unk20;
} GenObj;
void *func_080E2094(GenObj *arg0) {
    GenObj *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;

    arg0->unk0 = 0;
    arg0->unk4 = 0;
    temp_r1 = (GenObj *)((u8 *)arg0 + 8);
    temp_r1->unk4 = 0;
    temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 8);
    arg0->unk10 = 0;
    temp_r1_2->unk4 = 0;
    temp_r1_3 = temp_r1_2 + 8;
    temp_r1_3->unk4 = 0;
    temp_r1_4 = temp_r1_3 + 8;
    arg0->unk20 = 0;
    temp_r1_4->unk4 = 0;
    (temp_r1_4 + 8)->unk4 = 0;
    return arg0;
}
