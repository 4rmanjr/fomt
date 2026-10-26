#include "common.h"
s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

void func_0809EE4C(void *arg0) {
    u16 temp_r2;

    DayUpdate__3NpcUi(arg0, rand() % 100);
    temp_r2 = arg0->unk14;
    if (0x1C0 & temp_r2) {
        arg0->unk14 = (u16) ((0xFFFFFE3F & temp_r2) | (((((u32) (temp_r2 << 0x17) >> 0x1D) - 1) & 7) << 6));
    }
}

