#include "common.h"
u8 func_080E38E0(void *arg0) {
    if (arg0->unk1B8 != 0) {
        return arg0->unk1B9;
    }
    if (arg0->unk0->unk4C(arg0) != 0) {
        return 0U;
    }
    return 1U;
}

