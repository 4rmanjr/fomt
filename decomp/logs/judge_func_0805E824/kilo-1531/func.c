#include "common.h"
void *func_0805E824(void *arg0, void **arg1, s16 arg3) {
    arg0->unk0 = arg1;
    (*arg1)->unkC(arg0 + 4);
    arg0->unkC = 0;
    arg0->unkE = (s16) (arg0->unk4->unk2 << 8);
    arg0->unk10 = arg3;
    arg0->unk12 = 1;
    return arg0;
}

