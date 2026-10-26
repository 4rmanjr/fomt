#include "common.h"
s32 GetDesc__C4Food(s32 *);                           /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(void *, s32);                       /* extern */
extern ? gUnk_080FEB60;

void func_08081B40(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r2;

    temp_r2 = arg0 + 0x2A4;
    if (*((*(temp_r2 + ((arg0->unk10 * 4) + 4)) * 0x1C) + (&gUnk_080FEB60 + 0xC)) == 0) {
        __4FoodUi(&sp0, *((*(temp_r2 + ((arg1 * 4) + 4)) * 0x1C) + &gUnk_080FEB60));
        func_080CABEC(arg0, GetDesc__C4Food(&sp0));
        return;
    }
    func_080CABEC(arg0, *((*(temp_r2 + ((arg1 * 4) + 4)) * 0x1C) + (&gUnk_080FEB60 + 8)));
}

