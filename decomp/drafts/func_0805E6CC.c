extern s32 vtable_unk_080E79C8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    s32 unk24;
    s32 unk26;
    s32 unk28;
    s32 unk2A;
    s32 unk2C;
} GenObj;
void *func_0805E6CC(GenObj *arg0, u16 *arg1) {
    u16 *temp_r1;
    u16 *temp_r1_10;
    u16 *temp_r1_11;
    u16 *temp_r1_12;
    u16 *temp_r1_2;
    u16 *temp_r1_3;
    u16 *temp_r1_4;
    u16 *temp_r1_5;
    u16 *temp_r1_6;
    u16 *temp_r1_7;
    u16 *temp_r1_8;
    u16 *temp_r1_9;

    arg0->unk0 = &vtable_unk_080E79C8;
    if (arg1 != 0) {
        arg0->unk20 = (u16) *arg1;
        temp_r1 = arg1 + 4;
        arg0->unk4 = temp_r1;
        temp_r1_2 = temp_r1 + (arg0->unk20 * 4);
        arg0->unk22 = (u16) *temp_r1_2;
        temp_r1_3 = temp_r1_2 + 4;
        arg0->unk8 = temp_r1_3;
        temp_r1_4 = temp_r1_3 + (arg0->unk22 * 0x10);
        arg0->unk24 = (u16) *temp_r1_4;
        temp_r1_5 = temp_r1_4 + 4;
        arg0->unkC = temp_r1_5;
        temp_r1_6 = temp_r1_5 + (arg0->unk24 * 8);
        arg0->unk26 = (u16) *temp_r1_6;
        temp_r1_7 = temp_r1_6 + 4;
        arg0->unk10 = temp_r1_7;
        temp_r1_8 = temp_r1_7 + (arg0->unk26 << 5);
        arg0->unk28 = (u16) *temp_r1_8;
        temp_r1_9 = temp_r1_8 + 4;
        arg0->unk14 = temp_r1_9;
        temp_r1_10 = temp_r1_9 + (arg0->unk28 << 5);
        arg0->unk2A = (u16) *temp_r1_10;
        temp_r1_11 = temp_r1_10 + 4;
        arg0->unk18 = temp_r1_11;
        temp_r1_12 = temp_r1_11 + (arg0->unk2A * 8);
        arg0->unk2C = (u16) *temp_r1_12;
        arg0->unk1C = (u16 *) (temp_r1_12 + 4);
    } else {
        arg0->unk20 = (u16) arg1;
        arg0->unk4 = arg1;
        arg0->unk22 = (u16) arg1;
        arg0->unk8 = arg1;
        arg0->unk24 = (u16) arg1;
        arg0->unkC = arg1;
        arg0->unk26 = (u16) arg1;
        arg0->unk10 = arg1;
        arg0->unk28 = (u16) arg1;
        arg0->unk14 = arg1;
        arg0->unk2A = (u16) arg1;
        arg0->unk18 = arg1;
        arg0->unk2C = (u16) arg1;
        arg0->unk1C = arg1;
    }
    return arg0;
}
