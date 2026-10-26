void func_080942BC(void *arg0) {
    ? (*var_r1)(void *);
    ? (*var_r1_2)(void *);
    ? (*var_r2)(void *, s32);
    s16 temp_r2;
    s16 temp_r2_2;
    s16 temp_r2_3;
    s16 temp_r2_4;
    s32 (*var_r1_3)(void *);
    s32 temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    arg0->unk0->unk24(arg0);
    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        arg0->unk4 = temp_r1;
        arg0->unk8 = 0;
        temp_r2 = temp_r1->unk12;
        if ((s32) temp_r2 > 0) {
            var_r1 = *(((temp_r2 * 4) + *(arg0 + temp_r1->unk14)) - 4);
        } else {
            var_r1 = (s32 (*)(void *)) temp_r1->unk14;
        }
        var_r1(arg0 + arg0->unk4->unk10);
        temp_r0 = arg0->unk4;
        temp_r2_2 = temp_r0->unk2;
        if ((s32) temp_r2_2 > 0) {
            var_r1_2 = *(((temp_r2_2 * 4) + *(arg0 + temp_r0->unk4)) - 4);
        } else {
            var_r1_2 = (s32 (*)(void *)) temp_r0->unk4;
        }
        var_r1_2(arg0 + arg0->unk4->unk0);
    }
    temp_r0_2 = arg0->unk4;
    temp_r2_3 = temp_r0_2->unk1A;
    if ((s32) temp_r2_3 > 0) {
        var_r1_3 = *(((temp_r2_3 * 4) + *(arg0 + temp_r0_2->unk1C)) - 4);
    } else {
        var_r1_3 = (s32 (*)(void *)) temp_r0_2->unk1C;
    }
    temp_r3 = var_r1_3(arg0 + arg0->unk4->unk18);
    temp_r0_3 = arg0->unk4;
    temp_r2_4 = temp_r0_3->unkA;
    if ((s32) temp_r2_4 > 0) {
        var_r2 = *(((temp_r2_4 * 4) + *(arg0 + temp_r0_3->unkC)) - 4);
    } else {
        var_r2 = (s32 (*)(void *, s32)) temp_r0_3->unkC;
    }
    var_r2(arg0 + arg0->unk4->unk8, temp_r3);
}
