typedef struct GenObj {
    u8 _pad0[252];
    s32 unkFC;
    u8 _pad100[40];
    s32 unk128;
} GenObj;
u32 func_0809B0B0(GenObj *arg0) {
    u32 *var_r1;

    var_r1 = arg0 + 0xFC + (((arg0->unkFC - 1) * 8) + 4);
    if ((u32) arg0->unk128 >= (u32) *var_r1) {
        var_r1 = arg0 + 0x128;
    }
    return *var_r1;
}
