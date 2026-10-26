#include "common.h"
s32 memcpy(void *, ? *, s32);                         /* extern */

void *func_080D40CC(void *arg0) {
s32 sp0;

    sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | 0x234);
    sp0.unk1 = (u8) (3 & sp0.unk1);
    sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
    sp0.unk3 = (u8) (3 & sp0.unk3);
    sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
    memcpy(arg0, &sp0, 6);
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkA = 0;
    return arg0;
}

