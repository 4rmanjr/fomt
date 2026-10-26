#include "common.h"
s32 GetId__C4Tool(s8 *);                            /* extern */

s32 func_080913B0(s8 arg1) {
    s8 sp0;

    sp0 = arg1;
    if ((GetId__C4Tool() <= 0x2F) && ((7 & GetId__C4Tool(&sp0)) == 5)) {
        return 1;
    }
    return 0;
}

