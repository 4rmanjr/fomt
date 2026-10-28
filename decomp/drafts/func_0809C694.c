typedef struct GenObj {
    u8 _pad0[12];
    u16 unkC;
} GenObj;
s32 func_0809C694(GenObj *arg0, u16 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0->unkC == arg1) {
        var_r2 = 1;
    }
    return var_r2;
}
