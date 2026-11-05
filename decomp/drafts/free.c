typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
} GenObj;
void free(void *arg0) {
    GenObj *var_r3;
    GenObj *temp_r0;
    GenObj *temp_r1;
    GenObj *temp_r2;
    GenObj *temp_r2_2;

    if (arg0 != 0) {
        var_r3 = arg0 - 0x10;
        temp_r2 = var_r3->unk8;
        if ((temp_r2 != 0) && (temp_r2->unk4 == 0)) {
            temp_r2->unk0 = temp_r2->unk0 + 0x10 + var_r3->unk0;
            temp_r2->unkC = var_r3->unkC;
            temp_r0 = var_r3->unkC;
            if (temp_r0 != 0) {
                temp_r0->unk8 = temp_r2;
            }
            var_r3 = temp_r2;
        }
        temp_r2_2 = var_r3->unkC;
        if ((temp_r2_2 != 0) && (temp_r2_2->unk4 == 0)) {
            var_r3->unk0 = var_r3->unk0 + 0x10 + temp_r2_2->unk0;
            var_r3->unkC = temp_r2_2->unkC;
            temp_r1 = temp_r2_2->unkC;
            if (temp_r1 != 0) {
                temp_r1->unk8 = var_r3;
            }
        }
        var_r3->unk4 = 0;
    }
}
