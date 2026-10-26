s32 CpuFastSet(void *, void *, s32);                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk15;
    s32 unk16;
} GenObj;
s32 func_080E0A08(GenObj *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    GenObj *var_r3;
    GenObj *var_r4;

    var_r4 = arg0->unkC;
    var_r3 = arg0->unk10;
    if (arg0->unk15 != 0) {
        temp_r5 = var_r3 + (arg0->unk14 << 5);
        temp_r0 = arg0->unk16 ^ 1;
        arg0->unk16 = temp_r0;
        temp_r2 = 0x0F0F0F0F << (temp_r0 * 4);
        temp_r1 = ~temp_r2;
        do {
            temp_r4 = (GenObj *)((u8 *)var_r4 + 4);
            var_r3->unk0 = (s32) (var_r4->unk0 & temp_r2);
            temp_r3 = (GenObj *)((u8 *)var_r3 + 4);
            temp_r4_2 = temp_r4 + 4;
            var_r3->unk4 = (s32) (var_r4->unk4 & temp_r1);
            temp_r3_2 = temp_r3 + 4;
            temp_r4_3 = temp_r4_2 + 4;
            temp_r3->unk4 = (s32) (temp_r4->unk4 & temp_r2);
            temp_r3_3 = temp_r3_2 + 4;
            temp_r4_4 = temp_r4_3 + 4;
            temp_r3_2->unk4 = (s32) (temp_r4_2->unk4 & temp_r1);
            temp_r3_4 = temp_r3_3 + 4;
            temp_r4_5 = temp_r4_4 + 4;
            temp_r3_3->unk4 = (s32) (temp_r4_3->unk4 & temp_r2);
            temp_r3_5 = temp_r3_4 + 4;
            temp_r4_6 = temp_r4_5 + 4;
            temp_r3_4->unk4 = (s32) (temp_r4_4->unk4 & temp_r1);
            temp_r3_6 = temp_r3_5 + 4;
            temp_r3_5->unk4 = (s32) (temp_r4_5->unk4 & temp_r2);
            var_r4 = temp_r4_6 + 4 + 4;
            temp_r3_6->unk4 = (s32) (temp_r4_6->unk4 & temp_r1);
            var_r3 = temp_r3_6 + 4 + 4;
        } while (var_r3 != temp_r5);
        return 1;
    }
    CpuFastSet(var_r4, var_r3, arg0->unk14 * 8);
    return 0;
}
