#include "common.h"
void func_0803D404(void **arg0, u16 arg1) {
    void *temp_r2;

    temp_r2 = *arg0;
    if ((temp_r2->unk2F1 == 0) || (arg1 != temp_r2->unk2F2)) {
        temp_r2->unk2F1 = 1U;
        temp_r2->unk2F2 = arg1;
        temp_r2->unk334 = 1;
    }
}

