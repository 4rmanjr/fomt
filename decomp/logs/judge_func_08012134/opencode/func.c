#include "common.h"
u16 func_08012134(void *arg0) {
    u16 var_r1;
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    var_r1 = 0x234;
    if (temp_r0 != 0) {
        var_r1 = temp_r0->unk4;
    }
    return var_r1;
}

