#include "common.h"
s32 GetId__C7Article(s8 *);                         /* extern */

s32 func_080913DC(s8 arg1) {
    s8 sp0;

    sp0 = arg1;
    if ((GetId__C7Article() == 0x12) || (GetId__C7Article(&sp0) == 0x13) || (GetId__C7Article(&sp0) == 0x14) || (GetId__C7Article(&sp0) == 0x15) || (GetId__C7Article(&sp0) == 0x1C)) {
        return 1;
    }
    return 0;
}

