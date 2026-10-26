typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
u16 func_08012134(GenObj *arg0) {
    u16 var_r1;
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    var_r1 = 0x234;
    if (temp_r0 != 0) {
        var_r1 = temp_r0->unk4;
    }
    return var_r1;
}
