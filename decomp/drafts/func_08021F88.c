s32 GetGrowthStage__C5Horse(s32);                   /* extern */
extern u8 gUnk_080F09AC;

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
} GenObj;
u16 func_08021F88(GenObj *arg0, s32 arg1) {
    u8 *base = &gUnk_080F09AC;
    s32 v = GetGrowthStage__C5Horse(arg0->unk34);
    return *(u16 *)(base + (v * 7 + arg1) * 2);
}
