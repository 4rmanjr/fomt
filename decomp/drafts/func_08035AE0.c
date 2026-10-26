typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[6];
    s32 unkE;
} GenObj;
s32 func_08035AE0(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 == 0x1D) && ((s32) arg0->unkE <= 0x37)) {
        var_r2 = 1;
    }
    return var_r2;
}
