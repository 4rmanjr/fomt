typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[24];
    s32 unk20;
    struct GenObj *unk22;
    struct GenObj *unk24;
} GenObj;
void func_08094388(GenObj *arg0) {
    ? (*var_r1)(void *);
    s16 temp_r3;
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r3 = temp_r0->unk22;
    if ((s32) temp_r3 > 0) {
        var_r1 = *(((temp_r3 * 4) + *(arg0 + temp_r0->unk24)) - 4);
    } else {
        var_r1 = (s32 (*)(void *)) temp_r0->unk24;
    }
    var_r1(arg0 + arg0->unk4->unk20);
}
