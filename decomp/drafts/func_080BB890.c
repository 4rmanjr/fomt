extern s32 gUnk_08107D3C;
extern s32 gUnk_08107D46;
extern s32 gUnk_08107D66;

typedef struct GenObj {
    u8 _pad0[2840];
    s32 unkB18;
} GenObj;
u16 func_080BB890(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_r1;
    s32 var_r0;
    s32 var_r2;

    var_r2 = arg2;
    if (arg1 != 1) {
        if (arg1 <= 1) {
            if (arg1 != 0) {
                return 0U;
            }
            var_r1 = &gUnk_08107D3C;
            var_r0 = var_r2 * 2;
            goto block_11;
        }
        if (arg1 != 2) {
            return 0U;
        }
        var_r1 = &gUnk_08107D66;
        var_r0 = arg3 * 2;
block_11:
        return *((u8 *)var_r0 + var_r1);
    }
    if (var_r2 != 0) {
        var_r2 += arg0->unkB18;
    }
    return *((arg3 * 2) + (var_r2 * 8) + &gUnk_08107D46);
}
