typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk6;
} GenObj;
s32 func_080ADF40(GenObj *arg0) {
    u16 temp_r0;
    u16 temp_r1;
    u16 var_r3;

    temp_r0 = arg0->unk6;
    temp_r1 = temp_r0 + arg0->unk4;
    var_r3 = 0;
    if (0xFF & temp_r1) {
        var_r3 = temp_r1;
    }
    arg0->unk6 = var_r3;
    return ((s32) temp_r1 >> 8) - ((s32) temp_r0 >> 8);
}
