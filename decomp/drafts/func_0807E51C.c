s32 GetDesc__C4Food(s32 *);                           /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(s32, s32);                          /* extern */
extern s32 gUnk_080FE050;

void func_0807E51C(s32 arg0, s32 arg1) {
s32 sp0;

    __4FoodUi(&sp0, *((((arg1 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FE050));
    func_080CABEC(arg0, GetDesc__C4Food(&sp0));
}
