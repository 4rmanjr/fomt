s32 GetGrowthStage__C5Horse(s32);                   /* extern */
extern s32 gUnk_080F09AC;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_08021F88(GenObj *arg0, s32 arg1) {
    return *((((GetGrowthStage__C5Horse(arg0->unk34) * 7) + arg1) * 2) + &gUnk_080F09AC);
}
