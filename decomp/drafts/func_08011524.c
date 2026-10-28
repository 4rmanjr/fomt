typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 unk8;
} GenObj;
s32 func_08011524(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 != 0x10) && (arg0->unk8 == 0)) {
        var_r2 = 1;
    }
    return var_r2;
}
