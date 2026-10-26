s32 GetGrowthStage__C7Chicken(s32);                 /* extern */
extern s32 gUnk_080F0A68;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_08022980(GenObj *arg0, s32 arg1) {
    return *((((GetGrowthStage__C7Chicken(arg0->unk34) * 5) + arg1) * 2) + &gUnk_080F0A68);
}
