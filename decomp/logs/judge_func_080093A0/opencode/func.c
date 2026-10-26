#include "common.h"
s16 func_080093A0(void **arg0, u16 arg1) {
    u16 temp_r0;
    void *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unk4;
    temp_r2->unk4 = arg1;
    return (s16) temp_r0;
}

