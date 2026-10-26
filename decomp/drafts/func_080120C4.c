typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[4];
    s32 unkC;
    u8 _pad10[152];
    s32 unkA8;
} GenObj;
s32 func_080120C4(GenObj *arg0) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    var_r1 = 0;
    if (temp_r0 != 0) {
        var_r1 = temp_r0->unkC;
    }
    return var_r1 >> 0x10;
}
