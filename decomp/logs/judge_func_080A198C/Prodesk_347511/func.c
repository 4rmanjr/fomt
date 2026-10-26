#include "common.h"
s32 memcpy(void *, ? *, s32);                         /* extern */

void *func_080A198C(void *arg0) {
s32 sp0;

    sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | 0x29);
    sp0.unk1 = (u8) ((3 & sp0.unk1) | 0xE0);
    sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | 2);
    sp0.unk3 = (u8) ((3 & sp0.unk3) | 0x20);
    sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | 1);
    memcpy(arg0, &sp0, 6);
    arg0->unk6 = 0;
    return arg0;
}

