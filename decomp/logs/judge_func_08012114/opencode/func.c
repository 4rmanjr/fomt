#include "common.h"
u8 func_08012114(void *arg0) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        return temp_r0->unk20;
    }
    return 0U;
}

