typedef struct GenObj {
    u8 _pad0[6];
    s32 unk6;
    s32 unk7;
    s32 unk8;
    s32 unk9;
    s32 unkA;
    s32 unkB;
} GenObj;
u32 func_0809C38C(GenObj *arg0) {
    u32 var_r2;

    var_r2 = 0;
    if ((arg0->unk7 != 0) && (arg0->unk6 != 0) && (arg0->unk8 != 0) && (arg0->unk9 != 0) && (arg0->unkA != 0)) {
        var_r2 = (u32) (0 - arg0->unkB) >> 0x1F;
    }
    return var_r2;
}
