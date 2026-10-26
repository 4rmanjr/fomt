typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
} GenObj;
void *func_080E2354(void *arg0) {
    void *temp_r0;
    GenObj *var_r1;
    void *var_r2;
    GenObj *var_r2_2;

    var_r2_2 = arg0;
    if ((var_r2_2->unk0 == 0) && (var_r2_2->unk4->unk4 == var_r2_2)) {
        var_r2 = var_r2_2->unkC;
    } else {
        temp_r0 = var_r2_2->unk8;
        if (temp_r0 != 0) {
            var_r1 = temp_r0;
loop_6:
            if (var_r1->unkC != 0) {
                var_r1 = var_r1->unkC;
                goto loop_6;
            }
        } else {
loop_9:
            var_r1 = var_r2_2->unk4;
            if (var_r2_2 == var_r1->unk8) {
                var_r2_2 = var_r1;
                goto loop_9;
            }
        }
        var_r2 = var_r1;
    }
    return var_r2;
}
