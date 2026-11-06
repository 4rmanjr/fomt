extern s32 gUnk_08107ACC;
extern s32 gUnk_08107AFC;

typedef struct GenObj {
    u8 _pad0[2840];
    s32 unkB18;
} GenObj;
u16 func_080B8DAC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 var_r3;

    var_r3 = (u8) arg3;
    if (var_r3 == 1) {
        var_r3 = (u8) (arg0->unkB18 + 1);
    }
    return *(u16 *) ((u8 *) &gUnk_08107ACC + arg1 * 2 + var_r3 * 0xC)
         + *(u8 *) ((u8 *) &gUnk_08107AFC + arg2);
}
