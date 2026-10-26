#include "common.h"
void *__builtin_new(s32);                           /* extern */

void **func_08009300(void **arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = __builtin_new(0x10);
    temp_r0->unk0 = arg1;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unkE = 0;
    *arg0 = temp_r0;
    return arg0;
}

