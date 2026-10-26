#include "common.h"
s32 func_080120A4(void *arg0) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    var_r1 = 0;
    if (temp_r0 != 0) {
        var_r1 = temp_r0->unk8;
    }
    return var_r1 >> 0x10;
}

