#include "common.h"
s32 memcpy(s32, s32 *, s32);                          /* extern */

s32 func_080ABA3C(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp14;
s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;

    sp0 = 0;
    sp4 = 0;
    sp8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp0.unk12 = 0;
    sp0.unk13 = 0;
    sp14 = 0;
    sp14.unk4 = 0;
    sp14.unk8 = 0;
    sp14.unkA = 0;
    sp20.unk0 = 0;
    sp20.unk2 = 0;
    sp20.unk4 = 0;
    sp20.unk6 = 0;
    sp28 = 1;
    sp2C = 0;
    sp30 = 0;
    sp0.unk10 = 1;
    sp0.unk11 = 1;
    sp0.unk12 = 1;
    sp0.unk13 = 1;
    memcpy(arg0, &sp0, 0x34);
    return arg0;
}

