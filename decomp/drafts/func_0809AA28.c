typedef struct GenObj {
    u8 _pad0[19];
    s32 unk13;
    u8 _pad17[2543];
    s32 unkA06;
} GenObj;
s32 func_0809AA28(GenObj *arg0) {
    s32 var_r3;
    u8 temp_r0;
    u8 var_r1;
    GenObj *var_r2;

    var_r3 = 0;
    temp_r0 = arg0->unkA06;
    if ((s32) temp_r0 > 0) {
        var_r2 = arg0;
        var_r1 = temp_r0;
        do {
            if ((s32) (var_r2->unk13 << 0x1B) < 0) {
                var_r3 += 1;
            }
            var_r2 += 0x14;
            var_r1 -= 1;
        } while (var_r1 != 0);
    }
    return var_r3;
}
