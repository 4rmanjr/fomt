s32 GetGrowthStage__C7Chicken(s32);                 /* extern */
extern ? gUnk_080F0A68;

u16 func_08022980(void *arg0, s32 arg1) {
    return *((((GetGrowthStage__C7Chicken(arg0->unk34) * 5) + arg1) * 2) + &gUnk_080F0A68);
}
