s32 GetGrowthStage__C5Horse(s32);                   /* extern */
extern ? gUnk_080F09AC;

u16 func_08021F88(void *arg0, s32 arg1) {
    return *((((GetGrowthStage__C5Horse(arg0->unk34) * 7) + arg1) * 2) + &gUnk_080F09AC);
}
