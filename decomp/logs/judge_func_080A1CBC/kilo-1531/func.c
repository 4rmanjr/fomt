#include "common.h"
extern ? gUnk_081043BC;

void *func_080A1CBC(void *arg0, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 spC;
    s32 temp_r0;
    s32 var_r0;
    void *temp_r2;

    temp_r0 = arg2 * 0xC;
    temp_r2 = temp_r0 + &gUnk_081043BC;
    sp0 = temp_r2->unk0;
    sp4 = *(temp_r0 + (&gUnk_081043BC + 4));
    sp0.unk8 = (u16) temp_r2->unk8;
    sp0.unkA = (u16) temp_r2->unkA;
    switch (sp0) {                                  /* irregular */
    case 21:
    case 19:
        var_r0 = 1;
        break;
    case 20:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    spC = var_r0;
    arg0->unk0 = (s32) sp0.unk0;
    arg0->unk4 = (s32) sp0.unk4;
    arg0->unk8 = (s32) sp0.unk8;
    arg0->unkC = (s32) sp0.unkC;
    return arg0;
}

