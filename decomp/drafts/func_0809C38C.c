typedef struct GenObj {
    u8 _pad0[6];
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} GenObj;
u32 func_0809C38C(GenObj *arg0) {
    u32 var_r2;

    var_r2 = 0;
    if ((arg0->unk7 != 0) && (arg0->unk6 != 0) && (arg0->unk8 != 0) && (arg0->unk9 != 0) && (arg0->unkA != 0)) {
        var_r2 = (u32) (0 - arg0->unkB) >> 0x1F;
    }
    return var_r2;
}
