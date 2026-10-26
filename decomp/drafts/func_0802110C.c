s32 GetGrowthStage__C3Dog(s32);                     /* extern */
extern ? gUnk_080F0908;

u16 func_0802110C(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1 * 2;
    if (GetGrowthStage__C3Dog(arg0->unk34) == 1) {
        var_r4 += 0x1A;
    }
    return *(var_r4 + &gUnk_080F0908);
}
