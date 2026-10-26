#include "common.h"
void func_0801FD0C(s32 arg0, s32 arg1) {
    void **temp_r4;
    void *temp_r1;

    temp_r4 = arg0 + 8 + (arg1 * 4);
    temp_r1 = *temp_r4;
    if (temp_r1 != 0) {
        temp_r1->unk14->unk8(temp_r1, 3);
        *temp_r4 = 0;
    }
}

