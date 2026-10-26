s32 GetDesc__C4Food(s32 *);                           /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(void *, s32);                       /* extern */
extern s32 gUnk_080FE2D8;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_0807EF14(GenObj *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r2;

    temp_r2 = arg0 + 0x2A4;
    if (*((*(temp_r2 + ((arg0->unk10 * 4) + 4)) * 0x1C) + (&gUnk_080FE2D8 + 0xC)) == 0) {
        __4FoodUi(&sp0, *((*(temp_r2 + ((arg1 * 4) + 4)) * 0x1C) + &gUnk_080FE2D8));
        func_080CABEC(arg0, GetDesc__C4Food(&sp0));
        return;
    }
    func_080CABEC(arg0, *((*(temp_r2 + ((arg1 * 4) + 4)) * 0x1C) + (&gUnk_080FE2D8 + 8)));
}
