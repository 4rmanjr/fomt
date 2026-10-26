typedef struct GenObj {
    s32 unk0;
    u8 _pad4[2];
    s32 unk6;
    u8 _padA[2];
    s32 unkC;
} GenObj;
void func_0809C144(void *arg0) {
    u32 var_r3;
    GenObj *var_r1;

    var_r3 = 0;
    var_r1 = arg0;
    do {
        var_r1->unk0 = 0;
        var_r1->unkC = 0;
        var_r1->unk6 = 0;
        var_r1 += 1;
        var_r3 += 1;
    } while (var_r3 <= 5U);
}
