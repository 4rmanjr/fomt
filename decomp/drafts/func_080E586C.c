s32 free();                                           /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
} GenObj;
void func_080E586C(GenObj *arg0) {
    GenObj *temp_r0;
    s32 *temp_r0_2;
    GenObj *temp_r0_3;
    s32 *var_r4;

    temp_r0 = arg0->unk4;
    var_r4 = temp_r0->unk0;
    if (var_r4 != temp_r0) {
        do {
            temp_r0_2 = var_r4;
            var_r4 = *var_r4;
            if (temp_r0_2 != 0) {
                free();
            }
        } while (var_r4 != arg0->unk4);
    }
    temp_r0_3 = arg0->unk4;
    temp_r0_3->unk0 = temp_r0_3;
    temp_r0_3->unk4 = temp_r0_3;
}
