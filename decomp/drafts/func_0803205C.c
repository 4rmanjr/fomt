typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
s32 func_0803205C(GenObj *arg0) {
    s32 var_r1;
    u8 temp_r0;

    var_r1 = 0;
    temp_r0 = arg0->unk3C;
    if ((temp_r0 == 7) || (temp_r0 == 0x2D)) {
        var_r1 = 1;
    }
    return var_r1;
}
