#include "common.h"
s32 func_080390D0();                                /* extern */

s32 func_0803880C(void *arg0) {
    if (arg0->unk10 == 0) {
        return 0;
    }
    return func_080390D0();
}

