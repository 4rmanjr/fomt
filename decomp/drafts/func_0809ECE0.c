typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
} GenObj;
s32 func_0809ECE0(GenObj *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (((arg0->unk14 << 0x1A) != 0) && !(0x1C0 & (u16) arg0->unk14)) {
        var_r2 = 1;
    }
    return var_r2;
}
