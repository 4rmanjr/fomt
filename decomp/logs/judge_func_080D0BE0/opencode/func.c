#include "common.h"
extern void *gUnk_0300041C;
extern void *gUnk_03000420;

void func_080D0BE0(void) {
    u32 temp_r0;
    u32 temp_r1;

    temp_r1 = gUnk_03000420->unk34;
    if (temp_r1 != gUnk_03000420->unk38) {
        temp_r0 = (u32) (temp_r1 + 1) % 10U;
        gUnk_03000420->unk34 = temp_r0;
        gUnk_0300041C = gUnk_03000420 + ((temp_r0 << 5) + 0x3C);
    }
}

