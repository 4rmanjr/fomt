#include "common.h"
s32 func_08033B24();                                /* extern */

s32 func_08015920(void *arg0, s32 arg1) {
    void **temp_r0;

    if ((u32) (arg1 - 0x24) <= 6U) {
        temp_r0 = arg0->unk4->unkA8;
        if ((*temp_r0)->unk40(temp_r0, arg1) != 0) {
            return func_08033B24();
        }
    }
    return 0;
}

