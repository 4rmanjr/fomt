#include "common.h"
u16 GetIconId__C4Food();                            /* extern */
s32 func_080CC728(s32, s32, ? *, u16);                /* extern */
extern ? gUnk_086678A0;

u8 sub_080895C2(s32 arg10) {
    u16 temp_r3;

    temp_r3 = GetIconId__C4Food();
    arg4 = arg10;
    func_080CC728(saved_reg_r5, saved_reg_r4, &gUnk_086678A0, temp_r3);
    return arg10;
}

