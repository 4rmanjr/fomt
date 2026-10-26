#include "common.h"
void func_080BA734(void *arg0) {
    if ((s32) arg0->unk84 < 0) {
        if ((u32) ((u16) arg0->unk8C >> 8) <= 0x47U) {
            arg0->unk95 = 2;
        }
        arg0->unk8C = (u16) (arg0->unk8C + 0x300);
        arg0->unkB14 = 3;
        arg0->unkB40 = 0;
        arg0->unkB44 = 3;
        arg0->unkB50 = 1;
        return;
    }
    if ((s32) arg0->unkC4 < 0) {
        if ((u32) ((u16) arg0->unk8C >> 8) <= 0x47U) {
            arg0->unkD5 = 2;
        }
        arg0->unkCC = (u16) (arg0->unkCC + 0x300);
        arg0->unkB14 = 3;
        arg0->unkB44 = 1;
        arg0->unkB40 = 3;
        arg0->unkB50 = 1;
    }
}

