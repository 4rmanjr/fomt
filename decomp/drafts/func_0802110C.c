s32 GetGrowthStage__C3Dog(s32);                     /* extern */
extern s32 gUnk_080F0908;

typedef struct GenObj {
    u8 _pad0[0x34];
    s32 unk34;
} GenObj;
u16 func_0802110C(GenObj *arg0, s32 arg1) {
    s32 i;
    u8 *tbl;

    i = arg1;
    tbl = (u8 *) &gUnk_080F0908;
    i *= 2;
    if (GetGrowthStage__C3Dog(arg0->unk34) == 1) {
        i += 0x1A;
    }
    return *(u16 *) (tbl + i);
}
