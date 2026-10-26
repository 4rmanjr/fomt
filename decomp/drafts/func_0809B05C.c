typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[276];
    s32 unk120;
} GenObj;
u32 func_0809B05C(GenObj *arg0) {
    u32 *var_r1;

    var_r1 = arg0 + 8 + (((arg0->unk8 - 1) * 8) + 4);
    if ((u32) arg0->unk120 >= (u32) *var_r1) {
        var_r1 = arg0 + 0x120;
    }
    return *var_r1;
}
