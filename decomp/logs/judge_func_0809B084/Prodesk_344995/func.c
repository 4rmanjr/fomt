#include "common.h"
s32 func_0809B084(void *arg0) {
    s32 *var_r1;
    void *temp_r1;

    temp_r1 = arg0 + 8 + (((arg0->unk8 - 1) * 8) + 4);
    var_r1 = temp_r1 + 4;
    if ((u32) arg0->unk124 >= (u32) temp_r1->unk4) {
        var_r1 = arg0 + 0x124;
    }
    return *var_r1;
}

