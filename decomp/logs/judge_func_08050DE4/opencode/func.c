#include "common.h"
u8 func_08050DE4(void **arg0) {
    u8 temp_r0;
    void *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unkD;
    temp_r2->unkD = 1U;
    return temp_r0;
}

