#include "common.h"
void *func_0809B018(void *arg0, u32 arg1) {
    u32 temp_r2;

    temp_r2 = arg0->unk8;
    if (arg1 >= temp_r2) {
        return arg0 + 0xC;
    }
    return arg0 + 8 + (((temp_r2 - (arg1 + 1)) * 8) + 4);
}

