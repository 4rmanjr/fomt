typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
} GenObj;
u32 func_0809EB8C(GenObj *arg0) {
    u32 var_r2;
    u8 temp_r1;

    var_r2 = 0;
    temp_r1 = arg0->unk14;
    if (((temp_r1 << 0x1C) != 0) && (0x70 & temp_r1)) {
        var_r2 = temp_r1 >> 7;
    }
    return var_r2;
}
