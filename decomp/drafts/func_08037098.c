typedef struct GenObj {
    u8 _pad0[24];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} GenObj;
void func_08037098(GenObj *arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r5;
    u8 temp_r0;

    var_r4 = 0;
    var_r5 = 0;
    temp_r0 = arg0->unk20;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r5 = arg1;
        break;
    case 1:
        var_r5 = 0 - arg1;
        break;
    case 2:
        var_r4 = 0 - arg1;
        break;
    case 3:
        var_r4 = arg1;
        break;
    }
    arg0->unk18 = var_r4;
    arg0->unk1C = var_r5;
}
