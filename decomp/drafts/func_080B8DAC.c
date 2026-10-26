extern s32 gUnk_08107ACC;
extern s32 gUnk_08107AFC;

typedef struct GenObj {
    u8 _pad0[2840];
    s32 unkB18;
} GenObj;
u16 func_080B8DAC(GenObj *arg0, s32 arg1, s32 arg2, u8 arg3) {
    u8 var_r3;

    var_r3 = arg3;
    if (var_r3 == 1) {
        var_r3 = arg0->unkB18 + 1;
    }
    return (u16) (*((arg1 * 2) + (var_r3 * 0xC) + &gUnk_08107ACC) + *((u8 *)arg2 + &gUnk_08107AFC));
}
