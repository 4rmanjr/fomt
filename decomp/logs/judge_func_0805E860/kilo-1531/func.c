#include "common.h"
void func_0805E860(void *arg0, s32 arg1) {
    void *sp0;
    void **temp_r1;

    temp_r1 = arg0->unk0;
    (*temp_r1)->unkC(&sp0, temp_r1, arg1);
    arg0->unk4 = sp0;
    arg0->unk8 = sp4;
    arg0->unkC = 0;
    arg0->unkE = (s16) (arg0->unk4->unk2 << 8);
    arg0->unk12 = 1;
}

