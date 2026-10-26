typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkA;
    struct GenObj *unkC;
    struct GenObj *unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 _pad20[2];
    s32 unk22;
} GenObj;
void *func_0805E790(GenObj *arg0, GenObj *arg1, u32 arg2) {
    GenObj *temp_r0;
    GenObj *temp_r1;
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
        temp_r1 = (GenObj *)((u8 *)arg0 + 8);
        arg0->unk8 = 0;
        temp_r1->unk4 = 0;
        temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 8);
        arg0->unk10 = 0;
        temp_r1_2->unk4 = 0;
        arg0->unk18 = 0;
        (temp_r1_2 + 8)->unk4 = 0;
    }
    return arg0;
}
