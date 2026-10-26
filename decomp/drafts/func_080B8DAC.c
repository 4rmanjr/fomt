extern ? gUnk_08107ACC;
extern ? gUnk_08107AFC;

u16 func_080B8DAC(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
    u8 var_r3;

    var_r3 = arg3;
    if (var_r3 == 1) {
        var_r3 = arg0->unkB18 + 1;
    }
    return (u16) (*((arg1 * 2) + (var_r3 * 0xC) + &gUnk_08107ACC) + *(arg2 + &gUnk_08107AFC));
}
